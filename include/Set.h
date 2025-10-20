#include <vector>

class Set {
    private:
        std::vector<int> values;
        // Relation is 2x - 7y = 1
    public:
        bool isReflective();
        bool isSymmetrical();
        bool isTransitive();
};
