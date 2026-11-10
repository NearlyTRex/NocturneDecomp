; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_CIniFile_getString_FUN_004d8b20(CIniFile *this_ptr,char *key,char *output_buffer,int buffer_size)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   key
; char *           Stack[0xc]:4   output_buffer
; int              Stack[0x10]:4   buffer_size
;
; XREF[1]:
;   core_inivar.cpp_readIniData_FUN_004d8e70 at 004d8f4b
;
; Referenced Globals:
;   TerminatedCString s_engine_ini_cpp_005c57c8
;   TerminatedCString s_CIniFile_getString_filen_005c57da
;   TerminatedCString s_engine_ini_cpp_005c5802
;   TerminatedCString s_CIniFile_getString_secti_005c5814
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_ini.cpp_getProfileString_FUN_004d8910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8b20
        ;   Label: engine_ini.cpp_CIniFile_getString_FUN_004d8b20
    PUSH EBP                            ; 004d8b21
    MOV EBX,dword ptr [ESP + 0xc]       ; 004d8b22
    CMP byte ptr [EBX],0x0              ; 004d8b26
    JZ 0x004d8b57                       ; 004d8b29
        ;   XREF to: 004d8b57 (CONDITIONAL_JUMP)  ; LAB_004d8b57
    CMP byte ptr [EBX + 0x100],0x0      ; 004d8b2b
        ;   Label: LAB_004d8b2b
    JZ 0x004d8b7c                       ; 004d8b32
        ;   XREF to: 004d8b7c (CONDITIONAL_JUMP)  ; LAB_004d8b7c
    PUSH EBX                            ; 004d8b34
        ;   Label: LAB_004d8b34
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004d8b35
    PUSH EBP                            ; 004d8b39
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004d8b3a
    PUSH EAX                            ; 004d8b3e
    PUSH EAX                            ; 004d8b3f
    MOV ECX,dword ptr [ESP + 0x20]      ; 004d8b40
    PUSH ECX                            ; 004d8b44
    ADD EBX,0x100                       ; 004d8b45
    PUSH EBX                            ; 004d8b4b
    CALL engine_ini.cpp_getProfileString_FUN_004d8910 ; 004d8b4c
        ;   XREF to: 004d8910 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_getProfileString_FUN_004d8910(char * section, char * key, char * default_value, char * output_buffer, ...)
    ADD ESP,0x18                        ; 004d8b51
    POP EBP                             ; 004d8b54
    POP EBX                             ; 004d8b55
    RET                                 ; 004d8b56
    MOV EDX,0x5c57c8                    ; 004d8b57 | = "..\\engine\\ini.cpp"
        ;   Label: LAB_004d8b57
    MOV ECX,0x27a                       ; 004d8b5c
    PUSH 0x5c57da                       ; 004d8b61 | = "CIniFile::getString - filename not set!"
    MOV dword ptr [0x01d71de0],EDX      ; 004d8b66 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004d8b6c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004d8b72
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004d8b77
    JMP 0x004d8b2b                      ; 004d8b7a
        ;   XREF to: 004d8b2b (UNCONDITIONAL_JUMP)  ; LAB_004d8b2b
    PUSH EDI                            ; 004d8b7c
        ;   Label: LAB_004d8b7c
    PUSH ESI                            ; 004d8b7d
    MOV ESI,0x5c5802                    ; 004d8b7e | = "..\\engine\\ini.cpp"
    MOV EDI,0x27b                       ; 004d8b83
    PUSH 0x5c5814                       ; 004d8b88 | = "CIniFile::getString - section not set!"
    MOV dword ptr [0x01d71de0],ESI      ; 004d8b8d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004d8b93 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004d8b99
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004d8b9e
    POP ESI                             ; 004d8ba1
    POP EDI                             ; 004d8ba2
    JMP 0x004d8b34                      ; 004d8ba3
        ;   XREF to: 004d8b34 (UNCONDITIONAL_JUMP)  ; LAB_004d8b34

