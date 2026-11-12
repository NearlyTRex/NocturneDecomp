; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFirefly * core_fire_cpp_CFirefly_arrdtor64_FUN_004a4a10(CFirefly *this_ptr,uint flags)
;
; Parameters:
; CFirefly *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dfab0                       ; 004a4a10
        ;   Label: core_fire.cpp_CFirefly_arrdtor64_FUN_004a4a10
    PUSH 0x40                           ; 004a4a15
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a4a17
    PUSH EDX                            ; 004a4a1b
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 004a4a1c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004a4a21
    RET                                 ; 004a4a24

