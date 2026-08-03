; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModel_arrdtor_FUN_004545e0(CKeyFramedModel *this_ptr,uint flags)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59c0a0                       ; 004545e0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_arrdtor_FUN_004545e0
    PUSH 0x100                          ; 004545e5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004545ea
    PUSH EDX                            ; 004545ee
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004545ef
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004545f4
    RET                                 ; 004545f7

