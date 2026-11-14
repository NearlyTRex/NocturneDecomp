; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004d9260(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined4       Stack[-0x6c0]:4  local_6c0
; undefined4       Stack[-0x6a4]:4  local_6a4
; undefined4       Stack[-0x6a0]:4  local_6a0
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
;
; XREF[1]:
;   core_game.cpp_CGame_playerControls_FUN_004d0860 at 004d090a
;
; Referenced Globals:
;   TerminatedCString s_CEnemy_005e35f0
;   TerminatedCString s_CEnemy_005e35f7
;   undefined4 DAT_005e3600
;   undefined4 DAT_005e3604
;   undefined4 DAT_005e360c
;   undefined4 DAT_005e3614
;   undefined4 DAT_005e361c
;   undefined4 DAT_005e3624
;   undefined4 DAT_005e362c
;   undefined4 DAT_005e3634
;   undefined4 DAT_005e363c
;   undefined4 DAT_005e3644
;   undefined4 DAT_005e364c
;   undefined4 DAT_00600f74
;   undefined4 DAT_0061b498
;   ... and 49 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0
;   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40
;   core_dcamera.cpp_FUN_0044dd70
;   core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004f8fe0
;   core_inv.cpp_CInventory_selectItem_FUN_004f8ec0
;   core_inv.cpp_CInventory_selectWeapon_FUN_004f8dc0
;   core_inv.cpp_CInventory_toggleDetailView_FUN_004fc370
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0
;   core_path.cpp_getPathMap_FUN_005351f0
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d9260
        ;   Label: core_game.cpp_FUN_004d9260
    PUSH ESI                            ; 004d9261
    PUSH EDI                            ; 004d9262
    PUSH EBP                            ; 004d9263
    MOV EBP,ESP                         ; 004d9264
    SUB ESP,0x6ac                       ; 004d9266
    AND ESP,0xfffffff8                  ; 004d926c
    MOV AH,byte ptr [0x01ccc3e0]        ; 004d926f | DAT_01ccc3e0
    TEST AH,0x1                         ; 004d9275
    JZ 0x004d98a2                       ; 004d9278
        ;   XREF to: 004d98a2 (CONDITIONAL_JUMP)  ; LAB_004d98a2
    MOV dword ptr [ESP + 0x20],0x3e000000 ; 004d927e
        ;   Label: LAB_004d927e
    MOV DH,byte ptr [0x01ccc3e0]        ; 004d9286 | DAT_01ccc3e0
    TEST DH,0x2                         ; 004d928c
    JZ 0x004d98b2                       ; 004d928f
        ;   XREF to: 004d98b2 (CONDITIONAL_JUMP)  ; LAB_004d98b2
    MOV EAX,[0x01c4353c]                ; 004d9295 | DAT_01c4353c
        ;   Label: LAB_004d9295
    MOV ECX,0x41000000                  ; 004d929a
    MOV dword ptr [ESP + 0x690],EAX     ; 004d929f
    MOV EAX,[0x01c43540]                ; 004d92a6 | DAT_01c43540
    XOR EBX,EBX                         ; 004d92ab
    MOV dword ptr [ESP + 0x694],EAX     ; 004d92ad
    MOV EAX,[0x0061b498]                ; 004d92b4 | DAT_0061b498
    MOV dword ptr [ESP + 0x1c],EBX      ; 004d92b9
    MOV dword ptr [ESP + 0x688],EAX     ; 004d92bd
    MOV EAX,[0x0061b49c]                ; 004d92c4 | DAT_0061b49c
    MOV dword ptr [ESP + 0x664],ECX     ; 004d92c9
    MOV dword ptr [ESP + 0x68c],EAX     ; 004d92d0
    CMP EAX,0x1e0                       ; 004d92d7
    JLE 0x004d933b                      ; 004d92dc
        ;   XREF to: 004d933b (CONDITIONAL_JUMP)  ; LAB_004d933b
    MOV EAX,dword ptr [ESP + 0x690]     ; 004d92de
    SHL EAX,0x5                         ; 004d92e5
    MOV EDX,EAX                         ; 004d92e8
    SHL EAX,0x4                         ; 004d92ea
    SUB EAX,EDX                         ; 004d92ed
    MOV EDX,EAX                         ; 004d92ef
    MOV EDI,dword ptr [ESP + 0x68c]     ; 004d92f1
    SAR EDX,0x1f                        ; 004d92f8
    IDIV EDI                            ; 004d92fb
    MOV dword ptr [ESP + 0x690],EAX     ; 004d92fd
    MOV EAX,dword ptr [ESP + 0x694]     ; 004d9304
    SHL EAX,0x5                         ; 004d930b
    MOV EDX,EAX                         ; 004d930e
    SHL EAX,0x4                         ; 004d9310
    SUB EAX,EDX                         ; 004d9313
    MOV EDX,EAX                         ; 004d9315
    SAR EDX,0x1f                        ; 004d9317
    IDIV EDI                            ; 004d931a
    MOV EBX,0x280                       ; 004d931c
    MOV ESI,0x1e0                       ; 004d9321
    MOV dword ptr [ESP + 0x688],EBX     ; 004d9326
    MOV dword ptr [ESP + 0x68c],ESI     ; 004d932d
    MOV dword ptr [ESP + 0x694],EAX     ; 004d9334
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d933b
        ;   Label: LAB_004d933b
    CMP dword ptr [EAX + 0x2a8],0x0     ; 004d933e
    JZ 0x004d935f                       ; 004d9345
        ;   XREF to: 004d935f (CONDITIONAL_JUMP)  ; LAB_004d935f
    MOV EDX,0xf0                        ; 004d9347
    MOV EAX,0x140                       ; 004d934c
    MOV dword ptr [ESP + 0x68c],EDX     ; 004d9351
    MOV dword ptr [ESP + 0x688],EAX     ; 004d9358
    CMP dword ptr [ESP + 0x690],0x2     ; 004d935f
        ;   Label: LAB_004d935f
    JGE 0x004d9374                      ; 004d9367
        ;   XREF to: 004d9374 (CONDITIONAL_JUMP)  ; LAB_004d9374
    MOV dword ptr [ESP + 0x690],0x2     ; 004d9369
    MOV EAX,dword ptr [ESP + 0x688]     ; 004d9374
        ;   Label: LAB_004d9374
    MOV ESI,dword ptr [ESP + 0x690]     ; 004d937b
    SUB EAX,0x2                         ; 004d9382
    CMP EAX,ESI                         ; 004d9385
    JGE 0x004d9390                      ; 004d9387
        ;   XREF to: 004d9390 (CONDITIONAL_JUMP)  ; LAB_004d9390
    MOV dword ptr [ESP + 0x690],EAX     ; 004d9389
    CMP dword ptr [ESP + 0x694],0x2     ; 004d9390
        ;   Label: LAB_004d9390
    JGE 0x004d93a5                      ; 004d9398
        ;   XREF to: 004d93a5 (CONDITIONAL_JUMP)  ; LAB_004d93a5
    MOV dword ptr [ESP + 0x694],0x2     ; 004d939a
    MOV EAX,dword ptr [ESP + 0x68c]     ; 004d93a5
        ;   Label: LAB_004d93a5
    MOV EDX,dword ptr [ESP + 0x694]     ; 004d93ac
    SUB EAX,0x2                         ; 004d93b3
    CMP EAX,EDX                         ; 004d93b6
    JGE 0x004d93c1                      ; 004d93b8
        ;   XREF to: 004d93c1 (CONDITIONAL_JUMP)  ; LAB_004d93c1
    MOV dword ptr [ESP + 0x694],EAX     ; 004d93ba
    PUSH 0x30                           ; 004d93c1
        ;   Label: LAB_004d93c1
    MOV ECX,0x40000000                  ; 004d93c3
    PUSH 0x0                            ; 004d93c8
    MOV ESI,dword ptr [EBP + 0x18]      ; 004d93ca
    MOV EBX,0x3e4ccccd                  ; 004d93cd
    PUSH ESI                            ; 004d93d2
    MOV dword ptr [ESP + 0xc],ECX       ; 004d93d3
    MOV dword ptr [ESP + 0x674],EBX     ; 004d93d7
    CALL crt_memory.c_memset_FUN_005bfb70 ; 004d93de
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004d93e3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d93e6
    MOV EAX,dword ptr [EAX + 0x4c]      ; 004d93e9
    MOV BL,byte ptr [EAX + 0x1ccff98]   ; 004d93ec | DAT_01ccff98
    MOV BH,byte ptr [EAX + 0x1c50950]   ; 004d93f2 | DAT_01c50950
    LEA EDX,[ESI + 0x10]                ; 004d93f8
    CMP BL,BH                           ; 004d93fb
    JZ 0x004d98c2                       ; 004d93fd
        ;   XREF to: 004d98c2 (CONDITIONAL_JUMP)  ; LAB_004d98c2
    MOV AL,BH                           ; 004d9403
    AND EAX,0xff                        ; 004d9405
    MOV dword ptr [EDX],EAX             ; 004d940a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d940c
        ;   Label: LAB_004d940c
    MOV EAX,dword ptr [EAX + 0x50]      ; 004d940f
    MOV EDX,dword ptr [EBP + 0x18]      ; 004d9412
    MOV BL,byte ptr [EAX + 0x1ccff98]   ; 004d9415 | DAT_01ccff98
    MOV CL,byte ptr [EAX + 0x1c50950]   ; 004d941b | DAT_01c50950
    ADD EDX,0x14                        ; 004d9421
    CMP BL,CL                           ; 004d9424
    JZ 0x004d98cd                       ; 004d9426
        ;   XREF to: 004d98cd (CONDITIONAL_JUMP)  ; LAB_004d98cd
    MOV AL,CL                           ; 004d942c
    AND EAX,0xff                        ; 004d942e
    MOV dword ptr [EDX],EAX             ; 004d9433
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d9435
        ;   Label: LAB_004d9435
    MOV EAX,dword ptr [EAX + 0x68]      ; 004d9438
    MOV EDX,dword ptr [EBP + 0x18]      ; 004d943b
    MOV BL,byte ptr [EAX + 0x1ccff98]   ; 004d943e | DAT_01ccff98
    MOV CH,byte ptr [EAX + 0x1c50950]   ; 004d9444 | DAT_01c50950
    ADD EDX,0x18                        ; 004d944a
    CMP BL,CH                           ; 004d944d
    JZ 0x004d98d8                       ; 004d944f
        ;   XREF to: 004d98d8 (CONDITIONAL_JUMP)  ; LAB_004d98d8
    MOV AL,CH                           ; 004d9455
    AND EAX,0xff                        ; 004d9457
    MOV dword ptr [EDX],EAX             ; 004d945c
    MOV ECX,dword ptr [EBP + 0x14]      ; 004d945e
        ;   Label: LAB_004d945e
    MOV EDI,dword ptr [ECX + 0x90]      ; 004d9461
    MOV EAX,[0x0061f2a4]                ; 004d9467 | DAT_0061f2a4
    PUSH EDI                            ; 004d946c
    MOV EDX,dword ptr [EAX]             ; 004d946d | DAT_01d1bca0
    PUSH EAX                            ; 004d946f | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d9470
    ADD ESP,0x8                         ; 004d9473
    TEST EAX,EAX                        ; 004d9476
    JZ 0x004d949a                       ; 004d9478
        ;   XREF to: 004d949a (CONDITIONAL_JUMP)  ; LAB_004d949a
    PUSH 0x1                            ; 004d947a
    MOV EAX,[0x01d06ab4]                ; 004d947c | DAT_01d06ab4
    PUSH 0x5                            ; 004d9481
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d9483
    PUSH 0x0                            ; 004d948a
    ADD EAX,0x1fae8                     ; 004d948c
    PUSH EAX                            ; 004d9491
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004f8dc0 ; 004d9492
        ;   XREF to: 004f8dc0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004f8dc0(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004d9497
    MOV ECX,dword ptr [EBP + 0x14]      ; 004d949a
        ;   Label: LAB_004d949a
    MOV EBX,dword ptr [ECX + 0x94]      ; 004d949d
    MOV EAX,[0x0061f2a4]                ; 004d94a3 | DAT_0061f2a4
    PUSH EBX                            ; 004d94a8
    MOV EDX,dword ptr [EAX]             ; 004d94a9 | DAT_01d1bca0
    PUSH EAX                            ; 004d94ab | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d94ac
    ADD ESP,0x8                         ; 004d94af
    TEST EAX,EAX                        ; 004d94b2
    JZ 0x004d94d6                       ; 004d94b4
        ;   XREF to: 004d94d6 (CONDITIONAL_JUMP)  ; LAB_004d94d6
    PUSH -0x1                           ; 004d94b6
    MOV EAX,[0x01d06ab4]                ; 004d94b8 | DAT_01d06ab4
    PUSH 0x5                            ; 004d94bd
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d94bf
    PUSH 0x0                            ; 004d94c6
    ADD EAX,0x1fae8                     ; 004d94c8
    PUSH EAX                            ; 004d94cd
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004f8dc0 ; 004d94ce
        ;   XREF to: 004f8dc0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004f8dc0(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004d94d3
    MOV ECX,dword ptr [EBP + 0x14]      ; 004d94d6
        ;   Label: LAB_004d94d6
    MOV ESI,dword ptr [ECX + 0x98]      ; 004d94d9
    MOV EAX,[0x0061f2a4]                ; 004d94df | DAT_0061f2a4
    PUSH ESI                            ; 004d94e4
    MOV EDX,dword ptr [EAX]             ; 004d94e5 | DAT_01d1bca0
    PUSH EAX                            ; 004d94e7 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d94e8
    ADD ESP,0x8                         ; 004d94eb
    TEST EAX,EAX                        ; 004d94ee
    JZ 0x004d950e                       ; 004d94f0
        ;   XREF to: 004d950e (CONDITIONAL_JUMP)  ; LAB_004d950e
    MOV EAX,[0x01d06ab4]                ; 004d94f2 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d94f7
    PUSH 0x1                            ; 004d94fe
    ADD EAX,0x1fae8                     ; 004d9500
    PUSH EAX                            ; 004d9505
    CALL core_inv.cpp_CInventory_selectItem_FUN_004f8ec0 ; 004d9506
        ;   XREF to: 004f8ec0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectItem_FUN_004f8ec0(CInventory * this_ptr, int direction)
    ADD ESP,0x8                         ; 004d950b
    MOV ECX,dword ptr [EBP + 0x14]      ; 004d950e
        ;   Label: LAB_004d950e
    MOV EDI,dword ptr [ECX + 0x9c]      ; 004d9511
    MOV EAX,[0x0061f2a4]                ; 004d9517 | DAT_0061f2a4
    PUSH EDI                            ; 004d951c
    MOV EDX,dword ptr [EAX]             ; 004d951d | DAT_01d1bca0
    PUSH EAX                            ; 004d951f | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d9520
    ADD ESP,0x8                         ; 004d9523
    TEST EAX,EAX                        ; 004d9526
    JZ 0x004d9546                       ; 004d9528
        ;   XREF to: 004d9546 (CONDITIONAL_JUMP)  ; LAB_004d9546
    MOV EAX,[0x01d06ab4]                ; 004d952a | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d952f
    PUSH -0x1                           ; 004d9536
    ADD EAX,0x1fae8                     ; 004d9538
    PUSH EAX                            ; 004d953d
    CALL core_inv.cpp_CInventory_selectItem_FUN_004f8ec0 ; 004d953e
        ;   XREF to: 004f8ec0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectItem_FUN_004f8ec0(CInventory * this_ptr, int direction)
    ADD ESP,0x8                         ; 004d9543
    MOV ECX,dword ptr [EBP + 0x14]      ; 004d9546
        ;   Label: LAB_004d9546
    MOV EBX,dword ptr [ECX + 0xa4]      ; 004d9549
    MOV EAX,[0x0061f2a4]                ; 004d954f | DAT_0061f2a4
    PUSH EBX                            ; 004d9554
    MOV EDX,dword ptr [EAX]             ; 004d9555 | DAT_01d1bca0
    PUSH EAX                            ; 004d9557 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d9558
    ADD ESP,0x8                         ; 004d955b
    TEST EAX,EAX                        ; 004d955e
    JZ 0x004d957e                       ; 004d9560
        ;   XREF to: 004d957e (CONDITIONAL_JUMP)  ; LAB_004d957e
    MOV EAX,[0x01d06ab4]                ; 004d9562 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d9567
    PUSH 0x1                            ; 004d956e
    ADD EAX,0x1fae8                     ; 004d9570
    PUSH EAX                            ; 004d9575
    CALL core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004f8fe0 ; 004d9576
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004f8fe0(CInventory * this_ptr, int direction)
    ADD ESP,0x8                         ; 004d957b
    MOV ECX,dword ptr [EBP + 0x14]      ; 004d957e
        ;   Label: LAB_004d957e
    MOV ESI,dword ptr [ECX + 0xa0]      ; 004d9581
    MOV EAX,[0x0061f2a4]                ; 004d9587 | DAT_0061f2a4
    PUSH ESI                            ; 004d958c
    MOV EDX,dword ptr [EAX]             ; 004d958d | DAT_01d1bca0
    PUSH EAX                            ; 004d958f | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d9590
    ADD ESP,0x8                         ; 004d9593
    TEST EAX,EAX                        ; 004d9596
    JZ 0x004d95b4                       ; 004d9598
        ;   XREF to: 004d95b4 (CONDITIONAL_JUMP)  ; LAB_004d95b4
    MOV EAX,[0x01d06ab4]                ; 004d959a | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d959f
    ADD EAX,0x1fae8                     ; 004d95a6
    PUSH EAX                            ; 004d95ab
    CALL core_inv.cpp_CInventory_toggleDetailView_FUN_004fc370 ; 004d95ac
        ;   XREF to: 004fc370 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_toggleDetailView_FUN_004fc370(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004d95b1
    MOV ECX,dword ptr [EBP + 0x14]      ; 004d95b4
        ;   Label: LAB_004d95b4
    MOV EDI,dword ptr [ECX + 0x7c]      ; 004d95b7
    MOV EAX,[0x0061f2a4]                ; 004d95ba | DAT_0061f2a4
    PUSH EDI                            ; 004d95bf
    MOV EDX,dword ptr [EAX]             ; 004d95c0 | DAT_01d1bca0
    PUSH EAX                            ; 004d95c2 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d95c3
    ADD ESP,0x8                         ; 004d95c6
    TEST EAX,EAX                        ; 004d95c9
    JZ 0x004d95ed                       ; 004d95cb
        ;   XREF to: 004d95ed (CONDITIONAL_JUMP)  ; LAB_004d95ed
    PUSH 0x1                            ; 004d95cd
    MOV EAX,[0x01d06ab4]                ; 004d95cf | DAT_01d06ab4
    PUSH 0x0                            ; 004d95d4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d95d6
    PUSH 0x0                            ; 004d95dd
    ADD EAX,0x1fae8                     ; 004d95df
    PUSH EAX                            ; 004d95e4
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004f8dc0 ; 004d95e5
        ;   XREF to: 004f8dc0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004f8dc0(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004d95ea
    MOV ECX,dword ptr [EBP + 0x14]      ; 004d95ed
        ;   Label: LAB_004d95ed
    MOV EBX,dword ptr [ECX + 0x80]      ; 004d95f0
    MOV EAX,[0x0061f2a4]                ; 004d95f6 | DAT_0061f2a4
    PUSH EBX                            ; 004d95fb
    MOV EDX,dword ptr [EAX]             ; 004d95fc | DAT_01d1bca0
    PUSH EAX                            ; 004d95fe | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d95ff
    ADD ESP,0x8                         ; 004d9602
    TEST EAX,EAX                        ; 004d9605
    JZ 0x004d9629                       ; 004d9607
        ;   XREF to: 004d9629 (CONDITIONAL_JUMP)  ; LAB_004d9629
    PUSH 0x1                            ; 004d9609
    MOV EAX,[0x01d06ab4]                ; 004d960b | DAT_01d06ab4
    PUSH 0x1                            ; 004d9610
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d9612
    PUSH 0x0                            ; 004d9619
    ADD EAX,0x1fae8                     ; 004d961b
    PUSH EAX                            ; 004d9620
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004f8dc0 ; 004d9621
        ;   XREF to: 004f8dc0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004f8dc0(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004d9626
    MOV ECX,dword ptr [EBP + 0x14]      ; 004d9629
        ;   Label: LAB_004d9629
    MOV ESI,dword ptr [ECX + 0x84]      ; 004d962c
    MOV EAX,[0x0061f2a4]                ; 004d9632 | DAT_0061f2a4
    PUSH ESI                            ; 004d9637
    MOV EDX,dword ptr [EAX]             ; 004d9638 | DAT_01d1bca0
    PUSH EAX                            ; 004d963a | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d963b
    ADD ESP,0x8                         ; 004d963e
    TEST EAX,EAX                        ; 004d9641
    JZ 0x004d9665                       ; 004d9643
        ;   XREF to: 004d9665 (CONDITIONAL_JUMP)  ; LAB_004d9665
    PUSH 0x1                            ; 004d9645
    MOV EAX,[0x01d06ab4]                ; 004d9647 | DAT_01d06ab4
    PUSH 0x2                            ; 004d964c
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d964e
    PUSH 0x0                            ; 004d9655
    ADD EAX,0x1fae8                     ; 004d9657
    PUSH EAX                            ; 004d965c
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004f8dc0 ; 004d965d
        ;   XREF to: 004f8dc0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004f8dc0(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004d9662
    MOV ECX,dword ptr [EBP + 0x14]      ; 004d9665
        ;   Label: LAB_004d9665
    MOV EDI,dword ptr [ECX + 0x88]      ; 004d9668
    MOV EAX,[0x0061f2a4]                ; 004d966e | DAT_0061f2a4
    PUSH EDI                            ; 004d9673
    MOV EDX,dword ptr [EAX]             ; 004d9674 | DAT_01d1bca0
    PUSH EAX                            ; 004d9676 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d9677
    ADD ESP,0x8                         ; 004d967a
    TEST EAX,EAX                        ; 004d967d
    JZ 0x004d96a1                       ; 004d967f
        ;   XREF to: 004d96a1 (CONDITIONAL_JUMP)  ; LAB_004d96a1
    PUSH 0x1                            ; 004d9681
    MOV EAX,[0x01d06ab4]                ; 004d9683 | DAT_01d06ab4
    PUSH 0x4                            ; 004d9688
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d968a
    PUSH 0x0                            ; 004d9691
    ADD EAX,0x1fae8                     ; 004d9693
    PUSH EAX                            ; 004d9698
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004f8dc0 ; 004d9699
        ;   XREF to: 004f8dc0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004f8dc0(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004d969e
    MOV ECX,dword ptr [EBP + 0x14]      ; 004d96a1
        ;   Label: LAB_004d96a1
    MOV EBX,dword ptr [ECX + 0x8c]      ; 004d96a4
    MOV EAX,[0x0061f2a4]                ; 004d96aa | DAT_0061f2a4
    PUSH EBX                            ; 004d96af
    MOV EDX,dword ptr [EAX]             ; 004d96b0 | DAT_01d1bca0
    PUSH EAX                            ; 004d96b2 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d96b3
    ADD ESP,0x8                         ; 004d96b6
    TEST EAX,EAX                        ; 004d96b9
    JZ 0x004d96dd                       ; 004d96bb
        ;   XREF to: 004d96dd (CONDITIONAL_JUMP)  ; LAB_004d96dd
    PUSH 0x1                            ; 004d96bd
    MOV EAX,[0x01d06ab4]                ; 004d96bf | DAT_01d06ab4
    PUSH 0x3                            ; 004d96c4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d96c6
    PUSH 0x0                            ; 004d96cd
    ADD EAX,0x1fae8                     ; 004d96cf
    PUSH EAX                            ; 004d96d4
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004f8dc0 ; 004d96d5
        ;   XREF to: 004f8dc0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004f8dc0(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004d96da
    MOV ECX,dword ptr [EBP + 0x14]      ; 004d96dd
        ;   Label: LAB_004d96dd
    MOV ESI,dword ptr [ECX + 0x54]      ; 004d96e0
    MOV EAX,[0x0061f2a4]                ; 004d96e3 | DAT_0061f2a4
    PUSH ESI                            ; 004d96e8
    MOV EDX,dword ptr [EAX]             ; 004d96e9 | DAT_01d1bca0
    PUSH EAX                            ; 004d96eb | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d96ec
    ADD ESP,0x8                         ; 004d96ef
    TEST EAX,EAX                        ; 004d96f2
    JZ 0x004d9712                       ; 004d96f4
        ;   XREF to: 004d9712 (CONDITIONAL_JUMP)  ; LAB_004d9712
    MOV EAX,[0x01d06ab4]                ; 004d96f6 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d96fb
    PUSH EAX                            ; 004d9702
    MOV EDX,dword ptr [EAX + 0x154]     ; 004d9703
    CALL dword ptr [EDX + 0x150]        ; 004d9709
    ADD ESP,0x4                         ; 004d970f
    CMP dword ptr [0x01cd0c94],0x0      ; 004d9712 | DAT_01cd0c94
        ;   Label: LAB_004d9712
    JZ 0x004d98e3                       ; 004d9719
        ;   XREF to: 004d98e3 (CONDITIONAL_JUMP)  ; LAB_004d98e3
    XOR EDX,EDX                         ; 004d971f
        ;   Label: LAB_004d971f
    MOV dword ptr [0x01cd0c94],EDX      ; 004d9721 | DAT_01cd0c94
    MOV dword ptr [0x01ccc3c4],EDX      ; 004d9727 | DAT_01ccc3c4
    MOV dword ptr [0x01ccc3b4],EDX      ; 004d972d | DAT_01ccc3b4
    MOV dword ptr [0x01c43544],EDX      ; 004d9733 | DAT_01c43544
    MOV dword ptr [0x01ccc3dc],EDX      ; 004d9739 | DAT_01ccc3dc
    CALL sound_sndmain.cpp_killAllSfx_FUN_00573b00 ; 004d973f
        ;   XREF to: 00573b00 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_killAllSfx_FUN_00573b00()
    MOV dword ptr [0x01cd0c28],0x7149f2ca ; 004d9744 | DAT_01cd0c28
    CMP dword ptr [0x01cd0b40],0x0      ; 004d974e | DAT_01cd0b40
        ;   Label: LAB_004d974e
    JGE 0x004d977b                      ; 004d9755
        ;   XREF to: 004d977b (CONDITIONAL_JUMP)  ; LAB_004d977b
    XOR ECX,ECX                         ; 004d9757
    MOV EAX,0x7149f2ca                  ; 004d9759
    MOV dword ptr [0x01c43544],ECX      ; 004d975e | DAT_01c43544
    MOV dword ptr [0x01ccc3c4],ECX      ; 004d9764 | DAT_01ccc3c4
    MOV dword ptr [0x01ccc3dc],ECX      ; 004d976a | DAT_01ccc3dc
    MOV [0x01cd0c28],EAX                ; 004d9770 | DAT_01cd0c28
    MOV dword ptr [0x01ccc3b4],ECX      ; 004d9775 | DAT_01ccc3b4
    MOV EAX,[0x01d06ab4]                ; 004d977b | DAT_01d06ab4
        ;   Label: LAB_004d977b
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d9780
    PUSH EAX                            ; 004d9787
    MOV EDX,dword ptr [EAX + 0x154]     ; 004d9788
    CALL dword ptr [EDX + 0x148]        ; 004d978e
    ADD ESP,0x4                         ; 004d9794
    MOV dword ptr [ESP + 0x680],EAX     ; 004d9797
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d979e
    CMP dword ptr [EAX + 0x25c],0x0     ; 004d97a1
    JZ 0x004d992a                       ; 004d97a8
        ;   XREF to: 004d992a (CONDITIONAL_JUMP)  ; LAB_004d992a
    TEST byte ptr [0x01c43544],0x1      ; 004d97ae | DAT_01c43544
    JZ 0x004d9840                       ; 004d97b5
        ;   XREF to: 004d9840 (CONDITIONAL_JUMP)  ; LAB_004d9840
    MOV EAX,dword ptr [ESP + 0x688]     ; 004d97bb
    MOV EDX,EAX                         ; 004d97c2
    SAR EDX,0x1f                        ; 004d97c4
    SUB EAX,EDX                         ; 004d97c7
    SAR EAX,0x1                         ; 004d97c9
    MOV EDX,dword ptr [ESP + 0x694]     ; 004d97cb
    SUB EDX,EAX                         ; 004d97d2
    MOV EAX,dword ptr [ESP + 0x68c]     ; 004d97d4
    MOV dword ptr [ESP + 0x6a8],EDX     ; 004d97db
    MOV EDX,EAX                         ; 004d97e2
    SAR EDX,0x1f                        ; 004d97e4
    SUB EAX,EDX                         ; 004d97e7
    SAR EAX,0x1                         ; 004d97e9
    MOV dword ptr [ESP + 0x6a4],EAX     ; 004d97eb
    FILD dword ptr [ESP + 0x6a8]        ; 004d97f2
    FILD dword ptr [ESP + 0x6a4]        ; 004d97f9
    FDIVP                               ; 004d9800
    FLDZ                                ; 004d9802
    FCOMPP                              ; 004d9804
    FNSTSW AX                           ; 004d9806
    SAHF                                ; 004d9808
    JC 0x004d98ff                       ; 004d9809
        ;   XREF to: 004d98ff (CONDITIONAL_JUMP)  ; LAB_004d98ff
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d980f
    MOV dword ptr [EAX],0x1             ; 004d9812
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d9818
        ;   Label: LAB_004d9818
    CMP dword ptr [EAX + 0xac],0x0      ; 004d981b
    JZ 0x004d990e                       ; 004d9822
        ;   XREF to: 004d990e (CONDITIONAL_JUMP)  ; LAB_004d990e
    MOV EAX,dword ptr [EAX + 0x30]      ; 004d9828
    CMP byte ptr [EAX + 0x1c50950],0x0  ; 004d982b | DAT_01c50950
    SETZ AL                             ; 004d9832
    MOV EDX,dword ptr [EBP + 0x18]      ; 004d9835
        ;   Label: LAB_004d9835
    AND EAX,0xff                        ; 004d9838
    MOV dword ptr [EDX + 0x8],EAX       ; 004d983d
    MOV EAX,dword ptr [ESP + 0x688]     ; 004d9840
        ;   Label: LAB_004d9840
    MOV EDX,EAX                         ; 004d9847
    SAR EDX,0x1f                        ; 004d9849
    SUB EAX,EDX                         ; 004d984c
    SAR EAX,0x1                         ; 004d984e
    MOV EDX,dword ptr [ESP + 0x690]     ; 004d9850
    SUB EDX,EAX                         ; 004d9857
    MOV dword ptr [ESP + 0x6a4],EDX     ; 004d9859
    MOV dword ptr [ESP + 0x6a8],EAX     ; 004d9860
    FILD dword ptr [ESP + 0x6a4]        ; 004d9867
    FILD dword ptr [ESP + 0x6a8]        ; 004d986e
    FDIVP                               ; 004d9875
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d9877
    FST float ptr [EAX + 0x28]          ; 004d987a
    FMUL float ptr [EAX + 0x28]         ; 004d987d
    FMUL float ptr [EAX + 0x28]         ; 004d9880
    FMUL float ptr [0x005e3600]         ; 004d9883 | DAT_005e3600
    MOV DH,byte ptr [0x01c43544]        ; 004d9889 | DAT_01c43544
    FSTP float ptr [EAX + 0x28]         ; 004d988f
    TEST DH,0x2                         ; 004d9892
    JNZ 0x004d991c                      ; 004d9895
        ;   XREF to: 004d991c (CONDITIONAL_JUMP)  ; LAB_004d991c
    MOV ESP,EBP                         ; 004d989b
    POP EBP                             ; 004d989d
    POP EDI                             ; 004d989e
    POP ESI                             ; 004d989f
    POP EBX                             ; 004d98a0
    RET                                 ; 004d98a1
    MOV DL,AH                           ; 004d98a2
        ;   Label: LAB_004d98a2
    OR DL,0x1                           ; 004d98a4
    MOV byte ptr [0x01ccc3e0],DL        ; 004d98a7 | DAT_01ccc3e0
    JMP 0x004d927e                      ; 004d98ad
        ;   XREF to: 004d927e (UNCONDITIONAL_JUMP)  ; LAB_004d927e
    MOV BL,DH                           ; 004d98b2
        ;   Label: LAB_004d98b2
    OR BL,0x2                           ; 004d98b4
    MOV byte ptr [0x01ccc3e0],BL        ; 004d98b7 | DAT_01ccc3e0
    JMP 0x004d9295                      ; 004d98bd
        ;   XREF to: 004d9295 (UNCONDITIONAL_JUMP)  ; LAB_004d9295
    MOV dword ptr [EDX],0x0             ; 004d98c2
        ;   Label: LAB_004d98c2
    JMP 0x004d940c                      ; 004d98c8
        ;   XREF to: 004d940c (UNCONDITIONAL_JUMP)  ; LAB_004d940c
    MOV dword ptr [EDX],0x0             ; 004d98cd
        ;   Label: LAB_004d98cd
    JMP 0x004d9435                      ; 004d98d3
        ;   XREF to: 004d9435 (UNCONDITIONAL_JUMP)  ; LAB_004d9435
    MOV dword ptr [EDX],0x0             ; 004d98d8
        ;   Label: LAB_004d98d8
    JMP 0x004d945e                      ; 004d98de
        ;   XREF to: 004d945e (UNCONDITIONAL_JUMP)  ; LAB_004d945e
    MOV EAX,[0x00622ad0]                ; 004d98e3 | g_CScriptPtr
        ;   Label: LAB_004d98e3
    PUSH EAX                            ; 004d98e8
    CALL core_script.cpp_CScript_getLetterboxHeight_FUN_00543950 ; 004d98e9
        ;   XREF to: 00543950 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_getLetterboxHeight_FUN_00543950(CScript * this_ptr)
    ADD ESP,0x4                         ; 004d98ee
    CMP EAX,0x2                         ; 004d98f1
    JG 0x004d971f                       ; 004d98f4
        ;   XREF to: 004d971f (CONDITIONAL_JUMP)  ; LAB_004d971f
    JMP 0x004d974e                      ; 004d98fa
        ;   XREF to: 004d974e (UNCONDITIONAL_JUMP)  ; LAB_004d974e
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d98ff
        ;   Label: LAB_004d98ff
    MOV dword ptr [EAX + 0x4],0x1       ; 004d9902
    JMP 0x004d9818                      ; 004d9909
        ;   XREF to: 004d9818 (UNCONDITIONAL_JUMP)  ; LAB_004d9818
    MOV EAX,dword ptr [EAX + 0x30]      ; 004d990e
        ;   Label: LAB_004d990e
    MOV AL,byte ptr [EAX + 0x1c50950]   ; 004d9911 | DAT_01c50950
    JMP 0x004d9835                      ; 004d9917
        ;   XREF to: 004d9835 (UNCONDITIONAL_JUMP)  ; LAB_004d9835
    MOV dword ptr [EAX + 0xc],0x1       ; 004d991c
        ;   Label: LAB_004d991c
    MOV ESP,EBP                         ; 004d9923
    POP EBP                             ; 004d9925
    POP EDI                             ; 004d9926
    POP ESI                             ; 004d9927
    POP EBX                             ; 004d9928
    RET                                 ; 004d9929
    FLD float ptr [0x0061d954]          ; 004d992a | DAT_0061d954
        ;   Label: LAB_004d992a
    FLDZ                                ; 004d9930
    FCOMPP                              ; 004d9932
    FNSTSW AX                           ; 004d9934
    SAHF                                ; 004d9936
    JBE 0x004da887                      ; 004d9937
        ;   XREF to: 004da887 (CONDITIONAL_JUMP)  ; LAB_004da887
    MOV EBX,dword ptr [0x00622c18]      ; 004d993d | g_CDemonSetPtr
    MOV ECX,0x3e800000                  ; 004d9943
    PUSH EBX                            ; 004d9948 | g_CDemonSetInstance
    MOV dword ptr [0x0061d954],ECX      ; 004d9949 | DAT_0061d954
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 004d994f
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004d9954
    MOV ESI,dword ptr [ESP + 0x694]     ; 004d9957
    PUSH ESI                            ; 004d995e
    MOV EDI,dword ptr [ESP + 0x694]     ; 004d995f
    PUSH EDI                            ; 004d9966
    PUSH 0x1fe37ec                      ; 004d9967
    LEA ESI,[ESP + 0x4d0]               ; 004d996c
    LEA EDI,[ESP + 0x440]               ; 004d9973
    CALL core_dcamera.cpp_FUN_0044dd70  ; 004d997a
        ;   XREF to: 0044dd70 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044dd70()
    LEA ESI,[ESP + 0x4d0]               ; 004d997f
    ADD ESP,0xc                         ; 004d9986
    LEA EAX,[ESP + 0x434]               ; 004d9989
    LEA EBX,[ESP + 0x374]               ; 004d9990
    PUSH EAX                            ; 004d9997
    MOVSD ES:EDI,ESI                    ; 004d9998
    MOVSD ES:EDI,ESI                    ; 004d9999
    MOVSD ES:EDI,ESI                    ; 004d999a
    PUSH 0x1fe37ec                      ; 004d999b
    LEA ESI,[ESP + 0x5ec]               ; 004d99a0
    LEA EDI,[ESP + 0x43c]               ; 004d99a7
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40 ; 004d99ae
        ;   XREF to: 0044de40 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x5ec]               ; 004d99b3
    ADD ESP,0x8                         ; 004d99ba
    LEA EAX,[ESP + 0x434]               ; 004d99bd
    MOVSD ES:EDI,ESI                    ; 004d99c4
    MOVSD ES:EDI,ESI                    ; 004d99c5
    MOVSD ES:EDI,ESI                    ; 004d99c6
    FILD dword ptr [EAX]                ; 004d99c7
    FMUL float ptr [0x00600f74]         ; 004d99c9 | DAT_00600f74
    FSTP float ptr [EBX]                ; 004d99cf
    FILD dword ptr [EAX + 0x4]          ; 004d99d1
    FMUL float ptr [0x00600f74]         ; 004d99d4 | DAT_00600f74
    FSTP float ptr [EBX + 0x4]          ; 004d99da
    FILD dword ptr [EAX + 0x8]          ; 004d99dd
    FMUL float ptr [0x00600f74]         ; 004d99e0 | DAT_00600f74
    FSTP float ptr [EBX + 0x8]          ; 004d99e6
    LEA EDI,[ESP + 0x548]               ; 004d99e9
    MOV ESI,0x1fe37f0                   ; 004d99f0
    PUSH 0x4                            ; 004d99f5
    MOVSD ES:EDI,ESI                    ; 004d99f7 | g_CDemonCameraInstance.base.position
    MOVSD ES:EDI,ESI                    ; 004d99f8 | g_CDemonCameraInstance.base.position+4
    MOVSD ES:EDI,ESI                    ; 004d99f9 | g_CDemonCameraInstance.base.position+8
    MOV EAX,[0x00622c18]                ; 004d99fa | g_CDemonSetPtr
    LEA EDI,[ESP + 0x528]               ; 004d99ff
    LEA ESI,[ESP + 0x54c]               ; 004d9a06
    PUSH EAX                            ; 004d9a0d | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 004d9a0e
    MOVSD ES:EDI,ESI                    ; 004d9a0f
    MOVSD ES:EDI,ESI                    ; 004d9a10
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0 ; 004d9a11
        ;   XREF to: 005592d0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0(CDemonSet * this_ptr, int ray_type)
    MOV EAX,[0x01d06ab4]                ; 004d9a16 | DAT_01d06ab4
    ADD ESP,0x8                         ; 004d9a1b
    MOV EDX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d9a1e
    PUSH EDX                            ; 004d9a25
    MOV ECX,dword ptr [0x00622c18]      ; 004d9a26 | g_CDemonSetPtr
    PUSH ECX                            ; 004d9a2c | g_CDemonSetInstance
    XOR EBX,EBX                         ; 004d9a2d
    XOR ESI,ESI                         ; 004d9a2f
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 004d9a31
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004d9a36
    MOV dword ptr [0x01cd0c24],EBX      ; 004d9a39 | DAT_01cd0c24
    MOV EAX,ESI                         ; 004d9a3f
        ;   Label: LAB_004d9a3f
    INC ESI                             ; 004d9a41
    CMP EAX,0x4                         ; 004d9a42
    JGE 0x004d9a8f                      ; 004d9a45
        ;   XREF to: 004d9a8f (CONDITIONAL_JUMP)  ; LAB_004d9a8f
    LEA EAX,[ESP + 0x374]               ; 004d9a47
    PUSH EAX                            ; 004d9a4e
    LEA EAX,[ESP + 0x528]               ; 004d9a4f
    PUSH EAX                            ; 004d9a56
    MOV EDI,dword ptr [0x00622c18]      ; 004d9a57 | g_CDemonSetPtr
    PUSH EDI                            ; 004d9a5d | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00557300 ; 004d9a5e
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    MOV dword ptr [ESP + 0x6b4],EAX     ; 004d9a63
    FLD float ptr [ESP + 0x6b4]         ; 004d9a6a
    ADD ESP,0xc                         ; 004d9a71
    FLDZ                                ; 004d9a74
    FXCH                                ; 004d9a76
    FSTP float ptr [ESP + 0x6a0]        ; 004d9a78
    FCOMP float ptr [ESP + 0x6a0]       ; 004d9a7f
    FNSTSW AX                           ; 004d9a86
    SAHF                                ; 004d9a88
    JBE 0x004da8db                      ; 004d9a89
        ;   XREF to: 004da8db (CONDITIONAL_JUMP)  ; LAB_004da8db
    MOV EBX,dword ptr [0x01cd0c24]      ; 004d9a8f | DAT_01cd0c24
        ;   Label: LAB_004d9a8f
    TEST EBX,EBX                        ; 004d9a95
    JZ 0x004d9ac9                       ; 004d9a97
        ;   XREF to: 004d9ac9 (CONDITIONAL_JUMP)  ; LAB_004d9ac9
    MOV EAX,[0x01d06ab4]                ; 004d9a99 | DAT_01d06ab4
    MOV ECX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d9a9e
    MOV dword ptr [ECX + 0x1ff64],EBX   ; 004d9aa5
    MOV ECX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d9aab
    MOV dword ptr [ECX + 0x1ff68],EBX   ; 004d9ab2
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d9ab8
    MOV dword ptr [EAX + 0x1ff70],0x0   ; 004d9abf
    MOV ESI,dword ptr [ESP + 0x690]     ; 004d9ac9
        ;   Label: LAB_004d9ac9
    CMP ESI,0x20                        ; 004d9ad0
    JGE 0x004daa9c                      ; 004d9ad3
        ;   XREF to: 004daa9c (CONDITIONAL_JUMP)  ; LAB_004daa9c
    MOV dword ptr [0x01cd0b40],0x3      ; 004d9ad9 | DAT_01cd0b40
    XOR EDX,EDX                         ; 004d9ae3
        ;   Label: LAB_004d9ae3
    MOV ECX,dword ptr [0x01ccc3b4]      ; 004d9ae5 | DAT_01ccc3b4
    MOV dword ptr [ESP + 0x698],EDX     ; 004d9aeb
    TEST ECX,ECX                        ; 004d9af2
    JNZ 0x004d9c47                      ; 004d9af4
        ;   XREF to: 004d9c47 (CONDITIONAL_JUMP)  ; LAB_004d9c47
    CMP dword ptr [0x01c43544],0x1      ; 004d9afa | DAT_01c43544
    JNZ 0x004dab53                      ; 004d9b01
        ;   XREF to: 004dab53 (CONDITIONAL_JUMP)  ; LAB_004dab53
    MOV ESI,dword ptr [0x00622c18]      ; 004d9b07 | g_CDemonSetPtr
        ;   Label: LAB_004d9b07
    PUSH ESI                            ; 004d9b0d | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 004d9b0e
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004d9b13
    MOV EDI,dword ptr [ESP + 0x694]     ; 004d9b16
    PUSH EDI                            ; 004d9b1d
    MOV EAX,dword ptr [ESP + 0x694]     ; 004d9b1e
    PUSH EAX                            ; 004d9b25
    PUSH 0x1fe37ec                      ; 004d9b26
    LEA ESI,[ESP + 0x3a4]               ; 004d9b2b
    LEA EDI,[ESP + 0x1dc]               ; 004d9b32
    CALL core_dcamera.cpp_FUN_0044dd70  ; 004d9b39
        ;   XREF to: 0044dd70 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044dd70()
    LEA ESI,[ESP + 0x3a4]               ; 004d9b3e
    ADD ESP,0xc                         ; 004d9b45
    LEA EAX,[ESP + 0x1d0]               ; 004d9b48
    LEA EBX,[ESP + 0x368]               ; 004d9b4f
    PUSH EAX                            ; 004d9b56
    MOVSD ES:EDI,ESI                    ; 004d9b57
    MOVSD ES:EDI,ESI                    ; 004d9b58
    MOVSD ES:EDI,ESI                    ; 004d9b59
    PUSH 0x1fe37ec                      ; 004d9b5a
    LEA ESI,[ESP + 0x5c8]               ; 004d9b5f
    LEA EDI,[ESP + 0x1d8]               ; 004d9b66
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40 ; 004d9b6d
        ;   XREF to: 0044de40 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x5c8]               ; 004d9b72
    ADD ESP,0x8                         ; 004d9b79
    LEA EAX,[ESP + 0x1d0]               ; 004d9b7c
    MOVSD ES:EDI,ESI                    ; 004d9b83
    MOVSD ES:EDI,ESI                    ; 004d9b84
    MOVSD ES:EDI,ESI                    ; 004d9b85
    FILD dword ptr [EAX]                ; 004d9b86
    FMUL float ptr [0x00600f74]         ; 004d9b88 | DAT_00600f74
    FSTP float ptr [EBX]                ; 004d9b8e
    FILD dword ptr [EAX + 0x4]          ; 004d9b90
    FMUL float ptr [0x00600f74]         ; 004d9b93 | DAT_00600f74
    FSTP float ptr [EBX + 0x4]          ; 004d9b99
    FILD dword ptr [EAX + 0x8]          ; 004d9b9c
    FMUL float ptr [0x00600f74]         ; 004d9b9f | DAT_00600f74
    FSTP float ptr [EBX + 0x8]          ; 004d9ba5
    LEA EDI,[ESP + 0x140]               ; 004d9ba8
    MOV ESI,0x1fe37f0                   ; 004d9baf
    PUSH 0x4                            ; 004d9bb4
    MOVSD ES:EDI,ESI                    ; 004d9bb6 | g_CDemonCameraInstance.base.position
    MOVSD ES:EDI,ESI                    ; 004d9bb7 | g_CDemonCameraInstance.base.position+4
    MOVSD ES:EDI,ESI                    ; 004d9bb8 | g_CDemonCameraInstance.base.position+8
    MOV EDX,dword ptr [0x00622c18]      ; 004d9bb9 | g_CDemonSetPtr
    LEA EDI,[ESP + 0x1f8]               ; 004d9bbf
    LEA ESI,[ESP + 0x144]               ; 004d9bc6
    PUSH EDX                            ; 004d9bcd | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 004d9bce
    MOVSD ES:EDI,ESI                    ; 004d9bcf
    MOVSD ES:EDI,ESI                    ; 004d9bd0
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0 ; 004d9bd1
        ;   XREF to: 005592d0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0(CDemonSet * this_ptr, int ray_type)
    MOV EAX,[0x01d06ab4]                ; 004d9bd6 | DAT_01d06ab4
    ADD ESP,0x8                         ; 004d9bdb
    MOV ECX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d9bde
    PUSH ECX                            ; 004d9be5
    MOV EBX,dword ptr [0x00622c18]      ; 004d9be6 | g_CDemonSetPtr
    PUSH EBX                            ; 004d9bec | g_CDemonSetInstance
    XOR ESI,ESI                         ; 004d9bed
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 004d9bef
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004d9bf4
    MOV EAX,ESI                         ; 004d9bf7
        ;   Label: LAB_004d9bf7
    INC ESI                             ; 004d9bf9
    CMP EAX,0x4                         ; 004d9bfa
    JGE 0x004d9c47                      ; 004d9bfd
        ;   XREF to: 004d9c47 (CONDITIONAL_JUMP)  ; LAB_004d9c47
    LEA EAX,[ESP + 0x368]               ; 004d9bff
    PUSH EAX                            ; 004d9c06
    LEA EAX,[ESP + 0x1f8]               ; 004d9c07
    PUSH EAX                            ; 004d9c0e
    MOV EDI,dword ptr [0x00622c18]      ; 004d9c0f | g_CDemonSetPtr
    PUSH EDI                            ; 004d9c15 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00557300 ; 004d9c16
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    MOV dword ptr [ESP + 0x6b4],EAX     ; 004d9c1b
    FLD float ptr [ESP + 0x6b4]         ; 004d9c22
    ADD ESP,0xc                         ; 004d9c29
    FLDZ                                ; 004d9c2c
    FXCH                                ; 004d9c2e
    FSTP float ptr [ESP + 0x69c]        ; 004d9c30
    FCOMP float ptr [ESP + 0x69c]       ; 004d9c37
    FNSTSW AX                           ; 004d9c3e
    SAHF                                ; 004d9c40
    JBE 0x004dab9c                      ; 004d9c41
        ;   XREF to: 004dab9c (CONDITIONAL_JUMP)  ; LAB_004dab9c
    CMP dword ptr [ESP + 0x680],0x0     ; 004d9c47
        ;   Label: LAB_004d9c47
    JZ 0x004dad5d                       ; 004d9c4f
        ;   XREF to: 004dad5d (CONDITIONAL_JUMP)  ; LAB_004dad5d
    TEST byte ptr [0x01c43544],0x2      ; 004d9c55 | DAT_01c43544
    JZ 0x004dad5d                       ; 004d9c5c
        ;   XREF to: 004dad5d (CONDITIONAL_JUMP)  ; LAB_004dad5d
    MOV EDI,dword ptr [0x00622c18]      ; 004d9c62 | g_CDemonSetPtr
    PUSH EDI                            ; 004d9c68 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 004d9c69
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004d9c6e
    MOV EAX,dword ptr [ESP + 0x694]     ; 004d9c71
    PUSH EAX                            ; 004d9c78
    MOV EDX,dword ptr [ESP + 0x694]     ; 004d9c79
    PUSH EDX                            ; 004d9c80
    PUSH 0x1fe37ec                      ; 004d9c81
    LEA ESI,[ESP + 0x53c]               ; 004d9c86
    LEA EDI,[ESP + 0x2c0]               ; 004d9c8d
    CALL core_dcamera.cpp_FUN_0044dd70  ; 004d9c94
        ;   XREF to: 0044dd70 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044dd70()
    LEA ESI,[ESP + 0x53c]               ; 004d9c99
    ADD ESP,0xc                         ; 004d9ca0
    LEA EAX,[ESP + 0x2b4]               ; 004d9ca3
    LEA EBX,[ESP + 0x464]               ; 004d9caa
    PUSH EAX                            ; 004d9cb1
    MOVSD ES:EDI,ESI                    ; 004d9cb2
    MOVSD ES:EDI,ESI                    ; 004d9cb3
    MOVSD ES:EDI,ESI                    ; 004d9cb4
    PUSH 0x1fe37ec                      ; 004d9cb5
    LEA ESI,[ESP + 0x1b4]               ; 004d9cba
    LEA EDI,[ESP + 0x2bc]               ; 004d9cc1
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40 ; 004d9cc8
        ;   XREF to: 0044de40 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x1b4]               ; 004d9ccd
    ADD ESP,0x8                         ; 004d9cd4
    LEA EAX,[ESP + 0x2b4]               ; 004d9cd7
    MOVSD ES:EDI,ESI                    ; 004d9cde
    MOVSD ES:EDI,ESI                    ; 004d9cdf
    MOVSD ES:EDI,ESI                    ; 004d9ce0
    FILD dword ptr [EAX]                ; 004d9ce1
    FMUL float ptr [0x00600f74]         ; 004d9ce3 | DAT_00600f74
    FSTP float ptr [EBX]                ; 004d9ce9
    FILD dword ptr [EAX + 0x4]          ; 004d9ceb
    FMUL float ptr [0x00600f74]         ; 004d9cee | DAT_00600f74
    FSTP float ptr [EBX + 0x4]          ; 004d9cf4
    FILD dword ptr [EAX + 0x8]          ; 004d9cf7
    FMUL float ptr [0x00600f74]         ; 004d9cfa | DAT_00600f74
    FSTP float ptr [EBX + 0x8]          ; 004d9d00
    LEA EDI,[ESP + 0x5cc]               ; 004d9d03
    MOV ESI,0x1fe37f0                   ; 004d9d0a
    PUSH 0x4                            ; 004d9d0f
    MOVSD ES:EDI,ESI                    ; 004d9d11 | g_CDemonCameraInstance.base.position
    MOVSD ES:EDI,ESI                    ; 004d9d12 | g_CDemonCameraInstance.base.position+4
    MOVSD ES:EDI,ESI                    ; 004d9d13 | g_CDemonCameraInstance.base.position+8
    MOV ECX,dword ptr [0x00622c18]      ; 004d9d14 | g_CDemonSetPtr
    LEA EDI,[ESP + 0x630]               ; 004d9d1a
    LEA ESI,[ESP + 0x5d0]               ; 004d9d21
    PUSH ECX                            ; 004d9d28 | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 004d9d29
    MOVSD ES:EDI,ESI                    ; 004d9d2a
    MOVSD ES:EDI,ESI                    ; 004d9d2b
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0 ; 004d9d2c
        ;   XREF to: 005592d0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0(CDemonSet * this_ptr, int ray_type)
    MOV EAX,[0x01d06ab4]                ; 004d9d31 | DAT_01d06ab4
    ADD ESP,0x8                         ; 004d9d36
    MOV EBX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d9d39
    PUSH EBX                            ; 004d9d40
    MOV ESI,dword ptr [0x00622c18]      ; 004d9d41 | g_CDemonSetPtr
    PUSH ESI                            ; 004d9d47 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 004d9d48
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    XOR EBX,EBX                         ; 004d9d4d
    ADD ESP,0x8                         ; 004d9d4f
    MOV EAX,EBX                         ; 004d9d52
        ;   Label: LAB_004d9d52
    INC EBX                             ; 004d9d54
    CMP EAX,0x4                         ; 004d9d55
    JGE 0x004d9d98                      ; 004d9d58
        ;   XREF to: 004d9d98 (CONDITIONAL_JUMP)  ; LAB_004d9d98
    LEA EAX,[ESP + 0x464]               ; 004d9d5a
    PUSH EAX                            ; 004d9d61
    LEA EAX,[ESP + 0x630]               ; 004d9d62
    PUSH EAX                            ; 004d9d69
    MOV EDI,dword ptr [0x00622c18]      ; 004d9d6a | g_CDemonSetPtr
    PUSH EDI                            ; 004d9d70 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00557300 ; 004d9d71
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    MOV dword ptr [ESP + 0x6b4],EAX     ; 004d9d76
    FLD float ptr [ESP + 0x6b4]         ; 004d9d7d
    ADD ESP,0xc                         ; 004d9d84
    FST float ptr [ESP + 0x28]          ; 004d9d87
    FLDZ                                ; 004d9d8b
    FCOMPP                              ; 004d9d8d
    FNSTSW AX                           ; 004d9d8f
    SAHF                                ; 004d9d91
    JBE 0x004dad0c                      ; 004d9d92
        ;   XREF to: 004dad0c (CONDITIONAL_JUMP)  ; LAB_004dad0c
    MOV EBX,dword ptr [0x01ccc3dc]      ; 004d9d98 | DAT_01ccc3dc
        ;   Label: LAB_004d9d98
    TEST EBX,EBX                        ; 004d9d9e
    JZ 0x004dad4e                       ; 004d9da0
        ;   XREF to: 004dad4e (CONDITIONAL_JUMP)  ; LAB_004dad4e
    LEA EAX,[EBX + 0x20]                ; 004d9da6
    PUSH EAX                            ; 004d9da9
    MOV EAX,[0x01d06ab4]                ; 004d9daa | DAT_01d06ab4
    MOV ESI,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d9daf
    PUSH ESI                            ; 004d9db6
    LEA ESI,[ESP + 0x1e4]               ; 004d9db7
    LEA EDI,[ESP + 0x280]               ; 004d9dbe
    CALL core_actor.cpp_FUN_00408bb0    ; 004d9dc5
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x1e4]               ; 004d9dca
    ADD ESP,0x8                         ; 004d9dd1
    MOVSD ES:EDI,ESI                    ; 004d9dd4
    MOVSD ES:EDI,ESI                    ; 004d9dd5
    MOVSD ES:EDI,ESI                    ; 004d9dd6
    FLDZ                                ; 004d9dd7
    FCOMP float ptr [ESP + 0x280]       ; 004d9dd9
    FNSTSW AX                           ; 004d9de0
    SAHF                                ; 004d9de2
    JBE 0x004dad4e                      ; 004d9de3
        ;   XREF to: 004dad4e (CONDITIONAL_JUMP)  ; LAB_004dad4e
    CMP dword ptr [0x01ccc3b4],0x0      ; 004d9de9 | DAT_01ccc3b4
        ;   Label: LAB_004d9de9
    JNZ 0x004dad77                      ; 004d9df0
        ;   XREF to: 004dad77 (CONDITIONAL_JUMP)  ; LAB_004dad77
    CMP dword ptr [0x01c43544],0x1      ; 004d9df6 | DAT_01c43544
    JNZ 0x004dad77                      ; 004d9dfd
        ;   XREF to: 004dad77 (CONDITIONAL_JUMP)  ; LAB_004dad77
    MOV ECX,dword ptr [ESP + 0x694]     ; 004d9e03
        ;   Label: LAB_004d9e03
    PUSH ECX                            ; 004d9e0a
    MOV EBX,dword ptr [ESP + 0x694]     ; 004d9e0b
    PUSH EBX                            ; 004d9e12
    MOV EDX,0x7149f2ca                  ; 004d9e13
    LEA ESI,[ESP + 0x544]               ; 004d9e18
    PUSH 0x1fe37ec                      ; 004d9e1f
    LEA EDI,[ESP + 0x1f4]               ; 004d9e24
    MOV dword ptr [0x01cd0c28],EDX      ; 004d9e2b | DAT_01cd0c28
    CALL core_dcamera.cpp_FUN_0044dd70  ; 004d9e31
        ;   XREF to: 0044dd70 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044dd70()
    LEA ESI,[ESP + 0x548]               ; 004d9e36
    ADD ESP,0xc                         ; 004d9e3d
    MOVSD ES:EDI,ESI                    ; 004d9e40
    MOVSD ES:EDI,ESI                    ; 004d9e41
    MOVSD ES:EDI,ESI                    ; 004d9e42
    CMP dword ptr [ESP + 0x698],0x0     ; 004d9e43
    JZ 0x004dbb54                       ; 004d9e4b
        ;   XREF to: 004dbb54 (CONDITIONAL_JUMP)  ; LAB_004dbb54
    TEST byte ptr [0x01c43544],0x2      ; 004d9e51 | DAT_01c43544
    JZ 0x004d9e96                       ; 004d9e58
        ;   XREF to: 004d9e96 (CONDITIONAL_JUMP)  ; LAB_004d9e96
    CMP dword ptr [0x01ccc3dc],0x0      ; 004d9e5a | DAT_01ccc3dc
    JNZ 0x004d9e96                      ; 004d9e61
        ;   XREF to: 004d9e96 (CONDITIONAL_JUMP)  ; LAB_004d9e96
    MOV EAX,[0x01d06ab4]                ; 004d9e63 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d9e68
    MOV ESI,0x1                         ; 004d9e6f
    MOV EDI,dword ptr [EAX + 0x1ff5c]   ; 004d9e74
    MOV dword ptr [0x01ccc3b0],ESI      ; 004d9e7a | DAT_01ccc3b0
    TEST EDI,EDI                        ; 004d9e80
    JNZ 0x004d9e96                      ; 004d9e82
        ;   XREF to: 004d9e96 (CONDITIONAL_JUMP)  ; LAB_004d9e96
    PUSH EAX                            ; 004d9e84
    CALL core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0 ; 004d9e85
        ;   XREF to: 004328c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0(CCharacter * this_ptr)
    MOV EAX,0x40000000                  ; 004d9e8a
    ADD ESP,0x4                         ; 004d9e8f
    MOV dword ptr [ESP + 0x1c],EAX      ; 004d9e92
    FLD float ptr [ESP + 0x1c]          ; 004d9e96
        ;   Label: LAB_004d9e96
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d9e9a
    MOV EDX,dword ptr [0x01b68928]      ; 004d9e9d | g_CDoorClassInfo.name_hash
    MOV ECX,dword ptr [ESP + 0x698]     ; 004d9ea3
    PUSH EDX                            ; 004d9eaa
    FSUB float ptr [EAX + 0x294]        ; 004d9eab
    PUSH ECX                            ; 004d9eb1
    FSTP float ptr [ESP + 0x24]         ; 004d9eb2
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004d9eb6
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004d9ebb
    MOV ESI,dword ptr [0x007c637c]      ; 004d9ebe | g_CCharacterClassInfo.name_hash
    PUSH ESI                            ; 004d9ec4
    MOV EDI,dword ptr [ESP + 0x69c]     ; 004d9ec5
    PUSH EDI                            ; 004d9ecc
    MOV EBX,EAX                         ; 004d9ecd
    MOV dword ptr [ESP + 0x68c],EAX     ; 004d9ecf
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004d9ed6
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x678],EAX     ; 004d9edb
    ADD ESP,0x8                         ; 004d9ee2
    MOV dword ptr [ESP + 0x650],EAX     ; 004d9ee5
    MOV EAX,[0x01d1c21c]                ; 004d9eec | g_CLeverClassInfo.name_hash
    PUSH EAX                            ; 004d9ef1
    PUSH EDI                            ; 004d9ef2
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004d9ef3
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x680],EAX     ; 004d9ef8
    ADD ESP,0x8                         ; 004d9eff
    MOV ECX,dword ptr [0x02c8ae44]      ; 004d9f02 | g_CTriggerClassInfo.name_hash
    PUSH ECX                            ; 004d9f08
    PUSH EDI                            ; 004d9f09
    MOV dword ptr [ESP + 0x654],EAX     ; 004d9f0a
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004d9f11
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x684],EAX     ; 004d9f16
    ADD ESP,0x8                         ; 004d9f1d
    MOV ESI,EDI                         ; 004d9f20
    MOV EDI,dword ptr [0x007c5094]      ; 004d9f22 | g_CBoxActorClassInfo.name_hash
    PUSH EDI                            ; 004d9f28
    MOV EAX,ESI                         ; 004d9f29
    PUSH EAX                            ; 004d9f2b
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004d9f2c
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x674],EAX     ; 004d9f31
    ADD ESP,0x8                         ; 004d9f38
    MOV EDX,dword ptr [0x01d1e2dc]      ; 004d9f3b | g_CMeleeClassInfo.name_hash
    PUSH EDX                            ; 004d9f41
    MOV ECX,ESI                         ; 004d9f42
    PUSH ECX                            ; 004d9f44
    MOV dword ptr [ESP + 0x650],EAX     ; 004d9f45
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004d9f4c
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x67c],EAX     ; 004d9f51
    ADD ESP,0x8                         ; 004d9f58
    MOV ESI,dword ptr [0x02c99770]      ; 004d9f5b | g_CWeaponClassInfo.name_hash
    PUSH ESI                            ; 004d9f61
    MOV EDI,dword ptr [ESP + 0x69c]     ; 004d9f62
    PUSH EDI                            ; 004d9f69
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004d9f6a
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004d9f6f
    MOV EDX,0x40200000                  ; 004d9f72
    MOV ECX,dword ptr [ESP + 0x670]     ; 004d9f77
    MOV dword ptr [ESP + 0x654],EAX     ; 004d9f7e
    MOV dword ptr [ESP],EDX             ; 004d9f85
    TEST ECX,ECX                        ; 004d9f88
    JZ 0x004daeb1                       ; 004d9f8a
        ;   XREF to: 004daeb1 (CONDITIONAL_JUMP)  ; LAB_004daeb1
    PUSH 0x5e35f7                       ; 004d9f90 | = "CEnemy"
    PUSH ECX                            ; 004d9f95
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004d9f96
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004d9f9b
    TEST EAX,EAX                        ; 004d9f9e
    JZ 0x004dad89                       ; 004d9fa0
        ;   XREF to: 004dad89 (CONDITIONAL_JUMP)  ; LAB_004dad89
    MOV EAX,[0x007dc624]                ; 004d9fa6 | g_CConstructClassInfo.name_hash
    PUSH EAX                            ; 004d9fab
    PUSH EDI                            ; 004d9fac
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004d9fad
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004d9fb2
    TEST EAX,EAX                        ; 004d9fb5
    JZ 0x004da052                       ; 004d9fb7
        ;   XREF to: 004da052 (CONDITIONAL_JUMP)  ; LAB_004da052
    MOV ECX,0x40a00000                  ; 004d9fbd
    LEA ESI,[ESP + 0x2cc]               ; 004d9fc2
    PUSH EAX                            ; 004d9fc9
    MOV EDX,dword ptr [EAX + 0x154]     ; 004d9fca
    LEA EDI,[ESP + 0x294]               ; 004d9fd0
    MOV dword ptr [ESP + 0x4],ECX       ; 004d9fd7
    CALL dword ptr [EDX + 0x148]        ; 004d9fdb
    LEA ESI,[ESP + 0x2d0]               ; 004d9fe1
    ADD ESP,0x4                         ; 004d9fe8
    LEA EAX,[ESP + 0x290]               ; 004d9feb
    MOVSD ES:EDI,ESI                    ; 004d9ff2
    MOVSD ES:EDI,ESI                    ; 004d9ff3
    MOVSD ES:EDI,ESI                    ; 004d9ff4
    CMP EAX,0x1ccc3b8                   ; 004d9ff5
    JZ 0x004da020                       ; 004d9ffa
        ;   XREF to: 004da020 (CONDITIONAL_JUMP)  ; LAB_004da020
    MOV EAX,dword ptr [ESP + 0x290]     ; 004d9ffc
    MOV [0x01ccc3b8],EAX                ; 004da003 | DAT_01ccc3b8
    MOV EAX,dword ptr [ESP + 0x294]     ; 004da008
    MOV [0x01ccc3bc],EAX                ; 004da00f | DAT_01ccc3bc
    MOV EAX,dword ptr [ESP + 0x298]     ; 004da014
    MOV [0x01ccc3c0],EAX                ; 004da01b | DAT_01ccc3c0
    LEA EAX,[ESP + 0x290]               ; 004da020
        ;   Label: LAB_004da020
    CMP EAX,0x1cd0c28                   ; 004da027
    JZ 0x004da052                       ; 004da02c
        ;   XREF to: 004da052 (CONDITIONAL_JUMP)  ; LAB_004da052
    MOV EAX,dword ptr [ESP + 0x290]     ; 004da02e
    MOV [0x01cd0c28],EAX                ; 004da035 | DAT_01cd0c28
    MOV EAX,dword ptr [ESP + 0x294]     ; 004da03a
    MOV [0x01cd0c2c],EAX                ; 004da041 | DAT_01cd0c2c
    MOV EAX,dword ptr [ESP + 0x298]     ; 004da046
    MOV [0x01cd0c30],EAX                ; 004da04d | DAT_01cd0c30
        ;   Label: LAB_004da04d
    CMP dword ptr [ESP + 0x680],0x0     ; 004da052
        ;   Label: LAB_004da052
    JZ 0x004dbadc                       ; 004da05a
        ;   XREF to: 004dbadc (CONDITIONAL_JUMP)  ; LAB_004dbadc
    TEST byte ptr [0x01c43544],0x2      ; 004da060 | DAT_01c43544
    JZ 0x004dbadc                       ; 004da067
        ;   XREF to: 004dbadc (CONDITIONAL_JUMP)  ; LAB_004dbadc
    MOV ECX,0x7149f2ca                  ; 004da06d
    XOR EDX,EDX                         ; 004da072
    MOV dword ptr [0x01cd0c28],ECX      ; 004da074 | DAT_01cd0c28
    MOV dword ptr [0x01ccc3c4],EDX      ; 004da07a | DAT_01ccc3c4
    MOV EAX,[0x01d06ab4]                ; 004da080 | DAT_01d06ab4
        ;   Label: LAB_004da080
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004da085
    LEA EDI,[ESP + 0x50c]               ; 004da08c
    LEA ESI,[ESP + 0x224]               ; 004da093
    FLD float ptr [EAX + 0x20]          ; 004da09a
    FLD float ptr [EAX + 0x24]          ; 004da09d
    FLD float ptr [EAX + 0x28]          ; 004da0a0
    FXCH ST2                            ; 004da0a3
    FSUB float ptr [0x01ccc3b8]         ; 004da0a5 | DAT_01ccc3b8
    FXCH                                ; 004da0ab
    FSUB float ptr [0x01ccc3bc]         ; 004da0ad | DAT_01ccc3bc
    FXCH ST2                            ; 004da0b3
    FSUB float ptr [0x01ccc3c0]         ; 004da0b5 | DAT_01ccc3c0
    FXCH                                ; 004da0bb
    FSTP float ptr [ESP + 0x224]        ; 004da0bd
    FXCH                                ; 004da0c4
    FSTP float ptr [ESP + 0x228]        ; 004da0c6
    FSTP float ptr [ESP + 0x22c]        ; 004da0cd
    MOVSD ES:EDI,ESI                    ; 004da0d4
    MOVSD ES:EDI,ESI                    ; 004da0d5
    MOVSD ES:EDI,ESI                    ; 004da0d6
    FLD float ptr [ESP + 0x510]         ; 004da0d7
    FMUL ST0                            ; 004da0de
    FLD float ptr [ESP + 0x50c]         ; 004da0e0
    FMUL ST0                            ; 004da0e7
    FADDP                               ; 004da0e9
    FLD float ptr [ESP + 0x514]         ; 004da0eb
    FMUL ST0                            ; 004da0f2
    FADDP                               ; 004da0f4
    FSQRT                               ; 004da0f6
    MOV EBX,dword ptr [0x01ccc3c4]      ; 004da0f8 | DAT_01ccc3c4
    FSTP float ptr [ESP + 0xc]          ; 004da0fe
    TEST EBX,EBX                        ; 004da102
    JZ 0x004dbf63                       ; 004da104
        ;   XREF to: 004dbf63 (CONDITIONAL_JUMP)  ; LAB_004dbf63
    CMP dword ptr [0x01ccc3dc],0x0      ; 004da10a | DAT_01ccc3dc
    JNZ 0x004dbf63                      ; 004da111
        ;   XREF to: 004dbf63 (CONDITIONAL_JUMP)  ; LAB_004dbf63
    MOV EAX,[0x01d06ab4]                ; 004da117 | DAT_01d06ab4
        ;   Label: LAB_004da117
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004da11c
    FLD float ptr [0x01ccc3bc]          ; 004da123 | DAT_01ccc3bc
    FSUB float ptr [EAX + 0x24]         ; 004da129
    FABS                                ; 004da12c
    FLD float ptr [ESP + 0xc]           ; 004da12e
    FLD ST0                             ; 004da132
    FMUL double ptr [0x005e3614]        ; 004da134 | DAT_005e3614
    FSUBP                               ; 004da13a
    FCOMPP                              ; 004da13c
    FNSTSW AX                           ; 004da13e
    SAHF                                ; 004da140
    JNC 0x004da15c                      ; 004da141
        ;   XREF to: 004da15c (CONDITIONAL_JUMP)  ; LAB_004da15c
    XOR EDI,EDI                         ; 004da143
    MOV EDX,0x7149f2ca                  ; 004da145
    MOV dword ptr [0x01ccc3b0],EDI      ; 004da14a | DAT_01ccc3b0
    MOV dword ptr [0x01cd0c28],EDX      ; 004da150 | DAT_01cd0c28
    MOV dword ptr [0x01ccc3c4],EDI      ; 004da156 | DAT_01ccc3c4
    PUSH 0x1ccc3b8                      ; 004da15c | DAT_01ccc3b8
        ;   Label: LAB_004da15c
    CALL core_path.cpp_getPathMap_FUN_005351f0 ; 004da161
        ;   XREF to: 005351f0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_005351f0(CLocation * location)
    ADD ESP,0x4                         ; 004da166
    PUSH 0x0                            ; 004da169
    LEA EDX,[ESP + 0x594]               ; 004da16b
    PUSH EDX                            ; 004da172
    MOV EDX,dword ptr [0x01d06ab4]      ; 004da173 | DAT_01d06ab4
    MOV EDX,dword ptr [EDX*0x4 + 0x1d06aa4] ; 004da179
    ADD EDX,0x20                        ; 004da180
    PUSH EDX                            ; 004da183
    PUSH EAX                            ; 004da184
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0 ; 004da185
        ;   XREF to: 005349a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 004da18a
    TEST EAX,EAX                        ; 004da18d
    JZ 0x004dbf7d                       ; 004da18f
        ;   XREF to: 004dbf7d (CONDITIONAL_JUMP)  ; LAB_004dbf7d
    MOV EAX,[0x01d06ab4]                ; 004da195 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004da19a
    FLD float ptr [ESP + 0x594]         ; 004da1a1
    FSUB float ptr [EAX + 0x34]         ; 004da1a8
    SUB ESP,0x4                         ; 004da1ab
    FSTP float ptr [ESP]                ; 004da1ae
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004da1b1
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x6ac],EAX     ; 004da1b6
    FLD float ptr [ESP + 0x6ac]         ; 004da1bd
    ADD ESP,0x4                         ; 004da1c4
    FST float ptr [ESP + 0x24]          ; 004da1c7
    FMUL float ptr [0x005e361c]         ; 004da1cb | DAT_005e361c
    FMUL double ptr [0x005e3624]        ; 004da1d1 | DAT_005e3624
    FLD float ptr [ESP + 0x20]          ; 004da1d7
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da1db
    FCHS                                ; 004da1de
    FSTP float ptr [ESP + 0x18]         ; 004da1e0
    FST float ptr [EAX + 0x28]          ; 004da1e4
    FCOMP float ptr [ESP + 0x18]        ; 004da1e7
    FNSTSW AX                           ; 004da1eb
    SAHF                                ; 004da1ed
    JNC 0x004da208                      ; 004da1ee
        ;   XREF to: 004da208 (CONDITIONAL_JUMP)  ; LAB_004da208
    FLD float ptr [ESP + 0x18]          ; 004da1f0
    FLD float ptr [ESP + 0x24]          ; 004da1f4
    FABS                                ; 004da1f8
    FMULP                               ; 004da1fa
    FMUL double ptr [0x005e362c]        ; 004da1fc | DAT_005e362c
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da202
    FSTP float ptr [EAX + 0x28]         ; 004da205
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da208
        ;   Label: LAB_004da208
    FLD float ptr [EAX + 0x28]          ; 004da20b
    FCOMP float ptr [ESP + 0x20]        ; 004da20e
    FNSTSW AX                           ; 004da212
    SAHF                                ; 004da214
    JBE 0x004da22d                      ; 004da215
        ;   XREF to: 004da22d (CONDITIONAL_JUMP)  ; LAB_004da22d
    FLD float ptr [ESP + 0x24]          ; 004da217
    FABS                                ; 004da21b
    FMUL float ptr [ESP + 0x20]         ; 004da21d
    FMUL double ptr [0x005e362c]        ; 004da221 | DAT_005e362c
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da227
    FSTP float ptr [EAX + 0x28]         ; 004da22a
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da22d
        ;   Label: LAB_004da22d
    FLD float ptr [EAX + 0x28]          ; 004da230
    FABS                                ; 004da233
    FCOMP double ptr [0x005e3634]       ; 004da235 | DAT_005e3634
    FNSTSW AX                           ; 004da23b
    SAHF                                ; 004da23d
    JNC 0x004da24a                      ; 004da23e
        ;   XREF to: 004da24a (CONDITIONAL_JUMP)  ; LAB_004da24a
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da240
    MOV dword ptr [EAX + 0x28],0x0      ; 004da243
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da24a
        ;   Label: LAB_004da24a
    MOV EBX,dword ptr [0x01ccc3d8]      ; 004da24d | DAT_01ccc3d8
    MOV dword ptr [EAX],0x1             ; 004da253
    TEST EBX,EBX                        ; 004da259
    JZ 0x004da264                       ; 004da25b
        ;   XREF to: 004da264 (CONDITIONAL_JUMP)  ; LAB_004da264
    MOV dword ptr [EAX + 0x8],0x1       ; 004da25d
    FLD float ptr [ESP]                 ; 004da264
        ;   Label: LAB_004da264
    FMUL float ptr [0x005e3604]         ; 004da267 | DAT_005e3604
    FCOMP float ptr [ESP + 0xc]         ; 004da26d
    FNSTSW AX                           ; 004da271
    SAHF                                ; 004da273
    JBE 0x004dbf87                      ; 004da274
        ;   XREF to: 004dbf87 (CONDITIONAL_JUMP)  ; LAB_004dbf87
    CMP dword ptr [0x01ccc3d8],0x0      ; 004da27a | DAT_01ccc3d8
    JNZ 0x004dbf87                      ; 004da281
        ;   XREF to: 004dbf87 (CONDITIONAL_JUMP)  ; LAB_004dbf87
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da287
        ;   Label: LAB_004da287
    MOV dword ptr [EAX],0x0             ; 004da28a
    FLD float ptr [0x01cd0c28]          ; 004da290 | DAT_01cd0c28
    FCOMP double ptr [0x005e360c]       ; 004da296 | DAT_005e360c
    FNSTSW AX                           ; 004da29c
    SAHF                                ; 004da29e
    JNC 0x004dbfb1                      ; 004da29f
        ;   XREF to: 004dbfb1 (CONDITIONAL_JUMP)  ; LAB_004dbfb1
    MOV EAX,[0x01d06ab4]                ; 004da2a5 | DAT_01d06ab4
    PUSH 0x1ccc3b8                      ; 004da2aa | DAT_01ccc3b8
    MOV EDX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004da2af
    PUSH EDX                            ; 004da2b6
    LEA ESI,[ESP + 0x3e8]               ; 004da2b7
    LEA EDI,[ESP + 0x628]               ; 004da2be
    CALL core_actor.cpp_FUN_00408bb0    ; 004da2c5
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x3e8]               ; 004da2ca
    ADD ESP,0x8                         ; 004da2d1
    MOVSD ES:EDI,ESI                    ; 004da2d4
    MOVSD ES:EDI,ESI                    ; 004da2d5
    MOVSD ES:EDI,ESI                    ; 004da2d6
    FLD float ptr [ESP + 0x620]         ; 004da2d7
    FCOMP float ptr [ESP + 0x668]       ; 004da2de
    FNSTSW AX                           ; 004da2e5
    SAHF                                ; 004da2e7
    JBE 0x004da2fb                      ; 004da2e8
        ;   XREF to: 004da2fb (CONDITIONAL_JUMP)  ; LAB_004da2fb
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da2ea
    MOV dword ptr [EAX + 0x8],0x0       ; 004da2ed
    MOV dword ptr [EAX + 0x24],0x3e4ccccd ; 004da2f4
    FLD float ptr [ESP + 0x668]         ; 004da2fb
        ;   Label: LAB_004da2fb
    FCHS                                ; 004da302
    FCOMP float ptr [ESP + 0x620]       ; 004da304
    FNSTSW AX                           ; 004da30b
    SAHF                                ; 004da30d
    JBE 0x004da321                      ; 004da30e
        ;   XREF to: 004da321 (CONDITIONAL_JUMP)  ; LAB_004da321
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da310
    MOV dword ptr [EAX + 0x8],0x0       ; 004da313
    MOV dword ptr [EAX + 0x24],0xbe4ccccd ; 004da31a
    FLD float ptr [ESP + 0x628]         ; 004da321
        ;   Label: LAB_004da321
    FCOMP float ptr [ESP + 0x668]       ; 004da328
    FNSTSW AX                           ; 004da32f
    SAHF                                ; 004da331
    JBE 0x004da344                      ; 004da332
        ;   XREF to: 004da344 (CONDITIONAL_JUMP)  ; LAB_004da344
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da334
    MOV dword ptr [EAX + 0x8],0x0       ; 004da337
    MOV dword ptr [EAX],0x1             ; 004da33e
    FLD float ptr [ESP + 0x668]         ; 004da344
        ;   Label: LAB_004da344
    FCHS                                ; 004da34b
    FCOMP float ptr [ESP + 0x628]       ; 004da34d
    FNSTSW AX                           ; 004da354
    SAHF                                ; 004da356
    JBE 0x004da36a                      ; 004da357
        ;   XREF to: 004da36a (CONDITIONAL_JUMP)  ; LAB_004da36a
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da359
    MOV dword ptr [EAX + 0x8],0x0       ; 004da35c
    MOV dword ptr [EAX + 0x4],0x1       ; 004da363
    FLD float ptr [0x01cd0c28]          ; 004da36a | DAT_01cd0c28
        ;   Label: LAB_004da36a
    FLD float ptr [0x01cd0c2c]          ; 004da370 | DAT_01cd0c2c
    MOV EAX,[0x01d06ab4]                ; 004da376 | DAT_01d06ab4
    FLD float ptr [0x01cd0c30]          ; 004da37b | DAT_01cd0c30
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004da381
    LEA EDI,[ESP + 0x194]               ; 004da388
    LEA ESI,[ESP + 0x44c]               ; 004da38f
    FXCH ST2                            ; 004da396
    FSUB float ptr [EAX + 0x20]         ; 004da398
    FXCH                                ; 004da39b
    FSUB float ptr [EAX + 0x24]         ; 004da39d
    FXCH ST2                            ; 004da3a0
    FSUB float ptr [EAX + 0x28]         ; 004da3a2
    FXCH                                ; 004da3a5
    FSTP float ptr [ESP + 0x44c]        ; 004da3a7
    FXCH                                ; 004da3ae
    FSTP float ptr [ESP + 0x450]        ; 004da3b0
    FSTP float ptr [ESP + 0x454]        ; 004da3b7
    LEA EAX,[ESP + 0x194]               ; 004da3be
    MOVSD ES:EDI,ESI                    ; 004da3c5
    MOVSD ES:EDI,ESI                    ; 004da3c6
    MOVSD ES:EDI,ESI                    ; 004da3c7
    PUSH EAX                            ; 004da3c8
    LEA ESI,[ESP + 0x2ac]               ; 004da3c9
    LEA EDI,[ESP + 0x168]               ; 004da3d0
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004da3d7
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x2ac]               ; 004da3dc
    ADD ESP,0x4                         ; 004da3e3
    MOV EAX,[0x01d06ab4]                ; 004da3e6 | DAT_01d06ab4
    MOVSD ES:EDI,ESI                    ; 004da3eb
    MOVSD ES:EDI,ESI                    ; 004da3ec
    MOVSD ES:EDI,ESI                    ; 004da3ed
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004da3ee
    FLD float ptr [ESP + 0x168]         ; 004da3f5
    FSUB float ptr [EAX + 0x34]         ; 004da3fc
    SUB ESP,0x4                         ; 004da3ff
    FSTP float ptr [ESP]                ; 004da402
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004da405
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x6ac],EAX     ; 004da40a
    FLD float ptr [ESP + 0x6ac]         ; 004da411
    ADD ESP,0x4                         ; 004da418
    FST float ptr [ESP + 0x14]          ; 004da41b
    FMUL float ptr [0x005e361c]         ; 004da41f | DAT_005e361c
    FMUL double ptr [0x005e3624]        ; 004da425 | DAT_005e3624
    FLD float ptr [ESP + 0x20]          ; 004da42b
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da42f
    FCHS                                ; 004da432
    FSTP float ptr [ESP + 0x8]          ; 004da434
    FST float ptr [EAX + 0x28]          ; 004da438
    FCOMP float ptr [ESP + 0x8]         ; 004da43b
    FNSTSW AX                           ; 004da43f
    SAHF                                ; 004da441
    JNC 0x004da45c                      ; 004da442
        ;   XREF to: 004da45c (CONDITIONAL_JUMP)  ; LAB_004da45c
    FLD float ptr [ESP + 0x8]           ; 004da444
    FLD float ptr [ESP + 0x14]          ; 004da448
    FABS                                ; 004da44c
    FMULP                               ; 004da44e
    FMUL double ptr [0x005e362c]        ; 004da450 | DAT_005e362c
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da456
    FSTP float ptr [EAX + 0x28]         ; 004da459
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da45c
        ;   Label: LAB_004da45c
    FLD float ptr [EAX + 0x28]          ; 004da45f
    FCOMP float ptr [ESP + 0x20]        ; 004da462
    FNSTSW AX                           ; 004da466
    SAHF                                ; 004da468
    JBE 0x004da481                      ; 004da469
        ;   XREF to: 004da481 (CONDITIONAL_JUMP)  ; LAB_004da481
    FLD float ptr [ESP + 0x14]          ; 004da46b
    FABS                                ; 004da46f
    FMUL float ptr [ESP + 0x20]         ; 004da471
    FMUL double ptr [0x005e362c]        ; 004da475 | DAT_005e362c
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da47b
    FSTP float ptr [EAX + 0x28]         ; 004da47e
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da481
        ;   Label: LAB_004da481
    FLD float ptr [EAX + 0x28]          ; 004da484
    FABS                                ; 004da487
    FCOMP double ptr [0x005e3634]       ; 004da489 | DAT_005e3634
    FNSTSW AX                           ; 004da48f
    SAHF                                ; 004da491
    JNC 0x004da4b7                      ; 004da492
        ;   XREF to: 004da4b7 (CONDITIONAL_JUMP)  ; LAB_004da4b7
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da494
    MOV EBX,0x7149f2ca                  ; 004da497
    MOV dword ptr [EAX],0x0             ; 004da49c
    XOR ECX,ECX                         ; 004da4a2
    MOV dword ptr [EAX + 0x28],0x0      ; 004da4a4
    MOV dword ptr [0x01ccc3c4],ECX      ; 004da4ab | DAT_01ccc3c4
    MOV dword ptr [0x01cd0c28],EBX      ; 004da4b1 | DAT_01cd0c28
    CMP dword ptr [0x01ccc3b0],0x0      ; 004da4b7 | DAT_01ccc3b0
        ;   Label: LAB_004da4b7
    JZ 0x004da4e8                       ; 004da4be
        ;   XREF to: 004da4e8 (CONDITIONAL_JUMP)  ; LAB_004da4e8
    FLD float ptr [0x01cd0c28]          ; 004da4c0 | DAT_01cd0c28
    FCOMP double ptr [0x005e360c]       ; 004da4c6 | DAT_005e360c
    FNSTSW AX                           ; 004da4cc
    SAHF                                ; 004da4ce
    JBE 0x004da4e8                      ; 004da4cf
        ;   XREF to: 004da4e8 (CONDITIONAL_JUMP)  ; LAB_004da4e8
    XOR EDI,EDI                         ; 004da4d1
    MOV EAX,dword ptr [ESP + 0x680]     ; 004da4d3
    MOV dword ptr [0x01ccc3b0],EDI      ; 004da4da | DAT_01ccc3b0
    TEST EAX,EAX                        ; 004da4e0
    JZ 0x004dbfbd                       ; 004da4e2
        ;   XREF to: 004dbfbd (CONDITIONAL_JUMP)  ; LAB_004dbfbd
    FLD float ptr [0x01ccc3c8]          ; 004da4e8 | DAT_01ccc3c8
        ;   Label: LAB_004da4e8
    FLD float ptr [0x01ccc3cc]          ; 004da4ee | DAT_01ccc3cc
    MOV EAX,[0x01d06ab4]                ; 004da4f4 | DAT_01d06ab4
    FLD float ptr [0x01ccc3d0]          ; 004da4f9 | DAT_01ccc3d0
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004da4ff
    LEA EDI,[ESP + 0x2f0]               ; 004da506
    LEA ESI,[ESP + 0x23c]               ; 004da50d
    FXCH ST2                            ; 004da514
    FSUB float ptr [EAX + 0x20]         ; 004da516
    FXCH                                ; 004da519
    FSUB float ptr [EAX + 0x24]         ; 004da51b
    FXCH ST2                            ; 004da51e
    FSUB float ptr [EAX + 0x28]         ; 004da520
    FXCH                                ; 004da523
    FSTP float ptr [ESP + 0x23c]        ; 004da525
    FXCH                                ; 004da52c
    FSTP float ptr [ESP + 0x240]        ; 004da52e
    FSTP float ptr [ESP + 0x244]        ; 004da535
    MOVSD ES:EDI,ESI                    ; 004da53c
    MOVSD ES:EDI,ESI                    ; 004da53d
    MOVSD ES:EDI,ESI                    ; 004da53e
    FLD float ptr [ESP + 0x2f4]         ; 004da53f
    FMUL ST0                            ; 004da546
    FLD float ptr [ESP + 0x2f0]         ; 004da548
    FMUL ST0                            ; 004da54f
    FADDP                               ; 004da551
    FLD float ptr [ESP + 0x2f8]         ; 004da553
    FMUL ST0                            ; 004da55a
    FADDP                               ; 004da55c
    FSQRT                               ; 004da55e
    FSTP float ptr [ESP + 0x660]        ; 004da560
    MOV EAX,dword ptr [ESP + 0x660]     ; 004da567
    MOV dword ptr [ESP + 0x658],EAX     ; 004da56e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004da575
    FLDZ                                ; 004da578
    FCOMP float ptr [EAX + 0x294]       ; 004da57a
    FNSTSW AX                           ; 004da580
    SAHF                                ; 004da582
    JNC 0x004da59c                      ; 004da583
        ;   XREF to: 004da59c (CONDITIONAL_JUMP)  ; LAB_004da59c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004da585
    FLD float ptr [ESP + 0x660]         ; 004da588
    FDIV float ptr [EAX + 0x294]        ; 004da58f
    FSTP float ptr [ESP + 0x658]        ; 004da595
    FLD float ptr [ESP + 0x658]         ; 004da59c
        ;   Label: LAB_004da59c
    FCOMP float ptr [0x005e3644]        ; 004da5a3 | DAT_005e3644
    FNSTSW AX                           ; 004da5a9
    SAHF                                ; 004da5ab
    JNC 0x004dbfec                      ; 004da5ac
        ;   XREF to: 004dbfec (CONDITIONAL_JUMP)  ; LAB_004dbfec
    MOV EAX,dword ptr [EBP + 0x14]      ; 004da5b2
    FLD float ptr [EAX + 0x294]         ; 004da5b5
    FADD float ptr [0x01ccc3d4]         ; 004da5bb | DAT_01ccc3d4
    FST float ptr [0x01ccc3d4]          ; 004da5c1 | DAT_01ccc3d4
    FCOMP float ptr [0x005e3604]        ; 004da5c7 | DAT_005e3604
    FNSTSW AX                           ; 004da5cd
    SAHF                                ; 004da5cf
    JC 0x004da5f9                       ; 004da5d0
        ;   XREF to: 004da5f9 (CONDITIONAL_JUMP)  ; LAB_004da5f9
    XOR ECX,ECX                         ; 004da5d2
    MOV EBX,dword ptr [0x01ccc3b0]      ; 004da5d4 | DAT_01ccc3b0
    MOV dword ptr [0x01ccc3c4],ECX      ; 004da5da | DAT_01ccc3c4
    TEST EBX,EBX                        ; 004da5e0
    JZ 0x004da5f9                       ; 004da5e2
        ;   XREF to: 004da5f9 (CONDITIONAL_JUMP)  ; LAB_004da5f9
    MOV EDI,dword ptr [ESP + 0x680]     ; 004da5e4
    MOV dword ptr [0x01ccc3b0],ECX      ; 004da5eb | DAT_01ccc3b0
    TEST EDI,EDI                        ; 004da5f1
    JZ 0x004dbfdd                       ; 004da5f3
        ;   XREF to: 004dbfdd (CONDITIONAL_JUMP)  ; LAB_004dbfdd
    MOV EAX,[0x01ccc3dc]                ; 004da5f9 | DAT_01ccc3dc
        ;   Label: LAB_004da5f9
    TEST EAX,EAX                        ; 004da5fe
    JZ 0x004da837                       ; 004da600
        ;   XREF to: 004da837 (CONDITIONAL_JUMP)  ; LAB_004da837
    FLD float ptr [EAX + 0x24]          ; 004da606
    FLD float ptr [EAX + 0x28]          ; 004da609
    MOV EDX,dword ptr [0x01d06ab4]      ; 004da60c | DAT_01d06ab4
    FLD float ptr [EAX + 0x20]          ; 004da612
    LEA EDI,[ESP + 0x32c]               ; 004da615
    MOV EDX,dword ptr [EDX*0x4 + 0x1d06aa4] ; 004da61c
    LEA ESI,[ESP + 0x134]               ; 004da623
    LEA EAX,[ESP + 0x32c]               ; 004da62a
    FSUB float ptr [EDX + 0x20]         ; 004da631
    FXCH ST2                            ; 004da634
    FSUB float ptr [EDX + 0x24]         ; 004da636
    FXCH                                ; 004da639
    FSUB float ptr [EDX + 0x28]         ; 004da63b
    FXCH ST2                            ; 004da63e
    FSTP float ptr [ESP + 0x134]        ; 004da640
    FSTP float ptr [ESP + 0x138]        ; 004da647
    FSTP float ptr [ESP + 0x13c]        ; 004da64e
    MOVSD ES:EDI,ESI                    ; 004da655
    MOVSD ES:EDI,ESI                    ; 004da656
    MOVSD ES:EDI,ESI                    ; 004da657
    PUSH EAX                            ; 004da658
    LEA ESI,[ESP + 0x5ac]               ; 004da659
    LEA EDI,[ESP + 0x420]               ; 004da660
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004da667
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x5ac]               ; 004da66c
    ADD ESP,0x4                         ; 004da673
    MOV EAX,[0x01d06ab4]                ; 004da676 | DAT_01d06ab4
    MOVSD ES:EDI,ESI                    ; 004da67b
    MOVSD ES:EDI,ESI                    ; 004da67c
    MOVSD ES:EDI,ESI                    ; 004da67d
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004da67e
    FLD float ptr [ESP + 0x420]         ; 004da685
    FSUB float ptr [EAX + 0x34]         ; 004da68c
    SUB ESP,0x4                         ; 004da68f
    FSTP float ptr [ESP]                ; 004da692
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004da695
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x6ac],EAX     ; 004da69a
    FLD float ptr [ESP + 0x6ac]         ; 004da6a1
    ADD ESP,0x4                         ; 004da6a8
    FST float ptr [ESP + 0x10]          ; 004da6ab
    FABS                                ; 004da6af
    FCOMP double ptr [0x005e364c]       ; 004da6b1 | DAT_005e364c
    FNSTSW AX                           ; 004da6b7
    SAHF                                ; 004da6b9
    JBE 0x004da6d1                      ; 004da6ba
        ;   XREF to: 004da6d1 (CONDITIONAL_JUMP)  ; LAB_004da6d1
    MOV EDX,0xbf800000                  ; 004da6bc
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da6c1
    MOV dword ptr [0x01ccc3d4],EDX      ; 004da6c4 | DAT_01ccc3d4
    MOV dword ptr [EAX + 0x20],0x1      ; 004da6ca
    FLD float ptr [ESP + 0x10]          ; 004da6d1
        ;   Label: LAB_004da6d1
    FMUL float ptr [0x005e361c]         ; 004da6d5 | DAT_005e361c
    FMUL double ptr [0x005e3624]        ; 004da6db | DAT_005e3624
    FLD float ptr [ESP + 0x20]          ; 004da6e1
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da6e5
    FCHS                                ; 004da6e8
    FSTP float ptr [ESP + 0x4]          ; 004da6ea
    FST float ptr [EAX + 0x28]          ; 004da6ee
    FCOMP float ptr [ESP + 0x4]         ; 004da6f1
    FNSTSW AX                           ; 004da6f5
    SAHF                                ; 004da6f7
    JNC 0x004da712                      ; 004da6f8
        ;   XREF to: 004da712 (CONDITIONAL_JUMP)  ; LAB_004da712
    FLD float ptr [ESP + 0x4]           ; 004da6fa
    FLD float ptr [ESP + 0x10]          ; 004da6fe
    FABS                                ; 004da702
    FMULP                               ; 004da704
    FMUL double ptr [0x005e362c]        ; 004da706 | DAT_005e362c
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da70c
    FSTP float ptr [EAX + 0x28]         ; 004da70f
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da712
        ;   Label: LAB_004da712
    FLD float ptr [EAX + 0x28]          ; 004da715
    FCOMP float ptr [ESP + 0x20]        ; 004da718
    FNSTSW AX                           ; 004da71c
    SAHF                                ; 004da71e
    JBE 0x004da737                      ; 004da71f
        ;   XREF to: 004da737 (CONDITIONAL_JUMP)  ; LAB_004da737
    FLD float ptr [ESP + 0x10]          ; 004da721
    FABS                                ; 004da725
    FMUL float ptr [ESP + 0x20]         ; 004da727
    FMUL double ptr [0x005e362c]        ; 004da72b | DAT_005e362c
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da731
    FSTP float ptr [EAX + 0x28]         ; 004da734
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da737
        ;   Label: LAB_004da737
    FLD float ptr [EAX + 0x28]          ; 004da73a
    FABS                                ; 004da73d
    FCOMP double ptr [0x005e3634]       ; 004da73f | DAT_005e3634
    FNSTSW AX                           ; 004da745
    SAHF                                ; 004da747
    JNC 0x004da754                      ; 004da748
        ;   XREF to: 004da754 (CONDITIONAL_JUMP)  ; LAB_004da754
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da74a
    MOV dword ptr [EAX + 0x28],0x0      ; 004da74d
    CMP dword ptr [0x01ccc3c4],0x0      ; 004da754 | DAT_01ccc3c4
        ;   Label: LAB_004da754
    JZ 0x004da816                       ; 004da75b
        ;   XREF to: 004da816 (CONDITIONAL_JUMP)  ; LAB_004da816
    MOV EAX,[0x01d06ab4]                ; 004da761 | DAT_01d06ab4
    PUSH 0x1ccc3b8                      ; 004da766 | DAT_01ccc3b8
    MOV EBX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004da76b
    PUSH EBX                            ; 004da772
    LEA ESI,[ESP + 0x25c]               ; 004da773
    LEA EDI,[ESP + 0x580]               ; 004da77a
    CALL core_actor.cpp_FUN_00408bb0    ; 004da781
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x25c]               ; 004da786
    ADD ESP,0x8                         ; 004da78d
    MOVSD ES:EDI,ESI                    ; 004da790
    MOVSD ES:EDI,ESI                    ; 004da791
    MOVSD ES:EDI,ESI                    ; 004da792
    FLD float ptr [ESP + 0x578]         ; 004da793
    FCOMP float ptr [ESP]               ; 004da79a
    FNSTSW AX                           ; 004da79d
    SAHF                                ; 004da79f
    JBE 0x004da7b3                      ; 004da7a0
        ;   XREF to: 004da7b3 (CONDITIONAL_JUMP)  ; LAB_004da7b3
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da7a2
    MOV dword ptr [EAX + 0x8],0x1       ; 004da7a5
    MOV dword ptr [EAX + 0x24],0x3f800000 ; 004da7ac
    FLD float ptr [ESP]                 ; 004da7b3
        ;   Label: LAB_004da7b3
    FCHS                                ; 004da7b6
    FCOMP float ptr [ESP + 0x578]       ; 004da7b8
    FNSTSW AX                           ; 004da7bf
    SAHF                                ; 004da7c1
    JBE 0x004da7d5                      ; 004da7c2
        ;   XREF to: 004da7d5 (CONDITIONAL_JUMP)  ; LAB_004da7d5
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da7c4
    MOV dword ptr [EAX + 0x8],0x1       ; 004da7c7
    MOV dword ptr [EAX + 0x24],0xbf800000 ; 004da7ce
    FLD float ptr [ESP + 0x580]         ; 004da7d5
        ;   Label: LAB_004da7d5
    FCOMP float ptr [ESP]               ; 004da7dc
    FNSTSW AX                           ; 004da7df
    SAHF                                ; 004da7e1
    JBE 0x004da7f4                      ; 004da7e2
        ;   XREF to: 004da7f4 (CONDITIONAL_JUMP)  ; LAB_004da7f4
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da7e4
    MOV dword ptr [EAX + 0x8],0x1       ; 004da7e7
    MOV dword ptr [EAX],0x1             ; 004da7ee
    FLD float ptr [ESP]                 ; 004da7f4
        ;   Label: LAB_004da7f4
    FCHS                                ; 004da7f7
    FCOMP float ptr [ESP + 0x580]       ; 004da7f9
    FNSTSW AX                           ; 004da800
    SAHF                                ; 004da802
    JBE 0x004da816                      ; 004da803
        ;   XREF to: 004da816 (CONDITIONAL_JUMP)  ; LAB_004da816
    MOV EAX,dword ptr [EBP + 0x18]      ; 004da805
    MOV dword ptr [EAX + 0x8],0x1       ; 004da808
    MOV dword ptr [EAX + 0x4],0x1       ; 004da80f
    MOV EAX,[0x01ccc3dc]                ; 004da816 | DAT_01ccc3dc
        ;   Label: LAB_004da816
    PUSH EAX                            ; 004da81b
    MOV EDX,dword ptr [EAX + 0x154]     ; 004da81c
    CALL dword ptr [EDX + 0x10c]        ; 004da822
    ADD ESP,0x4                         ; 004da828
    TEST EAX,EAX                        ; 004da82b
    JZ 0x004da837                       ; 004da82d
        ;   XREF to: 004da837 (CONDITIONAL_JUMP)  ; LAB_004da837
    XOR ESI,ESI                         ; 004da82f
    MOV dword ptr [0x01ccc3dc],ESI      ; 004da831 | DAT_01ccc3dc
    MOV EAX,[0x01c43544]                ; 004da837 | DAT_01c43544
        ;   Label: LAB_004da837
    MOV [0x01ccc3b4],EAX                ; 004da83c | DAT_01ccc3b4
    MOV EAX,[0x01d06ab4]                ; 004da841 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004da846
    ADD EAX,0x20                        ; 004da84d
    CMP EAX,0x1ccc3c8                   ; 004da850
    JZ 0x004da871                       ; 004da855
        ;   XREF to: 004da871 (CONDITIONAL_JUMP)  ; LAB_004da871
    FLD float ptr [EAX]                 ; 004da857
    FLD float ptr [EAX + 0x8]           ; 004da859
    MOV EDX,dword ptr [EAX + 0x4]       ; 004da85c
    MOV dword ptr [0x01ccc3cc],EDX      ; 004da85f | DAT_01ccc3cc
    FSTP float ptr [0x01ccc3d0]         ; 004da865 | DAT_01ccc3d0
    FSTP float ptr [0x01ccc3c8]         ; 004da86b | DAT_01ccc3c8
    MOV EDI,dword ptr [0x00622c18]      ; 004da871 | g_CDemonSetPtr
        ;   Label: LAB_004da871
    PUSH EDI                            ; 004da877 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 004da878
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004da87d
    MOV ESP,EBP                         ; 004da880
    POP EBP                             ; 004da882
    POP EDI                             ; 004da883
    POP ESI                             ; 004da884
    POP EBX                             ; 004da885
    RET                                 ; 004da886
    MOV EAX,[0x0061d95c]                ; 004da887 | g_CGamePtr
        ;   Label: LAB_004da887
    FLD float ptr [EAX + 0x294]         ; 004da88c | g_CGameInstance.delta_time_float
    FSUBR float ptr [0x0061d954]        ; 004da892 | DAT_0061d954
    FSTP float ptr [0x0061d954]         ; 004da898 | DAT_0061d954
    JMP 0x004d9ac9                      ; 004da89e
        ;   XREF to: 004d9ac9 (UNCONDITIONAL_JUMP)  ; LAB_004d9ac9
    PUSH EBX                            ; 004da8a3
        ;   Label: LAB_004da8a3
    MOV EBX,dword ptr [0x00622c18]      ; 004da8a4 | g_CDemonSetPtr
    PUSH EBX                            ; 004da8aa | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 004da8ab
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004da8b0
    FLDZ                                ; 004da8b3
    FCOMP float ptr [ESP + 0x6a0]       ; 004da8b5
    FNSTSW AX                           ; 004da8bc
    SAHF                                ; 004da8be
    JA 0x004d9a8f                       ; 004da8bf
        ;   XREF to: 004d9a8f (CONDITIONAL_JUMP)  ; LAB_004d9a8f
    CMP dword ptr [ESP + 0x6a0],0x3f800000 ; 004da8c5
    JLE 0x004d9a3f                      ; 004da8d0
        ;   XREF to: 004d9a3f (CONDITIONAL_JUMP)  ; LAB_004d9a3f
    JMP 0x004d9a8f                      ; 004da8d6
        ;   XREF to: 004d9a8f (UNCONDITIONAL_JUMP)  ; LAB_004d9a8f
    CMP dword ptr [ESP + 0x6a0],0x3f800000 ; 004da8db
        ;   Label: LAB_004da8db
    JG 0x004d9a8f                       ; 004da8e6
        ;   XREF to: 004d9a8f (CONDITIONAL_JUMP)  ; LAB_004d9a8f
    MOV ECX,dword ptr [0x01b68928]      ; 004da8ec | g_CDoorClassInfo.name_hash
    MOV EBX,dword ptr [0x00622c18]      ; 004da8f2 | g_CDemonSetPtr
    PUSH ECX                            ; 004da8f8
    MOV EBX,dword ptr [EBX + 0x14d144]  ; 004da8f9 | g_CDemonSetInstance.collision_actor
    PUSH EBX                            ; 004da8ff
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004da900
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004da905
    TEST EAX,EAX                        ; 004da908
    JNZ 0x004da95e                      ; 004da90a
        ;   XREF to: 004da95e (CONDITIONAL_JUMP)  ; LAB_004da95e
    MOV EDI,dword ptr [0x007c5094]      ; 004da90c | g_CBoxActorClassInfo.name_hash
    PUSH EDI                            ; 004da912
    PUSH EBX                            ; 004da913
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004da914
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004da919
    TEST EAX,EAX                        ; 004da91c
    JZ 0x004da9a9                       ; 004da91e
        ;   XREF to: 004da9a9 (CONDITIONAL_JUMP)  ; LAB_004da9a9
    MOV EAX,[0x007c5094]                ; 004da924 | g_CBoxActorClassInfo.name_hash
    PUSH EAX                            ; 004da929
    PUSH EBX                            ; 004da92a
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004da92b
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,dword ptr [EAX + 0x314]     ; 004da930
    ADD ESP,0x8                         ; 004da936
    TEST EDX,EDX                        ; 004da939
    JZ 0x004da9a9                       ; 004da93b
        ;   XREF to: 004da9a9 (CONDITIONAL_JUMP)  ; LAB_004da9a9
    MOV EAX,[0x01d06ab4]                ; 004da93d | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004da942
    MOV dword ptr [0x01cd0c24],EBX      ; 004da949 | DAT_01cd0c24
    MOV dword ptr [EAX + 0x1ff60],0x4   ; 004da94f
    JMP 0x004d9a8f                      ; 004da959
        ;   XREF to: 004d9a8f (UNCONDITIONAL_JUMP)  ; LAB_004d9a8f
    MOV EAX,[0x01b68928]                ; 004da95e | g_CDoorClassInfo.name_hash
        ;   Label: LAB_004da95e
    PUSH EAX                            ; 004da963
    PUSH EBX                            ; 004da964
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004da965
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,dword ptr [EAX + 0x9d8]     ; 004da96a
    ADD ESP,0x8                         ; 004da970
    TEST EDX,EDX                        ; 004da973
    JZ 0x004d9a8f                       ; 004da975
        ;   XREF to: 004d9a8f (CONDITIONAL_JUMP)  ; LAB_004d9a8f
    CMP dword ptr [EAX + 0x2e0],0x0     ; 004da97b
    JNZ 0x004d9a8f                      ; 004da982
        ;   XREF to: 004d9a8f (CONDITIONAL_JUMP)  ; LAB_004d9a8f
    MOV EAX,[0x01d06ab4]                ; 004da988 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004da98d
    MOV dword ptr [0x01cd0c24],EBX      ; 004da994 | DAT_01cd0c24
    MOV dword ptr [EAX + 0x1ff60],0x3   ; 004da99a
    JMP 0x004d9a8f                      ; 004da9a4
        ;   XREF to: 004d9a8f (UNCONDITIONAL_JUMP)  ; LAB_004d9a8f
    MOV ECX,dword ptr [0x02c99770]      ; 004da9a9 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004da9a9
    PUSH ECX                            ; 004da9af
    PUSH EBX                            ; 004da9b0
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004da9b1
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004da9b6
    TEST EAX,EAX                        ; 004da9b9
    JZ 0x004da9c8                       ; 004da9bb
        ;   XREF to: 004da9c8 (CONDITIONAL_JUMP)  ; LAB_004da9c8
    MOV dword ptr [0x01cd0c24],EBX      ; 004da9bd | DAT_01cd0c24
    JMP 0x004d9a8f                      ; 004da9c3
        ;   XREF to: 004d9a8f (UNCONDITIONAL_JUMP)  ; LAB_004d9a8f
    MOV EDI,dword ptr [0x01d1c21c]      ; 004da9c8 | g_CLeverClassInfo.name_hash
        ;   Label: LAB_004da9c8
    PUSH EDI                            ; 004da9ce
    PUSH EBX                            ; 004da9cf
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004da9d0
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004da9d5
    TEST EAX,EAX                        ; 004da9d8
    JZ 0x004da9fd                       ; 004da9da
        ;   XREF to: 004da9fd (CONDITIONAL_JUMP)  ; LAB_004da9fd
    MOV EAX,[0x01d06ab4]                ; 004da9dc | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004da9e1
    MOV dword ptr [0x01cd0c24],EBX      ; 004da9e8 | DAT_01cd0c24
    MOV dword ptr [EAX + 0x1ff60],0x7   ; 004da9ee
    JMP 0x004d9a8f                      ; 004da9f8
        ;   XREF to: 004d9a8f (UNCONDITIONAL_JUMP)  ; LAB_004d9a8f
    MOV EAX,[0x01c3f6a0]                ; 004da9fd | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_004da9fd
    PUSH EAX                            ; 004daa02
    PUSH EBX                            ; 004daa03
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004daa04
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004daa09
    TEST EAX,EAX                        ; 004daa0c
    JZ 0x004daa1b                       ; 004daa0e
        ;   XREF to: 004daa1b (CONDITIONAL_JUMP)  ; LAB_004daa1b
    MOV dword ptr [0x01cd0c24],EBX      ; 004daa10 | DAT_01cd0c24
    JMP 0x004d9a8f                      ; 004daa16
        ;   XREF to: 004d9a8f (UNCONDITIONAL_JUMP)  ; LAB_004d9a8f
    MOV EDX,dword ptr [0x01d813a4]      ; 004daa1b | g_CNPCClassInfo.name_hash
        ;   Label: LAB_004daa1b
    PUSH EDX                            ; 004daa21
    PUSH EBX                            ; 004daa22
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004daa23
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004daa28
    TEST EAX,EAX                        ; 004daa2b
    JZ 0x004daa3a                       ; 004daa2d
        ;   XREF to: 004daa3a (CONDITIONAL_JUMP)  ; LAB_004daa3a
    MOV dword ptr [0x01cd0c24],EBX      ; 004daa2f | DAT_01cd0c24
    JMP 0x004d9a8f                      ; 004daa35
        ;   XREF to: 004d9a8f (UNCONDITIONAL_JUMP)  ; LAB_004d9a8f
    MOV ECX,dword ptr [0x01d06b10]      ; 004daa3a | g_CHeroClassInfo.name_hash
        ;   Label: LAB_004daa3a
    PUSH ECX                            ; 004daa40
    PUSH EBX                            ; 004daa41
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004daa42
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004daa47
    TEST EAX,EAX                        ; 004daa4a
    JZ 0x004daa79                       ; 004daa4c
        ;   XREF to: 004daa79 (CONDITIONAL_JUMP)  ; LAB_004daa79
    MOV EAX,[0x01d06b10]                ; 004daa4e | g_CHeroClassInfo.name_hash
    PUSH EAX                            ; 004daa53
    PUSH EBX                            ; 004daa54
    MOV EDI,dword ptr [0x01d06ab4]      ; 004daa55 | DAT_01d06ab4
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004daa5b
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,dword ptr [EDI*0x4 + 0x1d06aa4] ; 004daa60
    ADD ESP,0x8                         ; 004daa67
    CMP EAX,EDX                         ; 004daa6a
    JZ 0x004daa79                       ; 004daa6c
        ;   XREF to: 004daa79 (CONDITIONAL_JUMP)  ; LAB_004daa79
    MOV dword ptr [0x01cd0c24],EBX      ; 004daa6e | DAT_01cd0c24
    JMP 0x004d9a8f                      ; 004daa74
        ;   XREF to: 004d9a8f (UNCONDITIONAL_JUMP)  ; LAB_004d9a8f
    MOV ECX,dword ptr [0x02c8ae44]      ; 004daa79 | g_CTriggerClassInfo.name_hash
        ;   Label: LAB_004daa79
    PUSH ECX                            ; 004daa7f
    PUSH EBX                            ; 004daa80
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004daa81
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004daa86
    TEST EAX,EAX                        ; 004daa89
    JZ 0x004da8a3                       ; 004daa8b
        ;   XREF to: 004da8a3 (CONDITIONAL_JUMP)  ; LAB_004da8a3
    MOV dword ptr [0x01cd0c24],EBX      ; 004daa91 | DAT_01cd0c24
    JMP 0x004d9a8f                      ; 004daa97
        ;   XREF to: 004d9a8f (UNCONDITIONAL_JUMP)  ; LAB_004d9a8f
    MOV EAX,dword ptr [ESP + 0x688]     ; 004daa9c
        ;   Label: LAB_004daa9c
    SUB EAX,0x20                        ; 004daaa3
    CMP EAX,ESI                         ; 004daaa6
    JGE 0x004daab9                      ; 004daaa8
        ;   XREF to: 004daab9 (CONDITIONAL_JUMP)  ; LAB_004daab9
    MOV dword ptr [0x01cd0b40],0x4      ; 004daaaa | DAT_01cd0b40
    JMP 0x004d9ae3                      ; 004daab4
        ;   XREF to: 004d9ae3 (UNCONDITIONAL_JUMP)  ; LAB_004d9ae3
    CMP dword ptr [ESP + 0x694],0x20    ; 004daab9
        ;   Label: LAB_004daab9
    JGE 0x004daad2                      ; 004daac1
        ;   XREF to: 004daad2 (CONDITIONAL_JUMP)  ; LAB_004daad2
    MOV dword ptr [0x01cd0b40],0x1      ; 004daac3 | DAT_01cd0b40
    JMP 0x004d9ae3                      ; 004daacd
        ;   XREF to: 004d9ae3 (UNCONDITIONAL_JUMP)  ; LAB_004d9ae3
    MOV EAX,dword ptr [ESP + 0x68c]     ; 004daad2
        ;   Label: LAB_004daad2
    MOV EDX,dword ptr [ESP + 0x694]     ; 004daad9
    SUB EAX,0x20                        ; 004daae0
    CMP EAX,EDX                         ; 004daae3
    JGE 0x004daaf6                      ; 004daae5
        ;   XREF to: 004daaf6 (CONDITIONAL_JUMP)  ; LAB_004daaf6
    MOV dword ptr [0x01cd0b40],0x2      ; 004daae7 | DAT_01cd0b40
    JMP 0x004d9ae3                      ; 004daaf1
        ;   XREF to: 004d9ae3 (UNCONDITIONAL_JUMP)  ; LAB_004d9ae3
    MOV ECX,dword ptr [0x01cd0c24]      ; 004daaf6 | DAT_01cd0c24
        ;   Label: LAB_004daaf6
    TEST ECX,ECX                        ; 004daafc
    JNZ 0x004dab18                      ; 004daafe
        ;   XREF to: 004dab18 (CONDITIONAL_JUMP)  ; LAB_004dab18
    CMP dword ptr [0x01ccc3dc],0x0      ; 004dab00 | DAT_01ccc3dc
    JZ 0x004dab48                       ; 004dab07
        ;   XREF to: 004dab48 (CONDITIONAL_JUMP)  ; LAB_004dab48
    MOV dword ptr [0x01cd0b40],0x7      ; 004dab09 | DAT_01cd0b40
    JMP 0x004d9ae3                      ; 004dab13
        ;   XREF to: 004d9ae3 (UNCONDITIONAL_JUMP)  ; LAB_004d9ae3
    PUSH 0x5e35f0                       ; 004dab18 | = "CEnemy"
        ;   Label: LAB_004dab18
    PUSH ECX                            ; 004dab1d
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004dab1e
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dab23
    TEST EAX,EAX                        ; 004dab26
    JZ 0x004dab39                       ; 004dab28
        ;   XREF to: 004dab39 (CONDITIONAL_JUMP)  ; LAB_004dab39
    MOV dword ptr [0x01cd0b40],0x6      ; 004dab2a | DAT_01cd0b40
    JMP 0x004d9ae3                      ; 004dab34
        ;   XREF to: 004d9ae3 (UNCONDITIONAL_JUMP)  ; LAB_004d9ae3
    MOV dword ptr [0x01cd0b40],0x5      ; 004dab39 | DAT_01cd0b40
        ;   Label: LAB_004dab39
    JMP 0x004d9ae3                      ; 004dab43
        ;   XREF to: 004d9ae3 (UNCONDITIONAL_JUMP)  ; LAB_004d9ae3
    MOV dword ptr [0x01cd0b40],ECX      ; 004dab48 | DAT_01cd0b40
        ;   Label: LAB_004dab48
    JMP 0x004d9ae3                      ; 004dab4e
        ;   XREF to: 004d9ae3 (UNCONDITIONAL_JUMP)  ; LAB_004d9ae3
    TEST byte ptr [0x01c43544],0x2      ; 004dab53 | DAT_01c43544
        ;   Label: LAB_004dab53
    JNZ 0x004d9b07                      ; 004dab5a
        ;   XREF to: 004d9b07 (CONDITIONAL_JUMP)  ; LAB_004d9b07
    JMP 0x004d9c47                      ; 004dab60
        ;   XREF to: 004d9c47 (UNCONDITIONAL_JUMP)  ; LAB_004d9c47
    PUSH EBX                            ; 004dab65
        ;   Label: LAB_004dab65
    MOV EAX,[0x00622c18]                ; 004dab66 | g_CDemonSetPtr
    PUSH EAX                            ; 004dab6b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 004dab6c
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004dab71
    FLDZ                                ; 004dab74
    FCOMP float ptr [ESP + 0x69c]       ; 004dab76
    FNSTSW AX                           ; 004dab7d
    SAHF                                ; 004dab7f
    JA 0x004d9c47                       ; 004dab80
        ;   XREF to: 004d9c47 (CONDITIONAL_JUMP)  ; LAB_004d9c47
    CMP dword ptr [ESP + 0x69c],0x3f800000 ; 004dab86
    JLE 0x004d9bf7                      ; 004dab91
        ;   XREF to: 004d9bf7 (CONDITIONAL_JUMP)  ; LAB_004d9bf7
    JMP 0x004d9c47                      ; 004dab97
        ;   XREF to: 004d9c47 (UNCONDITIONAL_JUMP)  ; LAB_004d9c47
    CMP dword ptr [ESP + 0x69c],0x3f800000 ; 004dab9c
        ;   Label: LAB_004dab9c
    JG 0x004d9c47                       ; 004daba7
        ;   XREF to: 004d9c47 (CONDITIONAL_JUMP)  ; LAB_004d9c47
    MOV ECX,dword ptr [0x01b68928]      ; 004dabad | g_CDoorClassInfo.name_hash
    MOV EBX,dword ptr [0x00622c18]      ; 004dabb3 | g_CDemonSetPtr
    PUSH ECX                            ; 004dabb9
    MOV EBX,dword ptr [EBX + 0x14d144]  ; 004dabba | g_CDemonSetInstance.collision_actor
    PUSH EBX                            ; 004dabc0
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004dabc1
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004dabc6
    TEST EAX,EAX                        ; 004dabc9
    JZ 0x004dabd9                       ; 004dabcb
        ;   XREF to: 004dabd9 (CONDITIONAL_JUMP)  ; LAB_004dabd9
    MOV dword ptr [ESP + 0x698],EBX     ; 004dabcd
    JMP 0x004d9c47                      ; 004dabd4
        ;   XREF to: 004d9c47 (UNCONDITIONAL_JUMP)  ; LAB_004d9c47
    MOV EDI,dword ptr [0x007c5094]      ; 004dabd9 | g_CBoxActorClassInfo.name_hash
        ;   Label: LAB_004dabd9
    PUSH EDI                            ; 004dabdf
    PUSH EBX                            ; 004dabe0
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004dabe1
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004dabe6
    TEST EAX,EAX                        ; 004dabe9
    JZ 0x004dac12                       ; 004dabeb
        ;   XREF to: 004dac12 (CONDITIONAL_JUMP)  ; LAB_004dac12
    MOV EAX,[0x007c5094]                ; 004dabed | g_CBoxActorClassInfo.name_hash
    PUSH EAX                            ; 004dabf2
    PUSH EBX                            ; 004dabf3
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004dabf4
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,dword ptr [EAX + 0x314]     ; 004dabf9
    ADD ESP,0x8                         ; 004dabff
    TEST EDX,EDX                        ; 004dac02
    JZ 0x004dac12                       ; 004dac04
        ;   XREF to: 004dac12 (CONDITIONAL_JUMP)  ; LAB_004dac12
    MOV dword ptr [ESP + 0x698],EBX     ; 004dac06
    JMP 0x004d9c47                      ; 004dac0d
        ;   XREF to: 004d9c47 (UNCONDITIONAL_JUMP)  ; LAB_004d9c47
    MOV ECX,dword ptr [0x02c99770]      ; 004dac12 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004dac12
    PUSH ECX                            ; 004dac18
    PUSH EBX                            ; 004dac19
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004dac1a
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004dac1f
    TEST EAX,EAX                        ; 004dac22
    JZ 0x004dac32                       ; 004dac24
        ;   XREF to: 004dac32 (CONDITIONAL_JUMP)  ; LAB_004dac32
    MOV dword ptr [ESP + 0x698],EBX     ; 004dac26
    JMP 0x004d9c47                      ; 004dac2d
        ;   XREF to: 004d9c47 (UNCONDITIONAL_JUMP)  ; LAB_004d9c47
    MOV EDI,dword ptr [0x01d1c21c]      ; 004dac32 | g_CLeverClassInfo.name_hash
        ;   Label: LAB_004dac32
    PUSH EDI                            ; 004dac38
    PUSH EBX                            ; 004dac39
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004dac3a
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004dac3f
    TEST EAX,EAX                        ; 004dac42
    JZ 0x004dac52                       ; 004dac44
        ;   XREF to: 004dac52 (CONDITIONAL_JUMP)  ; LAB_004dac52
    MOV dword ptr [ESP + 0x698],EBX     ; 004dac46
    JMP 0x004d9c47                      ; 004dac4d
        ;   XREF to: 004d9c47 (UNCONDITIONAL_JUMP)  ; LAB_004d9c47
    MOV EAX,[0x01d813a4]                ; 004dac52 | g_CNPCClassInfo.name_hash
        ;   Label: LAB_004dac52
    PUSH EAX                            ; 004dac57
    PUSH EBX                            ; 004dac58
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004dac59
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004dac5e
    TEST EAX,EAX                        ; 004dac61
    JZ 0x004dac71                       ; 004dac63
        ;   XREF to: 004dac71 (CONDITIONAL_JUMP)  ; LAB_004dac71
    MOV dword ptr [ESP + 0x698],EBX     ; 004dac65
    JMP 0x004d9c47                      ; 004dac6c
        ;   XREF to: 004d9c47 (UNCONDITIONAL_JUMP)  ; LAB_004d9c47
    MOV EDX,dword ptr [0x01d06b10]      ; 004dac71 | g_CHeroClassInfo.name_hash
        ;   Label: LAB_004dac71
    PUSH EDX                            ; 004dac77
    PUSH EBX                            ; 004dac78
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004dac79
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004dac7e
    TEST EAX,EAX                        ; 004dac81
    JZ 0x004dac91                       ; 004dac83
        ;   XREF to: 004dac91 (CONDITIONAL_JUMP)  ; LAB_004dac91
    MOV dword ptr [ESP + 0x698],EBX     ; 004dac85
    JMP 0x004d9c47                      ; 004dac8c
        ;   XREF to: 004d9c47 (UNCONDITIONAL_JUMP)  ; LAB_004d9c47
    MOV ECX,dword ptr [0x007dc624]      ; 004dac91 | g_CConstructClassInfo.name_hash
        ;   Label: LAB_004dac91
    PUSH ECX                            ; 004dac97
    PUSH EBX                            ; 004dac98
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004dac99
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004dac9e
    TEST EAX,EAX                        ; 004daca1
    JZ 0x004dacb1                       ; 004daca3
        ;   XREF to: 004dacb1 (CONDITIONAL_JUMP)  ; LAB_004dacb1
    MOV dword ptr [ESP + 0x698],EBX     ; 004daca5
    JMP 0x004d9c47                      ; 004dacac
        ;   XREF to: 004d9c47 (UNCONDITIONAL_JUMP)  ; LAB_004d9c47
    MOV EDI,dword ptr [0x02c8ae44]      ; 004dacb1 | g_CTriggerClassInfo.name_hash
        ;   Label: LAB_004dacb1
    PUSH EDI                            ; 004dacb7
    PUSH EBX                            ; 004dacb8
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004dacb9
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004dacbe
    TEST EAX,EAX                        ; 004dacc1
    JZ 0x004dab65                       ; 004dacc3
        ;   XREF to: 004dab65 (CONDITIONAL_JUMP)  ; LAB_004dab65
    MOV dword ptr [ESP + 0x698],EBX     ; 004dacc9
    JMP 0x004d9c47                      ; 004dacd0
        ;   XREF to: 004d9c47 (UNCONDITIONAL_JUMP)  ; LAB_004d9c47
    MOV EAX,[0x00622c18]                ; 004dacd5 | g_CDemonSetPtr
        ;   Label: LAB_004dacd5
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 004dacda | g_CDemonSetInstance.collision_actor
    PUSH EDI                            ; 004dace0
    PUSH EAX                            ; 004dace1 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 004dace2
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004dace7
    FLDZ                                ; 004dacea
    FCOMP float ptr [ESP + 0x28]        ; 004dacec
    FNSTSW AX                           ; 004dacf0
    SAHF                                ; 004dacf2
    JA 0x004d9d98                       ; 004dacf3
        ;   XREF to: 004d9d98 (CONDITIONAL_JUMP)  ; LAB_004d9d98
    CMP dword ptr [ESP + 0x28],0x3f800000 ; 004dacf9
    JLE 0x004d9d52                      ; 004dad01
        ;   XREF to: 004d9d52 (CONDITIONAL_JUMP)  ; LAB_004d9d52
    JMP 0x004d9d98                      ; 004dad07
        ;   XREF to: 004d9d98 (UNCONDITIONAL_JUMP)  ; LAB_004d9d98
    CMP dword ptr [ESP + 0x28],0x3f800000 ; 004dad0c
        ;   Label: LAB_004dad0c
    JG 0x004d9d98                       ; 004dad14
        ;   XREF to: 004d9d98 (CONDITIONAL_JUMP)  ; LAB_004d9d98
    MOV ECX,dword ptr [0x01c3f6a0]      ; 004dad1a | g_CEnemyClassInfo.name_hash
    MOV EAX,[0x00622c18]                ; 004dad20 | g_CDemonSetPtr
    PUSH ECX                            ; 004dad25
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 004dad26 | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 004dad2c
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004dad2d
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004dad32
    TEST EAX,EAX                        ; 004dad35
    JZ 0x004dacd5                       ; 004dad37
        ;   XREF to: 004dacd5 (CONDITIONAL_JUMP)  ; LAB_004dacd5
    MOV ECX,0x5                         ; 004dad39
    MOV [0x01ccc3dc],EAX                ; 004dad3e | DAT_01ccc3dc
    MOV dword ptr [0x01cd0b40],ECX      ; 004dad43 | DAT_01cd0b40
    JMP 0x004d9d98                      ; 004dad49
        ;   XREF to: 004d9d98 (UNCONDITIONAL_JUMP)  ; LAB_004d9d98
    MOV EAX,dword ptr [EBP + 0x18]      ; 004dad4e
        ;   Label: LAB_004dad4e
    MOV dword ptr [EAX + 0xc],0x1       ; 004dad51
    JMP 0x004d9de9                      ; 004dad58
        ;   XREF to: 004d9de9 (UNCONDITIONAL_JUMP)  ; LAB_004d9de9
    MOV EBX,dword ptr [ESP + 0x680]     ; 004dad5d
        ;   Label: LAB_004dad5d
    TEST EBX,EBX                        ; 004dad64
    JNZ 0x004d9de9                      ; 004dad66
        ;   XREF to: 004d9de9 (CONDITIONAL_JUMP)  ; LAB_004d9de9
    MOV dword ptr [0x01ccc3dc],EBX      ; 004dad6c | DAT_01ccc3dc
    JMP 0x004d9de9                      ; 004dad72
        ;   XREF to: 004d9de9 (UNCONDITIONAL_JUMP)  ; LAB_004d9de9
    TEST byte ptr [0x01c43544],0x2      ; 004dad77 | DAT_01c43544
        ;   Label: LAB_004dad77
    JNZ 0x004d9e03                      ; 004dad7e
        ;   XREF to: 004d9e03 (CONDITIONAL_JUMP)  ; LAB_004d9e03
    JMP 0x004da080                      ; 004dad84
        ;   XREF to: 004da080 (UNCONDITIONAL_JUMP)  ; LAB_004da080
    MOV ESI,dword ptr [ESP + 0x670]     ; 004dad89
        ;   Label: LAB_004dad89
    LEA EDI,[ESP + 0x20c]               ; 004dad90
    MOV EAX,[0x01d06ab4]                ; 004dad97 | DAT_01d06ab4
    LEA ESI,[ESI + 0x20]                ; 004dad9c
    MOV EBX,0x40000000                  ; 004dad9f
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004dada4
    MOVSD ES:EDI,ESI                    ; 004dadab
    MOVSD ES:EDI,ESI                    ; 004dadac
    MOVSD ES:EDI,ESI                    ; 004dadad
    XOR EDX,EDX                         ; 004dadae
    MOV EAX,dword ptr [EAX + 0x24]      ; 004dadb0
    MOV ESI,dword ptr [ESP + 0x670]     ; 004dadb3
    MOV dword ptr [ESP + 0x210],EAX     ; 004dadba
    LEA EAX,[ESP + 0x320]               ; 004dadc1
    LEA EDI,[ESP + 0x350]               ; 004dadc8
    PUSH EAX                            ; 004dadcf
    MOV dword ptr [ESP + 0x324],EDX     ; 004dadd0
    MOV dword ptr [ESP + 0x328],EDX     ; 004dadd7
    PUSH ESI                            ; 004dadde
    LEA ESI,[ESP + 0x4e4]               ; 004daddf
    MOV dword ptr [ESP + 0x330],EBX     ; 004dade6
    CALL core_actor.cpp_FUN_00408ac0    ; 004daded
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x4e4]               ; 004dadf2
    ADD ESP,0x8                         ; 004dadf9
    LEA EAX,[ESP + 0x20c]               ; 004dadfc
    FLD float ptr [ESP + 0x20c]         ; 004dae03
    FLD float ptr [ESP + 0x210]         ; 004dae0a
    MOVSD ES:EDI,ESI                    ; 004dae11
    MOVSD ES:EDI,ESI                    ; 004dae12
    MOVSD ES:EDI,ESI                    ; 004dae13
    FLD float ptr [ESP + 0x214]         ; 004dae14
    FXCH ST2                            ; 004dae1b
    FADD float ptr [ESP + 0x350]        ; 004dae1d
    FXCH                                ; 004dae24
    FADD float ptr [ESP + 0x354]        ; 004dae26
    FXCH ST2                            ; 004dae2d
    FADD float ptr [ESP + 0x358]        ; 004dae2f
    FXCH                                ; 004dae36
    FSTP float ptr [ESP + 0x20c]        ; 004dae38
    FXCH                                ; 004dae3f
    FSTP float ptr [ESP + 0x210]        ; 004dae41
    FSTP float ptr [ESP + 0x214]        ; 004dae48
    CMP EAX,0x1ccc3b8                   ; 004dae4f
    JZ 0x004dae7a                       ; 004dae54
        ;   XREF to: 004dae7a (CONDITIONAL_JUMP)  ; LAB_004dae7a
    MOV EAX,dword ptr [ESP + 0x20c]     ; 004dae56
    MOV [0x01ccc3b8],EAX                ; 004dae5d | DAT_01ccc3b8
    MOV EAX,dword ptr [ESP + 0x210]     ; 004dae62
    MOV [0x01ccc3bc],EAX                ; 004dae69 | DAT_01ccc3bc
    MOV EAX,dword ptr [ESP + 0x214]     ; 004dae6e
    MOV [0x01ccc3c0],EAX                ; 004dae75 | DAT_01ccc3c0
    MOV EAX,dword ptr [ESP + 0x650]     ; 004dae7a
        ;   Label: LAB_004dae7a
    ADD EAX,0x20                        ; 004dae81
    CMP EAX,0x1cd0c28                   ; 004dae84
    JZ 0x004daea5                       ; 004dae89
        ;   XREF to: 004daea5 (CONDITIONAL_JUMP)  ; LAB_004daea5
    FLD float ptr [EAX]                 ; 004dae8b
    FLD float ptr [EAX + 0x8]           ; 004dae8d
    MOV EDX,dword ptr [EAX + 0x4]       ; 004dae90
    MOV dword ptr [0x01cd0c2c],EDX      ; 004dae93 | DAT_01cd0c2c
    FSTP float ptr [0x01cd0c30]         ; 004dae99 | DAT_01cd0c30
    FSTP float ptr [0x01cd0c28]         ; 004dae9f | DAT_01cd0c28
    MOV dword ptr [ESP],0x40400000      ; 004daea5
        ;   Label: LAB_004daea5
    JMP 0x004da052                      ; 004daeac
        ;   XREF to: 004da052 (UNCONDITIONAL_JUMP)  ; LAB_004da052
    TEST EBX,EBX                        ; 004daeb1
        ;   Label: LAB_004daeb1
    JZ 0x004db47e                       ; 004daeb3
        ;   XREF to: 004db47e (CONDITIONAL_JUMP)  ; LAB_004db47e
    CMP dword ptr [EBX + 0x9d8],0x0     ; 004daeb9
    JZ 0x004db029                       ; 004daec0
        ;   XREF to: 004db029 (CONDITIONAL_JUMP)  ; LAB_004db029
    MOV EAX,[0x01d06ab4]                ; 004daec6 | DAT_01d06ab4
        ;   Label: LAB_004daec6
    MOV ESI,dword ptr [ESP + 0x684]     ; 004daecb
    LEA EDI,[ESP + 0x47c]               ; 004daed2
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004daed9
    LEA ESI,[ESI + 0x9bc]               ; 004daee0
    ADD EAX,0x20                        ; 004daee6
    MOV EBX,dword ptr [ESP + 0x684]     ; 004daee9
    PUSH EAX                            ; 004daef0
    MOVSD ES:EDI,ESI                    ; 004daef1
    MOVSD ES:EDI,ESI                    ; 004daef2
    MOVSD ES:EDI,ESI                    ; 004daef3
    PUSH EBX                            ; 004daef4
    LEA ESI,[ESP + 0x400]               ; 004daef5
    LEA EDI,[ESP + 0x310]               ; 004daefc
    CALL core_actor.cpp_FUN_00408bb0    ; 004daf03
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x400]               ; 004daf08
    ADD ESP,0x8                         ; 004daf0f
    MOVSD ES:EDI,ESI                    ; 004daf12
    MOVSD ES:EDI,ESI                    ; 004daf13
    MOVSD ES:EDI,ESI                    ; 004daf14
    FLDZ                                ; 004daf15
    FCOMP float ptr [ESP + 0x310]       ; 004daf17
    FNSTSW AX                           ; 004daf1e
    SAHF                                ; 004daf20
    JBE 0x004db385                      ; 004daf21
        ;   XREF to: 004db385 (CONDITIONAL_JUMP)  ; LAB_004db385
    MOV EBX,0xc0600000                  ; 004daf27
    MOV ESI,0xbfc00000                  ; 004daf2c
    LEA EAX,[ESP + 0x410]               ; 004daf31
    MOV EDI,dword ptr [ESP + 0x684]     ; 004daf38
    XOR ECX,ECX                         ; 004daf3f
    PUSH EAX                            ; 004daf41
    MOV dword ptr [ESP + 0x414],ECX     ; 004daf42
    MOV dword ptr [ESP + 0x41c],ESI     ; 004daf49
    PUSH EDI                            ; 004daf50
    LEA ESI,[ESP + 0x388]               ; 004daf51
    MOV dword ptr [ESP + 0x41c],EBX     ; 004daf58
    CALL core_actor.cpp_FUN_00408ac0    ; 004daf5f
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA EDI,[ESP + 0x61c]               ; 004daf64
    ADD ESP,0x8                         ; 004daf6b
    LEA ESI,[ESP + 0x380]               ; 004daf6e
    FLD float ptr [ESP + 0x47c]         ; 004daf75
    FLD float ptr [ESP + 0x480]         ; 004daf7c
    MOVSD ES:EDI,ESI                    ; 004daf83
    MOVSD ES:EDI,ESI                    ; 004daf84
    MOVSD ES:EDI,ESI                    ; 004daf85
    FLD float ptr [ESP + 0x484]         ; 004daf86
    FXCH ST2                            ; 004daf8d
    FADD float ptr [ESP + 0x614]        ; 004daf8f
    FXCH                                ; 004daf96
    FADD float ptr [ESP + 0x618]        ; 004daf98
    FXCH ST2                            ; 004daf9f
    FADD float ptr [ESP + 0x61c]        ; 004dafa1
    FXCH                                ; 004dafa8
        ;   Label: LAB_004dafa8
    FSTP float ptr [ESP + 0x47c]        ; 004dafaa
    FXCH                                ; 004dafb1
    FSTP float ptr [ESP + 0x480]        ; 004dafb3
    FSTP float ptr [ESP + 0x484]        ; 004dafba
    LEA EAX,[ESP + 0x47c]               ; 004dafc1
    CMP EAX,0x1ccc3b8                   ; 004dafc8
    JZ 0x004daff3                       ; 004dafcd
        ;   XREF to: 004daff3 (CONDITIONAL_JUMP)  ; LAB_004daff3
    MOV EAX,dword ptr [ESP + 0x47c]     ; 004dafcf
    MOV [0x01ccc3b8],EAX                ; 004dafd6 | DAT_01ccc3b8
    MOV EAX,dword ptr [ESP + 0x480]     ; 004dafdb
    MOV [0x01ccc3bc],EAX                ; 004dafe2 | DAT_01ccc3bc
    MOV EAX,dword ptr [ESP + 0x484]     ; 004dafe7
    MOV [0x01ccc3c0],EAX                ; 004dafee | DAT_01ccc3c0
    MOV EAX,dword ptr [ESP + 0x684]     ; 004daff3
        ;   Label: LAB_004daff3
    ADD EAX,0x9bc                       ; 004daffa
    CMP EAX,0x1cd0c28                   ; 004dafff
    JZ 0x004da052                       ; 004db004
        ;   XREF to: 004da052 (CONDITIONAL_JUMP)  ; LAB_004da052
    FLD float ptr [EAX]                 ; 004db00a
    FLD float ptr [EAX + 0x8]           ; 004db00c
    MOV EDX,dword ptr [EAX + 0x4]       ; 004db00f
    MOV dword ptr [0x01cd0c2c],EDX      ; 004db012 | DAT_01cd0c2c
    FSTP float ptr [0x01cd0c30]         ; 004db018 | DAT_01cd0c30
    FSTP float ptr [0x01cd0c28]         ; 004db01e | DAT_01cd0c28
    JMP 0x004da052                      ; 004db024
        ;   XREF to: 004da052 (UNCONDITIONAL_JUMP)  ; LAB_004da052
    CMP dword ptr [EBX + 0x2d8],0x0     ; 004db029
        ;   Label: LAB_004db029
    JZ 0x004daec6                       ; 004db030
        ;   XREF to: 004daec6 (CONDITIONAL_JUMP)  ; LAB_004daec6
    PUSH EBX                            ; 004db036
    MOV EAX,dword ptr [EBX + 0x154]     ; 004db037
    LEA ESI,[ESP + 0xf0]                ; 004db03d
    LEA EDI,[ESP + 0x60]                ; 004db044
    CALL dword ptr [EAX + 0x1c]         ; 004db048
    MOV ECX,0x6                         ; 004db04b
    LEA ESI,[ESP + 0xf0]                ; 004db050
    ADD ESP,0x4                         ; 004db057
    MOVSD.REP ES:EDI,ESI                ; 004db05a
    LEA EAX,[ESP + 0x5c]                ; 004db05c
    FLD float ptr [ESP + 0x5c]          ; 004db060
    FLD float ptr [ESP + 0x60]          ; 004db064
    FLD float ptr [ESP + 0x64]          ; 004db068
    LEA EDI,[ESP + 0x518]               ; 004db06c
    LEA ESI,[ESP + 0x4e8]               ; 004db073
    FXCH ST2                            ; 004db07a
    FADD float ptr [EAX + 0xc]          ; 004db07c
    FXCH                                ; 004db07f
    FADD float ptr [EAX + 0x10]         ; 004db081
    FXCH ST2                            ; 004db084
    FADD float ptr [EAX + 0x14]         ; 004db086
    FXCH                                ; 004db089
    FSTP float ptr [ESP + 0x4e8]        ; 004db08b
    FXCH                                ; 004db092
    FSTP float ptr [ESP + 0x4ec]        ; 004db094
    FSTP float ptr [ESP + 0x4f0]        ; 004db09b
    MOVSD ES:EDI,ESI                    ; 004db0a2
    MOVSD ES:EDI,ESI                    ; 004db0a3
    MOVSD ES:EDI,ESI                    ; 004db0a4
    FLD float ptr [0x005e3604]          ; 004db0a5 | DAT_005e3604
    FLD float ptr [ESP + 0x518]         ; 004db0ab
    FMUL ST1                            ; 004db0b2
    FLD float ptr [ESP + 0x51c]         ; 004db0b4
    FMUL ST2                            ; 004db0bb
    LEA EAX,[ESP + 0x1a0]               ; 004db0bd
    FLD float ptr [ESP + 0x520]         ; 004db0c4
    FMULP ST3                           ; 004db0cb
    PUSH EAX                            ; 004db0cd
    LEA EDI,[ESP + 0x1a4]               ; 004db0ce
    LEA ESI,[ESP + 0x600]               ; 004db0d5
    FXCH                                ; 004db0dc
    FSTP float ptr [ESP + 0x600]        ; 004db0de
    FSTP float ptr [ESP + 0x604]        ; 004db0e5
    FSTP float ptr [ESP + 0x608]        ; 004db0ec
    MOVSD ES:EDI,ESI                    ; 004db0f3
    MOVSD ES:EDI,ESI                    ; 004db0f4
    MOVSD ES:EDI,ESI                    ; 004db0f5
    PUSH EBX                            ; 004db0f6
    LEA ESI,[ESP + 0x4d8]               ; 004db0f7
    CALL core_actor.cpp_FUN_00408b40    ; 004db0fe
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    MOV EAX,[0x01d06ab4]                ; 004db103 | DAT_01d06ab4
    LEA EDI,[ESP + 0x610]               ; 004db108
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004db10f
    ADD ESP,0x8                         ; 004db116
    ADD EAX,0x20                        ; 004db119
    LEA ESI,[ESP + 0x4d0]               ; 004db11c
    PUSH EAX                            ; 004db123
    MOVSD ES:EDI,ESI                    ; 004db124
    MOVSD ES:EDI,ESI                    ; 004db125
    MOVSD ES:EDI,ESI                    ; 004db126
    PUSH EBX                            ; 004db127
    LEA ESI,[ESP + 0x574]               ; 004db128
    LEA EDI,[ESP + 0x364]               ; 004db12f
    CALL core_actor.cpp_FUN_00408bb0    ; 004db136
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x574]               ; 004db13b
    ADD ESP,0x8                         ; 004db142
    MOVSD ES:EDI,ESI                    ; 004db145
    MOVSD ES:EDI,ESI                    ; 004db146
    MOVSD ES:EDI,ESI                    ; 004db147
    PUSH EBX                            ; 004db148
    MOV EAX,dword ptr [EBX + 0x154]     ; 004db149
    LEA ESI,[ESP + 0xa8]                ; 004db14f
    LEA EDI,[ESP + 0x78]                ; 004db156
    CALL dword ptr [EAX + 0x1c]         ; 004db15a
    MOV ECX,0x6                         ; 004db15d
    LEA ESI,[ESP + 0xa8]                ; 004db162
    ADD ESP,0x4                         ; 004db169
    MOVSD.REP ES:EDI,ESI                ; 004db16c
    MOV EAX,dword ptr [ESP + 0x74]      ; 004db16e
    FLDZ                                ; 004db172
    MOV dword ptr [ESP + 0x60c],EAX     ; 004db174
    FCOMP float ptr [ESP + 0x364]       ; 004db17b
    FNSTSW AX                           ; 004db182
    SAHF                                ; 004db184
    JBE 0x004db404                      ; 004db185
        ;   XREF to: 004db404 (CONDITIONAL_JUMP)  ; LAB_004db404
    MOV dword ptr [ESP + 0x220],0xbfc00000 ; 004db18b
    LEA EAX,[ESP + 0x218]               ; 004db196
    XOR ESI,ESI                         ; 004db19d
    PUSH EAX                            ; 004db19f
    MOV dword ptr [ESP + 0x21c],ESI     ; 004db1a0
    MOV dword ptr [ESP + 0x220],ESI     ; 004db1a7
    PUSH EBX                            ; 004db1ae
    LEA ESI,[ESP + 0x238]               ; 004db1af
    LEA EDI,[ESP + 0x4fc]               ; 004db1b6
    CALL core_actor.cpp_FUN_00408ac0    ; 004db1bd
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    ADD ESP,0x8                         ; 004db1c2
    LEA ESI,[ESP + 0x230]               ; 004db1c5
    FLD float ptr [ESP + 0x608]         ; 004db1cc
    FLD float ptr [ESP + 0x60c]         ; 004db1d3
    MOVSD ES:EDI,ESI                    ; 004db1da
    MOVSD ES:EDI,ESI                    ; 004db1db
    MOVSD ES:EDI,ESI                    ; 004db1dc
    FLD float ptr [ESP + 0x610]         ; 004db1dd
    FXCH ST2                            ; 004db1e4
    FADD float ptr [ESP + 0x4f4]        ; 004db1e6
    FXCH                                ; 004db1ed
    FADD float ptr [ESP + 0x4f8]        ; 004db1ef
    FXCH ST2                            ; 004db1f6
    FADD float ptr [ESP + 0x4fc]        ; 004db1f8
    FXCH                                ; 004db1ff
        ;   Label: LAB_004db1ff
    FSTP float ptr [ESP + 0x608]        ; 004db201
    FXCH                                ; 004db208
    FSTP float ptr [ESP + 0x60c]        ; 004db20a
    FSTP float ptr [ESP + 0x610]        ; 004db211
    LEA EAX,[ESP + 0x608]               ; 004db218
    CMP EAX,0x1ccc3b8                   ; 004db21f
    JZ 0x004db24a                       ; 004db224
        ;   XREF to: 004db24a (CONDITIONAL_JUMP)  ; LAB_004db24a
    MOV EAX,dword ptr [ESP + 0x608]     ; 004db226
    MOV [0x01ccc3b8],EAX                ; 004db22d | DAT_01ccc3b8
    MOV EAX,dword ptr [ESP + 0x60c]     ; 004db232
    MOV [0x01ccc3bc],EAX                ; 004db239 | DAT_01ccc3bc
    MOV EAX,dword ptr [ESP + 0x610]     ; 004db23e
    MOV [0x01ccc3c0],EAX                ; 004db245 | DAT_01ccc3c0
    MOV EDX,dword ptr [ESP + 0x684]     ; 004db24a
        ;   Label: LAB_004db24a
    MOV EAX,dword ptr [ESP + 0x684]     ; 004db251
    PUSH EDX                            ; 004db258
    MOV EAX,dword ptr [EAX + 0x154]     ; 004db259
    LEA ESI,[ESP + 0x90]                ; 004db25f
    LEA EDI,[ESP + 0xc0]                ; 004db266
    CALL dword ptr [EAX + 0x1c]         ; 004db26d
    MOV ECX,0x6                         ; 004db270
    LEA ESI,[ESP + 0x90]                ; 004db275
    ADD ESP,0x4                         ; 004db27c
    MOVSD.REP ES:EDI,ESI                ; 004db27f
    LEA EAX,[ESP + 0xbc]                ; 004db281
    FLD float ptr [ESP + 0xbc]          ; 004db288
    FLD float ptr [ESP + 0xc0]          ; 004db28f
    FLD float ptr [ESP + 0xc4]          ; 004db296
    LEA EDI,[ESP + 0x5d8]               ; 004db29d
    LEA ESI,[ESP + 0x500]               ; 004db2a4
    FXCH ST2                            ; 004db2ab
    FADD float ptr [EAX + 0xc]          ; 004db2ad
    FXCH                                ; 004db2b0
    FADD float ptr [EAX + 0x10]         ; 004db2b2
    FXCH ST2                            ; 004db2b5
    FADD float ptr [EAX + 0x14]         ; 004db2b7
    FXCH                                ; 004db2ba
    FSTP float ptr [ESP + 0x500]        ; 004db2bc
    FXCH                                ; 004db2c3
    FSTP float ptr [ESP + 0x504]        ; 004db2c5
    FSTP float ptr [ESP + 0x508]        ; 004db2cc
    MOVSD ES:EDI,ESI                    ; 004db2d3
    MOVSD ES:EDI,ESI                    ; 004db2d4
    MOVSD ES:EDI,ESI                    ; 004db2d5
    FLD float ptr [0x005e3604]          ; 004db2d6 | DAT_005e3604
    FLD float ptr [ESP + 0x5d8]         ; 004db2dc
    FMUL ST1                            ; 004db2e3
    FLD float ptr [ESP + 0x5dc]         ; 004db2e5
    FMUL ST2                            ; 004db2ec
    FLD float ptr [ESP + 0x5e0]         ; 004db2ee
    FMULP ST3                           ; 004db2f5
    LEA EAX,[ESP + 0x494]               ; 004db2f7
    MOV ECX,dword ptr [ESP + 0x684]     ; 004db2fe
    PUSH EAX                            ; 004db305
    LEA EDI,[ESP + 0x498]               ; 004db306
    LEA ESI,[ESP + 0x288]               ; 004db30d
    FXCH                                ; 004db314
    FSTP float ptr [ESP + 0x288]        ; 004db316
    FSTP float ptr [ESP + 0x28c]        ; 004db31d
    FSTP float ptr [ESP + 0x290]        ; 004db324
    MOVSD ES:EDI,ESI                    ; 004db32b
    MOVSD ES:EDI,ESI                    ; 004db32c
    MOVSD ES:EDI,ESI                    ; 004db32d
    PUSH ECX                            ; 004db32e
    LEA ESI,[ESP + 0x2a4]               ; 004db32f
    LEA EDI,[ESP + 0x4b4]               ; 004db336
    CALL core_actor.cpp_FUN_00408b40    ; 004db33d
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x2a4]               ; 004db342
    ADD ESP,0x8                         ; 004db349
    LEA EAX,[ESP + 0x4ac]               ; 004db34c
    MOVSD ES:EDI,ESI                    ; 004db353
    MOVSD ES:EDI,ESI                    ; 004db354
    MOVSD ES:EDI,ESI                    ; 004db355
    CMP EAX,0x1cd0c28                   ; 004db356
    JZ 0x004da052                       ; 004db35b
        ;   XREF to: 004da052 (CONDITIONAL_JUMP)  ; LAB_004da052
    MOV EAX,dword ptr [ESP + 0x4ac]     ; 004db361
    MOV [0x01cd0c28],EAX                ; 004db368 | DAT_01cd0c28
    MOV EAX,dword ptr [ESP + 0x4b0]     ; 004db36d
    MOV [0x01cd0c2c],EAX                ; 004db374 | DAT_01cd0c2c
    MOV EAX,dword ptr [ESP + 0x4b4]     ; 004db379
    JMP 0x004da04d                      ; 004db380
        ;   XREF to: 004da04d (UNCONDITIONAL_JUMP)  ; LAB_004da04d
    MOV EAX,0x3fc00000                  ; 004db385
        ;   Label: LAB_004db385
    MOV EDI,0xc0600000                  ; 004db38a
    MOV dword ptr [ESP + 0x5f8],EAX     ; 004db38f
    LEA EAX,[ESP + 0x5f0]               ; 004db396
    XOR ESI,ESI                         ; 004db39d
    PUSH EAX                            ; 004db39f
    MOV dword ptr [ESP + 0x5f4],ESI     ; 004db3a0
    MOV dword ptr [ESP + 0x5f8],EDI     ; 004db3a7
    PUSH EBX                            ; 004db3ae
    LEA ESI,[ESP + 0x3c4]               ; 004db3af
    LEA EDI,[ESP + 0x568]               ; 004db3b6
    CALL core_actor.cpp_FUN_00408ac0    ; 004db3bd
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    ADD ESP,0x8                         ; 004db3c2
    LEA ESI,[ESP + 0x3bc]               ; 004db3c5
    FLD float ptr [ESP + 0x47c]         ; 004db3cc
    FLD float ptr [ESP + 0x480]         ; 004db3d3
    MOVSD ES:EDI,ESI                    ; 004db3da
    MOVSD ES:EDI,ESI                    ; 004db3db
    MOVSD ES:EDI,ESI                    ; 004db3dc
    FLD float ptr [ESP + 0x484]         ; 004db3dd
    FXCH ST2                            ; 004db3e4
    FADD float ptr [ESP + 0x560]        ; 004db3e6
    FXCH                                ; 004db3ed
    FADD float ptr [ESP + 0x564]        ; 004db3ef
    FXCH ST2                            ; 004db3f6
    FADD float ptr [ESP + 0x568]        ; 004db3f8
    JMP 0x004dafa8                      ; 004db3ff
        ;   XREF to: 004dafa8 (UNCONDITIONAL_JUMP)  ; LAB_004dafa8
    XOR EAX,EAX                         ; 004db404
        ;   Label: LAB_004db404
    MOV dword ptr [ESP + 0x584],EAX     ; 004db406
    MOV dword ptr [ESP + 0x588],EAX     ; 004db40d
    LEA EAX,[ESP + 0x584]               ; 004db414
    PUSH EAX                            ; 004db41b
    MOV ECX,0x3fc00000                  ; 004db41c
    LEA ESI,[ESP + 0x33c]               ; 004db421
    PUSH EBX                            ; 004db428
    LEA EDI,[ESP + 0x448]               ; 004db429
    MOV dword ptr [ESP + 0x594],ECX     ; 004db430
    CALL core_actor.cpp_FUN_00408ac0    ; 004db437
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    ADD ESP,0x8                         ; 004db43c
    LEA ESI,[ESP + 0x338]               ; 004db43f
    FLD float ptr [ESP + 0x608]         ; 004db446
    FLD float ptr [ESP + 0x60c]         ; 004db44d
    MOVSD ES:EDI,ESI                    ; 004db454
    MOVSD ES:EDI,ESI                    ; 004db455
    MOVSD ES:EDI,ESI                    ; 004db456
    FLD float ptr [ESP + 0x610]         ; 004db457
    FXCH ST2                            ; 004db45e
    FADD float ptr [ESP + 0x440]        ; 004db460
    FXCH                                ; 004db467
    FADD float ptr [ESP + 0x444]        ; 004db469
    FXCH ST2                            ; 004db470
    FADD float ptr [ESP + 0x448]        ; 004db472
    JMP 0x004db1ff                      ; 004db479
        ;   XREF to: 004db1ff (UNCONDITIONAL_JUMP)  ; LAB_004db1ff
    MOV ECX,dword ptr [0x01d06ab4]      ; 004db47e | DAT_01d06ab4
        ;   Label: LAB_004db47e
    MOV EBX,dword ptr [ESP + 0x678]     ; 004db484
    SHL ECX,0x2                         ; 004db48b
    TEST EBX,EBX                        ; 004db48e
    JZ 0x004db66d                       ; 004db490
        ;   XREF to: 004db66d (CONDITIONAL_JUMP)  ; LAB_004db66d
    MOV ESI,EBX                         ; 004db496
    MOV EAX,dword ptr [ECX + 0x1d06aa4] ; 004db498
    LEA EDI,[ESP + 0x554]               ; 004db49e
    ADD EAX,0x20                        ; 004db4a5
    LEA ESI,[ESI + 0x20]                ; 004db4a8
    PUSH EAX                            ; 004db4ab
    MOVSD ES:EDI,ESI                    ; 004db4ac
    MOVSD ES:EDI,ESI                    ; 004db4ad
    MOVSD ES:EDI,ESI                    ; 004db4ae
    PUSH EBX                            ; 004db4af
    LEA ESI,[ESP + 0x4a8]               ; 004db4b0
    LEA EDI,[ESP + 0x5bc]               ; 004db4b7
    CALL core_actor.cpp_FUN_00408bb0    ; 004db4be
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    MOV EAX,[0x01d06ab4]                ; 004db4c3 | DAT_01d06ab4
    LEA ESI,[ESP + 0x4a8]               ; 004db4c8
    ADD ESP,0x8                         ; 004db4cf
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004db4d2
    MOVSD ES:EDI,ESI                    ; 004db4d9
    MOVSD ES:EDI,ESI                    ; 004db4da
    MOVSD ES:EDI,ESI                    ; 004db4db
    MOV EAX,dword ptr [EAX + 0x24]      ; 004db4dc
    FLDZ                                ; 004db4df
    MOV dword ptr [ESP + 0x558],EAX     ; 004db4e1
    FCOMP float ptr [ESP + 0x5bc]       ; 004db4e8
    FNSTSW AX                           ; 004db4ef
    SAHF                                ; 004db4f1
    JBE 0x004db5ec                      ; 004db4f2
        ;   XREF to: 004db5ec (CONDITIONAL_JUMP)  ; LAB_004db5ec
    MOV EDX,0xc0000000                  ; 004db4f8
    LEA EAX,[ESP + 0x344]               ; 004db4fd
    LEA ESI,[ESP + 0x11c]               ; 004db504
    XOR EDI,EDI                         ; 004db50b
    PUSH EAX                            ; 004db50d
    MOV dword ptr [ESP + 0x348],EDI     ; 004db50e
    MOV dword ptr [ESP + 0x34c],EDI     ; 004db515
    PUSH EBX                            ; 004db51c
    MOV dword ptr [ESP + 0x354],EDX     ; 004db51d
    LEA EDI,[ESP + 0x130]               ; 004db524
    CALL core_actor.cpp_FUN_00408ac0    ; 004db52b
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    ADD ESP,0x8                         ; 004db530
    LEA ESI,[ESP + 0x11c]               ; 004db533
    FLD float ptr [ESP + 0x554]         ; 004db53a
    FLD float ptr [ESP + 0x558]         ; 004db541
    MOVSD ES:EDI,ESI                    ; 004db548
    MOVSD ES:EDI,ESI                    ; 004db549
    MOVSD ES:EDI,ESI                    ; 004db54a
    FLD float ptr [ESP + 0x55c]         ; 004db54b
    FXCH ST2                            ; 004db552
    FADD float ptr [ESP + 0x128]        ; 004db554
    FXCH                                ; 004db55b
    FADD float ptr [ESP + 0x12c]        ; 004db55d
    FXCH ST2                            ; 004db564
    FADD float ptr [ESP + 0x130]        ; 004db566
    FXCH                                ; 004db56d
        ;   Label: LAB_004db56d
    FSTP float ptr [ESP + 0x554]        ; 004db56f
    FXCH                                ; 004db576
    FSTP float ptr [ESP + 0x558]        ; 004db578
    FSTP float ptr [ESP + 0x55c]        ; 004db57f
    LEA EAX,[ESP + 0x554]               ; 004db586
    CMP EAX,0x1ccc3b8                   ; 004db58d
    JZ 0x004db5b8                       ; 004db592
        ;   XREF to: 004db5b8 (CONDITIONAL_JUMP)  ; LAB_004db5b8
    MOV EAX,dword ptr [ESP + 0x554]     ; 004db594
    MOV [0x01ccc3b8],EAX                ; 004db59b | DAT_01ccc3b8
    MOV EAX,dword ptr [ESP + 0x558]     ; 004db5a0
    MOV [0x01ccc3bc],EAX                ; 004db5a7 | DAT_01ccc3bc
    MOV EAX,dword ptr [ESP + 0x55c]     ; 004db5ac
    MOV [0x01ccc3c0],EAX                ; 004db5b3 | DAT_01ccc3c0
    MOV EAX,dword ptr [ESP + 0x64c]     ; 004db5b8
        ;   Label: LAB_004db5b8
    ADD EAX,0x20                        ; 004db5bf
    CMP EAX,0x1cd0c28                   ; 004db5c2
    JZ 0x004da052                       ; 004db5c7
        ;   XREF to: 004da052 (CONDITIONAL_JUMP)  ; LAB_004da052
    FLD float ptr [EAX]                 ; 004db5cd
    FLD float ptr [EAX + 0x8]           ; 004db5cf
    MOV EDX,dword ptr [EAX + 0x4]       ; 004db5d2
    MOV dword ptr [0x01cd0c2c],EDX      ; 004db5d5 | DAT_01cd0c2c
    FSTP float ptr [0x01cd0c30]         ; 004db5db | DAT_01cd0c30
    FSTP float ptr [0x01cd0c28]         ; 004db5e1 | DAT_01cd0c28
    JMP 0x004da052                      ; 004db5e7
        ;   XREF to: 004da052 (UNCONDITIONAL_JUMP)  ; LAB_004da052
    MOV EBX,0x40000000                  ; 004db5ec
        ;   Label: LAB_004db5ec
    LEA EAX,[ESP + 0x17c]               ; 004db5f1
    MOV ESI,dword ptr [ESP + 0x678]     ; 004db5f8
    LEA EDI,[ESP + 0x3ec]               ; 004db5ff
    XOR EDX,EDX                         ; 004db606
    PUSH EAX                            ; 004db608
    MOV dword ptr [ESP + 0x180],EDX     ; 004db609
    MOV dword ptr [ESP + 0x184],EDX     ; 004db610
    PUSH ESI                            ; 004db617
    LEA ESI,[ESP + 0x178]               ; 004db618
    MOV dword ptr [ESP + 0x18c],EBX     ; 004db61f
    CALL core_actor.cpp_FUN_00408ac0    ; 004db626
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    ADD ESP,0x8                         ; 004db62b
    LEA ESI,[ESP + 0x170]               ; 004db62e
    FLD float ptr [ESP + 0x554]         ; 004db635
    FLD float ptr [ESP + 0x558]         ; 004db63c
    MOVSD ES:EDI,ESI                    ; 004db643
    MOVSD ES:EDI,ESI                    ; 004db644
    MOVSD ES:EDI,ESI                    ; 004db645
    FLD float ptr [ESP + 0x55c]         ; 004db646
    FXCH ST2                            ; 004db64d
    FADD float ptr [ESP + 0x3ec]        ; 004db64f
    FXCH                                ; 004db656
    FADD float ptr [ESP + 0x3f0]        ; 004db658
    FXCH ST2                            ; 004db65f
    FADD float ptr [ESP + 0x3f4]        ; 004db661
    JMP 0x004db56d                      ; 004db668
        ;   XREF to: 004db56d (UNCONDITIONAL_JUMP)  ; LAB_004db56d
    MOV ESI,dword ptr [ESP + 0x66c]     ; 004db66d
        ;   Label: LAB_004db66d
    TEST ESI,ESI                        ; 004db674
    JZ 0x004db726                       ; 004db676
        ;   XREF to: 004db726 (CONDITIONAL_JUMP)  ; LAB_004db726
    LEA EDI,[ESP + 0x158]               ; 004db67c
    MOV EAX,dword ptr [ECX + 0x1d06aa4] ; 004db683
    LEA ESI,[ESI + 0x20]                ; 004db689
    ADD EAX,0x20                        ; 004db68c
    MOVSD ES:EDI,ESI                    ; 004db68f
    MOVSD ES:EDI,ESI                    ; 004db690
    MOVSD ES:EDI,ESI                    ; 004db691
    PUSH EAX                            ; 004db692
    MOV EDI,dword ptr [ESP + 0x670]     ; 004db693
    PUSH EDI                            ; 004db69a
    LEA ESI,[ESP + 0x190]               ; 004db69b
    CALL core_actor.cpp_FUN_00408bb0    ; 004db6a2
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    MOV EAX,[0x01d06ab4]                ; 004db6a7 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004db6ac
    ADD ESP,0x8                         ; 004db6b3
    MOV EAX,dword ptr [EAX + 0x24]      ; 004db6b6
    MOV dword ptr [ESP + 0x15c],EAX     ; 004db6b9
    LEA EAX,[ESP + 0x158]               ; 004db6c0
    CMP EAX,0x1ccc3b8                   ; 004db6c7
    JZ 0x004db6f2                       ; 004db6cc
        ;   XREF to: 004db6f2 (CONDITIONAL_JUMP)  ; LAB_004db6f2
    MOV EAX,dword ptr [ESP + 0x158]     ; 004db6ce
    MOV [0x01ccc3b8],EAX                ; 004db6d5 | DAT_01ccc3b8
    MOV EAX,dword ptr [ESP + 0x15c]     ; 004db6da
    MOV [0x01ccc3bc],EAX                ; 004db6e1 | DAT_01ccc3bc
    MOV EAX,dword ptr [ESP + 0x160]     ; 004db6e6
    MOV [0x01ccc3c0],EAX                ; 004db6ed | DAT_01ccc3c0
    MOV EAX,dword ptr [ESP + 0x648]     ; 004db6f2
        ;   Label: LAB_004db6f2
    ADD EAX,0x20                        ; 004db6f9
    CMP EAX,0x1cd0c28                   ; 004db6fc
    JZ 0x004da052                       ; 004db701
        ;   XREF to: 004da052 (CONDITIONAL_JUMP)  ; LAB_004da052
    FLD float ptr [EAX]                 ; 004db707
    FLD float ptr [EAX + 0x8]           ; 004db709
    MOV EDX,dword ptr [EAX + 0x4]       ; 004db70c
    MOV dword ptr [0x01cd0c2c],EDX      ; 004db70f | DAT_01cd0c2c
    FSTP float ptr [0x01cd0c30]         ; 004db715 | DAT_01cd0c30
    FSTP float ptr [0x01cd0c28]         ; 004db71b | DAT_01cd0c28
    JMP 0x004da052                      ; 004db721
        ;   XREF to: 004da052 (UNCONDITIONAL_JUMP)  ; LAB_004da052
    CMP dword ptr [ESP + 0x674],0x0     ; 004db726
        ;   Label: LAB_004db726
    JZ 0x004db87f                       ; 004db72e
        ;   XREF to: 004db87f (CONDITIONAL_JUMP)  ; LAB_004db87f
    MOV ESI,dword ptr [ESP + 0x674]     ; 004db734
    LEA EDI,[ESP + 0x428]               ; 004db73b
    LEA ESI,[ESI + 0x20]                ; 004db742
    MOV EAX,dword ptr [ESP + 0x674]     ; 004db745
    MOV EDX,dword ptr [ESP + 0x674]     ; 004db74c
    MOVSD ES:EDI,ESI                    ; 004db753
    MOVSD ES:EDI,ESI                    ; 004db754
    MOVSD ES:EDI,ESI                    ; 004db755
    PUSH EDX                            ; 004db756
    MOV EAX,dword ptr [EAX + 0x154]     ; 004db757
    LEA ESI,[ESP + 0x108]               ; 004db75d
    LEA EDI,[ESP + 0x30]                ; 004db764
    CALL dword ptr [EAX + 0x1c]         ; 004db768
    MOV ECX,0x6                         ; 004db76b
    LEA ESI,[ESP + 0x108]               ; 004db770
    ADD ESP,0x4                         ; 004db777
    MOVSD.REP ES:EDI,ESI                ; 004db77a
    MOV EAX,dword ptr [ESP + 0x40]      ; 004db77c
    MOV dword ptr [ESP + 0x208],EAX     ; 004db780
    LEA EAX,[ESP + 0x200]               ; 004db787
    MOV dword ptr [ESP + 0x200],EBX     ; 004db78e
    PUSH EAX                            ; 004db795
    MOV ESI,dword ptr [ESP + 0x678]     ; 004db796
    MOV dword ptr [ESP + 0x208],EBX     ; 004db79d
    PUSH ESI                            ; 004db7a4
    LEA ESI,[ESP + 0x40c]               ; 004db7a5
    LEA EDI,[ESP + 0x154]               ; 004db7ac
    CALL core_actor.cpp_FUN_00408b40    ; 004db7b3
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x40c]               ; 004db7b8
    LEA EAX,[ESP + 0x154]               ; 004db7bf
    ADD ESP,0x8                         ; 004db7c6
    LEA EDX,[ESP + 0x200]               ; 004db7c9
    MOVSD ES:EDI,ESI                    ; 004db7d0
    MOVSD ES:EDI,ESI                    ; 004db7d1
    MOVSD ES:EDI,ESI                    ; 004db7d2
    CMP EDX,EAX                         ; 004db7d3
    JZ 0x004db801                       ; 004db7d5
        ;   XREF to: 004db801 (CONDITIONAL_JUMP)  ; LAB_004db801
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004db7d7
    MOV dword ptr [ESP + 0x200],EAX     ; 004db7de
    MOV EAX,dword ptr [ESP + 0x150]     ; 004db7e5
    MOV dword ptr [ESP + 0x204],EAX     ; 004db7ec
    MOV EAX,dword ptr [ESP + 0x154]     ; 004db7f3
    MOV dword ptr [ESP + 0x208],EAX     ; 004db7fa
    MOV EAX,[0x01d06ab4]                ; 004db801 | DAT_01d06ab4
        ;   Label: LAB_004db801
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004db806
    MOV EAX,dword ptr [EAX + 0x24]      ; 004db80d
    MOV dword ptr [ESP + 0x42c],EAX     ; 004db810
    LEA EAX,[ESP + 0x428]               ; 004db817
    CMP EAX,0x1ccc3b8                   ; 004db81e
    JZ 0x004db849                       ; 004db823
        ;   XREF to: 004db849 (CONDITIONAL_JUMP)  ; LAB_004db849
    MOV EAX,dword ptr [ESP + 0x428]     ; 004db825
    MOV [0x01ccc3b8],EAX                ; 004db82c | DAT_01ccc3b8
    MOV EAX,dword ptr [ESP + 0x42c]     ; 004db831
    MOV [0x01ccc3bc],EAX                ; 004db838 | DAT_01ccc3bc
    MOV EAX,dword ptr [ESP + 0x430]     ; 004db83d
    MOV [0x01ccc3c0],EAX                ; 004db844 | DAT_01ccc3c0
    LEA EAX,[ESP + 0x200]               ; 004db849
        ;   Label: LAB_004db849
    CMP EAX,0x1cd0c28                   ; 004db850
    JZ 0x004da052                       ; 004db855
        ;   XREF to: 004da052 (CONDITIONAL_JUMP)  ; LAB_004da052
    MOV EAX,dword ptr [ESP + 0x200]     ; 004db85b
    MOV [0x01cd0c28],EAX                ; 004db862 | DAT_01cd0c28
    MOV EAX,dword ptr [ESP + 0x204]     ; 004db867
    MOV [0x01cd0c2c],EAX                ; 004db86e | DAT_01cd0c2c
    MOV EAX,dword ptr [ESP + 0x208]     ; 004db873
    JMP 0x004da04d                      ; 004db87a
        ;   XREF to: 004da04d (UNCONDITIONAL_JUMP)  ; LAB_004da04d
    TEST EAX,EAX                        ; 004db87f
        ;   Label: LAB_004db87f
    JZ 0x004db92a                       ; 004db881
        ;   XREF to: 004db92a (CONDITIONAL_JUMP)  ; LAB_004db92a
    MOV EDX,dword ptr [ECX + 0x1d06aa4] ; 004db887
    LEA EDI,[ESP + 0x1c4]               ; 004db88d
    ADD EDX,0x20                        ; 004db894
    LEA ESI,[EAX + 0x20]                ; 004db897
    PUSH EDX                            ; 004db89a
    MOVSD ES:EDI,ESI                    ; 004db89b
    MOVSD ES:EDI,ESI                    ; 004db89c
    MOVSD ES:EDI,ESI                    ; 004db89d
    PUSH EAX                            ; 004db89e
    LEA ESI,[ESP + 0x2e0]               ; 004db89f
    CALL core_actor.cpp_FUN_00408bb0    ; 004db8a6
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    MOV EAX,[0x01d06ab4]                ; 004db8ab | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004db8b0
    ADD ESP,0x8                         ; 004db8b7
    MOV EAX,dword ptr [EAX + 0x24]      ; 004db8ba
    MOV dword ptr [ESP + 0x1c8],EAX     ; 004db8bd
    LEA EAX,[ESP + 0x1c4]               ; 004db8c4
    CMP EAX,0x1ccc3b8                   ; 004db8cb
    JZ 0x004db8f6                       ; 004db8d0
        ;   XREF to: 004db8f6 (CONDITIONAL_JUMP)  ; LAB_004db8f6
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 004db8d2
    MOV [0x01ccc3b8],EAX                ; 004db8d9 | DAT_01ccc3b8
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 004db8de
    MOV [0x01ccc3bc],EAX                ; 004db8e5 | DAT_01ccc3bc
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 004db8ea
    MOV [0x01ccc3c0],EAX                ; 004db8f1 | DAT_01ccc3c0
    MOV EAX,dword ptr [ESP + 0x654]     ; 004db8f6
        ;   Label: LAB_004db8f6
    ADD EAX,0x20                        ; 004db8fd
    CMP EAX,0x1cd0c28                   ; 004db900
    JZ 0x004da052                       ; 004db905
        ;   XREF to: 004da052 (CONDITIONAL_JUMP)  ; LAB_004da052
    FLD float ptr [EAX]                 ; 004db90b
    FLD float ptr [EAX + 0x8]           ; 004db90d
    MOV EDX,dword ptr [EAX + 0x4]       ; 004db910
    MOV dword ptr [0x01cd0c2c],EDX      ; 004db913 | DAT_01cd0c2c
    FSTP float ptr [0x01cd0c30]         ; 004db919 | DAT_01cd0c30
    FSTP float ptr [0x01cd0c28]         ; 004db91f | DAT_01cd0c28
    JMP 0x004da052                      ; 004db925
        ;   XREF to: 004da052 (UNCONDITIONAL_JUMP)  ; LAB_004da052
    MOV EAX,dword ptr [ESP + 0x67c]     ; 004db92a
        ;   Label: LAB_004db92a
    TEST EAX,EAX                        ; 004db931
    JZ 0x004dba9b                       ; 004db933
        ;   XREF to: 004dba9b (CONDITIONAL_JUMP)  ; LAB_004dba9b
    MOV ESI,EAX                         ; 004db939
    LEA EDI,[ESP + 0x314]               ; 004db93b
    MOV EAX,dword ptr [ECX + 0x1d06aa4] ; 004db942
    LEA ESI,[ESI + 0x20]                ; 004db948
    ADD EAX,0x20                        ; 004db94b
    MOV ECX,dword ptr [ESP + 0x67c]     ; 004db94e
    PUSH EAX                            ; 004db955
    MOVSD ES:EDI,ESI                    ; 004db956
    MOVSD ES:EDI,ESI                    ; 004db957
    MOVSD ES:EDI,ESI                    ; 004db958
    PUSH ECX                            ; 004db959
    LEA ESI,[ESP + 0x2ec]               ; 004db95a
    CALL core_actor.cpp_FUN_00408bb0    ; 004db961
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    MOV EAX,[0x01d06ab4]                ; 004db966 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004db96b
    ADD ESP,0x8                         ; 004db972
    MOV EAX,dword ptr [EAX + 0x24]      ; 004db975
    MOV EBX,dword ptr [ESP + 0x67c]     ; 004db978
    MOV dword ptr [ESP + 0x318],EAX     ; 004db97f
    MOV EAX,dword ptr [ESP + 0x67c]     ; 004db986
    PUSH EBX                            ; 004db98d
    MOV EAX,dword ptr [EAX + 0x154]     ; 004db98e
    LEA ESI,[ESP + 0xd8]                ; 004db994
    LEA EDI,[ESP + 0x48]                ; 004db99b
    CALL dword ptr [EAX + 0x1c]         ; 004db99f
    MOV ECX,0x6                         ; 004db9a2
    LEA ESI,[ESP + 0xd8]                ; 004db9a7
    ADD ESP,0x4                         ; 004db9ae
    MOVSD.REP ES:EDI,ESI                ; 004db9b1
    MOV EAX,dword ptr [ESP + 0x54]      ; 004db9b3
    MOV dword ptr [ESP + 0x270],EAX     ; 004db9b7
    LEA EAX,[ESP + 0x26c]               ; 004db9be
    XOR ESI,ESI                         ; 004db9c5
    PUSH EAX                            ; 004db9c7
    MOV dword ptr [ESP + 0x270],ESI     ; 004db9c8
    MOV dword ptr [ESP + 0x278],ESI     ; 004db9cf
    PUSH EBX                            ; 004db9d6
    LEA ESI,[ESP + 0x4c0]               ; 004db9d7
    LEA EDI,[ESP + 0x2c8]               ; 004db9de
    CALL core_actor.cpp_FUN_00408b40    ; 004db9e5
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x4c0]               ; 004db9ea
    LEA EDX,[ESP + 0x2c8]               ; 004db9f1
    ADD ESP,0x8                         ; 004db9f8
    LEA EAX,[ESP + 0x26c]               ; 004db9fb
    MOVSD ES:EDI,ESI                    ; 004dba02
    MOVSD ES:EDI,ESI                    ; 004dba03
    MOVSD ES:EDI,ESI                    ; 004dba04
    CMP EAX,EDX                         ; 004dba05
    JZ 0x004dba33                       ; 004dba07
        ;   XREF to: 004dba33 (CONDITIONAL_JUMP)  ; LAB_004dba33
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 004dba09
    MOV dword ptr [ESP + 0x26c],EAX     ; 004dba10
    MOV EAX,dword ptr [ESP + 0x2c4]     ; 004dba17
    MOV dword ptr [ESP + 0x270],EAX     ; 004dba1e
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 004dba25
    MOV dword ptr [ESP + 0x274],EAX     ; 004dba2c
    LEA EAX,[ESP + 0x314]               ; 004dba33
        ;   Label: LAB_004dba33
    CMP EAX,0x1ccc3b8                   ; 004dba3a
    JZ 0x004dba65                       ; 004dba3f
        ;   XREF to: 004dba65 (CONDITIONAL_JUMP)  ; LAB_004dba65
    MOV EAX,dword ptr [ESP + 0x314]     ; 004dba41
    MOV [0x01ccc3b8],EAX                ; 004dba48 | DAT_01ccc3b8
    MOV EAX,dword ptr [ESP + 0x318]     ; 004dba4d
    MOV [0x01ccc3bc],EAX                ; 004dba54 | DAT_01ccc3bc
    MOV EAX,dword ptr [ESP + 0x31c]     ; 004dba59
    MOV [0x01ccc3c0],EAX                ; 004dba60 | DAT_01ccc3c0
    LEA EAX,[ESP + 0x26c]               ; 004dba65
        ;   Label: LAB_004dba65
    CMP EAX,0x1cd0c28                   ; 004dba6c
    JZ 0x004da052                       ; 004dba71
        ;   XREF to: 004da052 (CONDITIONAL_JUMP)  ; LAB_004da052
    MOV EAX,dword ptr [ESP + 0x26c]     ; 004dba77
    MOV [0x01cd0c28],EAX                ; 004dba7e | DAT_01cd0c28
    MOV EAX,dword ptr [ESP + 0x270]     ; 004dba83
    MOV [0x01cd0c2c],EAX                ; 004dba8a | DAT_01cd0c2c
    MOV EAX,dword ptr [ESP + 0x274]     ; 004dba8f
    JMP 0x004da04d                      ; 004dba96
        ;   XREF to: 004da04d (UNCONDITIONAL_JUMP)  ; LAB_004da04d
    CMP dword ptr [0x01c43544],0x1      ; 004dba9b | DAT_01c43544
        ;   Label: LAB_004dba9b
    JNZ 0x004da052                      ; 004dbaa2
        ;   XREF to: 004da052 (CONDITIONAL_JUMP)  ; LAB_004da052
    MOV EAX,dword ptr [ESP + 0x698]     ; 004dbaa8
    ADD EAX,0x20                        ; 004dbaaf
    CMP EAX,0x1ccc3b8                   ; 004dbab2
    JZ 0x004da052                       ; 004dbab7
        ;   XREF to: 004da052 (CONDITIONAL_JUMP)  ; LAB_004da052
    FLD float ptr [EAX]                 ; 004dbabd
    FLD float ptr [EAX + 0x8]           ; 004dbabf
    MOV EDX,dword ptr [EAX + 0x4]       ; 004dbac2
    MOV dword ptr [0x01ccc3bc],EDX      ; 004dbac5 | DAT_01ccc3bc
    FSTP float ptr [0x01ccc3c0]         ; 004dbacb | DAT_01ccc3c0
    FSTP float ptr [0x01ccc3b8]         ; 004dbad1 | DAT_01ccc3b8
    JMP 0x004da052                      ; 004dbad7
        ;   XREF to: 004da052 (UNCONDITIONAL_JUMP)  ; LAB_004da052
    MOV ESI,0x1                         ; 004dbadc
        ;   Label: LAB_004dbadc
    XOR EDI,EDI                         ; 004dbae1
    MOV EAX,[0x01ccc3dc]                ; 004dbae3 | DAT_01ccc3dc
    MOV dword ptr [0x01ccc3d4],EDI      ; 004dbae8 | DAT_01ccc3d4
    MOV dword ptr [0x01ccc3c4],ESI      ; 004dbaee | DAT_01ccc3c4
    TEST EAX,EAX                        ; 004dbaf4
    JZ 0x004dbb02                       ; 004dbaf6
        ;   XREF to: 004dbb02 (CONDITIONAL_JUMP)  ; LAB_004dbb02
    MOV dword ptr [0x01cd0c28],0x7149f2ca ; 004dbaf8 | DAT_01cd0c28
        ;   Label: LAB_004dbaf8
    CMP dword ptr [0x01ccc3c4],0x0      ; 004dbb02 | DAT_01ccc3c4
        ;   Label: LAB_004dbb02
    JZ 0x004da080                       ; 004dbb09
        ;   XREF to: 004da080 (CONDITIONAL_JUMP)  ; LAB_004da080
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dbb0f
        ;   Label: LAB_004dbb0f
    CMP dword ptr [EAX + 0xac],0x0      ; 004dbb12
    JZ 0x004dbf4a                       ; 004dbb19
        ;   XREF to: 004dbf4a (CONDITIONAL_JUMP)  ; LAB_004dbf4a
    MOV EAX,dword ptr [EAX + 0x30]      ; 004dbb1f
    CMP byte ptr [EAX + 0x1c50950],0x0  ; 004dbb22 | DAT_01c50950
    SETZ AL                             ; 004dbb29
    MOV EDX,dword ptr [EBP + 0x18]      ; 004dbb2c
        ;   Label: LAB_004dbb2c
    AND EAX,0xff                        ; 004dbb2f
    MOV dword ptr [EDX + 0x8],EAX       ; 004dbb34
    MOV EAX,dword ptr [EBP + 0x18]      ; 004dbb37
    MOV ESI,dword ptr [EAX + 0x8]       ; 004dbb3a
    TEST ESI,ESI                        ; 004dbb3d
    JZ 0x004dbf58                       ; 004dbb3f
        ;   XREF to: 004dbf58 (CONDITIONAL_JUMP)  ; LAB_004dbf58
    MOV dword ptr [0x01ccc3d8],0x1      ; 004dbb45 | DAT_01ccc3d8
    JMP 0x004da080                      ; 004dbb4f
        ;   XREF to: 004da080 (UNCONDITIONAL_JUMP)  ; LAB_004da080
    CMP EBX,0x20                        ; 004dbb54
        ;   Label: LAB_004dbb54
    JGE 0x004dbd61                      ; 004dbb57
        ;   XREF to: 004dbd61 (CONDITIONAL_JUMP)  ; LAB_004dbd61
    MOV EAX,dword ptr [ESP + 0x68c]     ; 004dbb5d
        ;   Label: LAB_004dbb5d
    MOV EDX,EAX                         ; 004dbb64
    SAR EDX,0x1f                        ; 004dbb66
    SUB EAX,EDX                         ; 004dbb69
    SAR EAX,0x1                         ; 004dbb6b
    PUSH EAX                            ; 004dbb6d
    MOV EAX,dword ptr [ESP + 0x68c]     ; 004dbb6e
    MOV EDX,EAX                         ; 004dbb75
    SAR EDX,0x1f                        ; 004dbb77
    SUB EAX,EDX                         ; 004dbb7a
    SAR EAX,0x1                         ; 004dbb7c
    PUSH EAX                            ; 004dbb7e
    PUSH 0x1fe37ec                      ; 004dbb7f
    LEA ESI,[ESP + 0x3bc]               ; 004dbb84
    LEA EDI,[ESP + 0x26c]               ; 004dbb8b
    CALL core_dcamera.cpp_FUN_0044dd70  ; 004dbb92
        ;   XREF to: 0044dd70 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044dd70()
    LEA ESI,[ESP + 0x3bc]               ; 004dbb97
    ADD ESP,0xc                         ; 004dbb9e
    LEA EAX,[ESP + 0x260]               ; 004dbba1
    LEA EBX,[ESP + 0x1b8]               ; 004dbba8
    PUSH EAX                            ; 004dbbaf
    MOVSD ES:EDI,ESI                    ; 004dbbb0
    MOVSD ES:EDI,ESI                    ; 004dbbb1
    MOVSD ES:EDI,ESI                    ; 004dbbb2
    PUSH 0x1fe37ec                      ; 004dbbb3
    LEA ESI,[ESP + 0x3dc]               ; 004dbbb8
    LEA EDI,[ESP + 0x268]               ; 004dbbbf
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40 ; 004dbbc6
        ;   XREF to: 0044de40 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x3dc]               ; 004dbbcb
    ADD ESP,0x8                         ; 004dbbd2
    LEA EAX,[ESP + 0x260]               ; 004dbbd5
    MOVSD ES:EDI,ESI                    ; 004dbbdc
    MOVSD ES:EDI,ESI                    ; 004dbbdd
    MOVSD ES:EDI,ESI                    ; 004dbbde
    FILD dword ptr [EAX]                ; 004dbbdf
    FMUL float ptr [0x00600f74]         ; 004dbbe1 | DAT_00600f74
    FSTP float ptr [EBX]                ; 004dbbe7
    FILD dword ptr [EAX + 0x4]          ; 004dbbe9
    FMUL float ptr [0x00600f74]         ; 004dbbec | DAT_00600f74
    FSTP float ptr [EBX + 0x4]          ; 004dbbf2
    FILD dword ptr [EAX + 0x8]          ; 004dbbf5
    FMUL float ptr [0x00600f74]         ; 004dbbf8 | DAT_00600f74
    FSTP float ptr [EBX + 0x8]          ; 004dbbfe
    LEA EAX,[ESP + 0x1e8]               ; 004dbc01
    PUSH EAX                            ; 004dbc08
    LEA ESI,[ESP + 0x3cc]               ; 004dbc09
    PUSH 0x1fe37ec                      ; 004dbc10
    LEA EDI,[ESP + 0x1f0]               ; 004dbc15
    LEA EBX,[ESP + 0x3ac]               ; 004dbc1c
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40 ; 004dbc23
        ;   XREF to: 0044de40 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x3d0]               ; 004dbc28
    ADD ESP,0x8                         ; 004dbc2f
    LEA EAX,[ESP + 0x1e8]               ; 004dbc32
    MOVSD ES:EDI,ESI                    ; 004dbc39
    MOVSD ES:EDI,ESI                    ; 004dbc3a
    MOVSD ES:EDI,ESI                    ; 004dbc3b
    FILD dword ptr [EAX]                ; 004dbc3c
    FMUL float ptr [0x00600f74]         ; 004dbc3e | DAT_00600f74
    FSTP float ptr [EBX]                ; 004dbc44
    FILD dword ptr [EAX + 0x4]          ; 004dbc46
    FMUL float ptr [0x00600f74]         ; 004dbc49 | DAT_00600f74
    FSTP float ptr [EBX + 0x4]          ; 004dbc4f
    FILD dword ptr [EAX + 0x8]          ; 004dbc52
    FMUL float ptr [0x00600f74]         ; 004dbc55 | DAT_00600f74
    FSTP float ptr [EBX + 0x8]          ; 004dbc5b
    FLD float ptr [ESP + 0x3a4]         ; 004dbc5e
    FLD float ptr [ESP + 0x3a8]         ; 004dbc65
    FLD float ptr [ESP + 0x3ac]         ; 004dbc6c
    LEA EDI,[ESP + 0x38c]               ; 004dbc73
    LEA ESI,[ESP + 0x488]               ; 004dbc7a
    FXCH ST2                            ; 004dbc81
    FSUB float ptr [ESP + 0x1b8]        ; 004dbc83
    FXCH                                ; 004dbc8a
    FSUB float ptr [ESP + 0x1bc]        ; 004dbc8c
    FXCH ST2                            ; 004dbc93
    FSUB float ptr [ESP + 0x1c0]        ; 004dbc95
    FXCH                                ; 004dbc9c
    FSTP float ptr [ESP + 0x488]        ; 004dbc9e
    FXCH                                ; 004dbca5
    FSTP float ptr [ESP + 0x48c]        ; 004dbca7
    FSTP float ptr [ESP + 0x490]        ; 004dbcae
    MOVSD ES:EDI,ESI                    ; 004dbcb5
    MOVSD ES:EDI,ESI                    ; 004dbcb6
    MOVSD ES:EDI,ESI                    ; 004dbcb7
    FLD float ptr [ESP + 0x38c]         ; 004dbcb8
    FMUL ST0                            ; 004dbcbf
    FLD float ptr [ESP + 0x394]         ; 004dbcc1
    FMUL ST0                            ; 004dbcc8
    FADDP                               ; 004dbcca
    FSQRT                               ; 004dbccc
    XOR EDI,EDI                         ; 004dbcce
    FLDZ                                ; 004dbcd0
    MOV dword ptr [ESP + 0x390],EDI     ; 004dbcd2
    FXCH                                ; 004dbcd9
    FSTP float ptr [ESP + 0x65c]        ; 004dbcdb
    FCOMP float ptr [ESP + 0x65c]       ; 004dbce2
    FNSTSW AX                           ; 004dbce9
    SAHF                                ; 004dbceb
    JNC 0x004dbdf7                      ; 004dbcec
        ;   XREF to: 004dbdf7 (CONDITIONAL_JUMP)  ; LAB_004dbdf7
    FLD1                                ; 004dbcf2
    FLD float ptr [ESP + 0x38c]         ; 004dbcf4
    FXCH                                ; 004dbcfb
    FDIV float ptr [ESP + 0x65c]        ; 004dbcfd
    FXCH                                ; 004dbd04
    FMUL ST1                            ; 004dbd06
    FLDZ                                ; 004dbd08
    FMUL ST2                            ; 004dbd0a
    FLD float ptr [ESP + 0x394]         ; 004dbd0c
    FMULP ST3                           ; 004dbd13
    FXCH                                ; 004dbd15
    FSTP float ptr [ESP + 0x38c]        ; 004dbd17
    FSTP float ptr [ESP + 0x390]        ; 004dbd1e
    FSTP float ptr [ESP + 0x394]        ; 004dbd25
    CMP dword ptr [ESP + 0x680],0x0     ; 004dbd2c
        ;   Label: LAB_004dbd2c
    JZ 0x004dbe0a                       ; 004dbd34
        ;   XREF to: 004dbe0a (CONDITIONAL_JUMP)  ; LAB_004dbe0a
    TEST byte ptr [0x01c43544],0x2      ; 004dbd3a | DAT_01c43544
    JZ 0x004dbe0a                       ; 004dbd41
        ;   XREF to: 004dbe0a (CONDITIONAL_JUMP)  ; LAB_004dbe0a
    CMP dword ptr [0x01ccc3c4],0x1      ; 004dbd47 | DAT_01ccc3c4
    JZ 0x004dbaf8                       ; 004dbd4e
        ;   XREF to: 004dbaf8 (CONDITIONAL_JUMP)  ; LAB_004dbaf8
    XOR EDX,EDX                         ; 004dbd54
    MOV dword ptr [0x01ccc3c4],EDX      ; 004dbd56 | DAT_01ccc3c4
    JMP 0x004dbaf8                      ; 004dbd5c
        ;   XREF to: 004dbaf8 (UNCONDITIONAL_JUMP)  ; LAB_004dbaf8
    MOV EAX,dword ptr [ESP + 0x688]     ; 004dbd61
        ;   Label: LAB_004dbd61
    SUB EAX,0x20                        ; 004dbd68
    CMP EAX,EBX                         ; 004dbd6b
    JL 0x004dbb5d                       ; 004dbd6d
        ;   XREF to: 004dbb5d (CONDITIONAL_JUMP)  ; LAB_004dbb5d
    MOV ECX,dword ptr [ESP + 0x694]     ; 004dbd73
    CMP ECX,0x20                        ; 004dbd7a
    JL 0x004dbb5d                       ; 004dbd7d
        ;   XREF to: 004dbb5d (CONDITIONAL_JUMP)  ; LAB_004dbb5d
    MOV EAX,dword ptr [ESP + 0x68c]     ; 004dbd83
    SUB EAX,0x20                        ; 004dbd8a
    CMP EAX,ECX                         ; 004dbd8d
    JL 0x004dbb5d                       ; 004dbd8f
        ;   XREF to: 004dbb5d (CONDITIONAL_JUMP)  ; LAB_004dbb5d
    LEA EAX,[ESP + 0x1e8]               ; 004dbd95
    PUSH EAX                            ; 004dbd9c
    PUSH 0x1fe37ec                      ; 004dbd9d
    LEA ESI,[ESP + 0x478]               ; 004dbda2
    LEA EDI,[ESP + 0x1f0]               ; 004dbda9
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40 ; 004dbdb0
        ;   XREF to: 0044de40 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x478]               ; 004dbdb5
    ADD ESP,0x8                         ; 004dbdbc
    MOVSD ES:EDI,ESI                    ; 004dbdbf
    MOVSD ES:EDI,ESI                    ; 004dbdc0
    MOVSD ES:EDI,ESI                    ; 004dbdc1
    CMP dword ptr [ESP + 0x680],0x0     ; 004dbdc2
    JZ 0x004dbefa                       ; 004dbdca
        ;   XREF to: 004dbefa (CONDITIONAL_JUMP)  ; LAB_004dbefa
    TEST byte ptr [0x01c43544],0x2      ; 004dbdd0 | DAT_01c43544
    JZ 0x004dbefa                       ; 004dbdd7
        ;   XREF to: 004dbefa (CONDITIONAL_JUMP)  ; LAB_004dbefa
    CMP dword ptr [0x01ccc3c4],0x1      ; 004dbddd | DAT_01ccc3c4
    JZ 0x004dbaf8                       ; 004dbde4
        ;   XREF to: 004dbaf8 (CONDITIONAL_JUMP)  ; LAB_004dbaf8
    XOR EBX,EBX                         ; 004dbdea
    MOV dword ptr [0x01ccc3c4],EBX      ; 004dbdec | DAT_01ccc3c4
    JMP 0x004dbaf8                      ; 004dbdf2
        ;   XREF to: 004dbaf8 (UNCONDITIONAL_JUMP)  ; LAB_004dbaf8
    MOV dword ptr [ESP + 0x38c],EDI     ; 004dbdf7
        ;   Label: LAB_004dbdf7
    MOV dword ptr [ESP + 0x394],EDI     ; 004dbdfe
    JMP 0x004dbd2c                      ; 004dbe05
        ;   XREF to: 004dbd2c (UNCONDITIONAL_JUMP)  ; LAB_004dbd2c
    FLD float ptr [ESP + 0x664]         ; 004dbe0a
        ;   Label: LAB_004dbe0a
    FLD float ptr [ESP + 0x38c]         ; 004dbe11
    FMUL ST1                            ; 004dbe18
    FLD float ptr [ESP + 0x390]         ; 004dbe1a
    FMUL ST2                            ; 004dbe21
    FLD float ptr [ESP + 0x394]         ; 004dbe23
    FMULP ST3                           ; 004dbe2a
    FLD float ptr [ESP + 0x3a4]         ; 004dbe2c
    FLD float ptr [ESP + 0x3a8]         ; 004dbe33
    FLD float ptr [ESP + 0x3ac]         ; 004dbe3a
    LEA EDI,[ESP + 0x2fc]               ; 004dbe41
    LEA ESI,[ESP + 0x248]               ; 004dbe48
    FXCH ST4                            ; 004dbe4f
    FSTP float ptr [ESP + 0x248]        ; 004dbe51
    FXCH ST2                            ; 004dbe58
    FSTP float ptr [ESP + 0x24c]        ; 004dbe5a
    FXCH ST3                            ; 004dbe61
    FSTP float ptr [ESP + 0x250]        ; 004dbe63
    MOVSD ES:EDI,ESI                    ; 004dbe6a
    MOVSD ES:EDI,ESI                    ; 004dbe6b
    MOVSD ES:EDI,ESI                    ; 004dbe6c
    LEA EAX,[ESP + 0x59c]               ; 004dbe6d
    LEA EDI,[ESP + 0x59c]               ; 004dbe74
    LEA ESI,[ESP + 0x458]               ; 004dbe7b
    FXCH ST2                            ; 004dbe82
    FADD float ptr [ESP + 0x2fc]        ; 004dbe84
    FXCH ST2                            ; 004dbe8b
    FADD float ptr [ESP + 0x300]        ; 004dbe8d
    FXCH                                ; 004dbe94
    FADD float ptr [ESP + 0x304]        ; 004dbe96
    FXCH ST2                            ; 004dbe9d
    FSTP float ptr [ESP + 0x458]        ; 004dbe9f
    FSTP float ptr [ESP + 0x45c]        ; 004dbea6
    FSTP float ptr [ESP + 0x460]        ; 004dbead
    MOVSD ES:EDI,ESI                    ; 004dbeb4
    MOVSD ES:EDI,ESI                    ; 004dbeb5
    MOVSD ES:EDI,ESI                    ; 004dbeb6
    CMP EAX,0x1ccc3b8                   ; 004dbeb7
    JZ 0x004dbee2                       ; 004dbebc
        ;   XREF to: 004dbee2 (CONDITIONAL_JUMP)  ; LAB_004dbee2
    MOV EAX,dword ptr [ESP + 0x59c]     ; 004dbebe
    MOV [0x01ccc3b8],EAX                ; 004dbec5 | DAT_01ccc3b8
    MOV EAX,dword ptr [ESP + 0x5a0]     ; 004dbeca
    MOV [0x01ccc3bc],EAX                ; 004dbed1 | DAT_01ccc3bc
    MOV EAX,dword ptr [ESP + 0x5a4]     ; 004dbed6
    MOV [0x01ccc3c0],EAX                ; 004dbedd | DAT_01ccc3c0
    XOR EDI,EDI                         ; 004dbee2
        ;   Label: LAB_004dbee2
    MOV ESI,0x1                         ; 004dbee4
    MOV dword ptr [0x01ccc3d4],EDI      ; 004dbee9 | DAT_01ccc3d4
    MOV dword ptr [0x01ccc3c4],ESI      ; 004dbeef | DAT_01ccc3c4
    JMP 0x004dbb0f                      ; 004dbef5
        ;   XREF to: 004dbb0f (UNCONDITIONAL_JUMP)  ; LAB_004dbb0f
    MOV EDI,dword ptr [0x01c43544]      ; 004dbefa | DAT_01c43544
        ;   Label: LAB_004dbefa
    CMP EDI,0x1                         ; 004dbf00
    JNZ 0x004dbb02                      ; 004dbf03
        ;   XREF to: 004dbb02 (CONDITIONAL_JUMP)  ; LAB_004dbb02
    LEA EAX,[ESP + 0x1e8]               ; 004dbf09
    MOV EBX,0x1ccc3b8                   ; 004dbf10
    FILD dword ptr [EAX]                ; 004dbf15
    FMUL float ptr [0x00600f74]         ; 004dbf17 | DAT_00600f74
    FSTP float ptr [EBX]                ; 004dbf1d | DAT_01ccc3b8
    FILD dword ptr [EAX + 0x4]          ; 004dbf1f
    FMUL float ptr [0x00600f74]         ; 004dbf22 | DAT_00600f74
    FSTP float ptr [EBX + 0x4]          ; 004dbf28 | DAT_01ccc3bc
    FILD dword ptr [EAX + 0x8]          ; 004dbf2b
    FMUL float ptr [0x00600f74]         ; 004dbf2e | DAT_00600f74
    FSTP float ptr [EBX + 0x8]          ; 004dbf34 | DAT_01ccc3c0
    XOR EDX,EDX                         ; 004dbf37
    MOV dword ptr [0x01ccc3c4],EDI      ; 004dbf39 | DAT_01ccc3c4
    MOV dword ptr [0x01ccc3d4],EDX      ; 004dbf3f | DAT_01ccc3d4
    JMP 0x004dbb0f                      ; 004dbf45
        ;   XREF to: 004dbb0f (UNCONDITIONAL_JUMP)  ; LAB_004dbb0f
    MOV EAX,dword ptr [EAX + 0x30]      ; 004dbf4a
        ;   Label: LAB_004dbf4a
    MOV AL,byte ptr [EAX + 0x1c50950]   ; 004dbf4d | DAT_01c50950
    JMP 0x004dbb2c                      ; 004dbf53
        ;   XREF to: 004dbb2c (UNCONDITIONAL_JUMP)  ; LAB_004dbb2c
    MOV dword ptr [0x01ccc3d8],ESI      ; 004dbf58 | DAT_01ccc3d8
        ;   Label: LAB_004dbf58
    JMP 0x004da080                      ; 004dbf5e
        ;   XREF to: 004da080 (UNCONDITIONAL_JUMP)  ; LAB_004da080
    FLD float ptr [0x01cd0c28]          ; 004dbf63 | DAT_01cd0c28
        ;   Label: LAB_004dbf63
    FCOMP double ptr [0x005e360c]       ; 004dbf69 | DAT_005e360c
    FNSTSW AX                           ; 004dbf6f
    SAHF                                ; 004dbf71
    JC 0x004da117                       ; 004dbf72
        ;   XREF to: 004da117 (CONDITIONAL_JUMP)  ; LAB_004da117
    JMP 0x004da5f9                      ; 004dbf78
        ;   XREF to: 004da5f9 (UNCONDITIONAL_JUMP)  ; LAB_004da5f9
    MOV [0x01ccc3c4],EAX                ; 004dbf7d | DAT_01ccc3c4
        ;   Label: LAB_004dbf7d
    JMP 0x004da264                      ; 004dbf82
        ;   XREF to: 004da264 (UNCONDITIONAL_JUMP)  ; LAB_004da264
    FLD float ptr [ESP]                 ; 004dbf87
        ;   Label: LAB_004dbf87
    FMUL double ptr [0x005e363c]        ; 004dbf8a | DAT_005e363c
    FLD float ptr [ESP + 0xc]           ; 004dbf90
    FCOMPP                              ; 004dbf94
    FNSTSW AX                           ; 004dbf96
    SAHF                                ; 004dbf98
    JNC 0x004da4e8                      ; 004dbf99
        ;   XREF to: 004da4e8 (CONDITIONAL_JUMP)  ; LAB_004da4e8
    CMP dword ptr [0x01ccc3d8],0x1      ; 004dbf9f | DAT_01ccc3d8
    JZ 0x004da287                       ; 004dbfa6
        ;   XREF to: 004da287 (CONDITIONAL_JUMP)  ; LAB_004da287
    JMP 0x004da4e8                      ; 004dbfac
        ;   XREF to: 004da4e8 (UNCONDITIONAL_JUMP)  ; LAB_004da4e8
    XOR EAX,EAX                         ; 004dbfb1
        ;   Label: LAB_004dbfb1
    MOV [0x01ccc3c4],EAX                ; 004dbfb3 | DAT_01ccc3c4
    JMP 0x004da4b7                      ; 004dbfb8
        ;   XREF to: 004da4b7 (UNCONDITIONAL_JUMP)  ; LAB_004da4b7
    FLD float ptr [ESP + 0x1c]          ; 004dbfbd
        ;   Label: LAB_004dbfbd
    FLDZ                                ; 004dbfc1
    FCOMPP                              ; 004dbfc3
    FNSTSW AX                           ; 004dbfc5
    SAHF                                ; 004dbfc7
    JC 0x004da4e8                       ; 004dbfc8
        ;   XREF to: 004da4e8 (CONDITIONAL_JUMP)  ; LAB_004da4e8
    MOV EAX,dword ptr [EBP + 0x18]      ; 004dbfce
    MOV dword ptr [EAX + 0xc],0x1       ; 004dbfd1
    JMP 0x004da4e8                      ; 004dbfd8
        ;   XREF to: 004da4e8 (UNCONDITIONAL_JUMP)  ; LAB_004da4e8
    MOV EAX,dword ptr [EBP + 0x18]      ; 004dbfdd
        ;   Label: LAB_004dbfdd
    MOV dword ptr [EAX + 0xc],0x1       ; 004dbfe0
    JMP 0x004da5f9                      ; 004dbfe7
        ;   XREF to: 004da5f9 (UNCONDITIONAL_JUMP)  ; LAB_004da5f9
    XOR EDX,EDX                         ; 004dbfec
        ;   Label: LAB_004dbfec
    MOV dword ptr [0x01ccc3d4],EDX      ; 004dbfee | DAT_01ccc3d4
    JMP 0x004da5f9                      ; 004dbff4
        ;   XREF to: 004da5f9 (UNCONDITIONAL_JUMP)  ; LAB_004da5f9

