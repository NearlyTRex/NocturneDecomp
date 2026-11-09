; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_ini_cpp_FUN_004d8840(char *param_1,char *param_2,undefined4 param_3,char *param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_stdlib.c_atoi_FUN_005bad20
;   crt_unknown.c_FUN_005b7790
;   engine_ini.cpp_FUN_004d8180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8840
        ;   Label: engine_ini.cpp_FUN_004d8840
    PUSH ESI                            ; 004d8841
    PUSH EBP                            ; 004d8842
    SUB ESP,0x200                       ; 004d8843
    MOV EDX,dword ptr [ESP + 0x218]     ; 004d8849
    PUSH EDX                            ; 004d8850
    PUSH 0x5dac7e                       ; 004d8851
    LEA EAX,[ESP + 0x108]               ; 004d8856
    PUSH EAX                            ; 004d885d
    CALL crt_unknown.c_FUN_005b7790     ; 004d885e
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 004d8863
    MOV ECX,dword ptr [ESP + 0x21c]     ; 004d8866
    PUSH ECX                            ; 004d886d
    PUSH 0xff                           ; 004d886e
    LEA EAX,[ESP + 0x8]                 ; 004d8873
    PUSH EAX                            ; 004d8877
    LEA EAX,[ESP + 0x10c]               ; 004d8878
    PUSH EAX                            ; 004d887f
    MOV EBX,dword ptr [ESP + 0x224]     ; 004d8880
    PUSH EBX                            ; 004d8887
    MOV ESI,dword ptr [ESP + 0x224]     ; 004d8888
    PUSH ESI                            ; 004d888f
    PUSH 0x1cee1a4                      ; 004d8890
    CALL engine_ini.cpp_FUN_004d8180    ; 004d8895
        ;   XREF to: 004d8180 (UNCONDITIONAL_CALL)  ; int engine_ini.cpp_FUN_004d8180(CIni * this_ptr, char * section, char * key, char * default_value, ...)
    ADD ESP,0x1c                        ; 004d889a
    TEST EAX,EAX                        ; 004d889d
    JZ 0x004d88b6                       ; 004d889f
        ;   XREF to: 004d88b6 (CONDITIONAL_JUMP)  ; LAB_004d88b6
    MOV EAX,ESP                         ; 004d88a1
        ;   Label: LAB_004d88a1
    PUSH EAX                            ; 004d88a3
    CALL crt_stdlib.c_atoi_FUN_005bad20 ; 004d88a4
        ;   XREF to: 005bad20 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005bad20(char * string_ptr)
    ADD ESP,0x4                         ; 004d88a9
    ADD ESP,0x200                       ; 004d88ac
    POP EBP                             ; 004d88b2
    POP ESI                             ; 004d88b3
    POP EBX                             ; 004d88b4
    RET                                 ; 004d88b5
    PUSH EDI                            ; 004d88b6
        ;   Label: LAB_004d88b6
    MOV EDI,0x5dac81                    ; 004d88b7
    MOV EBP,0x23d                       ; 004d88bc
    PUSH 0x5dac93                       ; 004d88c1
    MOV dword ptr [0x01d046a0],EDI      ; 004d88c6 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 004d88cc | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004d88d2
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004d88d7
    POP EDI                             ; 004d88da
    JMP 0x004d88a1                      ; 004d88db
        ;   XREF to: 004d88a1 (UNCONDITIONAL_JUMP)  ; LAB_004d88a1

