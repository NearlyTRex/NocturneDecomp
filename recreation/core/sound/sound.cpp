#include "core/sound/sound.h"

#include "common/error/error.h"
#include "common/math/matrix3x3f.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "common/random/watcomrandom.h"
#include "common/text/scanformat.h"
#include "common/text/wildcard.h"
#include "core/actor/notported.h"
#include "core/dcamera/demoncamera.h"
#include "core/set/demonset.h"
#include "core/set/setsounds.h"
#include "engine/console/console.h"
#include "engine/package/gamecontent.h"
#include "sound/sndmain/sampleinfo.h"
#include "sound/sndmain/sfxoptions.h"
#include "sound/sndmain/sndmain.h"

#include <algorithm>
#include <cmath>
#include <cstddef>
#include <format>
#include <functional>
#include <optional>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

// The channels whose volume and switch the INI keeps.
constexpr int kSoundChannelCount = 3;

// The loudest the menu lets each channel be.
constexpr float kMenuEffectsVolume = 0.25F;
constexpr float kMenuMusicVolume = 0.25F;
constexpr float kMenuDialogVolume = 1.0F;

// From this the output takes the high-rate music.
constexpr int kLowestHighSampleRate = 30001;
// What ends the file in a sound's name.
constexpr std::string_view kSoundNameEnds = "@* \t\n\v\f\r";

// A name's file pattern is picked from no more than this many of its matches.
constexpr int kMaxSoundMatches = 40;
// Stands for a room's size, from 0 to 5, in a file pattern.
constexpr char kRoomSizeMark = '!';
constexpr int kRoomSizeCount = 6;
// The sizes tried each side of the room's own.
constexpr int kRoomSizeSearchSteps = 5;
// A range's last number past this takes two digits.
constexpr int kLargestOneDigit = 9;
constexpr std::string_view kDefaultExtension = ".wav";
// Where the listener starts a session, so the first update moves it.
constexpr float kFarAway = 1e10F;
// A camera moved less than this since the listener's last place leaves the listener there.
constexpr float kListenerStillDistance = 0.0001F;
// The share of their range the wind and water move a second, and the volume they stop below.
constexpr float kLoopVolumeRate = 0.5F;
constexpr float kSilentVolume = 0.001F;
// The water's volume: its least, and a 36th for each foot of the side of the square it shows.
constexpr float kWaterQuietest = 0.2F;
constexpr float kWaterPerRootSquareFoot = 1.0F / 36.0F;
// The wind's points are the odd 32nds of the frame across and down. A point that is open at all
// is 0.2 more, then squared, and is a 64th of the whole; the whole, squared, is 0.3 more if any.
constexpr int kWindSampleDivisions = 32;
constexpr float kWindPointLift = 0.2F;
constexpr float kWindPointShare = 1.0F / 64.0F;
constexpr float kWindLift = 0.3F;
// The depth screenToWorldCoord gives a point where nothing was drawn.
constexpr int kNothingDrawnDepth = 0x7fffffff;

void capChannelVolume(sound::CSndMain &sound_main, int channel_index, float volume) {
    if (sound_main.getSfxChannelVol(channel_index) > volume) {
        sound_main.setSfxChannelVol(channel_index, volume);
    }
}

// As the C library's isspace in the C locale.
bool isSpace(char c) {
    return c == ' ' || (c >= '\t' && c <= '\r');
}

[[noreturn]] void quitInvalidSoundName(std::string_view sound_name) {
    common::displayErrorAndQuit(std::format("Invalid sfx string: {}", sound_name));
}

// A sound name's file pattern, up to whitespace, an '@' or a '*': each "[a,b]" a '?', or two
// where b is past 9, and ".wav" when the pattern has no '.'. What follows it is left in rest.
std::string getFilePattern(std::string_view sound_name, std::string_view &rest) {
    std::string pattern;
    rest = sound_name;
    while (!rest.empty() && !isSpace(rest.front()) && rest.front() != '@' && rest.front() != '*') {
        if (rest.front() != '[') {
            pattern += rest.front();
            rest.remove_prefix(1);
            continue;
        }
        int first = 0;
        int last = 0;
        const std::optional<std::size_t> taken = common::scanPrefix(rest, "[%d,%d]", first, last);
        if (!taken || last < first) {
            quitInvalidSoundName(sound_name);
        }
        pattern += last > kLargestOneDigit ? "??" : "?";
        rest.remove_prefix(*taken);
    }
    if (!pattern.contains('.')) {
        pattern += kDefaultExtension;
    }
    return pattern;
}

