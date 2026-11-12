; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStake * core_fire_cpp_CStake_arrdtor256_FUN_004b79b0(CStake *this_ptr,uint flags)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x600120                       ; 004b79b0
        ;   Label: core_fire.cpp_CStake_arrdtor256_FUN_004b79b0
    PUSH 0x100                          ; 004b79b5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b79ba
    PUSH EDX                            ; 004b79be
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 004b79bf
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004b79c4
    RET                                 ; 004b79c7

