; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_netgame_cpp_FUN_0050b420(CNetGame *param_1)
;
;
; XREF[1]:
;   core_game.cpp_FUN_004bd2f0 at 004bd2fa
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_02653630
;
; Called Functions:
;   core_netgame.cpp_FUN_0050b790
;   core_netgame.cpp_FUN_0050b8d0
;   core_netgame.cpp_FUN_0050ce70
;   shape_edittool.cpp_FUN_0047be90
;   support_trisock.cpp_createNetworkAddr_FUN_00578e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b420
        ;   Label: core_netgame.cpp_FUN_0050b420
    PUSH ESI                            ; 0050b421
    PUSH EDI                            ; 0050b422
    SUB ESP,0x8                         ; 0050b423
    MOV EBX,dword ptr [ESP + 0x18]      ; 0050b426
    PUSH 0x5e0464                       ; 0050b42a
    MOV EDX,dword ptr [0x006138e0]      ; 0050b42f | g_CEditorToolsPtr
    PUSH EDX                            ; 0050b435
    CALL shape_edittool.cpp_FUN_0047be90 ; 0050b436
        ;   XREF to: 0047be90 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be90()
    ADD ESP,0x8                         ; 0050b43b
    PUSH 0x0                            ; 0050b43e
    PUSH EBX                            ; 0050b440
    CALL core_netgame.cpp_FUN_0050b8d0  ; 0050b441
        ;   XREF to: 0050b8d0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_FUN_0050b8d0(CNetGame * this_ptr, int perform_handshake)
    MOV EAX,[0x00616494]                ; 0050b446 | g_CGamePtr
    MOV dword ptr [EBX + 0x1c],0x0      ; 0050b44b
    ADD ESP,0x8                         ; 0050b452
    MOV ECX,dword ptr [EAX + 0xd8]      ; 0050b455
    PUSH ECX                            ; 0050b45b
    MOV ESI,dword ptr [EAX + 0xd4]      ; 0050b45c
    PUSH ESI                            ; 0050b462
    LEA EAX,[EBX + 0x8]                 ; 0050b463
    PUSH EAX                            ; 0050b466
    PUSH 0x1ddf                         ; 0050b467
    MOV EDI,dword ptr [0x02653630]      ; 0050b46c | DAT_02653630
    PUSH EDI                            ; 0050b472
    LEA EAX,[ESP + 0x14]                ; 0050b473
    PUSH EAX                            ; 0050b477
    CALL support_trisock.cpp_createNetworkAddr_FUN_00578e60 ; 0050b478
        ;   XREF to: 00578e60 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_createNetworkAddr_FUN_00578e60()
    ADD ESP,0xc                         ; 0050b47d
    PUSH EAX                            ; 0050b480
    PUSH EBX                            ; 0050b481
    CALL core_netgame.cpp_FUN_0050ce70  ; 0050b482
        ;   XREF to: 0050ce70 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_FUN_0050ce70()
    ADD ESP,0x14                        ; 0050b487
    MOV dword ptr [EBX + 0x124],EAX     ; 0050b48a
    PUSH EBX                            ; 0050b490
    MOV dword ptr [EBX + 0x120],EAX     ; 0050b491
    CALL core_netgame.cpp_FUN_0050b790  ; 0050b497
        ;   XREF to: 0050b790 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_FUN_0050b790(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0050b49c
    TEST EAX,EAX                        ; 0050b49f
    JNZ 0x0050b4aa                      ; 0050b4a1
        ;   XREF to: 0050b4aa (CONDITIONAL_JUMP)  ; LAB_0050b4aa
    ADD ESP,0x8                         ; 0050b4a3
    POP EDI                             ; 0050b4a6
    POP ESI                             ; 0050b4a7
    POP EBX                             ; 0050b4a8
    RET                                 ; 0050b4a9
    MOV dword ptr [EBX + 0x4],0x1       ; 0050b4aa
        ;   Label: LAB_0050b4aa
    MOV EAX,0x1                         ; 0050b4b1
    MOV dword ptr [EBX],0x1             ; 0050b4b6
    ADD ESP,0x8                         ; 0050b4bc
    POP EDI                             ; 0050b4bf
    POP ESI                             ; 0050b4c0
    POP EBX                             ; 0050b4c1
    RET                                 ; 0050b4c2

