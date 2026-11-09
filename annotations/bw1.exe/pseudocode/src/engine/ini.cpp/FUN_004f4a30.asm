; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_ini_cpp_FUN_004f4a30(char *param_1,char *param_2,undefined4 param_3,char *param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_stdlib.c_atoi_FUN_005c30e0
;   crt_unknown.c_FUN_005bfb40
;   engine_ini.cpp_FUN_004f4370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4a30
        ;   Label: engine_ini.cpp_FUN_004f4a30
    PUSH ESI                            ; 004f4a31
    PUSH EBP                            ; 004f4a32
    SUB ESP,0x200                       ; 004f4a33
    MOV EDX,dword ptr [ESP + 0x218]     ; 004f4a39
    PUSH EDX                            ; 004f4a40
    PUSH 0x5e57df                       ; 004f4a41
    LEA EAX,[ESP + 0x108]               ; 004f4a46
    PUSH EAX                            ; 004f4a4d
    CALL crt_unknown.c_FUN_005bfb40     ; 004f4a4e
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 004f4a53
    MOV ECX,dword ptr [ESP + 0x21c]     ; 004f4a56
    PUSH ECX                            ; 004f4a5d
    PUSH 0xff                           ; 004f4a5e
    LEA EAX,[ESP + 0x8]                 ; 004f4a63
    PUSH EAX                            ; 004f4a67
    LEA EAX,[ESP + 0x10c]               ; 004f4a68
    PUSH EAX                            ; 004f4a6f
    MOV EBX,dword ptr [ESP + 0x224]     ; 004f4a70
    PUSH EBX                            ; 004f4a77
    MOV ESI,dword ptr [ESP + 0x224]     ; 004f4a78
    PUSH ESI                            ; 004f4a7f
    PUSH 0x1d06d64                      ; 004f4a80
    CALL engine_ini.cpp_FUN_004f4370    ; 004f4a85
        ;   XREF to: 004f4370 (UNCONDITIONAL_CALL)  ; int engine_ini.cpp_FUN_004f4370(CIni * this_ptr, char * section, char * key, char * default_value, ...)
    ADD ESP,0x1c                        ; 004f4a8a
    TEST EAX,EAX                        ; 004f4a8d
    JZ 0x004f4aa6                       ; 004f4a8f
        ;   XREF to: 004f4aa6 (CONDITIONAL_JUMP)  ; LAB_004f4aa6
    MOV EAX,ESP                         ; 004f4a91
        ;   Label: LAB_004f4a91
    PUSH EAX                            ; 004f4a93
    CALL crt_stdlib.c_atoi_FUN_005c30e0 ; 004f4a94
        ;   XREF to: 005c30e0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005c30e0(char * string_ptr)
    ADD ESP,0x4                         ; 004f4a99
    ADD ESP,0x200                       ; 004f4a9c
    POP EBP                             ; 004f4aa2
    POP ESI                             ; 004f4aa3
    POP EBX                             ; 004f4aa4
    RET                                 ; 004f4aa5
    PUSH EDI                            ; 004f4aa6
        ;   Label: LAB_004f4aa6
    MOV EDI,0x5e57e2                    ; 004f4aa7
    MOV EBP,0x23d                       ; 004f4aac
    PUSH 0x5e57f4                       ; 004f4ab1
    MOV dword ptr [0x01d1d400],EDI      ; 004f4ab6 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 004f4abc | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004f4ac2
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004f4ac7
    POP EDI                             ; 004f4aca
    JMP 0x004f4a91                      ; 004f4acb
        ;   XREF to: 004f4a91 (UNCONDITIONAL_JUMP)  ; LAB_004f4a91

