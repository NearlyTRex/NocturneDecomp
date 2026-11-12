; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLeaf * core_fire_cpp_CLeaf_arrdtor64_FUN_004a4990(CLeaf *this_ptr,uint flags)
;
; Parameters:
; CLeaf *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dfb70                       ; 004a4990
        ;   Label: core_fire.cpp_CLeaf_arrdtor64_FUN_004a4990
    PUSH 0x40                           ; 004a4995
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a4997
    PUSH EDX                            ; 004a499b
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 004a499c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004a49a1
    RET                                 ; 004a49a4

