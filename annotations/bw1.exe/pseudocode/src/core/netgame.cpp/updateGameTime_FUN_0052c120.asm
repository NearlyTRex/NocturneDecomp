; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_updateGameTime_FUN_0052c120(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d51d9c
;   undefined4 DAT_01d51da0
;
; Called Functions:
;   wincore_winrun.cpp_getTime_FUN_005b2420
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 0052c120
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005b2420()
        ;   Label: core_netgame.cpp_updateGameTime_FUN_0052c120
    MOV EDX,EAX                         ; 0052c125
    MOV ECX,0x12                        ; 0052c127
    SAR EDX,0x1f                        ; 0052c12c
    IDIV ECX                            ; 0052c12f
    MOV ECX,dword ptr [0x01d51d9c]      ; 0052c131 | DAT_01d51d9c
    MOV EDX,EAX                         ; 0052c137
    SUB EAX,ECX                         ; 0052c139
    MOV dword ptr [0x01d51d9c],EDX      ; 0052c13b | DAT_01d51d9c
    TEST EAX,EAX                        ; 0052c141
    JL 0x0052c158                       ; 0052c143
        ;   XREF to: 0052c158 (CONDITIONAL_JUMP)  ; LAB_0052c158
    CMP EAX,0x20000                     ; 0052c145
    JLE 0x0052c151                      ; 0052c14a
        ;   XREF to: 0052c151 (CONDITIONAL_JUMP)  ; LAB_0052c151
    MOV EAX,0x20000                     ; 0052c14c
    ADD dword ptr [0x01d51da0],EAX      ; 0052c151 | DAT_01d51da0
        ;   Label: LAB_0052c151
    RET                                 ; 0052c157
    XOR EAX,EAX                         ; 0052c158
        ;   Label: LAB_0052c158
    ADD dword ptr [0x01d51da0],EAX      ; 0052c15a | DAT_01d51da0
    RET                                 ; 0052c160

