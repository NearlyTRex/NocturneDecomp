; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_colonel_cpp_FUN_00440610(void)
;
;
; Called Functions:
;   core_hero.cpp_CHero_FUN_004f3f20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00440610
        ;   Label: core_colonel.cpp_FUN_00440610
    PUSH EDX                            ; 00440614
    MOV ECX,dword ptr [ESP + 0x8]       ; 00440615
    PUSH ECX                            ; 00440619
    CALL core_hero.cpp_CHero_FUN_004f3f20 ; 0044061a
        ;   XREF to: 004f3f20 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_FUN_004f3f20(CHero * this_ptr)
    ADD ESP,0x8                         ; 0044061f
    RET                                 ; 00440622

