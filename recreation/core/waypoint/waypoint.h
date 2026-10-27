#pragma once

#include "core/fwd.h"
#include "core/trigger/trigger.h"

#include <memory>
#include <span>
#include <vector>

namespace nocturne::core {

// A point on the paths characters walk, with the waypoints it leads straight to. The virtual
// functions not ported yet quit when called.
class CWayPoint : public CTrigger {
public:
    static const CDemonActorType kType;

    CWayPoint();
    ~CWayPoint() override;
    CWayPoint(const CWayPoint &) = delete;
    CWayPoint &operator=(const CWayPoint &) = delete;
    CWayPoint(CWayPoint &&) = delete;
    CWayPoint &operator=(CWayPoint &&) = delete;

    void setup() override;
    int renderOpaque() override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;

    CWayPoint *findNearestReachable(CWayPoint *start_waypoint);

    // The waypoints the file names as reachable from this one; a name no actor has is null.
    [[nodiscard]] std::span<CDemonActor *const> getAdjacentWaypoints() const;

private:
    static std::unique_ptr<CDemonActor> create();

    std::vector<CDemonActor *> adjacent_waypoints_;
};

} // namespace nocturne::core
