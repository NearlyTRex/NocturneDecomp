; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_0050eb80(CNetGame *this_ptr)
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
;   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_0050e020 at 0050e596
;   core_netgame.cpp_CNetGame_runLobby_FUN_0050cf50 at 0050cfb8
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005e0ea0
;   TerminatedCString s_CNetGame_sendMyStateChan_005e0eb4
;   undefined4 DAT_0061b124
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d34e34
;   undefined4 DAT_01d34e38
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_netgame.cpp_CNetGame_send_FUN_0050cd90
;   wincore_winrun.cpp_FUN_0058e9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050eb80
        ;   Label: core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_0050eb80
    PUSH ESI                            ; 0050eb81
    PUSH EDI                            ; 0050eb82
    PUSH EBP                            ; 0050eb83
    SUB ESP,0x2c                        ; 0050eb84
    MOV EBX,dword ptr [ESP + 0x40]      ; 0050eb87
    CMP dword ptr [EBX],0x2             ; 0050eb8b
    JNZ 0x0050eb96                      ; 0050eb8e
        ;   XREF to: 0050eb96 (CONDITIONAL_JUMP)  ; LAB_0050eb96
    CMP dword ptr [EBX + 0x4],0x1       ; 0050eb90
    JZ 0x0050ebb9                       ; 0050eb94
        ;   XREF to: 0050ebb9 (CONDITIONAL_JUMP)  ; LAB_0050ebb9
    MOV ESI,0x5e0ea0                    ; 0050eb96 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0050eb96
    MOV EDI,0x8d0                       ; 0050eb9b
    PUSH 0x5e0eb4                       ; 0050eba0 | = "CNetGame::sendMyStateChanged - should..."
    MOV dword ptr [0x01d046a0],ESI      ; 0050eba5 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0050ebab | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050ebb1
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050ebb6
    CALL wincore_winrun.cpp_FUN_0058e9e0 ; 0050ebb9
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058e9e0()
        ;   Label: LAB_0050ebb9
    MOV EDX,EAX                         ; 0050ebbe
    MOV ESI,0x12                        ; 0050ebc0
    SAR EDX,0x1f                        ; 0050ebc5
    IDIV ESI                            ; 0050ebc8
    MOV EBP,dword ptr [0x01d34e34]      ; 0050ebca | DAT_01d34e34
    MOV EDX,EAX                         ; 0050ebd0
    SUB EAX,EBP                         ; 0050ebd2
    MOV dword ptr [0x01d34e34],EDX      ; 0050ebd4 | DAT_01d34e34
    TEST EAX,EAX                        ; 0050ebda
    JL 0x0050eca6                       ; 0050ebdc
        ;   XREF to: 0050eca6 (CONDITIONAL_JUMP)  ; LAB_0050eca6
    CMP EAX,0x20000                     ; 0050ebe2
    JLE 0x0050ebee                      ; 0050ebe7
        ;   XREF to: 0050ebee (CONDITIONAL_JUMP)  ; LAB_0050ebee
    MOV EAX,0x20000                     ; 0050ebe9
    MOV EDX,dword ptr [0x01d34e38]      ; 0050ebee | DAT_01d34e38
        ;   Label: LAB_0050ebee
    MOV ECX,0x29                        ; 0050ebf4
    ADD EDX,EAX                         ; 0050ebf9
    MOV AH,0xa                          ; 0050ebfb
    MOV dword ptr [ESP],ECX             ; 0050ebfd
    MOV byte ptr [ESP + 0x4],AH         ; 0050ec00
    MOV EAX,dword ptr [EBX + 0x124]     ; 0050ec04
    SHL EAX,0x7                         ; 0050ec0a
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x64] ; 0050ec0d
    MOV dword ptr [ESP + 0x1d],EAX      ; 0050ec11
    MOV dword ptr [ESP + 0x5],EDX       ; 0050ec15
    MOV EAX,dword ptr [EBX + 0x124]     ; 0050ec19
    SHL EAX,0x7                         ; 0050ec1f
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x34] ; 0050ec22
    MOV dword ptr [ESP + 0x21],EAX      ; 0050ec26
    MOV EAX,dword ptr [EBX + 0x124]     ; 0050ec2a
    SHL EAX,0x7                         ; 0050ec30
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x38] ; 0050ec33
    MOV dword ptr [ESP + 0x25],EAX      ; 0050ec37
    MOV ESI,dword ptr [EBX + 0x124]     ; 0050ec3b
    LEA EAX,[EBX + 0x20]                ; 0050ec41
    SHL ESI,0x7                         ; 0050ec44
    LEA EDI,[ESP + 0x9]                 ; 0050ec47
    ADD ESI,EAX                         ; 0050ec4b
    MOV dword ptr [0x01d34e38],EDX      ; 0050ec4d | DAT_01d34e38
    PUSH EDI                            ; 0050ec53
    MOV AL,byte ptr [ESI]               ; 0050ec54
        ;   Label: LAB_0050ec54
    MOV byte ptr [EDI],AL               ; 0050ec56
    CMP AL,0x0                          ; 0050ec58
    JZ 0x0050ec6c                       ; 0050ec5a
        ;   XREF to: 0050ec6c (CONDITIONAL_JUMP)  ; LAB_0050ec6c
    MOV AL,byte ptr [ESI + 0x1]         ; 0050ec5c
    ADD ESI,0x2                         ; 0050ec5f
    MOV byte ptr [EDI + 0x1],AL         ; 0050ec62
    ADD EDI,0x2                         ; 0050ec65
    CMP AL,0x0                          ; 0050ec68
    JNZ 0x0050ec54                      ; 0050ec6a
        ;   XREF to: 0050ec54 (CONDITIONAL_JUMP)  ; LAB_0050ec54
    POP EDI                             ; 0050ec6c
        ;   Label: LAB_0050ec6c
    MOV EAX,ESP                         ; 0050ec6d
    PUSH EAX                            ; 0050ec6f
    MOV ESI,dword ptr [EBX + 0x120]     ; 0050ec70
    PUSH ESI                            ; 0050ec76
    PUSH EBX                            ; 0050ec77
    CALL core_netgame.cpp_CNetGame_send_FUN_0050cd90 ; 0050ec78
        ;   XREF to: 0050cd90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_0050cd90(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    MOV EAX,dword ptr [EBX + 0x124]     ; 0050ec7d
    MOV EDI,0x1                         ; 0050ec83
    SHL EAX,0x7                         ; 0050ec88
    ADD ESP,0xc                         ; 0050ec8b
    ADD EBX,EAX                         ; 0050ec8e
    MOV EAX,[0x01d34e38]                ; 0050ec90 | DAT_01d34e38
    MOV dword ptr [0x0061b124],EDI      ; 0050ec95 | DAT_0061b124
    MOV dword ptr [EBX + 0x60],EAX      ; 0050ec9b
    ADD ESP,0x2c                        ; 0050ec9e
    POP EBP                             ; 0050eca1
    POP EDI                             ; 0050eca2
    POP ESI                             ; 0050eca3
    POP EBX                             ; 0050eca4
    RET                                 ; 0050eca5
    XOR EAX,EAX                         ; 0050eca6
        ;   Label: LAB_0050eca6
    JMP 0x0050ebee                      ; 0050eca8
        ;   XREF to: 0050ebee (UNCONDITIONAL_JUMP)  ; LAB_0050ebee

