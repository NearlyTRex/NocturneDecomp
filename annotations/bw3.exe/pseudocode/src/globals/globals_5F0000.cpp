#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x5F0000
// =============================================================================

// CConsole*
CConsole* g_CConsolePtr = (CConsole*)&g_CConsoleInstance;

// CDemonFilter*
CDemonFilter* g_GlobalFilters = (CDemonFilter*)&CDemonFilter_ARRAY_01548c00;
CDemonFilter* g_PlayerFilters = (CDemonFilter*)&CDemonFilter_ARRAY_01548c00;

// CDemonRenderer*
CDemonRenderer* g_CDemonRenderer_PTR_005f2af8 = (CDemonRenderer*)&g_CDemonRenderer_01bdd7e4;
CDemonRenderer* g_CDemonRenderer_PTR_005f2afc = (CDemonRenderer*)&g_CDemonRenderer_01bdd7e4;

// CEditorTools*
CEditorTools* g_CEditorToolsPtr = (CEditorTools*)&g_CEditorToolsInstance;

// CEventList*
CEventList* g_CEventList_PTR_005fba60 = (CEventList*)&g_CEventList_01c6e360;

// CFieldNotes*
CFieldNotes* g_CFieldNotesPtr = (CFieldNotes*)&g_CFieldNotesInstance;

// CFilterCache*
CFilterCache* g_CFilterCachePtr = (CFilterCache*)&g_CFilterCacheInstance;

// CFilterFX*
CFilterFX* g_CFilterFXPtr = (CFilterFX*)&g_CFilterFXInstance;

// CFireEffect*
CFireEffect* g_CFireEffect_PTR_005fc5a0 = (CFireEffect*)&g_CFireEffect_01c73654;

// CGame*
CGame* g_CGamePtr = (CGame*)&g_CGameInstance;

// CGore*
CGore* g_CGorePtr = (CGore*)&g_CGoreInstance;

// CGround*
CGround* g_CGroundPtr = (CGround*)&g_CGroundInstance;

// CVector3i[62]
CVector3i g_CVector3i_ARRAY_005f1954[62] = {
    {
        .x = 0x00000000,
        .y = 0x00000100,
        .z = 0x00000000
    },
    {
        .x = -110,
        .y = 0x000000DD,
        .z = -64
    },
    {
        .x = -128,
        .y = 0x000000DD,
        .z = 0x00000000
    },
    {
        .x = -64,
        .y = 0x000000DD,
        .z = -110
    },
    {
        .x = 0x00000000,
        .y = 0x000000DD,
        .z = -128
    },
    {
        .x = 0x00000040,
        .y = 0x000000DD,
        .z = -110
    },
    {
        .x = 0x0000006E,
        .y = 0x000000DD,
        .z = -64
    },
    {
        .x = 0x00000080,
        .y = 0x000000DD,
        .z = 0x00000000
    },
    {
        .x = 0x0000006E,
        .y = 0x000000DD,
        .z = 0x00000040
    },
    {
        .x = 0x00000040,
        .y = 0x000000DD,
        .z = 0x0000006E
    },
    {
        .x = 0x00000000,
        .y = 0x000000DD,
        .z = 0x00000080
    },
    {
        .x = -64,
        .y = 0x000000DD,
        .z = 0x0000006E
    },
    {
        .x = -110,
        .y = 0x000000DD,
        .z = 0x00000040
    },
    {
        .x = 0x000000DD,
        .y = 0x00000080,
        .z = 0x00000000
    },
    {
        .x = 0x000000C0,
        .y = 0x00000080,
        .z = 0x0000006E
    },
    {
        .x = 0x0000006E,
        .y = 0x00000080,
        .z = 0x000000C0
    },
    {
        .x = 0x00000000,
        .y = 0x00000080,
        .z = 0x000000DD
    },
    {
        .x = -110,
        .y = 0x00000080,
        .z = 0x000000C0
    },
    {
        .x = -192,
        .y = 0x00000080,
        .z = 0x0000006E
    },
    {
        .x = -221,
        .y = 0x00000080,
        .z = 0x00000000
    },
    {
        .x = -192,
        .y = 0x00000080,
        .z = -110
    },
    {
        .x = -110,
        .y = 0x00000080,
        .z = -192
    },
    {
        .x = 0x00000000,
        .y = 0x00000080,
        .z = -221
    },
    {
        .x = 0x0000006E,
        .y = 0x00000080,
        .z = -192
    },
    {
        .x = 0x000000C0,
        .y = 0x00000080,
        .z = -110
    },
    {
        .x = 0x00000100,
        .y = 0x00000000,
        .z = 0x00000000
    },
    {
        .x = 0x000000DD,
        .y = 0x00000000,
        .z = 0x00000080
    },
    {
        .x = 0x00000080,
        .y = 0x00000000,
        .z = 0x000000DD
    },
    {
        .x = 0x00000000,
        .y = 0x00000000,
        .z = 0x00000100
    },
    {
        .x = -128,
        .y = 0x00000000,
        .z = 0x000000DD
    },
    {
        .x = -221,
        .y = 0x00000000,
        .z = 0x00000080
    },
    {
        .x = -256,
        .y = 0x00000000,
        .z = 0x00000000
    },
    {
        .x = -221,
        .y = 0x00000000,
        .z = -128
    },
    {
        .x = -128,
        .y = 0x00000000,
        .z = -221
    },
    {
        .x = 0x00000000,
        .y = 0x00000000,
        .z = -256
    },
    {
        .x = 0x00000080,
        .y = 0x00000000,
        .z = -221
    },
    {
        .x = 0x000000DD,
        .y = 0x00000000,
        .z = -128
    },
    {
        .x = 0x000000DD,
        .y = -128,
        .z = 0x00000000
    },
    {
        .x = 0x000000C0,
        .y = -128,
        .z = 0x0000006E
    },
    {
        .x = 0x0000006E,
        .y = -128,
        .z = 0x000000C0
    },
    {
        .x = 0x00000000,
        .y = -128,
        .z = 0x000000DD
    },
    {
        .x = -110,
        .y = -128,
        .z = 0x000000C0
    },
    {
        .x = -192,
        .y = -128,
        .z = 0x0000006E
    },
    {
        .x = -221,
        .y = -128,
        .z = 0x00000000
    },
    {
        .x = -192,
        .y = -128,
        .z = -110
    },
    {
        .x = -110,
        .y = -128,
        .z = -192
    },
    {
        .x = 0x00000000,
        .y = -128,
        .z = -221
    },
    {
        .x = 0x0000006E,
        .y = -128,
        .z = -192
    },
    {
        .x = 0x000000C0,
        .y = -128,
        .z = -110
    },
    {
        .x = 0x00000080,
        .y = -221,
        .z = 0x00000000
    },
    {
        .x = 0x0000006E,
        .y = -221,
        .z = 0x00000040
    },
    {
        .x = 0x00000040,
        .y = -221,
        .z = 0x0000006E
    },
    {
        .x = 0x00000000,
        .y = -221,
        .z = 0x00000080
    },
    {
        .x = -64,
        .y = -221,
        .z = 0x0000006E
    },
    {
        .x = -110,
        .y = -221,
        .z = 0x00000040
    },
    {
        .x = -128,
        .y = -221,
        .z = 0x00000000
    },
    {
        .x = -110,
        .y = -221,
        .z = -64
    },
    {
        .x = -64,
        .y = -221,
        .z = -110
    },
    {
        .x = 0x00000000,
        .y = -221,
        .z = -128
    },
    {
        .x = 0x00000040,
        .y = -221,
        .z = -110
    },
    {
        .x = 0x0000006E,
        .y = -221,
        .z = -64
    },
    {
        .x = 0x00000000,
        .y = -256,
        .z = 0x00000000
    }
};

// SLightGlowTable
SLightGlowTable g_SLightGlowTable_005f2828 = {
    .fuzz = {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "LITEFUZZ.RAW"
    },
    .headlight = {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SUNMARK.RAW"
    },
    .sprites = {{
        .texture = {
            .base = {.type = 0x0000000D, .count = 0x00000000},
            .texture_name = "glow1.RAW"
        },
        .params = {
            .flare_axis_pos = 1.821688e-44f,
            .size = 0.0f,
            .uv = {0x304E5553, 0x41522E36, 0x00000057, 0x00000000}
        }
    }, {
        .texture = {
            .base = {.type = 0x3E4CCCCD, .count = 0x3D40478C},
            .texture_name = {0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, -8, 0x00, 0x00, 0x00, -8, 0x00, 0x00, 0x00}
        },
        .params = {
            .flare_axis_pos = 1.821688e-44f,
            .size = 0.0f,
            .uv = {0x304E5553, 0x41522E37, 0x00000057, 0x00000000}
        }
    }, {
        .texture = {
            .base = {.type = -1098203005, .count = 0x3C44C048},
            .texture_name = {0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, -8, 0x00, 0x00, 0x00, -8, 0x00, 0x00, 0x00}
        },
        .params = {
            .flare_axis_pos = 1.821688e-44f,
            .size = 0.0f,
            .uv = {0x304E5553, 0x41522E39, 0x00000057, 0x00000000}
        }
    }, {
        .texture = {
            .base = {.type = -1093337612, .count = 0x3DB2DD58},
            .texture_name = {0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, -8, 0x00, 0x00, 0x00, -8, 0x00, 0x00, 0x00}
        },
        .params = {
            .flare_axis_pos = 1.821688e-44f,
            .size = 0.0f,
            .uv = {0x434E5553, 0x2E4D4152, 0x00574152, 0x00000000}
        }
    }, {
        .texture = {
            .base = {.type = -1092297425, .count = 0x3E1FDC3A},
            .texture_name = {-126, 0x00, 0x00, 0x00, -126, 0x00, 0x00, 0x00, -2, 0x00, 0x00, 0x00, -2, 0x00, 0x00, 0x00}
        },
        .params = {
            .flare_axis_pos = 1.821688e-44f,
            .size = 0.0f,
            .uv = {0x314E5553, 0x41522E31, 0x00000057, 0x00000000}
        }
    }, {
        .texture = {
            .base = {.type = -1091357901, .count = 0x3D375614},
            .texture_name = {0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, -8, 0x00, 0x00, 0x00, -8, 0x00, 0x00, 0x00}
        },
        .params = {
            .flare_axis_pos = 1.821688e-44f,
            .size = 0.0f,
            .uv = {0x314E5553, 0x41522E32, 0x00000057, 0x00000000}
        }
    }, {
        .texture = {
            .base = {.type = -1088119898, .count = 0x3D886260},
            .texture_name = {0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, -8, 0x00, 0x00, 0x00, -8, 0x00, 0x00, 0x00}
        },
        .params = {
            .flare_axis_pos = 1.821688e-44f,
            .size = 0.0f,
            .uv = {0x314E5553, 0x41522E33, 0x00000057, 0x00000000}
        }
    }, {
        .texture = {
            .base = {.type = -1087599804, .count = 0x3D862602},
            .texture_name = {0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, -8, 0x00, 0x00, 0x00, -8, 0x00, 0x00, 0x00}
        },
        .params = {
            .flare_axis_pos = 1.821688e-44f,
            .size = 0.0f,
            .uv = {0x434E5553, 0x2E4D4152, 0x00574152, 0x00000000}
        }
    }, {
        .texture = {
            .base = {.type = -1082130432, .count = 0x3E6E1D11},
            .texture_name = {-126, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, -2, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00}
        },
        .params = {
            .flare_axis_pos = 1.821688e-44f,
            .size = 0.0f,
            .uv = {0x434E5553, 0x2E4D4152, 0x00574152, 0x00000000}
        }
    }}
};

