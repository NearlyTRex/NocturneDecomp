// =============================================================================
// LIGHT FILTER LOAD — a loaded save's lights filtered as the script left them
// =============================================================================

#include "behaviour_support.h"
#include "game/light_filter_load.h"
#include "nocturne_test.h"

#include <memory>
#include <string>
#include <vector>

using namespace behaviour_support;

namespace {

C3DSLight *s_light = (C3DSLight *)0x1000;

// A script of these lines, run as far as `next`.
struct Script {
    std::vector<std::string> text;
    std::vector<SScriptLine> lines;
    std::unique_ptr<CScript> script{new CScript()};

    Script(std::vector<std::string> source, int next) : text(std::move(source)) {
        lines.resize(text.size());
        for (size_t i = 0; i < text.size(); i++) {
            lines[i] = SScriptLine();
            lines[i].text = text[i].empty() ? nullptr : &text[i][0];
        }
        script->parsed_lines = lines.data();
        script->parsed_line_count = (int)lines.size();
        script->next_cmd = next;
    }
};

void scene() {
    stand.reset();
    stand.scene_lights["Lamp1"] = s_light;
    stand.art_sizes["dim.raw"] = 64;
}

} // namespace

// Each addLightFilter the script ran before its first wait is run again,
// whatever its case.
NOCTURNE_TEST(the_filters_before_the_first_wait_are_put_back) {
    scene();
    Script s({"  addLightFilter(Lamp1, dim.raw, 2.5)", "", "ADDLIGHTFILTER (Lamp1,dim.raw,1)",
              "wait(1)", "addLightFilter(Lamp1, dim.raw, 9)"},
             5);
    nocturne_light_filter_load_replay(s.script.get());
    CHECK_EQ(stand.filters.size(), (size_t)2);
    if (stand.filters.size() == 2) {
        CHECK_EQ(stand.filters[0].first, std::string("dim.raw"));
        CHECK_EQ(stand.filters[0].second, 2.5f);
    }
}

// Not past where the script had got to, nor a longer command that only starts
// the same way.
NOCTURNE_TEST(only_what_the_script_ran_is_put_back) {
    scene();
    Script s({"waiting(1)", "wait_for(1)", "addLightFilters(Lamp1, dim.raw, 1)",
              "addLightFilter(Lamp1, dim.raw, 1)", "addLightFilter(Lamp1, dim.raw, 2)"},
             4);
    nocturne_light_filter_load_replay(s.script.get());
    CHECK_EQ(stand.filters.size(), (size_t)1);
    Script past({"addLightFilter(Lamp1, dim.raw, 1)"}, 9);
    nocturne_light_filter_load_replay(past.script.get());
    CHECK_EQ(stand.filters.size(), (size_t)2);
}

// A line that does not parse, or names a light the set has not or a filter not
// on disk, is passed over; no script, or none parsed, is nothing to do.
NOCTURNE_TEST(a_line_that_cannot_be_run_is_passed_over) {
    scene();
    Script s({"addLightFilter(Lamp1, dim.raw)", "addLightFilter(Lamp9, dim.raw, 1)",
              "addLightFilter(Lamp1, gone.raw, 1)", "addLightFilter"},
             4);
    nocturne_light_filter_load_replay(s.script.get());
    CHECK(stand.filters.empty());

    nocturne_light_filter_load_replay(nullptr);
    std::unique_ptr<CScript> empty(new CScript());
    nocturne_light_filter_load_replay(empty.get());
    CHECK(stand.filters.empty());
}

NOCTURNE_TEST_MAIN()
