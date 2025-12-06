; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_game.cpp_KeypressesAndCGame_FUN_004dc3e0(CGame * game, SPlayerControl * ctrl)
;
; Parameters:
; CGame *          Stack[0x4]:4   game
; SPlayerControl * Stack[0x8]:4   ctrl
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_game.cpp_CGame_playerControls_FUN_004dbd80 at 004dbdb6
;   core_game.cpp_CallToJoystickStuff_FUN_004dc230 at 004dc248
;   core_game.cpp_SettingCursorPos_FUN_004dccc0 at 004dccd4
;
; Referenced Globals:
;   float FLOAT_0062b875 = 0.01000000
;   float FLOAT_0062b879 = -1
;   float FLOAT_0062b87d = 0.25
;   float FLOAT_0062b881 = 0.05000000
;   double DOUBLE_0062b885 = 0.300000000000000
;   double DOUBLE_0062b88d = 0.0000152587890625
;   float FLOAT_0062b895 = -0.25
;   float FLOAT_0062b899 = 0.1000000
;   double DOUBLE_0062b89d = 0.200000000000000
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CScript* g_CScriptPtr = 0310f858
;   CDemonSet* g_CDemonSetPtr = 03114278
;   char[256] g_KeyboardState
;   undefined4 g_CGameInstance.delta_time_float
;   ... and 9 more
;
; Called Functions:
;   core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10
;   core_inv.cpp_CInventory_selectItem_FUN_004fec10
;   core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
;   core_inv.cpp_CInventory_toggleDetailView_FUN_00501500
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
;   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dc3e0
        ;   Label: core_game.cpp_KeypressesAndCGame_FUN_004dc3e0
    PUSH ESI                            ; 004dc3e1
    PUSH EDI                            ; 004dc3e2
    PUSH EBP                            ; 004dc3e3
    SUB ESP,0x14                        ; 004dc3e4
    MOV EBX,dword ptr [ESP + 0x28]      ; 004dc3e7
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004dc3eb
    CMP dword ptr [EBX + 0x27c],0x0     ; 004dc3ef
    JNZ 0x004dc991                      ; 004dc3f6 | LAB_004dc991
        ;   XREF to: 004dc991 (CONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0x20],0x0      ; 004dc3fc
        ;   Label: LAB_004dc3fc
    MOV EAX,dword ptr [EBX + 0x38]      ; 004dc403
    LEA EDX,[ESI + 0x20]                ; 004dc406
    MOV ECX,dword ptr [EBX + 0x3c]      ; 004dc409
    CMP byte ptr [EAX + 0x2d03e98],0x0  ; 004dc40c | char[256] g_KeyboardState
    JZ 0x004dc9bc                       ; 004dc413 | LAB_004dc9bc
        ;   XREF to: 004dc9bc (CONDITIONAL_JUMP)
    FLD float ptr [EDX]                 ; 004dc419
    FCOMP float ptr [0x0062b879]        ; 004dc41b | float FLOAT_0062b879
    FNSTSW AX                           ; 004dc421
    SAHF                                ; 004dc423
    JBE 0x004dc44c                      ; 004dc424 | LAB_004dc44c
        ;   XREF to: 004dc44c (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 004dc426 | CGame * g_CGamePtr
    FLD float ptr [EAX + 0x264]         ; 004dc42b | g_CGameInstance.delta_time_float
    FDIV float ptr [0x0062b875]         ; 004dc431 | float FLOAT_0062b875
    FSUBR float ptr [EDX]               ; 004dc437
    FST float ptr [EDX]                 ; 004dc439
    FCOMP float ptr [0x0062b879]        ; 004dc43b | float FLOAT_0062b879
    FNSTSW AX                           ; 004dc441
    SAHF                                ; 004dc443
    JNC 0x004dc44c                      ; 004dc444 | LAB_004dc44c
        ;   XREF to: 004dc44c (CONDITIONAL_JUMP)
    MOV dword ptr [EDX],0xbf800000      ; 004dc446
    MOV EAX,dword ptr [EBX + 0x34]      ; 004dc44c
        ;   Label: LAB_004dc44c
    CMP byte ptr [EAX + 0x2d03e98],0x0  ; 004dc44f | char[256] g_KeyboardState
    JZ 0x004dca61                       ; 004dc456 | LAB_004dca61
        ;   XREF to: 004dca61 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x44]      ; 004dc45c
    LEA EDX,[ESI + 0x20]                ; 004dc45f
    MOV ECX,dword ptr [EBX + 0x40]      ; 004dc462
    CMP byte ptr [EAX + 0x2d03e98],0x0  ; 004dc465 | char[256] g_KeyboardState
    JZ 0x004dca01                       ; 004dc46c | LAB_004dca01
        ;   XREF to: 004dca01 (CONDITIONAL_JUMP)
    FLD float ptr [EDX]                 ; 004dc472
    FCOMP float ptr [0x0062b879]        ; 004dc474 | float FLOAT_0062b879
    FNSTSW AX                           ; 004dc47a
    SAHF                                ; 004dc47c
    JBE 0x004dc4a5                      ; 004dc47d | LAB_004dc4a5
        ;   XREF to: 004dc4a5 (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 004dc47f | CGame * g_CGamePtr
    FLD float ptr [EAX + 0x264]         ; 004dc484 | g_CGameInstance.delta_time_float
    FDIV float ptr [0x0062b875]         ; 004dc48a | float FLOAT_0062b875
    FSUBR float ptr [EDX]               ; 004dc490
    FST float ptr [EDX]                 ; 004dc492
    FCOMP float ptr [0x0062b879]        ; 004dc494 | float FLOAT_0062b879
    FNSTSW AX                           ; 004dc49a
    SAHF                                ; 004dc49c
    JNC 0x004dc4a5                      ; 004dc49d | LAB_004dc4a5
        ;   XREF to: 004dc4a5 (CONDITIONAL_JUMP)
    MOV dword ptr [EDX],0xbf800000      ; 004dc49f
    MOV EAX,[0x0067b654]                ; 004dc4a5 | CGame * g_CGamePtr
        ;   Label: LAB_004dc4a5
    FLD float ptr [EAX + 0x264]         ; 004dc4aa | g_CGameInstance.delta_time_float
    FMUL float ptr [0x0062b87d]         ; 004dc4b0 | float FLOAT_0062b87d
    FDIV float ptr [0x0062b881]         ; 004dc4b6 | float FLOAT_0062b881
    FLDZ                                ; 004dc4bc
    LEA EDX,[ESI + 0x24]                ; 004dc4be
    FXCH                                ; 004dc4c1
    FSTP float ptr [ESP]                ; 004dc4c3
    FCOMP float ptr [EDX]               ; 004dc4c6
    FNSTSW AX                           ; 004dc4c8
    SAHF                                ; 004dc4ca
    JBE 0x004dca46                      ; 004dc4cb | LAB_004dca46
        ;   XREF to: 004dca46 (CONDITIONAL_JUMP)
    FLD float ptr [EDX]                 ; 004dc4d1
    FADD float ptr [ESP]                ; 004dc4d3
    FLDZ                                ; 004dc4d6
        ;   Label: LAB_004dc4d6
    FXCH                                ; 004dc4d8
    FSTP float ptr [EDX]                ; 004dc4da
    FCOMP float ptr [EDX]               ; 004dc4dc
    FNSTSW AX                           ; 004dc4de
    SAHF                                ; 004dc4e0
    JNC 0x004dc4e9                      ; 004dc4e1 | LAB_004dc4e9
        ;   XREF to: 004dc4e9 (CONDITIONAL_JUMP)
    MOV dword ptr [EDX],0x0             ; 004dc4e3
        ;   Label: LAB_004dc4e3
    MOV EAX,dword ptr [EBX + 0x60]      ; 004dc4e9
        ;   Label: LAB_004dc4e9
    CMP byte ptr [EAX + 0x2d03e98],0x0  ; 004dc4ec | char[256] g_KeyboardState
    JZ 0x004dcb82                       ; 004dc4f3 | LAB_004dcb82
        ;   XREF to: 004dcb82 (CONDITIONAL_JUMP)
    FILD dword ptr [EBX + 0xa0]         ; 004dc4f9
        ;   Label: LAB_004dc4f9
    FMUL double ptr [0x0062b89d]        ; 004dc4ff | double DOUBLE_0062b89d
    FMUL double ptr [0x0062b88d]        ; 004dc505 | double DOUBLE_0062b88d
    LEA EDX,[ESI + 0x28]                ; 004dc50b
    MOV ECX,dword ptr [EBX + 0x60]      ; 004dc50e
    MOV EAX,dword ptr [EBX + 0x64]      ; 004dc511
    FSTP float ptr [ESP + 0x8]          ; 004dc514
    CMP byte ptr [ECX + 0x2d03e98],0x0  ; 004dc518 | char[256] g_KeyboardState
    JZ 0x004dcbdd                       ; 004dc51f | LAB_004dcbdd
        ;   XREF to: 004dcbdd (CONDITIONAL_JUMP)
    FLD float ptr [EDX]                 ; 004dc525
    FCOMP float ptr [0x0062b895]        ; 004dc527 | float FLOAT_0062b895
    FNSTSW AX                           ; 004dc52d
    SAHF                                ; 004dc52f
    JBE 0x004dc55c                      ; 004dc530 | LAB_004dc55c
        ;   XREF to: 004dc55c (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 004dc532 | CGame * g_CGamePtr
    FLD float ptr [EAX + 0x264]         ; 004dc537 | g_CGameInstance.delta_time_float
    FMUL float ptr [0x0062b87d]         ; 004dc53d | float FLOAT_0062b87d
    FDIV float ptr [ESP + 0x8]          ; 004dc543
    FSUBR float ptr [EDX]               ; 004dc547
    FST float ptr [EDX]                 ; 004dc549
    FCOMP float ptr [0x0062b895]        ; 004dc54b | float FLOAT_0062b895
    FNSTSW AX                           ; 004dc551
    SAHF                                ; 004dc553
    JNC 0x004dc55c                      ; 004dc554 | LAB_004dc55c
        ;   XREF to: 004dc55c (CONDITIONAL_JUMP)
    MOV dword ptr [EDX],0xbe800000      ; 004dc556
    CMP dword ptr [EBX + 0x98],0x0      ; 004dc55c
        ;   Label: LAB_004dc55c
    JZ 0x004dcc48                       ; 004dc563 | LAB_004dcc48
        ;   XREF to: 004dcc48 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x30]      ; 004dc569
    CMP byte ptr [EAX + 0x2d03e98],0x0  ; 004dc56c | char[256] g_KeyboardState
    SETZ AL                             ; 004dc573
    AND EAX,0xff                        ; 004dc576
        ;   Label: LAB_004dc576
    MOV dword ptr [ESI + 0x8],EAX       ; 004dc57b
    MOV EDX,dword ptr [EBX + 0x28]      ; 004dc57e
    MOV AL,byte ptr [EDX + 0x2d82670]   ; 004dc581 | char[600] g_PrevKeyboardState
    CMP AL,byte ptr [EDX + 0x2d03e98]   ; 004dc587 | char[256] g_KeyboardState
    JZ 0x004dc599                       ; 004dc58d | LAB_004dc599
        ;   XREF to: 004dc599 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004dc58f
    MOV AL,byte ptr [EDX + 0x2d03e98]   ; 004dc591 | char[256] g_KeyboardState
    MOV dword ptr [ESI],EAX             ; 004dc597
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004dc599
        ;   Label: LAB_004dc599
    MOV AL,byte ptr [EDX + 0x2d82670]   ; 004dc59c | char[600] g_PrevKeyboardState
    MOV AH,byte ptr [EDX + 0x2d03e98]   ; 004dc5a2 | char[256] g_KeyboardState
    LEA ECX,[ESI + 0x4]                 ; 004dc5a8
    CMP AL,AH                           ; 004dc5ab
    JZ 0x004dc5b9                       ; 004dc5ad | LAB_004dc5b9
        ;   XREF to: 004dc5b9 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004dc5af
    MOV AL,byte ptr [EDX + 0x2d03e98]   ; 004dc5b1 | char[256] g_KeyboardState
    MOV dword ptr [ECX],EAX             ; 004dc5b7
    MOV EAX,[0x02db87d0]                ; 004dc5b9 | int g_LocalHeroIndex
        ;   Label: LAB_004dc5b9
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004dc5be | CHero *[4] g_HeroActors
    PUSH EAX                            ; 004dc5c5
    MOV EDX,dword ptr [EAX + 0x154]     ; 004dc5c6
    CALL dword ptr [EDX + 0x120]        ; 004dc5cc
    ADD ESP,0x4                         ; 004dc5d2
    TEST EAX,EAX                        ; 004dc5d5
    JNZ 0x004dcc56                      ; 004dc5d7 | LAB_004dcc56
        ;   XREF to: 004dcc56 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBX + 0x48]      ; 004dc5dd
    MOV AL,byte ptr [EDX + 0x2d82670]   ; 004dc5e0 | char[600] g_PrevKeyboardState
    MOV AH,byte ptr [EDX + 0x2d03e98]   ; 004dc5e6 | char[256] g_KeyboardState
    LEA ECX,[ESI + 0xc]                 ; 004dc5ec
    CMP AL,AH                           ; 004dc5ef
    JZ 0x004dc5fd                       ; 004dc5f1 | LAB_004dc5fd
        ;   XREF to: 004dc5fd (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004dc5f3
    MOV AL,byte ptr [EDX + 0x2d03e98]   ; 004dc5f5 | char[256] g_KeyboardState
    MOV dword ptr [ECX],EAX             ; 004dc5fb
    MOV EDX,dword ptr [EBX + 0x4c]      ; 004dc5fd
        ;   Label: LAB_004dc5fd
    MOV CL,byte ptr [EDX + 0x2d82670]   ; 004dc600 | char[600] g_PrevKeyboardState
    MOV CH,byte ptr [EDX + 0x2d03e98]   ; 004dc606 | char[256] g_KeyboardState
    LEA EAX,[ESI + 0x10]                ; 004dc60c
    CMP CL,CH                           ; 004dc60f
    JZ 0x004dcc62                       ; 004dc611 | LAB_004dcc62
        ;   XREF to: 004dcc62 (CONDITIONAL_JUMP)
    MOV DL,CH                           ; 004dc617
    AND EDX,0xff                        ; 004dc619
    MOV dword ptr [EAX],EDX             ; 004dc61f
    MOV EDX,dword ptr [EBX + 0x50]      ; 004dc621
        ;   Label: LAB_004dc621
    MOV CL,byte ptr [EDX + 0x2d82670]   ; 004dc624 | char[600] g_PrevKeyboardState
    MOV CH,byte ptr [EDX + 0x2d03e98]   ; 004dc62a | char[256] g_KeyboardState
    LEA EAX,[ESI + 0x14]                ; 004dc630
    CMP CL,CH                           ; 004dc633
    JZ 0x004dcc6d                       ; 004dc635 | LAB_004dcc6d
        ;   XREF to: 004dcc6d (CONDITIONAL_JUMP)
    MOV DL,CH                           ; 004dc63b
    AND EDX,0xff                        ; 004dc63d
    MOV dword ptr [EAX],EDX             ; 004dc643
    MOV EDX,dword ptr [EBX + 0x58]      ; 004dc645
        ;   Label: LAB_004dc645
    MOV CL,byte ptr [EDX + 0x2d82670]   ; 004dc648 | char[600] g_PrevKeyboardState
    MOV CH,byte ptr [EDX + 0x2d03e98]   ; 004dc64e | char[256] g_KeyboardState
    LEA EAX,[ESI + 0x18]                ; 004dc654
    CMP CL,CH                           ; 004dc657
    JZ 0x004dcc78                       ; 004dc659 | LAB_004dcc78
        ;   XREF to: 004dcc78 (CONDITIONAL_JUMP)
    MOV DL,CH                           ; 004dc65f
    AND EDX,0xff                        ; 004dc661
    MOV dword ptr [EAX],EDX             ; 004dc667
    MOV EDX,dword ptr [EBX + 0x5c]      ; 004dc669
        ;   Label: LAB_004dc669
    MOV AL,byte ptr [EDX + 0x2d82670]   ; 004dc66c | char[600] g_PrevKeyboardState
    MOV AH,byte ptr [EDX + 0x2d03e98]   ; 004dc672 | char[256] g_KeyboardState
    ADD ESI,0x1c                        ; 004dc678
    CMP AL,AH                           ; 004dc67b
    JZ 0x004dcc83                       ; 004dc67d | LAB_004dcc83
        ;   XREF to: 004dcc83 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004dc683
    MOV AL,byte ptr [EDX + 0x2d03e98]   ; 004dc685 | char[256] g_KeyboardState
    MOV dword ptr [ESI],EAX             ; 004dc68b
    MOV ECX,dword ptr [EBX + 0x7c]      ; 004dc68d
        ;   Label: LAB_004dc68d
    MOV EAX,[0x0067cf44]                ; 004dc690 | CKeys * g_CKeysPtr
    PUSH ECX                            ; 004dc695
    MOV EDX,dword ptr [EAX]             ; 004dc696 | void * g_CKeysPtr
    PUSH EAX                            ; 004dc698 | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 004dc699
    ADD ESP,0x8                         ; 004dc69c
    TEST EAX,EAX                        ; 004dc69f
    JZ 0x004dc6c3                       ; 004dc6a1 | LAB_004dc6c3
        ;   XREF to: 004dc6c3 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 004dc6a3
    MOV EAX,[0x02db87d0]                ; 004dc6a5 | int g_LocalHeroIndex
    PUSH 0x5                            ; 004dc6aa
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004dc6ac | CHero *[4] g_HeroActors
    PUSH 0x0                            ; 004dc6b3
    ADD EAX,0x1f738                     ; 004dc6b5
    PUSH EAX                            ; 004dc6ba
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004feb10 ; 004dc6bb | void core_inv.cpp_CInventory_selectWeapon_FUN_004feb10(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
        ;   XREF to: 004feb10 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004dc6c0
    MOV ESI,dword ptr [EBX + 0x80]      ; 004dc6c3
        ;   Label: LAB_004dc6c3
    MOV EAX,[0x0067cf44]                ; 004dc6c9 | CKeys * g_CKeysPtr
    PUSH ESI                            ; 004dc6ce
    MOV EDX,dword ptr [EAX]             ; 004dc6cf | void * g_CKeysPtr
    PUSH EAX                            ; 004dc6d1 | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 004dc6d2
    ADD ESP,0x8                         ; 004dc6d5
    TEST EAX,EAX                        ; 004dc6d8
    JZ 0x004dc6fc                       ; 004dc6da | LAB_004dc6fc
        ;   XREF to: 004dc6fc (CONDITIONAL_JUMP)
    PUSH -0x1                           ; 004dc6dc
    MOV EAX,[0x02db87d0]                ; 004dc6de | int g_LocalHeroIndex
    PUSH 0x5                            ; 004dc6e3
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004dc6e5 | CHero *[4] g_HeroActors
    PUSH 0x0                            ; 004dc6ec
    ADD EAX,0x1f738                     ; 004dc6ee
    PUSH EAX                            ; 004dc6f3
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004feb10 ; 004dc6f4 | void core_inv.cpp_CInventory_selectWeapon_FUN_004feb10(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
        ;   XREF to: 004feb10 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004dc6f9
    MOV EDI,dword ptr [EBX + 0x84]      ; 004dc6fc
        ;   Label: LAB_004dc6fc
    MOV EAX,[0x0067cf44]                ; 004dc702 | CKeys * g_CKeysPtr
    PUSH EDI                            ; 004dc707
    MOV EDX,dword ptr [EAX]             ; 004dc708 | void * g_CKeysPtr
    PUSH EAX                            ; 004dc70a | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 004dc70b
    ADD ESP,0x8                         ; 004dc70e
    TEST EAX,EAX                        ; 004dc711
    JZ 0x004dc731                       ; 004dc713 | LAB_004dc731
        ;   XREF to: 004dc731 (CONDITIONAL_JUMP)
    MOV EAX,[0x02db87d0]                ; 004dc715 | int g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004dc71a | CHero *[4] g_HeroActors
    PUSH 0x1                            ; 004dc721
    ADD EAX,0x1f738                     ; 004dc723
    PUSH EAX                            ; 004dc728
    CALL core_inv.cpp_CInventory_selectItem_FUN_004fec10 ; 004dc729 | void core_inv.cpp_CInventory_selectItem_FUN_004fec10(CInventory * this_ptr, int direction)
        ;   XREF to: 004fec10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004dc72e
    MOV EBP,dword ptr [EBX + 0x88]      ; 004dc731
        ;   Label: LAB_004dc731
    MOV EAX,[0x0067cf44]                ; 004dc737 | CKeys * g_CKeysPtr
    PUSH EBP                            ; 004dc73c
    MOV EDX,dword ptr [EAX]             ; 004dc73d | void * g_CKeysPtr
    PUSH EAX                            ; 004dc73f | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 004dc740
    ADD ESP,0x8                         ; 004dc743
    TEST EAX,EAX                        ; 004dc746
    JZ 0x004dc766                       ; 004dc748 | LAB_004dc766
        ;   XREF to: 004dc766 (CONDITIONAL_JUMP)
    MOV EAX,[0x02db87d0]                ; 004dc74a | int g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004dc74f | CHero *[4] g_HeroActors
    PUSH -0x1                           ; 004dc756
    ADD EAX,0x1f738                     ; 004dc758
    PUSH EAX                            ; 004dc75d
    CALL core_inv.cpp_CInventory_selectItem_FUN_004fec10 ; 004dc75e | void core_inv.cpp_CInventory_selectItem_FUN_004fec10(CInventory * this_ptr, int direction)
        ;   XREF to: 004fec10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004dc763
    MOV ECX,dword ptr [EBX + 0x90]      ; 004dc766
        ;   Label: LAB_004dc766
    MOV EAX,[0x0067cf44]                ; 004dc76c | CKeys * g_CKeysPtr
    PUSH ECX                            ; 004dc771
    MOV EDX,dword ptr [EAX]             ; 004dc772 | void * g_CKeysPtr
    PUSH EAX                            ; 004dc774 | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 004dc775
    ADD ESP,0x8                         ; 004dc778
    TEST EAX,EAX                        ; 004dc77b
    JZ 0x004dc79b                       ; 004dc77d | LAB_004dc79b
        ;   XREF to: 004dc79b (CONDITIONAL_JUMP)
    MOV EAX,[0x02db87d0]                ; 004dc77f | int g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004dc784 | CHero *[4] g_HeroActors
    PUSH 0x1                            ; 004dc78b
    ADD EAX,0x1f738                     ; 004dc78d
    PUSH EAX                            ; 004dc792
    CALL core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10 ; 004dc793 | void core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10(CInventory * this_ptr, int direction)
        ;   XREF to: 004fed10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004dc798
    MOV ESI,dword ptr [EBX + 0x8c]      ; 004dc79b
        ;   Label: LAB_004dc79b
    MOV EAX,[0x0067cf44]                ; 004dc7a1 | CKeys * g_CKeysPtr
    PUSH ESI                            ; 004dc7a6
    MOV EDX,dword ptr [EAX]             ; 004dc7a7 | void * g_CKeysPtr
    PUSH EAX                            ; 004dc7a9 | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 004dc7aa
    ADD ESP,0x8                         ; 004dc7ad
    TEST EAX,EAX                        ; 004dc7b0
    JZ 0x004dc7ce                       ; 004dc7b2 | LAB_004dc7ce
        ;   XREF to: 004dc7ce (CONDITIONAL_JUMP)
    MOV EAX,[0x02db87d0]                ; 004dc7b4 | int g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004dc7b9 | CHero *[4] g_HeroActors
    ADD EAX,0x1f738                     ; 004dc7c0
    PUSH EAX                            ; 004dc7c5
    CALL core_inv.cpp_CInventory_toggleDetailView_FUN_00501500 ; 004dc7c6 | void core_inv.cpp_CInventory_toggleDetailView_FUN_00501500(CInventory * this_ptr)
        ;   XREF to: 00501500 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004dc7cb
    MOV EDI,dword ptr [EBX + 0x68]      ; 004dc7ce
        ;   Label: LAB_004dc7ce
    MOV EAX,[0x0067cf44]                ; 004dc7d1 | CKeys * g_CKeysPtr
    PUSH EDI                            ; 004dc7d6
    MOV EDX,dword ptr [EAX]             ; 004dc7d7 | void * g_CKeysPtr
    PUSH EAX                            ; 004dc7d9 | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 004dc7da
    ADD ESP,0x8                         ; 004dc7dd
    TEST EAX,EAX                        ; 004dc7e0
    JZ 0x004dc804                       ; 004dc7e2 | LAB_004dc804
        ;   XREF to: 004dc804 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 004dc7e4
    MOV EAX,[0x02db87d0]                ; 004dc7e6 | int g_LocalHeroIndex
    PUSH 0x0                            ; 004dc7eb
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004dc7ed | CHero *[4] g_HeroActors
    PUSH 0x0                            ; 004dc7f4
    ADD EAX,0x1f738                     ; 004dc7f6
    PUSH EAX                            ; 004dc7fb
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004feb10 ; 004dc7fc | void core_inv.cpp_CInventory_selectWeapon_FUN_004feb10(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
        ;   XREF to: 004feb10 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004dc801
    MOV EBP,dword ptr [EBX + 0x6c]      ; 004dc804
        ;   Label: LAB_004dc804
    MOV EAX,[0x0067cf44]                ; 004dc807 | CKeys * g_CKeysPtr
    PUSH EBP                            ; 004dc80c
    MOV EDX,dword ptr [EAX]             ; 004dc80d | void * g_CKeysPtr
    PUSH EAX                            ; 004dc80f | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 004dc810
    ADD ESP,0x8                         ; 004dc813
    TEST EAX,EAX                        ; 004dc816
    JZ 0x004dc83a                       ; 004dc818 | LAB_004dc83a
        ;   XREF to: 004dc83a (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 004dc81a
    MOV EAX,[0x02db87d0]                ; 004dc81c | int g_LocalHeroIndex
    PUSH 0x1                            ; 004dc821
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004dc823 | CHero *[4] g_HeroActors
    PUSH 0x0                            ; 004dc82a
    ADD EAX,0x1f738                     ; 004dc82c
    PUSH EAX                            ; 004dc831
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004feb10 ; 004dc832 | void core_inv.cpp_CInventory_selectWeapon_FUN_004feb10(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
        ;   XREF to: 004feb10 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004dc837
    MOV ECX,dword ptr [EBX + 0x70]      ; 004dc83a
        ;   Label: LAB_004dc83a
    MOV EDX,dword ptr [0x0067cf44]      ; 004dc83d | void * g_CKeysPtr | CKeys * g_CKeysPtr
    PUSH ECX                            ; 004dc843
    MOV EAX,dword ptr [EDX]             ; 004dc844 | void * g_CKeysPtr
    PUSH EDX                            ; 004dc846 | void * g_CKeysPtr
    CALL dword ptr [EAX + 0x4]          ; 004dc847
    ADD ESP,0x8                         ; 004dc84a
    TEST EAX,EAX                        ; 004dc84d
    JZ 0x004dc871                       ; 004dc84f | LAB_004dc871
        ;   XREF to: 004dc871 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 004dc851
    MOV EAX,[0x02db87d0]                ; 004dc853 | int g_LocalHeroIndex
    PUSH 0x2                            ; 004dc858
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004dc85a | CHero *[4] g_HeroActors
    PUSH 0x0                            ; 004dc861
    ADD EAX,0x1f738                     ; 004dc863
    PUSH EAX                            ; 004dc868
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004feb10 ; 004dc869 | void core_inv.cpp_CInventory_selectWeapon_FUN_004feb10(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
        ;   XREF to: 004feb10 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004dc86e
    MOV ESI,dword ptr [EBX + 0x74]      ; 004dc871
        ;   Label: LAB_004dc871
    MOV EAX,[0x0067cf44]                ; 004dc874 | CKeys * g_CKeysPtr
    PUSH ESI                            ; 004dc879
    MOV EDX,dword ptr [EAX]             ; 004dc87a | void * g_CKeysPtr
    PUSH EAX                            ; 004dc87c | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 004dc87d
    ADD ESP,0x8                         ; 004dc880
    TEST EAX,EAX                        ; 004dc883
    JZ 0x004dc8a7                       ; 004dc885 | LAB_004dc8a7
        ;   XREF to: 004dc8a7 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 004dc887
    MOV EAX,[0x02db87d0]                ; 004dc889 | int g_LocalHeroIndex
    PUSH 0x4                            ; 004dc88e
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004dc890 | CHero *[4] g_HeroActors
    PUSH 0x0                            ; 004dc897
    ADD EAX,0x1f738                     ; 004dc899
    PUSH EAX                            ; 004dc89e
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004feb10 ; 004dc89f | void core_inv.cpp_CInventory_selectWeapon_FUN_004feb10(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
        ;   XREF to: 004feb10 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004dc8a4
    MOV EDI,dword ptr [EBX + 0x78]      ; 004dc8a7
        ;   Label: LAB_004dc8a7
    MOV EAX,[0x0067cf44]                ; 004dc8aa | CKeys * g_CKeysPtr
    PUSH EDI                            ; 004dc8af
    MOV EDX,dword ptr [EAX]             ; 004dc8b0 | void * g_CKeysPtr
    PUSH EAX                            ; 004dc8b2 | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 004dc8b3
    ADD ESP,0x8                         ; 004dc8b6
    TEST EAX,EAX                        ; 004dc8b9
    JZ 0x004dc8dd                       ; 004dc8bb | LAB_004dc8dd
        ;   XREF to: 004dc8dd (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 004dc8bd
    MOV EAX,[0x02db87d0]                ; 004dc8bf | int g_LocalHeroIndex
    PUSH 0x3                            ; 004dc8c4
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004dc8c6 | CHero *[4] g_HeroActors
    PUSH 0x0                            ; 004dc8cd
    ADD EAX,0x1f738                     ; 004dc8cf
    PUSH EAX                            ; 004dc8d4
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004feb10 ; 004dc8d5 | void core_inv.cpp_CInventory_selectWeapon_FUN_004feb10(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
        ;   XREF to: 004feb10 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004dc8da
    MOV EBP,dword ptr [EBX + 0x54]      ; 004dc8dd
        ;   Label: LAB_004dc8dd
    MOV EAX,[0x0067cf44]                ; 004dc8e0 | CKeys * g_CKeysPtr
    PUSH EBP                            ; 004dc8e5
    MOV EDX,dword ptr [EAX]             ; 004dc8e6 | void * g_CKeysPtr
    PUSH EAX                            ; 004dc8e8 | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 004dc8e9
    ADD ESP,0x8                         ; 004dc8ec
    TEST EAX,EAX                        ; 004dc8ef
    JZ 0x004dc989                       ; 004dc8f1 | LAB_004dc989
        ;   XREF to: 004dc989 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x240],0x0     ; 004dc8f7
    SETZ AL                             ; 004dc8fe
    AND EAX,0xff                        ; 004dc901
    MOV dword ptr [EBX + 0x240],EAX     ; 004dc906
    JZ 0x004dcc8e                       ; 004dc90c | LAB_004dcc8e
        ;   XREF to: 004dcc8e (CONDITIONAL_JUMP)
    MOV EAX,[0x02db87d0]                ; 004dc912 | int g_LocalHeroIndex
    SHL EAX,0x2                         ; 004dc917
    MOV ESI,dword ptr [EAX + 0x2db87c0] ; 004dc91a | CHero *[4] g_HeroActors
    TEST ESI,ESI                        ; 004dc920
    JZ 0x004dcc8e                       ; 004dc922 | LAB_004dcc8e
        ;   XREF to: 004dcc8e (CONDITIONAL_JUMP)
    PUSH ESI                            ; 004dc928
    MOV EDX,dword ptr [ESI + 0x154]     ; 004dc929
    CALL dword ptr [EDX + 0x120]        ; 004dc92f
    ADD ESP,0x4                         ; 004dc935
    TEST EAX,EAX                        ; 004dc938
    JZ 0x004dcc8e                       ; 004dc93a | LAB_004dcc8e
        ;   XREF to: 004dcc8e (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x240],0x0     ; 004dc940
    MOV EDX,dword ptr [0x00680d50]      ; 004dc94a | CScript g_CScriptInstance | CScript * g_CScriptPtr
        ;   Label: LAB_004dc94a
    PUSH 0x1                            ; 004dc950
    MOV EBP,dword ptr [EDX + 0xc]       ; 004dc952 | DAT_0310f864
    PUSH EBP                            ; 004dc955
    MOV EAX,[0x006810c8]                ; 004dc956 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH EAX                            ; 004dc95b | CDemonSet g_CDemonSetInstance
    MOV EBX,dword ptr [EAX + 0x15aea4]  ; 004dc95c | g_CDemonSetInstance.selected_camera_index
    CALL core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 ; 004dc962 | int core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0(CDemonSet * this_ptr, CDemonActor * actor, int force_evaluation_mode)
        ;   XREF to: 005751d0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00680d50]                ; 004dc967 | CScript * g_CScriptPtr
    MOV dword ptr [EAX + 0x10],0x0      ; 004dc96c | DAT_0310f868
    MOV EAX,[0x006810c8]                ; 004dc973 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x15aea4]  ; 004dc978 | g_CDemonSetInstance.selected_camera_index
    ADD ESP,0xc                         ; 004dc97e
    CMP EBX,EDX                         ; 004dc981
    JZ 0x004dcca3                       ; 004dc983 | LAB_004dcca3
        ;   XREF to: 004dcca3 (CONDITIONAL_JUMP)
    ADD ESP,0x14                        ; 004dc989
        ;   Label: LAB_004dc989
    POP EBP                             ; 004dc98c
    POP EDI                             ; 004dc98d
    POP ESI                             ; 004dc98e
    POP EBX                             ; 004dc98f
    RET                                 ; 004dc990
    PUSH 0x200                          ; 004dc991
        ;   Label: LAB_004dc991
    MOV EAX,[0x0067cf44]                ; 004dc996 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 004dc99b | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 004dc99c | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 004dc99e
    ADD ESP,0x8                         ; 004dc9a1
    MOV EAX,[0x0067cf44]                ; 004dc9a4 | CKeys * g_CKeysPtr
    PUSH 0x201                          ; 004dc9a9
    MOV EDX,dword ptr [EAX]             ; 004dc9ae | void * g_CKeysPtr
    PUSH EAX                            ; 004dc9b0 | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 004dc9b1
    ADD ESP,0x8                         ; 004dc9b4
    JMP 0x004dc3fc                      ; 004dc9b7 | LAB_004dc3fc
        ;   XREF to: 004dc3fc (UNCONDITIONAL_JUMP)
    CMP byte ptr [ECX + 0x2d03e98],0x0  ; 004dc9bc | char[256] g_KeyboardState
        ;   Label: LAB_004dc9bc
    JZ 0x004dc44c                       ; 004dc9c3 | LAB_004dc44c
        ;   XREF to: 004dc44c (CONDITIONAL_JUMP)
    CMP dword ptr [EDX],0x3f800000      ; 004dc9c9
    JGE 0x004dc44c                      ; 004dc9cf | LAB_004dc44c
        ;   XREF to: 004dc44c (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 004dc9d5 | CGame * g_CGamePtr
    FLD float ptr [EAX + 0x264]         ; 004dc9da | g_CGameInstance.delta_time_float
    FDIV float ptr [0x0062b875]         ; 004dc9e0 | float FLOAT_0062b875
    FADD float ptr [EDX]                ; 004dc9e6
    FSTP float ptr [EDX]                ; 004dc9e8
    CMP dword ptr [EDX],0x3f800000      ; 004dc9ea
    JLE 0x004dc44c                      ; 004dc9f0 | LAB_004dc44c
        ;   XREF to: 004dc44c (CONDITIONAL_JUMP)
    MOV dword ptr [EDX],0x3f800000      ; 004dc9f6
    JMP 0x004dc44c                      ; 004dc9fc | LAB_004dc44c
        ;   XREF to: 004dc44c (UNCONDITIONAL_JUMP)
    CMP byte ptr [ECX + 0x2d03e98],0x0  ; 004dca01 | char[256] g_KeyboardState
        ;   Label: LAB_004dca01
    JZ 0x004dc4a5                       ; 004dca08 | LAB_004dc4a5
        ;   XREF to: 004dc4a5 (CONDITIONAL_JUMP)
    CMP dword ptr [EDX],0x3f800000      ; 004dca0e
    JGE 0x004dc4a5                      ; 004dca14 | LAB_004dc4a5
        ;   XREF to: 004dc4a5 (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 004dca1a | CGame * g_CGamePtr
    FLD float ptr [EAX + 0x264]         ; 004dca1f | g_CGameInstance.delta_time_float
    FDIV float ptr [0x0062b875]         ; 004dca25 | float FLOAT_0062b875
    FADD float ptr [EDX]                ; 004dca2b
    FSTP float ptr [EDX]                ; 004dca2d
    CMP dword ptr [EDX],0x3f800000      ; 004dca2f
    JLE 0x004dc4a5                      ; 004dca35 | LAB_004dc4a5
        ;   XREF to: 004dc4a5 (CONDITIONAL_JUMP)
    MOV dword ptr [EDX],0x3f800000      ; 004dca3b
    JMP 0x004dc4a5                      ; 004dca41 | LAB_004dc4a5
        ;   XREF to: 004dc4a5 (UNCONDITIONAL_JUMP)
    FLD float ptr [EDX]                 ; 004dca46
        ;   Label: LAB_004dca46
    FSUB float ptr [ESP]                ; 004dca48
    FLDZ                                ; 004dca4b
    FXCH                                ; 004dca4d
    FSTP float ptr [EDX]                ; 004dca4f
    FCOMP float ptr [EDX]               ; 004dca51
    FNSTSW AX                           ; 004dca53
    SAHF                                ; 004dca55
    JBE 0x004dc4e9                      ; 004dca56 | LAB_004dc4e9
        ;   XREF to: 004dc4e9 (CONDITIONAL_JUMP)
    JMP 0x004dc4e3                      ; 004dca5c | LAB_004dc4e3
        ;   XREF to: 004dc4e3 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x44]      ; 004dca61
        ;   Label: LAB_004dca61
    CMP byte ptr [EAX + 0x2d03e98],0x0  ; 004dca64 | char[256] g_KeyboardState
    JZ 0x004dcadd                       ; 004dca6b | LAB_004dcadd
        ;   XREF to: 004dcadd (CONDITIONAL_JUMP)
    FILD dword ptr [EBX + 0x9c]         ; 004dca6d
        ;   Label: LAB_004dca6d
    FMUL double ptr [0x0062b885]        ; 004dca73 | double DOUBLE_0062b885
    FMUL double ptr [0x0062b88d]        ; 004dca79 | double DOUBLE_0062b88d
    LEA EDX,[ESI + 0x24]                ; 004dca7f
    MOV ECX,dword ptr [EBX + 0x44]      ; 004dca82
    MOV EAX,dword ptr [EBX + 0x40]      ; 004dca85
    FSTP float ptr [ESP + 0x10]         ; 004dca88
    CMP byte ptr [ECX + 0x2d03e98],0x0  ; 004dca8c | char[256] g_KeyboardState
    JZ 0x004dcb1d                       ; 004dca93 | LAB_004dcb1d
        ;   XREF to: 004dcb1d (CONDITIONAL_JUMP)
    FLD float ptr [EDX]                 ; 004dca99
    FCOMP float ptr [0x0062b895]        ; 004dca9b | float FLOAT_0062b895
    FNSTSW AX                           ; 004dcaa1
    SAHF                                ; 004dcaa3
    JBE 0x004dc4e9                      ; 004dcaa4 | LAB_004dc4e9
        ;   XREF to: 004dc4e9 (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 004dcaaa | CGame * g_CGamePtr
    FLD float ptr [EAX + 0x264]         ; 004dcaaf | g_CGameInstance.delta_time_float
    FMUL float ptr [0x0062b87d]         ; 004dcab5 | float FLOAT_0062b87d
    FDIV float ptr [ESP + 0x10]         ; 004dcabb
    FSUBR float ptr [EDX]               ; 004dcabf
    FST float ptr [EDX]                 ; 004dcac1
    FCOMP float ptr [0x0062b895]        ; 004dcac3 | float FLOAT_0062b895
    FNSTSW AX                           ; 004dcac9
    SAHF                                ; 004dcacb
    JNC 0x004dc4e9                      ; 004dcacc | LAB_004dc4e9
        ;   XREF to: 004dc4e9 (CONDITIONAL_JUMP)
    MOV dword ptr [EDX],0xbe800000      ; 004dcad2
    JMP 0x004dc4e9                      ; 004dcad8 | LAB_004dc4e9
        ;   XREF to: 004dc4e9 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x40]      ; 004dcadd
        ;   Label: LAB_004dcadd
    CMP byte ptr [EAX + 0x2d03e98],0x0  ; 004dcae0 | char[256] g_KeyboardState
    JNZ 0x004dca6d                      ; 004dcae7 | LAB_004dca6d
        ;   XREF to: 004dca6d (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 004dcae9 | CGame * g_CGamePtr
    FLD float ptr [EAX + 0x264]         ; 004dcaee | g_CGameInstance.delta_time_float
    FMUL float ptr [0x0062b87d]         ; 004dcaf4 | float FLOAT_0062b87d
    FDIV float ptr [0x0062b881]         ; 004dcafa | float FLOAT_0062b881
    FLDZ                                ; 004dcb00
    LEA EDX,[ESI + 0x24]                ; 004dcb02
    FXCH                                ; 004dcb05
    FSTP float ptr [ESP + 0x4]          ; 004dcb07
    FCOMP float ptr [EDX]               ; 004dcb0b
    FNSTSW AX                           ; 004dcb0d
    SAHF                                ; 004dcb0f
    JBE 0x004dcb66                      ; 004dcb10 | LAB_004dcb66
        ;   XREF to: 004dcb66 (CONDITIONAL_JUMP)
    FLD float ptr [EDX]                 ; 004dcb12
    FADD float ptr [ESP + 0x4]          ; 004dcb14
    JMP 0x004dc4d6                      ; 004dcb18 | LAB_004dc4d6
        ;   XREF to: 004dc4d6 (UNCONDITIONAL_JUMP)
    CMP byte ptr [EAX + 0x2d03e98],0x0  ; 004dcb1d | char[256] g_KeyboardState
        ;   Label: LAB_004dcb1d
    JZ 0x004dc4e9                       ; 004dcb24 | LAB_004dc4e9
        ;   XREF to: 004dc4e9 (CONDITIONAL_JUMP)
    CMP dword ptr [EDX],0x3e800000      ; 004dcb2a
    JGE 0x004dc4e9                      ; 004dcb30 | LAB_004dc4e9
        ;   XREF to: 004dc4e9 (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 004dcb36 | CGame * g_CGamePtr
    FLD float ptr [EAX + 0x264]         ; 004dcb3b | g_CGameInstance.delta_time_float
    FMUL float ptr [0x0062b87d]         ; 004dcb41 | float FLOAT_0062b87d
    FDIV float ptr [ESP + 0x10]         ; 004dcb47
    FADD float ptr [EDX]                ; 004dcb4b
    FSTP float ptr [EDX]                ; 004dcb4d
    CMP dword ptr [EDX],0x3e800000      ; 004dcb4f
    JLE 0x004dc4e9                      ; 004dcb55 | LAB_004dc4e9
        ;   XREF to: 004dc4e9 (CONDITIONAL_JUMP)
    MOV dword ptr [EDX],0x3e800000      ; 004dcb5b
    JMP 0x004dc4e9                      ; 004dcb61 | LAB_004dc4e9
        ;   XREF to: 004dc4e9 (UNCONDITIONAL_JUMP)
    FLD float ptr [EDX]                 ; 004dcb66
        ;   Label: LAB_004dcb66
    FSUB float ptr [ESP + 0x4]          ; 004dcb68
    FLDZ                                ; 004dcb6c
    FXCH                                ; 004dcb6e
    FSTP float ptr [EDX]                ; 004dcb70
    FCOMP float ptr [EDX]               ; 004dcb72
    FNSTSW AX                           ; 004dcb74
    SAHF                                ; 004dcb76
    JBE 0x004dc4e9                      ; 004dcb77 | LAB_004dc4e9
        ;   XREF to: 004dc4e9 (CONDITIONAL_JUMP)
    JMP 0x004dc4e3                      ; 004dcb7d | LAB_004dc4e3
        ;   XREF to: 004dc4e3 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x64]      ; 004dcb82
        ;   Label: LAB_004dcb82
    CMP byte ptr [EAX + 0x2d03e98],0x0  ; 004dcb85 | char[256] g_KeyboardState
    JNZ 0x004dc4f9                      ; 004dcb8c | LAB_004dc4f9
        ;   XREF to: 004dc4f9 (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 004dcb92 | CGame * g_CGamePtr
    FLD float ptr [EAX + 0x264]         ; 004dcb97 | g_CGameInstance.delta_time_float
    FMUL float ptr [0x0062b87d]         ; 004dcb9d | float FLOAT_0062b87d
    FDIV float ptr [0x0062b899]         ; 004dcba3 | float FLOAT_0062b899
    FLDZ                                ; 004dcba9
    LEA EDX,[ESI + 0x28]                ; 004dcbab
    FXCH                                ; 004dcbae
    FSTP float ptr [ESP + 0xc]          ; 004dcbb0
    FCOMP float ptr [EDX]               ; 004dcbb4
    FNSTSW AX                           ; 004dcbb6
    SAHF                                ; 004dcbb8
    JBE 0x004dcc26                      ; 004dcbb9 | LAB_004dcc26
        ;   XREF to: 004dcc26 (CONDITIONAL_JUMP)
    FLD float ptr [EDX]                 ; 004dcbbb
    FADD float ptr [ESP + 0xc]          ; 004dcbbd
    FLDZ                                ; 004dcbc1
    FXCH                                ; 004dcbc3
    FSTP float ptr [EDX]                ; 004dcbc5
    FCOMP float ptr [EDX]               ; 004dcbc7
    FNSTSW AX                           ; 004dcbc9
    SAHF                                ; 004dcbcb
    JNC 0x004dc55c                      ; 004dcbcc | LAB_004dc55c
        ;   XREF to: 004dc55c (CONDITIONAL_JUMP)
    MOV dword ptr [EDX],0x0             ; 004dcbd2
    JMP 0x004dc55c                      ; 004dcbd8 | LAB_004dc55c
        ;   XREF to: 004dc55c (UNCONDITIONAL_JUMP)
    CMP byte ptr [EAX + 0x2d03e98],0x0  ; 004dcbdd | char[256] g_KeyboardState
        ;   Label: LAB_004dcbdd
    JZ 0x004dc55c                       ; 004dcbe4 | LAB_004dc55c
        ;   XREF to: 004dc55c (CONDITIONAL_JUMP)
    CMP dword ptr [EDX],0x3e800000      ; 004dcbea
    JGE 0x004dc55c                      ; 004dcbf0 | LAB_004dc55c
        ;   XREF to: 004dc55c (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 004dcbf6 | CGame * g_CGamePtr
    FLD float ptr [EAX + 0x264]         ; 004dcbfb | g_CGameInstance.delta_time_float
    FMUL float ptr [0x0062b87d]         ; 004dcc01 | float FLOAT_0062b87d
    FDIV float ptr [ESP + 0x8]          ; 004dcc07
    FADD float ptr [EDX]                ; 004dcc0b
    FSTP float ptr [EDX]                ; 004dcc0d
    CMP dword ptr [EDX],0x3e800000      ; 004dcc0f
    JLE 0x004dc55c                      ; 004dcc15 | LAB_004dc55c
        ;   XREF to: 004dc55c (CONDITIONAL_JUMP)
    MOV dword ptr [EDX],0x3e800000      ; 004dcc1b
    JMP 0x004dc55c                      ; 004dcc21 | LAB_004dc55c
        ;   XREF to: 004dc55c (UNCONDITIONAL_JUMP)
    FLD float ptr [EDX]                 ; 004dcc26
        ;   Label: LAB_004dcc26
    FSUB float ptr [ESP + 0xc]          ; 004dcc28
    FLDZ                                ; 004dcc2c
    FXCH                                ; 004dcc2e
    FSTP float ptr [EDX]                ; 004dcc30
    FCOMP float ptr [EDX]               ; 004dcc32
    FNSTSW AX                           ; 004dcc34
    SAHF                                ; 004dcc36
    JBE 0x004dc55c                      ; 004dcc37 | LAB_004dc55c
        ;   XREF to: 004dc55c (CONDITIONAL_JUMP)
    MOV dword ptr [EDX],0x0             ; 004dcc3d
    JMP 0x004dc55c                      ; 004dcc43 | LAB_004dc55c
        ;   XREF to: 004dc55c (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x30]      ; 004dcc48
        ;   Label: LAB_004dcc48
    MOV AL,byte ptr [EAX + 0x2d03e98]   ; 004dcc4b | char[256] g_KeyboardState
    JMP 0x004dc576                      ; 004dcc51 | LAB_004dc576
        ;   XREF to: 004dc576 (UNCONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0xc],0x0       ; 004dcc56
        ;   Label: LAB_004dcc56
    JMP 0x004dc5fd                      ; 004dcc5d | LAB_004dc5fd
        ;   XREF to: 004dc5fd (UNCONDITIONAL_JUMP)
    MOV dword ptr [EAX],0x0             ; 004dcc62
        ;   Label: LAB_004dcc62
    JMP 0x004dc621                      ; 004dcc68 | LAB_004dc621
        ;   XREF to: 004dc621 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EAX],0x0             ; 004dcc6d
        ;   Label: LAB_004dcc6d
    JMP 0x004dc645                      ; 004dcc73 | LAB_004dc645
        ;   XREF to: 004dc645 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EAX],0x0             ; 004dcc78
        ;   Label: LAB_004dcc78
    JMP 0x004dc669                      ; 004dcc7e | LAB_004dc669
        ;   XREF to: 004dc669 (UNCONDITIONAL_JUMP)
    MOV dword ptr [ESI],0x0             ; 004dcc83
        ;   Label: LAB_004dcc83
    JMP 0x004dc68d                      ; 004dcc89 | LAB_004dc68d
        ;   XREF to: 004dc68d (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x240],0x0     ; 004dcc8e
        ;   Label: LAB_004dcc8e
    JZ 0x004dc94a                       ; 004dcc95 | LAB_004dc94a
        ;   XREF to: 004dc94a (CONDITIONAL_JUMP)
    ADD ESP,0x14                        ; 004dcc9b
    POP EBP                             ; 004dcc9e
    POP EDI                             ; 004dcc9f
    POP ESI                             ; 004dcca0
    POP EBX                             ; 004dcca1
    RET                                 ; 004dcca2
    PUSH EDX                            ; 004dcca3
        ;   Label: LAB_004dcca3
    PUSH EAX                            ; 004dcca4 | CDemonSet g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 004dcca5 | void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004dccaa
    ADD ESP,0x14                        ; 004dccad
    POP EBP                             ; 004dccb0
    POP EDI                             ; 004dccb1
    POP ESI                             ; 004dccb2
    POP EBX                             ; 004dccb3
    RET                                 ; 004dccb4

