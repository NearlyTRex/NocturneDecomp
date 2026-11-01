#pragma once

#include "core/fwd.h"
#include "core/menu/menupage.h"

#include <optional>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {

// Sound Options over the spectrum of what plays: the mute, the effects, dialog and music
// channels, the enhanced game's movie volume, the output's rate, depth and channels, and the
// device.
class CSoundOptionsPage final : public CMenuPage {
public:
    CSoundOptionsPage(CMenu &menu, const SMenuOwners &owners);

    [[nodiscard]] std::optional<std::string> title() override;
    void build(std::vector<SMenuLine> &lines) override;
    void decorate() override;
    EMenuOutcome choose(int id, EMenuStep step) override;

private:
    // A channel's line, its 100% being scale of the mixer's range.
    struct SChannel {
        int index;
        float scale;
        std::string_view on_label;
        std::string_view off_label;
    };

    [[nodiscard]] std::string localize(std::string_view key) const;
    [[nodiscard]] std::string getChannelText(const SChannel &channel) const;
    [[nodiscard]] std::string getMovieText() const;
    // Off is below the lowest step: back from it is full, on from it the lowest.
    void stepChannel(const SChannel &channel, EMenuStep step);
    void stepMovieVolume(EMenuStep step);
    void stepSampleRate(EMenuStep step);
    void toggleBitDepth();
    void toggleChannelCount();
    void pickDevice();
    void playEffectsSample();

    static const SChannel kEffects;
    static const SChannel kDialog;
    static const SChannel kMusic;

    const SMenuOwners &owners_;
};

} // namespace nocturne::core