// SMRGLLightPrimitive[84]
SMRGLLightPrimitive g_SMRGLLightPrimitive_ARRAY_005f1c3c[84] = {
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0x00004219,
            .B = 0xFFFF0952,
            .C = 0x000011B5,
            .D = 0xFF0951BE
        },
        .vertices = {0x00000002, 0x00000001, 0x00000000, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0x00003063,
            .B = 0xFFFF0952,
            .C = 0x00003063,
            .D = 0xFF0951BE
        },
        .vertices = {0x00000001, 0x00000003, 0x00000000, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0x000011B5,
            .B = 0xFFFF0952,
            .C = 0x00004219,
            .D = 0xFF0951BE
        },
        .vertices = {0x00000003, 0x00000004, 0x00000000, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0xFFFFEE4B,
            .B = 0xFFFF0952,
            .C = 0x00004219,
            .D = 0xFF0951BE
        },
        .vertices = {0x00000004, 0x00000005, 0x00000000, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0xFFFFCF9D,
            .B = 0xFFFF0952,
            .C = 0x00003063,
            .D = 0xFF0951BE
        },
        .vertices = {0x00000005, 0x00000006, 0x00000000, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0xFFFFBDE7,
            .B = 0xFFFF0952,
            .C = 0x000011B5,
            .D = 0xFF0951BE
        },
        .vertices = {0x00000006, 0x00000007, 0x00000000, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0xFFFFBDE7,
            .B = 0xFFFF0952,
            .C = 0xFFFFEE4B,
            .D = 0xFF0951BE
        },
        .vertices = {0x00000007, 0x00000008, 0x00000000, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0xFFFFCF9D,
            .B = 0xFFFF0952,
            .C = 0xFFFFCF9D,
            .D = 0xFF0951BE
        },
        .vertices = {0x00000008, 0x00000009, 0x00000000, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0xFFFFEE4B,
            .B = 0xFFFF0952,
            .C = 0xFFFFBDE7,
            .D = 0xFF0951BE
        },
        .vertices = {0x00000009, 0x0000000A, 0x00000000, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0x000011B5,
            .B = 0xFFFF0952,
            .C = 0xFFFFBDE7,
            .D = 0xFF0951BE
        },
        .vertices = {0x0000000A, 0x0000000B, 0x00000000, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0x00003063,
            .B = 0xFFFF0952,
            .C = 0xFFFFCF9D,
            .D = 0xFF0951BE
        },
        .vertices = {0x0000000B, 0x0000000C, 0x00000000, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0x00004219,
            .B = 0xFFFF0952,
            .C = 0xFFFFEE4B,
            .D = 0xFF0951BE
        },
        .vertices = {0x0000000C, 0x00000002, 0x00000000, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0x00004219,
            .B = 0x0000F6AE,
            .C = 0x000011B5,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000000, 0x00000008, 0x00000007, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0x00003063,
            .B = 0x0000F6AE,
            .C = 0x00003063,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000000, 0x00000009, 0x00000008, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0x000011B5,
            .B = 0x0000F6AE,
            .C = 0x00004219,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000000, 0x0000000A, 0x00000009, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0xFFFFEE4B,
            .B = 0x0000F6AE,
            .C = 0x00004219,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000000, 0x0000000B, 0x0000000A, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0xFFFFCF9D,
            .B = 0x0000F6AE,
            .C = 0x00003063,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000000, 0x0000000C, 0x0000000B, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0xFFFFBDE7,
            .B = 0x0000F6AE,
            .C = 0x000011B5,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000000, 0x00000002, 0x0000000C, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0xFFFFBDE7,
            .B = 0x0000F6AE,
            .C = 0xFFFFEE4B,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000000, 0x00000001, 0x00000002, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0xFFFFCF9D,
            .B = 0x0000F6AE,
            .C = 0xFFFFCF9D,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000000, 0x00000003, 0x00000001, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0xFFFFEE4B,
            .B = 0x0000F6AE,
            .C = 0xFFFFBDE7,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000000, 0x00000004, 0x00000003, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0x000011B5,
            .B = 0x0000F6AE,
            .C = 0xFFFFBDE7,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000000, 0x00000005, 0x00000004, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0x00003063,
            .B = 0x0000F6AE,
            .C = 0xFFFFCF9D,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000000, 0x00000006, 0x00000005, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0x00004219,
            .B = 0x0000F6AE,
            .C = 0xFFFFEE4B,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000000, 0x00000007, 0x00000006, 0x00000000}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0x0000B1DA,
            .B = 0x0000B1DA,
            .C = 0x00002FA7,
            .D = 0x00F2F36D
        },
        .vertices = {0x00000007, 0x00000008, 0x0000000E, 0x0000000D}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0x00008232,
            .B = 0x0000B1DA,
            .C = 0x00008232,
            .D = 0x00F2F36F
        },
        .vertices = {0x00000008, 0x00000009, 0x0000000F, 0x0000000E}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0x00002FA7,
            .B = 0x0000B1DA,
            .C = 0x0000B1DA,
            .D = 0x00F2F36C
        },
        .vertices = {0x00000009, 0x0000000A, 0x00000010, 0x0000000F}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0xFFFFD059,
            .B = 0x0000B1DA,
            .C = 0x0000B1DA,
            .D = 0x00F2F36D
        },
        .vertices = {0x0000000A, 0x0000000B, 0x00000011, 0x00000010}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0xFFFF7DCE,
            .B = 0x0000B1DA,
            .C = 0x00008232,
            .D = 0x00F2F36F
        },
        .vertices = {0x0000000B, 0x0000000C, 0x00000012, 0x00000011}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0xFFFF4E26,
            .B = 0x0000B1DA,
            .C = 0x00002FA7,
            .D = 0x00F2F36C
        },
        .vertices = {0x0000000C, 0x00000002, 0x00000013, 0x00000012}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0xFFFF4E26,
            .B = 0x0000B1DA,
            .C = 0xFFFFD059,
            .D = 0x00F2F36D
        },
        .vertices = {0x00000002, 0x00000001, 0x00000014, 0x00000013}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0xFFFF7DCE,
            .B = 0x0000B1DA,
            .C = 0xFFFF7DCE,
            .D = 0x00F2F36F
        },
        .vertices = {0x00000001, 0x00000003, 0x00000015, 0x00000014}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0xFFFFD059,
            .B = 0x0000B1DA,
            .C = 0xFFFF4E26,
            .D = 0x00F2F36C
        },
        .vertices = {0x00000003, 0x00000004, 0x00000016, 0x00000015}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0x00002FA7,
            .B = 0x0000B1DA,
            .C = 0xFFFF4E26,
            .D = 0x00F2F36D
        },
        .vertices = {0x00000004, 0x00000005, 0x00000017, 0x00000016}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0x00008232,
            .B = 0x0000B1DA,
            .C = 0xFFFF7DCE,
            .D = 0x00F2F36F
        },
        .vertices = {0x00000005, 0x00000006, 0x00000018, 0x00000017}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0x0000B1DA,
            .B = 0x0000B1DA,
            .C = 0xFFFFD059,
            .D = 0x00F2F36C
        },
        .vertices = {0x00000006, 0x00000007, 0x0000000D, 0x00000018}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0x0000EF62,
            .B = 0x00004024,
            .C = 0x00004024,
            .D = 0x00EF629C
        },
        .vertices = {0x0000000D, 0x0000000E, 0x0000001A, 0x00000019}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0x0000AF3E,
            .B = 0x00004024,
            .C = 0x0000AF3E,
            .D = 0x00EF62A2
        },
        .vertices = {0x0000000E, 0x0000000F, 0x0000001B, 0x0000001A}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0x00004024,
            .B = 0x00004024,
            .C = 0x0000EF62,
            .D = 0x00EF62A4
        },
        .vertices = {0x0000000F, 0x00000010, 0x0000001C, 0x0000001B}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0xFFFFBFDC,
            .B = 0x00004024,
            .C = 0x0000EF62,
            .D = 0x00EF629C
        },
        .vertices = {0x00000010, 0x00000011, 0x0000001D, 0x0000001C}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0xFFFF50C2,
            .B = 0x00004024,
            .C = 0x0000AF3E,
            .D = 0x00EF62A2
        },
        .vertices = {0x00000011, 0x00000012, 0x0000001E, 0x0000001D}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0xFFFF109E,
            .B = 0x00004024,
            .C = 0x00004024,
            .D = 0x00EF62A4
        },
        .vertices = {0x00000012, 0x00000013, 0x0000001F, 0x0000001E}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0xFFFF109E,
            .B = 0x00004024,
            .C = 0xFFFFBFDC,
            .D = 0x00EF629C
        },
        .vertices = {0x00000013, 0x00000014, 0x00000020, 0x0000001F}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0xFFFF50C2,
            .B = 0x00004024,
            .C = 0xFFFF50C2,
            .D = 0x00EF62A2
        },
        .vertices = {0x00000014, 0x00000015, 0x00000021, 0x00000020}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0xFFFFBFDC,
            .B = 0x00004024,
            .C = 0xFFFF109E,
            .D = 0x00EF62A4
        },
        .vertices = {0x00000015, 0x00000016, 0x00000022, 0x00000021}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0x00004024,
            .B = 0x00004024,
            .C = 0xFFFF109E,
            .D = 0x00EF629C
        },
        .vertices = {0x00000016, 0x00000017, 0x00000023, 0x00000022}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0x0000AF3E,
            .B = 0x00004024,
            .C = 0xFFFF50C2,
            .D = 0x00EF62A2
        },
        .vertices = {0x00000017, 0x00000018, 0x00000024, 0x00000023}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0x0000EF62,
            .B = 0x00004024,
            .C = 0xFFFFBFDC,
            .D = 0x00EF62A4
        },
        .vertices = {0x00000018, 0x0000000D, 0x00000019, 0x00000024}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0x0000EF62,
            .B = 0xFFFFBFDC,
            .C = 0x00004024,
            .D = 0x00EF62A3
        },
        .vertices = {0x00000019, 0x0000001A, 0x00000026, 0x00000025}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0x0000AF3E,
            .B = 0xFFFFBFDC,
            .C = 0x0000AF3E,
            .D = 0x00EF62A2
        },
        .vertices = {0x0000001A, 0x0000001B, 0x00000027, 0x00000026}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0x00004024,
            .B = 0xFFFFBFDC,
            .C = 0x0000EF62,
            .D = 0x00EF629D
        },
        .vertices = {0x0000001B, 0x0000001C, 0x00000028, 0x00000027}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0xFFFFBFDC,
            .B = 0xFFFFBFDC,
            .C = 0x0000EF62,
            .D = 0x00EF62A3
        },
        .vertices = {0x0000001C, 0x0000001D, 0x00000029, 0x00000028}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0xFFFF50C2,
            .B = 0xFFFFBFDC,
            .C = 0x0000AF3E,
            .D = 0x00EF62A2
        },
        .vertices = {0x0000001D, 0x0000001E, 0x0000002A, 0x00000029}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0xFFFF109E,
            .B = 0xFFFFBFDC,
            .C = 0x00004024,
            .D = 0x00EF629D
        },
        .vertices = {0x0000001E, 0x0000001F, 0x0000002B, 0x0000002A}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0xFFFF109E,
            .B = 0xFFFFBFDC,
            .C = 0xFFFFBFDC,
            .D = 0x00EF62A3
        },
        .vertices = {0x0000001F, 0x00000020, 0x0000002C, 0x0000002B}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0xFFFF50C2,
            .B = 0xFFFFBFDC,
            .C = 0xFFFF50C2,
            .D = 0x00EF62A2
        },
        .vertices = {0x00000020, 0x00000021, 0x0000002D, 0x0000002C}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0xFFFFBFDC,
            .B = 0xFFFFBFDC,
            .C = 0xFFFF109E,
            .D = 0x00EF629D
        },
        .vertices = {0x00000021, 0x00000022, 0x0000002E, 0x0000002D}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0x00004024,
            .B = 0xFFFFBFDC,
            .C = 0xFFFF109E,
            .D = 0x00EF62A3
        },
        .vertices = {0x00000022, 0x00000023, 0x0000002F, 0x0000002E}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0x0000AF3E,
            .B = 0xFFFFBFDC,
            .C = 0xFFFF50C2,
            .D = 0x00EF62A2
        },
        .vertices = {0x00000023, 0x00000024, 0x00000030, 0x0000002F}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0x0000EF62,
            .B = 0xFFFFBFDC,
            .C = 0xFFFFBFDC,
            .D = 0x00EF629D
        },
        .vertices = {0x00000024, 0x00000019, 0x00000025, 0x00000030}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0x0000B1DA,
            .B = 0xFFFF4E26,
            .C = 0x00002FA7,
            .D = 0x00F2F36C
        },
        .vertices = {0x00000025, 0x00000026, 0x00000032, 0x00000031}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0x00008232,
            .B = 0xFFFF4E26,
            .C = 0x00008232,
            .D = 0x00F2F36F
        },
        .vertices = {0x00000026, 0x00000027, 0x00000033, 0x00000032}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0x00002FA7,
            .B = 0xFFFF4E26,
            .C = 0x0000B1DA,
            .D = 0x00F2F36C
        },
        .vertices = {0x00000027, 0x00000028, 0x00000034, 0x00000033}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0xFFFFD059,
            .B = 0xFFFF4E26,
            .C = 0x0000B1DA,
            .D = 0x00F2F36C
        },
        .vertices = {0x00000028, 0x00000029, 0x00000035, 0x00000034}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0xFFFF7DCE,
            .B = 0xFFFF4E26,
            .C = 0x00008232,
            .D = 0x00F2F36F
        },
        .vertices = {0x00000029, 0x0000002A, 0x00000036, 0x00000035}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0xFFFF4E26,
            .B = 0xFFFF4E26,
            .C = 0x00002FA7,
            .D = 0x00F2F36C
        },
        .vertices = {0x0000002A, 0x0000002B, 0x00000037, 0x00000036}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0xFFFF4E26,
            .B = 0xFFFF4E26,
            .C = 0xFFFFD059,
            .D = 0x00F2F36C
        },
        .vertices = {0x0000002B, 0x0000002C, 0x00000038, 0x00000037}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0xFFFF7DCE,
            .B = 0xFFFF4E26,
            .C = 0xFFFF7DCE,
            .D = 0x00F2F36F
        },
        .vertices = {0x0000002C, 0x0000002D, 0x00000039, 0x00000038}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0xFFFFD059,
            .B = 0xFFFF4E26,
            .C = 0xFFFF4E26,
            .D = 0x00F2F36C
        },
        .vertices = {0x0000002D, 0x0000002E, 0x0000003A, 0x00000039}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0x00002FA7,
            .B = 0xFFFF4E26,
            .C = 0xFFFF4E26,
            .D = 0x00F2F36C
        },
        .vertices = {0x0000002E, 0x0000002F, 0x0000003B, 0x0000003A}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0x00008232,
            .B = 0xFFFF4E26,
            .C = 0xFFFF7DCE,
            .D = 0x00F2F36F
        },
        .vertices = {0x0000002F, 0x00000030, 0x0000003C, 0x0000003B}
    },
    {
        .base = {.count = 0x00000004},
        .normal = {
            .A = 0x0000B1DA,
            .B = 0xFFFF4E26,
            .C = 0xFFFFD059,
            .D = 0x00F2F36C
        },
        .vertices = {0x00000030, 0x00000025, 0x00000031, 0x0000003C}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0x00004219,
            .B = 0xFFFF0952,
            .C = 0x000011B5,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000031, 0x00000032, 0x0000003D, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0x00003063,
            .B = 0xFFFF0952,
            .C = 0x00003063,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000032, 0x00000033, 0x0000003D, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0x000011B5,
            .B = 0xFFFF0952,
            .C = 0x00004219,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000033, 0x00000034, 0x0000003D, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0xFFFFEE4B,
            .B = 0xFFFF0952,
            .C = 0x00004219,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000034, 0x00000035, 0x0000003D, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0xFFFFCF9D,
            .B = 0xFFFF0952,
            .C = 0x00003063,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000035, 0x00000036, 0x0000003D, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0xFFFFBDE7,
            .B = 0xFFFF0952,
            .C = 0x000011B5,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000036, 0x00000037, 0x0000003D, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0xFFFFBDE7,
            .B = 0xFFFF0952,
            .C = 0xFFFFEE4B,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000037, 0x00000038, 0x0000003D, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0xFFFFCF9D,
            .B = 0xFFFF0952,
            .C = 0xFFFFCF9D,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000038, 0x00000039, 0x0000003D, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0xFFFFEE4B,
            .B = 0xFFFF0952,
            .C = 0xFFFFBDE7,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000039, 0x0000003A, 0x0000003D, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0x000011B5,
            .B = 0xFFFF0952,
            .C = 0xFFFFBDE7,
            .D = 0x00F6AE42
        },
        .vertices = {0x0000003A, 0x0000003B, 0x0000003D, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0x00003063,
            .B = 0xFFFF0952,
            .C = 0xFFFFCF9D,
            .D = 0x00F6AE42
        },
        .vertices = {0x0000003B, 0x0000003C, 0x0000003D, 0x00000000}
    },
    {
        .base = {.count = 0x00000003},
        .normal = {
            .A = 0x00004219,
            .B = 0xFFFF0952,
            .C = 0xFFFFEE4B,
            .D = 0x00F6AE42
        },
        .vertices = {0x0000003C, 0x00000031, 0x0000003D, 0x00000000}
    }
};

