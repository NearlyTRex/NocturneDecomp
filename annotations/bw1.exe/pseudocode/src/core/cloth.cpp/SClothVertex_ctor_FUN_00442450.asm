; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SClothVertex * __cdecl core_cloth_cpp_SClothVertex_ctor_FUN_00442450(SClothVertex *this_ptr)
;
; Parameters:
; SClothVertex *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00442450
        ;   Label: core_cloth.cpp_SClothVertex_ctor_FUN_00442450
    PUSH 0x5fb430                       ; 00442454
    PUSH 0x3                            ; 00442459
    ADD EAX,0xec                        ; 0044245b
    PUSH EAX                            ; 00442460
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 00442461
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00442466
    SUB EAX,0xec                        ; 00442469
    RET                                 ; 0044246e

