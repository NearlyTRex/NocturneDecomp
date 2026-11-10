; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_processPacket_FUN_00504d60(CNetGame *this_ptr,SNetworkAddr *source_addr,UNetPacket *packet)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; SNetworkAddr *   Stack[0x8]:4   source_addr
; UNetPacket *     Stack[0xc]:4   packet
; Local Variables:
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined1       Stack[-0xe8]:1  local_e8
; undefined        Stack[-0xe7]:1  local_e7
; undefined1       Stack[-0xe6]:1  local_e6
; undefined        Stack[-0xd3]:1  local_d3
; undefined1       Stack[-0xd2]:1  local_d2
; undefined        Stack[-0x83]:1  local_83
; undefined4       Stack[-0x78]:4  local_78
; undefined1       Stack[-0x74]:1  local_74
; undefined4       Stack[-0x73]:4  local_73
; undefined4       Stack[-0x6c]:4  local_6c
; undefined1       Stack[-0x68]:1  local_68
; undefined4       Stack[-0x67]:4  local_67
; undefined4       Stack[-0x60]:4  local_60
; undefined1       Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x5b]:4  local_5b
; undefined4       Stack[-0x54]:4  local_54
; undefined1       Stack[-0x50]:1  local_50
; undefined4       Stack[-0x4f]:4  local_4f
; undefined4       Stack[-0x48]:4  local_48
; undefined1       Stack[-0x44]:1  local_44
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70 at 00504cfa
;
; Referenced Globals:
;   undefined4 caseD_0
;   void* switchdataD_00504d14 = 00504b06
;   TerminatedCString s_core_netgame_cpp_005ca43b
;   TerminatedCString s_allocSimFrame_sim_histor_005ca44f
;   TerminatedCString s_You_have_been_disconnect_005caa17
;   undefined4 DAT_005caa40
;   TerminatedCString s_core_netgame_cpp_005caa41
;   TerminatedCString s_Player_list_mismatch_pro_005caa55
;   TerminatedCString s_core_netgame_cpp_005caa8d
;   TerminatedCString s_Player_list_mismatch_005caaa1
;   undefined4 DAT_005caab9
;   undefined4 DAT_005caac1
;   undefined4 DAT_005caac9
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   ... and 9 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_netgame.cpp_CNetGame_addChatHistory_FUN_00506a00
;   core_netgame.cpp_CNetGame_addPlayer_FUN_00505950
;   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00506b00
;   core_netgame.cpp_CNetGame_disconnect_FUN_005043b0
;   core_netgame.cpp_CNetGame_findPlayerByAddr_FUN_00505900
;   core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00507370
;   core_netgame.cpp_CNetGame_removePlayer_FUN_005071a0
;   core_netgame.cpp_CNetGame_send_FUN_00505870
;   core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00507f90
;   core_netgame.cpp_CNetGame_sendPacket_FUN_005058d0
;   crt_memory.c_memset_FUN_005a28f0
;   crt_string.c__strcmp_FUN_005a3d00
;   support_trisock.cpp_createNetworkAddr_FUN_0056f730
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504d60
        ;   Label: core_netgame.cpp_CNetGame_processPacket_FUN_00504d60
    PUSH ESI                            ; 00504d61
    PUSH EDI                            ; 00504d62
    PUSH EBP                            ; 00504d63
    MOV EBP,ESP                         ; 00504d64
    SUB ESP,0xe4                        ; 00504d66
    AND ESP,0xfffffff8                  ; 00504d6c
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00504d6f
    MOV EDX,dword ptr [EBP + 0x18]      ; 00504d72
    PUSH EDX                            ; 00504d75
    MOV ECX,dword ptr [EBP + 0x14]      ; 00504d76
    PUSH ECX                            ; 00504d79
    XOR EDI,EDI                         ; 00504d7a
    CALL core_netgame.cpp_CNetGame_findPlayerByAddr_FUN_00505900 ; 00504d7c
        ;   XREF to: 00505900 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_findPlayerByAddr_FUN_00505900(CNetGame * this_ptr, SNetworkAddr * addr)
    ADD ESP,0x8                         ; 00504d81
    MOV EBX,EAX                         ; 00504d84
    MOV dword ptr [ESP + 0xd8],EDI      ; 00504d86
    TEST EAX,EAX                        ; 00504d8d
    JL 0x00504dab                       ; 00504d8f
        ;   XREF to: 00504dab (CONDITIONAL_JUMP)  ; LAB_00504dab
    MOV EDX,dword ptr [EBP + 0x14]      ; 00504d91
    SHL EAX,0x7                         ; 00504d94
    ADD EDX,0x20                        ; 00504d97
    ADD EDX,EAX                         ; 00504d9a
    MOV EAX,[0x01da6478]                ; 00504d9c | DAT_01da6478
    MOV dword ptr [ESP + 0xd8],EDX      ; 00504da1
    MOV dword ptr [EDX + 0x24],EAX      ; 00504da8
    MOV AL,byte ptr [ESI + 0x4]         ; 00504dab
        ;   Label: LAB_00504dab
    CMP AL,0x10                         ; 00504dae
    JA 0x00504b06                       ; 00504db0
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    AND EAX,0xff                        ; 00504db6
    JMP dword ptr [EAX*0x4 + 0x504d14]  ; 00504dbb | caseD_e | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0x14]      ; 00504dc2
        ;   Label: caseD_1
    MOV ECX,dword ptr [EAX + 0x4]       ; 00504dc5
    MOV dword ptr [ESP + 0xcc],ESI      ; 00504dc8
    CMP ECX,0x1                         ; 00504dcf
    JNZ 0x00504ef0                      ; 00504dd2
        ;   XREF to: 00504ef0 (CONDITIONAL_JUMP)  ; LAB_00504ef0
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00504dd8
        ;   Label: LAB_00504dd8
    ADD EAX,0xd                         ; 00504ddf
    TEST EBX,EBX                        ; 00504de2
    JL 0x00504f22                       ; 00504de4
        ;   XREF to: 00504f22 (CONDITIONAL_JUMP)  ; LAB_00504f22
    PUSH EAX                            ; 00504dea
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00504deb
    PUSH EAX                            ; 00504df2
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 00504df3
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 00504df8
    TEST EAX,EAX                        ; 00504dfb
    JZ 0x00504f49                       ; 00504dfd
        ;   XREF to: 00504f49 (CONDITIONAL_JUMP)  ; LAB_00504f49
    MOV ESI,dword ptr [ESP + 0xcc]      ; 00504e03
        ;   Label: LAB_00504e03
    MOV EDI,dword ptr [ESP + 0xd8]      ; 00504e0a
    ADD ESI,0xd                         ; 00504e11
    PUSH EDI                            ; 00504e14
    MOV AL,byte ptr [ESI]               ; 00504e15
        ;   Label: LAB_00504e15
    MOV byte ptr [EDI],AL               ; 00504e17
    CMP AL,0x0                          ; 00504e19
    JZ 0x00504e2d                       ; 00504e1b
        ;   XREF to: 00504e2d (CONDITIONAL_JUMP)  ; LAB_00504e2d
    MOV AL,byte ptr [ESI + 0x1]         ; 00504e1d
    ADD ESI,0x2                         ; 00504e20
    MOV byte ptr [EDI + 0x1],AL         ; 00504e23
    ADD EDI,0x2                         ; 00504e26
    CMP AL,0x0                          ; 00504e29
    JNZ 0x00504e15                      ; 00504e2b
        ;   XREF to: 00504e15 (CONDITIONAL_JUMP)  ; LAB_00504e15
    POP EDI                             ; 00504e2d
        ;   Label: LAB_00504e2d
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00504e2e
    MOV EAX,dword ptr [EAX + 0x21]      ; 00504e35
    MOV dword ptr [EDI + 0x14],EAX      ; 00504e38
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00504e3b
    MOV EAX,dword ptr [EAX + 0x25]      ; 00504e42
    MOV dword ptr [EDI + 0x18],EAX      ; 00504e45
    MOV EDI,dword ptr [EBP + 0x14]      ; 00504e48
    PUSH EDI                            ; 00504e4b
    CALL core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00507370 ; 00504e4c
        ;   XREF to: 00507370 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00507370(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 00504e51
    MOV EAX,0x71                        ; 00504e54
        ;   Label: LAB_00504e54
    MOV DH,0x2                          ; 00504e59
    MOV ESI,dword ptr [EBP + 0x14]      ; 00504e5b
    LEA EDI,[ESP + 0x25]                ; 00504e5e
    MOV dword ptr [ESP + 0xc],EAX       ; 00504e62
    ADD ESI,0x128                       ; 00504e66
    MOV byte ptr [ESP + 0x10],DH        ; 00504e6c
    PUSH EDI                            ; 00504e70
    MOV AL,byte ptr [ESI]               ; 00504e71
        ;   Label: LAB_00504e71
    MOV byte ptr [EDI],AL               ; 00504e73
    CMP AL,0x0                          ; 00504e75
    JZ 0x00504e89                       ; 00504e77
        ;   XREF to: 00504e89 (CONDITIONAL_JUMP)  ; LAB_00504e89
    MOV AL,byte ptr [ESI + 0x1]         ; 00504e79
    ADD ESI,0x2                         ; 00504e7c
    MOV byte ptr [EDI + 0x1],AL         ; 00504e7f
    ADD EDI,0x2                         ; 00504e82
    CMP AL,0x0                          ; 00504e85
    JNZ 0x00504e71                      ; 00504e87
        ;   XREF to: 00504e71 (CONDITIONAL_JUMP)  ; LAB_00504e71
    POP EDI                             ; 00504e89
        ;   Label: LAB_00504e89
    MOV ESI,dword ptr [EBP + 0x14]      ; 00504e8a
    LEA EDI,[ESP + 0x11]                ; 00504e8d
    ADD ESI,0x8                         ; 00504e91
    PUSH EDI                            ; 00504e94
    MOV AL,byte ptr [ESI]               ; 00504e95
        ;   Label: LAB_00504e95
    MOV byte ptr [EDI],AL               ; 00504e97
    CMP AL,0x0                          ; 00504e99
    JZ 0x00504ead                       ; 00504e9b
        ;   XREF to: 00504ead (CONDITIONAL_JUMP)  ; LAB_00504ead
    MOV AL,byte ptr [ESI + 0x1]         ; 00504e9d
    ADD ESI,0x2                         ; 00504ea0
    MOV byte ptr [EDI + 0x1],AL         ; 00504ea3
    ADD EDI,0x2                         ; 00504ea6
    CMP AL,0x0                          ; 00504ea9
    JNZ 0x00504e95                      ; 00504eab
        ;   XREF to: 00504e95 (CONDITIONAL_JUMP)  ; LAB_00504e95
    POP EDI                             ; 00504ead
        ;   Label: LAB_00504ead
    LEA EAX,[ESP + 0xc]                 ; 00504eae
    PUSH EAX                            ; 00504eb2
    MOV EDX,dword ptr [EBP + 0x14]      ; 00504eb3
    PUSH EBX                            ; 00504eb6
    LEA EDI,[ESP + 0x7d]                ; 00504eb7
    MOV ESI,dword ptr [EBP + 0x18]      ; 00504ebb
    PUSH EDX                            ; 00504ebe
    MOVSD ES:EDI,ESI                    ; 00504ebf
    MOVSD ES:EDI,ESI                    ; 00504ec0
    CALL core_netgame.cpp_CNetGame_send_FUN_00505870 ; 00504ec1
        ;   XREF to: 00505870 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_00505870(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 00504ec6
    MOV EAX,dword ptr [EBP + 0x14]      ; 00504ec9
    MOV EAX,dword ptr [EAX + 0x124]     ; 00504ecc
    MOV ECX,dword ptr [EBP + 0x14]      ; 00504ed2
    SHL EAX,0x7                         ; 00504ed5
    MOV ESI,dword ptr [ESP + 0xcc]      ; 00504ed8
    ADD EAX,ECX                         ; 00504edf
    LEA ESI,[ESI + 0x5]                 ; 00504ee1
    LEA EDI,[EAX + 0x3c]                ; 00504ee4
    MOVSD ES:EDI,ESI                    ; 00504ee7
    MOVSD ES:EDI,ESI                    ; 00504ee8
    MOV ESP,EBP                         ; 00504ee9
    POP EBP                             ; 00504eeb
    POP EDI                             ; 00504eec
    POP ESI                             ; 00504eed
    POP EBX                             ; 00504eee
    RET                                 ; 00504eef
    MOV EAX,0x9                         ; 00504ef0
        ;   Label: LAB_00504ef0
    MOV dword ptr [ESP + 0xb0],EAX      ; 00504ef5
    LEA EAX,[ESP + 0xb0]                ; 00504efc
    PUSH EAX                            ; 00504f03
    MOV ESI,dword ptr [EBP + 0x18]      ; 00504f04
    PUSH ESI                            ; 00504f07
    MOV EDI,dword ptr [EBP + 0x14]      ; 00504f08
    MOV DL,0x3                          ; 00504f0b
    PUSH EDI                            ; 00504f0d
    MOV byte ptr [ESP + 0xc0],DL        ; 00504f0e
    CALL core_netgame.cpp_CNetGame_sendPacket_FUN_005058d0 ; 00504f15
        ;   XREF to: 005058d0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendPacket_FUN_005058d0(CNetGame * this_ptr, SNetworkAddr * dest_addr, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 00504f1a
    JMP 0x00504dd8                      ; 00504f1d
        ;   XREF to: 00504dd8 (UNCONDITIONAL_JUMP)  ; LAB_00504dd8
    MOV EDX,dword ptr [ESP + 0xcc]      ; 00504f22
        ;   Label: LAB_00504f22
    MOV ECX,dword ptr [EDX + 0x25]      ; 00504f29
    PUSH ECX                            ; 00504f2c
    MOV EBX,dword ptr [EDX + 0x21]      ; 00504f2d
    PUSH EBX                            ; 00504f30
    PUSH EAX                            ; 00504f31
    MOV ESI,dword ptr [EBP + 0x18]      ; 00504f32
    PUSH ESI                            ; 00504f35
    MOV EDI,dword ptr [EBP + 0x14]      ; 00504f36
    PUSH EDI                            ; 00504f39
    CALL core_netgame.cpp_CNetGame_addPlayer_FUN_00505950 ; 00504f3a
        ;   XREF to: 00505950 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_addPlayer_FUN_00505950(CNetGame * this_ptr, SNetworkAddr * addr, char * name, int hero_number, ...)
    ADD ESP,0x14                        ; 00504f3f
    MOV EBX,EAX                         ; 00504f42
    JMP 0x00504e54                      ; 00504f44
        ;   XREF to: 00504e54 (UNCONDITIONAL_JUMP)  ; LAB_00504e54
    MOV EDX,dword ptr [ESP + 0xcc]      ; 00504f49
        ;   Label: LAB_00504f49
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00504f50
    MOV ECX,dword ptr [EDX + 0x21]      ; 00504f57
    CMP ECX,dword ptr [EAX + 0x14]      ; 00504f5a
    JNZ 0x00504e03                      ; 00504f5d
        ;   XREF to: 00504e03 (CONDITIONAL_JUMP)  ; LAB_00504e03
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00504f63
    MOV ESI,dword ptr [EDX + 0x25]      ; 00504f6a
    CMP ESI,dword ptr [EAX + 0x18]      ; 00504f6d
    JNZ 0x00504e03                      ; 00504f70
        ;   XREF to: 00504e03 (CONDITIONAL_JUMP)  ; LAB_00504e03
    JMP 0x00504e54                      ; 00504f76
        ;   XREF to: 00504e54 (UNCONDITIONAL_JUMP)  ; LAB_00504e54
    MOV EAX,dword ptr [EBP + 0x14]      ; 00504f7b
        ;   Label: caseD_3
    CMP dword ptr [EAX],0x2             ; 00504f7e
    JNZ 0x00504b06                      ; 00504f81
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    TEST EBX,EBX                        ; 00504f87
    JL 0x00504b06                       ; 00504f89
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    CMP dword ptr [EAX + 0x4],0x1       ; 00504f8f
    JNZ 0x00504b06                      ; 00504f93
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    CMP EBX,dword ptr [EAX + 0x120]     ; 00504f99
    JNZ 0x00504b06                      ; 00504f9f
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [ESI + 0x5]       ; 00504fa5
    MOV [0x01da647c],EAX                ; 00504fa8 | DAT_01da647c
    MOV ESP,EBP                         ; 00504fad
    POP EBP                             ; 00504faf
    POP EDI                             ; 00504fb0
    POP ESI                             ; 00504fb1
    POP EBX                             ; 00504fb2
    RET                                 ; 00504fb3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00504fb4
        ;   Label: caseD_2
    MOV EDX,ESI                         ; 00504fb7
    CMP dword ptr [EAX],0x2             ; 00504fb9
    JNZ 0x0050502a                      ; 00504fbc
        ;   XREF to: 0050502a (CONDITIONAL_JUMP)  ; LAB_0050502a
    TEST EBX,EBX                        ; 00504fbe
    JL 0x0050502a                       ; 00504fc0
        ;   XREF to: 0050502a (CONDITIONAL_JUMP)  ; LAB_0050502a
    CMP EBX,dword ptr [EAX + 0x120]     ; 00504fc2
    JNZ 0x0050502a                      ; 00504fc8
        ;   XREF to: 0050502a (CONDITIONAL_JUMP)  ; LAB_0050502a
    MOV ECX,dword ptr [EAX + 0x4]       ; 00504fca
    CMP ECX,0x1                         ; 00504fcd
    JNZ 0x00504b06                      ; 00504fd0
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDI,dword ptr [ESP + 0xd8]      ; 00504fd6
    LEA ESI,[EDX + 0x5]                 ; 00504fdd
    MOV dword ptr [0x01da647c],ECX      ; 00504fe0 | DAT_01da647c
    PUSH EDI                            ; 00504fe6
    MOV AL,byte ptr [ESI]               ; 00504fe7
        ;   Label: LAB_00504fe7
    MOV byte ptr [EDI],AL               ; 00504fe9
    CMP AL,0x0                          ; 00504feb
    JZ 0x00504fff                       ; 00504fed
        ;   XREF to: 00504fff (CONDITIONAL_JUMP)  ; LAB_00504fff
    MOV AL,byte ptr [ESI + 0x1]         ; 00504fef
    ADD ESI,0x2                         ; 00504ff2
    MOV byte ptr [EDI + 0x1],AL         ; 00504ff5
    ADD EDI,0x2                         ; 00504ff8
    CMP AL,0x0                          ; 00504ffb
    JNZ 0x00504fe7                      ; 00504ffd
        ;   XREF to: 00504fe7 (CONDITIONAL_JUMP)  ; LAB_00504fe7
    POP EDI                             ; 00504fff
        ;   Label: LAB_00504fff
    MOV EAX,dword ptr [EBP + 0x14]      ; 00505000
    MOV EAX,dword ptr [EAX + 0x124]     ; 00505003
    MOV ESI,dword ptr [EBP + 0x14]      ; 00505009
    SHL EAX,0x7                         ; 0050500c
    ADD EAX,ESI                         ; 0050500f
    LEA EDI,[EAX + 0x3c]                ; 00505011
    LEA ESI,[EDX + 0x69]                ; 00505014
    MOVSD ES:EDI,ESI                    ; 00505017
    MOVSD ES:EDI,ESI                    ; 00505018
    MOV dword ptr [0x01da6484],0xffffffff ; 00505019 | DAT_01da6484
    MOV ESP,EBP                         ; 00505023
    POP EBP                             ; 00505025
    POP EDI                             ; 00505026
    POP ESI                             ; 00505027
    POP EBX                             ; 00505028
    RET                                 ; 00505029
    PUSH 0x0                            ; 0050502a
        ;   Label: LAB_0050502a
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050502c
    PUSH EAX                            ; 0050502f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00505030
    PUSH EDX                            ; 00505033
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00507f90 ; 00505034
        ;   XREF to: 00507f90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 00505039
    MOV ESP,EBP                         ; 0050503c
    POP EBP                             ; 0050503e
    POP EDI                             ; 0050503f
    POP ESI                             ; 00505040
    POP EBX                             ; 00505041
    RET                                 ; 00505042
    MOV EAX,dword ptr [EBP + 0x14]      ; 00505043
        ;   Label: caseD_4
    MOV EDI,dword ptr [EAX]             ; 00505046
    TEST EDI,EDI                        ; 00505048
    JNZ 0x00505061                      ; 0050504a
        ;   XREF to: 00505061 (CONDITIONAL_JUMP)  ; LAB_00505061
    PUSH EDI                            ; 0050504c
    MOV ECX,dword ptr [EBP + 0x18]      ; 0050504d
    PUSH ECX                            ; 00505050
    PUSH EAX                            ; 00505051
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00507f90 ; 00505052
        ;   XREF to: 00507f90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 00505057
    MOV ESP,EBP                         ; 0050505a
    POP EBP                             ; 0050505c
    POP EDI                             ; 0050505d
    POP ESI                             ; 0050505e
    POP EBX                             ; 0050505f
    RET                                 ; 00505060
    MOV EAX,0x9                         ; 00505061
        ;   Label: LAB_00505061
    MOV DL,0x5                          ; 00505066
    MOV dword ptr [ESP + 0x98],EAX      ; 00505068
    MOV byte ptr [ESP + 0x9c],DL        ; 0050506f
    MOV EAX,dword ptr [ESI + 0x5]       ; 00505076
    MOV dword ptr [ESP + 0x9d],EAX      ; 00505079
    LEA EAX,[ESP + 0x98]                ; 00505080
    PUSH EAX                            ; 00505087
    MOV EAX,dword ptr [EBP + 0x18]      ; 00505088
    PUSH EAX                            ; 0050508b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050508c
    PUSH EDX                            ; 0050508f
    CALL core_netgame.cpp_CNetGame_sendPacket_FUN_005058d0 ; 00505090
        ;   XREF to: 005058d0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendPacket_FUN_005058d0(CNetGame * this_ptr, SNetworkAddr * dest_addr, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 00505095
    MOV ESP,EBP                         ; 00505098
    POP EBP                             ; 0050509a
    POP EDI                             ; 0050509b
    POP ESI                             ; 0050509c
    POP EBX                             ; 0050509d
    RET                                 ; 0050509e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050509f
        ;   Label: caseD_5
    CMP dword ptr [EAX],0x0             ; 005050a2
    JZ 0x00505189                       ; 005050a5
        ;   XREF to: 00505189 (CONDITIONAL_JUMP)  ; LAB_00505189
    TEST EBX,EBX                        ; 005050ab
    JL 0x00505189                       ; 005050ad
        ;   XREF to: 00505189 (CONDITIONAL_JUMP)  ; LAB_00505189
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005050b3
    FLD float ptr [EAX + 0x28]          ; 005050ba
    FLDZ                                ; 005050bd
    FCOMPP                              ; 005050bf
    FNSTSW AX                           ; 005050c1
    SAHF                                ; 005050c3
    JA 0x00505123                       ; 005050c4
        ;   XREF to: 00505123 (CONDITIONAL_JUMP)  ; LAB_00505123
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005050c6
    MOV EDX,dword ptr [ESI + 0x5]       ; 005050cd
    MOV EAX,dword ptr [EAX + 0x30]      ; 005050d0
    SUB EDX,EAX                         ; 005050d3
    MOV dword ptr [ESP + 0xe0],EDX      ; 005050d5
    FILD dword ptr [ESP + 0xe0]         ; 005050dc
    FMUL double ptr [0x005caab9]        ; 005050e3 | DAT_005caab9
    FST float ptr [ESP]                 ; 005050e9
    FCOMP double ptr [0x005caac1]       ; 005050ec | DAT_005caac1
    FNSTSW AX                           ; 005050f2
    SAHF                                ; 005050f4
    JNC 0x005050fe                      ; 005050f5
        ;   XREF to: 005050fe (CONDITIONAL_JUMP)  ; LAB_005050fe
    MOV dword ptr [ESP],0xc1f00000      ; 005050f7
    FLD float ptr [ESP]                 ; 005050fe
        ;   Label: LAB_005050fe
    FCOMP double ptr [0x005caac9]       ; 00505101 | DAT_005caac9
    FNSTSW AX                           ; 00505107
    SAHF                                ; 00505109
    JBE 0x00505113                      ; 0050510a
        ;   XREF to: 00505113 (CONDITIONAL_JUMP)  ; LAB_00505113
    MOV dword ptr [ESP],0x41f00000      ; 0050510c
    FLD float ptr [ESP]                 ; 00505113
        ;   Label: LAB_00505113
    FLDZ                                ; 00505116
    FCOMPP                              ; 00505118
    FNSTSW AX                           ; 0050511a
    SAHF                                ; 0050511c
    JNC 0x00504b06                      ; 0050511d
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDX,dword ptr [0x01da6478]      ; 00505123 | DAT_01da6478
        ;   Label: LAB_00505123
    MOV EAX,dword ptr [ESI + 0x5]       ; 00505129
    SUB EDX,EAX                         ; 0050512c
    MOV dword ptr [ESP + 0xe0],EDX      ; 0050512e
    FILD dword ptr [ESP + 0xe0]         ; 00505135
    FMUL double ptr [0x005caab9]        ; 0050513c | DAT_005caab9
    FST float ptr [ESP + 0x4]           ; 00505142
    FLDZ                                ; 00505146
    FCOMPP                              ; 00505148
    FNSTSW AX                           ; 0050514a
    SAHF                                ; 0050514c
    JBE 0x00505155                      ; 0050514d
        ;   XREF to: 00505155 (CONDITIONAL_JUMP)  ; LAB_00505155
    XOR EAX,EAX                         ; 0050514f
    MOV dword ptr [ESP + 0x4],EAX       ; 00505151
    FLD float ptr [ESP + 0x4]           ; 00505155
        ;   Label: LAB_00505155
    FCOMP double ptr [0x005caac9]       ; 00505159 | DAT_005caac9
    FNSTSW AX                           ; 0050515f
    SAHF                                ; 00505161
    JBE 0x0050516c                      ; 00505162
        ;   XREF to: 0050516c (CONDITIONAL_JUMP)  ; LAB_0050516c
    MOV dword ptr [ESP + 0x4],0x41f00000 ; 00505164
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0050516c
        ;   Label: LAB_0050516c
    MOV EAX,dword ptr [ESP + 0x4]       ; 00505173
    MOV dword ptr [EDX + 0x28],EAX      ; 00505177
    MOV EAX,[0x01da6478]                ; 0050517a | DAT_01da6478
    MOV dword ptr [EDX + 0x30],EAX      ; 0050517f
    MOV ESP,EBP                         ; 00505182
    POP EBP                             ; 00505184
    POP EDI                             ; 00505185
    POP ESI                             ; 00505186
    POP EBX                             ; 00505187
    RET                                 ; 00505188
    PUSH 0x0                            ; 00505189
        ;   Label: LAB_00505189
    MOV ECX,dword ptr [EBP + 0x18]      ; 0050518b
    PUSH ECX                            ; 0050518e
    MOV EBX,dword ptr [EBP + 0x14]      ; 0050518f
    PUSH EBX                            ; 00505192
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00507f90 ; 00505193
        ;   XREF to: 00507f90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 00505198
    MOV ESP,EBP                         ; 0050519b
    POP EBP                             ; 0050519d
    POP EDI                             ; 0050519e
    POP ESI                             ; 0050519f
    POP EBX                             ; 005051a0
    RET                                 ; 005051a1
    MOV EDI,ESI                         ; 005051a2
        ;   Label: caseD_6
    TEST EBX,EBX                        ; 005051a4
    JL 0x00504b06                       ; 005051a6
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDX,dword ptr [0x01da648c]      ; 005051ac | DAT_01da648c
    XOR EAX,EAX                         ; 005051b2
    CMP EAX,EDX                         ; 005051b4
    JGE 0x005051f0                      ; 005051b6
        ;   XREF to: 005051f0 (CONDITIONAL_JUMP)  ; LAB_005051f0
    LEA EBX,[EAX*0x8 + 0x0]             ; 005051b8
    SHL EBX,0x5                         ; 005051bf
    ADD EBX,0x1da6490                   ; 005051c2
    IMUL EDX,EAX,0x120                  ; 005051c8
        ;   Label: LAB_005051c8
    MOV ECX,dword ptr [EBP + 0x18]      ; 005051ce
    MOV SI,word ptr [EBX + 0x4]         ; 005051d1
    CMP SI,word ptr [ECX + 0x4]         ; 005051d5
    JNZ 0x00505256                      ; 005051d9
        ;   XREF to: 00505256 (CONDITIONAL_JUMP)  ; LAB_00505256
    MOV ESI,dword ptr [ECX]             ; 005051df
    CMP ESI,dword ptr [EBX]             ; 005051e1
    JNZ 0x00505256                      ; 005051e3
        ;   XREF to: 00505256 (CONDITIONAL_JUMP)  ; LAB_00505256
    MOV ESI,dword ptr [EDI + 0x5]       ; 005051e5
    CMP ESI,dword ptr [EDX + 0x1da6498] ; 005051e8 | DAT_01da65b8
    JNZ 0x00505256                      ; 005051ee
        ;   XREF to: 00505256 (CONDITIONAL_JUMP)  ; LAB_00505256
    CMP EAX,dword ptr [0x01da648c]      ; 005051f0 | DAT_01da648c
        ;   Label: LAB_005051f0
    JNZ 0x00505218                      ; 005051f6
        ;   XREF to: 00505218 (CONDITIONAL_JUMP)  ; LAB_00505218
    LEA EAX,[EDI + 0x9]                 ; 005051f8
    PUSH EAX                            ; 005051fb
    MOV ECX,dword ptr [ESP + 0xdc]      ; 005051fc
    PUSH ECX                            ; 00505203
    MOV EBX,dword ptr [EDI + 0x5]       ; 00505204
    PUSH EBX                            ; 00505207
    MOV ESI,dword ptr [EBP + 0x18]      ; 00505208
    PUSH ESI                            ; 0050520b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050520c
    PUSH EAX                            ; 0050520f
    CALL core_netgame.cpp_CNetGame_addChatHistory_FUN_00506a00 ; 00505210
        ;   XREF to: 00506a00 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_addChatHistory_FUN_00506a00(CNetGame * this_ptr, SNetworkAddr * sender_addr, int message_id, char * sender_name, ...)
    ADD ESP,0x14                        ; 00505215
    MOV EDX,0x9                         ; 00505218
        ;   Label: LAB_00505218
    MOV CH,0x7                          ; 0050521d
    MOV dword ptr [ESP + 0x80],EDX      ; 0050521f
    MOV byte ptr [ESP + 0x84],CH        ; 00505226
    MOV EAX,dword ptr [EDI + 0x5]       ; 0050522d
    MOV dword ptr [ESP + 0x85],EAX      ; 00505230
    LEA EAX,[ESP + 0x80]                ; 00505237
    PUSH EAX                            ; 0050523e
    MOV ECX,dword ptr [EBP + 0x18]      ; 0050523f
    PUSH ECX                            ; 00505242
    MOV EBX,dword ptr [EBP + 0x14]      ; 00505243
    PUSH EBX                            ; 00505246
    CALL core_netgame.cpp_CNetGame_sendPacket_FUN_005058d0 ; 00505247
        ;   XREF to: 005058d0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendPacket_FUN_005058d0(CNetGame * this_ptr, SNetworkAddr * dest_addr, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 0050524c
    MOV ESP,EBP                         ; 0050524f
    POP EBP                             ; 00505251
    POP EDI                             ; 00505252
    POP ESI                             ; 00505253
    POP EBX                             ; 00505254
    RET                                 ; 00505255
    MOV ESI,dword ptr [0x01da648c]      ; 00505256 | DAT_01da648c
        ;   Label: LAB_00505256
    INC EAX                             ; 0050525c
    ADD EBX,0x120                       ; 0050525d
    CMP EAX,ESI                         ; 00505263
    JL 0x005051c8                       ; 00505265
        ;   XREF to: 005051c8 (CONDITIONAL_JUMP)  ; LAB_005051c8
    JMP 0x005051f0                      ; 0050526b
        ;   XREF to: 005051f0 (UNCONDITIONAL_JUMP)  ; LAB_005051f0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050526d
        ;   Label: caseD_7
    MOV ECX,dword ptr [EAX]             ; 00505270
    MOV dword ptr [ESP + 0xd4],ESI      ; 00505272
    TEST ECX,ECX                        ; 00505279
    JZ 0x00504b06                       ; 0050527b
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    TEST EBX,EBX                        ; 00505281
    JL 0x00504b06                       ; 00505283
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDI,dword ptr [0x01dc2690]      ; 00505289 | DAT_01dc2690
    XOR ESI,ESI                         ; 0050528f
    CMP ESI,EDI                         ; 00505291
    JGE 0x00504b06                      ; 00505293
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDX,EDI                         ; 00505299
    SHL EDI,0x4                         ; 0050529b
    MOV EAX,ESI                         ; 0050529e
    ADD EDI,EDX                         ; 005052a0
    SHL EAX,0x4                         ; 005052a2
    SHL EDI,0x2                         ; 005052a5
    SHL EAX,0x2                         ; 005052a8
    ADD EDI,EDX                         ; 005052ab
    SHL EAX,0x2                         ; 005052ad
    SHL EDI,0x2                         ; 005052b0
    MOV ECX,dword ptr [ESP + 0xd4]      ; 005052b3
        ;   Label: LAB_005052b3
    MOV EDX,dword ptr [EAX + 0x1dc2698] ; 005052ba
    CMP EDX,dword ptr [ECX + 0x5]       ; 005052c0
    JZ 0x005052d5                       ; 005052c3
        ;   XREF to: 005052d5 (CONDITIONAL_JUMP)  ; LAB_005052d5
    ADD EAX,0x114                       ; 005052c5
    INC ESI                             ; 005052ca
    CMP EAX,EDI                         ; 005052cb
    JGE 0x00504b06                      ; 005052cd
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    JMP 0x005052b3                      ; 005052d3
        ;   XREF to: 005052b3 (UNCONDITIONAL_JUMP)  ; LAB_005052b3
    LEA EDX,[EAX + EBX*0x1]             ; 005052d5
        ;   Label: LAB_005052d5
    MOV byte ptr [EDX + 0x1dc269c],0x1  ; 005052d8
    ADD EAX,0x114                       ; 005052df
    INC ESI                             ; 005052e4
    CMP EAX,EDI                         ; 005052e5
    JGE 0x00504b06                      ; 005052e7
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    JMP 0x005052b3                      ; 005052ed
        ;   XREF to: 005052b3 (UNCONDITIONAL_JUMP)  ; LAB_005052b3
    MOV EAX,dword ptr [EBP + 0x14]      ; 005052ef
        ;   Label: caseD_8
    MOV EDI,dword ptr [EAX]             ; 005052f2
    CMP EDI,0x2                         ; 005052f4
    JNZ 0x0050502a                      ; 005052f7
        ;   XREF to: 0050502a (CONDITIONAL_JUMP)  ; LAB_0050502a
    TEST EBX,EBX                        ; 005052fd
    JL 0x0050502a                       ; 005052ff
        ;   XREF to: 0050502a (CONDITIONAL_JUMP)  ; LAB_0050502a
    CMP EBX,dword ptr [EAX + 0x120]     ; 00505305
    JNZ 0x0050502a                      ; 0050530b
        ;   XREF to: 0050502a (CONDITIONAL_JUMP)  ; LAB_0050502a
    MOV ECX,dword ptr [EAX + 0x4]       ; 00505311
    CMP ECX,0x1                         ; 00505314
    JNZ 0x00505321                      ; 00505317
        ;   XREF to: 00505321 (CONDITIONAL_JUMP)  ; LAB_00505321
    CMP ECX,dword ptr [ESI + 0x5]       ; 00505319
    JNZ 0x00505321                      ; 0050531c
        ;   XREF to: 00505321 (CONDITIONAL_JUMP)  ; LAB_00505321
    MOV dword ptr [EAX + 0x4],EDI       ; 0050531e
    MOV EDI,0x9                         ; 00505321
        ;   Label: LAB_00505321
    MOV DL,0x9                          ; 00505326
    MOV EAX,dword ptr [EBP + 0x14]      ; 00505328
    MOV dword ptr [ESP + 0x8c],EDI      ; 0050532b
    MOV byte ptr [ESP + 0x90],DL        ; 00505332
    MOV EAX,dword ptr [EAX + 0x124]     ; 00505339
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050533f
    SHL EAX,0x7                         ; 00505342
    ADD EAX,EDX                         ; 00505345
    MOV EAX,dword ptr [EAX + 0x5c]      ; 00505347
    MOV dword ptr [ESP + 0x91],EAX      ; 0050534a
    LEA EAX,[ESP + 0x8c]                ; 00505351
    PUSH EAX                            ; 00505358
    MOV ECX,dword ptr [EDX + 0x120]     ; 00505359
    PUSH ECX                            ; 0050535f
    PUSH EDX                            ; 00505360
    CALL core_netgame.cpp_CNetGame_send_FUN_00505870 ; 00505361
        ;   XREF to: 00505870 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_00505870(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    MOV EDI,dword ptr [0x01da6480]      ; 00505366 | DAT_01da6480
    MOV EAX,dword ptr [ESI + 0x5]       ; 0050536c
    ADD ESP,0xc                         ; 0050536f
    CMP EAX,EDI                         ; 00505372
    JLE 0x00504b06                      ; 00505374
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    MOV [0x01da6480],EAX                ; 0050537a | DAT_01da6480
    MOV ESP,EBP                         ; 0050537f
    POP EBP                             ; 00505381
    POP EDI                             ; 00505382
    POP ESI                             ; 00505383
    POP EBX                             ; 00505384
    RET                                 ; 00505385
    MOV EAX,dword ptr [EBP + 0x14]      ; 00505386
        ;   Label: caseD_9
    CMP dword ptr [EAX],0x1             ; 00505389
    JNZ 0x005053b9                      ; 0050538c
        ;   XREF to: 005053b9 (CONDITIONAL_JUMP)  ; LAB_005053b9
    TEST EBX,EBX                        ; 0050538e
    JL 0x005053b9                       ; 00505390
        ;   XREF to: 005053b9 (CONDITIONAL_JUMP)  ; LAB_005053b9
    CMP dword ptr [EAX + 0x4],0x2       ; 00505392
    JNZ 0x00504b06                      ; 00505396
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0050539c
    MOV EAX,dword ptr [ESI + 0x5]       ; 005053a3
    CMP EAX,dword ptr [EDX + 0x3c]      ; 005053a6
    JL 0x00504b06                       ; 005053a9
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    MOV dword ptr [EDX + 0x3c],EAX      ; 005053af
    MOV ESP,EBP                         ; 005053b2
    POP EBP                             ; 005053b4
    POP EDI                             ; 005053b5
    POP ESI                             ; 005053b6
    POP EBX                             ; 005053b7
    RET                                 ; 005053b8
    PUSH 0x0                            ; 005053b9
        ;   Label: LAB_005053b9
    MOV EBX,dword ptr [EBP + 0x18]      ; 005053bb
    PUSH EBX                            ; 005053be
    MOV ESI,dword ptr [EBP + 0x14]      ; 005053bf
    PUSH ESI                            ; 005053c2
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00507f90 ; 005053c3
        ;   XREF to: 00507f90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 005053c8
    MOV ESP,EBP                         ; 005053cb
    POP EBP                             ; 005053cd
    POP EDI                             ; 005053ce
    POP ESI                             ; 005053cf
    POP EBX                             ; 005053d0
    RET                                 ; 005053d1
    MOV EAX,dword ptr [EBP + 0x14]      ; 005053d2
        ;   Label: caseD_a
    MOV EDI,dword ptr [EAX]             ; 005053d5
    MOV EDX,ESI                         ; 005053d7
    CMP EDI,0x1                         ; 005053d9
    JNZ 0x0050549d                      ; 005053dc
        ;   XREF to: 0050549d (CONDITIONAL_JUMP)  ; LAB_0050549d
    TEST EBX,EBX                        ; 005053e2
    JL 0x0050549d                       ; 005053e4
        ;   XREF to: 0050549d (CONDITIONAL_JUMP)  ; LAB_0050549d
    CMP EDI,dword ptr [EAX + 0x4]       ; 005053ea
    JNZ 0x00504b06                      ; 005053ed
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005053f3
    CMP dword ptr [EAX + 0x40],0x0      ; 005053fa
    JZ 0x0050545e                       ; 005053fe
        ;   XREF to: 0050545e (CONDITIONAL_JUMP)  ; LAB_0050545e
    MOV EBX,dword ptr [ESP + 0xd8]      ; 00505400
    MOV EAX,dword ptr [ESI + 0x5]       ; 00505407
    MOV EBX,dword ptr [EBX + 0x40]      ; 0050540a
    SUB EBX,EAX                         ; 0050540d
    MOV dword ptr [ESP + 0xe0],EBX      ; 0050540f
    FILD dword ptr [ESP + 0xe0]         ; 00505416
    FMUL double ptr [0x005caab9]        ; 0050541d | DAT_005caab9
    FST float ptr [ESP + 0x8]           ; 00505423
    FCOMP double ptr [0x005caac1]       ; 00505427 | DAT_005caac1
    FNSTSW AX                           ; 0050542d
    SAHF                                ; 0050542f
    JC 0x005054b6                       ; 00505430
        ;   XREF to: 005054b6 (CONDITIONAL_JUMP)  ; LAB_005054b6
    FLD float ptr [ESP + 0x8]           ; 00505436
        ;   Label: LAB_00505436
    FCOMP double ptr [0x005caac9]       ; 0050543a | DAT_005caac9
    FNSTSW AX                           ; 00505440
    SAHF                                ; 00505442
    JBE 0x0050544d                      ; 00505443
        ;   XREF to: 0050544d (CONDITIONAL_JUMP)  ; LAB_0050544d
    MOV dword ptr [ESP + 0x8],0x41f00000 ; 00505445
    FLD float ptr [ESP + 0x8]           ; 0050544d
        ;   Label: LAB_0050544d
    FLDZ                                ; 00505451
    FCOMPP                              ; 00505453
    FNSTSW AX                           ; 00505455
    SAHF                                ; 00505457
    JNC 0x00504b06                      ; 00505458
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    MOV ECX,dword ptr [ESP + 0xd8]      ; 0050545e
        ;   Label: LAB_0050545e
    LEA ESI,[EDX + 0x9]                 ; 00505465
    MOV EAX,dword ptr [EDX + 0x1d]      ; 00505468
    MOV EDI,ECX                         ; 0050546b
    MOV dword ptr [ECX + 0x44],EAX      ; 0050546d
    PUSH EDI                            ; 00505470
    MOV AL,byte ptr [ESI]               ; 00505471
        ;   Label: LAB_00505471
    MOV byte ptr [EDI],AL               ; 00505473
    CMP AL,0x0                          ; 00505475
    JZ 0x00505489                       ; 00505477
        ;   XREF to: 00505489 (CONDITIONAL_JUMP)  ; LAB_00505489
    MOV AL,byte ptr [ESI + 0x1]         ; 00505479
    ADD ESI,0x2                         ; 0050547c
    MOV byte ptr [EDI + 0x1],AL         ; 0050547f
    ADD EDI,0x2                         ; 00505482
    CMP AL,0x0                          ; 00505485
    JNZ 0x00505471                      ; 00505487
        ;   XREF to: 00505471 (CONDITIONAL_JUMP)  ; LAB_00505471
    POP EDI                             ; 00505489
        ;   Label: LAB_00505489
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050548a
    PUSH EAX                            ; 0050548d
    CALL core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00507370 ; 0050548e
        ;   XREF to: 00507370 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00507370(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 00505493
    MOV ESP,EBP                         ; 00505496
    POP EBP                             ; 00505498
    POP EDI                             ; 00505499
    POP ESI                             ; 0050549a
    POP EBX                             ; 0050549b
    RET                                 ; 0050549c
    PUSH 0x0                            ; 0050549d
        ;   Label: LAB_0050549d
    MOV EDX,dword ptr [EBP + 0x18]      ; 0050549f
    PUSH EDX                            ; 005054a2
    MOV ECX,dword ptr [EBP + 0x14]      ; 005054a3
    PUSH ECX                            ; 005054a6
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00507f90 ; 005054a7
        ;   XREF to: 00507f90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 005054ac
    MOV ESP,EBP                         ; 005054af
    POP EBP                             ; 005054b1
    POP EDI                             ; 005054b2
    POP ESI                             ; 005054b3
    POP EBX                             ; 005054b4
    RET                                 ; 005054b5
    MOV dword ptr [ESP + 0x8],0xc1f00000 ; 005054b6
        ;   Label: LAB_005054b6
    JMP 0x00505436                      ; 005054be
        ;   XREF to: 00505436 (UNCONDITIONAL_JUMP)  ; LAB_00505436
    MOV EAX,dword ptr [EBP + 0x14]      ; 005054c3
        ;   Label: caseD_b
    CMP dword ptr [EAX],0x2             ; 005054c6
    JNZ 0x005053b9                      ; 005054c9
        ;   XREF to: 005053b9 (CONDITIONAL_JUMP)  ; LAB_005053b9
    TEST EBX,EBX                        ; 005054cf
    JL 0x005053b9                       ; 005054d1
        ;   XREF to: 005053b9 (CONDITIONAL_JUMP)  ; LAB_005053b9
    CMP EBX,dword ptr [EAX + 0x120]     ; 005054d7
    JNZ 0x005053b9                      ; 005054dd
        ;   XREF to: 005053b9 (CONDITIONAL_JUMP)  ; LAB_005053b9
    CMP dword ptr [EAX + 0x4],0x1       ; 005054e3
    JNZ 0x00504b06                      ; 005054e7
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,[0x01da6484]                ; 005054ed | DAT_01da6484
    CMP EAX,dword ptr [ESI + 0x5]       ; 005054f2
    JGE 0x00505514                      ; 005054f5
        ;   XREF to: 00505514 (CONDITIONAL_JUMP)  ; LAB_00505514
    PUSH ESI                            ; 005054f7
    MOV EDI,dword ptr [EBP + 0x14]      ; 005054f8
    PUSH EDI                            ; 005054fb
    CALL core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00506b00 ; 005054fc
        ;   XREF to: 00506b00 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00506b00(CNetGame * this_ptr, UNetPacket * packet)
    ADD ESP,0x8                         ; 00505501
    TEST EAX,EAX                        ; 00505504
    JZ 0x00504b06                       ; 00505506
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [ESI + 0x5]       ; 0050550c
    MOV [0x01da6484],EAX                ; 0050550f | DAT_01da6484
    MOV dword ptr [ESP + 0xa4],0x9      ; 00505514
        ;   Label: LAB_00505514
    MOV byte ptr [ESP + 0xa8],0xc       ; 0050551f
    MOV EAX,[0x01da6484]                ; 00505527 | DAT_01da6484
    MOV dword ptr [ESP + 0xa9],EAX      ; 0050552c
    LEA EAX,[ESP + 0xa4]                ; 00505533
    PUSH EAX                            ; 0050553a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050553b
    MOV EDX,dword ptr [EAX + 0x120]     ; 0050553e
    PUSH EDX                            ; 00505544
    PUSH EAX                            ; 00505545
    CALL core_netgame.cpp_CNetGame_send_FUN_00505870 ; 00505546
        ;   XREF to: 00505870 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_00505870(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 0050554b
    MOV ESP,EBP                         ; 0050554e
    POP EBP                             ; 00505550
    POP EDI                             ; 00505551
    POP ESI                             ; 00505552
    POP EBX                             ; 00505553
    RET                                 ; 00505554
    MOV EAX,dword ptr [EBP + 0x14]      ; 00505555
        ;   Label: caseD_c
    MOV EDI,dword ptr [EAX]             ; 00505558
    CMP EDI,0x1                         ; 0050555a
    JNZ 0x005053b9                      ; 0050555d
        ;   XREF to: 005053b9 (CONDITIONAL_JUMP)  ; LAB_005053b9
    TEST EBX,EBX                        ; 00505563
    JL 0x005053b9                       ; 00505565
        ;   XREF to: 005053b9 (CONDITIONAL_JUMP)  ; LAB_005053b9
    CMP EDI,dword ptr [EAX + 0x4]       ; 0050556b
    JNZ 0x00504b06                      ; 0050556e
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00505574
    MOV ECX,dword ptr [ESI + 0x5]       ; 0050557b
    CMP ECX,dword ptr [EAX + 0x34]      ; 0050557e
    JL 0x00504b06                       ; 00505581
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDX,dword ptr [ESP + 0xd8]      ; 00505587
    MOV dword ptr [EDX + 0x34],ECX      ; 0050558e
    MOV ESP,EBP                         ; 00505591
    POP EBP                             ; 00505593
    POP EDI                             ; 00505594
    POP ESI                             ; 00505595
    POP EBX                             ; 00505596
    RET                                 ; 00505597
    CMP dword ptr [ESI + 0x5],0x0       ; 00505598
        ;   Label: caseD_d
    JNZ 0x00505628                      ; 0050559c
        ;   XREF to: 00505628 (CONDITIONAL_JUMP)  ; LAB_00505628
    MOV EAX,dword ptr [EBP + 0x14]      ; 005055a2
        ;   Label: LAB_005055a2
    CMP dword ptr [EAX],0x1             ; 005055a5
    JNZ 0x005055c4                      ; 005055a8
        ;   XREF to: 005055c4 (CONDITIONAL_JUMP)  ; LAB_005055c4
    TEST EBX,EBX                        ; 005055aa
    JL 0x005055b8                       ; 005055ac
        ;   XREF to: 005055b8 (CONDITIONAL_JUMP)  ; LAB_005055b8
    PUSH EBX                            ; 005055ae
    PUSH EAX                            ; 005055af
    CALL core_netgame.cpp_CNetGame_removePlayer_FUN_005071a0 ; 005055b0
        ;   XREF to: 005071a0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_removePlayer_FUN_005071a0(CNetGame * this_ptr, int player_index)
    ADD ESP,0x8                         ; 005055b5
    MOV ESI,dword ptr [EBP + 0x14]      ; 005055b8
        ;   Label: LAB_005055b8
    PUSH ESI                            ; 005055bb
    CALL core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00507370 ; 005055bc
        ;   XREF to: 00507370 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00507370(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 005055c1
    MOV EAX,dword ptr [EBP + 0x14]      ; 005055c4
        ;   Label: LAB_005055c4
    CMP dword ptr [EAX],0x2             ; 005055c7
    JNZ 0x00504b06                      ; 005055ca
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    TEST EBX,EBX                        ; 005055d0
    JL 0x00504b06                       ; 005055d2
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    CMP EBX,dword ptr [EAX + 0x120]     ; 005055d8
    JNZ 0x00504b06                      ; 005055de
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    PUSH 0x0                            ; 005055e4
    PUSH EAX                            ; 005055e6
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_005043b0 ; 005055e7
        ;   XREF to: 005043b0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_005043b0(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 005055ec
    PUSH 0x5caa17                       ; 005055ef | = "You have been disconnected from the game"
    PUSH 0x5caa40                       ; 005055f4 | DAT_005caa40
    PUSH 0x0                            ; 005055f9
    PUSH 0x0                            ; 005055fb
    MOV EBX,dword ptr [0x02cfd89c]      ; 005055fd | DAT_02cfd89c
    PUSH EBX                            ; 00505603
    LEA EAX,[ESP + 0xd0]                ; 00505604
    PUSH EAX                            ; 0050560b
    CALL support_trisock.cpp_createNetworkAddr_FUN_0056f730 ; 0050560c
        ;   XREF to: 0056f730 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_createNetworkAddr_FUN_0056f730()
    ADD ESP,0xc                         ; 00505611
    PUSH EAX                            ; 00505614
    MOV ESI,dword ptr [EBP + 0x14]      ; 00505615
    PUSH ESI                            ; 00505618
    CALL core_netgame.cpp_CNetGame_addChatHistory_FUN_00506a00 ; 00505619
        ;   XREF to: 00506a00 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_addChatHistory_FUN_00506a00(CNetGame * this_ptr, SNetworkAddr * sender_addr, int message_id, char * sender_name, ...)
    ADD ESP,0x14                        ; 0050561e
    MOV ESP,EBP                         ; 00505621
    POP EBP                             ; 00505623
    POP EDI                             ; 00505624
    POP ESI                             ; 00505625
    POP EBX                             ; 00505626
    RET                                 ; 00505627
    PUSH 0x0                            ; 00505628
        ;   Label: LAB_00505628
    MOV ESI,dword ptr [EBP + 0x18]      ; 0050562a
    PUSH ESI                            ; 0050562d
    MOV EDI,dword ptr [EBP + 0x14]      ; 0050562e
    PUSH EDI                            ; 00505631
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00507f90 ; 00505632
        ;   XREF to: 00507f90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 00505637
    JMP 0x005055a2                      ; 0050563a
        ;   XREF to: 005055a2 (UNCONDITIONAL_JUMP)  ; LAB_005055a2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050563f
        ;   Label: caseD_f
    MOV EDX,dword ptr [EAX]             ; 00505642
    MOV dword ptr [ESP + 0xc8],ESI      ; 00505644
    CMP EDX,0x2                         ; 0050564b
    JNZ 0x0050502a                      ; 0050564e
        ;   XREF to: 0050502a (CONDITIONAL_JUMP)  ; LAB_0050502a
    TEST EBX,EBX                        ; 00505654
    JL 0x0050502a                       ; 00505656
        ;   XREF to: 0050502a (CONDITIONAL_JUMP)  ; LAB_0050502a
    MOV ECX,dword ptr [EAX + 0x120]     ; 0050565c
    CMP EBX,ECX                         ; 00505662
    JNZ 0x0050502a                      ; 00505664
        ;   XREF to: 0050502a (CONDITIONAL_JUMP)  ; LAB_0050502a
    MOV EDI,dword ptr [0x01dc5c80]      ; 0050566a | DAT_01dc5c80
    MOV EAX,dword ptr [ESI + 0x5]       ; 00505670
    XOR EBX,ECX                         ; 00505673
    MOV ESI,EAX                         ; 00505675
    MOV dword ptr [ESP + 0xc4],EAX      ; 00505677
    TEST EDI,EDI                        ; 0050567e
    JLE 0x00505767                      ; 00505680
        ;   XREF to: 00505767 (CONDITIONAL_JUMP)  ; LAB_00505767
    LEA EDX,[EDI*0x8 + 0x0]             ; 00505686
    SUB EDX,EDI                         ; 0050568d
    SHL EDX,0x2                         ; 0050568f
    ADD EDX,EDI                         ; 00505692
    XOR EAX,EAX                         ; 00505694
    SHL EDX,0x2                         ; 00505696
    CMP ESI,dword ptr [EAX + 0x1dc5c84] ; 00505699
        ;   Label: LAB_00505699
    JNZ 0x0050575b                      ; 0050569f
        ;   XREF to: 0050575b (CONDITIONAL_JUMP)  ; LAB_0050575b
    TEST EBX,EBX                        ; 005056a5
    JL 0x00505767                       ; 005056a7
        ;   XREF to: 00505767 (CONDITIONAL_JUMP)  ; LAB_00505767
    ADD EAX,0x1dc5c84                   ; 005056ad
    MOV EDX,dword ptr [ESP + 0xc8]      ; 005056b2
        ;   Label: LAB_005056b2
    MOV EDX,dword ptr [EDX + 0x9]       ; 005056b9
    MOV dword ptr [EAX + 0x4],EDX       ; 005056bc
    MOV EDX,dword ptr [ESP + 0xc8]      ; 005056bf
    MOV dword ptr [ESP + 0xd0],EAX      ; 005056c6
    MOV ECX,dword ptr [EDX + 0xd]       ; 005056cd
    MOV dword ptr [EAX + 0x8],ECX       ; 005056d0
    MOV EAX,dword ptr [EBP + 0x14]      ; 005056d3
    MOV EDI,dword ptr [EAX + 0x1c]      ; 005056d6
    XOR EBX,EBX                         ; 005056d9
    TEST EDI,EDI                        ; 005056db
    JLE 0x00504b06                      ; 005056dd
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    MOV dword ptr [ESP + 0xdc],EDX      ; 005056e3
    MOV ESI,EBX                         ; 005056ea
        ;   Label: LAB_005056ea
    TEST EBX,EBX                        ; 005056ec
    JL 0x005057da                       ; 005056ee
        ;   XREF to: 005057da (CONDITIONAL_JUMP)  ; LAB_005057da
    CMP ESI,EBX                         ; 005056f4
        ;   Label: LAB_005056f4
    JZ 0x0050571b                       ; 005056f6
        ;   XREF to: 0050571b (CONDITIONAL_JUMP)  ; LAB_0050571b
    MOV EDX,0x5caa8d                    ; 005056f8 | = "..\\core\\netgame.cpp"
    MOV ECX,0x597                       ; 005056fd
    PUSH 0x5caaa1                       ; 00505702 | = "Player list mismatch!"
    MOV dword ptr [0x01d71de0],EDX      ; 00505707 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0050570d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00505713
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00505718
    IMUL ESI,ESI,0x34                   ; 0050571b
        ;   Label: LAB_0050571b
    ADD ESI,dword ptr [ESP + 0xd0]      ; 0050571e
    LEA EDI,[ESI + 0xc]                 ; 00505725
    MOV ESI,dword ptr [ESP + 0xdc]      ; 00505728
    MOV ECX,0xd                         ; 0050572f
    MOV EDX,dword ptr [ESP + 0xdc]      ; 00505734
    LEA ESI,[ESI + 0x11]                ; 0050573b
    INC EBX                             ; 0050573e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050573f
    MOVSD.REP ES:EDI,ESI                ; 00505742
    ADD EDX,0x34                        ; 00505744
    MOV ECX,dword ptr [EAX + 0x1c]      ; 00505747
    MOV dword ptr [ESP + 0xdc],EDX      ; 0050574a
    CMP EBX,ECX                         ; 00505751
    JGE 0x00504b06                      ; 00505753
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    JMP 0x005056ea                      ; 00505759
        ;   XREF to: 005056ea (UNCONDITIONAL_JUMP)  ; LAB_005056ea
    ADD EAX,0x74                        ; 0050575b
        ;   Label: LAB_0050575b
    INC EBX                             ; 0050575e
    CMP EAX,EDX                         ; 0050575f
    JL 0x00505699                       ; 00505761
        ;   XREF to: 00505699 (CONDITIONAL_JUMP)  ; LAB_00505699
    CMP dword ptr [0x01dc5c80],0x200    ; 00505767 | DAT_01dc5c80
        ;   Label: LAB_00505767
    JL 0x00505796                       ; 00505771
        ;   XREF to: 00505796 (CONDITIONAL_JUMP)  ; LAB_00505796
    MOV EDX,0x5ca43b                    ; 00505773 | = "..\\core\\netgame.cpp"
    MOV ECX,0x12b                       ; 00505778
    PUSH 0x5ca44f                       ; 0050577d | = "allocSimFrame - sim history list full"
    MOV dword ptr [0x01d71de0],EDX      ; 00505782 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00505788 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050578e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00505793
    MOV EDX,dword ptr [0x01dc5c80]      ; 00505796 | DAT_01dc5c80
        ;   Label: LAB_00505796
    LEA EAX,[EDX*0x8 + 0x0]             ; 0050579c
    SUB EAX,EDX                         ; 005057a3
    SHL EAX,0x2                         ; 005057a5
    MOV EBX,0x1dc5c84                   ; 005057a8
    ADD EAX,EDX                         ; 005057ad
    PUSH 0x74                           ; 005057af
    SHL EAX,0x2                         ; 005057b1
    PUSH 0x0                            ; 005057b4
    ADD EBX,EAX                         ; 005057b6
    LEA ESI,[EDX + 0x1]                 ; 005057b8
    PUSH EBX                            ; 005057bb
    MOV dword ptr [0x01dc5c80],ESI      ; 005057bc | DAT_01dc5c80
    CALL crt_memory.c_memset_FUN_005a28f0 ; 005057c2
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005057c7
    MOV EAX,dword ptr [ESP + 0xc4]      ; 005057ca
    MOV dword ptr [EBX],EAX             ; 005057d1
    MOV EAX,EBX                         ; 005057d3
    JMP 0x005056b2                      ; 005057d5
        ;   XREF to: 005056b2 (UNCONDITIONAL_JUMP)  ; LAB_005056b2
    MOV EDI,0x5caa41                    ; 005057da | = "..\\core\\netgame.cpp"
        ;   Label: LAB_005057da
    MOV EAX,0x596                       ; 005057df
    PUSH 0x5caa55                       ; 005057e4 | = "Player list mismatch processing SimFr..."
    MOV dword ptr [0x01d71de0],EDI      ; 005057e9 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 005057ef | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005057f4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 005057f9
    JMP 0x005056f4                      ; 005057fc
        ;   XREF to: 005056f4 (UNCONDITIONAL_JUMP)  ; LAB_005056f4
    MOV EAX,dword ptr [EBP + 0x14]      ; 00505801
        ;   Label: caseD_10
    CMP dword ptr [EAX],0x1             ; 00505804
    JNZ 0x0050584a                      ; 00505807
        ;   XREF to: 0050584a (CONDITIONAL_JUMP)  ; LAB_0050584a
    TEST EBX,EBX                        ; 00505809
    JL 0x0050584a                       ; 0050580b
        ;   XREF to: 0050584a (CONDITIONAL_JUMP)  ; LAB_0050584a
    CMP dword ptr [EAX + 0x4],0x3       ; 0050580d
    JNZ 0x00504b06                      ; 00505811
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00505817
    MOV EBX,dword ptr [ESI + 0x5]       ; 0050581e
    CMP EBX,dword ptr [EAX + 0x48]      ; 00505821
    JLE 0x00504b06                      ; 00505824
        ;   XREF to: 00504b06 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0050582a
    MOV EDI,EDX                         ; 00505831
    MOV dword ptr [EDX + 0x48],EBX      ; 00505833
    MOV ECX,0xd                         ; 00505836
    LEA EDI,[EDI + 0x4c]                ; 0050583b
    LEA ESI,[ESI + 0x9]                 ; 0050583e
    MOVSD.REP ES:EDI,ESI                ; 00505841
    MOV ESP,EBP                         ; 00505843
    POP EBP                             ; 00505845
    POP EDI                             ; 00505846
    POP ESI                             ; 00505847
    POP EBX                             ; 00505848
    RET                                 ; 00505849
    PUSH 0x0                            ; 0050584a
        ;   Label: LAB_0050584a
    MOV ESI,dword ptr [EBP + 0x18]      ; 0050584c
    PUSH ESI                            ; 0050584f
    MOV EDI,dword ptr [EBP + 0x14]      ; 00505850
    PUSH EDI                            ; 00505853
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00507f90 ; 00505854
        ;   XREF to: 00507f90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 00505859
    MOV ESP,EBP                         ; 0050585c
    POP EBP                             ; 0050585e
    POP EDI                             ; 0050585f
    POP ESI                             ; 00505860
    POP EBX                             ; 00505861
    RET                                 ; 00505862

