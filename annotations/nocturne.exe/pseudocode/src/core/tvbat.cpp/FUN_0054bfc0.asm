; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tvbat_cpp_FUN_0054bfc0(int param_1)
;
;
; XREF[1]:
;   core_vampboss.cpp_CVampireBoss_summonBats_FUN_0054e040 at 0054e093
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054bfc0
        ;   Label: core_tvbat.cpp_FUN_0054bfc0
    MOV dword ptr [EAX + 0xbed0],0x40400000 ; 0054bfc4
    RET                                 ; 0054bfce