// SMRGLPrimitiveQuad*[2000]
SMRGLPrimitiveQuad* g_SMRGLPrimitiveQuad_PTR_ARRAY_005f2b04[2000] = {};

// SMRGLSkyTexture*
SMRGLSkyTexture* g_SMRGLSkyTexture_PTR_005f4a58 = (SMRGLSkyTexture*)&g_SMRGLSkyTexture_ARRAY_01c0b558;

// SMRGLTextureBasic
SMRGLTextureBasic g_SMRGLTextureBasic_005f0f5c = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "CHAR2.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005f16c4 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BLUEGLOW.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005f1830 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BACKGND.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005f193c = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "headlite.raw"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005fc964 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BHOLE.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005fc97c = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "wallsmoke.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005fc994 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BLAST1.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005fc9ac = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "SPARK.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005fc9c4 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BLUSPARK.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005fc9dc = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "GRNSPARK.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005fca3c = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "FIREFLY.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005fca9c = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "REDSPARK.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005fcab4 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "LASER.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005fcacc = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BEAMFUZZ.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005fcae4 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "RETICLE2.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005fcafc = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "HEADLITE.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005fcb14 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "ZG01100.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005fd5f4 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BLAST1.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005fdbc4 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "POPCORN.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005fdbdc = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "RAINDRP1.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005fde70 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "GLOW1.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005fe8c8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BBWHITE.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005fed34 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BGLOB.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005ffeac = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "FOOTSTEP.RAW"
};

