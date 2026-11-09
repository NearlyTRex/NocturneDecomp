; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _FILE * core_ground_cpp_FUN_004ca6de(char *param_1,char *param_2,char *param_3,char *param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_dosio.cpp_FUN_00460c70
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 004ca6de
        ;   Label: core_ground.cpp_FUN_004ca6de
    PUSH EBX                            ; 004ca6e0
    PUSH ESI                            ; 004ca6e1
    PUSH EDI                            ; 004ca6e2
    PUSH EBP                            ; 004ca6e3
    SUB ESP,0x50                        ; 004ca6e4
    MOV ESI,dword ptr [ESP + 0x68]      ; 004ca6e7
    MOV EDI,ESP                         ; 004ca6eb
    MOV DL,0x2e                         ; 004ca6ed
    PUSH EDI                            ; 004ca6ef
    MOV AL,byte ptr [ESI]               ; 004ca6f0
        ;   Label: LAB_004ca6f0
    MOV byte ptr [EDI],AL               ; 004ca6f2
    CMP AL,0x0                          ; 004ca6f4
    JZ 0x004ca708                       ; 004ca6f6
        ;   XREF to: 004ca708 (CONDITIONAL_JUMP)  ; LAB_004ca708
    MOV AL,byte ptr [ESI + 0x1]         ; 004ca6f8
    ADD ESI,0x2                         ; 004ca6fb
    MOV byte ptr [EDI + 0x1],AL         ; 004ca6fe
    ADD EDI,0x2                         ; 004ca701
    CMP AL,0x0                          ; 004ca704
    JNZ 0x004ca6f0                      ; 004ca706
        ;   XREF to: 004ca6f0 (CONDITIONAL_JUMP)  ; LAB_004ca6f0
    POP EDI                             ; 004ca708
        ;   Label: LAB_004ca708
    MOV ESI,ESP                         ; 004ca709
    MOV AL,byte ptr [ESI]               ; 004ca70b
        ;   Label: LAB_004ca70b
    CMP AL,DL                           ; 004ca70d
    JZ 0x004ca723                       ; 004ca70f
        ;   XREF to: 004ca723 (CONDITIONAL_JUMP)  ; LAB_004ca723
    CMP AL,0x0                          ; 004ca711
    JZ 0x004ca721                       ; 004ca713
        ;   XREF to: 004ca721 (CONDITIONAL_JUMP)  ; LAB_004ca721
    INC ESI                             ; 004ca715
    MOV AL,byte ptr [ESI]               ; 004ca716
    CMP AL,DL                           ; 004ca718
    JZ 0x004ca723                       ; 004ca71a
        ;   XREF to: 004ca723 (CONDITIONAL_JUMP)  ; LAB_004ca723
    INC ESI                             ; 004ca71c
    CMP AL,0x0                          ; 004ca71d
    JNZ 0x004ca70b                      ; 004ca71f
        ;   XREF to: 004ca70b (CONDITIONAL_JUMP)  ; LAB_004ca70b
    SUB ESI,ESI                         ; 004ca721
        ;   Label: LAB_004ca721
    MOV EDI,ESI                         ; 004ca723
        ;   Label: LAB_004ca723
    TEST ESI,ESI                        ; 004ca725
    JNZ 0x004ca74c                      ; 004ca727
        ;   XREF to: 004ca74c (CONDITIONAL_JUMP)  ; LAB_004ca74c
    MOV EDX,0x5d960f                    ; 004ca729
    MOV ECX,0x40                        ; 004ca72e
    PUSH 0x5d9622                       ; 004ca733
    MOV dword ptr [0x01d046a0],EDX      ; 004ca738 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004ca73e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ca744
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ca749
    MOV ESI,dword ptr [ESP + 0x6c]      ; 004ca74c
        ;   Label: LAB_004ca74c
    INC EDI                             ; 004ca750
    MOV EBX,dword ptr [ESP + 0x70]      ; 004ca751
    PUSH EDI                            ; 004ca755
    MOV AL,byte ptr [ESI]               ; 004ca756
        ;   Label: LAB_004ca756
    MOV byte ptr [EDI],AL               ; 004ca758
    CMP AL,0x0                          ; 004ca75a
    JZ 0x004ca76e                       ; 004ca75c
        ;   XREF to: 004ca76e (CONDITIONAL_JUMP)  ; LAB_004ca76e
    MOV AL,byte ptr [ESI + 0x1]         ; 004ca75e
    ADD ESI,0x2                         ; 004ca761
    MOV byte ptr [EDI + 0x1],AL         ; 004ca764
    ADD EDI,0x2                         ; 004ca767
    CMP AL,0x0                          ; 004ca76a
    JNZ 0x004ca756                      ; 004ca76c
        ;   XREF to: 004ca756 (CONDITIONAL_JUMP)  ; LAB_004ca756
    POP EDI                             ; 004ca76e
        ;   Label: LAB_004ca76e
    PUSH EBX                            ; 004ca76f
    LEA EAX,[ESP + 0x4]                 ; 004ca770
    PUSH EAX                            ; 004ca774
    MOV ESI,dword ptr [ESP + 0x6c]      ; 004ca775
    PUSH ESI                            ; 004ca779
    CALL engine_dosio.cpp_FUN_00460c70  ; 004ca77a
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004ca77f
    MOV ESI,EAX                         ; 004ca782
    TEST EAX,EAX                        ; 004ca784
    JZ 0x004ca792                       ; 004ca786
        ;   XREF to: 004ca792 (CONDITIONAL_JUMP)  ; LAB_004ca792
    MOV EAX,ESI                         ; 004ca788
    ADD ESP,0x50                        ; 004ca78a
    POP EBP                             ; 004ca78d
    POP EDI                             ; 004ca78e
    POP ESI                             ; 004ca78f
    POP EBX                             ; 004ca790
    RET                                 ; 004ca791
    MOV EDI,0x5d9639                    ; 004ca792
        ;   Label: LAB_004ca792
    MOV EBP,0x44                        ; 004ca797
    PUSH 0x5d964c                       ; 004ca79c
    MOV dword ptr [0x01d046a0],EDI      ; 004ca7a1 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 004ca7a7 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ca7ad
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ca7b2
    MOV EAX,ESI                         ; 004ca7b5
    ADD ESP,0x50                        ; 004ca7b7
    POP EBP                             ; 004ca7ba
    POP EDI                             ; 004ca7bb
    POP ESI                             ; 004ca7bc
    POP EBX                             ; 004ca7bd
    RET                                 ; 004ca7be

