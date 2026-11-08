; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00414850(undefined4 param_1,int param_2)
;
;
; Called Functions:
;   FUN_004a0f00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00414850
        ;   Label: FUN_00414850
    PUSH EAX                            ; 00414854
    MOV EDX,dword ptr [ESP + 0x8]       ; 00414855
    PUSH EDX                            ; 00414859
    MOV dword ptr [EAX + 0x4],0x0       ; 0041485a
    CALL FUN_004a0f00                   ; 00414861
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0f00()
    ADD ESP,0x8                         ; 00414866
    RET                                 ; 00414869

