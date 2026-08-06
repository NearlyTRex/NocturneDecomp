; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_004ed170(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined1       Stack[-0x38]:1  local_38
; undefined4       Stack[-0x37]:4  local_37
; undefined        Stack[-0x33]:1  local_33
; undefined1       Stack[-0x32]:1  local_32
; undefined4       Stack[-0x1f]:4  local_1f
; undefined4       Stack[-0x1b]:4  local_1b
; undefined4       Stack[-0x17]:4  local_17
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_004ec600 at 004ecb6e
;   core_netgame.cpp_CNetGame_runLobby_FUN_004eb520 at 004eb596
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0058c525
;   TerminatedCString s_CNetGame_sendMyStateChan_0058c539
;   int g_INT_005bdee4 = 0x1
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 DAT_01cea3f4
;   undefined4 DAT_01cea3f8
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   core_netgame.cpp_CNetGame_send_FUN_004eb350
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed170
        ;   Label: core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_004ed170
    PUSH ESI                            ; 004ed171
    PUSH EDI                            ; 004ed172
    PUSH EBP                            ; 004ed173
    SUB ESP,0x2c                        ; 004ed174
    MOV EBX,dword ptr [ESP + 0x40]      ; 004ed177
    CMP dword ptr [EBX],0x2             ; 004ed17b
    JNZ 0x004ed186                      ; 004ed17e
        ;   XREF to: 004ed186 (CONDITIONAL_JUMP)  ; LAB_004ed186
    CMP dword ptr [EBX + 0x4],0x1       ; 004ed180
    JZ 0x004ed1a9                       ; 004ed184
        ;   XREF to: 004ed1a9 (CONDITIONAL_JUMP)  ; LAB_004ed1a9
    MOV ESI,0x58c525                    ; 004ed186 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_004ed186
    MOV EDI,0x8d0                       ; 004ed18b
    PUSH 0x58c539                       ; 004ed190 | = "CNetGame::sendMyStateChanged - should..."
    MOV dword ptr [0x01cc4800],ESI      ; 004ed195 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 004ed19b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004ed1a1
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004ed1a6
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004ed1a9
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
        ;   Label: LAB_004ed1a9
    MOV EDX,EAX                         ; 004ed1ae
    MOV ESI,0x12                        ; 004ed1b0
    SAR EDX,0x1f                        ; 004ed1b5
    IDIV ESI                            ; 004ed1b8
    MOV EBP,dword ptr [0x01cea3f4]      ; 004ed1ba | DAT_01cea3f4
    MOV EDX,EAX                         ; 004ed1c0
    SUB EAX,EBP                         ; 004ed1c2
    MOV dword ptr [0x01cea3f4],EDX      ; 004ed1c4 | DAT_01cea3f4
    TEST EAX,EAX                        ; 004ed1ca
    JL 0x004ed2be                       ; 004ed1cc
        ;   XREF to: 004ed2be (CONDITIONAL_JUMP)  ; LAB_004ed2be
    CMP EAX,0x20000                     ; 004ed1d2
    JLE 0x004ed1de                      ; 004ed1d7
        ;   XREF to: 004ed1de (CONDITIONAL_JUMP)  ; LAB_004ed1de
    MOV EAX,0x20000                     ; 004ed1d9
    MOV EDX,dword ptr [0x01cea3f8]      ; 004ed1de | DAT_01cea3f8
        ;   Label: LAB_004ed1de
    MOV ECX,0x29                        ; 004ed1e4
    ADD EDX,EAX                         ; 004ed1e9
    MOV AH,0xa                          ; 004ed1eb
    MOV dword ptr [ESP],ECX             ; 004ed1ed
    MOV byte ptr [ESP + 0x4],AH         ; 004ed1f0
    MOV EAX,dword ptr [EBX + 0x114]     ; 004ed1f4
    SHL EAX,0x3                         ; 004ed1fa
    MOV dword ptr [0x01cea3f8],EDX      ; 004ed1fd | DAT_01cea3f8
    MOV EDX,EAX                         ; 004ed203
    SHL EAX,0x4                         ; 004ed205
    SUB EAX,EDX                         ; 004ed208
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x64] ; 004ed20a
    MOV dword ptr [ESP + 0x1d],EAX      ; 004ed20e
    MOV EAX,[0x01cea3f8]                ; 004ed212 | DAT_01cea3f8
    MOV dword ptr [ESP + 0x5],EAX       ; 004ed217
    MOV EAX,dword ptr [EBX + 0x114]     ; 004ed21b
    SHL EAX,0x3                         ; 004ed221
    MOV EDX,EAX                         ; 004ed224
    SHL EAX,0x4                         ; 004ed226
    SUB EAX,EDX                         ; 004ed229
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x34] ; 004ed22b
    MOV dword ptr [ESP + 0x21],EAX      ; 004ed22f
    MOV EAX,dword ptr [EBX + 0x114]     ; 004ed233
    SHL EAX,0x3                         ; 004ed239
    MOV EDX,EAX                         ; 004ed23c
    SHL EAX,0x4                         ; 004ed23e
    SUB EAX,EDX                         ; 004ed241
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x38] ; 004ed243
    MOV dword ptr [ESP + 0x25],EAX      ; 004ed247
    MOV EAX,dword ptr [EBX + 0x114]     ; 004ed24b
    SHL EAX,0x3                         ; 004ed251
    MOV EDX,EAX                         ; 004ed254
    SHL EAX,0x4                         ; 004ed256
    LEA ESI,[EBX + 0x20]                ; 004ed259
    SUB EAX,EDX                         ; 004ed25c
    LEA EDI,[ESP + 0x9]                 ; 004ed25e
    ADD ESI,EAX                         ; 004ed262
    PUSH EDI                            ; 004ed264
    MOV AL,byte ptr [ESI]               ; 004ed265
        ;   Label: LAB_004ed265
    MOV byte ptr [EDI],AL               ; 004ed267
    CMP AL,0x0                          ; 004ed269
    JZ 0x004ed27d                       ; 004ed26b
        ;   XREF to: 004ed27d (CONDITIONAL_JUMP)  ; LAB_004ed27d
    MOV AL,byte ptr [ESI + 0x1]         ; 004ed26d
    ADD ESI,0x2                         ; 004ed270
    MOV byte ptr [EDI + 0x1],AL         ; 004ed273
    ADD EDI,0x2                         ; 004ed276
    CMP AL,0x0                          ; 004ed279
    JNZ 0x004ed265                      ; 004ed27b
        ;   XREF to: 004ed265 (CONDITIONAL_JUMP)  ; LAB_004ed265
    POP EDI                             ; 004ed27d
        ;   Label: LAB_004ed27d
    MOV EAX,ESP                         ; 004ed27e
    PUSH EAX                            ; 004ed280
    MOV ESI,dword ptr [EBX + 0x110]     ; 004ed281
    PUSH ESI                            ; 004ed287
    PUSH EBX                            ; 004ed288
    CALL core_netgame.cpp_CNetGame_send_FUN_004eb350 ; 004ed289
        ;   XREF to: 004eb350 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_004eb350(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    MOV EAX,dword ptr [EBX + 0x114]     ; 004ed28e
    SHL EAX,0x3                         ; 004ed294
    MOV EDX,EAX                         ; 004ed297
    SHL EAX,0x4                         ; 004ed299
    MOV EDI,0x1                         ; 004ed29c
    SUB EAX,EDX                         ; 004ed2a1
    ADD ESP,0xc                         ; 004ed2a3
    ADD EBX,EAX                         ; 004ed2a6
    MOV EAX,[0x01cea3f8]                ; 004ed2a8 | DAT_01cea3f8
    MOV dword ptr [0x005bdee4],EDI      ; 004ed2ad | g_INT_005bdee4
    MOV dword ptr [EBX + 0x60],EAX      ; 004ed2b3
    ADD ESP,0x2c                        ; 004ed2b6
    POP EBP                             ; 004ed2b9
    POP EDI                             ; 004ed2ba
    POP ESI                             ; 004ed2bb
    POP EBX                             ; 004ed2bc
    RET                                 ; 004ed2bd
    XOR EAX,EAX                         ; 004ed2be
        ;   Label: LAB_004ed2be
    JMP 0x004ed1de                      ; 004ed2c0
        ;   XREF to: 004ed1de (UNCONDITIONAL_JUMP)  ; LAB_004ed1de

