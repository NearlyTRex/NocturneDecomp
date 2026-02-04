; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl bool __cdecl core_zombie_cpp_CZombie_FUN_005fc960(CZombie *this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x1       ; 005fc960
        ;   Label: core_zombie.cpp_CZombie_FUN_005fc960
    SETZ AL                             ; 005fc965
    AND EAX,0xff                        ; 005fc968
    RET                                 ; 005fc96d

