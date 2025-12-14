; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_netgame.cpp_FUN_0053f390()
;
;
; Referenced Globals:
;   int g_LastPingTime
;   uint g_CurrentGameTime
;
; Called Functions:
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0053f390
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: core_netgame.cpp_FUN_0053f390
    MOV EDX,EAX                         ; 0053f395
    MOV ECX,0x12                        ; 0053f397
    SAR EDX,0x1f                        ; 0053f39c
    IDIV ECX                            ; 0053f39f
    MOV ECX,dword ptr [0x02f7c8b4]      ; 0053f3a1 | g_LastPingTime
    MOV EDX,EAX                         ; 0053f3a7
    SUB EAX,ECX                         ; 0053f3a9
    MOV dword ptr [0x02f7c8b4],EDX      ; 0053f3ab | g_LastPingTime
    TEST EAX,EAX                        ; 0053f3b1
    JL 0x0053f3c8                       ; 0053f3b3
        ;   XREF to: 0053f3c8 (CONDITIONAL_JUMP)  ; LAB_0053f3c8
    CMP EAX,0x20000                     ; 0053f3b5
    JLE 0x0053f3c1                      ; 0053f3ba
        ;   XREF to: 0053f3c1 (CONDITIONAL_JUMP)  ; LAB_0053f3c1
    MOV EAX,0x20000                     ; 0053f3bc
    ADD dword ptr [0x02f7c8b8],EAX      ; 0053f3c1 | g_CurrentGameTime
        ;   Label: LAB_0053f3c1
    RET                                 ; 0053f3c7
    XOR EAX,EAX                         ; 0053f3c8
        ;   Label: LAB_0053f3c8
    ADD dword ptr [0x02f7c8b8],EAX      ; 0053f3ca | g_CurrentGameTime
    RET                                 ; 0053f3d0

