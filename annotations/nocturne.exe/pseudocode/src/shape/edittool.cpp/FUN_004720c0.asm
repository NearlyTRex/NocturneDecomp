; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004720c0(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[9]:
;   FUN_0046f7e0 at 0046f945
;   FUN_0046fb40 at 0046fcaf
;   FUN_0046fcd0 at 0046fe3f
;   FUN_0046fe60 at 0046ffcf
;   FUN_00470eb0 at 00471171
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049de90
;   core_menu.cpp_adjustMouseSensitivity_FUN_004cfbc0 at 004cfdfc
;   core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90 at 004ea00b
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70 at 00474e3e
;
; Referenced Globals:
;   string s_..\\shape\\edittool.cpp_0057e952
;   string s_CEditorTools::closeWindow()_call_0057e968
;   undefined4 DAT_005b7624
;   undefined4 DAT_01bcd07c
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;   shape_edittool.cpp_CEditorTools_popWindowState_FUN_004721e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004720c0
        ;   Label: FUN_004720c0
    PUSH ESI                            ; 004720c1
    PUSH EDI                            ; 004720c2
    PUSH EBP                            ; 004720c3
    SUB ESP,0xc                         ; 004720c4
    CMP dword ptr [0x01bcd07c],0x1      ; 004720c7 | DAT_01bcd07c
    JL 0x004721b5                       ; 004720ce
        ;   XREF to: 004721b5 (CONDITIONAL_JUMP)  ; LAB_004721b5
    MOV EDX,dword ptr [0x01bcd07c]      ; 004720d4 | DAT_01bcd07c
        ;   Label: LAB_004720d4
    DEC EDX                             ; 004720da
    MOV EAX,EDX                         ; 004720db
    SHL EAX,0x4                         ; 004720dd
    SUB EAX,EDX                         ; 004720e0
    SHL EAX,0x2                         ; 004720e2
    SUB EAX,EDX                         ; 004720e5
    MOV EDX,0x1bcd080                   ; 004720e7
    SHL EAX,0x3                         ; 004720ec
    ADD EDX,EAX                         ; 004720ef
    MOV EBX,dword ptr [EDX + 0x1c8]     ; 004720f1
    MOV dword ptr [ESP + 0x4],EDX       ; 004720f7
    TEST EBX,EBX                        ; 004720fb
    JZ 0x004721a0                       ; 004720fd
        ;   XREF to: 004721a0 (CONDITIONAL_JUMP)  ; LAB_004721a0
    MOV ESI,dword ptr [EDX]             ; 00472103
    MOV EAX,dword ptr [EDX + 0x8]       ; 00472105
    MOV EDX,dword ptr [0x005b7624]      ; 00472108 | DAT_005b7624
    SUB EAX,ESI                         ; 0047210e
    IMUL EDX,EAX                        ; 00472110
    MOV EAX,EDX                         ; 00472113
    SAR EDX,0x1f                        ; 00472115
    SHL EDX,0x3                         ; 00472118
    SBB EAX,EDX                         ; 0047211b
    SAR EAX,0x3                         ; 0047211d
    MOV EBP,dword ptr [ESP + 0x4]       ; 00472120
    MOV dword ptr [ESP],EAX             ; 00472124
    MOV EAX,dword ptr [ESP + 0x4]       ; 00472127
    MOV EBP,dword ptr [EBP + 0x4]       ; 0047212b
    CMP EBP,dword ptr [EAX + 0xc]       ; 0047212e
    JGE 0x004721a0                      ; 00472131
        ;   XREF to: 004721a0 (CONDITIONAL_JUMP)  ; LAB_004721a0
    LEA EAX,[EBP*0x4 + 0x0]             ; 00472133
    MOV dword ptr [ESP + 0x8],EAX       ; 0047213a
    MOV EDX,dword ptr [ESP + 0x4]       ; 0047213e
        ;   Label: LAB_0047213e
    MOV EAX,[0x005b7624]                ; 00472142 | DAT_005b7624
    MOV EDX,dword ptr [EDX]             ; 00472147
    IMUL EDX,EAX                        ; 00472149
    MOV EAX,EDX                         ; 0047214c
    SAR EDX,0x1f                        ; 0047214e
    SHL EDX,0x3                         ; 00472151
    SBB EAX,EDX                         ; 00472154
    SAR EAX,0x3                         ; 00472156
    MOV EDI,dword ptr [ESP + 0x8]       ; 00472159
    MOV ECX,dword ptr [ESP]             ; 0047215d
    MOV ESI,EBX                         ; 00472160
    MOV EDI,dword ptr [EDI + 0x1bd2fa0] ; 00472162 | DAT_01bd2fa0 | DAT_01bd2fa4
    INC EBP                             ; 00472168
    ADD EDI,EAX                         ; 00472169
    MOV EDX,dword ptr [ESP]             ; 0047216b
    PUSH EDI                            ; 0047216e
    MOV EAX,ECX                         ; 0047216f
    SHR ECX,0x2                         ; 00472171
    MOVSD.REP ES:EDI,ESI                ; 00472174
    MOV CL,AL                           ; 00472176
    AND CL,0x3                          ; 00472178
    MOVSB.REP ES:EDI,ESI                ; 0047217b
    POP EDI                             ; 0047217d
    MOV ECX,dword ptr [ESP + 0x8]       ; 0047217e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00472182
    ADD EBX,EDX                         ; 00472186
    ADD ECX,0x4                         ; 00472188
    MOV ESI,dword ptr [EAX + 0xc]       ; 0047218b
    MOV dword ptr [ESP + 0x8],ECX       ; 0047218e
    CMP EBP,ESI                         ; 00472192
    JL 0x0047213e                       ; 00472194
        ;   XREF to: 0047213e (CONDITIONAL_JUMP)  ; LAB_0047213e
    LEA EAX,[EAX]                       ; 00472196
    LEA EDX,[EDX]                       ; 0047219c
    MOV EDI,dword ptr [ESP + 0x20]      ; 004721a0
        ;   Label: LAB_004721a0
    PUSH EDI                            ; 004721a4
    CALL shape_edittool.cpp_CEditorTools_popWindowState_FUN_004721e0 ; 004721a5
        ;   XREF to: 004721e0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_popWindowState_FUN_004721e0()
    ADD ESP,0x4                         ; 004721aa
    ADD ESP,0xc                         ; 004721ad
    POP EBP                             ; 004721b0
    POP EDI                             ; 004721b1
    POP ESI                             ; 004721b2
    POP EBX                             ; 004721b3
    RET                                 ; 004721b4
    MOV ECX,0x57e952                    ; 004721b5 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004721b5
    MOV EBX,0x6f7                       ; 004721ba
    PUSH 0x57e968                       ; 004721bf | = "CEditorTools::closeWindow() called bu..."
    MOV dword ptr [0x01cc4800],ECX      ; 004721c4 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 004721ca | DAT_01cc4804
    CALL FUN_004c8440                   ; 004721d0
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004721d5
    JMP 0x004720d4                      ; 004721d8
        ;   XREF to: 004720d4 (UNCONDITIONAL_JUMP)  ; LAB_004720d4

