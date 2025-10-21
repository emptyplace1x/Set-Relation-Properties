#include <vector>

class Set {
    private:
        std::vector<int> values;
        // Relation is 2x - 7y = 1
        bool relation(int x, int y);
    public:
        Set();
        bool isReflective();
        bool isAntiReflective();
        bool isSymmetrical();
        bool isAntiSymmetrical();
        bool isTransitive();
};
