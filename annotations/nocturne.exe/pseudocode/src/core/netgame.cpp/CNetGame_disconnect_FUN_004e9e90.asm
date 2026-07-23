; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(int *param_1,int param_2)
;
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
; XREF[7]:
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049deb9
;   core_game.cpp_joinNetworkGame_FUN_004a5e40 at 004a5ed7
;   core_netgame.cpp_CNetGame_init_FUN_004e9910 at 004e9996
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_004e9a90 at 004e9aa2
;   core_netgame.cpp_CNetGame_processPacket_FUN_004ea830 at 004eb0d3
;   core_netgame.cpp_CNetGame_runLobby_FUN_004eb520 at 004eb86c
;   core_netgame.cpp_CNetGame_shutdown_FUN_004e99c0 at 004e99c7
;
; Referenced Globals:
;   TerminatedCString s_Disconnecting_from_serve_0058bc84
;   TerminatedCString s_Couldn_t_contact_server_0058bca1
;   TerminatedCString s_Disconnecting_0058bcc8
;   TerminatedCString s_Couldn_t_connect_to_all_0058bcd9
;   double DOUBLE_0058bd0a = 0.0000152587890625
;   float FLOAT_0058bd12 = 1000
;   double DOUBLE_0058bd1a = 30
;   double DOUBLE_0058bd22 = 0.100000000000000
;   undefined4 DAT_005b6d50
;   undefined4 DAT_01cea3f4
;   undefined4 DAT_01cea3f8
;   undefined4 DAT_01cea400
;   undefined4 DAT_01cea404
;   undefined4 DAT_01cea40c
;   undefined4 DAT_01d06610
;
; Called Functions:
;   core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740
;   core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_004edab0
;   FUN_0046fe60
;   FUN_004720c0
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_00471760
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e9e90
        ;   Label: core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90
    PUSH ESI                            ; 004e9e91
    PUSH EDI                            ; 004e9e92
    PUSH EBP                            ; 004e9e93
    MOV EBP,ESP                         ; 004e9e94
    SUB ESP,0x20                        ; 004e9e96
    AND ESP,0xfffffff8                  ; 004e9e99
    MOV ESI,dword ptr [EBP + 0x14]      ; 004e9e9c
    CMP dword ptr [EBP + 0x18],0x0      ; 004e9e9f
    JZ 0x004e9eb3                       ; 004e9ea3
        ;   XREF to: 004e9eb3 (CONDITIONAL_JUMP)  ; LAB_004e9eb3
    CMP dword ptr [ESI],0x2             ; 004e9ea5
    JZ 0x004e9f05                       ; 004e9ea8
        ;   XREF to: 004e9f05 (CONDITIONAL_JUMP)  ; LAB_004e9f05
    CMP dword ptr [ESI],0x1             ; 004e9eaa
        ;   Label: LAB_004e9eaa
    JZ 0x004ea124                       ; 004e9ead
        ;   XREF to: 004ea124 (CONDITIONAL_JUMP)  ; LAB_004ea124
    MOV dword ptr [ESI + 0x4],0x0       ; 004e9eb3
        ;   Label: LAB_004e9eb3
    MOV dword ptr [ESI + 0x114],0xffffffff ; 004e9eba
    MOV dword ptr [ESI + 0x110],0xffffffff ; 004e9ec4
    MOV byte ptr [ESI + 0x118],0x0      ; 004e9ece
    XOR EDX,EDX                         ; 004e9ed5
    MOV dword ptr [ESI],0x0             ; 004e9ed7
    MOV dword ptr [0x01cea40c],EDX      ; 004e9edd | DAT_01cea40c
    MOV dword ptr [0x01d06610],EDX      ; 004e9ee3 | DAT_01d06610
    MOV dword ptr [0x01cea400],EDX      ; 004e9ee9 | DAT_01cea400
    MOV dword ptr [ESI + 0x1c],EDX      ; 004e9eef
    MOV dword ptr [0x01cea404],EDX      ; 004e9ef2 | DAT_01cea404
    MOV dword ptr [ESI + 0x168],EDX     ; 004e9ef8
    MOV ESP,EBP                         ; 004e9efe
    POP EBP                             ; 004e9f00
    POP EDI                             ; 004e9f01
    POP ESI                             ; 004e9f02
    POP EBX                             ; 004e9f03
    RET                                 ; 004e9f04
    PUSH 0x58bc84                       ; 004e9f05 | = "Disconnecting from server..."
        ;   Label: LAB_004e9f05
    MOV EBX,dword ptr [0x005b6d50]      ; 004e9f0a | DAT_005b6d50
    PUSH EBX                            ; 004e9f10
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660 ; 004e9f11
        ;   XREF to: 00471660 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660()
    ADD ESP,0x8                         ; 004e9f16
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004e9f19
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV EDX,EAX                         ; 004e9f1e
    MOV EBX,0x12                        ; 004e9f20
    SAR EDX,0x1f                        ; 004e9f25
    IDIV EBX                            ; 004e9f28
    MOV EDI,dword ptr [0x01cea3f4]      ; 004e9f2a | DAT_01cea3f4
    MOV EDX,EAX                         ; 004e9f30
    SUB EAX,EDI                         ; 004e9f32
    MOV dword ptr [0x01cea3f4],EDX      ; 004e9f34 | DAT_01cea3f4
    TEST EAX,EAX                        ; 004e9f3a
    JL 0x004ea018                       ; 004e9f3c
        ;   XREF to: 004ea018 (CONDITIONAL_JUMP)  ; LAB_004ea018
    CMP EAX,0x20000                     ; 004e9f42
    JLE 0x004e9f4e                      ; 004e9f47
        ;   XREF to: 004e9f4e (CONDITIONAL_JUMP)  ; LAB_004e9f4e
    MOV EAX,0x20000                     ; 004e9f49
    MOV EDX,dword ptr [0x01cea3f8]      ; 004e9f4e | DAT_01cea3f8
        ;   Label: LAB_004e9f4e
    ADD EDX,EAX                         ; 004e9f54
    MOV ECX,dword ptr [ESI + 0x110]     ; 004e9f56
    MOV EDI,EDX                         ; 004e9f5c
    MOV dword ptr [0x01cea3f8],EDX      ; 004e9f5e | DAT_01cea3f8
    LEA EBX,[EDX + 0xffe20000]          ; 004e9f64
    TEST ECX,ECX                        ; 004e9f6a
    JL 0x004ea004                       ; 004e9f6c
        ;   XREF to: 004ea004 (CONDITIONAL_JUMP)  ; LAB_004ea004
    LEA EAX,[ESI + 0x20]                ; 004e9f72
    MOV dword ptr [ESP + 0x10],EAX      ; 004e9f75
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004e9f79
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
        ;   Label: LAB_004e9f79
    MOV EDX,EAX                         ; 004e9f7e
    MOV ECX,0x12                        ; 004e9f80
    SAR EDX,0x1f                        ; 004e9f85
    IDIV ECX                            ; 004e9f88
    MOV ECX,dword ptr [0x01cea3f4]      ; 004e9f8a | DAT_01cea3f4
    MOV EDX,EAX                         ; 004e9f90
    SUB EAX,ECX                         ; 004e9f92
    MOV dword ptr [0x01cea3f4],EDX      ; 004e9f94 | DAT_01cea3f4
    TEST EAX,EAX                        ; 004e9f9a
    JL 0x004ea01f                       ; 004e9f9c
        ;   XREF to: 004ea01f (CONDITIONAL_JUMP)  ; LAB_004ea01f
    CMP EAX,0x20000                     ; 004e9fa2
    JLE 0x004e9fae                      ; 004e9fa7
        ;   XREF to: 004e9fae (CONDITIONAL_JUMP)  ; LAB_004e9fae
    MOV EAX,0x20000                     ; 004e9fa9
    MOV EDX,dword ptr [0x01cea3f8]      ; 004e9fae | DAT_01cea3f8
        ;   Label: LAB_004e9fae
    ADD EDX,EAX                         ; 004e9fb4
    MOV EAX,EDX                         ; 004e9fb6
    SUB EAX,EDI                         ; 004e9fb8
    MOV dword ptr [ESP + 0x1c],EAX      ; 004e9fba
    FILD dword ptr [ESP + 0x1c]         ; 004e9fbe
    FMUL double ptr [0x0058bd0a]        ; 004e9fc2 | DOUBLE_0058bd0a
    MOV dword ptr [0x01cea3f8],EDX      ; 004e9fc8 | DAT_01cea3f8
    FST float ptr [ESP + 0xc]           ; 004e9fce
    FLDZ                                ; 004e9fd2
    FCOMPP                              ; 004e9fd4
    FNSTSW AX                           ; 004e9fd6
    SAHF                                ; 004e9fd8
    JBE 0x004e9fe1                      ; 004e9fd9
        ;   XREF to: 004e9fe1 (CONDITIONAL_JUMP)  ; LAB_004e9fe1
    XOR ECX,ECX                         ; 004e9fdb
    MOV dword ptr [ESP + 0xc],ECX       ; 004e9fdd
    FLD float ptr [ESP + 0xc]           ; 004e9fe1
        ;   Label: LAB_004e9fe1
    FCOMP double ptr [0x0058bd1a]       ; 004e9fe5 | DOUBLE_0058bd1a
    FNSTSW AX                           ; 004e9feb
    SAHF                                ; 004e9fed
    JBE 0x004ea023                      ; 004e9fee
        ;   XREF to: 004ea023 (CONDITIONAL_JUMP)  ; LAB_004ea023
    PUSH 0x58bca1                       ; 004e9ff0 | = "Couldn't contact server to disconnect."
        ;   Label: LAB_004e9ff0
    MOV EBX,dword ptr [0x005b6d50]      ; 004e9ff5 | DAT_005b6d50
    PUSH EBX                            ; 004e9ffb
    CALL FUN_0046fe60                   ; 004e9ffc
        ;   XREF to: 0046fe60 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fe60()
    ADD ESP,0x8                         ; 004ea001
    MOV EDI,dword ptr [0x005b6d50]      ; 004ea004 | DAT_005b6d50
        ;   Label: LAB_004ea004
    PUSH EDI                            ; 004ea00a
    CALL FUN_004720c0                   ; 004ea00b
        ;   XREF to: 004720c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004720c0()
    ADD ESP,0x4                         ; 004ea010
    JMP 0x004e9eaa                      ; 004ea013
        ;   XREF to: 004e9eaa (UNCONDITIONAL_JUMP)  ; LAB_004e9eaa
    XOR EAX,EAX                         ; 004ea018
        ;   Label: LAB_004ea018
    JMP 0x004e9f4e                      ; 004ea01a
        ;   XREF to: 004e9f4e (UNCONDITIONAL_JUMP)  ; LAB_004e9f4e
    XOR EAX,EAX                         ; 004ea01f
        ;   Label: LAB_004ea01f
    JMP 0x004e9fae                      ; 004ea021
        ;   XREF to: 004e9fae (UNCONDITIONAL_JUMP)  ; LAB_004e9fae
    CMP dword ptr [ESP + 0xc],0x40400000 ; 004ea023
        ;   Label: LAB_004ea023
    JG 0x004e9ff0                       ; 004ea02b
        ;   XREF to: 004e9ff0 (CONDITIONAL_JUMP)  ; LAB_004e9ff0
    FLD float ptr [ESP + 0xc]           ; 004ea02d
    FMUL float ptr [0x0058bd12]         ; 004ea031 | FLOAT_0058bd12
    PUSH 0x453b8000                     ; 004ea037
    SUB ESP,0x4                         ; 004ea03c
    MOV ECX,dword ptr [0x005b6d50]      ; 004ea03f | DAT_005b6d50
    FSTP float ptr [ESP]                ; 004ea045
    PUSH ECX                            ; 004ea048
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_00471760 ; 004ea049
        ;   XREF to: 00471760 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_updatePercentage_FUN_00471760()
    ADD ESP,0xc                         ; 004ea04e
    MOV EAX,[0x01cea3f8]                ; 004ea051 | DAT_01cea3f8
        ;   Label: LAB_004ea051
    SUB EAX,EBX                         ; 004ea056
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ea058
    FILD dword ptr [ESP + 0x1c]         ; 004ea05c
    FMUL double ptr [0x0058bd0a]        ; 004ea060 | DOUBLE_0058bd0a
    FST float ptr [ESP]                 ; 004ea066
    FLDZ                                ; 004ea069
    FCOMPP                              ; 004ea06b
    FNSTSW AX                           ; 004ea06d
    SAHF                                ; 004ea06f
    JBE 0x004ea077                      ; 004ea070
        ;   XREF to: 004ea077 (CONDITIONAL_JUMP)  ; LAB_004ea077
    XOR EAX,EAX                         ; 004ea072
    MOV dword ptr [ESP],EAX             ; 004ea074
    FLD float ptr [ESP]                 ; 004ea077
        ;   Label: LAB_004ea077
    FCOMP double ptr [0x0058bd1a]       ; 004ea07a | DOUBLE_0058bd1a
    FNSTSW AX                           ; 004ea080
    SAHF                                ; 004ea082
    JBE 0x004ea08c                      ; 004ea083
        ;   XREF to: 004ea08c (CONDITIONAL_JUMP)  ; LAB_004ea08c
    MOV dword ptr [ESP],0x41f00000      ; 004ea085
    FLD float ptr [ESP]                 ; 004ea08c
        ;   Label: LAB_004ea08c
    FCOMP double ptr [0x0058bd22]       ; 004ea08f | DOUBLE_0058bd22
    FNSTSW AX                           ; 004ea095
    SAHF                                ; 004ea097
    JNC 0x004ea0d9                      ; 004ea098
        ;   XREF to: 004ea0d9 (CONDITIONAL_JUMP)  ; LAB_004ea0d9
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004ea09a
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV EDX,EAX                         ; 004ea09f
    MOV ECX,0x12                        ; 004ea0a1
    SAR EDX,0x1f                        ; 004ea0a6
    IDIV ECX                            ; 004ea0a9
    MOV ECX,dword ptr [0x01cea3f4]      ; 004ea0ab | DAT_01cea3f4
    MOV EDX,EAX                         ; 004ea0b1
    SUB EAX,ECX                         ; 004ea0b3
    MOV dword ptr [0x01cea3f4],EDX      ; 004ea0b5 | DAT_01cea3f4
    TEST EAX,EAX                        ; 004ea0bb
    JL 0x004ea0ce                       ; 004ea0bd
        ;   XREF to: 004ea0ce (CONDITIONAL_JUMP)  ; LAB_004ea0ce
    CMP EAX,0x20000                     ; 004ea0bf
    JG 0x004ea0d2                       ; 004ea0c4
        ;   XREF to: 004ea0d2 (CONDITIONAL_JUMP)  ; LAB_004ea0d2
    ADD dword ptr [0x01cea3f8],EAX      ; 004ea0c6 | DAT_01cea3f8
        ;   Label: LAB_004ea0c6
    JMP 0x004ea051                      ; 004ea0cc
        ;   XREF to: 004ea051 (UNCONDITIONAL_JUMP)  ; LAB_004ea051
    XOR EAX,EAX                         ; 004ea0ce
        ;   Label: LAB_004ea0ce
    JMP 0x004ea0c6                      ; 004ea0d0
        ;   XREF to: 004ea0c6 (UNCONDITIONAL_JUMP)  ; LAB_004ea0c6
    MOV EAX,0x20000                     ; 004ea0d2
        ;   Label: LAB_004ea0d2
    JMP 0x004ea0c6                      ; 004ea0d7
        ;   XREF to: 004ea0c6 (UNCONDITIONAL_JUMP)  ; LAB_004ea0c6
    IMUL EAX,dword ptr [ESI + 0x110],0x78 ; 004ea0d9
        ;   Label: LAB_004ea0d9
    ADD EAX,dword ptr [ESP + 0x10]      ; 004ea0e0
    PUSH 0x1                            ; 004ea0e4
    ADD EAX,0x1c                        ; 004ea0e6
    PUSH EAX                            ; 004ea0e9
    PUSH ESI                            ; 004ea0ea
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_004edab0 ; 004ea0eb
        ;   XREF to: 004edab0 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_004edab0()
    ADD ESP,0xc                         ; 004ea0f0
    PUSH ESI                            ; 004ea0f3
    MOV EBX,dword ptr [0x01cea3f8]      ; 004ea0f4 | DAT_01cea3f8
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740 ; 004ea0fa
        ;   XREF to: 004ea740 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740()
    MOV ECX,dword ptr [ESI + 0x110]     ; 004ea0ff
    ADD ESP,0x4                         ; 004ea105
    TEST ECX,ECX                        ; 004ea108
    JGE 0x004e9f79                      ; 004ea10a
        ;   XREF to: 004e9f79 (CONDITIONAL_JUMP)  ; LAB_004e9f79
    MOV EDI,dword ptr [0x005b6d50]      ; 004ea110 | DAT_005b6d50
    PUSH EDI                            ; 004ea116
    CALL FUN_004720c0                   ; 004ea117
        ;   XREF to: 004720c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004720c0()
    ADD ESP,0x4                         ; 004ea11c
    JMP 0x004e9eaa                      ; 004ea11f
        ;   XREF to: 004e9eaa (UNCONDITIONAL_JUMP)  ; LAB_004e9eaa
    PUSH 0x58bcc8                       ; 004ea124 | = "Disconnecting..."
        ;   Label: LAB_004ea124
    MOV EBX,dword ptr [0x005b6d50]      ; 004ea129 | DAT_005b6d50
    PUSH EBX                            ; 004ea12f
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660 ; 004ea130
        ;   XREF to: 00471660 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660()
    ADD ESP,0x8                         ; 004ea135
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004ea138
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV EDX,EAX                         ; 004ea13d
    MOV EBX,0x12                        ; 004ea13f
    SAR EDX,0x1f                        ; 004ea144
    IDIV EBX                            ; 004ea147
    MOV EDI,dword ptr [0x01cea3f4]      ; 004ea149 | DAT_01cea3f4
    MOV EDX,EAX                         ; 004ea14f
    SUB EAX,EDI                         ; 004ea151
    MOV dword ptr [0x01cea3f4],EDX      ; 004ea153 | DAT_01cea3f4
    TEST EAX,EAX                        ; 004ea159
    JL 0x004ea23b                       ; 004ea15b
        ;   XREF to: 004ea23b (CONDITIONAL_JUMP)  ; LAB_004ea23b
    CMP EAX,0x20000                     ; 004ea161
    JLE 0x004ea16d                      ; 004ea166
        ;   XREF to: 004ea16d (CONDITIONAL_JUMP)  ; LAB_004ea16d
    MOV EAX,0x20000                     ; 004ea168
    MOV EDX,dword ptr [0x01cea3f8]      ; 004ea16d | DAT_01cea3f8
        ;   Label: LAB_004ea16d
    ADD EDX,EAX                         ; 004ea173
    MOV ECX,dword ptr [ESI + 0x1c]      ; 004ea175
    MOV dword ptr [ESP + 0x18],EDX      ; 004ea178
    MOV dword ptr [0x01cea3f8],EDX      ; 004ea17c | DAT_01cea3f8
    LEA EBX,[EDX + 0xffe20000]          ; 004ea182
    CMP ECX,0x1                         ; 004ea188
    JLE 0x004ea227                      ; 004ea18b
        ;   XREF to: 004ea227 (CONDITIONAL_JUMP)  ; LAB_004ea227
    LEA EAX,[ESI + 0x20]                ; 004ea191
    MOV dword ptr [ESP + 0x14],EAX      ; 004ea194
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004ea198
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
        ;   Label: LAB_004ea198
    MOV EDX,EAX                         ; 004ea19d
    MOV ECX,0x12                        ; 004ea19f
    SAR EDX,0x1f                        ; 004ea1a4
    IDIV ECX                            ; 004ea1a7
    MOV ECX,dword ptr [0x01cea3f4]      ; 004ea1a9 | DAT_01cea3f4
    MOV EDX,EAX                         ; 004ea1af
    SUB EAX,ECX                         ; 004ea1b1
    MOV dword ptr [0x01cea3f4],EDX      ; 004ea1b3 | DAT_01cea3f4
    TEST EAX,EAX                        ; 004ea1b9
    JL 0x004ea242                       ; 004ea1bb
        ;   XREF to: 004ea242 (CONDITIONAL_JUMP)  ; LAB_004ea242
    CMP EAX,0x20000                     ; 004ea1c1
    JLE 0x004ea1cd                      ; 004ea1c6
        ;   XREF to: 004ea1cd (CONDITIONAL_JUMP)  ; LAB_004ea1cd
    MOV EAX,0x20000                     ; 004ea1c8
    MOV EDI,dword ptr [0x01cea3f8]      ; 004ea1cd | DAT_01cea3f8
        ;   Label: LAB_004ea1cd
    ADD EDI,EAX                         ; 004ea1d3
    MOV EDX,dword ptr [ESP + 0x18]      ; 004ea1d5
    MOV EAX,EDI                         ; 004ea1d9
    SUB EAX,EDX                         ; 004ea1db
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ea1dd
    FILD dword ptr [ESP + 0x1c]         ; 004ea1e1
    FMUL double ptr [0x0058bd0a]        ; 004ea1e5 | DOUBLE_0058bd0a
    MOV dword ptr [0x01cea3f8],EDI      ; 004ea1eb | DAT_01cea3f8
    FST float ptr [ESP + 0x4]           ; 004ea1f1
    FLDZ                                ; 004ea1f5
    FCOMPP                              ; 004ea1f7
    FNSTSW AX                           ; 004ea1f9
    SAHF                                ; 004ea1fb
    JBE 0x004ea204                      ; 004ea1fc
        ;   XREF to: 004ea204 (CONDITIONAL_JUMP)  ; LAB_004ea204
    XOR ECX,ECX                         ; 004ea1fe
    MOV dword ptr [ESP + 0x4],ECX       ; 004ea200
    FLD float ptr [ESP + 0x4]           ; 004ea204
        ;   Label: LAB_004ea204
    FCOMP double ptr [0x0058bd1a]       ; 004ea208 | DOUBLE_0058bd1a
    FNSTSW AX                           ; 004ea20e
    SAHF                                ; 004ea210
    JBE 0x004ea246                      ; 004ea211
        ;   XREF to: 004ea246 (CONDITIONAL_JUMP)  ; LAB_004ea246
    PUSH 0x58bcd9                       ; 004ea213 | = "Couldn't connect to all clients to di..."
        ;   Label: LAB_004ea213
    MOV EDX,dword ptr [0x005b6d50]      ; 004ea218 | DAT_005b6d50
    PUSH EDX                            ; 004ea21e
    CALL FUN_0046fe60                   ; 004ea21f
        ;   XREF to: 0046fe60 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fe60()
    ADD ESP,0x8                         ; 004ea224
    MOV ECX,dword ptr [0x005b6d50]      ; 004ea227 | DAT_005b6d50
        ;   Label: LAB_004ea227
    PUSH ECX                            ; 004ea22d
    CALL FUN_004720c0                   ; 004ea22e
        ;   XREF to: 004720c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004720c0()
    ADD ESP,0x4                         ; 004ea233
    JMP 0x004e9eb3                      ; 004ea236
        ;   XREF to: 004e9eb3 (UNCONDITIONAL_JUMP)  ; LAB_004e9eb3
    XOR EAX,EAX                         ; 004ea23b
        ;   Label: LAB_004ea23b
    JMP 0x004ea16d                      ; 004ea23d
        ;   XREF to: 004ea16d (UNCONDITIONAL_JUMP)  ; LAB_004ea16d
    XOR EAX,EAX                         ; 004ea242
        ;   Label: LAB_004ea242
    JMP 0x004ea1cd                      ; 004ea244
        ;   XREF to: 004ea1cd (UNCONDITIONAL_JUMP)  ; LAB_004ea1cd
    CMP dword ptr [ESP + 0x4],0x40a00000 ; 004ea246
        ;   Label: LAB_004ea246
    JG 0x004ea213                       ; 004ea24e
        ;   XREF to: 004ea213 (CONDITIONAL_JUMP)  ; LAB_004ea213
    FLD float ptr [ESP + 0x4]           ; 004ea250
    FMUL float ptr [0x0058bd12]         ; 004ea254 | FLOAT_0058bd12
    PUSH 0x459c4000                     ; 004ea25a
    SUB ESP,0x4                         ; 004ea25f
    MOV EAX,[0x005b6d50]                ; 004ea262 | DAT_005b6d50
    FSTP float ptr [ESP]                ; 004ea267
    PUSH EAX                            ; 004ea26a
    MOV EDI,0x20000                     ; 004ea26b
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_00471760 ; 004ea270
        ;   XREF to: 00471760 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_updatePercentage_FUN_00471760()
    ADD ESP,0xc                         ; 004ea275
    MOV EAX,[0x01cea3f8]                ; 004ea278 | DAT_01cea3f8
        ;   Label: LAB_004ea278
    SUB EAX,EBX                         ; 004ea27d
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ea27f
    FILD dword ptr [ESP + 0x1c]         ; 004ea283
    FMUL double ptr [0x0058bd0a]        ; 004ea287 | DOUBLE_0058bd0a
    FST float ptr [ESP + 0x8]           ; 004ea28d
    FLDZ                                ; 004ea291
    FCOMPP                              ; 004ea293
    FNSTSW AX                           ; 004ea295
    SAHF                                ; 004ea297
    JBE 0x004ea2a0                      ; 004ea298
        ;   XREF to: 004ea2a0 (CONDITIONAL_JUMP)  ; LAB_004ea2a0
    XOR EAX,EAX                         ; 004ea29a
    MOV dword ptr [ESP + 0x8],EAX       ; 004ea29c
    FLD float ptr [ESP + 0x8]           ; 004ea2a0
        ;   Label: LAB_004ea2a0
    FCOMP double ptr [0x0058bd1a]       ; 004ea2a4 | DOUBLE_0058bd1a
    FNSTSW AX                           ; 004ea2aa
    SAHF                                ; 004ea2ac
    JBE 0x004ea2b7                      ; 004ea2ad
        ;   XREF to: 004ea2b7 (CONDITIONAL_JUMP)  ; LAB_004ea2b7
    MOV dword ptr [ESP + 0x8],0x41f00000 ; 004ea2af
    FLD float ptr [ESP + 0x8]           ; 004ea2b7
        ;   Label: LAB_004ea2b7
    FCOMP double ptr [0x0058bd22]       ; 004ea2bb | DOUBLE_0058bd22
    FNSTSW AX                           ; 004ea2c1
    SAHF                                ; 004ea2c3
    JNC 0x004ea305                      ; 004ea2c4
        ;   XREF to: 004ea305 (CONDITIONAL_JUMP)  ; LAB_004ea305
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004ea2c6
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV EDX,EAX                         ; 004ea2cb
    MOV ECX,0x12                        ; 004ea2cd
    SAR EDX,0x1f                        ; 004ea2d2
    IDIV ECX                            ; 004ea2d5
    MOV ECX,dword ptr [0x01cea3f4]      ; 004ea2d7 | DAT_01cea3f4
    MOV EDX,EAX                         ; 004ea2dd
    SUB EAX,ECX                         ; 004ea2df
    MOV dword ptr [0x01cea3f4],EDX      ; 004ea2e1 | DAT_01cea3f4
    TEST EAX,EAX                        ; 004ea2e7
    JL 0x004ea2fd                       ; 004ea2e9
        ;   XREF to: 004ea2fd (CONDITIONAL_JUMP)  ; LAB_004ea2fd
    CMP EAX,0x20000                     ; 004ea2eb
    JG 0x004ea301                       ; 004ea2f0
        ;   XREF to: 004ea301 (CONDITIONAL_JUMP)  ; LAB_004ea301
    ADD dword ptr [0x01cea3f8],EAX      ; 004ea2f2 | DAT_01cea3f8
        ;   Label: LAB_004ea2f2
    JMP 0x004ea278                      ; 004ea2f8
        ;   XREF to: 004ea278 (UNCONDITIONAL_JUMP)  ; LAB_004ea278
    XOR EAX,EAX                         ; 004ea2fd
        ;   Label: LAB_004ea2fd
    JMP 0x004ea2f2                      ; 004ea2ff
        ;   XREF to: 004ea2f2 (UNCONDITIONAL_JUMP)  ; LAB_004ea2f2
    MOV EAX,EDI                         ; 004ea301
        ;   Label: LAB_004ea301
    JMP 0x004ea2f2                      ; 004ea303
        ;   XREF to: 004ea2f2 (UNCONDITIONAL_JUMP)  ; LAB_004ea2f2
    MOV ECX,dword ptr [ESI + 0x1c]      ; 004ea305
        ;   Label: LAB_004ea305
    XOR EBX,EBX                         ; 004ea308
    TEST ECX,ECX                        ; 004ea30a
    JLE 0x004ea334                      ; 004ea30c
        ;   XREF to: 004ea334 (CONDITIONAL_JUMP)  ; LAB_004ea334
    MOV EDI,dword ptr [ESP + 0x14]      ; 004ea30e
    ADD EDI,0x1c                        ; 004ea312
    CMP EBX,dword ptr [ESI + 0x114]     ; 004ea315
        ;   Label: LAB_004ea315
    JZ 0x004ea329                       ; 004ea31b
        ;   XREF to: 004ea329 (CONDITIONAL_JUMP)  ; LAB_004ea329
    PUSH 0x1                            ; 004ea31d
    PUSH EDI                            ; 004ea31f
    PUSH ESI                            ; 004ea320
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_004edab0 ; 004ea321
        ;   XREF to: 004edab0 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_004edab0()
    ADD ESP,0xc                         ; 004ea326
    INC EBX                             ; 004ea329
        ;   Label: LAB_004ea329
    MOV ECX,dword ptr [ESI + 0x1c]      ; 004ea32a
    ADD EDI,0x78                        ; 004ea32d
    CMP EBX,ECX                         ; 004ea330
    JL 0x004ea315                       ; 004ea332
        ;   XREF to: 004ea315 (CONDITIONAL_JUMP)  ; LAB_004ea315
    PUSH ESI                            ; 004ea334
        ;   Label: LAB_004ea334
    MOV EBX,dword ptr [0x01cea3f8]      ; 004ea335 | DAT_01cea3f8
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740 ; 004ea33b
        ;   XREF to: 004ea740 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740()
    MOV EDI,dword ptr [ESI + 0x1c]      ; 004ea340
    ADD ESP,0x4                         ; 004ea343
    CMP EDI,0x1                         ; 004ea346
    JG 0x004ea198                       ; 004ea349
        ;   XREF to: 004ea198 (CONDITIONAL_JUMP)  ; LAB_004ea198
    MOV ECX,dword ptr [0x005b6d50]      ; 004ea34f | DAT_005b6d50
    PUSH ECX                            ; 004ea355
    CALL FUN_004720c0                   ; 004ea356
        ;   XREF to: 004720c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004720c0()
    ADD ESP,0x4                         ; 004ea35b
    JMP 0x004e9eb3                      ; 004ea35e
        ;   XREF to: 004e9eb3 (UNCONDITIONAL_JUMP)  ; LAB_004e9eb3

