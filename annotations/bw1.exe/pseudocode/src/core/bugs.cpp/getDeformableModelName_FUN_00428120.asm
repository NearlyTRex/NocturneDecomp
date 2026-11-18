; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_bugs_cpp_getDeformableModelName_FUN_00428120(CDeformableModelInstance *model_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   model_ptr
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00544460 at 0054748b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00428120
        ;   Label: core_bugs.cpp_getDeformableModelName_FUN_00428120
    ADD EAX,0x2350                      ; 00428124
    RET                                 ; 00428129

