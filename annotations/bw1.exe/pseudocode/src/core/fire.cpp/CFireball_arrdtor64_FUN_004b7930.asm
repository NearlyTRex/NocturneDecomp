; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFireball * __cdecl core_fire_cpp_CFireball_arrdtor64_FUN_004b7930(CFireball *this_ptr,uint flags)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x6001e0                       ; 004b7930
        ;   Label: core_fire.cpp_CFireball_arrdtor64_FUN_004b7930
    PUSH 0x40                           ; 004b7935
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b7937
    PUSH EDX                            ; 004b793b
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 004b793c
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004b7941
    RET                                 ; 004b7944