// SMRGLTextureBasic[116]
SMRGLTextureBasic g_SMRGLTextureBasic_ARRAY_005ff3ac[116] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-17.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-18.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-19.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-20.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-21.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-22.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-23.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-24.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-25.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-26.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-27.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-28.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-29.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-17.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-18.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-19.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-20.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-21.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-22.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-23.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-24.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-25.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-26.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-27.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-28.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-29.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-17.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-18.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-19.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-20.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-21.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-22.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-23.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-24.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-25.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-26.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-27.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-28.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-29.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-17.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-18.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-19.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-20.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-21.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-22.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-23.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-24.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-25.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-26.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-27.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-28.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-29.RAW"
    }
};

// SMRGLTextureBasic[40]
SMRGLTextureBasic g_SMRGLTextureBasic_ARRAY_005fc5a4[40] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0050.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0051.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0052.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0053.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0054.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0055.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0056.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0057.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0058.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0059.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0060.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0061.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0062.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0063.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0064.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0065.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0066.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0067.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0068.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0069.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0070.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0071.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0072.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0073.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0074.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0075.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0076.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0077.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0078.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0079.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0080.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0081.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0082.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0083.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0084.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0085.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0086.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0087.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0088.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0089.RAW"
    }
};

// SMRGLTextureBasic[4]
SMRGLTextureBasic g_SMRGLTextureBasic_ARRAY_005fed4c[4] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BHSP1.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BHSP2.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BHSP3.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BHSP4.RAW"
    }
};

// SMRGLTextureBasic[64]
SMRGLTextureBasic g_SMRGLTextureBasic_ARRAY_005fedac[64] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-16.RAW"
    }
};

// SMRGLTextureBasic[6]
SMRGLTextureBasic g_SMRGLTextureBasic_ARRAY_005fd60c[6] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "fr46190.raw"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "fr46191.raw"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "fr46192.raw"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "fr46193.raw"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "fr46194.raw"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "fr46195.raw"
    }
};

// WatcomStaticDestructorNode
WatcomStaticDestructorNode DAT_005F0C67 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005DBE00,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_ARRAY_007dffc0
};
WatcomStaticDestructorNode DAT_005F0C77 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005DBE0C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_ARRAY_007e0010
};
WatcomStaticDestructorNode DAT_005F0C87 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005DBE18,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAudioRecPuzzleInstance
};
WatcomStaticDestructorNode DAT_005F0C97 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005DBE24,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CChemPuzzleInstance
};
WatcomStaticDestructorNode DAT_005F0E28 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005DC960,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CDemonFilter_ARRAY_007e17b8
};
WatcomStaticDestructorNode g_ConsoleDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_CConsoleDestructorCall,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CConsoleInstance
};
WatcomStaticDestructorNode g_CLZWDecompressDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005DDFB0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CLZWDecompressInstance
};
WatcomStaticDestructorNode DAT_005F189C = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005DE300,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CDemonFilter_ARRAY_01548c00
};
WatcomStaticDestructorNode DAT_005F18AC = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005DE30C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CDemonFilter_ARRAY_01548e60
};
WatcomStaticDestructorNode g_CFilterCacheDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005DE318,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CFilterCacheInstance
};
WatcomStaticDestructorNode g_CFilterFXDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005DE324,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CFilterFXInstance
};
WatcomStaticDestructorNode g_CKeyFramedModelPoolDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005DE550,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CKeyFramedModelPool
};
WatcomStaticDestructorNode g_CEditorToolsDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005DEFF0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CEditorToolsInstance
};
WatcomStaticDestructorNode g_CFireEffectStakesDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005DF860,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_StakePool
};
WatcomStaticDestructorNode g_CFireEffectSparksDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005DF86C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_SparkPool
};
WatcomStaticDestructorNode DAT_005FC510 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005DF878,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CFirefly_ARRAY_01cba2b8
};
WatcomStaticDestructorNode DAT_005FC520 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005DF884,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CGlassParticle_ARRAY_01cbc0f0
};
WatcomStaticDestructorNode g_CFireEffectFireballsDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005DF890,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_FireballPool
};
WatcomStaticDestructorNode g_CFireEffectRocksDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005DF89C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_RockPool
};
WatcomStaticDestructorNode DAT_005FC550 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005DF8A8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CLeaf_ARRAY_01cf3b88
};
WatcomStaticDestructorNode g_CFireEffectTossesDestructorNodes = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005DF8B4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_TossPool
};
WatcomStaticDestructorNode g_CFireEffectShellsDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005DF8C0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_ShellPool
};
WatcomStaticDestructorNode g_CFireEffectPopcornsDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005DF8CC,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_PopcornPool
};
WatcomStaticDestructorNode g_CFireEffectRainDropsDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005DF8D8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_RainDropPool
};
WatcomStaticDestructorNode DAT_005FE280 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E01B0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&SNotesSection_ARRAY_01d0d214
};
WatcomStaticDestructorNode DAT_005FE290 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E01BC,
    .registration_type = 0x00000001,
    .object_instance = (void *)&SNotesMap_ARRAY_01d0e370
};
WatcomStaticDestructorNode DAT_005FE2A0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E01C8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d19bac
};
WatcomStaticDestructorNode DAT_005FE2B0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E01D4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_ARRAY_01d19bc0
};
WatcomStaticDestructorNode DAT_005FE2C0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E01E0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d19c38
};
WatcomStaticDestructorNode DAT_005FE2D0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E01EC,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d19c4c
};
WatcomStaticDestructorNode DAT_005FE2E0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E01F8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d19c60
};
WatcomStaticDestructorNode DAT_005FE2F0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E0204,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d19c74
};
WatcomStaticDestructorNode DAT_005FE300 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E0210,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d19c88
};
WatcomStaticDestructorNode DAT_005FE310 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E021C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d19c9c
};
WatcomStaticDestructorNode DAT_005FE320 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E0228,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d19cb0
};
WatcomStaticDestructorNode DAT_005FE330 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E0234,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d19cc4
};
WatcomStaticDestructorNode DAT_005FE340 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E0240,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d19cd8
};
WatcomStaticDestructorNode DAT_005FE350 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E024C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_STextViewInstance
};
WatcomStaticDestructorNode DAT_005FE360 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E0258,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CFieldNotesInstance
};
WatcomStaticDestructorNode g_CDemonLightDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E06A0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonLightInstance
};
WatcomStaticDestructorNode g_CGameDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E06AC,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGameInstance
};
WatcomStaticDestructorNode g_CPickListDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E06B8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CPickList
};
WatcomStaticDestructorNode DAT_005FE950 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E06C4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CDemonFilter_01d22af8
};
WatcomStaticDestructorNode DAT_005FE960 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E06D0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_ARRAY_01d22b4c
};
WatcomStaticDestructorNode g_CGoreDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E0E00,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGoreInstance
};
WatcomStaticDestructorNode DAT_005FED14 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E0E0C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_BloodParticles
};
WatcomStaticDestructorNode g_CGroundDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E1020,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGroundInstance
};

// _MMX_INTEGER
_MMX_INTEGER g_MMX_INTEGER_005f8b28 = {};
_MMX_INTEGER g_MMX_INTEGER_005f8b88 = {};
_MMX_INTEGER g_MMX_INTEGER_005f8b90 = {0x0040004000400040ULL};
_MMX_INTEGER g_MMX_INTEGER_005f8b98 = {0x0020002000200020ULL};
_MMX_INTEGER g_MMX_INTEGER_005f8ba0 = {0x0060006000600060ULL};

// char[100]
char g_CHAR_ARRAY_005fe970[100] = "";
char g_CHAR_ARRAY_005febf0[100] = "10.0.0.105";

// char[104]
char g_CHAR_ARRAY_005f0990[104] = "";

// char[260]
char g_CHAR_ARRAY_005fb868[260] = "";

// char[300]
char g_CHAR_ARRAY_005f09f8[300] = "";

// char[512]
char g_CHAR_ARRAY_005fb468[512] = "";
char g_CHAR_ARRAY_005fb668[512] = "";

// char[60]
char g_CHAR_ARRAY_005fdbf8[60] = "";

// float
float g_FLOAT_005f2af0 = 0.1f;
float g_FLOAT_005f4a5c = 5.0f;
float g_FLOAT_005fe9d4 = 3.0f;

