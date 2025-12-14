; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int wincore_windll.cpp_endScene_FUN_005b72a0(void)
;
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80 at 0044cba7
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 0045f548
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   APIDLL_endScene* g_APIDLL_endScene
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02d03e94],0x0      ; 005b72a0 | g_UseExternalRenderer
        ;   Label: wincore_windll.cpp_endScene_FUN_005b72a0
    JNZ 0x005b72ac                      ; 005b72a7
        ;   XREF to: 005b72ac (CONDITIONAL_JUMP)  ; LAB_005b72ac
    XOR EAX,EAX                         ; 005b72a9
    RET                                 ; 005b72ab
    CALL dword ptr [0x03f6b8a8]         ; 005b72ac | g_APIDLL_endScene
        ;   Label: LAB_005b72ac
    RET                                 ; 005b72b2

