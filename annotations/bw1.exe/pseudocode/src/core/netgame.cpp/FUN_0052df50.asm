; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052df50(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[8]:
;   FUN_0052c6b0 at 0052c860
;   FUN_0052cf90 at 0052d1ca
;   FUN_0052d450 at 0052d5b8
;   FUN_0052ea10 at 0052eb9b
;   FUN_0052fb60 at 0052fd03
;   FUN_0052fd80 at 0052fe99
;   FUN_0052fee0 at 005302e5
;   FUN_00530710 at 005307b8
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005ebcc0
;   TerminatedCString s_CNetGame_send_invalid_pl_005ebcd4
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_0052dfc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052df50
        ;   Label: FUN_0052df50
    PUSH ESI                            ; 0052df51
    PUSH EBP                            ; 0052df52
    MOV ESI,dword ptr [ESP + 0x10]      ; 0052df53
    MOV EBX,dword ptr [ESP + 0x14]      ; 0052df57
    TEST EBX,EBX                        ; 0052df5b
    JL 0x0052df8d                       ; 0052df5d
        ;   XREF to: 0052df8d (CONDITIONAL_JUMP)  ; LAB_0052df8d
    CMP EBX,dword ptr [ESI + 0x1c]      ; 0052df5f
    JGE 0x0052df8d                      ; 0052df62
        ;   XREF to: 0052df8d (CONDITIONAL_JUMP)  ; LAB_0052df8d
    LEA EAX,[EBX*0x4 + 0x0]             ; 0052df64
        ;   Label: LAB_0052df64
    MOV EDX,EAX                         ; 0052df6b
    SHL EAX,0x5                         ; 0052df6d
    SUB EAX,EDX                         ; 0052df70
    LEA EDX,[ESI + 0x20]                ; 0052df72
    MOV EBP,dword ptr [ESP + 0x18]      ; 0052df75
    ADD EAX,EDX                         ; 0052df79
    PUSH EBP                            ; 0052df7b
    ADD EAX,0x1c                        ; 0052df7c
    PUSH EAX                            ; 0052df7f
    PUSH ESI                            ; 0052df80
    CALL FUN_0052dfc0                   ; 0052df81
        ;   XREF to: 0052dfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052dfc0()
    ADD ESP,0xc                         ; 0052df86
    POP EBP                             ; 0052df89
    POP ESI                             ; 0052df8a
    POP EBX                             ; 0052df8b
    RET                                 ; 0052df8c
    PUSH EDI                            ; 0052df8d
        ;   Label: LAB_0052df8d
    MOV ECX,0x5ebcc0                    ; 0052df8e | = "..\\core\\netgame.cpp"
    MOV EDI,0x5c5                       ; 0052df93
    PUSH 0x5ebcd4                       ; 0052df98 | = "CNetGame::send - invalid player index"
    MOV dword ptr [0x01d1d400],ECX      ; 0052df9d | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0052dfa3 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0052dfa9
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0052dfae
    POP EDI                             ; 0052dfb1
    JMP 0x0052df64                      ; 0052dfb2
        ;   XREF to: 0052df64 (UNCONDITIONAL_JUMP)  ; LAB_0052df64

