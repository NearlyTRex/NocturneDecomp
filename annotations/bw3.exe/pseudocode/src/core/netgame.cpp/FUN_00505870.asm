; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00505870(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[8]:
;   FUN_00503fb0 at 00504164
;   FUN_00504890 at 00504ad1
;   FUN_00504d60 at 00504ec1
;   FUN_00506320 at 005064a2
;   FUN_00507450 at 005075f3
;   FUN_00507660 at 00507758
;   FUN_00507790 at 00507ba6
;   FUN_00507fd0 at 00508068
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005caad1
;   TerminatedCString s_CNetGame_send_invalid_pl_005caae5
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;   FUN_005058d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505870
        ;   Label: FUN_00505870
    PUSH ESI                            ; 00505871
    PUSH EBP                            ; 00505872
    MOV EBX,dword ptr [ESP + 0x10]      ; 00505873
    MOV ESI,dword ptr [ESP + 0x14]      ; 00505877
    TEST ESI,ESI                        ; 0050587b
    JL 0x005058a4                       ; 0050587d
        ;   XREF to: 005058a4 (CONDITIONAL_JUMP)  ; LAB_005058a4
    CMP ESI,dword ptr [EBX + 0x1c]      ; 0050587f
    JGE 0x005058a4                      ; 00505882
        ;   XREF to: 005058a4 (CONDITIONAL_JUMP)  ; LAB_005058a4
    MOV EAX,ESI                         ; 00505884
        ;   Label: LAB_00505884
    LEA EDX,[EBX + 0x20]                ; 00505886
    SHL EAX,0x7                         ; 00505889
    MOV EBP,dword ptr [ESP + 0x18]      ; 0050588c
    ADD EAX,EDX                         ; 00505890
    PUSH EBP                            ; 00505892
    ADD EAX,0x1c                        ; 00505893
    PUSH EAX                            ; 00505896
    PUSH EBX                            ; 00505897
    CALL FUN_005058d0                   ; 00505898
        ;   XREF to: 005058d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005058d0()
    ADD ESP,0xc                         ; 0050589d
    POP EBP                             ; 005058a0
    POP ESI                             ; 005058a1
    POP EBX                             ; 005058a2
    RET                                 ; 005058a3
    PUSH EDI                            ; 005058a4
        ;   Label: LAB_005058a4
    MOV ECX,0x5caad1                    ; 005058a5 | = "..\\core\\netgame.cpp"
    MOV EDI,0x5c5                       ; 005058aa
    PUSH 0x5caae5                       ; 005058af | = "CNetGame::send - invalid player index"
    MOV dword ptr [0x01d71de0],ECX      ; 005058b4 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 005058ba | DAT_01d71de4
    CALL FUN_004e4330                   ; 005058c0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 005058c5
    POP EDI                             ; 005058c8
    JMP 0x00505884                      ; 005058c9
        ;   XREF to: 00505884 (UNCONDITIONAL_JUMP)  ; LAB_00505884

