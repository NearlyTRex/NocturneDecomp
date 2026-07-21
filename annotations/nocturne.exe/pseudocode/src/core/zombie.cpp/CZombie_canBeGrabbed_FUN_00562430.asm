; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_zombie_cpp_CZombie_canBeGrabbed_FUN_00562430(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x1       ; 00562430
        ;   Label: core_zombie.cpp_CZombie_canBeGrabbed_FUN_00562430
    SETZ AL                             ; 00562435
    AND EAX,0xff                        ; 00562438
    RET                                 ; 0056243d

