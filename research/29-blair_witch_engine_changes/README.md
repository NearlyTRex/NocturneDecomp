# Blair Witch engine changes

What each Blair Witch build (bw1, bw2, bw3) changed in a function the recreation ports from
nocedit, and how the recreation selects it so all four games run on one engine with
Nocturne unchanged. No code tests which game is running.

Found by a review of every BW variant of an implemented function (`// bwN` lines tick the
ones whose body only the compiler changed), then read a second time against the `.asm`.
`classification.json` holds every item. Each theme's table is approved before it is ported.

## Sources

| Source | Items | Meaning |
|---|---|---|
| `version` | 61 | the data file's own version tells the formats apart; gate on it, older versions untouched |
| `manifest` | 105 | a value, table, limit or name the binary hard-coded; it moves to the game's manifest, Nocturne's value included |
| `front_end` | 57 | a menu or front-end screen; every value in the manifest, shared code, a feature flag for a screen built differently |
| `superset` | 45 | a fix or extension Nocturne's data can't tell apart; runs for every game once approved |
| `actor` | 64 | a BW-only gameplay field or feature in a shared class, ported with the BW actors and data that reach it |
| `noop` | 87 | nothing to port: editor or debug paths the recreation drops, diagnostics, or the recreation already doing it the BW way |

Second read: 304 confirmed, 109 corrected, 6 refuted (no difference the recreation notices; tagged), 0 unsure.

## Themes

| Theme | Items | `version` | `manifest` | `front_end` | `superset` | `actor` | `noop` | Approved |
|---|---|---|---|---|---|---|---|---|
| [diagnostics](themes/diagnostics.md) | 2 |  |  |  |  |  | 2 | |
| [editor-tools](themes/editor-tools.md) | 2 |  |  |  |  |  | 2 | |
| [format-archive](themes/format-archive.md) | 51 | 46 | 5 |  |  |  |  | |
| [format-ini](themes/format-ini.md) | 9 |  | 8 |  | 1 |  |  | |
| [format-model](themes/format-model.md) | 14 |  | 2 |  | 11 |  | 1 | |
| [format-other](themes/format-other.md) | 4 | 2 |  |  |  |  | 2 | |
| [format-pod](themes/format-pod.md) | 7 | 2 | 1 |  | 1 |  | 3 | |
| [front-end-bindings](themes/front-end-bindings.md) | 7 |  |  | 7 |  |  |  | |
| [front-end-loading](themes/front-end-loading.md) | 10 |  |  | 10 |  |  |  | |
| [front-end-menu](themes/front-end-menu.md) | 33 |  |  | 27 | 6 |  |  | |
| [front-end-options](themes/front-end-options.md) | 13 |  |  | 13 |  |  |  | |
| [game-character](themes/game-character.md) | 12 |  | 5 |  | 1 | 6 |  | |
| [game-effects](themes/game-effects.md) | 21 |  | 12 |  | 2 | 5 | 2 | |
| [game-hero](themes/game-hero.md) | 19 | 1 | 6 |  |  | 12 |  | |
| [game-mission](themes/game-mission.md) | 10 |  | 8 |  |  | 1 | 1 | |
| [game-npc](themes/game-npc.md) | 16 | 4 | 2 |  | 2 | 8 |  | |
| [game-other](themes/game-other.md) | 24 | 2 | 9 |  |  | 10 | 3 | |
| [game-script](themes/game-script.md) | 24 |  | 8 |  | 1 | 14 | 1 | |
| [input](themes/input.md) | 16 |  | 4 |  | 2 | 8 | 2 | |
| [inventory-hud](themes/inventory-hud.md) | 6 |  | 6 |  |  |  |  | |
| [math](themes/math.md) | 5 |  | 4 |  |  |  | 1 | |
| [platform](themes/platform.md) | 9 |  |  |  | 1 |  | 8 | |
| [render-font](themes/render-font.md) | 11 |  | 7 |  | 1 |  | 3 | |
| [render-mini3d](themes/render-mini3d.md) | 18 |  | 2 |  | 3 |  | 13 | |
| [render-other](themes/render-other.md) | 18 |  | 6 |  | 7 |  | 5 | |
| [render-set](themes/render-set.md) | 10 | 1 | 7 |  |  |  | 2 | |
| [render-texture-cache](themes/render-texture-cache.md) | 10 |  | 2 |  | 6 |  | 2 | |
| [sound-listener](themes/sound-listener.md) | 5 |  |  |  |  |  | 5 | |
| [sound-other](themes/sound-other.md) | 5 |  | 1 |  |  |  | 4 | |
| [sound-samples](themes/sound-samples.md) | 13 | 3 |  |  |  |  | 10 | |
| [sound-voices](themes/sound-voices.md) | 15 |  |  |  |  |  | 15 | |

## Shared roots

One BW change behind several items, ported as one.

