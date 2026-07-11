; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005329a0(void)
;
;
; XREF[2]:
;   FUN_00440290 at 004404ef
;   FUN_0052ee70 at 0052ee7b
;
; Referenced Globals:
;   undefined4 DAT_01c02594
;   undefined4 DAT_02dc9dc8
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 005329a0 | DAT_01c02594
        ;   Label: FUN_005329a0
    JNZ 0x005329ac                      ; 005329a7
        ;   XREF to: 005329ac (CONDITIONAL_JUMP)  ; LAB_005329ac
    XOR EAX,EAX                         ; 005329a9
    RET                                 ; 005329ab
    CALL dword ptr [0x02dc9dc8]         ; 005329ac | DAT_02dc9dc8
        ;   Label: LAB_005329ac
    RET                                 ; 005329b2

