; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00414300(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00414300
        ;   Label: FUN_00414300
    CMP dword ptr [EAX + 0xc308],0x0    ; 00414304
    JZ 0x00414310                       ; 0041430b
        ;   XREF to: 00414310 (CONDITIONAL_JUMP)  ; LAB_00414310
    XOR EAX,EAX                         ; 0041430d
    RET                                 ; 0041430f
    MOV ECX,dword ptr [ESP + 0x8]       ; 00414310
        ;   Label: LAB_00414310
    PUSH ECX                            ; 00414314
    PUSH EAX                            ; 00414315
    CALL FUN_004310b0                   ; 00414316
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004310b0()
    ADD ESP,0x8                         ; 0041431b
    RET                                 ; 0041431e

