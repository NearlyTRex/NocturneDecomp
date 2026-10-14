#include "engine/rasteredges.h"

#include "engine/prim/prim.h"
#include "engine/softwareedge.h"

#include <span>

namespace nocturne::engine::raster {

void walkEdges(std::span<SSoftwareEdge> edges, int first_row, int row_limit,
               const EdgeStepper &step_edge, const RowDrawer &draw_row) {
    SSoftwareEdge *first = findEdgeInBuffer(edges, first_row, nullptr);
    if (first == nullptr) {
        return;
    }
    // The top corner, or the ends of a level top, start two edges, so the original's check for
    // a second is dropped.
    SSoftwareEdge *second = findEdgeInBuffer(edges, first_row, first);
    for (int y = first_row; y < row_limit; ++y) {
        if (first->y_max <= y) {
            first->y_min = -1;
            first = findEdgeInBuffer(edges, y, second);
            if (first == nullptr) {
                return;
            }
        }
        if (second->y_max <= y) {
            second->y_min = -1;
            second = findEdgeInBuffer(edges, y, first);
            if (second == nullptr) {
                return;
            }
        }
        if (draw_row(*first, *second, y)) {
            return;
        }
        step_edge(*first);
        step_edge(*second);
    }
}

} // namespace nocturne::engine::raster
