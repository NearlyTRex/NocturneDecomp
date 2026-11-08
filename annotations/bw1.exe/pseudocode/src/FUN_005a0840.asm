; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a0840(int *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00626114
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0840
        ;   Label: FUN_005a0840
    SUB ESP,0x4                         ; 005a0841
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a0844
    PUSH EBX                            ; 005a0848
    MOV EAX,dword ptr [EBX]             ; 005a0849
    CALL dword ptr [EAX + 0x4]          ; 005a084b
    ADD ESP,0x4                         ; 005a084e
    MOV dword ptr [ESP],EAX             ; 005a0851
    TEST EAX,EAX                        ; 005a0854
    JL 0x005a0880                       ; 005a0856
        ;   XREF to: 005a0880 (CONDITIONAL_JUMP)  ; LAB_005a0880
    MOV AL,byte ptr [ESP]               ; 005a0858
        ;   Label: LAB_005a0858
    INC AL                              ; 005a085b
    AND EAX,0xff                        ; 005a085d
    TEST byte ptr [EAX + 0x626114],0x2  ; 005a0862 | DAT_00626114
    JZ 0x005a088c                       ; 005a0869
        ;   XREF to: 005a088c (CONDITIONAL_JUMP)  ; LAB_005a088c
    PUSH EBX                            ; 005a086b
    MOV EAX,dword ptr [EBX]             ; 005a086c
    CALL dword ptr [EAX + 0x4]          ; 005a086e
    ADD ESP,0x4                         ; 005a0871
    MOV dword ptr [ESP],EAX             ; 005a0874
    CMP EAX,-0x1                        ; 005a0877
    JZ 0x005a0885                       ; 005a087a
        ;   XREF to: 005a0885 (CONDITIONAL_JUMP)  ; LAB_005a0885
    TEST EAX,EAX                        ; 005a087c
    JGE 0x005a0858                      ; 005a087e
        ;   XREF to: 005a0858 (CONDITIONAL_JUMP)  ; LAB_005a0858
    ADD ESP,0x4                         ; 005a0880
        ;   Label: LAB_005a0880
    POP EBX                             ; 005a0883
    RET                                 ; 005a0884
    XOR EAX,EAX                         ; 005a0885
        ;   Label: LAB_005a0885
    ADD ESP,0x4                         ; 005a0887
    POP EBX                             ; 005a088a
    RET                                 ; 005a088b
    MOV EDX,dword ptr [ESP]             ; 005a088c
        ;   Label: LAB_005a088c
    PUSH EDX                            ; 005a088f
    MOV EAX,dword ptr [EBX]             ; 005a0890
    PUSH EBX                            ; 005a0892
    CALL dword ptr [EAX + 0x8]          ; 005a0893
    ADD ESP,0x8                         ; 005a0896
    TEST EAX,EAX                        ; 005a0899
    JZ 0x005a08a4                       ; 005a089b
        ;   XREF to: 005a08a4 (CONDITIONAL_JUMP)  ; LAB_005a08a4
    XOR EAX,EAX                         ; 005a089d
    ADD ESP,0x4                         ; 005a089f
    POP EBX                             ; 005a08a2
    RET                                 ; 005a08a3
    MOV EAX,0xfffffffe                  ; 005a08a4
        ;   Label: LAB_005a08a4
    ADD ESP,0x4                         ; 005a08a9
    POP EBX                             ; 005a08ac
    RET                                 ; 005a08ad

