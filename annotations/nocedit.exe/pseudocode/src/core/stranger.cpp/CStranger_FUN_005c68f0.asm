; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_stranger_cpp_CStranger_FUN_005c68f0(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_hero.cpp_CHero_FUN_004f3f20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005c68f0
        ;   Label: core_stranger.cpp_CStranger_FUN_005c68f0
    PUSH EDX                            ; 005c68f4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005c68f5
    PUSH ECX                            ; 005c68f9
    CALL core_hero.cpp_CHero_FUN_004f3f20 ; 005c68fa
        ;   XREF to: 004f3f20 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_FUN_004f3f20(CHero * this_ptr)
    ADD ESP,0x8                         ; 005c68ff
    RET                                 ; 005c6902

