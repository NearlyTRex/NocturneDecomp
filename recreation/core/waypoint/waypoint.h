#pragma once

#include "core/fwd.h"
#include "core/trigger/trigger.h"

namespace nocturne::core {

class CWayPoint : public CTrigger {
public:
    CWayPoint();
    ~CWayPoint() override;

    void setup() override;
    int renderOpaque() override;
    CDemonActorType *getActorType() override;
    void archive() override;

    CWayPoint *findNearestReachable(CWayPoint *start_waypoint);
};

} // namespace nocturne::core
