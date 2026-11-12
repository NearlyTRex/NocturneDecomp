; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SClothVertex * __cdecl core_cloth_cpp_SClothVertex_ctor_FUN_005b1ba0(SClothVertex *this_ptr)
;
; Parameters:
; SClothVertex *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b1ba0
        ;   Label: core_cloth.cpp_SClothVertex_ctor_FUN_005b1ba0
    PUSH 0x5f22b0                       ; 005b1ba4
    PUSH 0x3                            ; 005b1ba9
    ADD EAX,0xec                        ; 005b1bab
    PUSH EAX                            ; 005b1bb0
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 005b1bb1
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005b1bb6
    SUB EAX,0xec                        ; 005b1bb9
    RET                                 ; 005b1bbe

