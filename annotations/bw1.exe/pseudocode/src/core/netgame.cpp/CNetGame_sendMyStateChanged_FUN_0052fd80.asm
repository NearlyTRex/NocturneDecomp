; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_0052fd80(CNetGame *this_ptr)
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
;   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_0052f200 at 0052f77d
;   core_netgame.cpp_CNetGame_runLobby_FUN_0052e120 at 0052e196
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005ec0fb
;   TerminatedCString s_CNetGame_sendMyStateChan_005ec10f
;   undefined4 DAT_00622584
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d51d9c
;   undefined4 DAT_01d51da0
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_netgame.cpp_CNetGame_send_FUN_0052df50
;   wincore_winrun.cpp_FUN_005b2420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052fd80
        ;   Label: core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_0052fd80
    PUSH ESI                            ; 0052fd81
    PUSH EDI                            ; 0052fd82
    PUSH EBP                            ; 0052fd83
    SUB ESP,0x2c                        ; 0052fd84
    MOV EBX,dword ptr [ESP + 0x40]      ; 0052fd87
    CMP dword ptr [EBX],0x2             ; 0052fd8b
    JNZ 0x0052fd96                      ; 0052fd8e
        ;   XREF to: 0052fd96 (CONDITIONAL_JUMP)  ; LAB_0052fd96
    CMP dword ptr [EBX + 0x4],0x1       ; 0052fd90
    JZ 0x0052fdb9                       ; 0052fd94
        ;   XREF to: 0052fdb9 (CONDITIONAL_JUMP)  ; LAB_0052fdb9
    MOV ESI,0x5ec0fb                    ; 0052fd96 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0052fd96
    MOV EDI,0x8d0                       ; 0052fd9b
    PUSH 0x5ec10f                       ; 0052fda0 | = "CNetGame::sendMyStateChanged - should..."
    MOV dword ptr [0x01d1d400],ESI      ; 0052fda5 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0052fdab | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0052fdb1
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0052fdb6
    CALL wincore_winrun.cpp_FUN_005b2420 ; 0052fdb9
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b2420()
        ;   Label: LAB_0052fdb9
    MOV EDX,EAX                         ; 0052fdbe
    MOV ESI,0x12                        ; 0052fdc0
    SAR EDX,0x1f                        ; 0052fdc5
    IDIV ESI                            ; 0052fdc8
    MOV EBP,dword ptr [0x01d51d9c]      ; 0052fdca | DAT_01d51d9c
    MOV EDX,EAX                         ; 0052fdd0
    SUB EAX,EBP                         ; 0052fdd2
    MOV dword ptr [0x01d51d9c],EDX      ; 0052fdd4 | DAT_01d51d9c
    TEST EAX,EAX                        ; 0052fdda
    JL 0x0052fece                       ; 0052fddc
        ;   XREF to: 0052fece (CONDITIONAL_JUMP)  ; LAB_0052fece
    CMP EAX,0x20000                     ; 0052fde2
    JLE 0x0052fdee                      ; 0052fde7
        ;   XREF to: 0052fdee (CONDITIONAL_JUMP)  ; LAB_0052fdee
    MOV EAX,0x20000                     ; 0052fde9
    MOV EDX,dword ptr [0x01d51da0]      ; 0052fdee | DAT_01d51da0
        ;   Label: LAB_0052fdee
    MOV ECX,0x29                        ; 0052fdf4
    ADD EDX,EAX                         ; 0052fdf9
    MOV AH,0xa                          ; 0052fdfb
    MOV dword ptr [ESP],ECX             ; 0052fdfd
    MOV byte ptr [ESP + 0x4],AH         ; 0052fe00
    MOV EAX,dword ptr [EBX + 0x11c]     ; 0052fe04
    SHL EAX,0x2                         ; 0052fe0a
    MOV dword ptr [0x01d51da0],EDX      ; 0052fe0d | DAT_01d51da0
    MOV EDX,EAX                         ; 0052fe13
    SHL EAX,0x5                         ; 0052fe15
    SUB EAX,EDX                         ; 0052fe18
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x64] ; 0052fe1a
    MOV dword ptr [ESP + 0x1d],EAX      ; 0052fe1e
    MOV EAX,[0x01d51da0]                ; 0052fe22 | DAT_01d51da0
    MOV dword ptr [ESP + 0x5],EAX       ; 0052fe27
    MOV EAX,dword ptr [EBX + 0x11c]     ; 0052fe2b
    SHL EAX,0x2                         ; 0052fe31
    MOV EDX,EAX                         ; 0052fe34
    SHL EAX,0x5                         ; 0052fe36
    SUB EAX,EDX                         ; 0052fe39
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x34] ; 0052fe3b
    MOV dword ptr [ESP + 0x21],EAX      ; 0052fe3f
    MOV EAX,dword ptr [EBX + 0x11c]     ; 0052fe43
    SHL EAX,0x2                         ; 0052fe49
    MOV EDX,EAX                         ; 0052fe4c
    SHL EAX,0x5                         ; 0052fe4e
    SUB EAX,EDX                         ; 0052fe51
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x38] ; 0052fe53
    MOV dword ptr [ESP + 0x25],EAX      ; 0052fe57
    MOV EAX,dword ptr [EBX + 0x11c]     ; 0052fe5b
    SHL EAX,0x2                         ; 0052fe61
    MOV EDX,EAX                         ; 0052fe64
    SHL EAX,0x5                         ; 0052fe66
    LEA ESI,[EBX + 0x20]                ; 0052fe69
    SUB EAX,EDX                         ; 0052fe6c
    LEA EDI,[ESP + 0x9]                 ; 0052fe6e
    ADD ESI,EAX                         ; 0052fe72
    PUSH EDI                            ; 0052fe74
    MOV AL,byte ptr [ESI]               ; 0052fe75
        ;   Label: LAB_0052fe75
    MOV byte ptr [EDI],AL               ; 0052fe77
    CMP AL,0x0                          ; 0052fe79
    JZ 0x0052fe8d                       ; 0052fe7b
        ;   XREF to: 0052fe8d (CONDITIONAL_JUMP)  ; LAB_0052fe8d
    MOV AL,byte ptr [ESI + 0x1]         ; 0052fe7d
    ADD ESI,0x2                         ; 0052fe80
    MOV byte ptr [EDI + 0x1],AL         ; 0052fe83
    ADD EDI,0x2                         ; 0052fe86
    CMP AL,0x0                          ; 0052fe89
    JNZ 0x0052fe75                      ; 0052fe8b
        ;   XREF to: 0052fe75 (CONDITIONAL_JUMP)  ; LAB_0052fe75
    POP EDI                             ; 0052fe8d
        ;   Label: LAB_0052fe8d
    MOV EAX,ESP                         ; 0052fe8e
    PUSH EAX                            ; 0052fe90
    MOV ESI,dword ptr [EBX + 0x118]     ; 0052fe91
    PUSH ESI                            ; 0052fe97
    PUSH EBX                            ; 0052fe98
    CALL core_netgame.cpp_CNetGame_send_FUN_0052df50 ; 0052fe99
        ;   XREF to: 0052df50 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_0052df50(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    MOV EAX,dword ptr [EBX + 0x11c]     ; 0052fe9e
    SHL EAX,0x2                         ; 0052fea4
    MOV EDX,EAX                         ; 0052fea7
    SHL EAX,0x5                         ; 0052fea9
    MOV EDI,0x1                         ; 0052feac
    SUB EAX,EDX                         ; 0052feb1
    ADD ESP,0xc                         ; 0052feb3
    ADD EBX,EAX                         ; 0052feb6
    MOV EAX,[0x01d51da0]                ; 0052feb8 | DAT_01d51da0
    MOV dword ptr [0x00622584],EDI      ; 0052febd | DAT_00622584
    MOV dword ptr [EBX + 0x60],EAX      ; 0052fec3
    ADD ESP,0x2c                        ; 0052fec6
    POP EBP                             ; 0052fec9
    POP EDI                             ; 0052feca
    POP ESI                             ; 0052fecb
    POP EBX                             ; 0052fecc
    RET                                 ; 0052fecd
    XOR EAX,EAX                         ; 0052fece
        ;   Label: LAB_0052fece
    JMP 0x0052fdee                      ; 0052fed0
        ;   XREF to: 0052fdee (UNCONDITIONAL_JUMP)  ; LAB_0052fdee

