; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_script_cpp_getDeformableModelFilename_FUN_00531090(CDeformableModel *model_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   model_ptr
;
; XREF[1]:
;   core_script.cpp_parseBodyPartMask_FUN_00528c20 at 00528cb3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00531090
        ;   Label: core_script.cpp_getDeformableModelFilename_FUN_00531090
    ADD EAX,0x35b0                      ; 00531094
    RET                                 ; 00531099

