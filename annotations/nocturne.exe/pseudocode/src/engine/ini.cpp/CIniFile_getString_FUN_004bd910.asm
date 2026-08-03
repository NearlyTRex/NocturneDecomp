; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_CIniFile_getString_FUN_004bd910(CIniFile *this_ptr,char *key,char *output_buffer,int buffer_size)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   key
; char *           Stack[0xc]:4   output_buffer
; int              Stack[0x10]:4   buffer_size
;
; XREF[4]:
;   core_inivar.cpp_FUN_004bdb80 at 004bdc5b
;   engine_ini.cpp_CIniFile_getFloat_FUN_004bdac0 at 004bdaf3
;   engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 at 004bda4f
;   sound_sndmain.cpp_FUN_005289f0 at 00528a29
;
; Referenced Globals:
;   TerminatedCString s_engine_ini_cpp_00586644
;   TerminatedCString s_CIniFile_getString_filen_00586656
;   TerminatedCString s_engine_ini_cpp_00586680
;   TerminatedCString s_CIniFile_getString_secti_00586692
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   engine_ini.cpp_getProfileString_FUN_004bd750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bd910
        ;   Label: engine_ini.cpp_CIniFile_getString_FUN_004bd910
    PUSH EBP                            ; 004bd911
    MOV EBX,dword ptr [ESP + 0xc]       ; 004bd912
    CMP byte ptr [EBX],0x0              ; 004bd916
    JZ 0x004bd947                       ; 004bd919
        ;   XREF to: 004bd947 (CONDITIONAL_JUMP)  ; LAB_004bd947
    CMP byte ptr [EBX + 0x100],0x0      ; 004bd91b
        ;   Label: LAB_004bd91b
    JZ 0x004bd96c                       ; 004bd922
        ;   XREF to: 004bd96c (CONDITIONAL_JUMP)  ; LAB_004bd96c
    PUSH EBX                            ; 004bd924
        ;   Label: LAB_004bd924
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004bd925
    PUSH EBP                            ; 004bd929
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004bd92a
    PUSH EAX                            ; 004bd92e
    PUSH EAX                            ; 004bd92f
    MOV ECX,dword ptr [ESP + 0x20]      ; 004bd930
    PUSH ECX                            ; 004bd934
    ADD EBX,0x100                       ; 004bd935
    PUSH EBX                            ; 004bd93b
    CALL engine_ini.cpp_getProfileString_FUN_004bd750 ; 004bd93c
        ;   XREF to: 004bd750 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_getProfileString_FUN_004bd750(char * section, char * key, char * default_value, char * output_buffer, ...)
    ADD ESP,0x18                        ; 004bd941
    POP EBP                             ; 004bd944
    POP EBX                             ; 004bd945
    RET                                 ; 004bd946
    MOV EDX,0x586644                    ; 004bd947 | = "..\\engine\\ini.cpp"
        ;   Label: LAB_004bd947
    MOV ECX,0x265                       ; 004bd94c
    PUSH 0x586656                       ; 004bd951 | = "CIniFile::getString - filename not wr..."
    MOV dword ptr [0x01cc4800],EDX      ; 004bd956 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004bd95c | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004bd962
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004bd967
    JMP 0x004bd91b                      ; 004bd96a
        ;   XREF to: 004bd91b (UNCONDITIONAL_JUMP)  ; LAB_004bd91b
    PUSH EDI                            ; 004bd96c
        ;   Label: LAB_004bd96c
    PUSH ESI                            ; 004bd96d
    MOV ESI,0x586680                    ; 004bd96e | = "..\\engine\\ini.cpp"
    MOV EDI,0x266                       ; 004bd973
    PUSH 0x586692                       ; 004bd978 | = "CIniFile::getString - section not write!"
    MOV dword ptr [0x01cc4800],ESI      ; 004bd97d | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004bd983 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004bd989
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004bd98e
    POP ESI                             ; 004bd991
    POP EDI                             ; 004bd992
    JMP 0x004bd924                      ; 004bd993
        ;   XREF to: 004bd924 (UNCONDITIONAL_JUMP)  ; LAB_004bd924

