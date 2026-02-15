; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_windll_cpp_sync_FUN_005b7bc0(void)
;
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0 at 0049914a
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   APIDLL_sync* g_APIDLL_sync
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02d03e94],0x0      ; 005b7bc0 | g_UseExternalRenderer
        ;   Label: wincore_windll.cpp_sync_FUN_005b7bc0
    JNZ 0x005b7bcc                      ; 005b7bc7
        ;   XREF to: 005b7bcc (CONDITIONAL_JUMP)  ; LAB_005b7bcc
    XOR EAX,EAX                         ; 005b7bc9
    RET                                 ; 005b7bcb
    CALL dword ptr [0x03f6b8f4]         ; 005b7bcc | g_APIDLL_sync
        ;   Label: LAB_005b7bcc
    RET                                 ; 005b7bd2

