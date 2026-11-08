; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00505950(int param_1,undefined4 *param_2,char *param_3,undefined4 param_4,undefined4 param_5 )
;
;
; XREF[3]:
;   FUN_00503fb0 at 00504003
;   FUN_00504d60 at 00504f3a
;   FUN_00506b00 at 0050715d
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005cab0b
;   TerminatedCString s_CNetGame_addPlayer_too_m_005cab1f
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01da6478
;   undefined4 DAT_01da6484
;
; Called Functions:
;   FUN_004e4330
;   FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505950
        ;   Label: FUN_00505950
    PUSH ESI                            ; 00505951
    PUSH EDI                            ; 00505952
    PUSH EBP                            ; 00505953
    MOV EBX,dword ptr [ESP + 0x14]      ; 00505954
    CMP dword ptr [EBX + 0x1c],0x2      ; 00505958
    JGE 0x00505a00                      ; 0050595c
        ;   XREF to: 00505a00 (CONDITIONAL_JUMP)  ; LAB_00505a00
    PUSH 0x80                           ; 00505962
        ;   Label: LAB_00505962
    MOV EBP,dword ptr [EBX + 0x1c]      ; 00505967
    ADD EBX,0x20                        ; 0050596a
    PUSH 0x0                            ; 0050596d
    MOV EAX,EBP                         ; 0050596f
    LEA EDX,[EBP + 0x1]                 ; 00505971
    SHL EAX,0x7                         ; 00505974
    MOV dword ptr [EBX + -0x4],EDX      ; 00505977
    ADD EBX,EAX                         ; 0050597a
    PUSH EBX                            ; 0050597c
    CALL FUN_005a28f0                   ; 0050597d
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 00505982
    MOV EDI,EBX                         ; 00505985
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00505987
    PUSH EDI                            ; 0050598b
    MOV AL,byte ptr [ESI]               ; 0050598c
        ;   Label: LAB_0050598c
    MOV byte ptr [EDI],AL               ; 0050598e
    CMP AL,0x0                          ; 00505990
    JZ 0x005059a4                       ; 00505992
        ;   XREF to: 005059a4 (CONDITIONAL_JUMP)  ; LAB_005059a4
    MOV AL,byte ptr [ESI + 0x1]         ; 00505994
    ADD ESI,0x2                         ; 00505997
    MOV byte ptr [EDI + 0x1],AL         ; 0050599a
    ADD EDI,0x2                         ; 0050599d
    CMP AL,0x0                          ; 005059a0
    JNZ 0x0050598c                      ; 005059a2
        ;   XREF to: 0050598c (CONDITIONAL_JUMP)  ; LAB_0050598c
    POP EDI                             ; 005059a4
        ;   Label: LAB_005059a4
    MOV ESI,dword ptr [ESP + 0x18]      ; 005059a5
    LEA EDI,[EBX + 0x1c]                ; 005059a9
    MOVSD ES:EDI,ESI                    ; 005059ac
    MOVSD ES:EDI,ESI                    ; 005059ad
    MOV dword ptr [EBX + 0x28],0xbf800000 ; 005059ae
    MOV dword ptr [EBX + 0x44],0x0      ; 005059b5
    MOV dword ptr [EBX + 0x40],0x0      ; 005059bc
    MOV EAX,dword ptr [ESP + 0x20]      ; 005059c3
    MOV dword ptr [EBX + 0x3c],0x0      ; 005059c7
    MOV dword ptr [EBX + 0x14],EAX      ; 005059ce
    MOV EAX,dword ptr [ESP + 0x24]      ; 005059d1
    MOV dword ptr [EBX + 0x18],EAX      ; 005059d5
    MOV EAX,[0x01da6478]                ; 005059d8 | DAT_01da6478
    MOV dword ptr [EBX + 0x24],EAX      ; 005059dd
    SUB EAX,0x1e0000                    ; 005059e0
    MOV dword ptr [EBX + 0x2c],EAX      ; 005059e5
    MOV EDX,EAX                         ; 005059e8
    MOV dword ptr [EBX + 0x30],EAX      ; 005059ea
    MOV EAX,[0x01da6484]                ; 005059ed | DAT_01da6484
    MOV dword ptr [EBX + 0x38],EDX      ; 005059f2
    DEC EAX                             ; 005059f5
    MOV dword ptr [EBX + 0x34],EAX      ; 005059f6
    MOV EAX,EBP                         ; 005059f9
    POP EBP                             ; 005059fb
    POP EDI                             ; 005059fc
    POP ESI                             ; 005059fd
    POP EBX                             ; 005059fe
    RET                                 ; 005059ff
    MOV ECX,0x5cab0b                    ; 00505a00 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00505a00
    MOV ESI,0x5ff                       ; 00505a05
    PUSH 0x5cab1f                       ; 00505a0a | = "CNetGame::addPlayer - too many players!"
    MOV dword ptr [0x01d71de0],ECX      ; 00505a0f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00505a15 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00505a1b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00505a20
    JMP 0x00505962                      ; 00505a23
        ;   XREF to: 00505962 (UNCONDITIONAL_JUMP)  ; LAB_00505962

