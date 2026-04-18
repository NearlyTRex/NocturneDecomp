; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setedit_cpp_CDemonSet_writeIni_FUN_00584920(CDemonSet *this_ptr,CIniFile *ini_file)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CIniFile *       Stack[0x8]:4   ini_file
;
; XREF[1]:
;   core_inivar.cpp_writeIniData_FUN_004fc510 at 004fcbbf
;
; Referenced Globals:
;   TerminatedCString s_groundTypeDirectory_00648e59
;   char[260] g_GroundTypesBuffer
;
; Called Functions:
;   engine_ini.cpp_CIniFile_setString_FUN_004fbbb0
;
; *****************************************************************************

section .text

    PUSH 0x6816d8                       ; 00584920 | g_GroundTypesBuffer
        ;   Label: core_setedit.cpp_CDemonSet_writeIni_FUN_00584920
    PUSH 0x648e59                       ; 00584925 | = "groundTypeDirectory"
    MOV EDX,dword ptr [ESP + 0x10]      ; 0058492a
    PUSH EDX                            ; 0058492e
    CALL engine_ini.cpp_CIniFile_setString_FUN_004fbbb0 ; 0058492f
        ;   XREF to: 004fbbb0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setString_FUN_004fbbb0(CIniFile * this_ptr, char * key, char * value)
    ADD ESP,0xc                         ; 00584934
    RET                                 ; 00584937

