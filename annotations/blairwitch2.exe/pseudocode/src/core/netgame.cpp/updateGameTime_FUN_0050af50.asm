; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_updateGameTime_FUN_0050af50(void)
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

    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 0050af50
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
        ;   Label: core_netgame.cpp_updateGameTime_FUN_0050af50
    MOV EDX,EAX                         ; 0050af55
    MOV ECX,0x12                        ; 0050af57
    SAR EDX,0x1f                        ; 0050af5c
    IDIV ECX                            ; 0050af5f
    MOV ECX,dword ptr [0x01d34e34]      ; 0050af61 | DAT_01d34e34
    MOV EDX,EAX                         ; 0050af67
    SUB EAX,ECX                         ; 0050af69
    MOV dword ptr [0x01d34e34],EDX      ; 0050af6b | DAT_01d34e34
    TEST EAX,EAX                        ; 0050af71
    JL 0x0050af88                       ; 0050af73
        ;   XREF to: 0050af88 (CONDITIONAL_JUMP)  ; LAB_0050af88
    CMP EAX,0x20000                     ; 0050af75
    JLE 0x0050af81                      ; 0050af7a
        ;   XREF to: 0050af81 (CONDITIONAL_JUMP)  ; LAB_0050af81
    MOV EAX,0x20000                     ; 0050af7c
    ADD dword ptr [0x01d34e38],EAX      ; 0050af81 | DAT_01d34e38
        ;   Label: LAB_0050af81
    RET                                 ; 0050af87
    XOR EAX,EAX                         ; 0050af88
        ;   Label: LAB_0050af88
    ADD dword ptr [0x01d34e38],EAX      ; 0050af8a | DAT_01d34e38
    RET                                 ; 0050af90