| Root | Items | Themes |
|---|---|---|
| `mini3d-2d` | 20 | render-font, render-mini3d |
| `bw-menu-flat-backdrop` | 15 | front-end-menu, front-end-options |
| `title-screen-backdrop` | 14 | front-end-menu |
| `deferred-sound-changes` | 13 | sound-voices |
| `bw-model-pool` | 10 | format-model |
| `bw-script-commands` | 9 | game-script |
| `texture-cache-rework` | 9 | render-texture-cache |
| `npc-archive-v6-v8` | 8 | format-archive, game-npc |
| `multi-listener-sound` | 7 | sound-listener, sound-other, sound-voices |
| `bw-fire-effects` | 7 | game-effects |
| `bw-user-locked-samples` | 6 | sound-samples |
| `fieldnotes-puzzle-ui` | 6 | game-other, input |
| `background-cast-shadows` | 6 | format-archive, render-set |
| `character-archive-versions` | 6 | format-archive |
| `door-shake-me` | 6 | format-archive, game-other |
| `inventory-hud-bitmaps` | 6 | inventory-hud |
| `ini-schema` | 6 | format-ini |
| `chero-archive-version` | 6 | format-archive |
| `loading-screen-layout` | 6 | front-end-loading |
| `yamaha-adpcm-wav` | 5 | sound-samples |
| `picklist-item-flags` | 5 | front-end-menu |
| `trigger-hilite-actor` | 5 | format-archive, game-other |
| `script-load-lenient` | 5 | game-script |
| `boxactor-camorient` | 5 | format-archive |
| `bw-hero-state` | 5 | game-hero |
| `healthitem-bw3` | 4 | format-archive, game-effects |
| `boxactor-fade` | 4 | format-archive |
| `bw3-zombie-variants` | 4 | format-archive, game-npc |
| `font-table` | 4 | render-font |
| `bw-session-loop` | 3 | game-other |
| `bw-default-bindings` | 3 | front-end-bindings |
| `bw-hotkey-commands` | 3 | input |
| `bw-story-select` | 3 | front-end-menu |
| `bw-hero-input` | 3 | input |
| `bw-credits` | 3 | front-end-menu |
| `per-game-binding-rows` | 3 | front-end-bindings |
| `bw-pod-mount-errors` | 3 | format-pod |
| `bw3-weather-types` | 3 | game-effects |
| `character-bw-fields` | 3 | game-character |
| `death-state-rules` | 3 | game-character |
| `letterbox-fallback` | 3 | platform |
| `mission-actor-limit` | 3 | game-mission |
| `per-set-actor-prepare` | 3 | game-mission |
| `bw3-weapon-fields` | 3 | format-archive, game-other |
| `bw2-inventory-groups` | 3 | game-hero |
| `bw-lockframe-suspends-external` | 3 | render-other |
| `bw3-actor-subclasses` | 3 | game-npc, game-other |
| `global-vertex-count` | 3 | render-set |
| `heroplaceholder-heroname` | 3 | format-archive, game-hero |
| `camera-480-clamp` | 3 | render-other |
| `vdir-director` | 3 | render-set |
| `sound-ini-accel-key` | 2 | format-ini |
| `bw3-end-timer` | 2 | game-script |
| `stranger-head-part` | 2 | game-hero |
| `bw-lightgun-defaults` | 2 | game-other |
| `bw-truecolor-front-end` | 2 | render-other |
| `pod3-epd-formats` | 2 | format-pod |
| `waypoint-renderable` | 2 | editor-tools, game-other |
| `bw-actor-bool-vars` | 2 | game-script |
| `winfont-mask-fill` | 2 | render-font |
| `follow-formation` | 2 | game-character |
| `ethereal-flame-skip` | 2 | game-character |
| `script-validation` | 2 | game-script |
| `healthitem-sparkle` | 2 | game-effects |
| `euler-extraction` | 2 | math |
| `filefinder-timestamp` | 2 | platform |
| `mission-continue-prompt` | 2 | front-end-loading |
| `set-transition-picture` | 2 | game-mission |
| `character-turn-rate` | 2 | game-npc |
| `inventory-detail-default` | 2 | game-hero |
| `bw3-inventory-hud` | 2 | game-hero |
| `bw-game-statics` | 2 | game-effects |
| `default-model-names` | 2 | game-other |
| `bw-footstep-particles` | 2 | game-effects |
| `bw3-enemy-spawn` | 2 | format-archive |
| `enemy-random-scale` | 2 | game-npc |
| `bw-bitmap-puzzles` | 2 | front-end-loading, game-mission |
| `vdir-flat-thumbs` | 2 | render-set |
| `set-format-v29-31` | 2 | format-other |
| `threat-filter` | 2 | game-other |
| `model-limits` | 2 | format-model |
| `input-idle-timer` | 2 | input |
| `cloth-rest-freeze` | 2 | game-effects |
| `bw2-16bpp-display` | 2 | render-other |
| `bw-slow-motion` | 1 | game-character |
| `bw1-stranger-weapons` | 1 | game-hero |
| `bw-float-trig-constants` | 1 | math |
| `emitter-v14` | 1 | format-archive |
| `bw-trigger-cause-10` | 1 | game-other |
| `bw-event-commands` | 1 | game-script |
| `monster-vision` | 1 | game-script |
| `default-model-name` | 1 | game-other |
| `water-lava` | 1 | format-archive |
| `model-skeleton-pool` | 1 | game-mission |
| `bw2-light-bloom` | 1 | render-other |
| `bw1-inventory-hud-features` | 1 | game-hero |
| `bw3-hero-no-carry` | 1 | game-other |
| `bw-renderer-abi` | 1 | render-other |
| `bw2-weapon-categories` | 1 | game-hero |
| `bw-float-pi` | 1 | math |
| `npc-fade-in` | 1 | game-npc |
| `ammo-pickup-sparkle` | 1 | game-effects |
| `bw2-loading-screen` | 1 | front-end-loading |