// A sound's modifiers after its pattern: "@volume", at least 0, and "*pitch", above 0, apart
// or not; anything else is fatal.
void readModifiers(std::string_view sound_name, std::string_view rest, float &volume,
                   float &pitch) {
    while (!rest.empty()) {
        if (isSpace(rest.front())) {
            rest.remove_prefix(1);
            continue;
        }
        std::optional<std::size_t> taken;
        if (rest.front() == '@') {
            taken = common::scanPrefix(rest, "@%f", volume);
            if (taken && volume < 0.0F) {
                taken.reset();
            }
        } else if (rest.front() == '*') {
            taken = common::scanPrefix(rest, "*%f", pitch);
            if (taken && pitch <= 0.0F) {
                taken.reset();
            }
        }
        if (!taken) {
            quitInvalidSoundName(sound_name);
        }
        rest.remove_prefix(*taken);
    }
}

} // namespace

// The original also set a tag word nothing read.
// nocedit 0x005b2ce0
CSound::CSound(SSoundOwners owners)
    : sound_main_(owners.sound_main), pod_(owners.pod), file_system_(owners.file_system),
      content_(owners.content), crt_random_(owners.crt_random), console_(owners.console),
      room_size_at_(std::move(owners.room_size_at)) {
    sound_main_.setNumberOfSfxChannels(kSoundChannelCount);
    sound_main_.resetSoundSystemDefaults();
}

// nocedit 0x005b2d60
CSound::~CSound() {
    sound_main_.shutdownSoundSystem();
}

// The original then set 16-bit stereo at 44.1 kHz for hardware 3D mixing, which the enhanced
// game doesn't have.
// nocedit 0x005b2d00
// bw1 0x0057cb30
// bw2 0x0055a100
// bw3 0x0055fc60
void CSound::findAllSoundFiles() {
    if (sound_file_list_.getItemCount() == 0) {
        sound_file_list_.populateFromFilesNoDuplicates(&pod_, file_system_, "sound", "*.wav");
        sound_file_list_.populateFromFilesNoDuplicates(&pod_, file_system_, "sound", "*.mp3");
    }
    sound_main_.initializeSoundDevice();
}

// nocedit 0x005b39a0
void CSound::reset() {
    sound_main_.resetSoundDevice();
    sound_main_.freeAllSamples();
    reportMusic(0.0F);
}

// The original also pointed the listener's right at the origin, which only the DirectSound
// device read. The music plays without a position, and is the game's: Nocturne's and BW1's
// splash music, BW2's XBLAIRMENU.wav at either rate.
// nocedit 0x005b3830
// bw1 0x0057d6a0
// bw2 0x0055ac50
// bw3 0x005607d0
void CSound::configure() {
    capChannelVolume(sound_main_, kMusicChannel, kMenuMusicVolume);
    capChannelVolume(sound_main_, kEffectsChannel, kMenuEffectsVolume);
    capChannelVolume(sound_main_, kDialogChannel, kMenuDialogVolume);
    if (sound_main_.isSoundMuted()) {
        reportMusic(0.0F);
        return;
    }
    reset();
    sound_main_.set3DListenerPos(0.0, 0.0, 0.0);
    sound_main_.set3DListenerOrient(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0);
    sound_main_.set3DListenerVelocity(0.0, 0.0, 0.0);
    sound_main_.enableSoundSystem();
    sound_main_.pushSfxOptions();
    sound_main_.setNextSfxChannel(kMusicChannel);
    sound_main_.setNextSfxFlagBits(sound::kSfxNonPositional);
    // A game whose packages give no menus plays none.
    if (const std::optional<engine::SMenuLayout> &menu = content_.menu) {
        const std::string_view music = sound_main_.getAudioSampleRate() < kLowestHighSampleRate
                                           ? menu->music.low_rate
                                           : menu->music.high_rate;
        sound_main_.startSfx(music);
        reportMusic(getSoundDuration(music));
    } else {
        reportMusic(0.0F);
    }
    sound_main_.popSfxOptions();
}

