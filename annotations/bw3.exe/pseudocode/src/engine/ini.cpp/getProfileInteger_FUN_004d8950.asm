; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_ini_cpp_getProfileInteger_FUN_004d8950(char *section,char *key,int default_value,char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   section
; char *           Stack[0x8]:4   key
; int              Stack[0xc]:4   default_value
; char *           Stack[0x10]:4   filename
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_stdlib.c_atoi_FUN_005a5f50
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_ini.cpp_CIni_getProfileString_FUN_004d8290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8950
        ;   Label: engine_ini.cpp_getProfileInteger_FUN_004d8950
    PUSH ESI                            ; 004d8951
    PUSH EBP                            ; 004d8952
    SUB ESP,0x200                       ; 004d8953
    MOV EDX,dword ptr [ESP + 0x218]     ; 004d8959
    PUSH EDX                            ; 004d8960
    PUSH 0x5c57a5                       ; 004d8961
    LEA EAX,[ESP + 0x108]               ; 004d8966
    PUSH EAX                            ; 004d896d
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004d896e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004d8973
    MOV ECX,dword ptr [ESP + 0x21c]     ; 004d8976
    PUSH ECX                            ; 004d897d
    PUSH 0xff                           ; 004d897e
    LEA EAX,[ESP + 0x8]                 ; 004d8983
    PUSH EAX                            ; 004d8987
    LEA EAX,[ESP + 0x10c]               ; 004d8988
    PUSH EAX                            ; 004d898f
    MOV EBX,dword ptr [ESP + 0x224]     ; 004d8990
    PUSH EBX                            ; 004d8997
    MOV ESI,dword ptr [ESP + 0x224]     ; 004d8998
    PUSH ESI                            ; 004d899f
    PUSH 0x1d5bc78                      ; 004d89a0
    CALL engine_ini.cpp_CIni_getProfileString_FUN_004d8290 ; 004d89a5
        ;   XREF to: 004d8290 (UNCONDITIONAL_CALL)  ; int engine_ini.cpp_CIni_getProfileString_FUN_004d8290(CIni * this_ptr, char * section, char * key, char * default_value, ...)
    ADD ESP,0x1c                        ; 004d89aa
    TEST EAX,EAX                        ; 004d89ad
    JZ 0x004d89c6                       ; 004d89af
        ;   XREF to: 004d89c6 (CONDITIONAL_JUMP)  ; LAB_004d89c6
    MOV EAX,ESP                         ; 004d89b1
        ;   Label: LAB_004d89b1
    PUSH EAX                            ; 004d89b3
    CALL crt_stdlib.c_atoi_FUN_005a5f50 ; 004d89b4
        ;   XREF to: 005a5f50 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005a5f50(char * string_ptr)
    ADD ESP,0x4                         ; 004d89b9
    ADD ESP,0x200                       ; 004d89bc
    POP EBP                             ; 004d89c2
    POP ESI                             ; 004d89c3
    POP EBX                             ; 004d89c4
    RET                                 ; 004d89c5
    PUSH EDI                            ; 004d89c6
        ;   Label: LAB_004d89c6
    MOV EDI,0x5c57a8                    ; 004d89c7
    MOV EBP,0x23d                       ; 004d89cc
    PUSH 0x5c57ba                       ; 004d89d1
    MOV dword ptr [0x01d71de0],EDI      ; 004d89d6 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 004d89dc | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004d89e2
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004d89e7
    POP EDI                             ; 004d89ea
    JMP 0x004d89b1                      ; 004d89eb
        ;   XREF to: 004d89b1 (UNCONDITIONAL_JUMP)  ; LAB_004d89b1

