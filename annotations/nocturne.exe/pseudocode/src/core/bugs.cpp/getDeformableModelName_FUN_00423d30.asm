; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_bugs_cpp_getDeformableModelName_FUN_00423d30(CDeformableModelInstance *model_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   model_ptr
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00501bf2
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00423d30
        ;   Label: core_bugs.cpp_getDeformableModelName_FUN_00423d30
    ADD EAX,0x2260                      ; 00423d34
    RET                                 ; 00423d39