void CSound::setMusicHandler(std::function<void(float)> handler) {
    music_handler_ = std::move(handler);
}

void CSound::reportMusic(float seconds) const {
    if (music_handler_) {
        music_handler_(seconds);
    }
}

// nocedit 0x005b3ba0
float CSound::getSoundDuration(std::string_view sound_name) {
    const std::optional<sound::CSampleInfo> info =
        sound_main_.getSampleInfo(sound_name.substr(0, sound_name.find_first_of(kSoundNameEnds)));
    return info ? static_cast<float>(info->getSampleDuration()) : -1.0F;
}

const shape::CStrList &CSound::getSoundFileList() const {
    return sound_file_list_;
}

// Before the session's audio is up, the name is kept for init to start.
// nocedit 0x005b39b0
// nocturne 0x0052e9d0
// bw1 0x0057d810
// bw2 0x0055adc0
// bw3 0x00560940
void CSound::playAmbientSound(std::string_view sound_name) {
    killSound(ambient_sfx_handle_);
    ambient_sound_name_ = sound_name;
    if (audio_initialized_) {
        ambient_sfx_handle_ = playSound(ambient_sound_name_);
    }
}

// The output's rate is set as the menus left it.
// deferred: the reverb the set's director last chose, with CSound::setReverb and the output's
//   reverb
// deferred: the volume fade's multipliers back to 1, with fadeAmbientSound
// deferred: BW2's leaving the set's ambient sound unstarted, with a manifest key for it
// deferred: a set aboard a moving vehicle's train velocity, against its fog's scroll, and its
//   cabin test taken again, with the vehicle's sounds
// deferred: the event list's looping sounds started again where they were, with the events'
//   playSfx
// nocedit 0x005b2dd0
// nocturne 0x0052ddf0
// bw1 0x0057cc00
// bw2 0x0055a1d0
// bw3 0x0055fd30
void CSound::init(const SSoundScene &scene) {
    wind_target_ = 0.0F;
    wind_volume_ = 0.0F;
    water_volume_ = 0.0F;
    listener_previous_ = {.x = kFarAway, .y = kFarAway, .z = kFarAway};
    sound_main_.set3DListenerVelocity(0.0, 0.0, 0.0);
    updateListeners(scene);
    static_cast<void>(sound_main_.enableSoundSystem());
    if (!sound_main_.isSoundBusy()) {
        return;
    }
    followEffectsChannel();
    sound_main_.pushSfxOptions();
    sound_main_.setNextSfxChannel(kAmbientChannel);
    ambient_sfx_handle_ = playSound(ambient_sound_name_);
    sound_main_.popSfxOptions();
    audio_initialized_ = true;
}

// deferred: the vehicle's rail noises, its rumble and its outside's sound stopped, with the
//   vehicle's sounds
// nocedit 0x005b2f70
// nocturne 0x0052df90
// bw1 0x0057cdb0
// bw2 0x0055a360
// bw3 0x0055fee0
void CSound::shutdown() {
    audio_initialized_ = false;
    sound_main_.resetSoundDevice();
}

// The sounds' volumes, positions and pitches are worked out here, once a frame, where the
// original's audio thread worked them out for each buffer it mixed.
// The wind and the water each move at most half their range a second. The water is louder the
// more of it shows: 0.2, and a 36th of the square root of its square feet, up to its loudest.
// unverified: the wind's and the water's volumes, worked in floats where the original kept the
//   x87's precision, against a machine-code oracle
// deferred: the ambient channel's volume faded to the event's target, with fadeAmbientSound
// deferred: a set aboard a moving vehicle's rumble, outside sound and passing rail noises, with
//   the vehicle's sounds and CDemonSet::testLineOcclusion
// deferred: BW1's and BW3's streams polled at the frame's end, with the output's streams
// nocedit 0x005b2fd0
// nocturne 0x0052dff0
// bw1 0x0057ce10
// bw2 0x0055a3c0
// bw3 0x0055ff40
void CSound::process(const SSoundScene &scene, float delta_time) {
    const float step = delta_time * kLoopVolumeRate;
    updateListeners(scene);
    stepLoopVolume(wind_volume_, wind_target_, step, wind_sfx_handle_,
                   scene.set.getWind().value_or(SSetWind{}).sound);
    const std::optional<SSetWater> &water = scene.set.getWater();
    float water_target = 0.0F;
    if (water && scene.water_area > 0.0F) {
        water_target =
            std::min((std::sqrt(scene.water_area) * kWaterPerRootSquareFoot) + kWaterQuietest,
                     water->loudest);
    }
    stepLoopVolume(water_volume_, water_target, step, water_sfx_handle_,
                   water.value_or(SSetWater{}).sound);
    followEffectsChannel();
    sound_main_.pollAllSfxSlots(delta_time);
}

