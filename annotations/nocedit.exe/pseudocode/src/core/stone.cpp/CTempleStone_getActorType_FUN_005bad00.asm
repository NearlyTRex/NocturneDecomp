; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_stone_cpp_CTempleStone_getActorType_FUN_005bad00(CTempleStone *this_ptr)
;
; Parameters:
; CTempleStone *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CTempleStoneClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x3f6ba60                   ; 005bad00 | g_CTempleStoneClassInfo
        ;   Label: core_stone.cpp_CTempleStone_getActorType_FUN_005bad00
    RET                                 ; 005bad05

