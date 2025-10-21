#include "Set.h"

Set::Set(){

}

// Relation is 2x - 7y = 1
bool Set::relation(int x, int y) {
    return (2 * x - 7 * y) == 1; 
}

bool Set::isReflective() {
    for (int value : this->values) {
        if (!relation(value, value)) {
            return false;
        }
    }
    return true;
}

bool Set::isAntiReflective() {
    for (int value : this->values) {
        if (relation(value, value)) {
            return false;
        }
    }
    return true;
}

bool Set::isSymmetrical() {
    for (int value1 : this->values) {
        for (int value2 : this->values) {
            if (relation(value1, value2) != relation(value2, value1)) {
                return false;
            }
        }
    }
    return true;
}

bool Set::isAntiSymmetrical() {
    for (int value1 : this->values) {
        for (int value2 : this->values) {
            if (relation(value1, value2) == relation(value2, value1)) {
                return false;
            }
        }
    }
    return true;
}

bool Set::isTransitive() {
    for (int value1 : this->values) {
        for (int value2 : this->values) {
            for (int value3 : this->values) {
                if (relation(value1, value2) == relation(value2, value3)) {
                    if (!relation(value1, value3)) {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}
