; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModel * core_skeleton_cpp_CDeformableModel_arrdtor64_FUN_00549350(CDeformableModel *this_ptr,uint flags)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5fb9f0                       ; 00549350
        ;   Label: core_skeleton.cpp_CDeformableModel_arrdtor64_FUN_00549350
    PUSH 0x40                           ; 00549355
    MOV EDX,dword ptr [ESP + 0xc]       ; 00549357
    PUSH EDX                            ; 0054935b
    CALL crt_memory.c___arrfini_FUN_005b854f ; 0054935c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005b854f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00549361
    RET                                 ; 00549364