void CSound::stepLoopVolume(float &volume, float target, float step, std::uint32_t &handle,
                            std::string_view file) {
    volume += std::clamp(target - volume, -step, step);
    if (volume <= kSilentVolume) {
        killSound(handle);
        volume = 0.0F;
        return;
    }
    if (!isSoundPlaying(handle)) {
        handle = sound_main_.startSfx(file);
    }
    static_cast<void>(sound_main_.setSfxVolume(handle, volume));
}

// A camera that hasn't moved since leaves the listener's turn and the wind as they were.
// deferred: the listener on the flashlight's view, and no wind, while the goggles are on, with
//   the goggles
// nocedit 0x005b1870
// nocturne 0x0052c9d0
// bw1 0x0057b780
// bw2 0x00558d50
// bw3 0x0055e8b0
void CSound::updateListeners(const SSoundScene &scene) {
    const common::CVector3f &position = scene.camera.getPosition();
    const float moved_x = position.x - listener_previous_.x;
    const float moved_y = position.y - listener_previous_.y;
    const float moved_z = position.z - listener_previous_.z;
    if (std::sqrt((moved_z * moved_z) + (moved_x * moved_x) + (moved_y * moved_y)) <
        kListenerStillDistance) {
        return;
    }
    const common::CMatrix3x3f &rotation = scene.camera.getRotationMatrix();
    sound_main_.set3DListenerPos(position.x, position.y, position.z);
    const common::CVector3f front = rotation.transformVector({.x = 1.0F, .y = 0.0F, .z = 0.0F});
    const common::CVector3f up = rotation.transformVector({.x = 0.0F, .y = 1.0F, .z = 0.0F});
    const common::CVector3f right = rotation.transformVector({.x = 0.0F, .y = 0.0F, .z = 1.0F});
    sound_main_.set3DListenerOrient(front.x, front.y, front.z, up.x, up.y, up.z, right.x, right.y,
                                    right.z);
    float wind = scene.set.getWind() ? sampleWind(scene.camera) : 0.0F;
    wind *= wind;
    if (wind > 0.0F) {
        wind += kWindLift;
    }
    wind_target_ = std::min(wind, 1.0F);
    listener_previous_ = position;
}

// 16 by 16 points across the camera's frame, each as open as it looks: a point where nothing was
// drawn is sky, as open as can be. Each point and the whole are capped at 1.
// deferred: a drawn point's wind, a 50th for each unit it is past 50 away and a 60th for each
//   unit the ground above it is past 60 higher, with CDemonSet::rayVoxelHeightQuery
float CSound::sampleWind(CDemonCamera &camera) {
    float wind = 0.0F;
    for (int row = 1; row < kWindSampleDivisions; row += 2) {
        for (int column = 1; column < kWindSampleDivisions; column += 2) {
            common::CVector3i point;
            static_cast<void>(camera.screenToWorldCoord(
                camera.getFramebufferWidth() * column / kWindSampleDivisions,
                camera.getFramebufferHeight() * row / kWindSampleDivisions, &point));
            if (point.z < kNothingDrawnDepth) {
                quitNotPorted("CDemonSet", "rayVoxelHeightQuery");
            }
            float open = 1.0F + kWindPointLift;
            open = std::min(open * open, 1.0F);
            wind += open * kWindPointShare;
        }
    }
    return wind;
}

// nocedit 0x005b3b80
// nocturne 0x0052eba0
// bw1 0x0057d9c0
// bw2 0x0055af70
// bw3 0x00560af0
bool CSound::isSoundPlaying(std::uint32_t sfx_handle) {
    return sound_main_.isSfxPlaying(sfx_handle);
}

