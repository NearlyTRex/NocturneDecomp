; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setedit_cpp_CDemonSet_readIni_FUN_00584900(CDemonSet *set_ptr,CIniFile *ini_file)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   set_ptr
; CIniFile *       Stack[0x8]:4   ini_file
;
; XREF[1]:
;   core_inivar.cpp_readIniData_FUN_004fbd90 at 004fc4d5
;
; Referenced Globals:
;   TerminatedCString s_groundTypeDirectory_00648e45
;   TerminatedCString s_GroundTypes_006816d8
;
; Called Functions:
;   engine_ini.cpp_CIniFile_getString_FUN_004fbb20
;
; *****************************************************************************

section .text

    PUSH 0x104                          ; 00584900
        ;   Label: core_setedit.cpp_CDemonSet_readIni_FUN_00584900
    PUSH 0x6816d8                       ; 00584905 | = ".\\GroundTypes"
    PUSH 0x648e45                       ; 0058490a | = "groundTypeDirectory"
    MOV EDX,dword ptr [ESP + 0x14]      ; 0058490f
    PUSH EDX                            ; 00584913
    CALL engine_ini.cpp_CIniFile_getString_FUN_004fbb20 ; 00584914
        ;   XREF to: 004fbb20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getString_FUN_004fbb20(CIniFile * this_ptr, char * key, char * output_buffer, int buffer_size)
    ADD ESP,0x10                        ; 00584919
    RET                                 ; 0058491c

