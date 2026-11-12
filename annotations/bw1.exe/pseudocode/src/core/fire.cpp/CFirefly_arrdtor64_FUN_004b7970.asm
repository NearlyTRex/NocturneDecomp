; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFirefly * core_fire_cpp_CFirefly_arrdtor64_FUN_004b7970(CFirefly *this_ptr,uint flags)
;
; Parameters:
; CFirefly *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x600160                       ; 004b7970
        ;   Label: core_fire.cpp_CFirefly_arrdtor64_FUN_004b7970
    PUSH 0x40                           ; 004b7975
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b7977
    PUSH EDX                            ; 004b797b
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 004b797c
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004b7981
    RET                                 ; 004b7984

