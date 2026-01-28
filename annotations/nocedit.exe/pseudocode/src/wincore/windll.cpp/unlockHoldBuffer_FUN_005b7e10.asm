; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl wincore_windll_cpp_unlockHoldBuffer_FUN_005b7e10(void)
;
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0 at 004511ee
;
; Referenced Globals:
;   APIDLL_unlockHoldBuffer* g_APIDLL_unlockHoldBuffer
;
; *****************************************************************************

section .text

    CMP dword ptr [0x03f6b924],0x0      ; 005b7e10 | g_APIDLL_unlockHoldBuffer
        ;   Label: wincore_windll.cpp_unlockHoldBuffer_FUN_005b7e10
    JNZ 0x005b7e1c                      ; 005b7e17
        ;   XREF to: 005b7e1c (CONDITIONAL_JUMP)  ; LAB_005b7e1c
    XOR EAX,EAX                         ; 005b7e19
    RET                                 ; 005b7e1b
    CALL dword ptr [0x03f6b924]         ; 005b7e1c | g_APIDLL_unlockHoldBuffer
        ;   Label: LAB_005b7e1c
    RET                                 ; 005b7e22

