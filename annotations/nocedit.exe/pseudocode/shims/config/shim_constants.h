#pragma once

// =============================================================================
// SHIM CONSTANTS — numeric magnitudes used by keep/shim code
// =============================================================================
// Plain magnitude constants only. Behavior toggles live in the
// shim_config_*.h set (authentic, netplay, video, media, debug); the
// keeps decide *whether* to apply a constant (e.g. via #if NOCTURNE_AUTHENTIC_*),
// this header just names the magnitude.
