; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0057ccc0(int *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061ed94
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057ccc0
        ;   Label: FUN_0057ccc0
    SUB ESP,0x4                         ; 0057ccc1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0057ccc4
    PUSH EBX                            ; 0057ccc8
    MOV EAX,dword ptr [EBX]             ; 0057ccc9
    CALL dword ptr [EAX + 0x4]          ; 0057cccb
    ADD ESP,0x4                         ; 0057ccce
    MOV dword ptr [ESP],EAX             ; 0057ccd1
    TEST EAX,EAX                        ; 0057ccd4
    JL 0x0057cd00                       ; 0057ccd6
        ;   XREF to: 0057cd00 (CONDITIONAL_JUMP)  ; LAB_0057cd00
    MOV AL,byte ptr [ESP]               ; 0057ccd8
        ;   Label: LAB_0057ccd8
    INC AL                              ; 0057ccdb
    AND EAX,0xff                        ; 0057ccdd
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 0057cce2 | DAT_0061ed94
    JZ 0x0057cd0c                       ; 0057cce9
        ;   XREF to: 0057cd0c (CONDITIONAL_JUMP)  ; LAB_0057cd0c
    PUSH EBX                            ; 0057cceb
    MOV EAX,dword ptr [EBX]             ; 0057ccec
    CALL dword ptr [EAX + 0x4]          ; 0057ccee
    ADD ESP,0x4                         ; 0057ccf1
    MOV dword ptr [ESP],EAX             ; 0057ccf4
    CMP EAX,-0x1                        ; 0057ccf7
    JZ 0x0057cd05                       ; 0057ccfa
        ;   XREF to: 0057cd05 (CONDITIONAL_JUMP)  ; LAB_0057cd05
    TEST EAX,EAX                        ; 0057ccfc
    JGE 0x0057ccd8                      ; 0057ccfe
        ;   XREF to: 0057ccd8 (CONDITIONAL_JUMP)  ; LAB_0057ccd8
    ADD ESP,0x4                         ; 0057cd00
        ;   Label: LAB_0057cd00
    POP EBX                             ; 0057cd03
    RET                                 ; 0057cd04
    XOR EAX,EAX                         ; 0057cd05
        ;   Label: LAB_0057cd05
    ADD ESP,0x4                         ; 0057cd07
    POP EBX                             ; 0057cd0a
    RET                                 ; 0057cd0b
    MOV EDX,dword ptr [ESP]             ; 0057cd0c
        ;   Label: LAB_0057cd0c
    PUSH EDX                            ; 0057cd0f
    MOV EAX,dword ptr [EBX]             ; 0057cd10
    PUSH EBX                            ; 0057cd12
    CALL dword ptr [EAX + 0x8]          ; 0057cd13
    ADD ESP,0x8                         ; 0057cd16
    TEST EAX,EAX                        ; 0057cd19
    JZ 0x0057cd24                       ; 0057cd1b
        ;   XREF to: 0057cd24 (CONDITIONAL_JUMP)  ; LAB_0057cd24
    XOR EAX,EAX                         ; 0057cd1d
    ADD ESP,0x4                         ; 0057cd1f
    POP EBX                             ; 0057cd22
    RET                                 ; 0057cd23
    MOV EAX,0xfffffffe                  ; 0057cd24
        ;   Label: LAB_0057cd24
    ADD ESP,0x4                         ; 0057cd29
    POP EBX                             ; 0057cd2c
    RET                                 ; 0057cd2d

