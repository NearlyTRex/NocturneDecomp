; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_haystack_cpp_CHaystack_serialize_FUN_004f1b50(CHaystack *this_ptr)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_hero.cpp_CHero_serialize_FUN_004f2610
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f1b50
        ;   Label: core_haystack.cpp_CHaystack_serialize_FUN_004f1b50
    PUSH EDX                            ; 004f1b54
    CALL core_hero.cpp_CHero_serialize_FUN_004f2610 ; 004f1b55
        ;   XREF to: 004f2610 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_serialize_FUN_004f2610(CHero * this_ptr)
    ADD ESP,0x4                         ; 004f1b5a
    RET                                 ; 004f1b5d

