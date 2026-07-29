; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_updateGameTime_FUN_004e9520(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01cea3f4
;   undefined4 DAT_01cea3f8
;
; Called Functions:
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004e9520
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
        ;   Label: core_netgame.cpp_updateGameTime_FUN_004e9520
    MOV EDX,EAX                         ; 004e9525
    MOV ECX,0x12                        ; 004e9527
    SAR EDX,0x1f                        ; 004e952c
    IDIV ECX                            ; 004e952f
    MOV ECX,dword ptr [0x01cea3f4]      ; 004e9531 | DAT_01cea3f4
    MOV EDX,EAX                         ; 004e9537
    SUB EAX,ECX                         ; 004e9539
    MOV dword ptr [0x01cea3f4],EDX      ; 004e953b | DAT_01cea3f4
    TEST EAX,EAX                        ; 004e9541
    JL 0x004e9558                       ; 004e9543
        ;   XREF to: 004e9558 (CONDITIONAL_JUMP)  ; LAB_004e9558
    CMP EAX,0x20000                     ; 004e9545
    JLE 0x004e9551                      ; 004e954a
        ;   XREF to: 004e9551 (CONDITIONAL_JUMP)  ; LAB_004e9551
    MOV EAX,0x20000                     ; 004e954c
    ADD dword ptr [0x01cea3f8],EAX      ; 004e9551 | DAT_01cea3f8
        ;   Label: LAB_004e9551
    RET                                 ; 004e9557
    XOR EAX,EAX                         ; 004e9558
        ;   Label: LAB_004e9558
    ADD dword ptr [0x01cea3f8],EAX      ; 004e955a | DAT_01cea3f8
    RET                                 ; 004e9560

