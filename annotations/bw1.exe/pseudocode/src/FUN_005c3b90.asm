; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c3b90(undefined2 *param_1,undefined4 param_2,int param_3,code *param_4)
;
; Local Variables:
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   FUN_005c3320 at 005c3632
;
; Called Functions:
;   FUN_005ca4b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3b90
        ;   Label: FUN_005c3b90
    PUSH ESI                            ; 005c3b91
    PUSH EDI                            ; 005c3b92
    PUSH ES                             ; 005c3b93
    PUSH EBP                            ; 005c3b94
    SUB ESP,0x4                         ; 005c3b95
    MOV EBX,dword ptr [ESP + 0x24]      ; 005c3b98
    MOV ES,word ptr [ESP + 0x20]        ; 005c3b9c
    MOV EDX,dword ptr [EBX + 0x28]      ; 005c3ba0
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005c3ba3
    TEST EDX,EDX                        ; 005c3ba7
    JLE 0x005c3bfd                      ; 005c3ba9
        ;   XREF to: 005c3bfd (CONDITIONAL_JUMP)  ; LAB_005c3bfd
    XOR EAX,EAX                         ; 005c3bab
        ;   Label: LAB_005c3bab
    MOV AX,word ptr ES:[EBP]            ; 005c3bad
    PUSH EAX                            ; 005c3bb2
    LEA EAX,[ESP + 0x4]                 ; 005c3bb3
    PUSH EAX                            ; 005c3bb7
    ADD EBP,0x2                         ; 005c3bb8
    CALL FUN_005ca4b0                   ; 005c3bbb
        ;   XREF to: 005ca4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ca4b0()
    ADD ESP,0x8                         ; 005c3bc0
    MOV ESI,EAX                         ; 005c3bc3
    CMP EAX,-0x1                        ; 005c3bc5
    JZ 0x005c3bd7                       ; 005c3bc8
        ;   XREF to: 005c3bd7 (CONDITIONAL_JUMP)  ; LAB_005c3bd7
    CMP EAX,dword ptr [EBX + 0x28]      ; 005c3bca
    JG 0x005c3bf6                       ; 005c3bcd
        ;   XREF to: 005c3bf6 (CONDITIONAL_JUMP)  ; LAB_005c3bf6
    MOV EDI,ESP                         ; 005c3bcf
    DEC ESI                             ; 005c3bd1
        ;   Label: LAB_005c3bd1
    CMP ESI,-0x1                        ; 005c3bd2
    JNZ 0x005c3bdf                      ; 005c3bd5
        ;   XREF to: 005c3bdf (CONDITIONAL_JUMP)  ; LAB_005c3bdf
    CMP dword ptr [EBX + 0x28],0x0      ; 005c3bd7
        ;   Label: LAB_005c3bd7
    JG 0x005c3bab                       ; 005c3bdb
        ;   XREF to: 005c3bab (CONDITIONAL_JUMP)  ; LAB_005c3bab
    JMP 0x005c3bfd                      ; 005c3bdd
        ;   XREF to: 005c3bfd (UNCONDITIONAL_JUMP)  ; LAB_005c3bfd
    XOR EAX,EAX                         ; 005c3bdf
        ;   Label: LAB_005c3bdf
    MOV AL,byte ptr [EDI]               ; 005c3be1
    PUSH EAX                            ; 005c3be3
    PUSH EBX                            ; 005c3be4
    CALL dword ptr [ESP + 0x30]         ; 005c3be5
    MOV EAX,dword ptr [EBX + 0x28]      ; 005c3be9
    INC EDI                             ; 005c3bec
    DEC EAX                             ; 005c3bed
    ADD ESP,0x8                         ; 005c3bee
    MOV dword ptr [EBX + 0x28],EAX      ; 005c3bf1
    JMP 0x005c3bd1                      ; 005c3bf4
        ;   XREF to: 005c3bd1 (UNCONDITIONAL_JUMP)  ; LAB_005c3bd1
    MOV dword ptr [EBX + 0x28],0x0      ; 005c3bf6
        ;   Label: LAB_005c3bf6
    ADD ESP,0x4                         ; 005c3bfd
        ;   Label: LAB_005c3bfd
    POP EBP                             ; 005c3c00
    POP ES                              ; 005c3c01
    POP EDI                             ; 005c3c02
    POP ESI                             ; 005c3c03
    POP EBX                             ; 005c3c04
    RET                                 ; 005c3c05

