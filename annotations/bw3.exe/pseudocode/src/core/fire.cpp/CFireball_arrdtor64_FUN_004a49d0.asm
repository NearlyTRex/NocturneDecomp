; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFireball * core_fire_cpp_CFireball_arrdtor64_FUN_004a49d0(CFireball *this_ptr,uint flags)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dfb30                       ; 004a49d0
        ;   Label: core_fire.cpp_CFireball_arrdtor64_FUN_004a49d0
    PUSH 0x40                           ; 004a49d5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a49d7
    PUSH EDX                            ; 004a49db
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 004a49dc
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004a49e1
    RET                                 ; 004a49e4