// int
int g_INT_005f076c = 0x1;
int g_INT_005f0770 = 0xF8;
int g_INT_005f07bc = 0x1;
int g_INT_005f07c0 = 0xFFFFFF;
int g_CDemonActorClassVersion = 0x7;
int g_CAmmoClassVersion = 0x1;
int g_INT_005f0b58 = 0x1;
int g_INT_005f0b5c = 0x1;
int g_INT_005f0b60 = 0x1;
int g_CAmmoBoxClassVersion = 0x4;
int g_CBarrierClassVersion = 0x2;
int g_CBatClassVersion = 0x4;
int g_CBatteryClassVersion = 0x1;
int g_CBindEvilClassVersion = 0x1;
int g_CBirdClassVersion = 0x1;
int g_CBlunderbusClassVersion = 0x1;
int g_CBodyPartClassVersion = 0x6;
int g_CBoneGuyClassVersion = 0x5;
int g_INT_005f0d78 = 0x1;
int g_INT_005f0d7c = 0x1;
int g_INT_005f0d80 = 0x1;
int g_INT_005f0d84 = 0x1;
int g_CBoxActorClassVersion = 0x12;
int g_INT_005f0e3c = 0x2;
int g_CBugsClassVersion = 0x2;
int g_CBurncrossClassVersion = 0x1;
int g_CCarvedClassVersion = 0x1;
int g_CChainClassVersion = 0x4;
int g_CCharacterClassVersion = 0xE;
int g_INT_005f12f0 = 0x1;
int g_INT_005f12f4 = 0x7FFFFFFF;
int g_CConstructClassVersion = 0x3;
int g_INT_005f170c = 0x1;
int g_INT_005f1710 = 0x1;
int g_CZombieCowClassVersion = 0x2;
int g_CCrateClassVersion = 0x2;
int g_CCurtainClassVersion = 0x6;
int g_INT_005f17d8 = 0x10000;
int g_INT_005f17dc = 0xC80000;
int g_INT_005f17e0 = 0x3;
int g_INT_005f17e4 = 0x40;
int g_INT_005f17e8 = 0x40;
int g_INT_005f17ec = 0x40;
int g_INT_005f1848 = -1;
int g_CDemnfolkClassVersion = 0xC;
int g_CActorDestinationClassVersion = 0x4;
int g_CDiseaseClassVersion = 0x1;
int g_CZombieDogClassVersion = 0x2;
int g_INT_005f2a60 = 0x1;
int g_INT_005f2a64 = 0x1;
int g_INT_005f2a68 = 0x1;
int g_CDoorClassVersion = 0xD;
int g_INT_005f2aec = 0x1;
int g_INT_005f2b00 = 0x1;
int g_CDripClassVersion = 0x6;
int g_INT_005f4ab4 = 0;
int g_INT_005f4ab8 = 0;
int g_INT_005f4abc = 0;
int g_INT_005f4ac4 = 0;
int g_INT_005fb0e0 = 0x4;
int g_CDynamiteClassVersion = 0x1;
int g_INT_005fb144 = 0x9;
int g_INT_005fb148 = 0x9;
int g_CElephantGunClassVersion = 0x1;
int g_CEmitterClassVersion = 0xE;
int g_CEnemyClassVersion = 0xE;
int g_INT_005fba18 = 0x140;
int g_INT_005fba1c = 0xC8;
int g_INT_005fba20 = 0x8;
int g_INT_005fba24 = 0x1;
int g_INT_005fba28 = 0x100;
int g_INT_005fba2c = 0x7F;
int g_INT_005fba30 = 0x4;
int g_INT_005fba38 = 0xFF;
int g_INT_005fba3c = 0x1;
int g_INT_005fba44 = 0x10000;
int g_CExorcismClassVersion = 0x1;
int g_INT_005fbaf4 = 0x2;
int g_INT_005fc4b4 = 0x496004;
int g_CFilmReelClassVersion = 0x2;
int g_INT_005fc4bc = 0x2;
int g_CFirestaffClassVersion = 0x1;
int g_CFlameClassVersion = 0x7;
int g_CFlameCanClassVersion = 0x1;
int g_CFlashlightClassVersion = 0x1;
int g_INT_005fe370 = 0x1;
int g_INT_005fe374 = 0x1;
int g_INT_005fe378 = 0x4A;
int g_INT_005fe37c = 0x1AE;
int g_INT_005fe380 = 0x1F4;
int g_INT_005fe384 = 0x1AE;
int g_INT_005fe388 = 0xFA;
int g_INT_005fe38c = 0x1AE;
int g_INT_005fe390 = 0x262;
int g_INT_005fe394 = 0x1C0;
int g_INT_005fe3a8 = -1;
int g_CFliesClassVersion = 0x3;
int g_CFlintlockClassVersion = 0x2;
int g_INT_005fe9ec = 0x40;
int g_INT_005fe9f0 = 0x40;
int g_CGargoyleClassVersion = 0x2;
int g_CGasMaskClassVersion = 0x1;
int g_CGhoulClassVersion = 0x7;
int g_CGlassClassVersion = 0x6;
int g_CGogglesClassVersion = 0x1;
int g_CGraveClassVersion = 0x4;
int g_CGunClassVersion = 0x1;
int g_CHealClassVersion = 0x1;
int g_CHealthItemClassVersion = 0x4;
int g_INT_005fff88 = 0x1;
int g_CHeroClassVersion = 0xF;
int g_INT_005fffbc = 0x2;

// int[16]
int g_INT_ARRAY_005f08d0[16] = {
    0x000000FF, 0x000000F8, 0x00000002, 0x00000004, 0x00000001, 0x00000003, 0x00000005, 0x00000006,
    0x00000007, 0x000000F9, 0x000000FA, 0x000000FB, 0x000000E6, 0x000000F5, 0x00000000, 0x000000FD
};

// int[8]
int g_INT_ARRAY_005f17f0[8] = {0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000000, -1, -1, -1};
int g_INT_ARRAY_005f1810[8] = {-1, -1, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000000, -1};

// qword
qword g_QWORD_005f8b68 = 0;
qword g_QWORD_005f8b70 = 0x8000800080008;
qword g_QWORD_005f8b78 = 0x4000400040004;
qword g_QWORD_005f8b80 = 0xC000C000C000C;

// uint
uint g_UINT_005f4a98 = 0;
uint g_UINT_005f4a9c = 0;
uint g_UINT_005f4aa4 = 0;
uint g_UINT_005fba34 = 0x5;
uint g_UINT_005fba40 = 0x1;

// uint*
uint* g_UINT_PTR_005f4ac8 = nullptr;

