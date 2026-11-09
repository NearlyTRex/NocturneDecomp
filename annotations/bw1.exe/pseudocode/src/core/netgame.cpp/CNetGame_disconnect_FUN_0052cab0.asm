; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(CNetGame *this_ptr,int perform_handshake)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   perform_handshake
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[8]:
;   core_game.cpp_FUN_004cf5e0 at 004cfbcf
;   core_game.cpp_joinNetworkGame_FUN_004d7e90 at 004d7f27
;   core_netgame.cpp_CNetGame_init_FUN_0052c520 at 0052c5a6
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0052c6b0 at 0052c6c2
;   core_netgame.cpp_CNetGame_runLobby_FUN_0052e120 at 0052e46b
;   core_netgame.cpp_FUN_0052c5d0 at 0052c5d7
;   core_netgame.cpp_FUN_0052c5fc at 0052c621
;   core_netgame.cpp_FUN_0052d450 at 0052dccc
;
; Referenced Globals:
;   TerminatedCString s_Disconnecting_from_serve_005eb85a
;   TerminatedCString s_Couldn_t_contact_server_005eb877
;   TerminatedCString s_Disconnecting_005eb89e
;   TerminatedCString s_Couldn_t_connect_to_all_005eb8af
;   undefined4 DAT_005eb8e0
;   undefined4 DAT_005eb8e8
;   undefined4 DAT_005eb8f0
;   undefined4 DAT_005eb8f8
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   undefined4 DAT_01d51d9c
;   undefined4 DAT_01d51da0
;   undefined4 DAT_01d51da8
;   undefined4 DAT_01d51dac
;   undefined4 DAT_01d51db4
;   undefined4 DAT_01d6dfb8
;
; Called Functions:
;   core_netgame.cpp_CNetGame_receivePackets_FUN_0052d360
;   core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_005306d0
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_004942e0
;   shape_edittool.cpp_FUN_004961b0
;   shape_edittool.cpp_FUN_004962b0
;   shape_edittool.cpp_FUN_00496dd0
;   wincore_winrun.cpp_FUN_005b2420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052cab0
        ;   Label: core_netgame.cpp_CNetGame_disconnect_FUN_0052cab0
    PUSH ESI                            ; 0052cab1
    PUSH EDI                            ; 0052cab2
    PUSH EBP                            ; 0052cab3
    MOV EBP,ESP                         ; 0052cab4
    SUB ESP,0x20                        ; 0052cab6
    AND ESP,0xfffffff8                  ; 0052cab9
    MOV ESI,dword ptr [EBP + 0x14]      ; 0052cabc
    CMP dword ptr [EBP + 0x18],0x0      ; 0052cabf
    JZ 0x0052cad3                       ; 0052cac3
        ;   XREF to: 0052cad3 (CONDITIONAL_JUMP)  ; LAB_0052cad3
    CMP dword ptr [ESI],0x2             ; 0052cac5
    JZ 0x0052cb25                       ; 0052cac8
        ;   XREF to: 0052cb25 (CONDITIONAL_JUMP)  ; LAB_0052cb25
    CMP dword ptr [ESI],0x1             ; 0052caca
        ;   Label: LAB_0052caca
    JZ 0x0052cd44                       ; 0052cacd
        ;   XREF to: 0052cd44 (CONDITIONAL_JUMP)  ; LAB_0052cd44
    MOV dword ptr [ESI + 0x4],0x0       ; 0052cad3
        ;   Label: LAB_0052cad3
    MOV dword ptr [ESI + 0x11c],0xffffffff ; 0052cada
    MOV dword ptr [ESI + 0x118],0xffffffff ; 0052cae4
    MOV byte ptr [ESI + 0x120],0x0      ; 0052caee
    XOR EDX,EDX                         ; 0052caf5
    MOV dword ptr [ESI],0x0             ; 0052caf7
    MOV dword ptr [0x01d51db4],EDX      ; 0052cafd | DAT_01d51db4
    MOV dword ptr [0x01d6dfb8],EDX      ; 0052cb03 | DAT_01d6dfb8
    MOV dword ptr [0x01d51da8],EDX      ; 0052cb09 | DAT_01d51da8
    MOV dword ptr [ESI + 0x1c],EDX      ; 0052cb0f
    MOV dword ptr [0x01d51dac],EDX      ; 0052cb12 | DAT_01d51dac
    MOV dword ptr [ESI + 0x170],EDX     ; 0052cb18
    MOV ESP,EBP                         ; 0052cb1e
    POP EBP                             ; 0052cb20
    POP EDI                             ; 0052cb21
    POP ESI                             ; 0052cb22
    POP EBX                             ; 0052cb23
    RET                                 ; 0052cb24
    PUSH 0x5eb85a                       ; 0052cb25 | = "Disconnecting from server..."
        ;   Label: LAB_0052cb25
    MOV EBX,dword ptr [0x0061abc0]      ; 0052cb2a | g_CEditorToolsPtr
    PUSH EBX                            ; 0052cb30
    CALL shape_edittool.cpp_FUN_004961b0 ; 0052cb31
        ;   XREF to: 004961b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_004961b0(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 0052cb36
    CALL wincore_winrun.cpp_FUN_005b2420 ; 0052cb39
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b2420()
    MOV EDX,EAX                         ; 0052cb3e
    MOV EBX,0x12                        ; 0052cb40
    SAR EDX,0x1f                        ; 0052cb45
    IDIV EBX                            ; 0052cb48
    MOV EDI,dword ptr [0x01d51d9c]      ; 0052cb4a | DAT_01d51d9c
    MOV EDX,EAX                         ; 0052cb50
    SUB EAX,EDI                         ; 0052cb52
    MOV dword ptr [0x01d51d9c],EDX      ; 0052cb54 | DAT_01d51d9c
    TEST EAX,EAX                        ; 0052cb5a
    JL 0x0052cc38                       ; 0052cb5c
        ;   XREF to: 0052cc38 (CONDITIONAL_JUMP)  ; LAB_0052cc38
    CMP EAX,0x20000                     ; 0052cb62
    JLE 0x0052cb6e                      ; 0052cb67
        ;   XREF to: 0052cb6e (CONDITIONAL_JUMP)  ; LAB_0052cb6e
    MOV EAX,0x20000                     ; 0052cb69
    MOV EDX,dword ptr [0x01d51da0]      ; 0052cb6e | DAT_01d51da0
        ;   Label: LAB_0052cb6e
    ADD EDX,EAX                         ; 0052cb74
    MOV ECX,dword ptr [ESI + 0x118]     ; 0052cb76
    MOV EDI,EDX                         ; 0052cb7c
    MOV dword ptr [0x01d51da0],EDX      ; 0052cb7e | DAT_01d51da0
    LEA EBX,[EDX + 0xffe20000]          ; 0052cb84
    TEST ECX,ECX                        ; 0052cb8a
    JL 0x0052cc24                       ; 0052cb8c
        ;   XREF to: 0052cc24 (CONDITIONAL_JUMP)  ; LAB_0052cc24
    LEA EAX,[ESI + 0x20]                ; 0052cb92
    MOV dword ptr [ESP + 0x10],EAX      ; 0052cb95
    CALL wincore_winrun.cpp_FUN_005b2420 ; 0052cb99
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b2420()
        ;   Label: LAB_0052cb99
    MOV EDX,EAX                         ; 0052cb9e
    MOV ECX,0x12                        ; 0052cba0
    SAR EDX,0x1f                        ; 0052cba5
    IDIV ECX                            ; 0052cba8
    MOV ECX,dword ptr [0x01d51d9c]      ; 0052cbaa | DAT_01d51d9c
    MOV EDX,EAX                         ; 0052cbb0
    SUB EAX,ECX                         ; 0052cbb2
    MOV dword ptr [0x01d51d9c],EDX      ; 0052cbb4 | DAT_01d51d9c
    TEST EAX,EAX                        ; 0052cbba
    JL 0x0052cc3f                       ; 0052cbbc
        ;   XREF to: 0052cc3f (CONDITIONAL_JUMP)  ; LAB_0052cc3f
    CMP EAX,0x20000                     ; 0052cbc2
    JLE 0x0052cbce                      ; 0052cbc7
        ;   XREF to: 0052cbce (CONDITIONAL_JUMP)  ; LAB_0052cbce
    MOV EAX,0x20000                     ; 0052cbc9
    MOV EDX,dword ptr [0x01d51da0]      ; 0052cbce | DAT_01d51da0
        ;   Label: LAB_0052cbce
    ADD EDX,EAX                         ; 0052cbd4
    MOV EAX,EDX                         ; 0052cbd6
    SUB EAX,EDI                         ; 0052cbd8
    MOV dword ptr [ESP + 0x1c],EAX      ; 0052cbda
    FILD dword ptr [ESP + 0x1c]         ; 0052cbde
    FMUL double ptr [0x005eb8e0]        ; 0052cbe2 | DAT_005eb8e0
    MOV dword ptr [0x01d51da0],EDX      ; 0052cbe8 | DAT_01d51da0
    FST float ptr [ESP + 0xc]           ; 0052cbee
    FLDZ                                ; 0052cbf2
    FCOMPP                              ; 0052cbf4
    FNSTSW AX                           ; 0052cbf6
    SAHF                                ; 0052cbf8
    JBE 0x0052cc01                      ; 0052cbf9
        ;   XREF to: 0052cc01 (CONDITIONAL_JUMP)  ; LAB_0052cc01
    XOR ECX,ECX                         ; 0052cbfb
    MOV dword ptr [ESP + 0xc],ECX       ; 0052cbfd
    FLD float ptr [ESP + 0xc]           ; 0052cc01
        ;   Label: LAB_0052cc01
    FCOMP double ptr [0x005eb8f0]       ; 0052cc05 | DAT_005eb8f0
    FNSTSW AX                           ; 0052cc0b
    SAHF                                ; 0052cc0d
    JBE 0x0052cc43                      ; 0052cc0e
        ;   XREF to: 0052cc43 (CONDITIONAL_JUMP)  ; LAB_0052cc43
    PUSH 0x5eb877                       ; 0052cc10 | = "Couldn't contact server to disconnect."
        ;   Label: LAB_0052cc10
    MOV EBX,dword ptr [0x0061abc0]      ; 0052cc15 | g_CEditorToolsPtr
    PUSH EBX                            ; 0052cc1b
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_004942e0 ; 0052cc1c
        ;   XREF to: 004942e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_004942e0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0052cc21
    MOV EDI,dword ptr [0x0061abc0]      ; 0052cc24 | g_CEditorToolsPtr
        ;   Label: LAB_0052cc24
    PUSH EDI                            ; 0052cc2a
    CALL shape_edittool.cpp_FUN_00496dd0 ; 0052cc2b
        ;   XREF to: 00496dd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00496dd0()
    ADD ESP,0x4                         ; 0052cc30
    JMP 0x0052caca                      ; 0052cc33
        ;   XREF to: 0052caca (UNCONDITIONAL_JUMP)  ; LAB_0052caca
    XOR EAX,EAX                         ; 0052cc38
        ;   Label: LAB_0052cc38
    JMP 0x0052cb6e                      ; 0052cc3a
        ;   XREF to: 0052cb6e (UNCONDITIONAL_JUMP)  ; LAB_0052cb6e
    XOR EAX,EAX                         ; 0052cc3f
        ;   Label: LAB_0052cc3f
    JMP 0x0052cbce                      ; 0052cc41
        ;   XREF to: 0052cbce (UNCONDITIONAL_JUMP)  ; LAB_0052cbce
    CMP dword ptr [ESP + 0xc],0x40400000 ; 0052cc43
        ;   Label: LAB_0052cc43
    JG 0x0052cc10                       ; 0052cc4b
        ;   XREF to: 0052cc10 (CONDITIONAL_JUMP)  ; LAB_0052cc10
    FLD float ptr [ESP + 0xc]           ; 0052cc4d
    FMUL float ptr [0x005eb8e8]         ; 0052cc51 | DAT_005eb8e8
    PUSH 0x453b8000                     ; 0052cc57
    SUB ESP,0x4                         ; 0052cc5c
    MOV ECX,dword ptr [0x0061abc0]      ; 0052cc5f | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 0052cc65
    PUSH ECX                            ; 0052cc68
    CALL shape_edittool.cpp_FUN_004962b0 ; 0052cc69
        ;   XREF to: 004962b0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004962b0()
    ADD ESP,0xc                         ; 0052cc6e
    MOV EAX,[0x01d51da0]                ; 0052cc71 | DAT_01d51da0
        ;   Label: LAB_0052cc71
    SUB EAX,EBX                         ; 0052cc76
    MOV dword ptr [ESP + 0x1c],EAX      ; 0052cc78
    FILD dword ptr [ESP + 0x1c]         ; 0052cc7c
    FMUL double ptr [0x005eb8e0]        ; 0052cc80 | DAT_005eb8e0
    FST float ptr [ESP]                 ; 0052cc86
    FLDZ                                ; 0052cc89
    FCOMPP                              ; 0052cc8b
    FNSTSW AX                           ; 0052cc8d
    SAHF                                ; 0052cc8f
    JBE 0x0052cc97                      ; 0052cc90
        ;   XREF to: 0052cc97 (CONDITIONAL_JUMP)  ; LAB_0052cc97
    XOR EAX,EAX                         ; 0052cc92
    MOV dword ptr [ESP],EAX             ; 0052cc94
    FLD float ptr [ESP]                 ; 0052cc97
        ;   Label: LAB_0052cc97
    FCOMP double ptr [0x005eb8f0]       ; 0052cc9a | DAT_005eb8f0
    FNSTSW AX                           ; 0052cca0
    SAHF                                ; 0052cca2
    JBE 0x0052ccac                      ; 0052cca3
        ;   XREF to: 0052ccac (CONDITIONAL_JUMP)  ; LAB_0052ccac
    MOV dword ptr [ESP],0x41f00000      ; 0052cca5
    FLD float ptr [ESP]                 ; 0052ccac
        ;   Label: LAB_0052ccac
    FCOMP double ptr [0x005eb8f8]       ; 0052ccaf | DAT_005eb8f8
    FNSTSW AX                           ; 0052ccb5
    SAHF                                ; 0052ccb7
    JNC 0x0052ccf9                      ; 0052ccb8
        ;   XREF to: 0052ccf9 (CONDITIONAL_JUMP)  ; LAB_0052ccf9
    CALL wincore_winrun.cpp_FUN_005b2420 ; 0052ccba
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b2420()
    MOV EDX,EAX                         ; 0052ccbf
    MOV ECX,0x12                        ; 0052ccc1
    SAR EDX,0x1f                        ; 0052ccc6
    IDIV ECX                            ; 0052ccc9
    MOV ECX,dword ptr [0x01d51d9c]      ; 0052cccb | DAT_01d51d9c
    MOV EDX,EAX                         ; 0052ccd1
    SUB EAX,ECX                         ; 0052ccd3
    MOV dword ptr [0x01d51d9c],EDX      ; 0052ccd5 | DAT_01d51d9c
    TEST EAX,EAX                        ; 0052ccdb
    JL 0x0052ccee                       ; 0052ccdd
        ;   XREF to: 0052ccee (CONDITIONAL_JUMP)  ; LAB_0052ccee
    CMP EAX,0x20000                     ; 0052ccdf
    JG 0x0052ccf2                       ; 0052cce4
        ;   XREF to: 0052ccf2 (CONDITIONAL_JUMP)  ; LAB_0052ccf2
    ADD dword ptr [0x01d51da0],EAX      ; 0052cce6 | DAT_01d51da0
        ;   Label: LAB_0052cce6
    JMP 0x0052cc71                      ; 0052ccec
        ;   XREF to: 0052cc71 (UNCONDITIONAL_JUMP)  ; LAB_0052cc71
    XOR EAX,EAX                         ; 0052ccee
        ;   Label: LAB_0052ccee
    JMP 0x0052cce6                      ; 0052ccf0
        ;   XREF to: 0052cce6 (UNCONDITIONAL_JUMP)  ; LAB_0052cce6
    MOV EAX,0x20000                     ; 0052ccf2
        ;   Label: LAB_0052ccf2
    JMP 0x0052cce6                      ; 0052ccf7
        ;   XREF to: 0052cce6 (UNCONDITIONAL_JUMP)  ; LAB_0052cce6
    IMUL EAX,dword ptr [ESI + 0x118],0x7c ; 0052ccf9
        ;   Label: LAB_0052ccf9
    ADD EAX,dword ptr [ESP + 0x10]      ; 0052cd00
    PUSH 0x1                            ; 0052cd04
    ADD EAX,0x1c                        ; 0052cd06
    PUSH EAX                            ; 0052cd09
    PUSH ESI                            ; 0052cd0a
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_005306d0 ; 0052cd0b
        ;   XREF to: 005306d0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_005306d0(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 0052cd10
    PUSH ESI                            ; 0052cd13
    MOV EBX,dword ptr [0x01d51da0]      ; 0052cd14 | DAT_01d51da0
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_0052d360 ; 0052cd1a
        ;   XREF to: 0052d360 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_0052d360(CNetGame * this_ptr)
    MOV ECX,dword ptr [ESI + 0x118]     ; 0052cd1f
    ADD ESP,0x4                         ; 0052cd25
    TEST ECX,ECX                        ; 0052cd28
    JGE 0x0052cb99                      ; 0052cd2a
        ;   XREF to: 0052cb99 (CONDITIONAL_JUMP)  ; LAB_0052cb99
    MOV EDI,dword ptr [0x0061abc0]      ; 0052cd30 | g_CEditorToolsPtr
    PUSH EDI                            ; 0052cd36
    CALL shape_edittool.cpp_FUN_00496dd0 ; 0052cd37
        ;   XREF to: 00496dd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00496dd0()
    ADD ESP,0x4                         ; 0052cd3c
    JMP 0x0052caca                      ; 0052cd3f
        ;   XREF to: 0052caca (UNCONDITIONAL_JUMP)  ; LAB_0052caca
    PUSH 0x5eb89e                       ; 0052cd44 | = "Disconnecting..."
        ;   Label: LAB_0052cd44
    MOV EBX,dword ptr [0x0061abc0]      ; 0052cd49 | g_CEditorToolsPtr
    PUSH EBX                            ; 0052cd4f
    CALL shape_edittool.cpp_FUN_004961b0 ; 0052cd50
        ;   XREF to: 004961b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_004961b0(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 0052cd55
    CALL wincore_winrun.cpp_FUN_005b2420 ; 0052cd58
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b2420()
    MOV EDX,EAX                         ; 0052cd5d
    MOV EBX,0x12                        ; 0052cd5f
    SAR EDX,0x1f                        ; 0052cd64
    IDIV EBX                            ; 0052cd67
    MOV EDI,dword ptr [0x01d51d9c]      ; 0052cd69 | DAT_01d51d9c
    MOV EDX,EAX                         ; 0052cd6f
    SUB EAX,EDI                         ; 0052cd71
    MOV dword ptr [0x01d51d9c],EDX      ; 0052cd73 | DAT_01d51d9c
    TEST EAX,EAX                        ; 0052cd79
    JL 0x0052ce5b                       ; 0052cd7b
        ;   XREF to: 0052ce5b (CONDITIONAL_JUMP)  ; LAB_0052ce5b
    CMP EAX,0x20000                     ; 0052cd81
    JLE 0x0052cd8d                      ; 0052cd86
        ;   XREF to: 0052cd8d (CONDITIONAL_JUMP)  ; LAB_0052cd8d
    MOV EAX,0x20000                     ; 0052cd88
    MOV EDX,dword ptr [0x01d51da0]      ; 0052cd8d | DAT_01d51da0
        ;   Label: LAB_0052cd8d
    ADD EDX,EAX                         ; 0052cd93
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0052cd95
    MOV dword ptr [ESP + 0x18],EDX      ; 0052cd98
    MOV dword ptr [0x01d51da0],EDX      ; 0052cd9c | DAT_01d51da0
    LEA EBX,[EDX + 0xffe20000]          ; 0052cda2
    CMP ECX,0x1                         ; 0052cda8
    JLE 0x0052ce47                      ; 0052cdab
        ;   XREF to: 0052ce47 (CONDITIONAL_JUMP)  ; LAB_0052ce47
    LEA EAX,[ESI + 0x20]                ; 0052cdb1
    MOV dword ptr [ESP + 0x14],EAX      ; 0052cdb4
    CALL wincore_winrun.cpp_FUN_005b2420 ; 0052cdb8
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b2420()
        ;   Label: LAB_0052cdb8
    MOV EDX,EAX                         ; 0052cdbd
    MOV ECX,0x12                        ; 0052cdbf
    SAR EDX,0x1f                        ; 0052cdc4
    IDIV ECX                            ; 0052cdc7
    MOV ECX,dword ptr [0x01d51d9c]      ; 0052cdc9 | DAT_01d51d9c
    MOV EDX,EAX                         ; 0052cdcf
    SUB EAX,ECX                         ; 0052cdd1
    MOV dword ptr [0x01d51d9c],EDX      ; 0052cdd3 | DAT_01d51d9c
    TEST EAX,EAX                        ; 0052cdd9
    JL 0x0052ce62                       ; 0052cddb
        ;   XREF to: 0052ce62 (CONDITIONAL_JUMP)  ; LAB_0052ce62
    CMP EAX,0x20000                     ; 0052cde1
    JLE 0x0052cded                      ; 0052cde6
        ;   XREF to: 0052cded (CONDITIONAL_JUMP)  ; LAB_0052cded
    MOV EAX,0x20000                     ; 0052cde8
    MOV EDI,dword ptr [0x01d51da0]      ; 0052cded | DAT_01d51da0
        ;   Label: LAB_0052cded
    ADD EDI,EAX                         ; 0052cdf3
    MOV EDX,dword ptr [ESP + 0x18]      ; 0052cdf5
    MOV EAX,EDI                         ; 0052cdf9
    SUB EAX,EDX                         ; 0052cdfb
    MOV dword ptr [ESP + 0x1c],EAX      ; 0052cdfd
    FILD dword ptr [ESP + 0x1c]         ; 0052ce01
    FMUL double ptr [0x005eb8e0]        ; 0052ce05 | DAT_005eb8e0
    MOV dword ptr [0x01d51da0],EDI      ; 0052ce0b | DAT_01d51da0
    FST float ptr [ESP + 0x4]           ; 0052ce11
    FLDZ                                ; 0052ce15
    FCOMPP                              ; 0052ce17
    FNSTSW AX                           ; 0052ce19
    SAHF                                ; 0052ce1b
    JBE 0x0052ce24                      ; 0052ce1c
        ;   XREF to: 0052ce24 (CONDITIONAL_JUMP)  ; LAB_0052ce24
    XOR ECX,ECX                         ; 0052ce1e
    MOV dword ptr [ESP + 0x4],ECX       ; 0052ce20
    FLD float ptr [ESP + 0x4]           ; 0052ce24
        ;   Label: LAB_0052ce24
    FCOMP double ptr [0x005eb8f0]       ; 0052ce28 | DAT_005eb8f0
    FNSTSW AX                           ; 0052ce2e
    SAHF                                ; 0052ce30
    JBE 0x0052ce66                      ; 0052ce31
        ;   XREF to: 0052ce66 (CONDITIONAL_JUMP)  ; LAB_0052ce66
    PUSH 0x5eb8af                       ; 0052ce33 | = "Couldn't connect to all clients to di..."
        ;   Label: LAB_0052ce33
    MOV EDX,dword ptr [0x0061abc0]      ; 0052ce38 | g_CEditorToolsPtr
    PUSH EDX                            ; 0052ce3e
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_004942e0 ; 0052ce3f
        ;   XREF to: 004942e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_004942e0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0052ce44
    MOV ECX,dword ptr [0x0061abc0]      ; 0052ce47 | g_CEditorToolsPtr
        ;   Label: LAB_0052ce47
    PUSH ECX                            ; 0052ce4d
    CALL shape_edittool.cpp_FUN_00496dd0 ; 0052ce4e
        ;   XREF to: 00496dd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00496dd0()
    ADD ESP,0x4                         ; 0052ce53
    JMP 0x0052cad3                      ; 0052ce56
        ;   XREF to: 0052cad3 (UNCONDITIONAL_JUMP)  ; LAB_0052cad3
    XOR EAX,EAX                         ; 0052ce5b
        ;   Label: LAB_0052ce5b
    JMP 0x0052cd8d                      ; 0052ce5d
        ;   XREF to: 0052cd8d (UNCONDITIONAL_JUMP)  ; LAB_0052cd8d
    XOR EAX,EAX                         ; 0052ce62
        ;   Label: LAB_0052ce62
    JMP 0x0052cded                      ; 0052ce64
        ;   XREF to: 0052cded (UNCONDITIONAL_JUMP)  ; LAB_0052cded
    CMP dword ptr [ESP + 0x4],0x40a00000 ; 0052ce66
        ;   Label: LAB_0052ce66
    JG 0x0052ce33                       ; 0052ce6e
        ;   XREF to: 0052ce33 (CONDITIONAL_JUMP)  ; LAB_0052ce33
    FLD float ptr [ESP + 0x4]           ; 0052ce70
    FMUL float ptr [0x005eb8e8]         ; 0052ce74 | DAT_005eb8e8
    PUSH 0x459c4000                     ; 0052ce7a
    SUB ESP,0x4                         ; 0052ce7f
    MOV EAX,[0x0061abc0]                ; 0052ce82 | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 0052ce87
    PUSH EAX                            ; 0052ce8a
    MOV EDI,0x20000                     ; 0052ce8b
    CALL shape_edittool.cpp_FUN_004962b0 ; 0052ce90
        ;   XREF to: 004962b0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004962b0()
    ADD ESP,0xc                         ; 0052ce95
    MOV EAX,[0x01d51da0]                ; 0052ce98 | DAT_01d51da0
        ;   Label: LAB_0052ce98
    SUB EAX,EBX                         ; 0052ce9d
    MOV dword ptr [ESP + 0x1c],EAX      ; 0052ce9f
    FILD dword ptr [ESP + 0x1c]         ; 0052cea3
    FMUL double ptr [0x005eb8e0]        ; 0052cea7 | DAT_005eb8e0
    FST float ptr [ESP + 0x8]           ; 0052cead
    FLDZ                                ; 0052ceb1
    FCOMPP                              ; 0052ceb3
    FNSTSW AX                           ; 0052ceb5
    SAHF                                ; 0052ceb7
    JBE 0x0052cec0                      ; 0052ceb8
        ;   XREF to: 0052cec0 (CONDITIONAL_JUMP)  ; LAB_0052cec0
    XOR EAX,EAX                         ; 0052ceba
    MOV dword ptr [ESP + 0x8],EAX       ; 0052cebc
    FLD float ptr [ESP + 0x8]           ; 0052cec0
        ;   Label: LAB_0052cec0
    FCOMP double ptr [0x005eb8f0]       ; 0052cec4 | DAT_005eb8f0
    FNSTSW AX                           ; 0052ceca
    SAHF                                ; 0052cecc
    JBE 0x0052ced7                      ; 0052cecd
        ;   XREF to: 0052ced7 (CONDITIONAL_JUMP)  ; LAB_0052ced7
    MOV dword ptr [ESP + 0x8],0x41f00000 ; 0052cecf
    FLD float ptr [ESP + 0x8]           ; 0052ced7
        ;   Label: LAB_0052ced7
    FCOMP double ptr [0x005eb8f8]       ; 0052cedb | DAT_005eb8f8
    FNSTSW AX                           ; 0052cee1
    SAHF                                ; 0052cee3
    JNC 0x0052cf25                      ; 0052cee4
        ;   XREF to: 0052cf25 (CONDITIONAL_JUMP)  ; LAB_0052cf25
    CALL wincore_winrun.cpp_FUN_005b2420 ; 0052cee6
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b2420()
    MOV EDX,EAX                         ; 0052ceeb
    MOV ECX,0x12                        ; 0052ceed
    SAR EDX,0x1f                        ; 0052cef2
    IDIV ECX                            ; 0052cef5
    MOV ECX,dword ptr [0x01d51d9c]      ; 0052cef7 | DAT_01d51d9c
    MOV EDX,EAX                         ; 0052cefd
    SUB EAX,ECX                         ; 0052ceff
    MOV dword ptr [0x01d51d9c],EDX      ; 0052cf01 | DAT_01d51d9c
    TEST EAX,EAX                        ; 0052cf07
    JL 0x0052cf1d                       ; 0052cf09
        ;   XREF to: 0052cf1d (CONDITIONAL_JUMP)  ; LAB_0052cf1d
    CMP EAX,0x20000                     ; 0052cf0b
    JG 0x0052cf21                       ; 0052cf10
        ;   XREF to: 0052cf21 (CONDITIONAL_JUMP)  ; LAB_0052cf21
    ADD dword ptr [0x01d51da0],EAX      ; 0052cf12 | DAT_01d51da0
        ;   Label: LAB_0052cf12
    JMP 0x0052ce98                      ; 0052cf18
        ;   XREF to: 0052ce98 (UNCONDITIONAL_JUMP)  ; LAB_0052ce98
    XOR EAX,EAX                         ; 0052cf1d
        ;   Label: LAB_0052cf1d
    JMP 0x0052cf12                      ; 0052cf1f
        ;   XREF to: 0052cf12 (UNCONDITIONAL_JUMP)  ; LAB_0052cf12
    MOV EAX,EDI                         ; 0052cf21
        ;   Label: LAB_0052cf21
    JMP 0x0052cf12                      ; 0052cf23
        ;   XREF to: 0052cf12 (UNCONDITIONAL_JUMP)  ; LAB_0052cf12
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0052cf25
        ;   Label: LAB_0052cf25
    XOR EBX,EBX                         ; 0052cf28
    TEST ECX,ECX                        ; 0052cf2a
    JLE 0x0052cf54                      ; 0052cf2c
        ;   XREF to: 0052cf54 (CONDITIONAL_JUMP)  ; LAB_0052cf54
    MOV EDI,dword ptr [ESP + 0x14]      ; 0052cf2e
    ADD EDI,0x1c                        ; 0052cf32
    CMP EBX,dword ptr [ESI + 0x11c]     ; 0052cf35
        ;   Label: LAB_0052cf35
    JZ 0x0052cf49                       ; 0052cf3b
        ;   XREF to: 0052cf49 (CONDITIONAL_JUMP)  ; LAB_0052cf49
    PUSH 0x1                            ; 0052cf3d
    PUSH EDI                            ; 0052cf3f
    PUSH ESI                            ; 0052cf40
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_005306d0 ; 0052cf41
        ;   XREF to: 005306d0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_005306d0(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 0052cf46
    INC EBX                             ; 0052cf49
        ;   Label: LAB_0052cf49
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0052cf4a
    ADD EDI,0x7c                        ; 0052cf4d
    CMP EBX,ECX                         ; 0052cf50
    JL 0x0052cf35                       ; 0052cf52
        ;   XREF to: 0052cf35 (CONDITIONAL_JUMP)  ; LAB_0052cf35
    PUSH ESI                            ; 0052cf54
        ;   Label: LAB_0052cf54
    MOV EBX,dword ptr [0x01d51da0]      ; 0052cf55 | DAT_01d51da0
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_0052d360 ; 0052cf5b
        ;   XREF to: 0052d360 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_0052d360(CNetGame * this_ptr)
    MOV EDI,dword ptr [ESI + 0x1c]      ; 0052cf60
    ADD ESP,0x4                         ; 0052cf63
    CMP EDI,0x1                         ; 0052cf66
    JG 0x0052cdb8                       ; 0052cf69
        ;   XREF to: 0052cdb8 (CONDITIONAL_JUMP)  ; LAB_0052cdb8
    MOV ECX,dword ptr [0x0061abc0]      ; 0052cf6f | g_CEditorToolsPtr
    PUSH ECX                            ; 0052cf75
    CALL shape_edittool.cpp_FUN_00496dd0 ; 0052cf76
        ;   XREF to: 00496dd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00496dd0()
    ADD ESP,0x4                         ; 0052cf7b
    JMP 0x0052cad3                      ; 0052cf7e
        ;   XREF to: 0052cad3 (UNCONDITIONAL_JUMP)  ; LAB_0052cad3

