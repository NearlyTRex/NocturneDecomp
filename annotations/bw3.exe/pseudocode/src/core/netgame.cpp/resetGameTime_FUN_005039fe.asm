; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_resetGameTime_FUN_005039fe(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01da6474
;   undefined4 DAT_01da6478
;
; Called Functions:
;   wincore_winrun.cpp_getTime_FUN_005806a0
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 005039fe
        ;   Label: core_netgame.cpp_resetGameTime_FUN_005039fe
    MOV dword ptr [0x01da6478],0x1      ; 00503a00 | DAT_01da6478
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 00503a0a
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV EDX,EAX                         ; 00503a0f
    MOV ECX,0x12                        ; 00503a11
    SAR EDX,0x1f                        ; 00503a16
    IDIV ECX                            ; 00503a19
    MOV [0x01da6474],EAX                ; 00503a1b | DAT_01da6474
    RET                                 ; 00503a20

