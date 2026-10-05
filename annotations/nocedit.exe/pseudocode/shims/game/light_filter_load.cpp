// =============================================================================
// LIGHT FILTERS A SCRIPT ADDED, AFTER A SAVE LOAD — implementation
// =============================================================================

#include "game/light_filter_load.h"
#include "core/ascii_case.h"
#include "shim_config.h"

#include "nocturne.h"

#if !NOCTURNE_AUTHENTIC_LIGHT_FILTER_LOAD

namespace {

bool is_ident_char(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
           (c >= '0' && c <= '9') || c == '_';
}

// `text` starts with the command `name`, matched without case and not as the
// prefix of a longer identifier.
bool starts_with_command(const char *text, const char *name)
{
    size_t n = strlen(name);
    return nocturne_ascii_icompare_n(text, name, n) == 0 && !is_ident_char(text[n]);
}

// The body of CScript::step's addLightFilter branch, without its error returns:
// a line that fails to parse or names a missing light or file is skipped.
void apply_add_light_filter(char *args)
{
    char       light_name[200];
    char       filter_name[200];
    float      duration = 0.0f;
    int        consumed = -1;
    C3DSLight *light = (C3DSLight *)0;
    CDemonLight *master_light = (CDemonLight *)0;

    sscanf(args, "( %199[^,], %199[^,], %f )%n", light_name, filter_name, &duration, &consumed);
    if (consumed < 5) {
        return;
    }
    core_set_cpp_CDemonSet_addLightFilter_FUN_00570f10(g_CDemonSetPtr, light_name, &light,
                                                       &master_light);
    if (light == (C3DSLight *)0 ||
        engine_dosio_cpp_getFileSize_FUN_00481880((char *)"art", filter_name) < 1) {
        return;
    }
    core_setutil_cpp_C3DSLight_addFilter_FUN_00586fa0(light, filter_name, duration, 0);
}

} // namespace

extern "C" void nocturne_light_filter_load_replay(CScript *script)
{
    if (script == (CScript *)0 || script->parsed_lines == (SScriptLine *)0) {
        return;
    }
    int end = script->next_cmd;
    if (end > script->parsed_line_count) {
        end = script->parsed_line_count;
    }
    for (int i = 0; i < end; i++) {
        char *text = script->parsed_lines[i].text;
        if (text == (char *)0) {
            continue;
        }
        text = core_script_cpp_skipWhitespace_FUN_005593d0(text);
        if (starts_with_command(text, "wait")) {
            break;
        }
        if (starts_with_command(text, "addLightFilter")) {
            apply_add_light_filter(core_script_cpp_skipWhitespace_FUN_005593d0(text + 14));
        }
    }
}

#else

extern "C" void nocturne_light_filter_load_replay(CScript *script) { (void)script; }

#endif // !NOCTURNE_AUTHENTIC_LIGHT_FILTER_LOAD
