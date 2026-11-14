; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPathMap * __cdecl core_hero_cpp_CHero_getPathMap_FUN_004d2a70(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d2a70
        ;   Label: core_hero.cpp_CHero_getPathMap_FUN_004d2a70
    ADD EAX,0xce08                      ; 004d2a74
    RET                                 ; 004d2a79

