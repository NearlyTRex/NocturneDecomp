; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d02b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Called Functions:
;   FUN_00423900
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d02b0
        ;   Label: FUN_004d02b0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d02b4
    PUSH dword ptr [ESP + 0x10]         ; 004d02b8
    PUSH EDX                            ; 004d02bc
    MOV ECX,dword ptr [ESP + 0x10]      ; 004d02bd
    PUSH ECX                            ; 004d02c1
    PUSH EAX                            ; 004d02c2
    MOV dword ptr [EAX + 0x10a60],0x0   ; 004d02c3
    CALL FUN_00423900                   ; 004d02cd
        ;   XREF to: 00423900 (UNCONDITIONAL_CALL)  ; undefined FUN_00423900()
    ADD ESP,0x10                        ; 004d02d2
    RET                                 ; 004d02d5

