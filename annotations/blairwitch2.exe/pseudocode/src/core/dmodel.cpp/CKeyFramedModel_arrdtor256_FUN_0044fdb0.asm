; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModel_arrdtor256_FUN_0044fdb0(CKeyFramedModel *this_ptr,uint flags)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f50e0                       ; 0044fdb0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_arrdtor256_FUN_0044fdb0
    PUSH 0x100                          ; 0044fdb5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044fdba
    PUSH EDX                            ; 0044fdbe
    CALL crt_memory.c___arrfini_FUN_005b854f ; 0044fdbf
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005b854f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0044fdc4
    RET                                 ; 0044fdc7

