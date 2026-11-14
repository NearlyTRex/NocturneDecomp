; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_flashlit_cpp_FUN_004a7950(byte *param_1,byte *param_2,byte *param_3)
;
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005a4120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7950
        ;   Label: core_flashlit.cpp_FUN_004a7950
    PUSH ESI                            ; 004a7951
    PUSH EDI                            ; 004a7952
    MOV ESI,dword ptr [ESP + 0x10]      ; 004a7953
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a7957
    MOV AL,byte ptr [ESI]               ; 004a795b
        ;   Label: LAB_004a795b
    INC AL                              ; 004a795d
    AND EAX,0xff                        ; 004a795f
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004a7964
    JZ 0x004a7970                       ; 004a796b
        ;   XREF to: 004a7970 (CONDITIONAL_JUMP)  ; LAB_004a7970
    INC ESI                             ; 004a796d
    JMP 0x004a795b                      ; 004a796e
        ;   XREF to: 004a795b (UNCONDITIONAL_JUMP)  ; LAB_004a795b
    CMP byte ptr [ESI],0x5c             ; 004a7970
        ;   Label: LAB_004a7970
    JNZ 0x004a79ba                      ; 004a7973
        ;   XREF to: 004a79ba (CONDITIONAL_JUMP)  ; LAB_004a79ba
    MOV CL,byte ptr [EBX]               ; 004a7975
    INC ESI                             ; 004a7977
    TEST CL,CL                          ; 004a7978
    JZ 0x004a79a5                       ; 004a797a
        ;   XREF to: 004a79a5 (CONDITIONAL_JUMP)  ; LAB_004a79a5
    XOR EAX,EAX                         ; 004a797c
        ;   Label: LAB_004a797c
    MOV AL,byte ptr [ESI]               ; 004a797e
    PUSH EAX                            ; 004a7980
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004a7981
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    MOV EDI,EAX                         ; 004a7986
    XOR EAX,EAX                         ; 004a7988
    ADD ESP,0x4                         ; 004a798a
    MOV AL,byte ptr [EBX]               ; 004a798d
    PUSH EAX                            ; 004a798f
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004a7990
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004a7995
    CMP EDI,EAX                         ; 004a7998
    JNZ 0x004a79ba                      ; 004a799a
        ;   XREF to: 004a79ba (CONDITIONAL_JUMP)  ; LAB_004a79ba
    INC ESI                             ; 004a799c
    MOV CH,byte ptr [EBX + 0x1]         ; 004a799d
    INC EBX                             ; 004a79a0
    TEST CH,CH                          ; 004a79a1
    JNZ 0x004a797c                      ; 004a79a3
        ;   XREF to: 004a797c (CONDITIONAL_JUMP)  ; LAB_004a797c
    MOV AL,byte ptr [ESI]               ; 004a79a5
        ;   Label: LAB_004a79a5
    INC AL                              ; 004a79a7
    AND EAX,0xff                        ; 004a79a9
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004a79ae
    JZ 0x004a79c0                       ; 004a79b5
        ;   XREF to: 004a79c0 (CONDITIONAL_JUMP)  ; LAB_004a79c0
    INC ESI                             ; 004a79b7
    JMP 0x004a79a5                      ; 004a79b8
        ;   XREF to: 004a79a5 (UNCONDITIONAL_JUMP)  ; LAB_004a79a5
    XOR EAX,EAX                         ; 004a79ba
        ;   Label: LAB_004a79ba
    POP EDI                             ; 004a79bc
    POP ESI                             ; 004a79bd
    POP EBX                             ; 004a79be
    RET                                 ; 004a79bf
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a79c0
        ;   Label: LAB_004a79c0
    PUSH EDI                            ; 004a79c4
    MOV AL,byte ptr [ESI]               ; 004a79c5
        ;   Label: LAB_004a79c5
    MOV byte ptr [EDI],AL               ; 004a79c7
    CMP AL,0x0                          ; 004a79c9
    JZ 0x004a79dd                       ; 004a79cb
        ;   XREF to: 004a79dd (CONDITIONAL_JUMP)  ; LAB_004a79dd
    MOV AL,byte ptr [ESI + 0x1]         ; 004a79cd
    ADD ESI,0x2                         ; 004a79d0
    MOV byte ptr [EDI + 0x1],AL         ; 004a79d3
    ADD EDI,0x2                         ; 004a79d6
    CMP AL,0x0                          ; 004a79d9
    JNZ 0x004a79c5                      ; 004a79db
        ;   XREF to: 004a79c5 (CONDITIONAL_JUMP)  ; LAB_004a79c5
    POP EDI                             ; 004a79dd
        ;   Label: LAB_004a79dd
    MOV EAX,0x1                         ; 004a79de
    POP EDI                             ; 004a79e3
    POP ESI                             ; 004a79e4
    POP EBX                             ; 004a79e5
    RET                                 ; 004a79e6

