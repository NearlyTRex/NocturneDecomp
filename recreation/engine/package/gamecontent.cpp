#include "engine/package/gamecontent.h"

#include <algorithm>
#include <format>
#include <optional>
#include <span>
#include <string>
#include <vector>

namespace nocturne::engine {
namespace {

template <typename T>
void mergeValue(std::optional<T> &into, const std::optional<T> &from) {
    if (from) {
        into = from;
    }
}

// Each of from's replaces into's with its id, or goes at the end.
template <typename T>
void mergeById(std::vector<T> &into, const std::vector<T> &from) {
    for (const T &item : from) {
        const auto found = std::ranges::find(into, item.id, &T::id);
        if (found == into.end()) {
            into.push_back(item);
        } else {
            *found = item;
        }
    }
}

void noteMissingReferences(const SGameContent &content, std::vector<std::string> &notes) {
    for (const SGameStory &story : content.stories) {
        if (!story.loading.empty() &&
            !std::ranges::contains(content.loading, story.loading, &SLoadingPicture::id)) {
            notes.push_back(std::format("the story {} names a loading picture {} no package has",
                                        story.id, story.loading));
        }
        for (const std::string &required : story.required_stories) {
            if (!std::ranges::contains(content.stories, required, &SGameStory::id)) {
                notes.push_back(std::format("the story {} needs a story {} no package has, so it "
                                            "isn't listed",
                                            story.id, required));
            }
        }
    }
}

} // namespace

SMergedGameContent mergeGameContent(std::span<const SGameContent *const> in_order) {
    SMergedGameContent merged;
    SGameContent &content = merged.content;
    for (const SGameContent *from : in_order) {
        mergeValue(content.title, from->title);
        mergeValue(content.front_end, from->front_end);
        mergeValue(content.loading_indicator, from->loading_indicator);
        mergeValue(content.copyright, from->copyright);
        mergeValue(content.copyright_os_font, from->copyright_os_font);
        mergeValue(content.credits, from->credits);
        mergeValue(content.menu, from->menu);
        mergeById(content.loading, from->loading);
        mergeById(content.stories, from->stories);
        for (const auto &[language, table] : from->translations) {
            TranslationTable &into = content.translations[language];
            for (const auto &[english, translated] : table) {
                into.insert_or_assign(english, translated);
            }
        }
    }
    noteMissingReferences(content, merged.notes);
    return merged;
}

} // namespace nocturne::engine
