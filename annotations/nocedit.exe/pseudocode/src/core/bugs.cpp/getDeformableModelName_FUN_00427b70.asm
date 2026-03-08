; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_bugs_cpp_getDeformableModelName_FUN_00427b70(CDeformableModelInstance *model_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   model_ptr
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055d142
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00427b70
        ;   Label: core_bugs.cpp_getDeformableModelName_FUN_00427b70
    ADD EAX,0x2260                      ; 00427b74
    RET                                 ; 00427b79

