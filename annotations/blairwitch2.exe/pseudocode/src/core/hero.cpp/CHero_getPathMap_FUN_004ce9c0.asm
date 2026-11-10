; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPathMap * __cdecl core_hero_cpp_CHero_getPathMap_FUN_004ce9c0(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ce9c0
        ;   Label: core_hero.cpp_CHero_getPathMap_FUN_004ce9c0
    ADD EAX,0x10a9c                     ; 004ce9c4
    RET                                 ; 004ce9c9

