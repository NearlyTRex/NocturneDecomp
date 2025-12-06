; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_hero.cpp_CHero_FUN_004f2870(CHero * this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f2870
        ;   Label: core_hero.cpp_CHero_FUN_004f2870
    ADD EAX,0xbe58                      ; 004f2874
    RET                                 ; 004f2879

