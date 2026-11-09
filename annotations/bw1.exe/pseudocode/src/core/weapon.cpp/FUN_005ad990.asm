; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_weapon_cpp_FUN_005ad990(undefined4 param_1,int *param_2)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005ad990
        ;   Label: core_weapon.cpp_FUN_005ad990
    CMP dword ptr [EAX],0x4             ; 005ad994
    SETZ AL                             ; 005ad997
    AND EAX,0xff                        ; 005ad99a
    RET                                 ; 005ad99f

