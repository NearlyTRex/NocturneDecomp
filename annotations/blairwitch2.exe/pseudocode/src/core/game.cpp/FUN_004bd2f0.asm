; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004bd2f0(void)
;
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   undefined4 DAT_00618170
;   CNetGame* g_CNetGamePtr = 01d34cb0
;   undefined4 DAT_01cb7b50
;
; Called Functions:
;   core_mission.cpp_CDemonMission_run_FUN_004fcb00
;   core_netgame.cpp_CNetGame_runLobby_FUN_0050cf50
;   core_netgame.cpp_FUN_0050b420
;   core_netgame.cpp_FUN_0050b8d0
;   shape_edittool.cpp_FUN_0047be40
;   shape_edittool.cpp_FUN_0047c970
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004bd2f0
        ;   Label: core_game.cpp_FUN_004bd2f0
    PUSH EDI                            ; 004bd2f1
    PUSH EBP                            ; 004bd2f2
    MOV EDX,dword ptr [0x0061b120]      ; 004bd2f3 | g_CNetGamePtr
    PUSH EDX                            ; 004bd2f9
    CALL core_netgame.cpp_FUN_0050b420  ; 004bd2fa
        ;   XREF to: 0050b420 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_FUN_0050b420()
    ADD ESP,0x4                         ; 004bd2ff
    TEST EAX,EAX                        ; 004bd302
    JZ 0x004bd361                       ; 004bd304
        ;   XREF to: 004bd361 (CONDITIONAL_JUMP)  ; LAB_004bd361
    MOV EAX,[0x0061b120]                ; 004bd306 | g_CNetGamePtr
    PUSH 0x0                            ; 004bd30b
    ADD EAX,0x128                       ; 004bd30d
    PUSH EAX                            ; 004bd312
    PUSH 0x5d87eb                       ; 004bd313
    PUSH 0x5d87f1                       ; 004bd318
    PUSH 0x5d87f7                       ; 004bd31d
    MOV ESI,dword ptr [0x006138e0]      ; 004bd322 | g_CEditorToolsPtr
    PUSH ESI                            ; 004bd328
    CALL shape_edittool.cpp_FUN_0047c970 ; 004bd329
        ;   XREF to: 0047c970 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_0047c970(CEditorTools * this_ptr, char * dialog_title, char * search_directory, char * file_pattern, ...)
    ADD ESP,0x18                        ; 004bd32e
    TEST EAX,EAX                        ; 004bd331
    JZ 0x004bd38b                       ; 004bd333
        ;   XREF to: 004bd38b (CONDITIONAL_JUMP)  ; LAB_004bd38b
    XOR AH,AH                           ; 004bd335
    MOV byte ptr [0x01cb7b50],AH        ; 004bd337 | DAT_01cb7b50
    MOV EDI,dword ptr [0x0061b120]      ; 004bd33d | g_CNetGamePtr
        ;   Label: LAB_004bd33d
    PUSH EDI                            ; 004bd343
    CALL core_netgame.cpp_CNetGame_runLobby_FUN_0050cf50 ; 004bd344
        ;   XREF to: 0050cf50 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_runLobby_FUN_0050cf50(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004bd349
    TEST EAX,EAX                        ; 004bd34c
    JZ 0x004bd38b                       ; 004bd34e
        ;   XREF to: 004bd38b (CONDITIONAL_JUMP)  ; LAB_004bd38b
    MOV EBP,dword ptr [0x00618170]      ; 004bd350 | DAT_00618170
    PUSH EBP                            ; 004bd356
    CALL core_mission.cpp_CDemonMission_run_FUN_004fcb00 ; 004bd357
        ;   XREF to: 004fcb00 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_run_FUN_004fcb00(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004bd35c
    JMP 0x004bd33d                      ; 004bd35f
        ;   XREF to: 004bd33d (UNCONDITIONAL_JUMP)  ; LAB_004bd33d
    PUSH EBX                            ; 004bd361
        ;   Label: LAB_004bd361
    PUSH EAX                            ; 004bd362
    MOV ECX,dword ptr [0x0061b120]      ; 004bd363 | g_CNetGamePtr
    PUSH ECX                            ; 004bd369
    CALL core_netgame.cpp_FUN_0050b8d0  ; 004bd36a
        ;   XREF to: 0050b8d0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_FUN_0050b8d0(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 004bd36f
    PUSH 0x5d87ca                       ; 004bd372
    MOV EBX,dword ptr [0x006138e0]      ; 004bd377 | g_CEditorToolsPtr
    PUSH EBX                            ; 004bd37d
    CALL shape_edittool.cpp_FUN_0047be40 ; 004bd37e
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be40()
    ADD ESP,0x8                         ; 004bd383
    POP EBX                             ; 004bd386
    POP EBP                             ; 004bd387
    POP EDI                             ; 004bd388
    POP ESI                             ; 004bd389
    RET                                 ; 004bd38a
    PUSH 0x1                            ; 004bd38b
        ;   Label: LAB_004bd38b
    MOV EAX,[0x0061b120]                ; 004bd38d | g_CNetGamePtr
    PUSH EAX                            ; 004bd392
    CALL core_netgame.cpp_FUN_0050b8d0  ; 004bd393
        ;   XREF to: 0050b8d0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_FUN_0050b8d0(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 004bd398
    POP EBP                             ; 004bd39b
    POP EDI                             ; 004bd39c
    POP ESI                             ; 004bd39d
    RET                                 ; 004bd39e

