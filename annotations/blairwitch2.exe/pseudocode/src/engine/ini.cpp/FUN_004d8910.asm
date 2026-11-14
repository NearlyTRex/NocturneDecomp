; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CIniFile * __cdecl engine_ini_cpp_FUN_004d8910(CIniFile *this_ptr,char *filename,char *section)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; char *           Stack[0xc]:4   section
;
; XREF[4]:
;   core_game.cpp_FUN_004bc840 at 004bc8fc
;   core_inivar.cpp_readIniData_FUN_004d8d60 at 004d8d90
;   core_inivar.cpp_writeIniData_FUN_004d94d0 at 004d94e6
;   core_script.cpp_CScript_step_FUN_00522350 at 0052562f
;
; Referenced Globals:
;   void* PTR_engine_ini.cpp_CIniFile_dtor_FUN_004d8940_005f8ef4 = 004d8940
;
; Called Functions:
;   engine_ini.cpp_CIniFile_readIniHeader_FUN_004d89d0
;   engine_ini.cpp_initIniFile_FUN_004d8990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8910
        ;   Label: engine_ini.cpp_FUN_004d8910
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d8911
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d8915
    PUSH EDX                            ; 004d8919
    PUSH EBX                            ; 004d891a
    MOV dword ptr [EBX + 0x200],0x5f8ef4 ; 004d891b | PTR_engine_ini.cpp_CIniFile_dtor_FUN_004d8940_005f8ef4
    CALL engine_ini.cpp_initIniFile_FUN_004d8990 ; 004d8925
        ;   XREF to: 004d8990 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_initIniFile_FUN_004d8990(char * dest, char * source)
    ADD ESP,0x8                         ; 004d892a
    MOV ECX,dword ptr [ESP + 0x10]      ; 004d892d
    PUSH ECX                            ; 004d8931
    PUSH EBX                            ; 004d8932
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004d89d0 ; 004d8933
        ;   XREF to: 004d89d0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004d89d0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004d8938
    MOV EAX,EBX                         ; 004d893b
    POP EBX                             ; 004d893d
    RET                                 ; 004d893e

