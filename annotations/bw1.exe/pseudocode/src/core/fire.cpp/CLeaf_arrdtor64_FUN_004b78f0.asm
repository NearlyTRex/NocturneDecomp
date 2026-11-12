; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLeaf * core_fire_cpp_CLeaf_arrdtor64_FUN_004b78f0(CLeaf *this_ptr,uint flags)
;
; Parameters:
; CLeaf *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x600220                       ; 004b78f0
        ;   Label: core_fire.cpp_CLeaf_arrdtor64_FUN_004b78f0
    PUSH 0x40                           ; 004b78f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b78f7
    PUSH EDX                            ; 004b78fb
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 004b78fc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004b7901
    RET                                 ; 004b7904

