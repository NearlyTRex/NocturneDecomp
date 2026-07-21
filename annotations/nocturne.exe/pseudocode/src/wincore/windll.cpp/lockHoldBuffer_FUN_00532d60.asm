; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl wincore_windll_cpp_lockHoldBuffer_FUN_00532d60(void)
;
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00445020 at 00445061
;
; Referenced Globals:
;   undefined4 DAT_02dc9dfc
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02dc9dfc],0x0      ; 00532d60 | DAT_02dc9dfc
        ;   Label: wincore_windll.cpp_lockHoldBuffer_FUN_00532d60
    JNZ 0x00532d6c                      ; 00532d67
        ;   XREF to: 00532d6c (CONDITIONAL_JUMP)  ; LAB_00532d6c
    XOR EAX,EAX                         ; 00532d69
    RET                                 ; 00532d6b
    CALL dword ptr [0x02dc9dfc]         ; 00532d6c | DAT_02dc9dfc
        ;   Label: LAB_00532d6c
    RET                                 ; 00532d72

