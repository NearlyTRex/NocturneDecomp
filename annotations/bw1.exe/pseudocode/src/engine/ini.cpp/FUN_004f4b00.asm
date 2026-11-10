; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CIniFile * engine_ini_cpp_FUN_004f4b00(CIniFile *param_1,char *param_2,char *param_3)
;
;
; XREF[5]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004d27b0 at 004d545e
;   core_game.cpp_FUN_004d7250 at 004d7315
;   core_inivar.cpp_readIniData_FUN_004f4f50 at 004f4f80
;   core_inivar.cpp_writeIniData_FUN_004f5760 at 004f5776
;   core_script.cpp_CScript_step_FUN_00544460 at 00547591
;
; Referenced Globals:
;   void* PTR_engine_ini.cpp_CIniFile_dtor_FUN_004f4b30_00602964 = 004f4b30
;
; Called Functions:
;   engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0
;   engine_ini.cpp_initIniFile_FUN_004f4b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4b00
        ;   Label: engine_ini.cpp_FUN_004f4b00
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f4b01
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f4b05
    PUSH EDX                            ; 004f4b09
    PUSH EBX                            ; 004f4b0a
    MOV dword ptr [EBX + 0x200],0x602964 ; 004f4b0b | PTR_engine_ini.cpp_CIniFile_dtor_FUN_004f4b30_00602964
    CALL engine_ini.cpp_initIniFile_FUN_004f4b80 ; 004f4b15
        ;   XREF to: 004f4b80 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_initIniFile_FUN_004f4b80(char * dest, char * source)
    ADD ESP,0x8                         ; 004f4b1a
    MOV ECX,dword ptr [ESP + 0x10]      ; 004f4b1d
    PUSH ECX                            ; 004f4b21
    PUSH EBX                            ; 004f4b22
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0 ; 004f4b23
        ;   XREF to: 004f4bc0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004f4b28
    MOV EAX,EBX                         ; 004f4b2b
    POP EBX                             ; 004f4b2d
    RET                                 ; 004f4b2e

