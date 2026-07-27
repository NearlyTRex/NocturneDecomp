; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_newmsg_cpp_getLocalizedString_FUN_004ee370(undefined4 param_1)
;
;
; XREF[41]:
;   core_door.cpp_CDoor_getMoveType_FUN_004564b0 at 004564d8
;   core_game.cpp_CGame_displayActStats_FUN_004a6680 at 004a67bd
;   core_game.cpp_CGame_finishAct_FUN_004a6a10 at 004a6a7e
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a05ac
;   core_game.cpp_CGame_promptLoadGame_FUN_004a6570 at 004a6615
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049df0a
;   core_game.cpp_CGame_showCustomizableKeys_FUN_0049b4e0 at 0049b54c
;   core_game.cpp_FUN_0049cc10 at 0049d4dc
;   core_game.cpp_FUN_0049f930 at 0049ffbe
;   core_game.cpp_FUN_004a3b90 at 004a3e62
;   ... and 31 more
;
; Referenced Globals:
;   undefined4 DAT_01d16814
;   undefined4 DAT_01d16818
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005649c0
;   support_newmsg.cpp_findLocalizedString_FUN_004ee2f0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004ee370
        ;   Label: support_newmsg.cpp_getLocalizedString_FUN_004ee370
    PUSH EBP                            ; 004ee371
    MOV EDI,dword ptr [ESP + 0xc]       ; 004ee372
    CMP dword ptr [0x01d16814],0x0      ; 004ee376 | DAT_01d16814
    JZ 0x004ee393                       ; 004ee37d
        ;   XREF to: 004ee393 (CONDITIONAL_JUMP)  ; LAB_004ee393
    PUSH ESI                            ; 004ee37f
    PUSH EBX                            ; 004ee380
    MOV EBX,dword ptr [0x01d16818]      ; 004ee381 | DAT_01d16818
    DEC EBX                             ; 004ee387
    TEST EBX,EBX                        ; 004ee388
    JGE 0x004ee398                      ; 004ee38a
        ;   XREF to: 004ee398 (CONDITIONAL_JUMP)  ; LAB_004ee398
    MOV EAX,EDI                         ; 004ee38c
    POP EBX                             ; 004ee38e
    POP ESI                             ; 004ee38f
    POP EBP                             ; 004ee390
    POP EDI                             ; 004ee391
    RET                                 ; 004ee392
    MOV EAX,EDI                         ; 004ee393
        ;   Label: LAB_004ee393
    POP EBP                             ; 004ee395
    POP EDI                             ; 004ee396
    RET                                 ; 004ee397
    MOV EDX,EBX                         ; 004ee398
        ;   Label: LAB_004ee398
    MOV EAX,EBX                         ; 004ee39a
    SAR EDX,0x1f                        ; 004ee39c
    SUB EAX,EDX                         ; 004ee39f
    SAR EAX,0x1                         ; 004ee3a1
    MOV ESI,EAX                         ; 004ee3a3
    LEA EBP,[EAX*0x4 + 0x0]             ; 004ee3a5
    MOV ECX,dword ptr [EBP + 0x1d1681c] ; 004ee3ac
    PUSH ECX                            ; 004ee3b2
    PUSH EDI                            ; 004ee3b3
    CALL crt_string.c__strcmp_FUN_005649c0 ; 004ee3b4
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strcmp_FUN_005649c0()
    ADD ESP,0x8                         ; 004ee3b9
    TEST EAX,EAX                        ; 004ee3bc
    JL 0x004ee3cd                       ; 004ee3be
        ;   XREF to: 004ee3cd (CONDITIONAL_JUMP)  ; LAB_004ee3cd
    JG 0x004ee3df                       ; 004ee3c0
        ;   XREF to: 004ee3df (CONDITIONAL_JUMP)  ; LAB_004ee3df
    MOV EAX,dword ptr [EBP + 0x1d16fec] ; 004ee3c2
    POP EBX                             ; 004ee3c8
    POP ESI                             ; 004ee3c9
    POP EBP                             ; 004ee3ca
    POP EDI                             ; 004ee3cb
    RET                                 ; 004ee3cc
    DEC ESI                             ; 004ee3cd
        ;   Label: LAB_004ee3cd
    PUSH ESI                            ; 004ee3ce
    PUSH 0x0                            ; 004ee3cf
    PUSH EDI                            ; 004ee3d1
    CALL support_newmsg.cpp_findLocalizedString_FUN_004ee2f0 ; 004ee3d2
        ;   XREF to: 004ee2f0 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_findLocalizedString_FUN_004ee2f0()
    ADD ESP,0xc                         ; 004ee3d7
    POP EBX                             ; 004ee3da
    POP ESI                             ; 004ee3db
    POP EBP                             ; 004ee3dc
    POP EDI                             ; 004ee3dd
    RET                                 ; 004ee3de
    PUSH EBX                            ; 004ee3df
        ;   Label: LAB_004ee3df
    INC ESI                             ; 004ee3e0
    PUSH ESI                            ; 004ee3e1
    PUSH EDI                            ; 004ee3e2
    CALL support_newmsg.cpp_findLocalizedString_FUN_004ee2f0 ; 004ee3e3
        ;   XREF to: 004ee2f0 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_findLocalizedString_FUN_004ee2f0()
    ADD ESP,0xc                         ; 004ee3e8
    POP EBX                             ; 004ee3eb
    POP ESI                             ; 004ee3ec
    POP EBP                             ; 004ee3ed
    POP EDI                             ; 004ee3ee
    RET                                 ; 004ee3ef

