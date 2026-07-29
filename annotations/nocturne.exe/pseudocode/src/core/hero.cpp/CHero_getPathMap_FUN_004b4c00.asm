; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPathMap * __cdecl core_hero_cpp_CHero_getPathMap_FUN_004b4c00(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b4c00
        ;   Label: core_hero.cpp_CHero_getPathMap_FUN_004b4c00
    ADD EAX,0xbcc0                      ; 004b4c04
    RET                                 ; 004b4c09

