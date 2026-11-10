; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_script_cpp_getDeformableModelFilename_FUN_0054b9a0(CDeformableModel *model_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   model_ptr
;
; XREF[1]:
;   core_script.cpp_parseBodyPartMask_FUN_00543610 at 005436a3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054b9a0
        ;   Label: core_script.cpp_getDeformableModelFilename_FUN_0054b9a0
    ADD EAX,0x35b0                      ; 0054b9a4
    RET                                 ; 0054b9a9

