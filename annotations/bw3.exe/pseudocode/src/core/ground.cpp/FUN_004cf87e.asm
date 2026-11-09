; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _FILE * core_ground_cpp_FUN_004cf87e(char *param_1,char *param_2,char *param_3,char *param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_dosio.cpp_FUN_004659c0
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 004cf87e
        ;   Label: core_ground.cpp_FUN_004cf87e
    PUSH EBX                            ; 004cf880
    PUSH ESI                            ; 004cf881
    PUSH EDI                            ; 004cf882
    PUSH EBP                            ; 004cf883
    SUB ESP,0x50                        ; 004cf884
    MOV ESI,dword ptr [ESP + 0x68]      ; 004cf887
    MOV EDI,ESP                         ; 004cf88b
    MOV DL,0x2e                         ; 004cf88d
    PUSH EDI                            ; 004cf88f
    MOV AL,byte ptr [ESI]               ; 004cf890
        ;   Label: LAB_004cf890
    MOV byte ptr [EDI],AL               ; 004cf892
    CMP AL,0x0                          ; 004cf894
    JZ 0x004cf8a8                       ; 004cf896
        ;   XREF to: 004cf8a8 (CONDITIONAL_JUMP)  ; LAB_004cf8a8
    MOV AL,byte ptr [ESI + 0x1]         ; 004cf898
    ADD ESI,0x2                         ; 004cf89b
    MOV byte ptr [EDI + 0x1],AL         ; 004cf89e
    ADD EDI,0x2                         ; 004cf8a1
    CMP AL,0x0                          ; 004cf8a4
    JNZ 0x004cf890                      ; 004cf8a6
        ;   XREF to: 004cf890 (CONDITIONAL_JUMP)  ; LAB_004cf890
    POP EDI                             ; 004cf8a8
        ;   Label: LAB_004cf8a8
    MOV ESI,ESP                         ; 004cf8a9
    MOV AL,byte ptr [ESI]               ; 004cf8ab
        ;   Label: LAB_004cf8ab
    CMP AL,DL                           ; 004cf8ad
    JZ 0x004cf8c3                       ; 004cf8af
        ;   XREF to: 004cf8c3 (CONDITIONAL_JUMP)  ; LAB_004cf8c3
    CMP AL,0x0                          ; 004cf8b1
    JZ 0x004cf8c1                       ; 004cf8b3
        ;   XREF to: 004cf8c1 (CONDITIONAL_JUMP)  ; LAB_004cf8c1
    INC ESI                             ; 004cf8b5
    MOV AL,byte ptr [ESI]               ; 004cf8b6
    CMP AL,DL                           ; 004cf8b8
    JZ 0x004cf8c3                       ; 004cf8ba
        ;   XREF to: 004cf8c3 (CONDITIONAL_JUMP)  ; LAB_004cf8c3
    INC ESI                             ; 004cf8bc
    CMP AL,0x0                          ; 004cf8bd
    JNZ 0x004cf8ab                      ; 004cf8bf
        ;   XREF to: 004cf8ab (CONDITIONAL_JUMP)  ; LAB_004cf8ab
    SUB ESI,ESI                         ; 004cf8c1
        ;   Label: LAB_004cf8c1
    MOV EDI,ESI                         ; 004cf8c3
        ;   Label: LAB_004cf8c3
    TEST ESI,ESI                        ; 004cf8c5
    JNZ 0x004cf8ec                      ; 004cf8c7
        ;   XREF to: 004cf8ec (CONDITIONAL_JUMP)  ; LAB_004cf8ec
    MOV EDX,0x5c4816                    ; 004cf8c9
    MOV ECX,0x40                        ; 004cf8ce
    PUSH 0x5c4829                       ; 004cf8d3
    MOV dword ptr [0x01d71de0],EDX      ; 004cf8d8 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004cf8de | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004cf8e4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004cf8e9
    MOV ESI,dword ptr [ESP + 0x6c]      ; 004cf8ec
        ;   Label: LAB_004cf8ec
    INC EDI                             ; 004cf8f0
    MOV EBX,dword ptr [ESP + 0x70]      ; 004cf8f1
    PUSH EDI                            ; 004cf8f5
    MOV AL,byte ptr [ESI]               ; 004cf8f6
        ;   Label: LAB_004cf8f6
    MOV byte ptr [EDI],AL               ; 004cf8f8
    CMP AL,0x0                          ; 004cf8fa
    JZ 0x004cf90e                       ; 004cf8fc
        ;   XREF to: 004cf90e (CONDITIONAL_JUMP)  ; LAB_004cf90e
    MOV AL,byte ptr [ESI + 0x1]         ; 004cf8fe
    ADD ESI,0x2                         ; 004cf901
    MOV byte ptr [EDI + 0x1],AL         ; 004cf904
    ADD EDI,0x2                         ; 004cf907
    CMP AL,0x0                          ; 004cf90a
    JNZ 0x004cf8f6                      ; 004cf90c
        ;   XREF to: 004cf8f6 (CONDITIONAL_JUMP)  ; LAB_004cf8f6
    POP EDI                             ; 004cf90e
        ;   Label: LAB_004cf90e
    PUSH EBX                            ; 004cf90f
    LEA EAX,[ESP + 0x4]                 ; 004cf910
    PUSH EAX                            ; 004cf914
    MOV ESI,dword ptr [ESP + 0x6c]      ; 004cf915
    PUSH ESI                            ; 004cf919
    CALL engine_dosio.cpp_FUN_004659c0  ; 004cf91a
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004cf91f
    MOV ESI,EAX                         ; 004cf922
    TEST EAX,EAX                        ; 004cf924
    JZ 0x004cf932                       ; 004cf926
        ;   XREF to: 004cf932 (CONDITIONAL_JUMP)  ; LAB_004cf932
    MOV EAX,ESI                         ; 004cf928
    ADD ESP,0x50                        ; 004cf92a
    POP EBP                             ; 004cf92d
    POP EDI                             ; 004cf92e
    POP ESI                             ; 004cf92f
    POP EBX                             ; 004cf930
    RET                                 ; 004cf931
    MOV EDI,0x5c4840                    ; 004cf932
        ;   Label: LAB_004cf932
    MOV EBP,0x44                        ; 004cf937
    PUSH 0x5c4853                       ; 004cf93c
    MOV dword ptr [0x01d71de0],EDI      ; 004cf941 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 004cf947 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004cf94d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004cf952
    MOV EAX,ESI                         ; 004cf955
    ADD ESP,0x50                        ; 004cf957
    POP EBP                             ; 004cf95a
    POP EDI                             ; 004cf95b
    POP ESI                             ; 004cf95c
    POP EBX                             ; 004cf95d
    RET                                 ; 004cf95e

