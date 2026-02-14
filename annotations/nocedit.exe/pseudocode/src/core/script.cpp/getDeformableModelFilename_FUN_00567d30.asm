; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * __cdecl core_script_cpp_getDeformableModelFilename_FUN_00567d30(CDeformableModel *model_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   model_ptr
;
; XREF[1]:
;   core_script.cpp_parseBodyPartMask_FUN_00559730 at 005597c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00567d30
        ;   Label: core_script.cpp_getDeformableModelFilename_FUN_00567d30
    ADD EAX,0x8fb0                      ; 00567d34
    RET                                 ; 00567d39

