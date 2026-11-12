; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModel * core_dmodel_cpp_CKeyFramedModel_arrdtor256_FUN_00462630(CKeyFramedModel *this_ptr,uint flags)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5de580                       ; 00462630
        ;   Label: core_dmodel.cpp_CKeyFramedModel_arrdtor256_FUN_00462630
    PUSH 0x100                          ; 00462635
    MOV EDX,dword ptr [ESP + 0xc]       ; 0046263a
    PUSH EDX                            ; 0046263e
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 0046263f
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00462644
    RET                                 ; 00462647

