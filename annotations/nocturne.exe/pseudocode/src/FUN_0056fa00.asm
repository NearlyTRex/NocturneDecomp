; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056fa00(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5)
;
;
; Called Functions:
;   FUN_00571bd0
;   FUN_00571bdc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0056fa00
        ;   Label: FUN_0056fa00
    MOV EBP,ESP                         ; 0056fa01
    PUSH EBX                            ; 0056fa03
    PUSH ESI                            ; 0056fa04
    PUSH EDI                            ; 0056fa05
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056fa06
    CALL FUN_00571bd0                   ; 0056fa09
        ;   XREF to: 00571bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00571bd0()
    PUSH EAX                            ; 0056fa0e
    PUSH 0x46                           ; 0056fa0f
    MOV EDX,dword ptr [EBP + 0x18]      ; 0056fa11
    PUSH EDX                            ; 0056fa14
    PUSH EBX                            ; 0056fa15
    MOV ECX,dword ptr [EBP + 0x10]      ; 0056fa16
    PUSH ECX                            ; 0056fa19
    MOV ESI,dword ptr [EBP + 0xc]       ; 0056fa1a
    PUSH ESI                            ; 0056fa1d
    MOV EDI,dword ptr [EBP + 0x8]       ; 0056fa1e
    PUSH EDI                            ; 0056fa21
    CALL FUN_00571bdc                   ; 0056fa22
        ;   XREF to: 00571bdc (UNCONDITIONAL_CALL)  ; undefined FUN_00571bdc()
    MOV EDX,dword ptr [EBP + 0x10]      ; 0056fa27
    MOV ECX,dword ptr [EBX]             ; 0056fa2a
    ADD ESP,0x1c                        ; 0056fa2c
    ADD EDX,ECX                         ; 0056fa2f
    JMP 0x0056f9f1                      ; 0056fa31
        ;   XREF to: 0056f9f1 (UNCONDITIONAL_JUMP)  ; LAB_0056f9f1

