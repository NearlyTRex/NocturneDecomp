; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_resetKeyState_FUN_004b93e0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_game.cpp_CGame_processJoystickControls_FUN_004b97b0 at 004b97b6
;   core_game.cpp_CGame_showFullscreenBitmap_FUN_004bec20 at 004befea
;   core_menu.cpp_calibrateGamepad_FUN_004e7dc0 at 004e7e9e
;   core_menu.cpp_configureCustomKeyBindings_FUN_004eae80 at 004ebfa8
;   core_menu.cpp_getSinglePressedKey_FUN_004eadf0 at 004eae26
;
; Referenced Globals:
;   CKeys* g_CKeysPtr = 01d70a78
;   int g_JoyXPos
;   int g_JoyYPos
;   DWORD g_JoyButtons
;   undefined4 g_JoyButtons+1
;   int g_JoystickPresent
;   void* g_PTR_01d70a78
;
; Called Functions:
;   engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0
;   engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0
;   wincore_winrun.cpp_getJoystickState_FUN_00581d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b93e0
        ;   Label: core_game.cpp_CGame_resetKeyState_FUN_004b93e0
    PUSH ESI                            ; 004b93e1
    PUSH EDI                            ; 004b93e2
    PUSH EBP                            ; 004b93e3
    SUB ESP,0x4                         ; 004b93e4
    MOV EBX,dword ptr [ESP + 0x18]      ; 004b93e7
    MOV EAX,[0x01c6e260]                ; 004b93eb | g_JoyButtons
    MOV EDX,0x2                         ; 004b93f0
    MOV dword ptr [ESP],EAX             ; 004b93f5
    MOV dword ptr [0x01c6e264],EDX      ; 004b93f8 | g_JoystickPresent
    CALL wincore_winrun.cpp_getJoystickState_FUN_00581d10 ; 004b93fe
        ;   XREF to: 00581d10 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_getJoystickState_FUN_00581d10()
    TEST byte ptr [0x01c6e260],0x1      ; 004b9403 | g_JoyButtons
    JZ 0x004b96b9                       ; 004b940a
        ;   XREF to: 004b96b9 (CONDITIONAL_JUMP)  ; LAB_004b96b9
    TEST byte ptr [ESP],0x1             ; 004b9410
    JNZ 0x004b942a                      ; 004b9414
        ;   XREF to: 004b942a (CONDITIONAL_JUMP)  ; LAB_004b942a
    PUSH 0x202                          ; 004b9416
    MOV ESI,dword ptr [0x00600284]      ; 004b941b | g_CKeysPtr
    PUSH ESI                            ; 004b9421 | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0 ; 004b9422
        ;   XREF to: 004df5b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b9427
        ;   Label: LAB_004b9427
    TEST byte ptr [0x01c6e260],0x2      ; 004b942a | g_JoyButtons
        ;   Label: LAB_004b942a
    JZ 0x004b96cf                       ; 004b9431
        ;   XREF to: 004b96cf (CONDITIONAL_JUMP)  ; LAB_004b96cf
    TEST byte ptr [ESP],0x2             ; 004b9437
    JNZ 0x004b9451                      ; 004b943b
        ;   XREF to: 004b9451 (CONDITIONAL_JUMP)  ; LAB_004b9451
    PUSH 0x203                          ; 004b943d
    MOV EBP,dword ptr [0x00600284]      ; 004b9442 | g_CKeysPtr
    PUSH EBP                            ; 004b9448 | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0 ; 004b9449
        ;   XREF to: 004df5b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b944e
        ;   Label: LAB_004b944e
    TEST byte ptr [0x01c6e260],0x4      ; 004b9451 | g_JoyButtons
        ;   Label: LAB_004b9451
    JZ 0x004b96e5                       ; 004b9458
        ;   XREF to: 004b96e5 (CONDITIONAL_JUMP)  ; LAB_004b96e5
    TEST byte ptr [ESP],0x4             ; 004b945e
    JNZ 0x004b9478                      ; 004b9462
        ;   XREF to: 004b9478 (CONDITIONAL_JUMP)  ; LAB_004b9478
    PUSH 0x204                          ; 004b9464
    MOV EDX,dword ptr [0x00600284]      ; 004b9469 | g_CKeysPtr
    PUSH EDX                            ; 004b946f | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0 ; 004b9470
        ;   XREF to: 004df5b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b9475
        ;   Label: LAB_004b9475
    TEST byte ptr [0x01c6e260],0x8      ; 004b9478 | g_JoyButtons
        ;   Label: LAB_004b9478
    JZ 0x004b96fa                       ; 004b947f
        ;   XREF to: 004b96fa (CONDITIONAL_JUMP)  ; LAB_004b96fa
    TEST byte ptr [ESP],0x8             ; 004b9485
    JNZ 0x004b949f                      ; 004b9489
        ;   XREF to: 004b949f (CONDITIONAL_JUMP)  ; LAB_004b949f
    PUSH 0x205                          ; 004b948b
    MOV ESI,dword ptr [0x00600284]      ; 004b9490 | g_CKeysPtr
    PUSH ESI                            ; 004b9496 | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0 ; 004b9497
        ;   XREF to: 004df5b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b949c
        ;   Label: LAB_004b949c
    TEST byte ptr [0x01c6e260],0x10     ; 004b949f | g_JoyButtons
        ;   Label: LAB_004b949f
    JZ 0x004b9710                       ; 004b94a6
        ;   XREF to: 004b9710 (CONDITIONAL_JUMP)  ; LAB_004b9710
    TEST byte ptr [ESP],0x10            ; 004b94ac
    JNZ 0x004b94c6                      ; 004b94b0
        ;   XREF to: 004b94c6 (CONDITIONAL_JUMP)  ; LAB_004b94c6
    PUSH 0x206                          ; 004b94b2
    MOV EBP,dword ptr [0x00600284]      ; 004b94b7 | g_CKeysPtr
    PUSH EBP                            ; 004b94bd | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0 ; 004b94be
        ;   XREF to: 004df5b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b94c3
        ;   Label: LAB_004b94c3
    TEST byte ptr [0x01c6e260],0x20     ; 004b94c6 | g_JoyButtons
        ;   Label: LAB_004b94c6
    JZ 0x004b9726                       ; 004b94cd
        ;   XREF to: 004b9726 (CONDITIONAL_JUMP)  ; LAB_004b9726
    TEST byte ptr [ESP],0x20            ; 004b94d3
    JNZ 0x004b94ed                      ; 004b94d7
        ;   XREF to: 004b94ed (CONDITIONAL_JUMP)  ; LAB_004b94ed
    PUSH 0x207                          ; 004b94d9
    MOV EDX,dword ptr [0x00600284]      ; 004b94de | g_CKeysPtr
    PUSH EDX                            ; 004b94e4 | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0 ; 004b94e5
        ;   XREF to: 004df5b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b94ea
        ;   Label: LAB_004b94ea
    TEST byte ptr [0x01c6e260],0x40     ; 004b94ed | g_JoyButtons
        ;   Label: LAB_004b94ed
    JZ 0x004b973b                       ; 004b94f4
        ;   XREF to: 004b973b (CONDITIONAL_JUMP)  ; LAB_004b973b
    TEST byte ptr [ESP],0x40            ; 004b94fa
    JNZ 0x004b9514                      ; 004b94fe
        ;   XREF to: 004b9514 (CONDITIONAL_JUMP)  ; LAB_004b9514
    PUSH 0x208                          ; 004b9500
    MOV ESI,dword ptr [0x00600284]      ; 004b9505 | g_CKeysPtr
    PUSH ESI                            ; 004b950b | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0 ; 004b950c
        ;   XREF to: 004df5b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b9511
        ;   Label: LAB_004b9511
    TEST byte ptr [0x01c6e260],0x80     ; 004b9514 | g_JoyButtons
        ;   Label: LAB_004b9514
    JZ 0x004b9751                       ; 004b951b
        ;   XREF to: 004b9751 (CONDITIONAL_JUMP)  ; LAB_004b9751
    TEST byte ptr [ESP],0x80            ; 004b9521
    JNZ 0x004b953b                      ; 004b9525
        ;   XREF to: 004b953b (CONDITIONAL_JUMP)  ; LAB_004b953b
    PUSH 0x209                          ; 004b9527
    MOV EBP,dword ptr [0x00600284]      ; 004b952c | g_CKeysPtr
    PUSH EBP                            ; 004b9532 | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0 ; 004b9533
        ;   XREF to: 004df5b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b9538
        ;   Label: LAB_004b9538
    TEST byte ptr [0x01c6e261],0x1      ; 004b953b | g_JoyButtons+1
        ;   Label: LAB_004b953b
    JZ 0x004b9767                       ; 004b9542
        ;   XREF to: 004b9767 (CONDITIONAL_JUMP)  ; LAB_004b9767
    TEST byte ptr [ESP + 0x1],0x1       ; 004b9548
    JNZ 0x004b9563                      ; 004b954d
        ;   XREF to: 004b9563 (CONDITIONAL_JUMP)  ; LAB_004b9563
    PUSH 0x20a                          ; 004b954f
    MOV EDX,dword ptr [0x00600284]      ; 004b9554 | g_CKeysPtr
    PUSH EDX                            ; 004b955a | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0 ; 004b955b
        ;   XREF to: 004df5b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b9560
        ;   Label: LAB_004b9560
    TEST byte ptr [0x01c6e261],0x2      ; 004b9563 | g_JoyButtons+1
        ;   Label: LAB_004b9563
    JZ 0x004b977c                       ; 004b956a
        ;   XREF to: 004b977c (CONDITIONAL_JUMP)  ; LAB_004b977c
    TEST byte ptr [ESP + 0x1],0x2       ; 004b9570
    JNZ 0x004b958b                      ; 004b9575
        ;   XREF to: 004b958b (CONDITIONAL_JUMP)  ; LAB_004b958b
    PUSH 0x20b                          ; 004b9577
    MOV ESI,dword ptr [0x00600284]      ; 004b957c | g_CKeysPtr
    PUSH ESI                            ; 004b9582 | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0 ; 004b9583
        ;   XREF to: 004df5b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b9588
        ;   Label: LAB_004b9588
    PUSH 0x251                          ; 004b958b
        ;   Label: LAB_004b958b
    MOV EDI,dword ptr [0x00600284]      ; 004b9590 | g_CKeysPtr
    PUSH EDI                            ; 004b9596 | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0 ; 004b9597
        ;   XREF to: 004df5c0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b959c
    PUSH 0x252                          ; 004b959f
    MOV EBP,dword ptr [0x00600284]      ; 004b95a4 | g_CKeysPtr
    PUSH EBP                            ; 004b95aa | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0 ; 004b95ab
        ;   XREF to: 004df5c0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b95b0
    PUSH 0x253                          ; 004b95b3
    MOV EAX,[0x00600284]                ; 004b95b8 | g_CKeysPtr
    PUSH EAX                            ; 004b95bd | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0 ; 004b95be
        ;   XREF to: 004df5c0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b95c3
    PUSH 0x254                          ; 004b95c6
    MOV EDX,dword ptr [0x00600284]      ; 004b95cb | g_CKeysPtr
    PUSH EDX                            ; 004b95d1 | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0 ; 004b95d2
        ;   XREF to: 004df5c0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0(CKeys * this_ptr, EInputCodeType key_code)
    MOV EDX,dword ptr [EBX + 0xbc]      ; 004b95d7
    MOV ECX,dword ptr [EBX + 0xc4]      ; 004b95dd
    SUB EDX,ECX                         ; 004b95e3
    MOV EAX,EDX                         ; 004b95e5
    SAR EDX,0x1f                        ; 004b95e7
    SUB EAX,EDX                         ; 004b95ea
    SAR EAX,0x1                         ; 004b95ec
    MOV EDX,dword ptr [EBX + 0xbc]      ; 004b95ee
    MOV ESI,dword ptr [0x01c6e250]      ; 004b95f4 | g_JoyXPos
    SUB EDX,EAX                         ; 004b95fa
    ADD ESP,0x8                         ; 004b95fc
    CMP EDX,ESI                         ; 004b95ff
    JLE 0x004b9617                      ; 004b9601
        ;   XREF to: 004b9617 (CONDITIONAL_JUMP)  ; LAB_004b9617
    PUSH 0x251                          ; 004b9603
    MOV EDI,dword ptr [0x00600284]      ; 004b9608 | g_CKeysPtr
    PUSH EDI                            ; 004b960e | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0 ; 004b960f
        ;   XREF to: 004df5b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b9614
    MOV EBP,dword ptr [EBX + 0xbc]      ; 004b9617
        ;   Label: LAB_004b9617
    MOV EDX,dword ptr [EBX + 0xc8]      ; 004b961d
    SUB EDX,EBP                         ; 004b9623
    MOV EAX,EDX                         ; 004b9625
    SAR EDX,0x1f                        ; 004b9627
    SUB EAX,EDX                         ; 004b962a
    SAR EAX,0x1                         ; 004b962c
    MOV ECX,dword ptr [0x01c6e250]      ; 004b962e | g_JoyXPos
    ADD EAX,EBP                         ; 004b9634
    CMP EAX,ECX                         ; 004b9636
    JGE 0x004b964e                      ; 004b9638
        ;   XREF to: 004b964e (CONDITIONAL_JUMP)  ; LAB_004b964e
    PUSH 0x252                          ; 004b963a
    MOV ESI,dword ptr [0x00600284]      ; 004b963f | g_CKeysPtr
    PUSH ESI                            ; 004b9645 | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0 ; 004b9646
        ;   XREF to: 004df5b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b964b
    MOV EDI,dword ptr [EBX + 0xcc]      ; 004b964e
        ;   Label: LAB_004b964e
    MOV EDX,dword ptr [EBX + 0xc0]      ; 004b9654
    SUB EDX,EDI                         ; 004b965a
    MOV EAX,EDX                         ; 004b965c
    SAR EDX,0x1f                        ; 004b965e
    SUB EAX,EDX                         ; 004b9661
    SAR EAX,0x1                         ; 004b9663
    MOV EDX,dword ptr [EBX + 0xc0]      ; 004b9665
    MOV EBP,dword ptr [0x01c6e254]      ; 004b966b | g_JoyYPos
    SUB EDX,EAX                         ; 004b9671
    CMP EDX,EBP                         ; 004b9673
    JLE 0x004b968a                      ; 004b9675
        ;   XREF to: 004b968a (CONDITIONAL_JUMP)  ; LAB_004b968a
    PUSH 0x253                          ; 004b9677
    MOV EAX,[0x00600284]                ; 004b967c | g_CKeysPtr
    PUSH EAX                            ; 004b9681 | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0 ; 004b9682
        ;   XREF to: 004df5b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b9687
    MOV ECX,dword ptr [EBX + 0xc0]      ; 004b968a
        ;   Label: LAB_004b968a
    MOV EDX,dword ptr [EBX + 0xd0]      ; 004b9690
    SUB EDX,ECX                         ; 004b9696
    MOV EAX,EDX                         ; 004b9698
    SAR EDX,0x1f                        ; 004b969a
    SUB EAX,EDX                         ; 004b969d
    SAR EAX,0x1                         ; 004b969f
    MOV EDI,dword ptr [0x01c6e254]      ; 004b96a1 | g_JoyYPos
    ADD EAX,ECX                         ; 004b96a7
    CMP EAX,EDI                         ; 004b96a9
    JL 0x004b9792                       ; 004b96ab
        ;   XREF to: 004b9792 (CONDITIONAL_JUMP)  ; LAB_004b9792
    ADD ESP,0x4                         ; 004b96b1
    POP EBP                             ; 004b96b4
    POP EDI                             ; 004b96b5
    POP ESI                             ; 004b96b6
    POP EBX                             ; 004b96b7
    RET                                 ; 004b96b8
    PUSH 0x202                          ; 004b96b9
        ;   Label: LAB_004b96b9
    MOV ECX,dword ptr [0x00600284]      ; 004b96be | g_CKeysPtr
    PUSH ECX                            ; 004b96c4 | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0 ; 004b96c5
        ;   XREF to: 004df5c0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004b9427                      ; 004b96ca
        ;   XREF to: 004b9427 (UNCONDITIONAL_JUMP)  ; LAB_004b9427
    PUSH 0x203                          ; 004b96cf
        ;   Label: LAB_004b96cf
    MOV EDI,dword ptr [0x00600284]      ; 004b96d4 | g_CKeysPtr
    PUSH EDI                            ; 004b96da | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0 ; 004b96db
        ;   XREF to: 004df5c0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004b944e                      ; 004b96e0
        ;   XREF to: 004b944e (UNCONDITIONAL_JUMP)  ; LAB_004b944e
    PUSH 0x204                          ; 004b96e5
        ;   Label: LAB_004b96e5
    MOV EAX,[0x00600284]                ; 004b96ea | g_CKeysPtr
    PUSH EAX                            ; 004b96ef | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0 ; 004b96f0
        ;   XREF to: 004df5c0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004b9475                      ; 004b96f5
        ;   XREF to: 004b9475 (UNCONDITIONAL_JUMP)  ; LAB_004b9475
    PUSH 0x205                          ; 004b96fa
        ;   Label: LAB_004b96fa
    MOV ECX,dword ptr [0x00600284]      ; 004b96ff | g_CKeysPtr
    PUSH ECX                            ; 004b9705 | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0 ; 004b9706
        ;   XREF to: 004df5c0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004b949c                      ; 004b970b
        ;   XREF to: 004b949c (UNCONDITIONAL_JUMP)  ; LAB_004b949c
    PUSH 0x206                          ; 004b9710
        ;   Label: LAB_004b9710
    MOV EDI,dword ptr [0x00600284]      ; 004b9715 | g_CKeysPtr
    PUSH EDI                            ; 004b971b | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0 ; 004b971c
        ;   XREF to: 004df5c0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004b94c3                      ; 004b9721
        ;   XREF to: 004b94c3 (UNCONDITIONAL_JUMP)  ; LAB_004b94c3
    PUSH 0x207                          ; 004b9726
        ;   Label: LAB_004b9726
    MOV EAX,[0x00600284]                ; 004b972b | g_CKeysPtr
    PUSH EAX                            ; 004b9730 | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0 ; 004b9731
        ;   XREF to: 004df5c0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004b94ea                      ; 004b9736
        ;   XREF to: 004b94ea (UNCONDITIONAL_JUMP)  ; LAB_004b94ea
    PUSH 0x208                          ; 004b973b
        ;   Label: LAB_004b973b
    MOV ECX,dword ptr [0x00600284]      ; 004b9740 | g_CKeysPtr
    PUSH ECX                            ; 004b9746 | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0 ; 004b9747
        ;   XREF to: 004df5c0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004b9511                      ; 004b974c
        ;   XREF to: 004b9511 (UNCONDITIONAL_JUMP)  ; LAB_004b9511
    PUSH 0x209                          ; 004b9751
        ;   Label: LAB_004b9751
    MOV EDI,dword ptr [0x00600284]      ; 004b9756 | g_CKeysPtr
    PUSH EDI                            ; 004b975c | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0 ; 004b975d
        ;   XREF to: 004df5c0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004b9538                      ; 004b9762
        ;   XREF to: 004b9538 (UNCONDITIONAL_JUMP)  ; LAB_004b9538
    PUSH 0x20a                          ; 004b9767
        ;   Label: LAB_004b9767
    MOV EAX,[0x00600284]                ; 004b976c | g_CKeysPtr
    PUSH EAX                            ; 004b9771 | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0 ; 004b9772
        ;   XREF to: 004df5c0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004b9560                      ; 004b9777
        ;   XREF to: 004b9560 (UNCONDITIONAL_JUMP)  ; LAB_004b9560
    PUSH 0x20b                          ; 004b977c
        ;   Label: LAB_004b977c
    MOV ECX,dword ptr [0x00600284]      ; 004b9781 | g_CKeysPtr
    PUSH ECX                            ; 004b9787 | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0 ; 004b9788
        ;   XREF to: 004df5c0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004b9588                      ; 004b978d
        ;   XREF to: 004b9588 (UNCONDITIONAL_JUMP)  ; LAB_004b9588
    PUSH 0x254                          ; 004b9792
        ;   Label: LAB_004b9792
    MOV EBP,dword ptr [0x00600284]      ; 004b9797 | g_CKeysPtr
    PUSH EBP                            ; 004b979d | g_PTR_01d70a78
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0 ; 004b979e
        ;   XREF to: 004df5b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b97a3
    ADD ESP,0x4                         ; 004b97a6
    POP EBP                             ; 004b97a9
    POP EDI                             ; 004b97aa
    POP ESI                             ; 004b97ab
    POP EBX                             ; 004b97ac
    RET                                 ; 004b97ad

