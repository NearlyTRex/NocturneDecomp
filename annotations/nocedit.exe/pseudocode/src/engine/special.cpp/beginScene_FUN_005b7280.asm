; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_beginScene_FUN_005b7280(void)
;
;
; XREF[3]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 at 0044c64e
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0 at 00451247
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 0045f32a
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   APIDLL_beginScene* g_APIDLL_beginScene
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02d03e94],0x0      ; 005b7280 | g_UseExternalRenderer
        ;   Label: engine_special.cpp_beginScene_FUN_005b7280
    JNZ 0x005b728c                      ; 005b7287
        ;   XREF to: 005b728c (CONDITIONAL_JUMP)  ; LAB_005b728c
    XOR EAX,EAX                         ; 005b7289
    RET                                 ; 005b728b
    CALL dword ptr [0x03f6b8a4]         ; 005b728c | g_APIDLL_beginScene
        ;   Label: LAB_005b728c
    RET                                 ; 005b7292

