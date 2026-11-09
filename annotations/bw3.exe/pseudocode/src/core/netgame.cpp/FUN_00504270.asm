; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_netgame_cpp_FUN_00504270(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_00503fb0 at 00504012
;   core_netgame.cpp_FUN_00503efc at 00503f77
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;   undefined4 DAT_01da6474
;   undefined4 DAT_01da6478
;
; Called Functions:
;   core_netgame.cpp_FUN_00504c10
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40
;   support_trisock.cpp_CSocket_bindSocket_FUN_0056f970
;   support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30
;   support_trisock.cpp_CSocket_createUDPSocket_FUN_0056f930
;   support_trisock.cpp_CSocket_getSocketName_FUN_0056fd00
;   support_trisock.cpp_CSocket_setSocketBlocking_FUN_0056fd60
;   wincore_winrun.cpp_FUN_005806a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504270
        ;   Label: core_netgame.cpp_FUN_00504270
    PUSH ESI                            ; 00504271
    PUSH EBP                            ; 00504272
    MOV ESI,dword ptr [ESP + 0x10]      ; 00504273
    PUSH 0x5ca5b9                       ; 00504277
    MOV EDX,dword ptr [0x005fb140]      ; 0050427c | g_CEditorToolsPtr
    PUSH EDX                            ; 00504282
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0 ; 00504283
        ;   XREF to: 0047cfa0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00504288
    LEA EBX,[ESI + 0x180]               ; 0050428b
    PUSH EBX                            ; 00504291
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30 ; 00504292
        ;   XREF to: 0056fc30 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30(CSocket * this_ptr)
    ADD ESP,0x4                         ; 00504297
    PUSH EBX                            ; 0050429a
    CALL support_trisock.cpp_CSocket_createUDPSocket_FUN_0056f930 ; 0050429b
        ;   XREF to: 0056f930 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_createUDPSocket_FUN_0056f930(CSocket * this_ptr)
    ADD ESP,0x4                         ; 005042a0
    TEST EAX,EAX                        ; 005042a3
    JZ 0x0050433a                       ; 005042a5
        ;   XREF to: 0050433a (CONDITIONAL_JUMP)  ; LAB_0050433a
    PUSH 0x0                            ; 005042ab
    PUSH EBX                            ; 005042ad
    CALL support_trisock.cpp_CSocket_setSocketBlocking_FUN_0056fd60 ; 005042ae
        ;   XREF to: 0056fd60 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_setSocketBlocking_FUN_0056fd60(CSocket * this_ptr, int blocking_mode)
    ADD ESP,0x8                         ; 005042b3
    TEST EAX,EAX                        ; 005042b6
    JZ 0x00504354                       ; 005042b8
        ;   XREF to: 00504354 (CONDITIONAL_JUMP)  ; LAB_00504354
    PUSH 0x1ddf                         ; 005042be
    PUSH EBX                            ; 005042c3
    CALL support_trisock.cpp_CSocket_bindSocket_FUN_0056f970 ; 005042c4
        ;   XREF to: 0056f970 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_bindSocket_FUN_0056f970(CSocket * this_ptr, ushort port)
    ADD ESP,0x8                         ; 005042c9
    TEST EAX,EAX                        ; 005042cc
    JZ 0x0050436e                       ; 005042ce
        ;   XREF to: 0050436e (CONDITIONAL_JUMP)  ; LAB_0050436e
    MOV EDX,dword ptr [ESI + 0x124]     ; 005042d4
    LEA EAX,[ESI + 0x20]                ; 005042da
    SHL EDX,0x7                         ; 005042dd
    ADD EAX,EDX                         ; 005042e0
    ADD EAX,0x1c                        ; 005042e2
    PUSH EAX                            ; 005042e5
    PUSH EBX                            ; 005042e6
    CALL support_trisock.cpp_CSocket_getSocketName_FUN_0056fd00 ; 005042e7
        ;   XREF to: 0056fd00 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_getSocketName_FUN_0056fd00(CSocket * this_ptr, SNetworkAddr * out_address)
    ADD ESP,0x8                         ; 005042ec
    TEST EAX,EAX                        ; 005042ef
    JZ 0x00504388                       ; 005042f1
        ;   XREF to: 00504388 (CONDITIONAL_JUMP)  ; LAB_00504388
    PUSH ESI                            ; 005042f7
    MOV EBP,0x1                         ; 005042f8
    CALL core_netgame.cpp_FUN_00504c10  ; 005042fd
        ;   XREF to: 00504c10 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_FUN_00504c10(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 00504302
    MOV dword ptr [0x01da6478],EBP      ; 00504305 | DAT_01da6478
    CALL wincore_winrun.cpp_FUN_005806a0 ; 0050430b
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005806a0()
    MOV EDX,EAX                         ; 00504310
    MOV EBX,0x12                        ; 00504312
    SAR EDX,0x1f                        ; 00504317
    IDIV EBX                            ; 0050431a
    PUSH 0x5ca651                       ; 0050431c
    MOV [0x01da6474],EAX                ; 00504321 | DAT_01da6474
    MOV EAX,[0x005fb140]                ; 00504326 | g_CEditorToolsPtr
    PUSH EAX                            ; 0050432b
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0 ; 0050432c
        ;   XREF to: 0047cfa0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00504331
    MOV EAX,EBP                         ; 00504334
    POP EBP                             ; 00504336
    POP ESI                             ; 00504337
    POP EBX                             ; 00504338
    RET                                 ; 00504339
    PUSH 0x5ca5d1                       ; 0050433a
        ;   Label: LAB_0050433a
    MOV ECX,dword ptr [0x005fb140]      ; 0050433f | g_CEditorToolsPtr
    PUSH ECX                            ; 00504345
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 00504346
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0050434b
    XOR EAX,EAX                         ; 0050434e
    POP EBP                             ; 00504350
    POP ESI                             ; 00504351
    POP EBX                             ; 00504352
    RET                                 ; 00504353
    PUSH 0x5ca5ee                       ; 00504354
        ;   Label: LAB_00504354
    MOV EBX,dword ptr [0x005fb140]      ; 00504359 | g_CEditorToolsPtr
    PUSH EBX                            ; 0050435f
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 00504360
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00504365
    XOR EAX,EAX                         ; 00504368
    POP EBP                             ; 0050436a
    POP ESI                             ; 0050436b
    POP EBX                             ; 0050436c
    RET                                 ; 0050436d
    PUSH 0x5ca616                       ; 0050436e
        ;   Label: LAB_0050436e
    MOV ESI,dword ptr [0x005fb140]      ; 00504373 | g_CEditorToolsPtr
    PUSH ESI                            ; 00504379
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 0050437a
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0050437f
    XOR EAX,EAX                         ; 00504382
    POP EBP                             ; 00504384
    POP ESI                             ; 00504385
    POP EBX                             ; 00504386
    RET                                 ; 00504387
    PUSH EDI                            ; 00504388
        ;   Label: LAB_00504388
    PUSH 0x5ca62c                       ; 00504389
    MOV EDI,dword ptr [0x005fb140]      ; 0050438e | g_CEditorToolsPtr
    PUSH EDI                            ; 00504394
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 00504395
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0050439a
    XOR EAX,EAX                         ; 0050439d
    POP EDI                             ; 0050439f
    POP EBP                             ; 005043a0
    POP ESI                             ; 005043a1
    POP EBX                             ; 005043a2
    RET                                 ; 005043a3

