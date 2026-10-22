#include "common/text/scanformat.h"
#include "common/text/textscanner.h"
#include "core/set/demonset.h"
#include "core/setdir/setdir.h"
#include "core/setdir/vdbox.h"

#include <cstddef>
#include <string>

namespace nocturne::core {

// nocedit 0x00576200
void CDemonSet::skipDeprecatedVirtualDirectorData(common::CTextScanner &scanner) {
    scanner.skipLine();
    int director_count = 0;
    common::scanFormat(scanner, "%d\n", director_count);
    for (int director = 0; director < director_count; ++director) {
        std::string unread_name;
        int line_count = 0;
        common::scanFormat(scanner, "\"%[^\"]\", %d\n", unread_name, line_count);
        for (int line = 0; line < line_count; ++line) {
            scanner.skipLine();
        }
    }
}

// The root of the box's group, with every box on the way pointed straight at it.
// nocedit 0x00576820
int CDemonSet::findVdirBoxRoot(int box_index) {
    const auto parentOf = [this](int index) -> int & {
        return vdir_boxes_.at(static_cast<std::size_t>(index)).parent_index;
    };
    int root = box_index;
    while (parentOf(root) >= 0) {
        root = parentOf(root);
    }
    while (box_index != root) {
        const int parent = parentOf(box_index);
        parentOf(box_index) = root;
        box_index = parent;
    }
    return root;
}

// Joins boxes that touch, either reaching into the other, into one group.
// nocedit 0x00576710
void CDemonSet::buildVdirBoxGroups() {
    for (SVDBox &box : vdir_boxes_) {
        box.parent_index = -1;
    }
    const int count = static_cast<int>(vdir_boxes_.size());
    for (int first = 0; first < count; ++first) {
        const int root = findVdirBoxRoot(first);
        const SVDBox &first_box = vdir_boxes_.at(static_cast<std::size_t>(first));
        for (int second = first + 1; second < count; ++second) {
            const int other_root = findVdirBoxRoot(second);
            const SVDBox &second_box = vdir_boxes_.at(static_cast<std::size_t>(second));
            if (other_root != root && (testOBBIntersection(first_box, second_box) ||
                                       testOBBIntersection(second_box, first_box))) {
                vdir_boxes_.at(static_cast<std::size_t>(other_root)).parent_index = root;
            }
        }
    }
}

} // namespace nocturne::core
