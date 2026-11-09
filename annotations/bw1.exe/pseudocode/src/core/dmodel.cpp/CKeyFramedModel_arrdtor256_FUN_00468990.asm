; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModel * core_dmodel_cpp_CKeyFramedModel_arrdtor256_FUN_00468990(CKeyFramedModel *this_ptr,uint flags)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fec60                       ; 00468990
        ;   Label: core_dmodel.cpp_CKeyFramedModel_arrdtor256_FUN_00468990
    PUSH 0x100                          ; 00468995
    MOV EDX,dword ptr [ESP + 0xc]       ; 0046899a
    PUSH EDX                            ; 0046899e
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 0046899f
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005c1066()
    ADD ESP,0xc                         ; 004689a4
    RET                                 ; 004689a7