// ulonglong[256]
ulonglong g_ULONGLONG_ARRAY_005fbc30[256] = {
    0x0000000000000000, 0x0101010101010101, 0x0202020202020202, 0x0303030303030303, 0x0404040404040404, 0x0505050505050505, 0x0606060606060606, 0x0707070707070707,
    0x0808080808080808, 0x0909090909090909, 0x0A0A0A0A0A0A0A0A, 0x0B0B0B0B0B0B0B0B, 0x0C0C0C0C0C0C0C0C, 0x0D0D0D0D0D0D0D0D, 0x0E0E0E0E0E0E0E0E, 0x0F0F0F0F0F0F0F0F,
    0x1010101010101010, 0x1111111111111111, 0x1212121212121212, 0x1313131313131313, 0x1414141414141414, 0x1515151515151515, 0x1616161616161616, 0x1717171717171717,
    0x1818181818181818, 0x1919191919191919, 0x1A1A1A1A1A1A1A1A, 0x1B1B1B1B1B1B1B1B, 0x1C1C1C1C1C1C1C1C, 0x1D1D1D1D1D1D1D1D, 0x1E1E1E1E1E1E1E1E, 0x1F1F1F1F1F1F1F1F,
    0x2020202020202020, 0x2121212121212121, 0x2222222222222222, 0x2323232323232323, 0x2424242424242424, 0x2525252525252525, 0x2626262626262626, 0x2727272727272727,
    0x2828282828282828, 0x2929292929292929, 0x2A2A2A2A2A2A2A2A, 0x2B2B2B2B2B2B2B2B, 0x2C2C2C2C2C2C2C2C, 0x2D2D2D2D2D2D2D2D, 0x2E2E2E2E2E2E2E2E, 0x2F2F2F2F2F2F2F2F,
    0x3030303030303030, 0x3131313131313131, 0x3232323232323232, 0x3333333333333333, 0x3434343434343434, 0x3535353535353535, 0x3636363636363636, 0x3737373737373737,
    0x3838383838383838, 0x3939393939393939, 0x3A3A3A3A3A3A3A3A, 0x3B3B3B3B3B3B3B3B, 0x3C3C3C3C3C3C3C3C, 0x3D3D3D3D3D3D3D3D, 0x3E3E3E3E3E3E3E3E, 0x3F3F3F3F3F3F3F3F,
    0x4040404040404040, 0x4141414141414141, 0x4242424242424242, 0x4343434343434343, 0x4444444444444444, 0x4545454545454545, 0x4646464646464646, 0x4747474747474747,
    0x4848484848484848, 0x4949494949494949, 0x4A4A4A4A4A4A4A4A, 0x4B4B4B4B4B4B4B4B, 0x4C4C4C4C4C4C4C4C, 0x4D4D4D4D4D4D4D4D, 0x4E4E4E4E4E4E4E4E, 0x4F4F4F4F4F4F4F4F,
    0x5050505050505050, 0x5151515151515151, 0x5252525252525252, 0x5353535353535353, 0x5454545454545454, 0x5555555555555555, 0x5656565656565656, 0x5757575757575757,
    0x5858585858585858, 0x5959595959595959, 0x5A5A5A5A5A5A5A5A, 0x5B5B5B5B5B5B5B5B, 0x5C5C5C5C5C5C5C5C, 0x5D5D5D5D5D5D5D5D, 0x5E5E5E5E5E5E5E5E, 0x5F5F5F5F5F5F5F5F,
    0x6060606060606060, 0x6161616161616161, 0x6262626262626262, 0x6363636363636363, 0x6464646464646464, 0x6565656565656565, 0x6666666666666666, 0x6767676767676767,
    0x6868686868686868, 0x6969696969696969, 0x6A6A6A6A6A6A6A6A, 0x6B6B6B6B6B6B6B6B, 0x6C6C6C6C6C6C6C6C, 0x6D6D6D6D6D6D6D6D, 0x6E6E6E6E6E6E6E6E, 0x6F6F6F6F6F6F6F6F,
    0x7070707070707070, 0x7171717171717171, 0x7272727272727272, 0x7373737373737373, 0x7474747474747474, 0x7575757575757575, 0x7676767676767676, 0x7777777777777777,
    0x7878787878787878, 0x7979797979797979, 0x7A7A7A7A7A7A7A7A, 0x7B7B7B7B7B7B7B7B, 0x7C7C7C7C7C7C7C7C, 0x7D7D7D7D7D7D7D7D, 0x7E7E7E7E7E7E7E7E, 0x7F7F7F7F7F7F7F7F,
    0x8080808080808080, 0x8181818181818181, 0x8282828282828282, 0x8383838383838383, 0x8484848484848484, 0x8585858585858585, 0x8686868686868686, 0x8787878787878787,
    0x8888888888888888, 0x8989898989898989, 0x8A8A8A8A8A8A8A8A, 0x8B8B8B8B8B8B8B8B, 0x8C8C8C8C8C8C8C8C, 0x8D8D8D8D8D8D8D8D, 0x8E8E8E8E8E8E8E8E, 0x8F8F8F8F8F8F8F8F,
    0x9090909090909090, 0x9191919191919191, 0x9292929292929292, 0x9393939393939393, 0x9494949494949494, 0x9595959595959595, 0x9696969696969696, 0x9797979797979797,
    0x9898989898989898, 0x9999999999999999, 0x9A9A9A9A9A9A9A9A, 0x9B9B9B9B9B9B9B9B, 0x9C9C9C9C9C9C9C9C, 0x9D9D9D9D9D9D9D9D, 0x9E9E9E9E9E9E9E9E, 0x9F9F9F9F9F9F9F9F,
    0xA0A0A0A0A0A0A0A0, 0xA1A1A1A1A1A1A1A1, 0xA2A2A2A2A2A2A2A2, 0xA3A3A3A3A3A3A3A3, 0xA4A4A4A4A4A4A4A4, 0xA5A5A5A5A5A5A5A5, 0xA6A6A6A6A6A6A6A6, 0xA7A7A7A7A7A7A7A7,
    0xA8A8A8A8A8A8A8A8, 0xA9A9A9A9A9A9A9A9, 0xAAAAAAAAAAAAAAAA, 0xABABABABABABABAB, 0xACACACACACACACAC, 0xADADADADADADADAD, 0xAEAEAEAEAEAEAEAE, 0xAFAFAFAFAFAFAFAF,
    0xB0B0B0B0B0B0B0B0, 0xB1B1B1B1B1B1B1B1, 0xB2B2B2B2B2B2B2B2, 0xB3B3B3B3B3B3B3B3, 0xB4B4B4B4B4B4B4B4, 0xB5B5B5B5B5B5B5B5, 0xB6B6B6B6B6B6B6B6, 0xB7B7B7B7B7B7B7B7,
    0xB8B8B8B8B8B8B8B8, 0xB9B9B9B9B9B9B9B9, 0xBABABABABABABABA, 0xBBBBBBBBBBBBBBBB, 0xBCBCBCBCBCBCBCBC, 0xBDBDBDBDBDBDBDBD, 0xBEBEBEBEBEBEBEBE, 0xBFBFBFBFBFBFBFBF,
    0xC0C0C0C0C0C0C0C0, 0xC1C1C1C1C1C1C1C1, 0xC2C2C2C2C2C2C2C2, 0xC3C3C3C3C3C3C3C3, 0xC4C4C4C4C4C4C4C4, 0xC5C5C5C5C5C5C5C5, 0xC6C6C6C6C6C6C6C6, 0xC7C7C7C7C7C7C7C7,
    0xC8C8C8C8C8C8C8C8, 0xC9C9C9C9C9C9C9C9, 0xCACACACACACACACA, 0xCBCBCBCBCBCBCBCB, 0xCCCCCCCCCCCCCCCC, 0xCDCDCDCDCDCDCDCD, 0xCECECECECECECECE, 0xCFCFCFCFCFCFCFCF,
    0xD0D0D0D0D0D0D0D0, 0xD1D1D1D1D1D1D1D1, 0xD2D2D2D2D2D2D2D2, 0xD3D3D3D3D3D3D3D3, 0xD4D4D4D4D4D4D4D4, 0xD5D5D5D5D5D5D5D5, 0xD6D6D6D6D6D6D6D6, 0xD7D7D7D7D7D7D7D7,
    0xD8D8D8D8D8D8D8D8, 0xD9D9D9D9D9D9D9D9, 0xDADADADADADADADA, 0xDBDBDBDBDBDBDBDB, 0xDCDCDCDCDCDCDCDC, 0xDDDDDDDDDDDDDDDD, 0xDEDEDEDEDEDEDEDE, 0xDFDFDFDFDFDFDFDF,
    0xE0E0E0E0E0E0E0E0, 0xE1E1E1E1E1E1E1E1, 0xE2E2E2E2E2E2E2E2, 0xE3E3E3E3E3E3E3E3, 0xE4E4E4E4E4E4E4E4, 0xE5E5E5E5E5E5E5E5, 0xE6E6E6E6E6E6E6E6, 0xE7E7E7E7E7E7E7E7,
    0xE8E8E8E8E8E8E8E8, 0xE9E9E9E9E9E9E9E9, 0xEAEAEAEAEAEAEAEA, 0xEBEBEBEBEBEBEBEB, 0xECECECECECECECEC, 0xEDEDEDEDEDEDEDED, 0xEEEEEEEEEEEEEEEE, 0xEFEFEFEFEFEFEFEF,
    0xF0F0F0F0F0F0F0F0, 0xF1F1F1F1F1F1F1F1, 0xF2F2F2F2F2F2F2F2, 0xF3F3F3F3F3F3F3F3, 0xF4F4F4F4F4F4F4F4, 0xF5F5F5F5F5F5F5F5, 0xF6F6F6F6F6F6F6F6, 0xF7F7F7F7F7F7F7F7,
    0xF8F8F8F8F8F8F8F8, 0xF9F9F9F9F9F9F9F9, 0xFAFAFAFAFAFAFAFA, 0xFBFBFBFBFBFBFBFB, 0xFCFCFCFCFCFCFCFC, 0xFDFDFDFDFDFDFDFD, 0xFEFEFEFEFEFEFEFE, 0xFFFFFFFFFFFFFFFF
};

// undefined1
undefined1 DAT_005f098f = 0x00;

// undefined4
undefined4 DAT_005fba64 = 0x00000000;
undefined4 DAT_005fbaa4 = 0x00000000;
undefined4 DAT_005fbaa8 = 0x00000000;
undefined4 DAT_005fbaac = 0x00000000;
undefined4 DAT_005fbaf8 = 0x00000000;
undefined4 DAT_005fbafc = 0x00000000;
undefined4 DAT_005fbbc0 = 0x00000000;
undefined4 DAT_005fbbc4 = 0x00000000;
undefined4 DAT_005fe4b8 = 0x00000000;
undefined4 DAT_005fe4bc = 0x00000000;

