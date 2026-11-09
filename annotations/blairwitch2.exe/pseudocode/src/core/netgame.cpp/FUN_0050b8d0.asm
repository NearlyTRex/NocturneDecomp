; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_FUN_0050b8d0(CNetGame *this_ptr,int perform_handshake)
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
; XREF[9]:
;   core_game.cpp_FUN_004b6170 at 004b66dc
;   core_game.cpp_FUN_004bd2f0 at 004bd36a
;   core_game.cpp_joinNetworkGame_FUN_004bd3a0 at 004bd437
;   core_netgame.cpp_CNetGame_init_FUN_0050b340 at 0050b3c6
;   core_netgame.cpp_CNetGame_runLobby_FUN_0050cf50 at 0050d290
;   core_netgame.cpp_FUN_0050b3f0 at 0050b3f7
;   core_netgame.cpp_FUN_0050b420 at 0050b441
;   core_netgame.cpp_FUN_0050b4d0 at 0050b4e2
;   core_netgame.cpp_FUN_0050c280 at 0050cb07
;
; Referenced Globals:
;   TerminatedCString s_Disconnecting_from_serve_005e05ff
;   TerminatedCString s_Couldn_t_contact_server_005e061c
;   TerminatedCString s_Disconnecting_005e0643
;   TerminatedCString s_Couldn_t_connect_to_all_005e0654
;   undefined4 DAT_005e0685
;   undefined4 DAT_005e068d
;   undefined4 DAT_005e0695
;   undefined4 DAT_005e069d
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   undefined4 DAT_01d34e34
;   undefined4 DAT_01d34e38
;   undefined4 DAT_01d34e40
;   undefined4 DAT_01d34e44
;   undefined4 DAT_01d34e4c
;   undefined4 DAT_01d51050
;
; Called Functions:
;   core_netgame.cpp_CNetGame_receivePackets_FUN_0050c190
;   core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0047bda0
;   shape_edittool.cpp_FUN_0047db40
;   shape_edittool.cpp_FUN_0047dc40
;   shape_edittool.cpp_FUN_0047e760
;   wincore_winrun.cpp_FUN_0058e9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b8d0
        ;   Label: core_netgame.cpp_FUN_0050b8d0
    PUSH ESI                            ; 0050b8d1
    PUSH EDI                            ; 0050b8d2
    PUSH EBP                            ; 0050b8d3
    MOV EBP,ESP                         ; 0050b8d4
    SUB ESP,0x20                        ; 0050b8d6
    AND ESP,0xfffffff8                  ; 0050b8d9
    MOV ESI,dword ptr [EBP + 0x14]      ; 0050b8dc
    CMP dword ptr [EBP + 0x18],0x0      ; 0050b8df
    JZ 0x0050b8f3                       ; 0050b8e3
        ;   XREF to: 0050b8f3 (CONDITIONAL_JUMP)  ; LAB_0050b8f3
    CMP dword ptr [ESI],0x2             ; 0050b8e5
    JZ 0x0050b945                       ; 0050b8e8
        ;   XREF to: 0050b945 (CONDITIONAL_JUMP)  ; LAB_0050b945
    CMP dword ptr [ESI],0x1             ; 0050b8ea
        ;   Label: LAB_0050b8ea
    JZ 0x0050bb6b                       ; 0050b8ed
        ;   XREF to: 0050bb6b (CONDITIONAL_JUMP)  ; LAB_0050bb6b
    MOV dword ptr [ESI + 0x4],0x0       ; 0050b8f3
        ;   Label: LAB_0050b8f3
    MOV dword ptr [ESI + 0x124],0xffffffff ; 0050b8fa
    MOV dword ptr [ESI + 0x120],0xffffffff ; 0050b904
    MOV byte ptr [ESI + 0x128],0x0      ; 0050b90e
    XOR EBX,EBX                         ; 0050b915
    MOV dword ptr [ESI],0x0             ; 0050b917
    MOV dword ptr [0x01d34e4c],EBX      ; 0050b91d | DAT_01d34e4c
    MOV dword ptr [0x01d51050],EBX      ; 0050b923 | DAT_01d51050
    MOV dword ptr [0x01d34e40],EBX      ; 0050b929 | DAT_01d34e40
    MOV dword ptr [ESI + 0x1c],EBX      ; 0050b92f
    MOV dword ptr [0x01d34e44],EBX      ; 0050b932 | DAT_01d34e44
    MOV dword ptr [ESI + 0x178],EBX     ; 0050b938
    MOV ESP,EBP                         ; 0050b93e
    POP EBP                             ; 0050b940
    POP EDI                             ; 0050b941
    POP ESI                             ; 0050b942
    POP EBX                             ; 0050b943
    RET                                 ; 0050b944
    PUSH 0x5e05ff                       ; 0050b945 | = "Disconnecting from server..."
        ;   Label: LAB_0050b945
    MOV EBX,dword ptr [0x006138e0]      ; 0050b94a | g_CEditorToolsPtr
    PUSH EBX                            ; 0050b950
    CALL shape_edittool.cpp_FUN_0047db40 ; 0050b951
        ;   XREF to: 0047db40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_0047db40(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 0050b956
    CALL wincore_winrun.cpp_FUN_0058e9e0 ; 0050b959
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058e9e0()
    MOV EDX,EAX                         ; 0050b95e
    MOV EBX,0x12                        ; 0050b960
    SAR EDX,0x1f                        ; 0050b965
    IDIV EBX                            ; 0050b968
    MOV EDI,dword ptr [0x01d34e34]      ; 0050b96a | DAT_01d34e34
    MOV EDX,EAX                         ; 0050b970
    SUB EAX,EDI                         ; 0050b972
    MOV dword ptr [0x01d34e34],EDX      ; 0050b974 | DAT_01d34e34
    TEST EAX,EAX                        ; 0050b97a
    JL 0x0050ba55                       ; 0050b97c
        ;   XREF to: 0050ba55 (CONDITIONAL_JUMP)  ; LAB_0050ba55
    CMP EAX,0x20000                     ; 0050b982
    JLE 0x0050b98e                      ; 0050b987
        ;   XREF to: 0050b98e (CONDITIONAL_JUMP)  ; LAB_0050b98e
    MOV EAX,0x20000                     ; 0050b989
    MOV EDX,dword ptr [0x01d34e38]      ; 0050b98e | DAT_01d34e38
        ;   Label: LAB_0050b98e
    ADD EDX,EAX                         ; 0050b994
    MOV ECX,dword ptr [ESI + 0x120]     ; 0050b996
    MOV EDI,EDX                         ; 0050b99c
    MOV dword ptr [0x01d34e38],EDX      ; 0050b99e | DAT_01d34e38
    LEA EBX,[EDX + 0xffe20000]          ; 0050b9a4
    TEST ECX,ECX                        ; 0050b9aa
    JL 0x0050ba41                       ; 0050b9ac
        ;   XREF to: 0050ba41 (CONDITIONAL_JUMP)  ; LAB_0050ba41
    LEA EAX,[ESI + 0x20]                ; 0050b9b2
    MOV dword ptr [ESP + 0x14],EAX      ; 0050b9b5
    CALL wincore_winrun.cpp_FUN_0058e9e0 ; 0050b9b9
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058e9e0()
        ;   Label: LAB_0050b9b9
    MOV EDX,EAX                         ; 0050b9be
    MOV ECX,0x12                        ; 0050b9c0
    SAR EDX,0x1f                        ; 0050b9c5
    IDIV ECX                            ; 0050b9c8
    MOV ECX,dword ptr [0x01d34e34]      ; 0050b9ca | DAT_01d34e34
    MOV EDX,EAX                         ; 0050b9d0
    SUB EAX,ECX                         ; 0050b9d2
    MOV dword ptr [0x01d34e34],EDX      ; 0050b9d4 | DAT_01d34e34
    TEST EAX,EAX                        ; 0050b9da
    JL 0x0050ba5c                       ; 0050b9dc
        ;   XREF to: 0050ba5c (CONDITIONAL_JUMP)  ; LAB_0050ba5c
    CMP EAX,0x20000                     ; 0050b9e2
    JLE 0x0050b9ee                      ; 0050b9e7
        ;   XREF to: 0050b9ee (CONDITIONAL_JUMP)  ; LAB_0050b9ee
    MOV EAX,0x20000                     ; 0050b9e9
    MOV EDX,dword ptr [0x01d34e38]      ; 0050b9ee | DAT_01d34e38
        ;   Label: LAB_0050b9ee
    ADD EDX,EAX                         ; 0050b9f4
    MOV EAX,EDX                         ; 0050b9f6
    SUB EAX,EDI                         ; 0050b9f8
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050b9fa
    FILD dword ptr [ESP + 0x1c]         ; 0050b9fe
    FMUL double ptr [0x005e0685]        ; 0050ba02 | DAT_005e0685
    MOV dword ptr [0x01d34e38],EDX      ; 0050ba08 | DAT_01d34e38
    FST float ptr [ESP]                 ; 0050ba0e
    FLDZ                                ; 0050ba11
    FCOMPP                              ; 0050ba13
    FNSTSW AX                           ; 0050ba15
    SAHF                                ; 0050ba17
    JBE 0x0050ba1f                      ; 0050ba18
        ;   XREF to: 0050ba1f (CONDITIONAL_JUMP)  ; LAB_0050ba1f
    XOR ECX,ECX                         ; 0050ba1a
    MOV dword ptr [ESP],ECX             ; 0050ba1c
    FLD float ptr [ESP]                 ; 0050ba1f
        ;   Label: LAB_0050ba1f
    FCOMP double ptr [0x005e0695]       ; 0050ba22 | DAT_005e0695
    FNSTSW AX                           ; 0050ba28
    SAHF                                ; 0050ba2a
    JBE 0x0050ba60                      ; 0050ba2b
        ;   XREF to: 0050ba60 (CONDITIONAL_JUMP)  ; LAB_0050ba60
    PUSH 0x5e061c                       ; 0050ba2d | = "Couldn't contact server to disconnect."
        ;   Label: LAB_0050ba2d
    MOV EBX,dword ptr [0x006138e0]      ; 0050ba32 | g_CEditorToolsPtr
    PUSH EBX                            ; 0050ba38
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0047bda0 ; 0050ba39
        ;   XREF to: 0047bda0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0047bda0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0050ba3e
    MOV EDI,dword ptr [0x006138e0]      ; 0050ba41 | g_CEditorToolsPtr
        ;   Label: LAB_0050ba41
    PUSH EDI                            ; 0050ba47
    CALL shape_edittool.cpp_FUN_0047e760 ; 0050ba48
        ;   XREF to: 0047e760 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047e760()
    ADD ESP,0x4                         ; 0050ba4d
    JMP 0x0050b8ea                      ; 0050ba50
        ;   XREF to: 0050b8ea (UNCONDITIONAL_JUMP)  ; LAB_0050b8ea
    XOR EAX,EAX                         ; 0050ba55
        ;   Label: LAB_0050ba55
    JMP 0x0050b98e                      ; 0050ba57
        ;   XREF to: 0050b98e (UNCONDITIONAL_JUMP)  ; LAB_0050b98e
    XOR EAX,EAX                         ; 0050ba5c
        ;   Label: LAB_0050ba5c
    JMP 0x0050b9ee                      ; 0050ba5e
        ;   XREF to: 0050b9ee (UNCONDITIONAL_JUMP)  ; LAB_0050b9ee
    CMP dword ptr [ESP],0x40400000      ; 0050ba60
        ;   Label: LAB_0050ba60
    JG 0x0050ba2d                       ; 0050ba67
        ;   XREF to: 0050ba2d (CONDITIONAL_JUMP)  ; LAB_0050ba2d
    FLD float ptr [ESP]                 ; 0050ba69
    FMUL float ptr [0x005e068d]         ; 0050ba6c | DAT_005e068d
    PUSH 0x453b8000                     ; 0050ba72
    SUB ESP,0x4                         ; 0050ba77
    MOV ECX,dword ptr [0x006138e0]      ; 0050ba7a | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 0050ba80
    PUSH ECX                            ; 0050ba83
    CALL shape_edittool.cpp_FUN_0047dc40 ; 0050ba84
        ;   XREF to: 0047dc40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047dc40()
    ADD ESP,0xc                         ; 0050ba89
    MOV EAX,[0x01d34e38]                ; 0050ba8c | DAT_01d34e38
        ;   Label: LAB_0050ba8c
    SUB EAX,EBX                         ; 0050ba91
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050ba93
    FILD dword ptr [ESP + 0x1c]         ; 0050ba97
    FMUL double ptr [0x005e0685]        ; 0050ba9b | DAT_005e0685
    FST float ptr [ESP + 0x8]           ; 0050baa1
    FLDZ                                ; 0050baa5
    FCOMPP                              ; 0050baa7
    FNSTSW AX                           ; 0050baa9
    SAHF                                ; 0050baab
    JBE 0x0050bab4                      ; 0050baac
        ;   XREF to: 0050bab4 (CONDITIONAL_JUMP)  ; LAB_0050bab4
    XOR EAX,EAX                         ; 0050baae
    MOV dword ptr [ESP + 0x8],EAX       ; 0050bab0
    FLD float ptr [ESP + 0x8]           ; 0050bab4
        ;   Label: LAB_0050bab4
    FCOMP double ptr [0x005e0695]       ; 0050bab8 | DAT_005e0695
    FNSTSW AX                           ; 0050babe
    SAHF                                ; 0050bac0
    JBE 0x0050bacb                      ; 0050bac1
        ;   XREF to: 0050bacb (CONDITIONAL_JUMP)  ; LAB_0050bacb
    MOV dword ptr [ESP + 0x8],0x41f00000 ; 0050bac3
    FLD float ptr [ESP + 0x8]           ; 0050bacb
        ;   Label: LAB_0050bacb
    FCOMP double ptr [0x005e069d]       ; 0050bacf | DAT_005e069d
    FNSTSW AX                           ; 0050bad5
    SAHF                                ; 0050bad7
    JNC 0x0050bb1c                      ; 0050bad8
        ;   XREF to: 0050bb1c (CONDITIONAL_JUMP)  ; LAB_0050bb1c
    CALL wincore_winrun.cpp_FUN_0058e9e0 ; 0050bada
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058e9e0()
    MOV EDX,EAX                         ; 0050badf
    MOV ECX,0x12                        ; 0050bae1
    SAR EDX,0x1f                        ; 0050bae6
    IDIV ECX                            ; 0050bae9
    MOV ECX,dword ptr [0x01d34e34]      ; 0050baeb | DAT_01d34e34
    MOV EDX,EAX                         ; 0050baf1
    SUB EDX,ECX                         ; 0050baf3
    MOV [0x01d34e34],EAX                ; 0050baf5 | DAT_01d34e34
    TEST EDX,EDX                        ; 0050bafa
    JL 0x0050bb11                       ; 0050bafc
        ;   XREF to: 0050bb11 (CONDITIONAL_JUMP)  ; LAB_0050bb11
    CMP EDX,0x20000                     ; 0050bafe
    JG 0x0050bb15                       ; 0050bb04
        ;   XREF to: 0050bb15 (CONDITIONAL_JUMP)  ; LAB_0050bb15
    ADD dword ptr [0x01d34e38],EDX      ; 0050bb06 | DAT_01d34e38
        ;   Label: LAB_0050bb06
    JMP 0x0050ba8c                      ; 0050bb0c
        ;   XREF to: 0050ba8c (UNCONDITIONAL_JUMP)  ; LAB_0050ba8c
    XOR EDX,EDX                         ; 0050bb11
        ;   Label: LAB_0050bb11
    JMP 0x0050bb06                      ; 0050bb13
        ;   XREF to: 0050bb06 (UNCONDITIONAL_JUMP)  ; LAB_0050bb06
    MOV EDX,0x20000                     ; 0050bb15
        ;   Label: LAB_0050bb15
    JMP 0x0050bb06                      ; 0050bb1a
        ;   XREF to: 0050bb06 (UNCONDITIONAL_JUMP)  ; LAB_0050bb06
    MOV EAX,dword ptr [ESI + 0x120]     ; 0050bb1c
        ;   Label: LAB_0050bb1c
    MOV EBX,dword ptr [ESP + 0x14]      ; 0050bb22
    SHL EAX,0x7                         ; 0050bb26
    ADD EAX,EBX                         ; 0050bb29
    PUSH 0x1                            ; 0050bb2b
    ADD EAX,0x1c                        ; 0050bb2d
    PUSH EAX                            ; 0050bb30
    PUSH ESI                            ; 0050bb31
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0 ; 0050bb32
        ;   XREF to: 0050f4b0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 0050bb37
    PUSH ESI                            ; 0050bb3a
    MOV EBX,dword ptr [0x01d34e38]      ; 0050bb3b | DAT_01d34e38
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_0050c190 ; 0050bb41
        ;   XREF to: 0050c190 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_0050c190(CNetGame * this_ptr)
    MOV EAX,dword ptr [ESI + 0x120]     ; 0050bb46
    ADD ESP,0x4                         ; 0050bb4c
    TEST EAX,EAX                        ; 0050bb4f
    JGE 0x0050b9b9                      ; 0050bb51
        ;   XREF to: 0050b9b9 (CONDITIONAL_JUMP)  ; LAB_0050b9b9
    MOV EDI,dword ptr [0x006138e0]      ; 0050bb57 | g_CEditorToolsPtr
    PUSH EDI                            ; 0050bb5d
    CALL shape_edittool.cpp_FUN_0047e760 ; 0050bb5e
        ;   XREF to: 0047e760 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047e760()
    ADD ESP,0x4                         ; 0050bb63
    JMP 0x0050b8ea                      ; 0050bb66
        ;   XREF to: 0050b8ea (UNCONDITIONAL_JUMP)  ; LAB_0050b8ea
    PUSH 0x5e0643                       ; 0050bb6b | = "Disconnecting..."
        ;   Label: LAB_0050bb6b
    MOV ECX,dword ptr [0x006138e0]      ; 0050bb70 | g_CEditorToolsPtr
    PUSH ECX                            ; 0050bb76
    CALL shape_edittool.cpp_FUN_0047db40 ; 0050bb77
        ;   XREF to: 0047db40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_0047db40(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 0050bb7c
    CALL wincore_winrun.cpp_FUN_0058e9e0 ; 0050bb7f
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058e9e0()
    MOV EDX,EAX                         ; 0050bb84
    MOV EBX,0x12                        ; 0050bb86
    SAR EDX,0x1f                        ; 0050bb8b
    IDIV EBX                            ; 0050bb8e
    MOV EBX,dword ptr [0x01d34e34]      ; 0050bb90 | DAT_01d34e34
    MOV EDX,EAX                         ; 0050bb96
    SUB EAX,EBX                         ; 0050bb98
    MOV dword ptr [0x01d34e34],EDX      ; 0050bb9a | DAT_01d34e34
    TEST EAX,EAX                        ; 0050bba0
    JL 0x0050bc82                       ; 0050bba2
        ;   XREF to: 0050bc82 (CONDITIONAL_JUMP)  ; LAB_0050bc82
    CMP EAX,0x20000                     ; 0050bba8
    JLE 0x0050bbb4                      ; 0050bbad
        ;   XREF to: 0050bbb4 (CONDITIONAL_JUMP)  ; LAB_0050bbb4
    MOV EAX,0x20000                     ; 0050bbaf
    MOV EDI,dword ptr [0x01d34e38]      ; 0050bbb4 | DAT_01d34e38
        ;   Label: LAB_0050bbb4
    ADD EDI,EAX                         ; 0050bbba
    MOV dword ptr [ESP + 0x18],EDI      ; 0050bbbc
    MOV dword ptr [0x01d34e38],EDI      ; 0050bbc0 | DAT_01d34e38
    MOV EAX,dword ptr [ESI + 0x1c]      ; 0050bbc6
    LEA EBX,[EDI + 0xffe20000]          ; 0050bbc9
    CMP EAX,0x1                         ; 0050bbcf
    JLE 0x0050bc6e                      ; 0050bbd2
        ;   XREF to: 0050bc6e (CONDITIONAL_JUMP)  ; LAB_0050bc6e
    LEA EAX,[ESI + 0x20]                ; 0050bbd8
    MOV dword ptr [ESP + 0x10],EAX      ; 0050bbdb
    CALL wincore_winrun.cpp_FUN_0058e9e0 ; 0050bbdf
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058e9e0()
        ;   Label: LAB_0050bbdf
    MOV EDX,EAX                         ; 0050bbe4
    MOV ECX,0x12                        ; 0050bbe6
    SAR EDX,0x1f                        ; 0050bbeb
    IDIV ECX                            ; 0050bbee
    MOV ECX,dword ptr [0x01d34e34]      ; 0050bbf0 | DAT_01d34e34
    MOV EDX,EAX                         ; 0050bbf6
    SUB EAX,ECX                         ; 0050bbf8
    MOV dword ptr [0x01d34e34],EDX      ; 0050bbfa | DAT_01d34e34
    TEST EAX,EAX                        ; 0050bc00
    JL 0x0050bc89                       ; 0050bc02
        ;   XREF to: 0050bc89 (CONDITIONAL_JUMP)  ; LAB_0050bc89
    CMP EAX,0x20000                     ; 0050bc08
    JLE 0x0050bc14                      ; 0050bc0d
        ;   XREF to: 0050bc14 (CONDITIONAL_JUMP)  ; LAB_0050bc14
    MOV EAX,0x20000                     ; 0050bc0f
    MOV EDI,dword ptr [0x01d34e38]      ; 0050bc14 | DAT_01d34e38
        ;   Label: LAB_0050bc14
    ADD EDI,EAX                         ; 0050bc1a
    MOV EDX,dword ptr [ESP + 0x18]      ; 0050bc1c
    MOV EAX,EDI                         ; 0050bc20
    SUB EAX,EDX                         ; 0050bc22
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050bc24
    FILD dword ptr [ESP + 0x1c]         ; 0050bc28
    FMUL double ptr [0x005e0685]        ; 0050bc2c | DAT_005e0685
    MOV dword ptr [0x01d34e38],EDI      ; 0050bc32 | DAT_01d34e38
    FST float ptr [ESP + 0x4]           ; 0050bc38
    FLDZ                                ; 0050bc3c
    FCOMPP                              ; 0050bc3e
    FNSTSW AX                           ; 0050bc40
    SAHF                                ; 0050bc42
    JBE 0x0050bc4b                      ; 0050bc43
        ;   XREF to: 0050bc4b (CONDITIONAL_JUMP)  ; LAB_0050bc4b
    XOR ECX,ECX                         ; 0050bc45
    MOV dword ptr [ESP + 0x4],ECX       ; 0050bc47
    FLD float ptr [ESP + 0x4]           ; 0050bc4b
        ;   Label: LAB_0050bc4b
    FCOMP double ptr [0x005e0695]       ; 0050bc4f | DAT_005e0695
    FNSTSW AX                           ; 0050bc55
    SAHF                                ; 0050bc57
    JBE 0x0050bc8d                      ; 0050bc58
        ;   XREF to: 0050bc8d (CONDITIONAL_JUMP)  ; LAB_0050bc8d
    PUSH 0x5e0654                       ; 0050bc5a | = "Couldn't connect to all clients to di..."
        ;   Label: LAB_0050bc5a
    MOV EDX,dword ptr [0x006138e0]      ; 0050bc5f | g_CEditorToolsPtr
    PUSH EDX                            ; 0050bc65
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0047bda0 ; 0050bc66
        ;   XREF to: 0047bda0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0047bda0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0050bc6b
    MOV ECX,dword ptr [0x006138e0]      ; 0050bc6e | g_CEditorToolsPtr
        ;   Label: LAB_0050bc6e
    PUSH ECX                            ; 0050bc74
    CALL shape_edittool.cpp_FUN_0047e760 ; 0050bc75
        ;   XREF to: 0047e760 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047e760()
    ADD ESP,0x4                         ; 0050bc7a
    JMP 0x0050b8f3                      ; 0050bc7d
        ;   XREF to: 0050b8f3 (UNCONDITIONAL_JUMP)  ; LAB_0050b8f3
    XOR EAX,EAX                         ; 0050bc82
        ;   Label: LAB_0050bc82
    JMP 0x0050bbb4                      ; 0050bc84
        ;   XREF to: 0050bbb4 (UNCONDITIONAL_JUMP)  ; LAB_0050bbb4
    XOR EAX,EAX                         ; 0050bc89
        ;   Label: LAB_0050bc89
    JMP 0x0050bc14                      ; 0050bc8b
        ;   XREF to: 0050bc14 (UNCONDITIONAL_JUMP)  ; LAB_0050bc14
    CMP dword ptr [ESP + 0x4],0x40a00000 ; 0050bc8d
        ;   Label: LAB_0050bc8d
    JG 0x0050bc5a                       ; 0050bc95
        ;   XREF to: 0050bc5a (CONDITIONAL_JUMP)  ; LAB_0050bc5a
    FLD float ptr [ESP + 0x4]           ; 0050bc97
    FMUL float ptr [0x005e068d]         ; 0050bc9b | DAT_005e068d
    PUSH 0x459c4000                     ; 0050bca1
    SUB ESP,0x4                         ; 0050bca6
    MOV EAX,[0x006138e0]                ; 0050bca9 | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 0050bcae
    PUSH EAX                            ; 0050bcb1
    MOV EDI,0x20000                     ; 0050bcb2
    CALL shape_edittool.cpp_FUN_0047dc40 ; 0050bcb7
        ;   XREF to: 0047dc40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047dc40()
    ADD ESP,0xc                         ; 0050bcbc
    MOV EAX,[0x01d34e38]                ; 0050bcbf | DAT_01d34e38
        ;   Label: LAB_0050bcbf
    SUB EAX,EBX                         ; 0050bcc4
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050bcc6
    FILD dword ptr [ESP + 0x1c]         ; 0050bcca
    FMUL double ptr [0x005e0685]        ; 0050bcce | DAT_005e0685
    FST float ptr [ESP + 0xc]           ; 0050bcd4
    FLDZ                                ; 0050bcd8
    FCOMPP                              ; 0050bcda
    FNSTSW AX                           ; 0050bcdc
    SAHF                                ; 0050bcde
    JBE 0x0050bce7                      ; 0050bcdf
        ;   XREF to: 0050bce7 (CONDITIONAL_JUMP)  ; LAB_0050bce7
    XOR EAX,EAX                         ; 0050bce1
    MOV dword ptr [ESP + 0xc],EAX       ; 0050bce3
    FLD float ptr [ESP + 0xc]           ; 0050bce7
        ;   Label: LAB_0050bce7
    FCOMP double ptr [0x005e0695]       ; 0050bceb | DAT_005e0695
    FNSTSW AX                           ; 0050bcf1
    SAHF                                ; 0050bcf3
    JBE 0x0050bcfe                      ; 0050bcf4
        ;   XREF to: 0050bcfe (CONDITIONAL_JUMP)  ; LAB_0050bcfe
    MOV dword ptr [ESP + 0xc],0x41f00000 ; 0050bcf6
    FLD float ptr [ESP + 0xc]           ; 0050bcfe
        ;   Label: LAB_0050bcfe
    FCOMP double ptr [0x005e069d]       ; 0050bd02 | DAT_005e069d
    FNSTSW AX                           ; 0050bd08
    SAHF                                ; 0050bd0a
    JNC 0x0050bd4c                      ; 0050bd0b
        ;   XREF to: 0050bd4c (CONDITIONAL_JUMP)  ; LAB_0050bd4c
    CALL wincore_winrun.cpp_FUN_0058e9e0 ; 0050bd0d
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058e9e0()
    MOV EDX,EAX                         ; 0050bd12
    MOV ECX,0x12                        ; 0050bd14
    SAR EDX,0x1f                        ; 0050bd19
    IDIV ECX                            ; 0050bd1c
    MOV ECX,dword ptr [0x01d34e34]      ; 0050bd1e | DAT_01d34e34
    MOV EDX,EAX                         ; 0050bd24
    SUB EDX,ECX                         ; 0050bd26
    MOV [0x01d34e34],EAX                ; 0050bd28 | DAT_01d34e34
    TEST EDX,EDX                        ; 0050bd2d
    JL 0x0050bd44                       ; 0050bd2f
        ;   XREF to: 0050bd44 (CONDITIONAL_JUMP)  ; LAB_0050bd44
    CMP EDX,0x20000                     ; 0050bd31
    JG 0x0050bd48                       ; 0050bd37
        ;   XREF to: 0050bd48 (CONDITIONAL_JUMP)  ; LAB_0050bd48
    ADD dword ptr [0x01d34e38],EDX      ; 0050bd39 | DAT_01d34e38
        ;   Label: LAB_0050bd39
    JMP 0x0050bcbf                      ; 0050bd3f
        ;   XREF to: 0050bcbf (UNCONDITIONAL_JUMP)  ; LAB_0050bcbf
    XOR EDX,EDX                         ; 0050bd44
        ;   Label: LAB_0050bd44
    JMP 0x0050bd39                      ; 0050bd46
        ;   XREF to: 0050bd39 (UNCONDITIONAL_JUMP)  ; LAB_0050bd39
    MOV EDX,EDI                         ; 0050bd48
        ;   Label: LAB_0050bd48
    JMP 0x0050bd39                      ; 0050bd4a
        ;   XREF to: 0050bd39 (UNCONDITIONAL_JUMP)  ; LAB_0050bd39
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0050bd4c
        ;   Label: LAB_0050bd4c
    XOR EBX,EBX                         ; 0050bd4f
    TEST ECX,ECX                        ; 0050bd51
    JLE 0x0050bd7e                      ; 0050bd53
        ;   XREF to: 0050bd7e (CONDITIONAL_JUMP)  ; LAB_0050bd7e
    MOV EDI,dword ptr [ESP + 0x10]      ; 0050bd55
    ADD EDI,0x1c                        ; 0050bd59
    CMP EBX,dword ptr [ESI + 0x124]     ; 0050bd5c
        ;   Label: LAB_0050bd5c
    JZ 0x0050bd70                       ; 0050bd62
        ;   XREF to: 0050bd70 (CONDITIONAL_JUMP)  ; LAB_0050bd70
    PUSH 0x1                            ; 0050bd64
    PUSH EDI                            ; 0050bd66
    PUSH ESI                            ; 0050bd67
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0 ; 0050bd68
        ;   XREF to: 0050f4b0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 0050bd6d
    INC EBX                             ; 0050bd70
        ;   Label: LAB_0050bd70
    MOV EDX,dword ptr [ESI + 0x1c]      ; 0050bd71
    ADD EDI,0x80                        ; 0050bd74
    CMP EBX,EDX                         ; 0050bd7a
    JL 0x0050bd5c                       ; 0050bd7c
        ;   XREF to: 0050bd5c (CONDITIONAL_JUMP)  ; LAB_0050bd5c
    PUSH ESI                            ; 0050bd7e
        ;   Label: LAB_0050bd7e
    MOV EBX,dword ptr [0x01d34e38]      ; 0050bd7f | DAT_01d34e38
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_0050c190 ; 0050bd85
        ;   XREF to: 0050c190 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_0050c190(CNetGame * this_ptr)
    MOV EDX,dword ptr [ESI + 0x1c]      ; 0050bd8a
    ADD ESP,0x4                         ; 0050bd8d
    CMP EDX,0x1                         ; 0050bd90
    JG 0x0050bbdf                       ; 0050bd93
        ;   XREF to: 0050bbdf (CONDITIONAL_JUMP)  ; LAB_0050bbdf
    MOV ECX,dword ptr [0x006138e0]      ; 0050bd99 | g_CEditorToolsPtr
    PUSH ECX                            ; 0050bd9f
    CALL shape_edittool.cpp_FUN_0047e760 ; 0050bda0
        ;   XREF to: 0047e760 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047e760()
    ADD ESP,0x4                         ; 0050bda5
    JMP 0x0050b8f3                      ; 0050bda8
        ;   XREF to: 0050b8f3 (UNCONDITIONAL_JUMP)  ; LAB_0050b8f3

