; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ca8a4(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5)
;
;
; Called Functions:
;   FUN_005cccc0
;   FUN_005ccccc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005ca8a4
        ;   Label: FUN_005ca8a4
    MOV EBP,ESP                         ; 005ca8a5
    PUSH EBX                            ; 005ca8a7
    PUSH ESI                            ; 005ca8a8
    PUSH EDI                            ; 005ca8a9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005ca8aa
    CALL FUN_005cccc0                   ; 005ca8ad
        ;   XREF to: 005cccc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005cccc0()
    PUSH EAX                            ; 005ca8b2
    PUSH 0x46                           ; 005ca8b3
    MOV EDX,dword ptr [EBP + 0x18]      ; 005ca8b5
    PUSH EDX                            ; 005ca8b8
    PUSH EBX                            ; 005ca8b9
    MOV ECX,dword ptr [EBP + 0x10]      ; 005ca8ba
    PUSH ECX                            ; 005ca8bd
    MOV ESI,dword ptr [EBP + 0xc]       ; 005ca8be
    PUSH ESI                            ; 005ca8c1
    MOV EDI,dword ptr [EBP + 0x8]       ; 005ca8c2
    PUSH EDI                            ; 005ca8c5
    CALL FUN_005ccccc                   ; 005ca8c6
        ;   XREF to: 005ccccc (UNCONDITIONAL_CALL)  ; undefined FUN_005ccccc()
    MOV EDX,dword ptr [EBP + 0x10]      ; 005ca8cb
    MOV ECX,dword ptr [EBX]             ; 005ca8ce
    ADD ESP,0x1c                        ; 005ca8d0
    ADD EDX,ECX                         ; 005ca8d3
    JMP 0x005ca895                      ; 005ca8d5
        ;   XREF to: 005ca895 (UNCONDITIONAL_JUMP)  ; LAB_005ca895

