; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int wincore_windll.cpp_clear_FUN_005b7a30(void)
;
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 at 0044c666
;   wincore_windll.cpp_clearScreen_FUN_005b3e70 at 005b3e7b
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   APIDLL_clear* g_APIDLL_clear
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02d03e94],0x0      ; 005b7a30 | int g_UseExternalRenderer
        ;   Label: wincore_windll.cpp_clear_FUN_005b7a30
    JNZ 0x005b7a3c                      ; 005b7a37 | LAB_005b7a3c
        ;   XREF to: 005b7a3c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005b7a39
    RET                                 ; 005b7a3b
    CALL dword ptr [0x03f6b8ec]         ; 005b7a3c | APIDLL_clear * g_APIDLL_clear
        ;   Label: LAB_005b7a3c
    RET                                 ; 005b7a42

