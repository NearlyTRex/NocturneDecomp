; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl wincore_windll_cpp_lockHoldBuffer_FUN_005b7df0(void)
;
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0 at 00451201
;
; Referenced Globals:
;   APIDLL_lockHoldBuffer* g_APIDLL_lockHoldBuffer
;
; *****************************************************************************

section .text

    CMP dword ptr [0x03f6b920],0x0      ; 005b7df0 | g_APIDLL_lockHoldBuffer
        ;   Label: wincore_windll.cpp_lockHoldBuffer_FUN_005b7df0
    JNZ 0x005b7dfc                      ; 005b7df7
        ;   XREF to: 005b7dfc (CONDITIONAL_JUMP)  ; LAB_005b7dfc
    XOR EAX,EAX                         ; 005b7df9
    RET                                 ; 005b7dfb
    CALL dword ptr [0x03f6b920]         ; 005b7dfc | g_APIDLL_lockHoldBuffer
        ;   Label: LAB_005b7dfc
    RET                                 ; 005b7e02

