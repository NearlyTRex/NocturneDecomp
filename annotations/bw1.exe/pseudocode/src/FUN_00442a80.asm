; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00442a80(undefined4 param_1,int param_2,int param_3)
;
;
; Called Functions:
;   FUN_00442880
;   FUN_005c0530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442a80
        ;   Label: FUN_00442a80
    PUSH ESI                            ; 00442a81
    PUSH EDI                            ; 00442a82
    SUB ESP,0x4                         ; 00442a83
    MOV EDI,dword ptr [ESP + 0x14]      ; 00442a86
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00442a8a
    MOV ESI,dword ptr [ESP + 0x18]      ; 00442a8e
    TEST EBX,EBX                        ; 00442a92
    JZ 0x00442ad6                       ; 00442a94
        ;   XREF to: 00442ad6 (CONDITIONAL_JUMP)  ; LAB_00442ad6
    JLE 0x00442a99                      ; 00442a96
        ;   XREF to: 00442a99 (CONDITIONAL_JUMP)  ; LAB_00442a99
        ;   Label: LAB_00442a96
    DEC EBX                             ; 00442a98
    PUSH ESI                            ; 00442a99
        ;   Label: LAB_00442a99
    CALL FUN_005c0530                   ; 00442a9a
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0530()
    ADD ESP,0x4                         ; 00442a9f
    MOV dword ptr [ESP],EAX             ; 00442aa2
    TEST EAX,EAX                        ; 00442aa5
    JGE 0x00442ac3                      ; 00442aa7
        ;   XREF to: 00442ac3 (CONDITIONAL_JUMP)  ; LAB_00442ac3
    TEST EBX,EBX                        ; 00442aa9
    JL 0x00442ab6                       ; 00442aab
        ;   XREF to: 00442ab6 (CONDITIONAL_JUMP)  ; LAB_00442ab6
    XOR EAX,EAX                         ; 00442aad
        ;   Label: LAB_00442aad
    ADD ESP,0x4                         ; 00442aaf
        ;   Label: LAB_00442aaf
    POP EDI                             ; 00442ab2
    POP ESI                             ; 00442ab3
    POP EBX                             ; 00442ab4
    RET                                 ; 00442ab5
    TEST byte ptr [ESI + 0xc],0x20      ; 00442ab6
        ;   Label: LAB_00442ab6
    JNZ 0x00442aad                      ; 00442aba
        ;   XREF to: 00442aad (CONDITIONAL_JUMP)  ; LAB_00442aad
    MOV EAX,0x1                         ; 00442abc
    JMP 0x00442aaf                      ; 00442ac1
        ;   XREF to: 00442aaf (UNCONDITIONAL_JUMP)  ; LAB_00442aaf
    XOR EAX,EAX                         ; 00442ac3
        ;   Label: LAB_00442ac3
    MOV AL,byte ptr [ESP]               ; 00442ac5
    PUSH EAX                            ; 00442ac8
    PUSH EDI                            ; 00442ac9
    CALL FUN_00442880                   ; 00442aca
        ;   XREF to: 00442880 (UNCONDITIONAL_CALL)  ; undefined FUN_00442880()
    ADD ESP,0x8                         ; 00442acf
    TEST EBX,EBX                        ; 00442ad2
    JNZ 0x00442a96                      ; 00442ad4
        ;   XREF to: 00442a96 (CONDITIONAL_JUMP)  ; LAB_00442a96
    MOV EAX,0x1                         ; 00442ad6
        ;   Label: LAB_00442ad6
    ADD ESP,0x4                         ; 00442adb
    POP EDI                             ; 00442ade
    POP ESI                             ; 00442adf
    POP EBX                             ; 00442ae0
    RET                                 ; 00442ae1