// ushort[2048]
ushort g_USHORT_ARRAY_005fa0e0[2048] = {
    0x0000, 0x0000, 0x0000, 0x0000, 0x0040, 0x0040, 0x0040, 0x0040,
    0x0080, 0x0080, 0x0080, 0x0080, 0x00C0, 0x00C0, 0x00C0, 0x00C0,
    0x0100, 0x0100, 0x0100, 0x0100, 0x0140, 0x0140, 0x0140, 0x0140,
    0x0180, 0x0180, 0x0180, 0x0180, 0x01C0, 0x01C0, 0x01C0, 0x01C0,
    0x0200, 0x0200, 0x0200, 0x0200, 0x0240, 0x0240, 0x0240, 0x0240,
    0x0280, 0x0280, 0x0280, 0x0280, 0x02C0, 0x02C0, 0x02C0, 0x02C0,
    0x0300, 0x0300, 0x0300, 0x0300, 0x0340, 0x0340, 0x0340, 0x0340,
    0x0380, 0x0380, 0x0380, 0x0380, 0x03C0, 0x03C0, 0x03C0, 0x03C0,
    0x0400, 0x0400, 0x0400, 0x0400, 0x0440, 0x0440, 0x0440, 0x0440,
    0x0480, 0x0480, 0x0480, 0x0480, 0x04C0, 0x04C0, 0x04C0, 0x04C0,
    0x0500, 0x0500, 0x0500, 0x0500, 0x0540, 0x0540, 0x0540, 0x0540,
    0x0580, 0x0580, 0x0580, 0x0580, 0x05C0, 0x05C0, 0x05C0, 0x05C0,
    0x0600, 0x0600, 0x0600, 0x0600, 0x0640, 0x0640, 0x0640, 0x0640,
    0x0680, 0x0680, 0x0680, 0x0680, 0x06C0, 0x06C0, 0x06C0, 0x06C0,
    0x0700, 0x0700, 0x0700, 0x0700, 0x0740, 0x0740, 0x0740, 0x0740,
    0x0780, 0x0780, 0x0780, 0x0780, 0x07C0, 0x07C0, 0x07C0, 0x07C0,
    0x0800, 0x0800, 0x0800, 0x0800, 0x0840, 0x0840, 0x0840, 0x0840,
    0x0880, 0x0880, 0x0880, 0x0880, 0x08C0, 0x08C0, 0x08C0, 0x08C0,
    0x0900, 0x0900, 0x0900, 0x0900, 0x0940, 0x0940, 0x0940, 0x0940,
    0x0980, 0x0980, 0x0980, 0x0980, 0x09C0, 0x09C0, 0x09C0, 0x09C0,
    0x0A00, 0x0A00, 0x0A00, 0x0A00, 0x0A40, 0x0A40, 0x0A40, 0x0A40,
    0x0A80, 0x0A80, 0x0A80, 0x0A80, 0x0AC0, 0x0AC0, 0x0AC0, 0x0AC0,
    0x0B00, 0x0B00, 0x0B00, 0x0B00, 0x0B40, 0x0B40, 0x0B40, 0x0B40,
    0x0B80, 0x0B80, 0x0B80, 0x0B80, 0x0BC0, 0x0BC0, 0x0BC0, 0x0BC0,
    0x0C00, 0x0C00, 0x0C00, 0x0C00, 0x0C40, 0x0C40, 0x0C40, 0x0C40,
    0x0C80, 0x0C80, 0x0C80, 0x0C80, 0x0CC0, 0x0CC0, 0x0CC0, 0x0CC0,
    0x0D00, 0x0D00, 0x0D00, 0x0D00, 0x0D40, 0x0D40, 0x0D40, 0x0D40,
    0x0D80, 0x0D80, 0x0D80, 0x0D80, 0x0DC0, 0x0DC0, 0x0DC0, 0x0DC0,
    0x0E00, 0x0E00, 0x0E00, 0x0E00, 0x0E40, 0x0E40, 0x0E40, 0x0E40,
    0x0E80, 0x0E80, 0x0E80, 0x0E80, 0x0EC0, 0x0EC0, 0x0EC0, 0x0EC0,
    0x0F00, 0x0F00, 0x0F00, 0x0F00, 0x0F40, 0x0F40, 0x0F40, 0x0F40,
    0x0F80, 0x0F80, 0x0F80, 0x0F80, 0x0FC0, 0x0FC0, 0x0FC0, 0x0FC0,
    0x1000, 0x1000, 0x1000, 0x1000, 0x1040, 0x1040, 0x1040, 0x1040,
    0x1080, 0x1080, 0x1080, 0x1080, 0x10C0, 0x10C0, 0x10C0, 0x10C0,
    0x1100, 0x1100, 0x1100, 0x1100, 0x1140, 0x1140, 0x1140, 0x1140,
    0x1180, 0x1180, 0x1180, 0x1180, 0x11C0, 0x11C0, 0x11C0, 0x11C0,
    0x1200, 0x1200, 0x1200, 0x1200, 0x1240, 0x1240, 0x1240, 0x1240,
    0x1280, 0x1280, 0x1280, 0x1280, 0x12C0, 0x12C0, 0x12C0, 0x12C0,
    0x1300, 0x1300, 0x1300, 0x1300, 0x1340, 0x1340, 0x1340, 0x1340,
    0x1380, 0x1380, 0x1380, 0x1380, 0x13C0, 0x13C0, 0x13C0, 0x13C0,
    0x1400, 0x1400, 0x1400, 0x1400, 0x1440, 0x1440, 0x1440, 0x1440,
    0x1480, 0x1480, 0x1480, 0x1480, 0x14C0, 0x14C0, 0x14C0, 0x14C0,
    0x1500, 0x1500, 0x1500, 0x1500, 0x1540, 0x1540, 0x1540, 0x1540,
    0x1580, 0x1580, 0x1580, 0x1580, 0x15C0, 0x15C0, 0x15C0, 0x15C0,
    0x1600, 0x1600, 0x1600, 0x1600, 0x1640, 0x1640, 0x1640, 0x1640,
    0x1680, 0x1680, 0x1680, 0x1680, 0x16C0, 0x16C0, 0x16C0, 0x16C0,
    0x1700, 0x1700, 0x1700, 0x1700, 0x1740, 0x1740, 0x1740, 0x1740,
    0x1780, 0x1780, 0x1780, 0x1780, 0x17C0, 0x17C0, 0x17C0, 0x17C0,
    0x1800, 0x1800, 0x1800, 0x1800, 0x1840, 0x1840, 0x1840, 0x1840,
    0x1880, 0x1880, 0x1880, 0x1880, 0x18C0, 0x18C0, 0x18C0, 0x18C0,
    0x1900, 0x1900, 0x1900, 0x1900, 0x1940, 0x1940, 0x1940, 0x1940,
    0x1980, 0x1980, 0x1980, 0x1980, 0x19C0, 0x19C0, 0x19C0, 0x19C0,
    0x1A00, 0x1A00, 0x1A00, 0x1A00, 0x1A40, 0x1A40, 0x1A40, 0x1A40,
    0x1A80, 0x1A80, 0x1A80, 0x1A80, 0x1AC0, 0x1AC0, 0x1AC0, 0x1AC0,
    0x1B00, 0x1B00, 0x1B00, 0x1B00, 0x1B40, 0x1B40, 0x1B40, 0x1B40,
    0x1B80, 0x1B80, 0x1B80, 0x1B80, 0x1BC0, 0x1BC0, 0x1BC0, 0x1BC0,
    0x1C00, 0x1C00, 0x1C00, 0x1C00, 0x1C40, 0x1C40, 0x1C40, 0x1C40,
    0x1C80, 0x1C80, 0x1C80, 0x1C80, 0x1CC0, 0x1CC0, 0x1CC0, 0x1CC0,
    0x1D00, 0x1D00, 0x1D00, 0x1D00, 0x1D40, 0x1D40, 0x1D40, 0x1D40,
    0x1D80, 0x1D80, 0x1D80, 0x1D80, 0x1DC0, 0x1DC0, 0x1DC0, 0x1DC0,
    0x1E00, 0x1E00, 0x1E00, 0x1E00, 0x1E40, 0x1E40, 0x1E40, 0x1E40,
    0x1E80, 0x1E80, 0x1E80, 0x1E80, 0x1EC0, 0x1EC0, 0x1EC0, 0x1EC0,
    0x1F00, 0x1F00, 0x1F00, 0x1F00, 0x1F40, 0x1F40, 0x1F40, 0x1F40,
    0x1F80, 0x1F80, 0x1F80, 0x1F80, 0x1FC0, 0x1FC0, 0x1FC0, 0x1FC0,
    0x2000, 0x2000, 0x2000, 0x2000, 0x2040, 0x2040, 0x2040, 0x2040,
    0x2080, 0x2080, 0x2080, 0x2080, 0x20C0, 0x20C0, 0x20C0, 0x20C0,
    0x2100, 0x2100, 0x2100, 0x2100, 0x2140, 0x2140, 0x2140, 0x2140,
    0x2180, 0x2180, 0x2180, 0x2180, 0x21C0, 0x21C0, 0x21C0, 0x21C0,
    0x2200, 0x2200, 0x2200, 0x2200, 0x2240, 0x2240, 0x2240, 0x2240,
    0x2280, 0x2280, 0x2280, 0x2280, 0x22C0, 0x22C0, 0x22C0, 0x22C0,
    0x2300, 0x2300, 0x2300, 0x2300, 0x2340, 0x2340, 0x2340, 0x2340,
    0x2380, 0x2380, 0x2380, 0x2380, 0x23C0, 0x23C0, 0x23C0, 0x23C0,
    0x2400, 0x2400, 0x2400, 0x2400, 0x2440, 0x2440, 0x2440, 0x2440,
    0x2480, 0x2480, 0x2480, 0x2480, 0x24C0, 0x24C0, 0x24C0, 0x24C0,
    0x2500, 0x2500, 0x2500, 0x2500, 0x2540, 0x2540, 0x2540, 0x2540,
    0x2580, 0x2580, 0x2580, 0x2580, 0x25C0, 0x25C0, 0x25C0, 0x25C0,
    0x2600, 0x2600, 0x2600, 0x2600, 0x2640, 0x2640, 0x2640, 0x2640,
    0x2680, 0x2680, 0x2680, 0x2680, 0x26C0, 0x26C0, 0x26C0, 0x26C0,
    0x2700, 0x2700, 0x2700, 0x2700, 0x2740, 0x2740, 0x2740, 0x2740,
    0x2780, 0x2780, 0x2780, 0x2780, 0x27C0, 0x27C0, 0x27C0, 0x27C0,
    0x2800, 0x2800, 0x2800, 0x2800, 0x2840, 0x2840, 0x2840, 0x2840,
    0x2880, 0x2880, 0x2880, 0x2880, 0x28C0, 0x28C0, 0x28C0, 0x28C0,
    0x2900, 0x2900, 0x2900, 0x2900, 0x2940, 0x2940, 0x2940, 0x2940,
    0x2980, 0x2980, 0x2980, 0x2980, 0x29C0, 0x29C0, 0x29C0, 0x29C0,
    0x2A00, 0x2A00, 0x2A00, 0x2A00, 0x2A40, 0x2A40, 0x2A40, 0x2A40,
    0x2A80, 0x2A80, 0x2A80, 0x2A80, 0x2AC0, 0x2AC0, 0x2AC0, 0x2AC0,
    0x2B00, 0x2B00, 0x2B00, 0x2B00, 0x2B40, 0x2B40, 0x2B40, 0x2B40,
    0x2B80, 0x2B80, 0x2B80, 0x2B80, 0x2BC0, 0x2BC0, 0x2BC0, 0x2BC0,
    0x2C00, 0x2C00, 0x2C00, 0x2C00, 0x2C40, 0x2C40, 0x2C40, 0x2C40,
    0x2C80, 0x2C80, 0x2C80, 0x2C80, 0x2CC0, 0x2CC0, 0x2CC0, 0x2CC0,
    0x2D00, 0x2D00, 0x2D00, 0x2D00, 0x2D40, 0x2D40, 0x2D40, 0x2D40,
    0x2D80, 0x2D80, 0x2D80, 0x2D80, 0x2DC0, 0x2DC0, 0x2DC0, 0x2DC0,
    0x2E00, 0x2E00, 0x2E00, 0x2E00, 0x2E40, 0x2E40, 0x2E40, 0x2E40,
    0x2E80, 0x2E80, 0x2E80, 0x2E80, 0x2EC0, 0x2EC0, 0x2EC0, 0x2EC0,
    0x2F00, 0x2F00, 0x2F00, 0x2F00, 0x2F40, 0x2F40, 0x2F40, 0x2F40,
    0x2F80, 0x2F80, 0x2F80, 0x2F80, 0x2FC0, 0x2FC0, 0x2FC0, 0x2FC0,
    0x3000, 0x3000, 0x3000, 0x3000, 0x3040, 0x3040, 0x3040, 0x3040,
    0x3080, 0x3080, 0x3080, 0x3080, 0x30C0, 0x30C0, 0x30C0, 0x30C0,
    0x3100, 0x3100, 0x3100, 0x3100, 0x3140, 0x3140, 0x3140, 0x3140,
    0x3180, 0x3180, 0x3180, 0x3180, 0x31C0, 0x31C0, 0x31C0, 0x31C0,
    0x3200, 0x3200, 0x3200, 0x3200, 0x3240, 0x3240, 0x3240, 0x3240,
    0x3280, 0x3280, 0x3280, 0x3280, 0x32C0, 0x32C0, 0x32C0, 0x32C0,
    0x3300, 0x3300, 0x3300, 0x3300, 0x3340, 0x3340, 0x3340, 0x3340,
    0x3380, 0x3380, 0x3380, 0x3380, 0x33C0, 0x33C0, 0x33C0, 0x33C0,
    0x3400, 0x3400, 0x3400, 0x3400, 0x3440, 0x3440, 0x3440, 0x3440,
    0x3480, 0x3480, 0x3480, 0x3480, 0x34C0, 0x34C0, 0x34C0, 0x34C0,
    0x3500, 0x3500, 0x3500, 0x3500, 0x3540, 0x3540, 0x3540, 0x3540,
    0x3580, 0x3580, 0x3580, 0x3580, 0x35C0, 0x35C0, 0x35C0, 0x35C0,
    0x3600, 0x3600, 0x3600, 0x3600, 0x3640, 0x3640, 0x3640, 0x3640,
    0x3680, 0x3680, 0x3680, 0x3680, 0x36C0, 0x36C0, 0x36C0, 0x36C0,
    0x3700, 0x3700, 0x3700, 0x3700, 0x3740, 0x3740, 0x3740, 0x3740,
    0x3780, 0x3780, 0x3780, 0x3780, 0x37C0, 0x37C0, 0x37C0, 0x37C0,
    0x3800, 0x3800, 0x3800, 0x3800, 0x3840, 0x3840, 0x3840, 0x3840,
    0x3880, 0x3880, 0x3880, 0x3880, 0x38C0, 0x38C0, 0x38C0, 0x38C0,
    0x3900, 0x3900, 0x3900, 0x3900, 0x3940, 0x3940, 0x3940, 0x3940,
    0x3980, 0x3980, 0x3980, 0x3980, 0x39C0, 0x39C0, 0x39C0, 0x39C0,
    0x3A00, 0x3A00, 0x3A00, 0x3A00, 0x3A40, 0x3A40, 0x3A40, 0x3A40,
    0x3A80, 0x3A80, 0x3A80, 0x3A80, 0x3AC0, 0x3AC0, 0x3AC0, 0x3AC0,
    0x3B00, 0x3B00, 0x3B00, 0x3B00, 0x3B40, 0x3B40, 0x3B40, 0x3B40,
    0x3B80, 0x3B80, 0x3B80, 0x3B80, 0x3BC0, 0x3BC0, 0x3BC0, 0x3BC0,
    0x3C00, 0x3C00, 0x3C00, 0x3C00, 0x3C40, 0x3C40, 0x3C40, 0x3C40,
    0x3C80, 0x3C80, 0x3C80, 0x3C80, 0x3CC0, 0x3CC0, 0x3CC0, 0x3CC0,
    0x3D00, 0x3D00, 0x3D00, 0x3D00, 0x3D40, 0x3D40, 0x3D40, 0x3D40,
    0x3D80, 0x3D80, 0x3D80, 0x3D80, 0x3DC0, 0x3DC0, 0x3DC0, 0x3DC0,
    0x3E00, 0x3E00, 0x3E00, 0x3E00, 0x3E40, 0x3E40, 0x3E40, 0x3E40,
    0x3E80, 0x3E80, 0x3E80, 0x3E80, 0x3EC0, 0x3EC0, 0x3EC0, 0x3EC0,
    0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F40, 0x3F40, 0x3F40, 0x3F40,
    0x3F80, 0x3F80, 0x3F80, 0x3F80, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0
};

