; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_ini_cpp_getProfileInteger_FUN_004bd790(char *section,char *key,int default_value,char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   section
; char *           Stack[0x8]:4   key
; int              Stack[0xc]:4   default_value
; char *           Stack[0x10]:4   filename
; Local Variables:
; undefined        Stack[-0x20c]:1  local_20c
; undefined        Stack[-0x10c]:1  local_10c
;
; Referenced Globals:
;   TerminatedCString s_d_00586621
;   TerminatedCString s_engine_ini_cpp_00586624
;   TerminatedCString s_Bad_ini_read_00586636
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_stdlib.c_atoi_FUN_00566f30
;   engine_ini.cpp_CIni_getProfileString_FUN_004bd0a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bd790
        ;   Label: engine_ini.cpp_getProfileInteger_FUN_004bd790
    PUSH ESI                            ; 004bd791
    PUSH EBP                            ; 004bd792
    SUB ESP,0x200                       ; 004bd793
    MOV EDX,dword ptr [ESP + 0x218]     ; 004bd799
    PUSH EDX                            ; 004bd7a0
    PUSH 0x586621                       ; 004bd7a1 | = "%d"
    LEA EAX,[ESP + 0x108]               ; 004bd7a6
    PUSH EAX                            ; 004bd7ad
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004bd7ae
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004bd7b3
    MOV ECX,dword ptr [ESP + 0x21c]     ; 004bd7b6
    PUSH ECX                            ; 004bd7bd
    PUSH 0xff                           ; 004bd7be
    LEA EAX,[ESP + 0x8]                 ; 004bd7c3
    PUSH EAX                            ; 004bd7c7
    LEA EAX,[ESP + 0x10c]               ; 004bd7c8
    PUSH EAX                            ; 004bd7cf
    MOV EBX,dword ptr [ESP + 0x224]     ; 004bd7d0
    PUSH EBX                            ; 004bd7d7
    MOV ESI,dword ptr [ESP + 0x224]     ; 004bd7d8
    PUSH ESI                            ; 004bd7df
    PUSH 0x1cae378                      ; 004bd7e0
    CALL engine_ini.cpp_CIni_getProfileString_FUN_004bd0a0 ; 004bd7e5
        ;   XREF to: 004bd0a0 (UNCONDITIONAL_CALL)  ; int engine_ini.cpp_CIni_getProfileString_FUN_004bd0a0(CIni * this_ptr, char * section, char * key, char * default_value, ...)
    ADD ESP,0x1c                        ; 004bd7ea
    TEST EAX,EAX                        ; 004bd7ed
    JZ 0x004bd806                       ; 004bd7ef
        ;   XREF to: 004bd806 (CONDITIONAL_JUMP)  ; LAB_004bd806
    MOV EAX,ESP                         ; 004bd7f1
        ;   Label: LAB_004bd7f1
    PUSH EAX                            ; 004bd7f3
    CALL crt_stdlib.c_atoi_FUN_00566f30 ; 004bd7f4
        ;   XREF to: 00566f30 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_00566f30(char * string_ptr)
    ADD ESP,0x4                         ; 004bd7f9
    ADD ESP,0x200                       ; 004bd7fc
    POP EBP                             ; 004bd802
    POP ESI                             ; 004bd803
    POP EBX                             ; 004bd804
    RET                                 ; 004bd805
    PUSH EDI                            ; 004bd806
        ;   Label: LAB_004bd806
    MOV EDI,0x586624                    ; 004bd807 | = "..\\engine\\ini.cpp"
    MOV EBP,0x22b                       ; 004bd80c
    PUSH 0x586636                       ; 004bd811 | = "Bad ini read!"
    MOV dword ptr [0x01cc4800],EDI      ; 004bd816 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 004bd81c | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004bd822
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004bd827
    POP EDI                             ; 004bd82a
    JMP 0x004bd7f1                      ; 004bd82b
        ;   XREF to: 004bd7f1 (UNCONDITIONAL_JUMP)  ; LAB_004bd7f1

