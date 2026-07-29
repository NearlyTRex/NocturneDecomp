; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CIniFile * __cdecl engine_ini_cpp_CIniFile_ctor_FUN_004bd860(CIniFile *this_ptr,char *filename,char *section)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; char *           Stack[0xc]:4   section
;
; XREF[4]:
;   core_game.cpp_FUN_004a4b50 at 004a4c34
;   core_inivar.cpp_FUN_004bdb80 at 004bdbb0
;   core_inivar.cpp_writeIniData_FUN_004be2d0 at 004be2e6
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00501ced
;
; Called Functions:
;   engine_ini.cpp_CIniFile_init_FUN_004bd890
;   engine_ini.cpp_CIniFile_readIniHeader_FUN_004bd8d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bd860
        ;   Label: engine_ini.cpp_CIniFile_ctor_FUN_004bd860
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bd861
    MOV EDX,dword ptr [ESP + 0xc]       ; 004bd865
    PUSH EDX                            ; 004bd869
    PUSH EBX                            ; 004bd86a
    CALL engine_ini.cpp_CIniFile_init_FUN_004bd890 ; 004bd86b
        ;   XREF to: 004bd890 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_init_FUN_004bd890(char * dest, char * source)
    ADD ESP,0x8                         ; 004bd870
    MOV ECX,dword ptr [ESP + 0x10]      ; 004bd873
    PUSH ECX                            ; 004bd877
    PUSH EBX                            ; 004bd878
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004bd8d0 ; 004bd879
        ;   XREF to: 004bd8d0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004bd8d0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004bd87e
    MOV EAX,EBX                         ; 004bd881
    POP EBX                             ; 004bd883
    RET                                 ; 004bd884

