; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_script_cpp_FUN_0054ad20(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00544460 at 00546dca
;
; Referenced Globals:
;   undefined4 DAT_005efe14
;   undefined4 DAT_005efe17
;
; Called Functions:
;   crt_string.c__strnicmp_FUN_005c1210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054ad20
        ;   Label: core_script.cpp_FUN_0054ad20
    PUSH ESI                            ; 0054ad21
    PUSH EDI                            ; 0054ad22
    PUSH EBP                            ; 0054ad23
    SUB ESP,0x4                         ; 0054ad24
    MOV EBP,dword ptr [ESP + 0x18]      ; 0054ad27
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0054ad2b
    MOV EDX,0x1                         ; 0054ad2f
    MOV ECX,dword ptr [EBP + 0x2c]      ; 0054ad34
    XOR ESI,ESI                         ; 0054ad37
    MOV dword ptr [ESP],EDX             ; 0054ad39
    CMP EBX,ECX                         ; 0054ad3c
    JGE 0x0054ad60                      ; 0054ad3e
        ;   XREF to: 0054ad60 (CONDITIONAL_JUMP)  ; LAB_0054ad60
    MOV EDI,dword ptr [EBP + 0x30]      ; 0054ad40
        ;   Label: LAB_0054ad40
    MOV EDI,dword ptr [EDI + EBX*0x8 + 0x4] ; 0054ad43
    MOV AH,byte ptr [EDI]               ; 0054ad47
    CMP AH,0x7b                         ; 0054ad49
    JNZ 0x0054ad6f                      ; 0054ad4c
        ;   XREF to: 0054ad6f (CONDITIONAL_JUMP)  ; LAB_0054ad6f
    INC EBX                             ; 0054ad4e
    INC ESI                             ; 0054ad4f
    TEST EBX,EBX                        ; 0054ad50
        ;   Label: LAB_0054ad50
    JL 0x0054ad60                       ; 0054ad52
        ;   XREF to: 0054ad60 (CONDITIONAL_JUMP)  ; LAB_0054ad60
    XOR EDI,EDI                         ; 0054ad54
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0054ad56
    MOV dword ptr [ESP],EDI             ; 0054ad59
    CMP EBX,EAX                         ; 0054ad5c
    JL 0x0054ad40                       ; 0054ad5e
        ;   XREF to: 0054ad40 (CONDITIONAL_JUMP)  ; LAB_0054ad40
    MOV EBX,0xffffffff                  ; 0054ad60
        ;   Label: LAB_0054ad60
    MOV EAX,EBX                         ; 0054ad65
        ;   Label: LAB_0054ad65
    ADD ESP,0x4                         ; 0054ad67
    POP EBP                             ; 0054ad6a
    POP EDI                             ; 0054ad6b
    POP ESI                             ; 0054ad6c
    POP EBX                             ; 0054ad6d
    RET                                 ; 0054ad6e
    CMP AH,0x7d                         ; 0054ad6f
        ;   Label: LAB_0054ad6f
    JNZ 0x0054ad8d                      ; 0054ad72
        ;   XREF to: 0054ad8d (CONDITIONAL_JUMP)  ; LAB_0054ad8d
    TEST ESI,ESI                        ; 0054ad74
    JNZ 0x0054ad89                      ; 0054ad76
        ;   XREF to: 0054ad89 (CONDITIONAL_JUMP)  ; LAB_0054ad89
    CMP dword ptr [ESP],0x0             ; 0054ad78
    JZ 0x0054ad65                       ; 0054ad7c
        ;   XREF to: 0054ad65 (CONDITIONAL_JUMP)  ; LAB_0054ad65
    INC EBX                             ; 0054ad7e
    MOV EAX,EBX                         ; 0054ad7f
    ADD ESP,0x4                         ; 0054ad81
    POP EBP                             ; 0054ad84
    POP EDI                             ; 0054ad85
    POP ESI                             ; 0054ad86
    POP EBX                             ; 0054ad87
    RET                                 ; 0054ad88
    INC EBX                             ; 0054ad89
        ;   Label: LAB_0054ad89
    DEC ESI                             ; 0054ad8a
    JMP 0x0054ad50                      ; 0054ad8b
        ;   XREF to: 0054ad50 (UNCONDITIONAL_JUMP)  ; LAB_0054ad50
    TEST ESI,ESI                        ; 0054ad8d
        ;   Label: LAB_0054ad8d
    JG 0x0054ad97                       ; 0054ad8f
        ;   XREF to: 0054ad97 (CONDITIONAL_JUMP)  ; LAB_0054ad97
    CMP dword ptr [ESP],0x0             ; 0054ad91
    JZ 0x0054adab                       ; 0054ad95
        ;   XREF to: 0054adab (CONDITIONAL_JUMP)  ; LAB_0054adab
    PUSH 0x2                            ; 0054ad97
        ;   Label: LAB_0054ad97
    PUSH 0x5efe14                       ; 0054ad99 | DAT_005efe14
    PUSH EDI                            ; 0054ad9e
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054ad9f
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054ada4
    TEST EAX,EAX                        ; 0054ada7
    JZ 0x0054addf                       ; 0054ada9
        ;   XREF to: 0054addf (CONDITIONAL_JUMP)  ; LAB_0054addf
    TEST ESI,ESI                        ; 0054adab
        ;   Label: LAB_0054adab
    JG 0x0054adb6                       ; 0054adad
        ;   XREF to: 0054adb6 (CONDITIONAL_JUMP)  ; LAB_0054adb6
    CMP dword ptr [ESP + 0x20],0x0      ; 0054adaf
    JZ 0x0054adca                       ; 0054adb4
        ;   XREF to: 0054adca (CONDITIONAL_JUMP)  ; LAB_0054adca
    PUSH 0x4                            ; 0054adb6
        ;   Label: LAB_0054adb6
    PUSH 0x5efe17                       ; 0054adb8 | DAT_005efe17
    PUSH EDI                            ; 0054adbd
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0054adbe
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0054adc3
    TEST EAX,EAX                        ; 0054adc6
    JZ 0x0054adf3                       ; 0054adc8
        ;   XREF to: 0054adf3 (CONDITIONAL_JUMP)  ; LAB_0054adf3
    TEST ESI,ESI                        ; 0054adca
        ;   Label: LAB_0054adca
    JNZ 0x0054ae07                      ; 0054adcc
        ;   XREF to: 0054ae07 (CONDITIONAL_JUMP)  ; LAB_0054ae07
    CMP dword ptr [ESP],0x0             ; 0054adce
    JZ 0x0054ad65                       ; 0054add2
        ;   XREF to: 0054ad65 (CONDITIONAL_JUMP)  ; LAB_0054ad65
    INC EBX                             ; 0054add4
    MOV EAX,EBX                         ; 0054add5
    ADD ESP,0x4                         ; 0054add7
    POP EBP                             ; 0054adda
    POP EDI                             ; 0054addb
    POP ESI                             ; 0054addc
    POP EBX                             ; 0054addd
    RET                                 ; 0054adde
    PUSH 0x1                            ; 0054addf
        ;   Label: LAB_0054addf
    INC EBX                             ; 0054ade1
    PUSH EBX                            ; 0054ade2
    PUSH EBP                            ; 0054ade3
    CALL core_script.cpp_FUN_0054ad20   ; 0054ade4
        ;   XREF to: 0054ad20 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_0054ad20()
    MOV EBX,EAX                         ; 0054ade9
    ADD ESP,0xc                         ; 0054adeb
    JMP 0x0054ad50                      ; 0054adee
        ;   XREF to: 0054ad50 (UNCONDITIONAL_JUMP)  ; LAB_0054ad50
    PUSH 0x1                            ; 0054adf3
        ;   Label: LAB_0054adf3
    INC EBX                             ; 0054adf5
    PUSH EBX                            ; 0054adf6
    PUSH EBP                            ; 0054adf7
    CALL core_script.cpp_FUN_0054ad20   ; 0054adf8
        ;   XREF to: 0054ad20 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_0054ad20()
    ADD ESP,0xc                         ; 0054adfd
    MOV EBX,EAX                         ; 0054ae00
    JMP 0x0054ad50                      ; 0054ae02
        ;   XREF to: 0054ad50 (UNCONDITIONAL_JUMP)  ; LAB_0054ad50
    INC EBX                             ; 0054ae07
        ;   Label: LAB_0054ae07
    JMP 0x0054ad50                      ; 0054ae08
        ;   XREF to: 0054ad50 (UNCONDITIONAL_JUMP)  ; LAB_0054ad50

