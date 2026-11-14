; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPathMap * __cdecl core_hero_cpp_CHero_getPathMap_FUN_004ead80(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ead80
        ;   Label: core_hero.cpp_CHero_getPathMap_FUN_004ead80
    ADD EAX,0xc208                      ; 004ead84
    RET                                 ; 004ead89

