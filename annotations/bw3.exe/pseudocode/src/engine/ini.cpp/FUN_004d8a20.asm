; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CIniFile * __cdecl engine_ini_cpp_FUN_004d8a20(CIniFile *this_ptr,char *filename,char *section)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; char *           Stack[0xc]:4   section
;
; XREF[4]:
;   core_game.cpp_FUN_004be8d0 at 004be99f
;   core_inivar.cpp_FUN_004d8e70 at 004d8ea0
;   core_inivar.cpp_FUN_004d95c0 at 004d95d6
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052cc7b
;
; Referenced Globals:
;   void* PTR_engine_ini.cpp_CIniFile_dtor_FUN_004d8a50_005e2074 = 004d8a50
;
; Called Functions:
;   engine_ini.cpp_CIniFile_readIniHeader_FUN_004d8ae0
;   engine_ini.cpp_initIniFile_FUN_004d8aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8a20
        ;   Label: engine_ini.cpp_FUN_004d8a20
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d8a21
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d8a25
    PUSH EDX                            ; 004d8a29
    PUSH EBX                            ; 004d8a2a
    MOV dword ptr [EBX + 0x200],0x5e2074 ; 004d8a2b | PTR_engine_ini.cpp_CIniFile_dtor_FUN_004d8a50_005e2074
    CALL engine_ini.cpp_initIniFile_FUN_004d8aa0 ; 004d8a35
        ;   XREF to: 004d8aa0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_initIniFile_FUN_004d8aa0(char * dest, char * source)
    ADD ESP,0x8                         ; 004d8a3a
    MOV ECX,dword ptr [ESP + 0x10]      ; 004d8a3d
    PUSH ECX                            ; 004d8a41
    PUSH EBX                            ; 004d8a42
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004d8ae0 ; 004d8a43
        ;   XREF to: 004d8ae0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004d8ae0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004d8a48
    MOV EAX,EBX                         ; 004d8a4b
    POP EBX                             ; 004d8a4d
    RET                                 ; 004d8a4e

