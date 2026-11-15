; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_bugs_cpp_getDeformableModelName_FUN_004242d0(CDeformableModelInstance *model_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   model_ptr
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052cb72
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004242d0
        ;   Label: core_bugs.cpp_getDeformableModelName_FUN_004242d0
    ADD EAX,0x2350                      ; 004242d4
    RET                                 ; 004242d9

