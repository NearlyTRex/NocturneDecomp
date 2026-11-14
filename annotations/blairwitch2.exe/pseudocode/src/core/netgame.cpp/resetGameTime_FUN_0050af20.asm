; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_resetGameTime_FUN_0050af20(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d34e34
;   undefined4 DAT_01d34e38
;
; Called Functions:
;   wincore_winrun.cpp_getTime_FUN_0058e9e0
;
; *****************************************************************************

section .text

    MOV dword ptr [0x01d34e38],0x1      ; 0050af20 | DAT_01d34e38
        ;   Label: core_netgame.cpp_resetGameTime_FUN_0050af20
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 0050af2a
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV EDX,EAX                         ; 0050af2f
    MOV ECX,0x12                        ; 0050af31
    SAR EDX,0x1f                        ; 0050af36
    IDIV ECX                            ; 0050af39
    MOV [0x01d34e34],EAX                ; 0050af3b | DAT_01d34e34
    RET                                 ; 0050af40

