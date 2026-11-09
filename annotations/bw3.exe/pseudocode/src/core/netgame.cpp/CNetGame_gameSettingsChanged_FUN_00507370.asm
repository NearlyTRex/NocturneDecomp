; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00507370(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_runLobby_FUN_00505a30 at 00505d47
;   core_netgame.cpp_FUN_00504d60 at 00504e4c
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005cae17
;   TerminatedCString s_CNetGame_gameSettingsCha_005cae2b
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01da6474
;   undefined4 DAT_01da6478
;   undefined4 DAT_01da6484
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   wincore_winrun.cpp_FUN_005806a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00507370
        ;   Label: core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00507370
    PUSH ESI                            ; 00507371
    PUSH EDI                            ; 00507372
    PUSH EBP                            ; 00507373
    MOV ESI,dword ptr [0x01da6478]      ; 00507374 | DAT_01da6478
    MOV EDI,dword ptr [0x01da6484]      ; 0050737a | DAT_01da6484
    MOV EBX,dword ptr [ESP + 0x14]      ; 00507380
    CMP dword ptr [EBX],0x1             ; 00507384
    JNZ 0x00507418                      ; 00507387
        ;   XREF to: 00507418 (CONDITIONAL_JUMP)  ; LAB_00507418
    MOV EDI,dword ptr [0x01da6484]      ; 0050738d | DAT_01da6484
        ;   Label: LAB_0050738d
    INC EDI                             ; 00507393
    MOV dword ptr [0x01da6484],EDI      ; 00507394 | DAT_01da6484
    CALL wincore_winrun.cpp_FUN_005806a0 ; 0050739a
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005806a0()
    MOV EDX,EAX                         ; 0050739f
    MOV ECX,0x12                        ; 005073a1
    SAR EDX,0x1f                        ; 005073a6
    IDIV ECX                            ; 005073a9
    MOV EDI,dword ptr [0x01da6484]      ; 005073ab | DAT_01da6484
    MOV ECX,dword ptr [0x01da6474]      ; 005073b1 | DAT_01da6474
    MOV EDX,EAX                         ; 005073b7
    SUB EAX,ECX                         ; 005073b9
    MOV dword ptr [0x01da6474],EDX      ; 005073bb | DAT_01da6474
    TEST EAX,EAX                        ; 005073c1
    JL 0x00507440                       ; 005073c3
        ;   XREF to: 00507440 (CONDITIONAL_JUMP)  ; LAB_00507440
    MOV ESI,dword ptr [0x01da6478]      ; 005073c9 | DAT_01da6478
    CMP EAX,0x20000                     ; 005073cf
    JLE 0x005073db                      ; 005073d4
        ;   XREF to: 005073db (CONDITIONAL_JUMP)  ; LAB_005073db
    MOV EAX,0x20000                     ; 005073d6
    MOV EBP,dword ptr [EBX + 0x1c]      ; 005073db
        ;   Label: LAB_005073db
    ADD ESI,EAX                         ; 005073de
    XOR EAX,EAX                         ; 005073e0
    TEST EBP,EBP                        ; 005073e2
    JLE 0x00507407                      ; 005073e4
        ;   XREF to: 00507407 (CONDITIONAL_JUMP)  ; LAB_00507407
    MOV EDX,EBX                         ; 005073e6
    CMP EAX,dword ptr [EBX + 0x124]     ; 005073e8
        ;   Label: LAB_005073e8
    JZ 0x0050744a                       ; 005073ee
        ;   XREF to: 0050744a (CONDITIONAL_JUMP)  ; LAB_0050744a
    LEA ECX,[ESI + 0xffe20000]          ; 005073f0
    MOV dword ptr [EDX + 0x58],ECX      ; 005073f6
    INC EAX                             ; 005073f9
        ;   Label: LAB_005073f9
    MOV ECX,dword ptr [EBX + 0x1c]      ; 005073fa
    ADD EDX,0x80                        ; 005073fd
    CMP EAX,ECX                         ; 00507403
    JL 0x005073e8                       ; 00507405
        ;   XREF to: 005073e8 (CONDITIONAL_JUMP)  ; LAB_005073e8
    MOV dword ptr [0x01da6484],EDI      ; 00507407 | DAT_01da6484
        ;   Label: LAB_00507407
    MOV dword ptr [0x01da6478],ESI      ; 0050740d | DAT_01da6478
    POP EBP                             ; 00507413
    POP EDI                             ; 00507414
    POP ESI                             ; 00507415
    POP EBX                             ; 00507416
    RET                                 ; 00507417
    MOV ECX,0x5cae17                    ; 00507418 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00507418
    MOV EBP,0x88c                       ; 0050741d
    PUSH 0x5cae2b                       ; 00507422 | = "CNetGame::gameSettingsChanged - shoul..."
    MOV dword ptr [0x01d71de0],ECX      ; 00507427 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0050742d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00507433
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00507438
    JMP 0x0050738d                      ; 0050743b
        ;   XREF to: 0050738d (UNCONDITIONAL_JUMP)  ; LAB_0050738d
    MOV ESI,dword ptr [0x01da6478]      ; 00507440 | DAT_01da6478
        ;   Label: LAB_00507440
    XOR EAX,EAX                         ; 00507446
    JMP 0x005073db                      ; 00507448
        ;   XREF to: 005073db (UNCONDITIONAL_JUMP)  ; LAB_005073db
    MOV dword ptr [EDX + 0x54],EDI      ; 0050744a
        ;   Label: LAB_0050744a
    JMP 0x005073f9                      ; 0050744d
        ;   XREF to: 005073f9 (UNCONDITIONAL_JUMP)  ; LAB_005073f9

