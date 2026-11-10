; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_FUN_0056edde(char *param_1)
;
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;   engine_dosio.cpp_getFileSize_FUN_00478fb0
;   engine_dosio.cpp_splitPath_FUN_00479580
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0056edde
        ;   Label: sound_sndmain.cpp_FUN_0056edde
    SUB ESP,0x100                       ; 0056ede0
    MOV EDX,dword ptr [ESP + 0x104]     ; 0056ede6
    PUSH EDX                            ; 0056eded
    PUSH 0x5f30dd                       ; 0056edee
    CALL engine_dosio.cpp_getFileSize_FUN_00478fb0 ; 0056edf3
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00478fb0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0056edf8
    CMP EAX,0x200000                    ; 0056edfb
    JLE 0x0056ee0e                      ; 0056ee00
        ;   XREF to: 0056ee0e (CONDITIONAL_JUMP)  ; LAB_0056ee0e
    MOV EAX,0x1                         ; 0056ee02
        ;   Label: LAB_0056ee02
    ADD ESP,0x100                       ; 0056ee07
    RET                                 ; 0056ee0d
    MOV EAX,ESP                         ; 0056ee0e
        ;   Label: LAB_0056ee0e
    PUSH EAX                            ; 0056ee10
    PUSH 0x0                            ; 0056ee11
    PUSH 0x0                            ; 0056ee13
    PUSH 0x0                            ; 0056ee15
    MOV ECX,dword ptr [ESP + 0x114]     ; 0056ee17
    PUSH ECX                            ; 0056ee1e
    CALL engine_dosio.cpp_splitPath_FUN_00479580 ; 0056ee1f
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0056ee24
    PUSH 0x5f30e3                       ; 0056ee27
    LEA EAX,[ESP + 0x4]                 ; 0056ee2c
    PUSH EAX                            ; 0056ee30
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0056ee31
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0056ee36
    TEST EAX,EAX                        ; 0056ee39
    JZ 0x0056ee02                       ; 0056ee3b
        ;   XREF to: 0056ee02 (CONDITIONAL_JUMP)  ; LAB_0056ee02
    PUSH 0x5f30e7                       ; 0056ee3d
    LEA EAX,[ESP + 0x4]                 ; 0056ee42
    PUSH EAX                            ; 0056ee46
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0056ee47
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0056ee4c
    TEST EAX,EAX                        ; 0056ee4f
    JZ 0x0056ee02                       ; 0056ee51
        ;   XREF to: 0056ee02 (CONDITIONAL_JUMP)  ; LAB_0056ee02
    XOR EAX,EAX                         ; 0056ee53
    ADD ESP,0x100                       ; 0056ee55
    RET                                 ; 0056ee5b

