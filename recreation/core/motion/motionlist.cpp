#include "core/motion/motionlist.h"

#include "common/error/error.h"
#include "common/text/scan.h"
#include "common/text/scanformat.h"
#include "common/text/textscanner.h"

#include <cstdint>
#include <format>
#include <span>
#include <string>

namespace nocturne::core {
namespace {

constexpr int kLatestVersion = 2;
constexpr int kMarkerVersion = 2;

// The file's number for the command; every one it holds is an EMotionTransitionCmd.
EMotionTransitionCmd toCommand(int number) {
    return static_cast<EMotionTransitionCmd>(static_cast<std::uint8_t>(number));
}

} // namespace

// nocedit 0x0052cd50
CMotionList::CMotionList() = default;

// Each group of fields follows a comment line, which is passed over.
// nocedit 0x0052cd70
void CMotionList::load(common::CTextScanner &scanner) {
    scanner.skipLine();
    int version = -1;
    common::scanFormat(scanner, "%d\n", version);
    if (version < 0) {
        common::displayErrorAndQuit("Error reading motion list.");
    }
    if (version > kLatestVersion) {
        common::displayErrorAndQuit(
            std::format("Can't read motion list - it's version {}, and I can only handle up to "
                        "version {}.  (Probably you have an old .exe)",
                        version, kLatestVersion));
    }
    scanner.skipLine();
    int state_count = 0;
    common::scanFormat(scanner, "%d\n", state_count);
    state_names_.assign(common::toCount(state_count), {});
    for (std::string &name : state_names_) {
        common::scanFormat(scanner, "%s\n", name);
    }
    scanner.skipLine();
    int motion_count = 0;
    common::scanFormat(scanner, "%d\n", motion_count);
    motions_.assign(common::toCount(motion_count), {});
    for (SMotion &motion : motions_) {
        loadMotion(scanner, version, motion);
    }
}

void CMotionList::loadMotion(common::CTextScanner &scanner, int version, SMotion &motion) {
    scanner.skipLine();
    common::scanFormat(scanner, "\"%[^\"]\",%f,%d,%d,%d\n", motion.motion_name, motion.fps,
                       motion.state_index, motion.frame_start, motion.frame_count);
    scanner.skipLine();
    common::scanFormat(scanner, "%d,%d,%f\n", motion.exit_forward_from_frame,
                       motion.exit_forward_to_motion, motion.exit_forward_to_frame);
    scanner.skipLine();
    int command = 0;
    int keep_state = 0;
    common::scanFormat(scanner, "%d,%f,%d\n", command, motion.exit_forward_tween_time, keep_state);
    motion.exit_forward_cmd = toCommand(command);
    motion.exit_forward_set_new_state = keep_state != 0;
    scanner.skipLine();
    common::scanFormat(scanner, "%d,%f\n", motion.exit_backward_to_motion,
                       motion.exit_backward_to_frame);
    scanner.skipLine();
    int transition_count = 0;
    common::scanFormat(scanner, "%d\n", transition_count);
    motion.transitions.assign(common::toCount(transition_count), {});
    for (SMotionTransition &transition : motion.transitions) {
        common::scanFormat(scanner, "%d,%d,%d,%f,%f,%d\n", transition.desired_state, command,
                           transition.to_motion_number, transition.to_frame_number,
                           transition.tween_time, keep_state);
        transition.cmd = toCommand(command);
        transition.set_new_state_as_desired = keep_state != 0;
    }
    scanner.skipLine();
    int signal_count = 0;
    common::scanFormat(scanner, "%d\n", signal_count);
    motion.signals.assign(common::toCount(signal_count), {});
    for (SMotionSignal &signal : motion.signals) {
        common::scanFormat(scanner, "%d,%d\n", signal.frame_number, signal.value);
    }
    if (version < kMarkerVersion) {
        motion.markers.clear();
        return;
    }
    scanner.skipLine();
    int marker_count = 0;
    common::scanFormat(scanner, "%d", marker_count);
    motion.markers.assign(common::toCount(marker_count), 0);
    for (int &marker : motion.markers) {
        common::scanFormat(scanner, "%d", marker);
    }
    scanner.skipLine();
}

std::span<const std::string> CMotionList::getStateNames() const {
    return state_names_;
}

std::span<const SMotion> CMotionList::getMotions() const {
    return motions_;
}

} // namespace nocturne::core
