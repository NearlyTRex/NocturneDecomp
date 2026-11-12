; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_bugs_cpp_getDeformableModelName_FUN_004220f0(CDeformableModelInstance *model_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   model_ptr
;
; XREF[1]:
;   core_script.cpp_FUN_00522350 at 00525537
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004220f0
        ;   Label: core_bugs.cpp_getDeformableModelName_FUN_004220f0
    ADD EAX,0x2260                      ; 004220f4
    RET                                 ; 004220f9

