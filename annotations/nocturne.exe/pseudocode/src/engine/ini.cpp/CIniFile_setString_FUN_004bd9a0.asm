; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_CIniFile_setString_FUN_004bd9a0(CIniFile *this_ptr,char *key,char *value)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   key
; char *           Stack[0xc]:4   value
;
; XREF[4]:
;   core_inivar.cpp_writeIniData_FUN_004be2d0 at 004be391
;   engine_ini.cpp_CIniFile_setFloatValue_FUN_004bdb20 at 004bdb4c
;   engine_ini.cpp_CIniFile_setInteger_FUN_004bda80 at 004bdaa8
;   sound_sndmain.cpp_writeIni_FUN_00528c80 at 00528cfa
;
; Referenced Globals:
;   TerminatedCString s_engine_ini_cpp_005866bb
;   TerminatedCString s_CIniFile_setString_filen_005866cd
;   TerminatedCString s_engine_ini_cpp_005866f7
;   TerminatedCString s_CIniFile_setString_secti_00586709
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   engine_ini.cpp_writeProfileString_FUN_004bd830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bd9a0
        ;   Label: engine_ini.cpp_CIniFile_setString_FUN_004bd9a0
    PUSH EBP                            ; 004bd9a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004bd9a2
    CMP byte ptr [EBX],0x0              ; 004bd9a6
    JZ 0x004bd9d1                       ; 004bd9a9
        ;   XREF to: 004bd9d1 (CONDITIONAL_JUMP)  ; LAB_004bd9d1
    CMP byte ptr [EBX + 0x100],0x0      ; 004bd9ab
        ;   Label: LAB_004bd9ab
    JZ 0x004bd9f6                       ; 004bd9b2
        ;   XREF to: 004bd9f6 (CONDITIONAL_JUMP)  ; LAB_004bd9f6
    PUSH EBX                            ; 004bd9b4
        ;   Label: LAB_004bd9b4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004bd9b5
    PUSH EBP                            ; 004bd9b9
    MOV EAX,dword ptr [ESP + 0x18]      ; 004bd9ba
    PUSH EAX                            ; 004bd9be
    ADD EBX,0x100                       ; 004bd9bf
    PUSH EBX                            ; 004bd9c5
    CALL engine_ini.cpp_writeProfileString_FUN_004bd830 ; 004bd9c6
        ;   XREF to: 004bd830 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_writeProfileString_FUN_004bd830(char * section, char * key, char * value, char * filename)
    ADD ESP,0x10                        ; 004bd9cb
    POP EBP                             ; 004bd9ce
    POP EBX                             ; 004bd9cf
    RET                                 ; 004bd9d0
    MOV EDX,0x5866bb                    ; 004bd9d1 | = "..\\engine\\ini.cpp"
        ;   Label: LAB_004bd9d1
    MOV ECX,0x26b                       ; 004bd9d6
    PUSH 0x5866cd                       ; 004bd9db | = "CIniFile::setString - filename not wr..."
    MOV dword ptr [0x01cc4800],EDX      ; 004bd9e0 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004bd9e6 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004bd9ec
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004bd9f1
    JMP 0x004bd9ab                      ; 004bd9f4
        ;   XREF to: 004bd9ab (UNCONDITIONAL_JUMP)  ; LAB_004bd9ab
    PUSH EDI                            ; 004bd9f6
        ;   Label: LAB_004bd9f6
    PUSH ESI                            ; 004bd9f7
    MOV ESI,0x5866f7                    ; 004bd9f8 | = "..\\engine\\ini.cpp"
    MOV EDI,0x26c                       ; 004bd9fd
    PUSH 0x586709                       ; 004bda02 | = "CIniFile::setString - section not write!"
    MOV dword ptr [0x01cc4800],ESI      ; 004bda07 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004bda0d | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004bda13
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004bda18
    POP ESI                             ; 004bda1b
    POP EDI                             ; 004bda1c
    JMP 0x004bd9b4                      ; 004bda1d
        ;   XREF to: 004bd9b4 (UNCONDITIONAL_JUMP)  ; LAB_004bd9b4