// void*
void* g_PTR_005f4ac0 = nullptr;
void* switchdataD_005fc430 = (void*)0x00495EFC; // caseD_0
void* switchdataD_005fc474 = (void*)0x00495F8B; // caseD_0

// void*[67]
void* g_ARRAY_PTR_005f07c4[67] = {
    (void*)engine_3d_c_badMRGLStruct_FUN_004037b0, (void*)engine_3d_c_processCameraRelativePoint_FUN_004037e0, (void*)engine_3d_c_transformAndBufferVertices_FUN_00403840, (void*)engine_3d_c_processVertexLighting_FUN_004039f0,
    (void*)engine_3d_c_processTextureCoordinates_FUN_00403a50, (void*)engine_3d_c_renderPolygonGrayscaleLitOp5_FUN_00403aa0, (void*)engine_3d_c_renderPolygonFogColorOp6_FUN_00403b70, (void*)engine_3d_c_renderPolygonTexturedLitOp7_FUN_00403c90,
    (void*)engine_3d_c_renderPolygonFogTexturedWrappedOp8_FUN_00403d30, (void*)engine_3d_c_skipOldFuncOp_FUN_00403dd0, (void*)engine_3d_c_processPolygonColor_FUN_00403de0, (void*)engine_3d_c_skipOldFuncOp_FUN_00403dd0,
    (void*)engine_3d_c_skipOldFuncOp_FUN_00403dd0, (void*)engine_texture_cpp_ensureTextureLoaded_FUN_0056aa10, (void*)engine_3d_c_renderPolygonTexturedNormalizedUVLitOp14_FUN_00403e70, (void*)engine_3d_c_renderPolygonSolidTexturedOp15_FUN_00404070,
    (void*)engine_3d_c_skipOldFuncOp_FUN_00403dd0, (void*)engine_3d_c_renderPolygonSolidLitClampedOp17_FUN_00404120, (void*)engine_3d_c_skipOldFuncOp_FUN_00403dd0, (void*)engine_3d_c_badMRGLStruct_FUN_004037b0,
    (void*)engine_3d_c_setRelativeCoord_FUN_00404320, (void*)engine_3d_c_renderPolygonTexturedNormalizedOp21_FUN_00404370, (void*)engine_3d_c_drawLineStrip2D_FUN_00404440, (void*)engine_3d_c_skipOldFuncOp_FUN_00403dd0,
    (void*)engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00404560, (void*)engine_3d_c_renderPolygonAdaptiveDepthOp25_FUN_00404980, (void*)engine_3d_c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00404b00, (void*)engine_3d_c_renderPolygonFogColorDepthOp27_FUN_00404bf0,
    (void*)engine_3d_c_skipOldFuncOp_FUN_00403dd0, (void*)engine_3d_c_updateAnimatedTexture_FUN_00404f10, (void*)engine_3d_c_renderPolygonTexturedUVLitOp30_FUN_00404fc0, (void*)engine_3d_c_setVertexTextureU_FUN_004050c0,
    (void*)engine_keyframe_c_interpolateCubicKeyframes_FUN_004df050, (void*)engine_3d_c_renderPolygonDestReadBlendOp33_FUN_00405100, (void*)engine_3d_c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_004046e0, (void*)engine_3d_c_renderPolygonLitNearPlaneOp35_FUN_004048e0,
    (void*)engine_3d_c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004054e0, (void*)engine_3d_c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00405600, (void*)engine_boss_c_modelStructNotSupported1_FUN_0041ac30, (void*)engine_3d_c_renderPolygonFogTexturedPerspOp39_FUN_00405720,
    (void*)engine_3d_c_renderPolygonTexturedHardwareOp40_FUN_00405850, (void*)engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0, (void*)engine_3d_c_renderPolygonFogTexturedDepthOp42_FUN_00405b30, (void*)engine_3d_c_renderPolygonTexturedDepthWriteOp43_FUN_00405bd0,
    (void*)engine_3d_c_renderPolygonFogTexturedDepthWriteOp44_FUN_00405c70, (void*)engine_3d_c_renderPolygonTexturedOp45_FUN_00405d10, (void*)engine_3d_c_renderPolygonTexturedOp46_FUN_00405db0, (void*)engine_3d_c_renderPolygonTexturedDepthWriteOp47_FUN_00405e50,
    (void*)engine_3d_c_renderPolygonSolidTexturedLitOp48_FUN_00405ef0, (void*)engine_3d_c_renderPolygonTexturedDepthLitOp49_FUN_00405fa0, (void*)engine_3d_c_renderPolygonTexturedNormalizedOp50_FUN_00406040, (void*)engine_3d_c_renderPolygonSolidTexturedClampedOp51_FUN_004060e0,
    (void*)engine_3d_c_renderPolygonAdaptiveFogTexturedOp52_FUN_004062a0, (void*)engine_3d_c_renderPolygonSolidTexturedHardwareOp53_FUN_004058f0, (void*)engine_3d_c_renderPolygonGrayscaleLitOp54_FUN_00406540, (void*)engine_3d_c_renderPolygonDestReadBlendDepthLitOp55_FUN_00406610,
    (void*)engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_004066d0, (void*)engine_3d_c_renderPolygonFullEffectsLitOp57_FUN_004069b0, (void*)engine_3d_c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406c50, (void*)engine_3d_c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406d90,
    (void*)engine_3d_c_renderPolygonVertexAlphaLitOp60_FUN_00406a50, (void*)engine_3d_c_setRenderAlphaFromBlock_FUN_00406bd0, (void*)engine_3d_c_renderPolygonSolidLitOp62_FUN_00406890, (void*)engine_3d_c_renderPolygonBlendedLitOp63_FUN_00406af0,
    (void*)engine_texture_cpp_loadTextureAndGetData_FUN_0056aa90, (void*)engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00407100, (void*)engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00407300
};

