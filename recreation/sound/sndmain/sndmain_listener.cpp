#include "sound/sndmain/sndmain.h"

namespace nocturne::sound {
namespace {

// Feet from the listener to each ear.
constexpr double kEarOffset = 0.5;

} // namespace

// nocedit 0x005aa020
void CSndMain::set3DListenerPos(double pos_x, double pos_y, double pos_z) {
    cached_3d_listener_pos_ = {.x = pos_x, .y = pos_y, .z = pos_z};
    calculateVirtualSpeakerPositions();
}

// The game passes its camera's x axis as front, so the ears sit along it. Only the DirectSound
// device read up and right.
// nocedit 0x005aa0a0
void CSndMain::set3DListenerOrient(double front_x, double front_y, double front_z, double /*up_x*/,
                                   double /*up_y*/, double /*up_z*/, double /*right_x*/,
                                   double /*right_y*/, double /*right_z*/) {
    cached_3d_listener_orient_front_ = {.x = front_x, .y = front_y, .z = front_z};
    calculateVirtualSpeakerPositions();
}

// nocedit 0x005aa1c0
void CSndMain::set3DListenerVelocity(double x_velocity, double y_velocity, double z_velocity) {
    cached_3d_listener_velocity_ = {.x = x_velocity, .y = y_velocity, .z = z_velocity};
}

// nocedit 0x005aa290
bool CSndMain::isWithinListenerRadius(double pos_x, double pos_y, double pos_z,
                                      double radius) const {
    const double dx = pos_x - cached_3d_listener_pos_.x;
    const double dy = pos_y - cached_3d_listener_pos_.y;
    const double dz = pos_z - cached_3d_listener_pos_.z;
    return (dx * dx) + (dy * dy) + (dz * dz) <= radius * radius;
}

const common::CVector3d &CSndMain::getListenerPosition() const {
    return cached_3d_listener_pos_;
}

const common::CVector3d &CSndMain::getListenerVelocity() const {
    return cached_3d_listener_velocity_;
}

const common::CVector3d &CSndMain::getSpeakerPosition(std::size_t channel) const {
    return virtual_speaker_positions_.at(channel);
}

// Stereo puts an ear either side of the listener; any other layout hears from its centre. The
// original worked this out before each mix; it is kept up to date as the listener moves instead.
// The original scaled its distances by set3DListenerDistanceFactor, whose only caller passes 1.
// nocedit 0x005a5530
void CSndMain::calculateVirtualSpeakerPositions() {
    const common::CVector3d &centre = cached_3d_listener_pos_;
    if (audio_channel_count_ == 2) {
        const common::CVector3d &axis = cached_3d_listener_orient_front_;
        virtual_speaker_positions_[0] = {.x = centre.x - (axis.x * kEarOffset),
                                         .y = centre.y - (axis.y * kEarOffset),
                                         .z = centre.z - (axis.z * kEarOffset)};
        virtual_speaker_positions_[1] = {.x = centre.x + (axis.x * kEarOffset),
                                         .y = centre.y + (axis.y * kEarOffset),
                                         .z = centre.z + (axis.z * kEarOffset)};
        return;
    }
    virtual_speaker_positions_.fill(centre);
}

} // namespace nocturne::sound
