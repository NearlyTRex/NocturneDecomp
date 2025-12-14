; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_netgame.cpp_FUN_0053f360()
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

    MOV dword ptr [0x02f7c8b8],0x1      ; 0053f360 | g_CurrentGameTime
        ;   Label: core_netgame.cpp_FUN_0053f360
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0053f36a
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV EDX,EAX                         ; 0053f36f
    MOV ECX,0x12                        ; 0053f371
    SAR EDX,0x1f                        ; 0053f376
    IDIV ECX                            ; 0053f379
    MOV [0x02f7c8b4],EAX                ; 0053f37b | g_LastPingTime
    RET                                 ; 0053f380