void CSound::followEffectsChannel() {
    if (!sound_main_.isSfxChannelEnabled(kEffectsChannel)) {
        sound_main_.enableSfxChannel(kAmbientChannel, false);
        return;
    }
    sound_main_.enableSfxChannel(kAmbientChannel, true);
    sound_main_.setSfxChannelVol(kAmbientChannel, sound_main_.getSfxChannelVol(kEffectsChannel));
}

// deferred: the set as the sound's user data, with the output's user data
// nocedit 0x005b3a20
// nocturne 0x0052ea40
// bw1 0x0057d880
// bw2 0x0055ae30
// bw3 0x005609b0
std::uint32_t CSound::playSound(std::string_view sound_name) {
    return playSfxInternal(sound_name, common::CVector3f{}, sound::kSfxNonPositional);
}

// nocedit listed each missing sound and appended it, with the time and who ran the game, to
// missingwavs.txt on Terminal Reality's network; retail only reports it on the console.
// deferred: a tracked position, with playTrackedActorSound
// nocedit 0x005b1fd0
// nocturne 0x0052d120
// bw1 0x0057bef0
// bw2 0x005594c0
// bw3 0x0055f020
std::uint32_t CSound::playSfxInternal(std::string_view sound_name,
                                      const common::CVector3f &position, std::uint32_t flags) {
    if (sound_main_.isSoundMuted() || sound_name.empty()) {
        return 0;
    }
    std::string_view rest;
    const std::string pattern = getFilePattern(sound_name, rest);
    const std::string file = pattern.contains(kRoomSizeMark) ? findRoomSoundFile(pattern, position)
                                                             : findRandomSoundFile(pattern);
    if (file.empty()) {
        console_.printf(std::format("Can't find wav: {}\n", pattern));
        return 0;
    }
    float volume = 1.0F;
    float pitch = 1.0F;
    readModifiers(sound_name, rest, volume, pitch);
    sound_main_.pushSfxOptions();
    sound_main_.setNextSfxStaticPosition(position.x, position.y, position.z);
    sound_main_.setNextSfxFlags(flags);
    sound_main_.setNextSfxVolume(volume);
    sound_main_.setNextSfxBaseFrequency(pitch);
    const std::uint32_t handle = sound_main_.startSfx(file);
    sound_main_.popSfxOptions();
    return handle;
}

std::string CSound::findRoomSoundFile(std::string_view pattern, const common::CVector3f &position) {
    const int room_size = room_size_at_(position);
    for (int step = 0; step < kRoomSizeSearchSteps; ++step) {
        for (const int size : {room_size + step, room_size - step}) {
            if (size < 0 || size >= kRoomSizeCount) {
                continue;
            }
            std::string sized(pattern);
            std::ranges::replace(sized, kRoomSizeMark, static_cast<char>('0' + size));
            std::string file = findRandomSoundFile(sized);
            if (!file.empty()) {
                return file;
            }
        }
    }
    return {};
}

// The decomp draws the pick from its effects stream (nocturne_rng_fx); here it is the CRT's,
// which no sim frame draws from.
// nocedit 0x005b1ed0
// nocturne 0x0052d030
// bw1 0x0057be00
// bw2 0x005593d0
// bw3 0x0055ef30
std::string CSound::findRandomSoundFile(std::string_view wildcard_pattern) {
    std::vector<std::string_view> matches;
    for (int i = 0;
         i < sound_file_list_.getItemCount() && std::cmp_less(matches.size(), kMaxSoundMatches);
         ++i) {
        const std::string_view file = sound_file_list_.getStringAt(i);
        if (common::matchesWildcard(wildcard_pattern, file)) {
            matches.push_back(file);
        }
    }
    if (matches.empty()) {
        return {};
    }
    const int pick = crt_random_.rand() % static_cast<int>(matches.size());
    return std::string(matches[static_cast<std::size_t>(pick)]);
}

// nocedit 0x005b3b90
void CSound::killSound(std::uint32_t sfx_handle) {
    static_cast<void>(sound_main_.killSfx(sfx_handle));
}

const std::string &CSound::getAmbientSoundName() const {
    return ambient_sound_name_;
}

} // namespace nocturne::core
