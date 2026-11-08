; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00592c90(undefined4 param_1,int param_2)
;
;
; Called Functions:
;   FUN_004a0f00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00592c90
        ;   Label: FUN_00592c90
    PUSH EAX                            ; 00592c94
    MOV EDX,dword ptr [ESP + 0x8]       ; 00592c95
    PUSH EDX                            ; 00592c99
    MOV dword ptr [EAX + 0x4],0x0       ; 00592c9a
    CALL FUN_004a0f00                   ; 00592ca1
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0f00()
    ADD ESP,0x8                         ; 00592ca6
    RET                                 ; 00592ca9

