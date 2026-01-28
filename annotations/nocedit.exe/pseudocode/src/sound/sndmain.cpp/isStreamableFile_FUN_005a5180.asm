; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndmain_cpp_isStreamableFile_FUN_005a5180(char *filename,char *filepath)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; char *           Stack[0x8]:4   filepath
; Local Variables:
; undefined        Stack[-0x100]:1  local_100
;
; Referenced Globals:
;   TerminatedCString s_sound_0064fa53
;   TerminatedCString s_mp3_0064fa59
;   TerminatedCString s_mp3_0064fa5d
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;   engine_dosio.c_getFileSize_FUN_00481880
;   engine_dosio.c_splitPath_FUN_00481f20
;
; *****************************************************************************

section .text

    SUB ESP,0x100                       ; 005a5180
        ;   Label: sound_sndmain.cpp_isStreamableFile_FUN_005a5180
    MOV EDX,dword ptr [ESP + 0x104]     ; 005a5186
    PUSH EDX                            ; 005a518d
    PUSH 0x64fa53                       ; 005a518e | = "sound"
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 005a5193
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 005a5198
    CMP EAX,0x200000                    ; 005a519b
    JLE 0x005a51ae                      ; 005a51a0
        ;   XREF to: 005a51ae (CONDITIONAL_JUMP)  ; LAB_005a51ae
    MOV EAX,0x1                         ; 005a51a2
        ;   Label: LAB_005a51a2
    ADD ESP,0x100                       ; 005a51a7
    RET                                 ; 005a51ad
    MOV EAX,ESP                         ; 005a51ae
        ;   Label: LAB_005a51ae
    PUSH EAX                            ; 005a51b0
    PUSH 0x0                            ; 005a51b1
    PUSH 0x0                            ; 005a51b3
    PUSH 0x0                            ; 005a51b5
    MOV ECX,dword ptr [ESP + 0x114]     ; 005a51b7
    PUSH ECX                            ; 005a51be
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 005a51bf
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005a51c4
    PUSH 0x64fa59                       ; 005a51c7 | = "mp3"
    LEA EAX,[ESP + 0x4]                 ; 005a51cc
    PUSH EAX                            ; 005a51d0
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005a51d1
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005a51d6
    TEST EAX,EAX                        ; 005a51d9
    JZ 0x005a51a2                       ; 005a51db
        ;   XREF to: 005a51a2 (CONDITIONAL_JUMP)  ; LAB_005a51a2
    PUSH 0x64fa5d                       ; 005a51dd | = ".mp3"
    LEA EAX,[ESP + 0x4]                 ; 005a51e2
    PUSH EAX                            ; 005a51e6
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005a51e7
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005a51ec
    TEST EAX,EAX                        ; 005a51ef
    JZ 0x005a51a2                       ; 005a51f1
        ;   XREF to: 005a51a2 (CONDITIONAL_JUMP)  ; LAB_005a51a2
    XOR EAX,EAX                         ; 005a51f3
    ADD ESP,0x100                       ; 005a51f5
    RET                                 ; 005a51fb

