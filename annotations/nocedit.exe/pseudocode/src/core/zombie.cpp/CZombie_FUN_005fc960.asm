; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown bool core_zombie_cpp_CZombie_FUN_005fc960(void)
;
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x1       ; 005fc960
        ;   Label: core_zombie.cpp_CZombie_FUN_005fc960
    SETZ AL                             ; 005fc965
    AND EAX,0xff                        ; 005fc968
    RET                                 ; 005fc96d

