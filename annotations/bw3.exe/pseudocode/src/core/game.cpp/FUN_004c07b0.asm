; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004c07b0(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined4       Stack[-0x860]:4  local_860
; undefined4       Stack[-0x858]:4  local_858
; undefined4       Stack[-0x844]:4  local_844
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
;
; XREF[1]:
;   core_game.cpp_CGame_playerControls_FUN_004b92e0 at 004b938a
;
; Referenced Globals:
;   undefined4 s_BCEnemy_005c3bdf+1
;   TerminatedCString s_CStorm_005c3be7
;   TerminatedCString s_CHeal_005c3bee
;   TerminatedCString s_CFireStaff_005c3bf4
;   TerminatedCString s_CEnemy_005c3bff
;   undefined4 DAT_005c3c08
;   undefined4 DAT_005c3c0c
;   undefined4 DAT_005c3c10
;   undefined4 DAT_005c3c14
;   undefined4 DAT_005c3c18
;   undefined4 DAT_005c3c20
;   undefined4 DAT_005c3c28
;   undefined4 DAT_005c3c30
;   undefined4 DAT_005c3c38
;   undefined4 DAT_005c3c40
;   ... and 68 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_isOfClass_FUN_0040c790
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
;   core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0
;   core_dcamera.cpp_FUN_00449eb0
;   core_dcamera.cpp_FUN_00449f80
;   core_door.cpp_CDoor_getMoveType_FUN_00465380
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_hero.cpp_FUN_004d2cf0
;   core_hero.cpp_FUN_004d3210
;   core_inv.cpp_CInventory_selectItem_FUN_004dbc40
;   core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c07b0
        ;   Label: core_game.cpp_FUN_004c07b0
    PUSH ESI                            ; 004c07b1
    PUSH EDI                            ; 004c07b2
    PUSH EBP                            ; 004c07b3
    MOV EBP,ESP                         ; 004c07b4
    SUB ESP,0x854                       ; 004c07b6
    AND ESP,0xfffffff8                  ; 004c07bc
    MOV AH,byte ptr [0x01d1e35c]        ; 004c07bf | DAT_01d1e35c
    TEST AH,0x1                         ; 004c07c5
    JZ 0x004c0dd3                       ; 004c07c8
        ;   XREF to: 004c0dd3 (CONDITIONAL_JUMP)  ; LAB_004c0dd3
    MOV dword ptr [ESP + 0x10],0x3e400000 ; 004c07ce
        ;   Label: LAB_004c07ce
    MOV DH,byte ptr [0x01d1e35c]        ; 004c07d6 | DAT_01d1e35c
    TEST DH,0x2                         ; 004c07dc
    JNZ 0x004c07ec                      ; 004c07df
        ;   XREF to: 004c07ec (CONDITIONAL_JUMP)  ; LAB_004c07ec
    MOV BL,DH                           ; 004c07e1
    OR BL,0x2                           ; 004c07e3
    MOV byte ptr [0x01d1e35c],BL        ; 004c07e6 | DAT_01d1e35c
    MOV ESI,dword ptr [0x01ed3780]      ; 004c07ec | g_CPryeClassInfo.name_hash
        ;   Label: LAB_004c07ec
    MOV EAX,[0x01d5ba14]                ; 004c07f2 | DAT_01d5ba14
    MOV ECX,0x41000000                  ; 004c07f7
    PUSH ESI                            ; 004c07fc
    MOV EDI,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c07fd
    XOR EBX,EBX                         ; 004c0804
    PUSH EDI                            ; 004c0806
    MOV dword ptr [ESP + 0x81c],ECX     ; 004c0807
    MOV dword ptr [ESP + 0x2c],EBX      ; 004c080e
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c0812
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c0817
    MOV dword ptr [ESP + 0x818],EAX     ; 004c081a
    MOV EAX,[0x01d5ba14]                ; 004c0821 | DAT_01d5ba14
    SHL EAX,0x2                         ; 004c0826
    MOV EDX,dword ptr [EAX + 0x1d5ba04] ; 004c0829
    TEST EDX,EDX                        ; 004c082f
    JNZ 0x004c0de3                      ; 004c0831
        ;   XREF to: 004c0de3 (CONDITIONAL_JUMP)  ; LAB_004c0de3
    MOV ECX,dword ptr [ESP + 0x818]     ; 004c0837
        ;   Label: LAB_004c0837
    TEST ECX,ECX                        ; 004c083e
    JNZ 0x004c0dfe                      ; 004c0840
        ;   XREF to: 004c0dfe (CONDITIONAL_JUMP)  ; LAB_004c0dfe
    MOV EAX,[0x01c5fadc]                ; 004c0846 | DAT_01c5fadc
        ;   Label: LAB_004c0846
    MOV dword ptr [ESP + 0x7e0],EAX     ; 004c084b
    MOV EAX,[0x01c5fae0]                ; 004c0852 | DAT_01c5fae0
    MOV dword ptr [ESP + 0x81c],EAX     ; 004c0857
    MOV EAX,[0x005fba18]                ; 004c085e | DAT_005fba18
    MOV dword ptr [ESP + 0x7d8],EAX     ; 004c0863
    MOV EAX,[0x005fba1c]                ; 004c086a | DAT_005fba1c
    MOV dword ptr [ESP + 0x7bc],EAX     ; 004c086f
    CMP EAX,0x1e0                       ; 004c0876
    JLE 0x004c08da                      ; 004c087b
        ;   XREF to: 004c08da (CONDITIONAL_JUMP)  ; LAB_004c08da
    MOV EAX,dword ptr [ESP + 0x7e0]     ; 004c087d
    SHL EAX,0x5                         ; 004c0884
    MOV EDX,EAX                         ; 004c0887
    SHL EAX,0x4                         ; 004c0889
    SUB EAX,EDX                         ; 004c088c
    MOV EDX,EAX                         ; 004c088e
    MOV EDI,dword ptr [ESP + 0x7bc]     ; 004c0890
    SAR EDX,0x1f                        ; 004c0897
    IDIV EDI                            ; 004c089a
    MOV dword ptr [ESP + 0x7e0],EAX     ; 004c089c
    MOV EAX,dword ptr [ESP + 0x81c]     ; 004c08a3
    SHL EAX,0x5                         ; 004c08aa
    MOV EDX,EAX                         ; 004c08ad
    SHL EAX,0x4                         ; 004c08af
    SUB EAX,EDX                         ; 004c08b2
    MOV EDX,EAX                         ; 004c08b4
    SAR EDX,0x1f                        ; 004c08b6
    IDIV EDI                            ; 004c08b9
    MOV EBX,0x280                       ; 004c08bb
    MOV ESI,0x1e0                       ; 004c08c0
    MOV dword ptr [ESP + 0x7d8],EBX     ; 004c08c5
    MOV dword ptr [ESP + 0x7bc],ESI     ; 004c08cc
    MOV dword ptr [ESP + 0x81c],EAX     ; 004c08d3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c08da
        ;   Label: LAB_004c08da
    CMP dword ptr [EAX + 0x328],0x0     ; 004c08dd
    JZ 0x004c08fe                       ; 004c08e4
        ;   XREF to: 004c08fe (CONDITIONAL_JUMP)  ; LAB_004c08fe
    MOV EDX,0xf0                        ; 004c08e6
    MOV EAX,0x140                       ; 004c08eb
    MOV dword ptr [ESP + 0x7bc],EDX     ; 004c08f0
    MOV dword ptr [ESP + 0x7d8],EAX     ; 004c08f7
    CMP dword ptr [ESP + 0x7e0],0x2     ; 004c08fe
        ;   Label: LAB_004c08fe
    JGE 0x004c0913                      ; 004c0906
        ;   XREF to: 004c0913 (CONDITIONAL_JUMP)  ; LAB_004c0913
    MOV dword ptr [ESP + 0x7e0],0x2     ; 004c0908
    MOV EAX,dword ptr [ESP + 0x7d8]     ; 004c0913
        ;   Label: LAB_004c0913
    MOV ESI,dword ptr [ESP + 0x7e0]     ; 004c091a
    SUB EAX,0x2                         ; 004c0921
    CMP EAX,ESI                         ; 004c0924
    JGE 0x004c092f                      ; 004c0926
        ;   XREF to: 004c092f (CONDITIONAL_JUMP)  ; LAB_004c092f
    MOV dword ptr [ESP + 0x7e0],EAX     ; 004c0928
    CMP dword ptr [ESP + 0x81c],0x2     ; 004c092f
        ;   Label: LAB_004c092f
    JGE 0x004c0944                      ; 004c0937
        ;   XREF to: 004c0944 (CONDITIONAL_JUMP)  ; LAB_004c0944
    MOV dword ptr [ESP + 0x81c],0x2     ; 004c0939
    MOV EAX,dword ptr [ESP + 0x7bc]     ; 004c0944
        ;   Label: LAB_004c0944
    MOV EDX,dword ptr [ESP + 0x81c]     ; 004c094b
    SUB EAX,0x2                         ; 004c0952
    CMP EAX,EDX                         ; 004c0955
    JGE 0x004c0960                      ; 004c0957
        ;   XREF to: 004c0960 (CONDITIONAL_JUMP)  ; LAB_004c0960
    MOV dword ptr [ESP + 0x81c],EAX     ; 004c0959
    PUSH 0x34                           ; 004c0960
        ;   Label: LAB_004c0960
    MOV ECX,0x40000000                  ; 004c0962
    PUSH 0x0                            ; 004c0967
    MOV ESI,dword ptr [EBP + 0x18]      ; 004c0969
    MOV EBX,0x3e4ccccd                  ; 004c096c
    PUSH ESI                            ; 004c0971
    MOV dword ptr [ESP + 0x14],ECX      ; 004c0972
    MOV dword ptr [ESP + 0x7f4],EBX     ; 004c0976
    CALL crt_memory.c_memset_FUN_005a28f0 ; 004c097d
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004c0982
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c0985
    MOV EAX,dword ptr [EAX + 0x50]      ; 004c0988
    MOV BL,byte ptr [EAX + 0x1d21fa0]   ; 004c098b | DAT_01d21fa0
    MOV BH,byte ptr [EAX + 0x1c6cef0]   ; 004c0991 | DAT_01c6cef0
    LEA EDX,[ESI + 0x14]                ; 004c0997
    CMP BL,BH                           ; 004c099a
    JZ 0x004c0e10                       ; 004c099c
        ;   XREF to: 004c0e10 (CONDITIONAL_JUMP)  ; LAB_004c0e10
    MOV AL,BH                           ; 004c09a2
    AND EAX,0xff                        ; 004c09a4
    MOV dword ptr [EDX],EAX             ; 004c09a9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c09ab
        ;   Label: LAB_004c09ab
    MOV EAX,dword ptr [EAX + 0x54]      ; 004c09ae
    MOV EDX,dword ptr [EBP + 0x18]      ; 004c09b1
    MOV BL,byte ptr [EAX + 0x1d21fa0]   ; 004c09b4 | DAT_01d21fa0
    MOV CL,byte ptr [EAX + 0x1c6cef0]   ; 004c09ba | DAT_01c6cef0
    ADD EDX,0x18                        ; 004c09c0
    CMP BL,CL                           ; 004c09c3
    JZ 0x004c0e1b                       ; 004c09c5
        ;   XREF to: 004c0e1b (CONDITIONAL_JUMP)  ; LAB_004c0e1b
    MOV AL,CL                           ; 004c09cb
    AND EAX,0xff                        ; 004c09cd
    MOV dword ptr [EDX],EAX             ; 004c09d2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c09d4
        ;   Label: LAB_004c09d4
    MOV EAX,dword ptr [EAX + 0x6c]      ; 004c09d7
    MOV EDX,dword ptr [EBP + 0x18]      ; 004c09da
    MOV BL,byte ptr [EAX + 0x1d21fa0]   ; 004c09dd | DAT_01d21fa0
    MOV CH,byte ptr [EAX + 0x1c6cef0]   ; 004c09e3 | DAT_01c6cef0
    ADD EDX,0x1c                        ; 004c09e9
    CMP BL,CH                           ; 004c09ec
    JZ 0x004c0e26                       ; 004c09ee
        ;   XREF to: 004c0e26 (CONDITIONAL_JUMP)  ; LAB_004c0e26
    MOV AL,CH                           ; 004c09f4
    AND EAX,0xff                        ; 004c09f6
    MOV dword ptr [EDX],EAX             ; 004c09fb
    MOV ECX,dword ptr [EBP + 0x14]      ; 004c09fd
        ;   Label: LAB_004c09fd
    MOV EDI,dword ptr [ECX + 0x94]      ; 004c0a00
    MOV EAX,[0x00600284]                ; 004c0a06 | DAT_00600284
    PUSH EDI                            ; 004c0a0b
    MOV EDX,dword ptr [EAX]             ; 004c0a0c | DAT_01d70a78
    PUSH EAX                            ; 004c0a0e | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004c0a0f
    ADD ESP,0x8                         ; 004c0a12
    TEST EAX,EAX                        ; 004c0a15
    JZ 0x004c0a39                       ; 004c0a17
        ;   XREF to: 004c0a39 (CONDITIONAL_JUMP)  ; LAB_004c0a39
    PUSH 0x1                            ; 004c0a19
    MOV EAX,[0x01d5ba14]                ; 004c0a1b | DAT_01d5ba14
    PUSH 0x5                            ; 004c0a20
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c0a22
    PUSH 0x0                            ; 004c0a29
    ADD EAX,0x206e8                     ; 004c0a2b
    PUSH EAX                            ; 004c0a30
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40 ; 004c0a31
        ;   XREF to: 004dbb40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004c0a36
    MOV ECX,dword ptr [EBP + 0x14]      ; 004c0a39
        ;   Label: LAB_004c0a39
    MOV EBX,dword ptr [ECX + 0x98]      ; 004c0a3c
    MOV EAX,[0x00600284]                ; 004c0a42 | DAT_00600284
    PUSH EBX                            ; 004c0a47
    MOV EDX,dword ptr [EAX]             ; 004c0a48 | DAT_01d70a78
    PUSH EAX                            ; 004c0a4a | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004c0a4b
    ADD ESP,0x8                         ; 004c0a4e
    TEST EAX,EAX                        ; 004c0a51
    JZ 0x004c0a75                       ; 004c0a53
        ;   XREF to: 004c0a75 (CONDITIONAL_JUMP)  ; LAB_004c0a75
    PUSH -0x1                           ; 004c0a55
    MOV EAX,[0x01d5ba14]                ; 004c0a57 | DAT_01d5ba14
    PUSH 0x5                            ; 004c0a5c
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c0a5e
    PUSH 0x0                            ; 004c0a65
    ADD EAX,0x206e8                     ; 004c0a67
    PUSH EAX                            ; 004c0a6c
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40 ; 004c0a6d
        ;   XREF to: 004dbb40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004c0a72
    MOV ECX,dword ptr [EBP + 0x14]      ; 004c0a75
        ;   Label: LAB_004c0a75
    MOV ESI,dword ptr [ECX + 0x9c]      ; 004c0a78
    MOV EAX,[0x00600284]                ; 004c0a7e | DAT_00600284
    PUSH ESI                            ; 004c0a83
    MOV EDX,dword ptr [EAX]             ; 004c0a84 | DAT_01d70a78
    PUSH EAX                            ; 004c0a86 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004c0a87
    ADD ESP,0x8                         ; 004c0a8a
    TEST EAX,EAX                        ; 004c0a8d
    JZ 0x004c0aad                       ; 004c0a8f
        ;   XREF to: 004c0aad (CONDITIONAL_JUMP)  ; LAB_004c0aad
    MOV EAX,[0x01d5ba14]                ; 004c0a91 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c0a96
    PUSH 0x1                            ; 004c0a9d
    ADD EAX,0x206e8                     ; 004c0a9f
    PUSH EAX                            ; 004c0aa4
    CALL core_inv.cpp_CInventory_selectItem_FUN_004dbc40 ; 004c0aa5
        ;   XREF to: 004dbc40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectItem_FUN_004dbc40(CInventory * this_ptr, int direction)
    ADD ESP,0x8                         ; 004c0aaa
    MOV ECX,dword ptr [EBP + 0x14]      ; 004c0aad
        ;   Label: LAB_004c0aad
    MOV EDI,dword ptr [ECX + 0xa0]      ; 004c0ab0
    MOV EAX,[0x00600284]                ; 004c0ab6 | DAT_00600284
    PUSH EDI                            ; 004c0abb
    MOV EDX,dword ptr [EAX]             ; 004c0abc | DAT_01d70a78
    PUSH EAX                            ; 004c0abe | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004c0abf
    ADD ESP,0x8                         ; 004c0ac2
    TEST EAX,EAX                        ; 004c0ac5
    JZ 0x004c0ae5                       ; 004c0ac7
        ;   XREF to: 004c0ae5 (CONDITIONAL_JUMP)  ; LAB_004c0ae5
    MOV EAX,[0x01d5ba14]                ; 004c0ac9 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c0ace
    PUSH -0x1                           ; 004c0ad5
    ADD EAX,0x206e8                     ; 004c0ad7
    PUSH EAX                            ; 004c0adc
    CALL core_inv.cpp_CInventory_selectItem_FUN_004dbc40 ; 004c0add
        ;   XREF to: 004dbc40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectItem_FUN_004dbc40(CInventory * this_ptr, int direction)
    ADD ESP,0x8                         ; 004c0ae2
    MOV EAX,[0x01d5ba14]                ; 004c0ae5 | DAT_01d5ba14
        ;   Label: LAB_004c0ae5
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c0aea
    PUSH EAX                            ; 004c0af1
    MOV EDX,dword ptr [EAX + 0x154]     ; 004c0af2
    CALL dword ptr [EDX + 0x148]        ; 004c0af8
    ADD ESP,0x4                         ; 004c0afe
    MOV ECX,dword ptr [EBP + 0x14]      ; 004c0b01
    MOV EBX,EAX                         ; 004c0b04
    MOV dword ptr [ESP + 0x7b4],EAX     ; 004c0b06
    MOV ESI,dword ptr [ECX + 0x80]      ; 004c0b0d
    MOV EAX,[0x00600284]                ; 004c0b13 | DAT_00600284
    PUSH ESI                            ; 004c0b18
    MOV EDX,dword ptr [EAX]             ; 004c0b19 | DAT_01d70a78
    PUSH EAX                            ; 004c0b1b | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004c0b1c
    ADD ESP,0x8                         ; 004c0b1f
    TEST EAX,EAX                        ; 004c0b22
    JZ 0x004c0b4e                       ; 004c0b24
        ;   XREF to: 004c0b4e (CONDITIONAL_JUMP)  ; LAB_004c0b4e
    PUSH 0x1                            ; 004c0b26
    MOV EAX,[0x01d5ba14]                ; 004c0b28 | DAT_01d5ba14
    PUSH 0x0                            ; 004c0b2d
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c0b2f
    PUSH 0x0                            ; 004c0b36
    ADD EAX,0x206e8                     ; 004c0b38
    PUSH EAX                            ; 004c0b3d
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40 ; 004c0b3e
        ;   XREF to: 004dbb40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004c0b43
    TEST EBX,EBX                        ; 004c0b46
    JZ 0x004c0e31                       ; 004c0b48
        ;   XREF to: 004c0e31 (CONDITIONAL_JUMP)  ; LAB_004c0e31
    MOV ECX,dword ptr [EBP + 0x14]      ; 004c0b4e
        ;   Label: LAB_004c0b4e
    MOV EDI,dword ptr [ECX + 0x84]      ; 004c0b51
    MOV EAX,[0x00600284]                ; 004c0b57 | DAT_00600284
    PUSH EDI                            ; 004c0b5c
    MOV EDX,dword ptr [EAX]             ; 004c0b5d | DAT_01d70a78
    PUSH EAX                            ; 004c0b5f | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004c0b60
    ADD ESP,0x8                         ; 004c0b63
    TEST EAX,EAX                        ; 004c0b66
    JZ 0x004c0b98                       ; 004c0b68
        ;   XREF to: 004c0b98 (CONDITIONAL_JUMP)  ; LAB_004c0b98
    PUSH 0x1                            ; 004c0b6a
    MOV EAX,[0x01d5ba14]                ; 004c0b6c | DAT_01d5ba14
    PUSH 0x1                            ; 004c0b71
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c0b73
    PUSH 0x0                            ; 004c0b7a
    ADD EAX,0x206e8                     ; 004c0b7c
    PUSH EAX                            ; 004c0b81
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40 ; 004c0b82
        ;   XREF to: 004dbb40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004c0b87
    CMP dword ptr [ESP + 0x7b4],0x0     ; 004c0b8a
    JZ 0x004c0e40                       ; 004c0b92
        ;   XREF to: 004c0e40 (CONDITIONAL_JUMP)  ; LAB_004c0e40
    MOV ECX,dword ptr [EBP + 0x14]      ; 004c0b98
        ;   Label: LAB_004c0b98
    MOV EBX,dword ptr [ECX + 0x88]      ; 004c0b9b
    MOV EAX,[0x00600284]                ; 004c0ba1 | DAT_00600284
    PUSH EBX                            ; 004c0ba6
    MOV EDX,dword ptr [EAX]             ; 004c0ba7 | DAT_01d70a78
    PUSH EAX                            ; 004c0ba9 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004c0baa
    ADD ESP,0x8                         ; 004c0bad
    TEST EAX,EAX                        ; 004c0bb0
    JZ 0x004c0be2                       ; 004c0bb2
        ;   XREF to: 004c0be2 (CONDITIONAL_JUMP)  ; LAB_004c0be2
    PUSH 0x1                            ; 004c0bb4
    MOV EAX,[0x01d5ba14]                ; 004c0bb6 | DAT_01d5ba14
    PUSH 0x2                            ; 004c0bbb
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c0bbd
    PUSH 0x0                            ; 004c0bc4
    ADD EAX,0x206e8                     ; 004c0bc6
    PUSH EAX                            ; 004c0bcb
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40 ; 004c0bcc
        ;   XREF to: 004dbb40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004c0bd1
    CMP dword ptr [ESP + 0x7b4],0x0     ; 004c0bd4
    JZ 0x004c0e4f                       ; 004c0bdc
        ;   XREF to: 004c0e4f (CONDITIONAL_JUMP)  ; LAB_004c0e4f
    MOV ECX,dword ptr [EBP + 0x14]      ; 004c0be2
        ;   Label: LAB_004c0be2
    MOV EDI,dword ptr [ECX + 0x8c]      ; 004c0be5
    MOV EAX,[0x00600284]                ; 004c0beb | DAT_00600284
    PUSH EDI                            ; 004c0bf0
    MOV EDX,dword ptr [EAX]             ; 004c0bf1 | DAT_01d70a78
    PUSH EAX                            ; 004c0bf3 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004c0bf4
    ADD ESP,0x8                         ; 004c0bf7
    TEST EAX,EAX                        ; 004c0bfa
    JZ 0x004c0c2c                       ; 004c0bfc
        ;   XREF to: 004c0c2c (CONDITIONAL_JUMP)  ; LAB_004c0c2c
    PUSH 0x1                            ; 004c0bfe
    MOV EAX,[0x01d5ba14]                ; 004c0c00 | DAT_01d5ba14
    PUSH 0x3                            ; 004c0c05
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c0c07
    PUSH 0x0                            ; 004c0c0e
    ADD EAX,0x206e8                     ; 004c0c10
    PUSH EAX                            ; 004c0c15
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40 ; 004c0c16
        ;   XREF to: 004dbb40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004c0c1b
    CMP dword ptr [ESP + 0x7b4],0x0     ; 004c0c1e
    JZ 0x004c0e5e                       ; 004c0c26
        ;   XREF to: 004c0e5e (CONDITIONAL_JUMP)  ; LAB_004c0e5e
    MOV ECX,dword ptr [EBP + 0x14]      ; 004c0c2c
        ;   Label: LAB_004c0c2c
    MOV EBX,dword ptr [ECX + 0x90]      ; 004c0c2f
    MOV EAX,[0x00600284]                ; 004c0c35 | DAT_00600284
    PUSH EBX                            ; 004c0c3a
    MOV EDX,dword ptr [EAX]             ; 004c0c3b | DAT_01d70a78
    PUSH EAX                            ; 004c0c3d | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004c0c3e
    ADD ESP,0x8                         ; 004c0c41
    TEST EAX,EAX                        ; 004c0c44
    JZ 0x004c0c76                       ; 004c0c46
        ;   XREF to: 004c0c76 (CONDITIONAL_JUMP)  ; LAB_004c0c76
    PUSH 0x1                            ; 004c0c48
    MOV EAX,[0x01d5ba14]                ; 004c0c4a | DAT_01d5ba14
    PUSH 0x4                            ; 004c0c4f
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c0c51
    PUSH 0x0                            ; 004c0c58
    ADD EAX,0x206e8                     ; 004c0c5a
    PUSH EAX                            ; 004c0c5f
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40 ; 004c0c60
        ;   XREF to: 004dbb40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004c0c65
    CMP dword ptr [ESP + 0x7b4],0x0     ; 004c0c68
    JZ 0x004c0e6d                       ; 004c0c70
        ;   XREF to: 004c0e6d (CONDITIONAL_JUMP)  ; LAB_004c0e6d
    CMP dword ptr [0x01d22c9c],0x0      ; 004c0c76 | DAT_01d22c9c
        ;   Label: LAB_004c0c76
    JZ 0x004c0e7c                       ; 004c0c7d
        ;   XREF to: 004c0e7c (CONDITIONAL_JUMP)  ; LAB_004c0e7c
    XOR EDX,EDX                         ; 004c0c83
        ;   Label: LAB_004c0c83
    MOV dword ptr [0x01d22c9c],EDX      ; 004c0c85 | DAT_01d22c9c
    MOV dword ptr [0x01d1e334],EDX      ; 004c0c8b | DAT_01d1e334
    MOV dword ptr [0x01d1e324],EDX      ; 004c0c91 | DAT_01d1e324
    MOV dword ptr [0x01c5fae4],EDX      ; 004c0c97 | DAT_01c5fae4
    MOV dword ptr [0x01d1e34c],EDX      ; 004c0c9d | DAT_01d1e34c
    CALL sound_sndmain.cpp_killAllSfx_FUN_00556c60 ; 004c0ca3
        ;   XREF to: 00556c60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_killAllSfx_FUN_00556c60()
    MOV dword ptr [0x01d22c30],0x7149f2ca ; 004c0ca8 | DAT_01d22c30
    MOV EAX,[0x00603b28]                ; 004c0cb2 | g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 004c0cb7 | g_CDemonSetInstance.selected_camera_index
    MOV [0x01d1e358],EAX                ; 004c0cbd | DAT_01d1e358
    CMP dword ptr [0x01d22b48],0x0      ; 004c0cc2 | DAT_01d22b48
        ;   Label: LAB_004c0cc2
    JL 0x004c0e98                       ; 004c0cc9
        ;   XREF to: 004c0e98 (CONDITIONAL_JUMP)  ; LAB_004c0e98
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c0ccf
        ;   Label: LAB_004c0ccf
    CMP dword ptr [EAX + 0x264],0x0     ; 004c0cd2
    JZ 0x004c0eec                       ; 004c0cd9
        ;   XREF to: 004c0eec (CONDITIONAL_JUMP)  ; LAB_004c0eec
    TEST byte ptr [0x01c5fae4],0x1      ; 004c0cdf | DAT_01c5fae4
    JZ 0x004c0d71                       ; 004c0ce6
        ;   XREF to: 004c0d71 (CONDITIONAL_JUMP)  ; LAB_004c0d71
    MOV EAX,dword ptr [ESP + 0x7d8]     ; 004c0cec
    MOV EDX,EAX                         ; 004c0cf3
    SAR EDX,0x1f                        ; 004c0cf5
    SUB EAX,EDX                         ; 004c0cf8
    SAR EAX,0x1                         ; 004c0cfa
    MOV EDX,dword ptr [ESP + 0x81c]     ; 004c0cfc
    SUB EDX,EAX                         ; 004c0d03
    MOV EAX,dword ptr [ESP + 0x7bc]     ; 004c0d05
    MOV dword ptr [ESP + 0x840],EDX     ; 004c0d0c
    MOV EDX,EAX                         ; 004c0d13
    SAR EDX,0x1f                        ; 004c0d15
    SUB EAX,EDX                         ; 004c0d18
    SAR EAX,0x1                         ; 004c0d1a
    MOV dword ptr [ESP + 0x83c],EAX     ; 004c0d1c
    FILD dword ptr [ESP + 0x840]        ; 004c0d23
    FILD dword ptr [ESP + 0x83c]        ; 004c0d2a
    FDIVP                               ; 004c0d31
    FLDZ                                ; 004c0d33
    FCOMPP                              ; 004c0d35
    FNSTSW AX                           ; 004c0d37
    SAHF                                ; 004c0d39
    JC 0x004c0ec1                       ; 004c0d3a
        ;   XREF to: 004c0ec1 (CONDITIONAL_JUMP)  ; LAB_004c0ec1
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c0d40
    MOV dword ptr [EAX],0x1             ; 004c0d43
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c0d49
        ;   Label: LAB_004c0d49
    CMP dword ptr [EAX + 0xb0],0x0      ; 004c0d4c
    JZ 0x004c0ed0                       ; 004c0d53
        ;   XREF to: 004c0ed0 (CONDITIONAL_JUMP)  ; LAB_004c0ed0
    MOV EAX,dword ptr [EAX + 0x30]      ; 004c0d59
    CMP byte ptr [EAX + 0x1c6cef0],0x0  ; 004c0d5c | DAT_01c6cef0
    SETZ AL                             ; 004c0d63
    MOV EDX,dword ptr [EBP + 0x18]      ; 004c0d66
        ;   Label: LAB_004c0d66
    AND EAX,0xff                        ; 004c0d69
    MOV dword ptr [EDX + 0x8],EAX       ; 004c0d6e
    MOV EAX,dword ptr [ESP + 0x7d8]     ; 004c0d71
        ;   Label: LAB_004c0d71
    MOV EDX,EAX                         ; 004c0d78
    SAR EDX,0x1f                        ; 004c0d7a
    SUB EAX,EDX                         ; 004c0d7d
    SAR EAX,0x1                         ; 004c0d7f
    MOV EDX,dword ptr [ESP + 0x7e0]     ; 004c0d81
    SUB EDX,EAX                         ; 004c0d88
    MOV dword ptr [ESP + 0x83c],EDX     ; 004c0d8a
    MOV dword ptr [ESP + 0x840],EAX     ; 004c0d91
    FILD dword ptr [ESP + 0x83c]        ; 004c0d98
    FILD dword ptr [ESP + 0x840]        ; 004c0d9f
    FDIVP                               ; 004c0da6
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c0da8
    FST float ptr [EAX + 0x2c]          ; 004c0dab
    FMUL float ptr [EAX + 0x2c]         ; 004c0dae
    FMUL float ptr [EAX + 0x2c]         ; 004c0db1
    FMUL float ptr [0x005c3c0c]         ; 004c0db4 | DAT_005c3c0c
    MOV DH,byte ptr [0x01c5fae4]        ; 004c0dba | DAT_01c5fae4
    FSTP float ptr [EAX + 0x2c]         ; 004c0dc0
    TEST DH,0x2                         ; 004c0dc3
    JNZ 0x004c0ede                      ; 004c0dc6
        ;   XREF to: 004c0ede (CONDITIONAL_JUMP)  ; LAB_004c0ede
    MOV ESP,EBP                         ; 004c0dcc
        ;   Label: LAB_004c0dcc
    POP EBP                             ; 004c0dce
    POP EDI                             ; 004c0dcf
    POP ESI                             ; 004c0dd0
    POP EBX                             ; 004c0dd1
    RET                                 ; 004c0dd2
    MOV DL,AH                           ; 004c0dd3
        ;   Label: LAB_004c0dd3
    OR DL,0x1                           ; 004c0dd5
    MOV byte ptr [0x01d1e35c],DL        ; 004c0dd8 | DAT_01d1e35c
    JMP 0x004c07ce                      ; 004c0dde
        ;   XREF to: 004c07ce (UNCONDITIONAL_JUMP)  ; LAB_004c07ce
    MOV EAX,EDX                         ; 004c0de3
        ;   Label: LAB_004c0de3
    PUSH EAX                            ; 004c0de5
    MOV EDX,dword ptr [EDX + 0x154]     ; 004c0de6
    CALL dword ptr [EDX + 0x10c]        ; 004c0dec
    ADD ESP,0x4                         ; 004c0df2
    TEST EAX,EAX                        ; 004c0df5
    JG 0x004c0dcc                       ; 004c0df7
        ;   XREF to: 004c0dcc (CONDITIONAL_JUMP)  ; LAB_004c0dcc
    JMP 0x004c0837                      ; 004c0df9
        ;   XREF to: 004c0837 (UNCONDITIONAL_JUMP)  ; LAB_004c0837
    PUSH ECX                            ; 004c0dfe
        ;   Label: LAB_004c0dfe
    CALL unkafter_stranger.cpp_FUN_00527110 ; 004c0dff
        ;   XREF to: 00527110 (UNCONDITIONAL_CALL)  ; undefined unkafter_stranger.cpp_FUN_00527110()
    ADD ESP,0x4                         ; 004c0e04
    TEST EAX,EAX                        ; 004c0e07
    JNZ 0x004c0dcc                      ; 004c0e09
        ;   XREF to: 004c0dcc (CONDITIONAL_JUMP)  ; LAB_004c0dcc
    JMP 0x004c0846                      ; 004c0e0b
        ;   XREF to: 004c0846 (UNCONDITIONAL_JUMP)  ; LAB_004c0846
    MOV dword ptr [EDX],0x0             ; 004c0e10
        ;   Label: LAB_004c0e10
    JMP 0x004c09ab                      ; 004c0e16
        ;   XREF to: 004c09ab (UNCONDITIONAL_JUMP)  ; LAB_004c09ab
    MOV dword ptr [EDX],0x0             ; 004c0e1b
        ;   Label: LAB_004c0e1b
    JMP 0x004c09d4                      ; 004c0e21
        ;   XREF to: 004c09d4 (UNCONDITIONAL_JUMP)  ; LAB_004c09d4
    MOV dword ptr [EDX],0x0             ; 004c0e26
        ;   Label: LAB_004c0e26
    JMP 0x004c09fd                      ; 004c0e2c
        ;   XREF to: 004c09fd (UNCONDITIONAL_JUMP)  ; LAB_004c09fd
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c0e31
        ;   Label: LAB_004c0e31
    MOV dword ptr [EAX + 0x1c],0x1      ; 004c0e34
    JMP 0x004c0b4e                      ; 004c0e3b
        ;   XREF to: 004c0b4e (UNCONDITIONAL_JUMP)  ; LAB_004c0b4e
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c0e40
        ;   Label: LAB_004c0e40
    MOV dword ptr [EAX + 0x1c],0x1      ; 004c0e43
    JMP 0x004c0b98                      ; 004c0e4a
        ;   XREF to: 004c0b98 (UNCONDITIONAL_JUMP)  ; LAB_004c0b98
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c0e4f
        ;   Label: LAB_004c0e4f
    MOV dword ptr [EAX + 0x1c],0x1      ; 004c0e52
    JMP 0x004c0be2                      ; 004c0e59
        ;   XREF to: 004c0be2 (UNCONDITIONAL_JUMP)  ; LAB_004c0be2
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c0e5e
        ;   Label: LAB_004c0e5e
    MOV dword ptr [EAX + 0x1c],0x1      ; 004c0e61
    JMP 0x004c0c2c                      ; 004c0e68
        ;   XREF to: 004c0c2c (UNCONDITIONAL_JUMP)  ; LAB_004c0c2c
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c0e6d
        ;   Label: LAB_004c0e6d
    MOV dword ptr [EAX + 0x1c],0x1      ; 004c0e70
    JMP 0x004c0c76                      ; 004c0e77
        ;   XREF to: 004c0c76 (UNCONDITIONAL_JUMP)  ; LAB_004c0c76
    MOV EAX,[0x006039e0]                ; 004c0e7c | g_CScriptPtr
        ;   Label: LAB_004c0e7c
    PUSH EAX                            ; 004c0e81 | g_CScriptInstance
    CALL core_script.cpp_CScript_getLetterboxHeight_FUN_00528f60 ; 004c0e82
        ;   XREF to: 00528f60 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_getLetterboxHeight_FUN_00528f60(CScript * this_ptr)
    ADD ESP,0x4                         ; 004c0e87
    CMP EAX,0x2                         ; 004c0e8a
    JG 0x004c0c83                       ; 004c0e8d
        ;   XREF to: 004c0c83 (CONDITIONAL_JUMP)  ; LAB_004c0c83
    JMP 0x004c0cc2                      ; 004c0e93
        ;   XREF to: 004c0cc2 (UNCONDITIONAL_JUMP)  ; LAB_004c0cc2
    XOR ECX,ECX                         ; 004c0e98
        ;   Label: LAB_004c0e98
    MOV EAX,0x7149f2ca                  ; 004c0e9a
    MOV dword ptr [0x01c5fae4],ECX      ; 004c0e9f | DAT_01c5fae4
    MOV dword ptr [0x01d1e334],ECX      ; 004c0ea5 | DAT_01d1e334
    MOV dword ptr [0x01d1e34c],ECX      ; 004c0eab | DAT_01d1e34c
    MOV [0x01d22c30],EAX                ; 004c0eb1 | DAT_01d22c30
    MOV dword ptr [0x01d1e324],ECX      ; 004c0eb6 | DAT_01d1e324
    JMP 0x004c0ccf                      ; 004c0ebc
        ;   XREF to: 004c0ccf (UNCONDITIONAL_JUMP)  ; LAB_004c0ccf
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c0ec1
        ;   Label: LAB_004c0ec1
    MOV dword ptr [EAX + 0x4],0x1       ; 004c0ec4
    JMP 0x004c0d49                      ; 004c0ecb
        ;   XREF to: 004c0d49 (UNCONDITIONAL_JUMP)  ; LAB_004c0d49
    MOV EAX,dword ptr [EAX + 0x30]      ; 004c0ed0
        ;   Label: LAB_004c0ed0
    MOV AL,byte ptr [EAX + 0x1c6cef0]   ; 004c0ed3 | DAT_01c6cef0
    JMP 0x004c0d66                      ; 004c0ed9
        ;   XREF to: 004c0d66 (UNCONDITIONAL_JUMP)  ; LAB_004c0d66
    MOV dword ptr [EAX + 0xc],0x1       ; 004c0ede
        ;   Label: LAB_004c0ede
    MOV ESP,EBP                         ; 004c0ee5
    POP EBP                             ; 004c0ee7
    POP EDI                             ; 004c0ee8
    POP ESI                             ; 004c0ee9
    POP EBX                             ; 004c0eea
    RET                                 ; 004c0eeb
    FLD float ptr [0x005fe9d4]          ; 004c0eec | DAT_005fe9d4
        ;   Label: LAB_004c0eec
    FLDZ                                ; 004c0ef2
    FCOMPP                              ; 004c0ef4
    FNSTSW AX                           ; 004c0ef6
    SAHF                                ; 004c0ef8
    JA 0x004c20c2                       ; 004c0ef9
        ;   XREF to: 004c20c2 (CONDITIONAL_JUMP)  ; LAB_004c20c2
    MOV EAX,[0x005fe9dc]                ; 004c0eff | g_CGamePtr
    FLD float ptr [EAX + 0x314]         ; 004c0f04 | g_CGameInstance.delta_time_float
    FSUBR float ptr [0x005fe9d4]        ; 004c0f0a | DAT_005fe9d4
    FSTP float ptr [0x005fe9d4]         ; 004c0f10 | DAT_005fe9d4
    CMP dword ptr [ESP + 0x7e0],0x20    ; 004c0f16
        ;   Label: LAB_004c0f16
    JGE 0x004c2852                      ; 004c0f1e
        ;   XREF to: 004c2852 (CONDITIONAL_JUMP)  ; LAB_004c2852
    MOV dword ptr [0x01d22b48],0x3      ; 004c0f24 | DAT_01d22b48
    XOR EBX,EBX                         ; 004c0f2e
        ;   Label: LAB_004c0f2e
    MOV ESI,dword ptr [0x01d1e324]      ; 004c0f30 | DAT_01d1e324
    MOV dword ptr [ESP + 0x7f4],EBX     ; 004c0f36
    TEST ESI,ESI                        ; 004c0f3d
    JNZ 0x004c1237                      ; 004c0f3f
        ;   XREF to: 004c1237 (CONDITIONAL_JUMP)  ; LAB_004c1237
    CMP dword ptr [0x01c5fae4],0x1      ; 004c0f45 | DAT_01c5fae4
    JNZ 0x004c290b                      ; 004c0f4c
        ;   XREF to: 004c290b (CONDITIONAL_JUMP)  ; LAB_004c290b
    MOV EAX,[0x00603b28]                ; 004c0f52 | g_CDemonSetPtr
        ;   Label: LAB_004c0f52
    PUSH EAX                            ; 004c0f57 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 004c0f58
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004c0f5d
    MOV EDX,dword ptr [ESP + 0x81c]     ; 004c0f60
    PUSH EDX                            ; 004c0f67
    MOV ECX,dword ptr [ESP + 0x7e4]     ; 004c0f68
    PUSH ECX                            ; 004c0f6f
    PUSH 0x2038f4c                      ; 004c0f70
    LEA ESI,[ESP + 0x344]               ; 004c0f75
    LEA EDI,[ESP + 0x6b0]               ; 004c0f7c
    CALL core_dcamera.cpp_FUN_00449eb0  ; 004c0f83
        ;   XREF to: 00449eb0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00449eb0()
    ADD ESP,0xc                         ; 004c0f88
    LEA EAX,[ESP + 0x6a4]               ; 004c0f8b
    LEA ESI,[ESP + 0x338]               ; 004c0f92
    PUSH EAX                            ; 004c0f99
    MOVSD ES:EDI,ESI                    ; 004c0f9a
    MOVSD ES:EDI,ESI                    ; 004c0f9b
    MOVSD ES:EDI,ESI                    ; 004c0f9c
    PUSH 0x2038f4c                      ; 004c0f9d
    LEA ESI,[ESP + 0x43c]               ; 004c0fa2
    LEA EDI,[ESP + 0x6ac]               ; 004c0fa9
    CALL core_dcamera.cpp_FUN_00449f80  ; 004c0fb0
        ;   XREF to: 00449f80 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00449f80()
    LEA ESI,[ESP + 0x43c]               ; 004c0fb5
    ADD ESP,0x8                         ; 004c0fbc
    LEA EBX,[ESP + 0x5c0]               ; 004c0fbf
    MOVSD ES:EDI,ESI                    ; 004c0fc6
    MOVSD ES:EDI,ESI                    ; 004c0fc7
    MOVSD ES:EDI,ESI                    ; 004c0fc8
    LEA EAX,[ESP + 0x6a4]               ; 004c0fc9
    LEA EDI,[ESP + 0x788]               ; 004c0fd0
    FILD dword ptr [EAX]                ; 004c0fd7
    FMUL float ptr [0x005e06e4]         ; 004c0fd9 | DAT_005e06e4
    FSTP float ptr [EBX]                ; 004c0fdf
    FILD dword ptr [EAX + 0x4]          ; 004c0fe1
    FMUL float ptr [0x005e06e4]         ; 004c0fe4 | DAT_005e06e4
    FSTP float ptr [EBX + 0x4]          ; 004c0fea
    FILD dword ptr [EAX + 0x8]          ; 004c0fed
    FMUL float ptr [0x005e06e4]         ; 004c0ff0 | DAT_005e06e4
    FSTP float ptr [EBX + 0x8]          ; 004c0ff6
    MOV ESI,0x2038f50                   ; 004c0ff9
    MOVSD ES:EDI,ESI                    ; 004c0ffe | g_CDemonCameraInstance.base.position
    MOVSD ES:EDI,ESI                    ; 004c0fff | g_CDemonCameraInstance.base.position+4
    MOVSD ES:EDI,ESI                    ; 004c1000 | g_CDemonCameraInstance.base.position+8
    FLD float ptr [ESP + 0x5c0]         ; 004c1001
    LEA EDI,[ESP + 0x194]               ; 004c1008
    LEA ESI,[ESP + 0x788]               ; 004c100f
    FLD float ptr [ESP + 0x5c4]         ; 004c1016
    MOVSD ES:EDI,ESI                    ; 004c101d
    MOVSD ES:EDI,ESI                    ; 004c101e
    MOVSD ES:EDI,ESI                    ; 004c101f
    FLD float ptr [ESP + 0x5c8]         ; 004c1020
    LEA EDI,[ESP + 0x59c]               ; 004c1027
    LEA ESI,[ESP + 0x248]               ; 004c102e
    FXCH ST2                            ; 004c1035
    FSUB float ptr [ESP + 0x194]        ; 004c1037
    FXCH                                ; 004c103e
    FSUB float ptr [ESP + 0x198]        ; 004c1040
    FXCH ST2                            ; 004c1047
    FSUB float ptr [ESP + 0x19c]        ; 004c1049
    FXCH                                ; 004c1050
    FSTP float ptr [ESP + 0x248]        ; 004c1052
    FXCH                                ; 004c1059
    FSTP float ptr [ESP + 0x24c]        ; 004c105b
    FSTP float ptr [ESP + 0x250]        ; 004c1062
    MOVSD ES:EDI,ESI                    ; 004c1069
    MOVSD ES:EDI,ESI                    ; 004c106a
    MOVSD ES:EDI,ESI                    ; 004c106b
    FLD float ptr [ESP + 0x5a0]         ; 004c106c
    FMUL ST0                            ; 004c1073
    FLD float ptr [ESP + 0x59c]         ; 004c1075
    FMUL ST0                            ; 004c107c
    FADDP                               ; 004c107e
    FLD float ptr [ESP + 0x5a4]         ; 004c1080
    FMUL ST0                            ; 004c1087
    FADDP                               ; 004c1089
    FSQRT                               ; 004c108b
    FLDZ                                ; 004c108d
    FXCH                                ; 004c108f
    FSTP float ptr [ESP + 0x7c0]        ; 004c1091
    FCOMP float ptr [ESP + 0x7c0]       ; 004c1098
    FNSTSW AX                           ; 004c109f
    SAHF                                ; 004c10a1
    JNC 0x004c291d                      ; 004c10a2
        ;   XREF to: 004c291d (CONDITIONAL_JUMP)  ; LAB_004c291d
    FLD1                                ; 004c10a8
    FLD float ptr [ESP + 0x59c]         ; 004c10aa
    FXCH                                ; 004c10b1
    FDIV float ptr [ESP + 0x7c0]        ; 004c10b3
    FXCH                                ; 004c10ba
    FMUL ST1                            ; 004c10bc
    FLD float ptr [ESP + 0x5a0]         ; 004c10be
    FMUL ST2                            ; 004c10c5
    FLD float ptr [ESP + 0x5a4]         ; 004c10c7
    FMULP ST3                           ; 004c10ce
    FXCH                                ; 004c10d0
    FSTP float ptr [ESP + 0x59c]        ; 004c10d2
    FSTP float ptr [ESP + 0x5a0]        ; 004c10d9
    FSTP float ptr [ESP + 0x5a4]        ; 004c10e0
    FLD float ptr [0x005c3c08]          ; 004c10e7 | DAT_005c3c08
        ;   Label: LAB_004c10e7
    FLD float ptr [ESP + 0x59c]         ; 004c10ed
    FMUL ST1                            ; 004c10f4
    FLD float ptr [ESP + 0x5a0]         ; 004c10f6
    FMUL ST2                            ; 004c10fd
    FLD float ptr [ESP + 0x5a4]         ; 004c10ff
    FMULP ST3                           ; 004c1106
    FLD float ptr [ESP + 0x194]         ; 004c1108
    FLD float ptr [ESP + 0x198]         ; 004c110f
    FLD float ptr [ESP + 0x19c]         ; 004c1116
    LEA EDI,[ESP + 0x1e8]               ; 004c111d
    LEA ESI,[ESP + 0x2d8]               ; 004c1124
    LEA EAX,[ESP + 0x1e8]               ; 004c112b
    LEA EDX,[ESP + 0x5c0]               ; 004c1132
    FXCH ST4                            ; 004c1139
    FSTP float ptr [ESP + 0x59c]        ; 004c113b
    FXCH ST2                            ; 004c1142
    FSTP float ptr [ESP + 0x5a0]        ; 004c1144
    FXCH ST3                            ; 004c114b
    FSTP float ptr [ESP + 0x5a4]        ; 004c114d
    FXCH ST2                            ; 004c1154
    FADD float ptr [ESP + 0x59c]        ; 004c1156
    FXCH ST2                            ; 004c115d
    FADD float ptr [ESP + 0x5a0]        ; 004c115f
    FXCH                                ; 004c1166
    FADD float ptr [ESP + 0x5a4]        ; 004c1168
    FXCH ST2                            ; 004c116f
    FSTP float ptr [ESP + 0x2d8]        ; 004c1171
    FSTP float ptr [ESP + 0x2dc]        ; 004c1178
    FSTP float ptr [ESP + 0x2e0]        ; 004c117f
    MOVSD ES:EDI,ESI                    ; 004c1186
    MOVSD ES:EDI,ESI                    ; 004c1187
    MOVSD ES:EDI,ESI                    ; 004c1188
    CMP EDX,EAX                         ; 004c1189
    JNZ 0x004c2939                      ; 004c118b
        ;   XREF to: 004c2939 (CONDITIONAL_JUMP)  ; LAB_004c2939
    PUSH 0x4                            ; 004c1191
        ;   Label: LAB_004c1191
    MOV EDX,dword ptr [0x00603b28]      ; 004c1193 | g_CDemonSetPtr
    XOR EAX,EAX                         ; 004c1199
    PUSH EDX                            ; 004c119b | g_CDemonSetInstance
    MOV [0x01d1e354],EAX                ; 004c119c | DAT_01d1e354
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90 ; 004c11a1
        ;   XREF to: 0053ec90 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90(CDemonSet * this_ptr, int ray_type)
    MOV EAX,[0x01d5ba14]                ; 004c11a6 | DAT_01d5ba14
    ADD ESP,0x8                         ; 004c11ab
    MOV ECX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c11ae
    PUSH ECX                            ; 004c11b5
    MOV EBX,dword ptr [0x00603b28]      ; 004c11b6 | g_CDemonSetPtr
    PUSH EBX                            ; 004c11bc | g_CDemonSetInstance
    XOR ESI,ESI                         ; 004c11bd
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 004c11bf
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004c11c4
    MOV dword ptr [ESP + 0x824],ESI     ; 004c11c7
    MOV EAX,dword ptr [ESP + 0x824]     ; 004c11ce
        ;   Label: LAB_004c11ce
    LEA EDI,[EAX + 0x1]                 ; 004c11d5
    MOV dword ptr [ESP + 0x824],EDI     ; 004c11d8
    CMP EAX,0x4                         ; 004c11df
    JGE 0x004c122b                      ; 004c11e2
        ;   XREF to: 004c122b (CONDITIONAL_JUMP)  ; LAB_004c122b
    LEA EAX,[ESP + 0x5c0]               ; 004c11e4
    PUSH EAX                            ; 004c11eb
    LEA EAX,[ESP + 0x198]               ; 004c11ec
    PUSH EAX                            ; 004c11f3
    MOV EAX,[0x00603b28]                ; 004c11f4 | g_CDemonSetPtr
    PUSH EAX                            ; 004c11f9 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053ccc0 ; 004c11fa
        ;   XREF to: 0053ccc0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053ccc0()
    MOV dword ptr [ESP + 0x84c],EAX     ; 004c11ff
    FLD float ptr [ESP + 0x84c]         ; 004c1206
    ADD ESP,0xc                         ; 004c120d
    FLDZ                                ; 004c1210
    FXCH                                ; 004c1212
    FSTP float ptr [ESP + 0x82c]        ; 004c1214
    FCOMP float ptr [ESP + 0x82c]       ; 004c121b
    FNSTSW AX                           ; 004c1222
    SAHF                                ; 004c1224
    JBE 0x004c2968                      ; 004c1225
        ;   XREF to: 004c2968 (CONDITIONAL_JUMP)  ; LAB_004c2968
    MOV EAX,dword ptr [ESP + 0x7f4]     ; 004c122b
        ;   Label: LAB_004c122b
    MOV [0x01d1e350],EAX                ; 004c1232 | DAT_01d1e350
    CMP dword ptr [ESP + 0x7b4],0x0     ; 004c1237
        ;   Label: LAB_004c1237
    JZ 0x004c2c72                       ; 004c123f
        ;   XREF to: 004c2c72 (CONDITIONAL_JUMP)  ; LAB_004c2c72
    MOV EAX,dword ptr [ESP + 0x818]     ; 004c1245
        ;   Label: LAB_004c1245
    TEST EAX,EAX                        ; 004c124c
    JZ 0x004c1284                       ; 004c124e
        ;   XREF to: 004c1284 (CONDITIONAL_JUMP)  ; LAB_004c1284
    MOV EDX,dword ptr [EAX + 0x20c24]   ; 004c1250
    TEST EDX,EDX                        ; 004c1256
    JZ 0x004c1284                       ; 004c1258
        ;   XREF to: 004c1284 (CONDITIONAL_JUMP)  ; LAB_004c1284
    MOV ECX,dword ptr [EDX + 0x2e0]     ; 004c125a
    MOV EBX,EDX                         ; 004c1260
    CMP ECX,0x3                         ; 004c1262
    JNZ 0x004c2c8e                      ; 004c1265
        ;   XREF to: 004c2c8e (CONDITIONAL_JUMP)  ; LAB_004c2c8e
    XOR EBX,EBX                         ; 004c126b
        ;   Label: LAB_004c126b
    MOV ESI,dword ptr [0x01d22b48]      ; 004c126d | DAT_01d22b48
    MOV dword ptr [0x01d1e34c],EBX      ; 004c1273 | DAT_01d1e34c
    CMP ESI,0x5                         ; 004c1279
    JNZ 0x004c1284                      ; 004c127c
        ;   XREF to: 004c1284 (CONDITIONAL_JUMP)  ; LAB_004c1284
    MOV dword ptr [0x01d22b48],EBX      ; 004c127e | DAT_01d22b48
    CMP dword ptr [ESP + 0x7b4],0x0     ; 004c1284
        ;   Label: LAB_004c1284
    JZ 0x004c3126                       ; 004c128c
        ;   XREF to: 004c3126 (CONDITIONAL_JUMP)  ; LAB_004c3126
    TEST byte ptr [0x01c5fae4],0x2      ; 004c1292 | DAT_01c5fae4
    JZ 0x004c3126                       ; 004c1299
        ;   XREF to: 004c3126 (CONDITIONAL_JUMP)  ; LAB_004c3126
    MOV EBX,dword ptr [ESP + 0x818]     ; 004c129f
    TEST EBX,EBX                        ; 004c12a6
    JZ 0x004c2cf1                       ; 004c12a8
        ;   XREF to: 004c2cf1 (CONDITIONAL_JUMP)  ; LAB_004c2cf1
    MOV ESI,dword ptr [EBX + 0x20c24]   ; 004c12ae
    TEST ESI,ESI                        ; 004c12b4
    JZ 0x004c2cf1                       ; 004c12b6
        ;   XREF to: 004c2cf1 (CONDITIONAL_JUMP)  ; LAB_004c2cf1
    CMP dword ptr [ESI + 0x2e0],0x3     ; 004c12bc
    JNZ 0x004c2cf1                      ; 004c12c3
        ;   XREF to: 004c2cf1 (CONDITIONAL_JUMP)  ; LAB_004c2cf1
    MOV EBX,dword ptr [0x00603b28]      ; 004c12c9 | g_CDemonSetPtr
    PUSH EBX                            ; 004c12cf | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 004c12d0
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004c12d5
    MOV ESI,dword ptr [ESP + 0x81c]     ; 004c12d8
    PUSH ESI                            ; 004c12df
    MOV EDI,dword ptr [ESP + 0x7e4]     ; 004c12e0
    PUSH EDI                            ; 004c12e7
    PUSH 0x2038f4c                      ; 004c12e8
    LEA ESI,[ESP + 0x32c]               ; 004c12ed
    LEA EDI,[ESP + 0x47c]               ; 004c12f4
    CALL core_dcamera.cpp_FUN_00449eb0  ; 004c12fb
        ;   XREF to: 00449eb0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00449eb0()
    ADD ESP,0xc                         ; 004c1300
    LEA EAX,[ESP + 0x470]               ; 004c1303
    LEA ESI,[ESP + 0x320]               ; 004c130a
    PUSH EAX                            ; 004c1311
    MOVSD ES:EDI,ESI                    ; 004c1312
    MOVSD ES:EDI,ESI                    ; 004c1313
    MOVSD ES:EDI,ESI                    ; 004c1314
    PUSH 0x2038f4c                      ; 004c1315
    LEA ESI,[ESP + 0x784]               ; 004c131a
    LEA EDI,[ESP + 0x478]               ; 004c1321
    CALL core_dcamera.cpp_FUN_00449f80  ; 004c1328
        ;   XREF to: 00449f80 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00449f80()
    LEA ESI,[ESP + 0x784]               ; 004c132d
    ADD ESP,0x8                         ; 004c1334
    LEA EBX,[ESP + 0x4a0]               ; 004c1337
    MOVSD ES:EDI,ESI                    ; 004c133e
    MOVSD ES:EDI,ESI                    ; 004c133f
    MOVSD ES:EDI,ESI                    ; 004c1340
    LEA EAX,[ESP + 0x470]               ; 004c1341
    LEA EDI,[ESP + 0x56c]               ; 004c1348
    FILD dword ptr [EAX]                ; 004c134f
    FMUL float ptr [0x005e06e4]         ; 004c1351 | DAT_005e06e4
    FSTP float ptr [EBX]                ; 004c1357
    FILD dword ptr [EAX + 0x4]          ; 004c1359
    FMUL float ptr [0x005e06e4]         ; 004c135c | DAT_005e06e4
    FSTP float ptr [EBX + 0x4]          ; 004c1362
    FILD dword ptr [EAX + 0x8]          ; 004c1365
    FMUL float ptr [0x005e06e4]         ; 004c1368 | DAT_005e06e4
    FSTP float ptr [EBX + 0x8]          ; 004c136e
    MOV ESI,0x2038f50                   ; 004c1371
    MOVSD ES:EDI,ESI                    ; 004c1376 | g_CDemonCameraInstance.base.position
    MOVSD ES:EDI,ESI                    ; 004c1377 | g_CDemonCameraInstance.base.position+4
    MOVSD ES:EDI,ESI                    ; 004c1378 | g_CDemonCameraInstance.base.position+8
    FLD float ptr [ESP + 0x4a0]         ; 004c1379
    LEA EDI,[ESP + 0x6d4]               ; 004c1380
    LEA ESI,[ESP + 0x56c]               ; 004c1387
    FLD float ptr [ESP + 0x4a4]         ; 004c138e
    MOVSD ES:EDI,ESI                    ; 004c1395
    MOVSD ES:EDI,ESI                    ; 004c1396
    MOVSD ES:EDI,ESI                    ; 004c1397
    FLD float ptr [ESP + 0x4a8]         ; 004c1398
    LEA EDI,[ESP + 0x5fc]               ; 004c139f
    LEA ESI,[ESP + 0x770]               ; 004c13a6
    FXCH ST2                            ; 004c13ad
    FSUB float ptr [ESP + 0x6d4]        ; 004c13af
    FXCH                                ; 004c13b6
    FSUB float ptr [ESP + 0x6d8]        ; 004c13b8
    FXCH ST2                            ; 004c13bf
    FSUB float ptr [ESP + 0x6dc]        ; 004c13c1
    FXCH                                ; 004c13c8
    FSTP float ptr [ESP + 0x770]        ; 004c13ca
    FXCH                                ; 004c13d1
    FSTP float ptr [ESP + 0x774]        ; 004c13d3
    FSTP float ptr [ESP + 0x778]        ; 004c13da
    MOVSD ES:EDI,ESI                    ; 004c13e1
    MOVSD ES:EDI,ESI                    ; 004c13e2
    MOVSD ES:EDI,ESI                    ; 004c13e3
    FLD float ptr [ESP + 0x600]         ; 004c13e4
    FMUL ST0                            ; 004c13eb
    FLD float ptr [ESP + 0x5fc]         ; 004c13ed
    FMUL ST0                            ; 004c13f4
    FADDP                               ; 004c13f6
    FLD float ptr [ESP + 0x604]         ; 004c13f8
    FMUL ST0                            ; 004c13ff
    FADDP                               ; 004c1401
    FSQRT                               ; 004c1403
    FLDZ                                ; 004c1405
    FXCH                                ; 004c1407
    FSTP float ptr [ESP + 0x830]        ; 004c1409
    FCOMP float ptr [ESP + 0x830]       ; 004c1410
    FNSTSW AX                           ; 004c1417
    SAHF                                ; 004c1419
    JNC 0x004c2cd5                      ; 004c141a
        ;   XREF to: 004c2cd5 (CONDITIONAL_JUMP)  ; LAB_004c2cd5
    FLD1                                ; 004c1420
    FLD float ptr [ESP + 0x5fc]         ; 004c1422
    FXCH                                ; 004c1429
    FDIV float ptr [ESP + 0x830]        ; 004c142b
    FXCH                                ; 004c1432
    FMUL ST1                            ; 004c1434
    FLD float ptr [ESP + 0x600]         ; 004c1436
    FMUL ST2                            ; 004c143d
    FLD float ptr [ESP + 0x604]         ; 004c143f
    FMULP ST3                           ; 004c1446
    FXCH                                ; 004c1448
    FSTP float ptr [ESP + 0x5fc]        ; 004c144a
    FSTP float ptr [ESP + 0x600]        ; 004c1451
    FSTP float ptr [ESP + 0x604]        ; 004c1458
    FLD float ptr [0x005c3c08]          ; 004c145f | DAT_005c3c08
        ;   Label: LAB_004c145f
    FLD float ptr [ESP + 0x5fc]         ; 004c1465
    FMUL ST1                            ; 004c146c
    FLD float ptr [ESP + 0x600]         ; 004c146e
    FMUL ST2                            ; 004c1475
    FLD float ptr [ESP + 0x604]         ; 004c1477
    FMULP ST3                           ; 004c147e
    FLD float ptr [ESP + 0x6d4]         ; 004c1480
    FLD float ptr [ESP + 0x6d8]         ; 004c1487
    FLD float ptr [ESP + 0x6dc]         ; 004c148e
    LEA EDI,[ESP + 0x53c]               ; 004c1495
    LEA ESI,[ESP + 0x1d0]               ; 004c149c
    LEA EAX,[ESP + 0x53c]               ; 004c14a3
    LEA EDX,[ESP + 0x4a0]               ; 004c14aa
    FXCH ST4                            ; 004c14b1
    FSTP float ptr [ESP + 0x5fc]        ; 004c14b3
    FXCH ST2                            ; 004c14ba
    FSTP float ptr [ESP + 0x600]        ; 004c14bc
    FXCH ST3                            ; 004c14c3
    FSTP float ptr [ESP + 0x604]        ; 004c14c5
    FXCH ST2                            ; 004c14cc
    FADD float ptr [ESP + 0x5fc]        ; 004c14ce
    FXCH ST2                            ; 004c14d5
    FADD float ptr [ESP + 0x600]        ; 004c14d7
    FXCH                                ; 004c14de
    FADD float ptr [ESP + 0x604]        ; 004c14e0
    FXCH ST2                            ; 004c14e7
    FSTP float ptr [ESP + 0x1d0]        ; 004c14e9
    FSTP float ptr [ESP + 0x1d4]        ; 004c14f0
    FSTP float ptr [ESP + 0x1d8]        ; 004c14f7
    MOVSD ES:EDI,ESI                    ; 004c14fe
    MOVSD ES:EDI,ESI                    ; 004c14ff
    MOVSD ES:EDI,ESI                    ; 004c1500
    CMP EDX,EAX                         ; 004c1501
    JZ 0x004c152f                       ; 004c1503
        ;   XREF to: 004c152f (CONDITIONAL_JUMP)  ; LAB_004c152f
    MOV EAX,dword ptr [ESP + 0x53c]     ; 004c1505
    MOV dword ptr [ESP + 0x4a0],EAX     ; 004c150c
    MOV EAX,dword ptr [ESP + 0x540]     ; 004c1513
    MOV dword ptr [ESP + 0x4a4],EAX     ; 004c151a
    MOV EAX,dword ptr [ESP + 0x544]     ; 004c1521
    MOV dword ptr [ESP + 0x4a8],EAX     ; 004c1528
    PUSH 0x4                            ; 004c152f
        ;   Label: LAB_004c152f
    MOV EBX,dword ptr [0x00603b28]      ; 004c1531 | g_CDemonSetPtr
    PUSH EBX                            ; 004c1537 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90 ; 004c1538
        ;   XREF to: 0053ec90 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90(CDemonSet * this_ptr, int ray_type)
    MOV EAX,[0x01d5ba14]                ; 004c153d | DAT_01d5ba14
    ADD ESP,0x8                         ; 004c1542
    MOV ESI,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c1545
    PUSH ESI                            ; 004c154c
    MOV EDI,dword ptr [0x00603b28]      ; 004c154d | g_CDemonSetPtr
    PUSH EDI                            ; 004c1553 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 004c1554
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004c1559
    LEA EAX,[ESP + 0x4a0]               ; 004c155c
    PUSH EAX                            ; 004c1563
    LEA EAX,[ESP + 0x6d8]               ; 004c1564
    PUSH EAX                            ; 004c156b
    MOV EAX,[0x00603b28]                ; 004c156c | g_CDemonSetPtr
    PUSH EAX                            ; 004c1571 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053ccc0 ; 004c1572
        ;   XREF to: 0053ccc0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053ccc0()
    MOV EAX,[0x00603b28]                ; 004c1577 | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 004c157c
    ADD ESP,0xc                         ; 004c1581
    CMP EAX,0x1d22c30                   ; 004c1584
    JZ 0x004c15a5                       ; 004c1589
        ;   XREF to: 004c15a5 (CONDITIONAL_JUMP)  ; LAB_004c15a5
    FLD float ptr [EAX]                 ; 004c158b | g_CDemonSetInstance.collision_impact_position.x
    FLD float ptr [EAX + 0x8]           ; 004c158d | g_CDemonSetInstance.collision_impact_position.z
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c1590 | g_CDemonSetInstance.collision_impact_position.y
    MOV dword ptr [0x01d22c34],EDX      ; 004c1593 | DAT_01d22c34
    FSTP float ptr [0x01d22c38]         ; 004c1599 | DAT_01d22c38
    FSTP float ptr [0x01d22c30]         ; 004c159f | DAT_01d22c30
    MOV EAX,[0x01d5ba14]                ; 004c15a5 | DAT_01d5ba14
        ;   Label: LAB_004c15a5
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c15aa
    ADD EAX,0x20                        ; 004c15b1
    CMP EAX,0x1d1e328                   ; 004c15b4
    JZ 0x004c15d5                       ; 004c15b9
        ;   XREF to: 004c15d5 (CONDITIONAL_JUMP)  ; LAB_004c15d5
    FLD float ptr [EAX]                 ; 004c15bb
    FLD float ptr [EAX + 0x8]           ; 004c15bd
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c15c0
    MOV dword ptr [0x01d1e32c],EDX      ; 004c15c3 | DAT_01d1e32c
    FSTP float ptr [0x01d1e330]         ; 004c15c9 | DAT_01d1e330
    FSTP float ptr [0x01d1e328]         ; 004c15cf | DAT_01d1e328
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c15d5
        ;   Label: LAB_004c15d5
    MOV dword ptr [EAX + 0xc],0x1       ; 004c15d8
    TEST byte ptr [0x01c5fae4],0x2      ; 004c15df | DAT_01c5fae4
        ;   Label: LAB_004c15df
    JZ 0x004c1610                       ; 004c15e6
        ;   XREF to: 004c1610 (CONDITIONAL_JUMP)  ; LAB_004c1610
    MOV EDX,dword ptr [ESP + 0x818]     ; 004c15e8
    TEST EDX,EDX                        ; 004c15ef
    JZ 0x004c1610                       ; 004c15f1
        ;   XREF to: 004c1610 (CONDITIONAL_JUMP)  ; LAB_004c1610
    MOV ECX,dword ptr [EDX + 0x20c24]   ; 004c15f3
    TEST ECX,ECX                        ; 004c15f9
    JZ 0x004c1610                       ; 004c15fb
        ;   XREF to: 004c1610 (CONDITIONAL_JUMP)  ; LAB_004c1610
    CMP dword ptr [ECX + 0x2e0],0x7     ; 004c15fd
    JNZ 0x004c1610                      ; 004c1604
        ;   XREF to: 004c1610 (CONDITIONAL_JUMP)  ; LAB_004c1610
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1606
    MOV dword ptr [EAX + 0xc],0x1       ; 004c1609
    TEST byte ptr [0x01c5fae4],0x1      ; 004c1610 | DAT_01c5fae4
        ;   Label: LAB_004c1610
    JZ 0x004c3140                       ; 004c1617
        ;   XREF to: 004c3140 (CONDITIONAL_JUMP)  ; LAB_004c3140
    MOV EAX,[0x00603b28]                ; 004c161d | g_CDemonSetPtr
        ;   Label: LAB_004c161d
    MOV ESI,dword ptr [0x01c5fae4]      ; 004c1622 | DAT_01c5fae4
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 004c1628 | g_CDemonSetInstance.selected_camera_index
    CMP ESI,0x1                         ; 004c162e
    JNZ 0x004c18c1                      ; 004c1631
        ;   XREF to: 004c18c1 (CONDITIONAL_JUMP)  ; LAB_004c18c1
    CMP EAX,dword ptr [0x01d1e358]      ; 004c1637 | DAT_01d1e358
    JNZ 0x004c18c1                      ; 004c163d
        ;   XREF to: 004c18c1 (CONDITIONAL_JUMP)  ; LAB_004c18c1
    MOV EDX,dword ptr [ESP + 0x81c]     ; 004c1643
    PUSH EDX                            ; 004c164a
    MOV ECX,dword ptr [ESP + 0x7e4]     ; 004c164b
    PUSH ECX                            ; 004c1652
    MOV EAX,0x7149f2ca                  ; 004c1653
    LEA ESI,[ESP + 0x190]               ; 004c1658
    PUSH 0x2038f4c                      ; 004c165f
    LEA EDI,[ESP + 0x188]               ; 004c1664
    MOV [0x01d22c30],EAX                ; 004c166b | DAT_01d22c30
    CALL core_dcamera.cpp_FUN_00449eb0  ; 004c1670
        ;   XREF to: 00449eb0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00449eb0()
    ADD ESP,0xc                         ; 004c1675
    LEA ESI,[ESP + 0x188]               ; 004c1678
    MOV EBX,dword ptr [ESP + 0x7f4]     ; 004c167f
    MOVSD ES:EDI,ESI                    ; 004c1686
    MOVSD ES:EDI,ESI                    ; 004c1687
    MOVSD ES:EDI,ESI                    ; 004c1688
    TEST EBX,EBX                        ; 004c1689
    JZ 0x004c3f1e                       ; 004c168b
        ;   XREF to: 004c3f1e (CONDITIONAL_JUMP)  ; LAB_004c3f1e
    TEST byte ptr [0x01c5fae4],0x2      ; 004c1691 | DAT_01c5fae4
    JZ 0x004c16d6                       ; 004c1698
        ;   XREF to: 004c16d6 (CONDITIONAL_JUMP)  ; LAB_004c16d6
    CMP dword ptr [0x01d1e34c],0x0      ; 004c169a | DAT_01d1e34c
    JNZ 0x004c16d6                      ; 004c16a1
        ;   XREF to: 004c16d6 (CONDITIONAL_JUMP)  ; LAB_004c16d6
    MOV EAX,[0x01d5ba14]                ; 004c16a3 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c16a8
    MOV ESI,0x1                         ; 004c16af
    MOV EDI,dword ptr [EAX + 0x20b64]   ; 004c16b4
    MOV dword ptr [0x01d1e320],ESI      ; 004c16ba | DAT_01d1e320
    TEST EDI,EDI                        ; 004c16c0
    JNZ 0x004c16d6                      ; 004c16c2
        ;   XREF to: 004c16d6 (CONDITIONAL_JUMP)  ; LAB_004c16d6
    PUSH EAX                            ; 004c16c4
    CALL core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0 ; 004c16c5
        ;   XREF to: 00431ce0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0(CCharacter * this_ptr)
    MOV EAX,0x40000000                  ; 004c16ca
    ADD ESP,0x4                         ; 004c16cf
    MOV dword ptr [ESP + 0x24],EAX      ; 004c16d2
    FLD float ptr [ESP + 0x24]          ; 004c16d6
        ;   Label: LAB_004c16d6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c16da
    MOV EDX,dword ptr [0x01b85178]      ; 004c16dd | g_CDoorClassInfo.name_hash
    MOV ECX,dword ptr [ESP + 0x7f4]     ; 004c16e3
    PUSH EDX                            ; 004c16ea
    FSUB float ptr [EAX + 0x314]        ; 004c16eb
    PUSH ECX                            ; 004c16f1
    FSTP float ptr [ESP + 0x2c]         ; 004c16f2
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c16f6
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c16fb
    MOV ESI,dword ptr [0x007e2cec]      ; 004c16fe | g_CCharacterClassInfo.name_hash
    PUSH ESI                            ; 004c1704
    MOV EDI,dword ptr [ESP + 0x7f8]     ; 004c1705
    PUSH EDI                            ; 004c170c
    MOV EBX,EAX                         ; 004c170d
    MOV dword ptr [ESP + 0x7cc],EAX     ; 004c170f
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c1716
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV dword ptr [ESP + 0x7d0],EAX     ; 004c171b
    ADD ESP,0x8                         ; 004c1722
    MOV dword ptr [ESP + 0x844],EAX     ; 004c1725
    MOV EAX,[0x01d70c34]                ; 004c172c | g_CLeverClassInfo.name_hash
    PUSH EAX                            ; 004c1731
    PUSH EDI                            ; 004c1732
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c1733
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV dword ptr [ESP + 0x7d4],EAX     ; 004c1738
    ADD ESP,0x8                         ; 004c173f
    MOV ECX,dword ptr [0x02cfd894]      ; 004c1742 | g_CTriggerClassInfo.name_hash
    PUSH ECX                            ; 004c1748
    PUSH EDI                            ; 004c1749
    MOV dword ptr [ESP + 0x858],EAX     ; 004c174a
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c1751
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV dword ptr [ESP + 0x7d8],EAX     ; 004c1756
    ADD ESP,0x8                         ; 004c175d
    MOV ESI,EDI                         ; 004c1760
    MOV EDI,dword ptr [0x007e17b4]      ; 004c1762 | g_CBoxActorClassInfo.name_hash
    PUSH EDI                            ; 004c1768
    MOV EAX,ESI                         ; 004c1769
    PUSH EAX                            ; 004c176b
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c176c
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV dword ptr [ESP + 0x7dc],EAX     ; 004c1771
    ADD ESP,0x8                         ; 004c1778
    MOV EDX,dword ptr [0x01d72c08]      ; 004c177b | g_CMeleeClassInfo.name_hash
    PUSH EDX                            ; 004c1781
    MOV ECX,ESI                         ; 004c1782
    PUSH ECX                            ; 004c1784
    MOV dword ptr [ESP + 0x854],EAX     ; 004c1785
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c178c
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV dword ptr [ESP + 0x7ec],EAX     ; 004c1791
    ADD ESP,0x8                         ; 004c1798
    MOV ESI,dword ptr [0x02d0c150]      ; 004c179b | g_CWeaponClassInfo.name_hash
    PUSH ESI                            ; 004c17a1
    MOV EDI,dword ptr [ESP + 0x7f8]     ; 004c17a2
    PUSH EDI                            ; 004c17a9
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c17aa
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c17af
    MOV EDX,0x40200000                  ; 004c17b2
    MOV ECX,dword ptr [ESP + 0x7c8]     ; 004c17b7
    MOV dword ptr [ESP + 0x848],EAX     ; 004c17be
    MOV dword ptr [ESP + 0x8],EDX       ; 004c17c5
    TEST ECX,ECX                        ; 004c17c9
    JZ 0x004c327e                       ; 004c17cb
        ;   XREF to: 004c327e (CONDITIONAL_JUMP)  ; LAB_004c327e
    PUSH 0x5c3bff                       ; 004c17d1 | = "CEnemy"
    PUSH ECX                            ; 004c17d6
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004c17d7
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004c17dc
    TEST EAX,EAX                        ; 004c17df
    JZ 0x004c3155                       ; 004c17e1
        ;   XREF to: 004c3155 (CONDITIONAL_JUMP)  ; LAB_004c3155
    MOV EAX,[0x007f8ed8]                ; 004c17e7 | g_CConstructClassInfo.name_hash
    PUSH EAX                            ; 004c17ec
    PUSH EDI                            ; 004c17ed
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c17ee
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c17f3
    TEST EAX,EAX                        ; 004c17f6
    JZ 0x004c1893                       ; 004c17f8
        ;   XREF to: 004c1893 (CONDITIONAL_JUMP)  ; LAB_004c1893
    MOV ECX,0x40a00000                  ; 004c17fe
    LEA ESI,[ESP + 0x1b8]               ; 004c1803
    PUSH EAX                            ; 004c180a
    MOV EDX,dword ptr [EAX + 0x154]     ; 004c180b
    LEA EDI,[ESP + 0x3c0]               ; 004c1811
    MOV dword ptr [ESP + 0xc],ECX       ; 004c1818
    CALL dword ptr [EDX + 0x14c]        ; 004c181c
    LEA ESI,[ESP + 0x1bc]               ; 004c1822
    ADD ESP,0x4                         ; 004c1829
    LEA EAX,[ESP + 0x3bc]               ; 004c182c
    MOVSD ES:EDI,ESI                    ; 004c1833
    MOVSD ES:EDI,ESI                    ; 004c1834
    MOVSD ES:EDI,ESI                    ; 004c1835
    CMP EAX,0x1d1e328                   ; 004c1836
    JZ 0x004c1861                       ; 004c183b
        ;   XREF to: 004c1861 (CONDITIONAL_JUMP)  ; LAB_004c1861
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 004c183d
    MOV [0x01d1e328],EAX                ; 004c1844 | DAT_01d1e328
    MOV EAX,dword ptr [ESP + 0x3c0]     ; 004c1849
    MOV [0x01d1e32c],EAX                ; 004c1850 | DAT_01d1e32c
    MOV EAX,dword ptr [ESP + 0x3c4]     ; 004c1855
    MOV [0x01d1e330],EAX                ; 004c185c | DAT_01d1e330
    LEA EAX,[ESP + 0x3bc]               ; 004c1861
        ;   Label: LAB_004c1861
    CMP EAX,0x1d22c30                   ; 004c1868
    JZ 0x004c1893                       ; 004c186d
        ;   XREF to: 004c1893 (CONDITIONAL_JUMP)  ; LAB_004c1893
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 004c186f
    MOV [0x01d22c30],EAX                ; 004c1876 | DAT_01d22c30
    MOV EAX,dword ptr [ESP + 0x3c0]     ; 004c187b
    MOV [0x01d22c34],EAX                ; 004c1882 | DAT_01d22c34
    MOV EAX,dword ptr [ESP + 0x3c4]     ; 004c1887
    MOV [0x01d22c38],EAX                ; 004c188e | DAT_01d22c38
        ;   Label: LAB_004c188e
    CMP dword ptr [ESP + 0x7b4],0x0     ; 004c1893
        ;   Label: LAB_004c1893
    JZ 0x004c3ea6                       ; 004c189b
        ;   XREF to: 004c3ea6 (CONDITIONAL_JUMP)  ; LAB_004c3ea6
    TEST byte ptr [0x01c5fae4],0x2      ; 004c18a1 | DAT_01c5fae4
    JZ 0x004c3ea6                       ; 004c18a8
        ;   XREF to: 004c3ea6 (CONDITIONAL_JUMP)  ; LAB_004c3ea6
    MOV ECX,0x7149f2ca                  ; 004c18ae
    XOR EDX,EDX                         ; 004c18b3
    MOV dword ptr [0x01d22c30],ECX      ; 004c18b5 | DAT_01d22c30
    MOV dword ptr [0x01d1e334],EDX      ; 004c18bb | DAT_01d1e334
    MOV EAX,[0x01d5ba14]                ; 004c18c1 | DAT_01d5ba14
        ;   Label: LAB_004c18c1
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c18c6
    FLD float ptr [EAX + 0x20]          ; 004c18cd
    FSUB float ptr [0x01d1e328]         ; 004c18d0 | DAT_01d1e328
    FSTP float ptr [ESP + 0x7a0]        ; 004c18d6
    FLD float ptr [EAX + 0x24]          ; 004c18dd
    FSUB float ptr [0x01d1e32c]         ; 004c18e0 | DAT_01d1e32c
    LEA EDI,[ESP + 0x380]               ; 004c18e6
    FSTP float ptr [ESP + 0x7a4]        ; 004c18ed
    FLD float ptr [EAX + 0x28]          ; 004c18f4
    FSUB float ptr [0x01d1e330]         ; 004c18f7 | DAT_01d1e330
    LEA ESI,[ESP + 0x7a0]               ; 004c18fd
    FSTP float ptr [ESP + 0x7a8]        ; 004c1904
    MOVSD ES:EDI,ESI                    ; 004c190b
    MOVSD ES:EDI,ESI                    ; 004c190c
    MOVSD ES:EDI,ESI                    ; 004c190d
    FLD float ptr [ESP + 0x384]         ; 004c190e
    FMUL ST0                            ; 004c1915
    FLD float ptr [ESP + 0x380]         ; 004c1917
    FMUL ST0                            ; 004c191e
    FADDP                               ; 004c1920
    FLD float ptr [ESP + 0x388]         ; 004c1922
    FMUL ST0                            ; 004c1929
    FADDP                               ; 004c192b
    FSQRT                               ; 004c192d
    MOV EBX,dword ptr [0x01d1e334]      ; 004c192f | DAT_01d1e334
    FSTP float ptr [ESP + 0x14]         ; 004c1935
    TEST EBX,EBX                        ; 004c1939
    JZ 0x004c4595                       ; 004c193b
        ;   XREF to: 004c4595 (CONDITIONAL_JUMP)  ; LAB_004c4595
    CMP dword ptr [0x01d1e34c],0x0      ; 004c1941 | DAT_01d1e34c
    JNZ 0x004c4595                      ; 004c1948
        ;   XREF to: 004c4595 (CONDITIONAL_JUMP)  ; LAB_004c4595
    MOV EAX,[0x01d5ba14]                ; 004c194e | DAT_01d5ba14
        ;   Label: LAB_004c194e
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c1953
    FLD float ptr [0x01d1e32c]          ; 004c195a | DAT_01d1e32c
    FSUB float ptr [EAX + 0x24]         ; 004c1960
    FABS                                ; 004c1963
    FLD float ptr [ESP + 0x14]          ; 004c1965
    FLD ST0                             ; 004c1969
    FMUL double ptr [0x005c3c20]        ; 004c196b | DAT_005c3c20
    FSUBP                               ; 004c1971
    FCOMPP                              ; 004c1973
    FNSTSW AX                           ; 004c1975
    SAHF                                ; 004c1977
    JNC 0x004c1993                      ; 004c1978
        ;   XREF to: 004c1993 (CONDITIONAL_JUMP)  ; LAB_004c1993
    XOR EDI,EDI                         ; 004c197a
    MOV EDX,0x7149f2ca                  ; 004c197c
    MOV dword ptr [0x01d1e320],EDI      ; 004c1981 | DAT_01d1e320
    MOV dword ptr [0x01d22c30],EDX      ; 004c1987 | DAT_01d22c30
    MOV dword ptr [0x01d1e334],EDI      ; 004c198d | DAT_01d1e334
    PUSH 0x1d1e328                      ; 004c1993 | DAT_01d1e328
        ;   Label: LAB_004c1993
    CALL core_path.cpp_getPathMap_FUN_0050ced0 ; 004c1998
        ;   XREF to: 0050ced0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_0050ced0(CLocation * location)
    ADD ESP,0x4                         ; 004c199d
    PUSH 0x0                            ; 004c19a0
    LEA EDX,[ESP + 0x6fc]               ; 004c19a2
    PUSH EDX                            ; 004c19a9
    MOV EDX,dword ptr [0x01d5ba14]      ; 004c19aa | DAT_01d5ba14
    MOV EDX,dword ptr [EDX*0x4 + 0x1d5ba04] ; 004c19b0
    ADD EDX,0x20                        ; 004c19b7
    PUSH EDX                            ; 004c19ba
    PUSH EAX                            ; 004c19bb
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_0050c680 ; 004c19bc
        ;   XREF to: 0050c680 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_0050c680(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 004c19c1
    TEST EAX,EAX                        ; 004c19c4
    JZ 0x004c45af                       ; 004c19c6
        ;   XREF to: 004c45af (CONDITIONAL_JUMP)  ; LAB_004c45af
    MOV EAX,[0x01d5ba14]                ; 004c19cc | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c19d1
    FLD float ptr [ESP + 0x6fc]         ; 004c19d8
    FSUB float ptr [EAX + 0x34]         ; 004c19df
    SUB ESP,0x4                         ; 004c19e2
    FSTP float ptr [ESP]                ; 004c19e5
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 004c19e8
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    MOV dword ptr [ESP + 0x844],EAX     ; 004c19ed
    FLD float ptr [ESP + 0x844]         ; 004c19f4
    ADD ESP,0x4                         ; 004c19fb
    FST float ptr [ESP + 0x18]          ; 004c19fe
    FMUL float ptr [0x005c3c28]         ; 004c1a02 | DAT_005c3c28
    FMUL double ptr [0x005c3c30]        ; 004c1a08 | DAT_005c3c30
    FLD float ptr [ESP + 0x10]          ; 004c1a0e
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1a12
    FCHS                                ; 004c1a15
    FSTP float ptr [ESP]                ; 004c1a17
    FST float ptr [EAX + 0x2c]          ; 004c1a1a
    FCOMP float ptr [ESP]               ; 004c1a1d
    FNSTSW AX                           ; 004c1a20
    SAHF                                ; 004c1a22
    JNC 0x004c1a3c                      ; 004c1a23
        ;   XREF to: 004c1a3c (CONDITIONAL_JUMP)  ; LAB_004c1a3c
    FLD float ptr [ESP]                 ; 004c1a25
    FLD float ptr [ESP + 0x18]          ; 004c1a28
    FABS                                ; 004c1a2c
    FMULP                               ; 004c1a2e
    FMUL double ptr [0x005c3c38]        ; 004c1a30 | DAT_005c3c38
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1a36
    FSTP float ptr [EAX + 0x2c]         ; 004c1a39
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1a3c
        ;   Label: LAB_004c1a3c
    FLD float ptr [EAX + 0x2c]          ; 004c1a3f
    FCOMP float ptr [ESP + 0x10]        ; 004c1a42
    FNSTSW AX                           ; 004c1a46
    SAHF                                ; 004c1a48
    JBE 0x004c1a61                      ; 004c1a49
        ;   XREF to: 004c1a61 (CONDITIONAL_JUMP)  ; LAB_004c1a61
    FLD float ptr [ESP + 0x18]          ; 004c1a4b
    FABS                                ; 004c1a4f
    FMUL float ptr [ESP + 0x10]         ; 004c1a51
    FMUL double ptr [0x005c3c38]        ; 004c1a55 | DAT_005c3c38
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1a5b
    FSTP float ptr [EAX + 0x2c]         ; 004c1a5e
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1a61
        ;   Label: LAB_004c1a61
    FLD float ptr [EAX + 0x2c]          ; 004c1a64
    FABS                                ; 004c1a67
    FCOMP double ptr [0x005c3c40]       ; 004c1a69 | DAT_005c3c40
    FNSTSW AX                           ; 004c1a6f
    SAHF                                ; 004c1a71
    JNC 0x004c1a7e                      ; 004c1a72
        ;   XREF to: 004c1a7e (CONDITIONAL_JUMP)  ; LAB_004c1a7e
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1a74
    MOV dword ptr [EAX + 0x2c],0x0      ; 004c1a77
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1a7e
        ;   Label: LAB_004c1a7e
    MOV EBX,dword ptr [0x01d1e348]      ; 004c1a81 | DAT_01d1e348
    MOV dword ptr [EAX],0x1             ; 004c1a87
    TEST EBX,EBX                        ; 004c1a8d
    JZ 0x004c1a98                       ; 004c1a8f
        ;   XREF to: 004c1a98 (CONDITIONAL_JUMP)  ; LAB_004c1a98
    MOV dword ptr [EAX + 0x8],0x1       ; 004c1a91
    FLD float ptr [ESP + 0x8]           ; 004c1a98
        ;   Label: LAB_004c1a98
    FMUL float ptr [0x005c3c14]         ; 004c1a9c | DAT_005c3c14
    FCOMP float ptr [ESP + 0x14]        ; 004c1aa2
    FNSTSW AX                           ; 004c1aa6
    SAHF                                ; 004c1aa8
    JBE 0x004c45b9                      ; 004c1aa9
        ;   XREF to: 004c45b9 (CONDITIONAL_JUMP)  ; LAB_004c45b9
    CMP dword ptr [0x01d1e348],0x0      ; 004c1aaf | DAT_01d1e348
    JNZ 0x004c45b9                      ; 004c1ab6
        ;   XREF to: 004c45b9 (CONDITIONAL_JUMP)  ; LAB_004c45b9
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1abc
        ;   Label: LAB_004c1abc
    MOV dword ptr [EAX],0x0             ; 004c1abf
    FLD float ptr [0x01d22c30]          ; 004c1ac5 | DAT_01d22c30
    FCOMP double ptr [0x005c3c18]       ; 004c1acb | DAT_005c3c18
    FNSTSW AX                           ; 004c1ad1
    SAHF                                ; 004c1ad3
    JNC 0x004c45e4                      ; 004c1ad4
        ;   XREF to: 004c45e4 (CONDITIONAL_JUMP)  ; LAB_004c45e4
    MOV EAX,[0x01d5ba14]                ; 004c1ada | DAT_01d5ba14
    PUSH 0x1d1e328                      ; 004c1adf | DAT_01d1e328
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c1ae4
    PUSH EDX                            ; 004c1aeb
    LEA ESI,[ESP + 0x31c]               ; 004c1aec
    LEA EDI,[ESP + 0x1b4]               ; 004c1af3
    CALL core_actor.cpp_FUN_00408bf0    ; 004c1afa
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x31c]               ; 004c1aff
    ADD ESP,0x8                         ; 004c1b06
    MOVSD ES:EDI,ESI                    ; 004c1b09
    MOVSD ES:EDI,ESI                    ; 004c1b0a
    MOVSD ES:EDI,ESI                    ; 004c1b0b
    FLD float ptr [ESP + 0x1ac]         ; 004c1b0c
    FCOMP float ptr [ESP + 0x7e8]       ; 004c1b13
    FNSTSW AX                           ; 004c1b1a
    SAHF                                ; 004c1b1c
    JBE 0x004c1b30                      ; 004c1b1d
        ;   XREF to: 004c1b30 (CONDITIONAL_JUMP)  ; LAB_004c1b30
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1b1f
    MOV dword ptr [EAX + 0x8],0x0       ; 004c1b22
    MOV dword ptr [EAX + 0x28],0x3e4ccccd ; 004c1b29
    FLD float ptr [ESP + 0x7e8]         ; 004c1b30
        ;   Label: LAB_004c1b30
    FCHS                                ; 004c1b37
    FCOMP float ptr [ESP + 0x1ac]       ; 004c1b39
    FNSTSW AX                           ; 004c1b40
    SAHF                                ; 004c1b42
    JBE 0x004c1b56                      ; 004c1b43
        ;   XREF to: 004c1b56 (CONDITIONAL_JUMP)  ; LAB_004c1b56
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1b45
    MOV dword ptr [EAX + 0x8],0x0       ; 004c1b48
    MOV dword ptr [EAX + 0x28],0xbe4ccccd ; 004c1b4f
    FLD float ptr [ESP + 0x1b4]         ; 004c1b56
        ;   Label: LAB_004c1b56
    FCOMP float ptr [ESP + 0x7e8]       ; 004c1b5d
    FNSTSW AX                           ; 004c1b64
    SAHF                                ; 004c1b66
    JBE 0x004c1b79                      ; 004c1b67
        ;   XREF to: 004c1b79 (CONDITIONAL_JUMP)  ; LAB_004c1b79
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1b69
    MOV dword ptr [EAX + 0x8],0x0       ; 004c1b6c
    MOV dword ptr [EAX],0x1             ; 004c1b73
    FLD float ptr [ESP + 0x7e8]         ; 004c1b79
        ;   Label: LAB_004c1b79
    FCHS                                ; 004c1b80
    FCOMP float ptr [ESP + 0x1b4]       ; 004c1b82
    FNSTSW AX                           ; 004c1b89
    SAHF                                ; 004c1b8b
    JBE 0x004c1b9f                      ; 004c1b8c
        ;   XREF to: 004c1b9f (CONDITIONAL_JUMP)  ; LAB_004c1b9f
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1b8e
    MOV dword ptr [EAX + 0x8],0x0       ; 004c1b91
    MOV dword ptr [EAX + 0x4],0x1       ; 004c1b98
    MOV EAX,[0x01d5ba14]                ; 004c1b9f | DAT_01d5ba14
        ;   Label: LAB_004c1b9f
    FLD float ptr [0x01d22c30]          ; 004c1ba4 | DAT_01d22c30
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c1baa
    FLD float ptr [0x01d22c34]          ; 004c1bb1 | DAT_01d22c34
    FXCH                                ; 004c1bb7
    FSUB float ptr [EAX + 0x20]         ; 004c1bb9
    FLD float ptr [0x01d22c38]          ; 004c1bbc | DAT_01d22c38
    FXCH                                ; 004c1bc2
    FSTP float ptr [ESP + 0x1c4]        ; 004c1bc4
    FXCH                                ; 004c1bcb
    FSUB float ptr [EAX + 0x24]         ; 004c1bcd
    LEA EDI,[ESP + 0x140]               ; 004c1bd0
    FSTP float ptr [ESP + 0x1c8]        ; 004c1bd7
    FSUB float ptr [EAX + 0x28]         ; 004c1bde
    LEA ESI,[ESP + 0x1c4]               ; 004c1be1
    FSTP float ptr [ESP + 0x1cc]        ; 004c1be8
    LEA EAX,[ESP + 0x140]               ; 004c1bef
    MOVSD ES:EDI,ESI                    ; 004c1bf6
    MOVSD ES:EDI,ESI                    ; 004c1bf7
    MOVSD ES:EDI,ESI                    ; 004c1bf8
    PUSH EAX                            ; 004c1bf9
    LEA ESI,[ESP + 0x168]               ; 004c1bfa
    LEA EDI,[ESP + 0x51c]               ; 004c1c01
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 004c1c08
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[ESP + 0x168]               ; 004c1c0d
    ADD ESP,0x4                         ; 004c1c14
    MOV EAX,[0x01d5ba14]                ; 004c1c17 | DAT_01d5ba14
    MOVSD ES:EDI,ESI                    ; 004c1c1c
    MOVSD ES:EDI,ESI                    ; 004c1c1d
    MOVSD ES:EDI,ESI                    ; 004c1c1e
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c1c1f
    FLD float ptr [ESP + 0x51c]         ; 004c1c26
    FSUB float ptr [EAX + 0x34]         ; 004c1c2d
    SUB ESP,0x4                         ; 004c1c30
    FSTP float ptr [ESP]                ; 004c1c33
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 004c1c36
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    MOV dword ptr [ESP + 0x844],EAX     ; 004c1c3b
    FLD float ptr [ESP + 0x844]         ; 004c1c42
    ADD ESP,0x4                         ; 004c1c49
    FST float ptr [ESP + 0x1c]          ; 004c1c4c
    FMUL float ptr [0x005c3c28]         ; 004c1c50 | DAT_005c3c28
    FMUL double ptr [0x005c3c30]        ; 004c1c56 | DAT_005c3c30
    FLD float ptr [ESP + 0x10]          ; 004c1c5c
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1c60
    FCHS                                ; 004c1c63
    FSTP float ptr [ESP + 0x28]         ; 004c1c65
    FST float ptr [EAX + 0x2c]          ; 004c1c69
    FCOMP float ptr [ESP + 0x28]        ; 004c1c6c
    FNSTSW AX                           ; 004c1c70
    SAHF                                ; 004c1c72
    JNC 0x004c1c8d                      ; 004c1c73
        ;   XREF to: 004c1c8d (CONDITIONAL_JUMP)  ; LAB_004c1c8d
    FLD float ptr [ESP + 0x28]          ; 004c1c75
    FLD float ptr [ESP + 0x1c]          ; 004c1c79
    FABS                                ; 004c1c7d
    FMULP                               ; 004c1c7f
    FMUL double ptr [0x005c3c38]        ; 004c1c81 | DAT_005c3c38
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1c87
    FSTP float ptr [EAX + 0x2c]         ; 004c1c8a
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1c8d
        ;   Label: LAB_004c1c8d
    FLD float ptr [EAX + 0x2c]          ; 004c1c90
    FCOMP float ptr [ESP + 0x10]        ; 004c1c93
    FNSTSW AX                           ; 004c1c97
    SAHF                                ; 004c1c99
    JBE 0x004c1cb2                      ; 004c1c9a
        ;   XREF to: 004c1cb2 (CONDITIONAL_JUMP)  ; LAB_004c1cb2
    FLD float ptr [ESP + 0x1c]          ; 004c1c9c
    FABS                                ; 004c1ca0
    FMUL float ptr [ESP + 0x10]         ; 004c1ca2
    FMUL double ptr [0x005c3c38]        ; 004c1ca6 | DAT_005c3c38
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1cac
    FSTP float ptr [EAX + 0x2c]         ; 004c1caf
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1cb2
        ;   Label: LAB_004c1cb2
    FLD float ptr [EAX + 0x2c]          ; 004c1cb5
    FABS                                ; 004c1cb8
    FCOMP double ptr [0x005c3c40]       ; 004c1cba | DAT_005c3c40
    FNSTSW AX                           ; 004c1cc0
    SAHF                                ; 004c1cc2
    JNC 0x004c1ce8                      ; 004c1cc3
        ;   XREF to: 004c1ce8 (CONDITIONAL_JUMP)  ; LAB_004c1ce8
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1cc5
    MOV EBX,0x7149f2ca                  ; 004c1cc8
    MOV dword ptr [EAX],0x0             ; 004c1ccd
    XOR ECX,ECX                         ; 004c1cd3
    MOV dword ptr [EAX + 0x2c],0x0      ; 004c1cd5
    MOV dword ptr [0x01d1e334],ECX      ; 004c1cdc | DAT_01d1e334
    MOV dword ptr [0x01d22c30],EBX      ; 004c1ce2 | DAT_01d22c30
    CMP dword ptr [0x01d1e320],0x0      ; 004c1ce8 | DAT_01d1e320
        ;   Label: LAB_004c1ce8
    JZ 0x004c1d19                       ; 004c1cef
        ;   XREF to: 004c1d19 (CONDITIONAL_JUMP)  ; LAB_004c1d19
    FLD float ptr [0x01d22c30]          ; 004c1cf1 | DAT_01d22c30
    FCOMP double ptr [0x005c3c18]       ; 004c1cf7 | DAT_005c3c18
    FNSTSW AX                           ; 004c1cfd
    SAHF                                ; 004c1cff
    JBE 0x004c1d19                      ; 004c1d00
        ;   XREF to: 004c1d19 (CONDITIONAL_JUMP)  ; LAB_004c1d19
    XOR EDI,EDI                         ; 004c1d02
    MOV EAX,dword ptr [ESP + 0x7b4]     ; 004c1d04
    MOV dword ptr [0x01d1e320],EDI      ; 004c1d0b | DAT_01d1e320
    TEST EAX,EAX                        ; 004c1d11
    JZ 0x004c45f0                       ; 004c1d13
        ;   XREF to: 004c45f0 (CONDITIONAL_JUMP)  ; LAB_004c45f0
    MOV EAX,[0x01d5ba14]                ; 004c1d19 | DAT_01d5ba14
        ;   Label: LAB_004c1d19
    FLD float ptr [0x01d1e338]          ; 004c1d1e | DAT_01d1e338
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c1d24
    FLD float ptr [0x01d1e33c]          ; 004c1d2b | DAT_01d1e33c
    FXCH                                ; 004c1d31
    FSUB float ptr [EAX + 0x20]         ; 004c1d33
    FLD float ptr [0x01d1e340]          ; 004c1d36 | DAT_01d1e340
    FXCH                                ; 004c1d3c
    FSTP float ptr [ESP + 0x29c]        ; 004c1d3e
    FXCH                                ; 004c1d45
    FSUB float ptr [EAX + 0x24]         ; 004c1d47
    LEA EDI,[ESP + 0x71c]               ; 004c1d4a
    FSTP float ptr [ESP + 0x2a0]        ; 004c1d51
    FSUB float ptr [EAX + 0x28]         ; 004c1d58
    LEA ESI,[ESP + 0x29c]               ; 004c1d5b
    FSTP float ptr [ESP + 0x2a4]        ; 004c1d62
    MOVSD ES:EDI,ESI                    ; 004c1d69
    MOVSD ES:EDI,ESI                    ; 004c1d6a
    MOVSD ES:EDI,ESI                    ; 004c1d6b
    FLD float ptr [ESP + 0x720]         ; 004c1d6c
    FMUL ST0                            ; 004c1d73
    FLD float ptr [ESP + 0x71c]         ; 004c1d75
    FMUL ST0                            ; 004c1d7c
    FADDP                               ; 004c1d7e
    FLD float ptr [ESP + 0x724]         ; 004c1d80
    FMUL ST0                            ; 004c1d87
    FADDP                               ; 004c1d89
    FSQRT                               ; 004c1d8b
    FSTP float ptr [ESP + 0x820]        ; 004c1d8d
    MOV EAX,dword ptr [ESP + 0x820]     ; 004c1d94
    MOV dword ptr [ESP + 0x810],EAX     ; 004c1d9b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c1da2
    FLDZ                                ; 004c1da5
    FCOMP float ptr [EAX + 0x314]       ; 004c1da7
    FNSTSW AX                           ; 004c1dad
    SAHF                                ; 004c1daf
    JNC 0x004c1dc9                      ; 004c1db0
        ;   XREF to: 004c1dc9 (CONDITIONAL_JUMP)  ; LAB_004c1dc9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c1db2
    FLD float ptr [ESP + 0x820]         ; 004c1db5
    FDIV float ptr [EAX + 0x314]        ; 004c1dbc
    FSTP float ptr [ESP + 0x810]        ; 004c1dc2
    FLD float ptr [ESP + 0x810]         ; 004c1dc9
        ;   Label: LAB_004c1dc9
    FCOMP float ptr [0x005c3c50]        ; 004c1dd0 | DAT_005c3c50
    FNSTSW AX                           ; 004c1dd6
    SAHF                                ; 004c1dd8
    JNC 0x004c461f                      ; 004c1dd9
        ;   XREF to: 004c461f (CONDITIONAL_JUMP)  ; LAB_004c461f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c1ddf
    FLD float ptr [EAX + 0x314]         ; 004c1de2
    FADD float ptr [0x01d1e344]         ; 004c1de8 | DAT_01d1e344
    FSTP float ptr [0x01d1e344]         ; 004c1dee | DAT_01d1e344
    CMP dword ptr [0x01d1e344],0x3f000000 ; 004c1df4 | DAT_01d1e344
    JL 0x004c1e27                       ; 004c1dfe
        ;   XREF to: 004c1e27 (CONDITIONAL_JUMP)  ; LAB_004c1e27
    XOR EBX,EBX                         ; 004c1e00
    MOV ESI,dword ptr [0x01d1e320]      ; 004c1e02 | DAT_01d1e320
    MOV dword ptr [0x01d1e334],EBX      ; 004c1e08 | DAT_01d1e334
    TEST ESI,ESI                        ; 004c1e0e
    JZ 0x004c1e27                       ; 004c1e10
        ;   XREF to: 004c1e27 (CONDITIONAL_JUMP)  ; LAB_004c1e27
    MOV EAX,dword ptr [ESP + 0x7b4]     ; 004c1e12
    MOV dword ptr [0x01d1e320],EBX      ; 004c1e19 | DAT_01d1e320
    TEST EAX,EAX                        ; 004c1e1f
    JZ 0x004c4610                       ; 004c1e21
        ;   XREF to: 004c4610 (CONDITIONAL_JUMP)  ; LAB_004c4610
    CMP dword ptr [0x01d1e334],0x0      ; 004c1e27 | DAT_01d1e334
        ;   Label: LAB_004c1e27
    JZ 0x004c462c                       ; 004c1e2e
        ;   XREF to: 004c462c (CONDITIONAL_JUMP)  ; LAB_004c462c
    MOV ESI,dword ptr [0x01d1e34c]      ; 004c1e34 | DAT_01d1e34c
        ;   Label: LAB_004c1e34
    TEST ESI,ESI                        ; 004c1e3a
    JZ 0x004c2072                       ; 004c1e3c
        ;   XREF to: 004c2072 (CONDITIONAL_JUMP)  ; LAB_004c2072
    MOV EAX,[0x01d5ba14]                ; 004c1e42 | DAT_01d5ba14
    MOV EDX,ESI                         ; 004c1e47
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c1e49
    FLD float ptr [EDX + 0x20]          ; 004c1e50
    FSUB float ptr [EAX + 0x20]         ; 004c1e53
    FSTP float ptr [ESP + 0x524]        ; 004c1e56
    FLD float ptr [EDX + 0x24]          ; 004c1e5d
    FSUB float ptr [EAX + 0x24]         ; 004c1e60
    LEA EDI,[ESP + 0x488]               ; 004c1e63
    FSTP float ptr [ESP + 0x528]        ; 004c1e6a
    FLD float ptr [EDX + 0x28]          ; 004c1e71
    FSUB float ptr [EAX + 0x28]         ; 004c1e74
    LEA ESI,[ESP + 0x524]               ; 004c1e77
    FSTP float ptr [ESP + 0x52c]        ; 004c1e7e
    LEA EAX,[ESP + 0x488]               ; 004c1e85
    MOVSD ES:EDI,ESI                    ; 004c1e8c
    MOVSD ES:EDI,ESI                    ; 004c1e8d
    MOVSD ES:EDI,ESI                    ; 004c1e8e
    PUSH EAX                            ; 004c1e8f
    LEA ESI,[ESP + 0x534]               ; 004c1e90
    LEA EDI,[ESP + 0x15c]               ; 004c1e97
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 004c1e9e
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[ESP + 0x534]               ; 004c1ea3
    ADD ESP,0x4                         ; 004c1eaa
    MOV EAX,[0x01d5ba14]                ; 004c1ead | DAT_01d5ba14
    MOVSD ES:EDI,ESI                    ; 004c1eb2
    MOVSD ES:EDI,ESI                    ; 004c1eb3
    MOVSD ES:EDI,ESI                    ; 004c1eb4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c1eb5
    FLD float ptr [ESP + 0x15c]         ; 004c1ebc
    FSUB float ptr [EAX + 0x34]         ; 004c1ec3
    SUB ESP,0x4                         ; 004c1ec6
    FSTP float ptr [ESP]                ; 004c1ec9
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 004c1ecc
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    MOV dword ptr [ESP + 0x844],EAX     ; 004c1ed1
    FLD float ptr [ESP + 0x844]         ; 004c1ed8
    ADD ESP,0x4                         ; 004c1edf
    FST float ptr [ESP + 0x20]          ; 004c1ee2
    FABS                                ; 004c1ee6
    FCOMP double ptr [0x005c3c58]       ; 004c1ee8 | DAT_005c3c58
    FNSTSW AX                           ; 004c1eee
    SAHF                                ; 004c1ef0
    JBE 0x004c1f08                      ; 004c1ef1
        ;   XREF to: 004c1f08 (CONDITIONAL_JUMP)  ; LAB_004c1f08
    MOV EDI,0xbf800000                  ; 004c1ef3
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1ef8
    MOV dword ptr [0x01d1e344],EDI      ; 004c1efb | DAT_01d1e344
    MOV dword ptr [EAX + 0x24],0x1      ; 004c1f01
    FLD float ptr [ESP + 0x20]          ; 004c1f08
        ;   Label: LAB_004c1f08
    FMUL float ptr [0x005c3c28]         ; 004c1f0c | DAT_005c3c28
    FMUL double ptr [0x005c3c30]        ; 004c1f12 | DAT_005c3c30
    FLD float ptr [ESP + 0x10]          ; 004c1f18
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1f1c
    FCHS                                ; 004c1f1f
    FSTP float ptr [ESP + 0x4]          ; 004c1f21
    FST float ptr [EAX + 0x2c]          ; 004c1f25
    FCOMP float ptr [ESP + 0x4]         ; 004c1f28
    FNSTSW AX                           ; 004c1f2c
    SAHF                                ; 004c1f2e
    JNC 0x004c1f49                      ; 004c1f2f
        ;   XREF to: 004c1f49 (CONDITIONAL_JUMP)  ; LAB_004c1f49
    FLD float ptr [ESP + 0x4]           ; 004c1f31
    FLD float ptr [ESP + 0x20]          ; 004c1f35
    FABS                                ; 004c1f39
    FMULP                               ; 004c1f3b
    FMUL double ptr [0x005c3c38]        ; 004c1f3d | DAT_005c3c38
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1f43
    FSTP float ptr [EAX + 0x2c]         ; 004c1f46
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1f49
        ;   Label: LAB_004c1f49
    FLD float ptr [EAX + 0x2c]          ; 004c1f4c
    FCOMP float ptr [ESP + 0x10]        ; 004c1f4f
    FNSTSW AX                           ; 004c1f53
    SAHF                                ; 004c1f55
    JBE 0x004c1f6e                      ; 004c1f56
        ;   XREF to: 004c1f6e (CONDITIONAL_JUMP)  ; LAB_004c1f6e
    FLD float ptr [ESP + 0x20]          ; 004c1f58
    FABS                                ; 004c1f5c
    FMUL float ptr [ESP + 0x10]         ; 004c1f5e
    FMUL double ptr [0x005c3c38]        ; 004c1f62 | DAT_005c3c38
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1f68
    FSTP float ptr [EAX + 0x2c]         ; 004c1f6b
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1f6e
        ;   Label: LAB_004c1f6e
    FLD float ptr [EAX + 0x2c]          ; 004c1f71
    FABS                                ; 004c1f74
    FCOMP double ptr [0x005c3c40]       ; 004c1f76 | DAT_005c3c40
    FNSTSW AX                           ; 004c1f7c
    SAHF                                ; 004c1f7e
    JNC 0x004c1f8b                      ; 004c1f7f
        ;   XREF to: 004c1f8b (CONDITIONAL_JUMP)  ; LAB_004c1f8b
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1f81
    MOV dword ptr [EAX + 0x2c],0x0      ; 004c1f84
    CMP dword ptr [0x01d1e334],0x0      ; 004c1f8b | DAT_01d1e334
        ;   Label: LAB_004c1f8b
    JZ 0x004c2051                       ; 004c1f92
        ;   XREF to: 004c2051 (CONDITIONAL_JUMP)  ; LAB_004c2051
    MOV EAX,[0x01d5ba14]                ; 004c1f98 | DAT_01d5ba14
    PUSH 0x1d1e328                      ; 004c1f9d | DAT_01d1e328
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c1fa2
    PUSH EDX                            ; 004c1fa9
    LEA ESI,[ESP + 0x67c]               ; 004c1faa
    LEA EDI,[ESP + 0x424]               ; 004c1fb1
    CALL core_actor.cpp_FUN_00408bf0    ; 004c1fb8
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x67c]               ; 004c1fbd
    ADD ESP,0x8                         ; 004c1fc4
    MOVSD ES:EDI,ESI                    ; 004c1fc7
    MOVSD ES:EDI,ESI                    ; 004c1fc8
    MOVSD ES:EDI,ESI                    ; 004c1fc9
    FLD float ptr [ESP + 0x41c]         ; 004c1fca
    FCOMP float ptr [ESP + 0x8]         ; 004c1fd1
    FNSTSW AX                           ; 004c1fd5
    SAHF                                ; 004c1fd7
    JBE 0x004c1feb                      ; 004c1fd8
        ;   XREF to: 004c1feb (CONDITIONAL_JUMP)  ; LAB_004c1feb
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1fda
    MOV dword ptr [EAX + 0x8],0x1       ; 004c1fdd
    MOV dword ptr [EAX + 0x28],0x3f800000 ; 004c1fe4
    FLD float ptr [ESP + 0x8]           ; 004c1feb
        ;   Label: LAB_004c1feb
    FCHS                                ; 004c1fef
    FCOMP float ptr [ESP + 0x41c]       ; 004c1ff1
    FNSTSW AX                           ; 004c1ff8
    SAHF                                ; 004c1ffa
    JBE 0x004c200e                      ; 004c1ffb
        ;   XREF to: 004c200e (CONDITIONAL_JUMP)  ; LAB_004c200e
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c1ffd
    MOV dword ptr [EAX + 0x8],0x1       ; 004c2000
    MOV dword ptr [EAX + 0x28],0xbf800000 ; 004c2007
    FLD float ptr [ESP + 0x424]         ; 004c200e
        ;   Label: LAB_004c200e
    FCOMP float ptr [ESP + 0x8]         ; 004c2015
    FNSTSW AX                           ; 004c2019
    SAHF                                ; 004c201b
    JBE 0x004c202e                      ; 004c201c
        ;   XREF to: 004c202e (CONDITIONAL_JUMP)  ; LAB_004c202e
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c201e
    MOV dword ptr [EAX + 0x8],0x1       ; 004c2021
    MOV dword ptr [EAX],0x1             ; 004c2028
    FLD float ptr [ESP + 0x8]           ; 004c202e
        ;   Label: LAB_004c202e
    FCHS                                ; 004c2032
    FCOMP float ptr [ESP + 0x424]       ; 004c2034
    FNSTSW AX                           ; 004c203b
    SAHF                                ; 004c203d
    JBE 0x004c2051                      ; 004c203e
        ;   XREF to: 004c2051 (CONDITIONAL_JUMP)  ; LAB_004c2051
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c2040
    MOV dword ptr [EAX + 0x8],0x1       ; 004c2043
    MOV dword ptr [EAX + 0x4],0x1       ; 004c204a
    MOV EAX,[0x01d1e34c]                ; 004c2051 | DAT_01d1e34c
        ;   Label: LAB_004c2051
    PUSH EAX                            ; 004c2056
    MOV EDX,dword ptr [EAX + 0x154]     ; 004c2057
    CALL dword ptr [EDX + 0x10c]        ; 004c205d
    ADD ESP,0x4                         ; 004c2063
    TEST EAX,EAX                        ; 004c2066
    JZ 0x004c2072                       ; 004c2068
        ;   XREF to: 004c2072 (CONDITIONAL_JUMP)  ; LAB_004c2072
    XOR ECX,ECX                         ; 004c206a
    MOV dword ptr [0x01d1e34c],ECX      ; 004c206c | DAT_01d1e34c
    MOV EAX,[0x01c5fae4]                ; 004c2072 | DAT_01c5fae4
        ;   Label: LAB_004c2072
    MOV [0x01d1e324],EAX                ; 004c2077 | DAT_01d1e324
    MOV EAX,[0x01d5ba14]                ; 004c207c | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c2081
    ADD EAX,0x20                        ; 004c2088
    CMP EAX,0x1d1e338                   ; 004c208b
    JZ 0x004c20ac                       ; 004c2090
        ;   XREF to: 004c20ac (CONDITIONAL_JUMP)  ; LAB_004c20ac
    FLD float ptr [EAX]                 ; 004c2092
    FLD float ptr [EAX + 0x8]           ; 004c2094
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c2097
    MOV dword ptr [0x01d1e33c],EDX      ; 004c209a | DAT_01d1e33c
    FSTP float ptr [0x01d1e340]         ; 004c20a0 | DAT_01d1e340
    FSTP float ptr [0x01d1e338]         ; 004c20a6 | DAT_01d1e338
    MOV EBX,dword ptr [0x00603b28]      ; 004c20ac | g_CDemonSetPtr
        ;   Label: LAB_004c20ac
    PUSH EBX                            ; 004c20b2 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 004c20b3
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004c20b8
    MOV ESP,EBP                         ; 004c20bb
    POP EBP                             ; 004c20bd
    POP EDI                             ; 004c20be
    POP ESI                             ; 004c20bf
    POP EBX                             ; 004c20c0
    RET                                 ; 004c20c1
    MOV EBX,dword ptr [0x00603b28]      ; 004c20c2 | g_CDemonSetPtr
        ;   Label: LAB_004c20c2
    MOV ECX,0x3e800000                  ; 004c20c8
    PUSH EBX                            ; 004c20cd | g_CDemonSetInstance
    MOV dword ptr [0x005fe9d4],ECX      ; 004c20ce | DAT_005fe9d4
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 004c20d4
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004c20d9
    MOV ESI,dword ptr [ESP + 0x81c]     ; 004c20dc
    PUSH ESI                            ; 004c20e3
    MOV EDI,dword ptr [ESP + 0x7e4]     ; 004c20e4
    PUSH EDI                            ; 004c20eb
    PUSH 0x2038f4c                      ; 004c20ec
    LEA ESI,[ESP + 0x65c]               ; 004c20f1
    LEA EDI,[ESP + 0x584]               ; 004c20f8
    CALL core_dcamera.cpp_FUN_00449eb0  ; 004c20ff
        ;   XREF to: 00449eb0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00449eb0()
    ADD ESP,0xc                         ; 004c2104
    LEA EAX,[ESP + 0x578]               ; 004c2107
    LEA ESI,[ESP + 0x650]               ; 004c210e
    PUSH EAX                            ; 004c2115
    MOVSD ES:EDI,ESI                    ; 004c2116
    MOVSD ES:EDI,ESI                    ; 004c2117
    MOVSD ES:EDI,ESI                    ; 004c2118
    PUSH 0x2038f4c                      ; 004c2119
    LEA ESI,[ESP + 0x208]               ; 004c211e
    LEA EDI,[ESP + 0x580]               ; 004c2125
    CALL core_dcamera.cpp_FUN_00449f80  ; 004c212c
        ;   XREF to: 00449f80 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00449f80()
    LEA ESI,[ESP + 0x208]               ; 004c2131
    ADD ESP,0x8                         ; 004c2138
    LEA EBX,[ESP + 0x47c]               ; 004c213b
    MOVSD ES:EDI,ESI                    ; 004c2142
    MOVSD ES:EDI,ESI                    ; 004c2143
    MOVSD ES:EDI,ESI                    ; 004c2144
    LEA EAX,[ESP + 0x578]               ; 004c2145
    LEA EDI,[ESP + 0x128]               ; 004c214c
    FILD dword ptr [EAX]                ; 004c2153
    FMUL float ptr [0x005e06e4]         ; 004c2155 | DAT_005e06e4
    FSTP float ptr [EBX]                ; 004c215b
    FILD dword ptr [EAX + 0x4]          ; 004c215d
    FMUL float ptr [0x005e06e4]         ; 004c2160 | DAT_005e06e4
    FSTP float ptr [EBX + 0x4]          ; 004c2166
    FILD dword ptr [EAX + 0x8]          ; 004c2169
    FMUL float ptr [0x005e06e4]         ; 004c216c | DAT_005e06e4
    FSTP float ptr [EBX + 0x8]          ; 004c2172
    MOV ESI,0x2038f50                   ; 004c2175
    MOVSD ES:EDI,ESI                    ; 004c217a | g_CDemonCameraInstance.base.position
    MOVSD ES:EDI,ESI                    ; 004c217b | g_CDemonCameraInstance.base.position+4
    MOVSD ES:EDI,ESI                    ; 004c217c | g_CDemonCameraInstance.base.position+8
    FLD float ptr [ESP + 0x47c]         ; 004c217d
    LEA EDI,[ESP + 0x2a8]               ; 004c2184
    LEA ESI,[ESP + 0x128]               ; 004c218b
    FLD float ptr [ESP + 0x480]         ; 004c2192
    MOVSD ES:EDI,ESI                    ; 004c2199
    MOVSD ES:EDI,ESI                    ; 004c219a
    MOVSD ES:EDI,ESI                    ; 004c219b
    FLD float ptr [ESP + 0x484]         ; 004c219c
    LEA EDI,[ESP + 0x3d4]               ; 004c21a3
    LEA ESI,[ESP + 0x68c]               ; 004c21aa
    FXCH ST2                            ; 004c21b1
    FSUB float ptr [ESP + 0x2a8]        ; 004c21b3
    FXCH                                ; 004c21ba
    FSUB float ptr [ESP + 0x2ac]        ; 004c21bc
    FXCH ST2                            ; 004c21c3
    FSUB float ptr [ESP + 0x2b0]        ; 004c21c5
    FXCH                                ; 004c21cc
    FSTP float ptr [ESP + 0x68c]        ; 004c21ce
    FXCH                                ; 004c21d5
    FSTP float ptr [ESP + 0x690]        ; 004c21d7
    FSTP float ptr [ESP + 0x694]        ; 004c21de
    MOVSD ES:EDI,ESI                    ; 004c21e5
    MOVSD ES:EDI,ESI                    ; 004c21e6
    MOVSD ES:EDI,ESI                    ; 004c21e7
    FLD float ptr [ESP + 0x3d8]         ; 004c21e8
    FMUL ST0                            ; 004c21ef
    FLD float ptr [ESP + 0x3d4]         ; 004c21f1
    FMUL ST0                            ; 004c21f8
    FADDP                               ; 004c21fa
    FLD float ptr [ESP + 0x3dc]         ; 004c21fc
    FMUL ST0                            ; 004c2203
    FADDP                               ; 004c2205
    FSQRT                               ; 004c2207
    FLDZ                                ; 004c2209
    FXCH                                ; 004c220b
    FSTP float ptr [ESP + 0x808]        ; 004c220d
    FCOMP float ptr [ESP + 0x808]       ; 004c2214
    FNSTSW AX                           ; 004c221b
    SAHF                                ; 004c221d
    JNC 0x004c2419                      ; 004c221e
        ;   XREF to: 004c2419 (CONDITIONAL_JUMP)  ; LAB_004c2419
    FLD1                                ; 004c2224
    FLD float ptr [ESP + 0x3d4]         ; 004c2226
    FXCH                                ; 004c222d
    FDIV float ptr [ESP + 0x808]        ; 004c222f
    FXCH                                ; 004c2236
    FMUL ST1                            ; 004c2238
    FLD float ptr [ESP + 0x3d8]         ; 004c223a
    FMUL ST2                            ; 004c2241
    FLD float ptr [ESP + 0x3dc]         ; 004c2243
    FMULP ST3                           ; 004c224a
    FXCH                                ; 004c224c
    FSTP float ptr [ESP + 0x3d4]        ; 004c224e
    FSTP float ptr [ESP + 0x3d8]        ; 004c2255
    FSTP float ptr [ESP + 0x3dc]        ; 004c225c
    FLD float ptr [0x005c3c08]          ; 004c2263 | DAT_005c3c08
        ;   Label: LAB_004c2263
    FLD float ptr [ESP + 0x3d4]         ; 004c2269
    FMUL ST1                            ; 004c2270
    FLD float ptr [ESP + 0x3d8]         ; 004c2272
    FMUL ST2                            ; 004c2279
    FLD float ptr [ESP + 0x3dc]         ; 004c227b
    FMULP ST3                           ; 004c2282
    FLD float ptr [ESP + 0x2a8]         ; 004c2284
    FLD float ptr [ESP + 0x2ac]         ; 004c228b
    FLD float ptr [ESP + 0x2b0]         ; 004c2292
    LEA EDI,[ESP + 0x620]               ; 004c2299
    LEA ESI,[ESP + 0x704]               ; 004c22a0
    LEA EAX,[ESP + 0x620]               ; 004c22a7
    LEA EDX,[ESP + 0x47c]               ; 004c22ae
    FXCH ST4                            ; 004c22b5
    FSTP float ptr [ESP + 0x3d4]        ; 004c22b7
    FXCH ST2                            ; 004c22be
    FSTP float ptr [ESP + 0x3d8]        ; 004c22c0
    FXCH ST3                            ; 004c22c7
    FSTP float ptr [ESP + 0x3dc]        ; 004c22c9
    FXCH ST2                            ; 004c22d0
    FADD float ptr [ESP + 0x3d4]        ; 004c22d2
    FXCH ST2                            ; 004c22d9
    FADD float ptr [ESP + 0x3d8]        ; 004c22db
    FXCH                                ; 004c22e2
    FADD float ptr [ESP + 0x3dc]        ; 004c22e4
    FXCH ST2                            ; 004c22eb
    FSTP float ptr [ESP + 0x704]        ; 004c22ed
    FSTP float ptr [ESP + 0x708]        ; 004c22f4
    FSTP float ptr [ESP + 0x70c]        ; 004c22fb
    MOVSD ES:EDI,ESI                    ; 004c2302
    MOVSD ES:EDI,ESI                    ; 004c2303
    MOVSD ES:EDI,ESI                    ; 004c2304
    CMP EDX,EAX                         ; 004c2305
    JNZ 0x004c2435                      ; 004c2307
        ;   XREF to: 004c2435 (CONDITIONAL_JUMP)  ; LAB_004c2435
    PUSH 0x4                            ; 004c230d
        ;   Label: LAB_004c230d
    MOV EBX,dword ptr [0x00603b28]      ; 004c230f | g_CDemonSetPtr
    PUSH EBX                            ; 004c2315 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90 ; 004c2316
        ;   XREF to: 0053ec90 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90(CDemonSet * this_ptr, int ray_type)
    MOV EAX,[0x01d5ba14]                ; 004c231b | DAT_01d5ba14
    ADD ESP,0x8                         ; 004c2320
    MOV ESI,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c2323
    PUSH ESI                            ; 004c232a
    MOV EDI,dword ptr [0x00603b28]      ; 004c232b | g_CDemonSetPtr
    PUSH EDI                            ; 004c2331 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 004c2332
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    XOR EAX,EAX                         ; 004c2337
    ADD ESP,0x8                         ; 004c2339
    MOV [0x01d22c2c],EAX                ; 004c233c | DAT_01d22c2c
    MOV dword ptr [ESP + 0x7b8],EAX     ; 004c2341
    MOV EAX,dword ptr [ESP + 0x7b8]     ; 004c2348
        ;   Label: LAB_004c2348
    LEA EBX,[EAX + 0x1]                 ; 004c234f
    MOV dword ptr [ESP + 0x7b8],EBX     ; 004c2352
    CMP EAX,0x4                         ; 004c2359
    JGE 0x004c23a6                      ; 004c235c
        ;   XREF to: 004c23a6 (CONDITIONAL_JUMP)  ; LAB_004c23a6
    LEA EAX,[ESP + 0x47c]               ; 004c235e
    PUSH EAX                            ; 004c2365
    LEA EAX,[ESP + 0x2ac]               ; 004c2366
    PUSH EAX                            ; 004c236d
    MOV ESI,dword ptr [0x00603b28]      ; 004c236e | g_CDemonSetPtr
    PUSH ESI                            ; 004c2374 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053ccc0 ; 004c2375
        ;   XREF to: 0053ccc0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053ccc0()
    MOV dword ptr [ESP + 0x84c],EAX     ; 004c237a
    FLD float ptr [ESP + 0x84c]         ; 004c2381
    ADD ESP,0xc                         ; 004c2388
    FLDZ                                ; 004c238b
    FXCH                                ; 004c238d
    FSTP float ptr [ESP + 0x828]        ; 004c238f
    FCOMP float ptr [ESP + 0x828]       ; 004c2396
    FNSTSW AX                           ; 004c239d
    SAHF                                ; 004c239f
    JBE 0x004c2464                      ; 004c23a0
        ;   XREF to: 004c2464 (CONDITIONAL_JUMP)  ; LAB_004c2464
    MOV EDI,dword ptr [0x01d22c2c]      ; 004c23a6 | DAT_01d22c2c
        ;   Label: LAB_004c23a6
    TEST EDI,EDI                        ; 004c23ac
    JZ 0x004c2838                       ; 004c23ae
        ;   XREF to: 004c2838 (CONDITIONAL_JUMP)  ; LAB_004c2838
    MOV ECX,dword ptr [0x02cfd894]      ; 004c23b4 | g_CTriggerClassInfo.name_hash
    PUSH ECX                            ; 004c23ba
    PUSH EDI                            ; 004c23bb
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c23bc
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV EDX,EAX                         ; 004c23c1
    MOV EAX,[0x01d5ba14]                ; 004c23c3 | DAT_01d5ba14
    ADD ESP,0x8                         ; 004c23c8
    SHL EAX,0x2                         ; 004c23cb
    TEST EDX,EDX                        ; 004c23ce
    JNZ 0x004c27c6                      ; 004c23d0
        ;   XREF to: 004c27c6 (CONDITIONAL_JUMP)  ; LAB_004c27c6
    MOV ECX,dword ptr [EAX + 0x1d5ba04] ; 004c23d6
    MOV EDX,dword ptr [0x01d22c2c]      ; 004c23dc | DAT_01d22c2c
    MOV dword ptr [ECX + 0x20b6c],EDX   ; 004c23e2
    MOV ECX,dword ptr [EAX + 0x1d5ba04] ; 004c23e8
    MOV dword ptr [ECX + 0x20b70],EDX   ; 004c23ee
    MOV EDX,dword ptr [EAX + 0x1d5ba04] ; 004c23f4
    MOV dword ptr [EDX + 0x20b7c],0x0   ; 004c23fa
    MOV EAX,dword ptr [EAX + 0x1d5ba04] ; 004c2404
    MOV dword ptr [EAX + 0x20b78],0x1   ; 004c240a
    JMP 0x004c0f16                      ; 004c2414
        ;   XREF to: 004c0f16 (UNCONDITIONAL_JUMP)  ; LAB_004c0f16
    XOR EAX,EAX                         ; 004c2419
        ;   Label: LAB_004c2419
    MOV dword ptr [ESP + 0x3d8],EAX     ; 004c241b
    MOV dword ptr [ESP + 0x3d4],EAX     ; 004c2422
    MOV dword ptr [ESP + 0x3dc],EAX     ; 004c2429
    JMP 0x004c2263                      ; 004c2430
        ;   XREF to: 004c2263 (UNCONDITIONAL_JUMP)  ; LAB_004c2263
    MOV EAX,dword ptr [ESP + 0x620]     ; 004c2435
        ;   Label: LAB_004c2435
    MOV dword ptr [ESP + 0x47c],EAX     ; 004c243c
    MOV EAX,dword ptr [ESP + 0x624]     ; 004c2443
    MOV dword ptr [ESP + 0x480],EAX     ; 004c244a
    MOV EAX,dword ptr [ESP + 0x628]     ; 004c2451
    MOV dword ptr [ESP + 0x484],EAX     ; 004c2458
    JMP 0x004c230d                      ; 004c245f
        ;   XREF to: 004c230d (UNCONDITIONAL_JUMP)  ; LAB_004c230d
    CMP dword ptr [ESP + 0x828],0x3f800000 ; 004c2464
        ;   Label: LAB_004c2464
    JG 0x004c23a6                       ; 004c246f
        ;   XREF to: 004c23a6 (CONDITIONAL_JUMP)  ; LAB_004c23a6
    MOV EAX,[0x01b85178]                ; 004c2475 | g_CDoorClassInfo.name_hash
    MOV EDI,dword ptr [0x00603b28]      ; 004c247a | g_CDemonSetPtr
    PUSH EAX                            ; 004c2480
    MOV EDI,dword ptr [EDI + 0x14d144]  ; 004c2481 | g_CDemonSetInstance.collision_actor
    PUSH EDI                            ; 004c2487
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c2488
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c248d
    TEST EAX,EAX                        ; 004c2490
    JZ 0x004c24c7                       ; 004c2492
        ;   XREF to: 004c24c7 (CONDITIONAL_JUMP)  ; LAB_004c24c7
    MOV EDX,dword ptr [0x01b85178]      ; 004c2494 | g_CDoorClassInfo.name_hash
    PUSH EDX                            ; 004c249a
    PUSH EDI                            ; 004c249b
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c249c
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV ECX,dword ptr [EAX + 0x2e0]     ; 004c24a1
    ADD ESP,0x8                         ; 004c24a7
    TEST ECX,ECX                        ; 004c24aa
    JNZ 0x004c24c7                      ; 004c24ac
        ;   XREF to: 004c24c7 (CONDITIONAL_JUMP)  ; LAB_004c24c7
    ADD EAX,0x2e8                       ; 004c24ae
    PUSH EAX                            ; 004c24b3
    MOV EBX,dword ptr [0x005fba60]      ; 004c24b4 | DAT_005fba60
    PUSH EBX                            ; 004c24ba
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 004c24bb
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004c24c0
    TEST EAX,EAX                        ; 004c24c3
    JZ 0x004c24f9                       ; 004c24c5
        ;   XREF to: 004c24f9 (CONDITIONAL_JUMP)  ; LAB_004c24f9
    MOV ESI,dword ptr [0x007e17b4]      ; 004c24c7 | g_CBoxActorClassInfo.name_hash
        ;   Label: LAB_004c24c7
    PUSH ESI                            ; 004c24cd
    PUSH EDI                            ; 004c24ce
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c24cf
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c24d4
    TEST EAX,EAX                        ; 004c24d7
    JNZ 0x004c251a                      ; 004c24d9
        ;   XREF to: 004c251a (CONDITIONAL_JUMP)  ; LAB_004c251a
    MOV EAX,[0x02d0c150]                ; 004c24db | g_CWeaponClassInfo.name_hash
    PUSH EAX                            ; 004c24e0
    PUSH EDI                            ; 004c24e1
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c24e2
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c24e7
    TEST EAX,EAX                        ; 004c24ea
    JZ 0x004c2559                       ; 004c24ec
        ;   XREF to: 004c2559 (CONDITIONAL_JUMP)  ; LAB_004c2559
    MOV dword ptr [0x01d22c2c],EDI      ; 004c24ee | DAT_01d22c2c
    JMP 0x004c23a6                      ; 004c24f4
        ;   XREF to: 004c23a6 (UNCONDITIONAL_JUMP)  ; LAB_004c23a6
    MOV EAX,[0x01d5ba14]                ; 004c24f9 | DAT_01d5ba14
        ;   Label: LAB_004c24f9
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c24fe
    MOV dword ptr [0x01d22c2c],EDI      ; 004c2505 | DAT_01d22c2c
    MOV dword ptr [EAX + 0x20b68],0x3   ; 004c250b
    JMP 0x004c23a6                      ; 004c2515
        ;   XREF to: 004c23a6 (UNCONDITIONAL_JUMP)  ; LAB_004c23a6
    MOV ESI,dword ptr [0x007e17b4]      ; 004c251a | g_CBoxActorClassInfo.name_hash
        ;   Label: LAB_004c251a
    PUSH ESI                            ; 004c2520
    PUSH EDI                            ; 004c2521
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c2522
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV EDX,dword ptr [EAX + 0x314]     ; 004c2527
    ADD ESP,0x8                         ; 004c252d
    TEST EDX,EDX                        ; 004c2530
    JZ 0x004c23a6                       ; 004c2532
        ;   XREF to: 004c23a6 (CONDITIONAL_JUMP)  ; LAB_004c23a6
    MOV EAX,[0x01d5ba14]                ; 004c2538 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c253d
    MOV dword ptr [0x01d22c2c],EDI      ; 004c2544 | DAT_01d22c2c
    MOV dword ptr [EAX + 0x20b68],0x4   ; 004c254a
    JMP 0x004c23a6                      ; 004c2554
        ;   XREF to: 004c23a6 (UNCONDITIONAL_JUMP)  ; LAB_004c23a6
    MOV EDX,dword ptr [0x007dfd24]      ; 004c2559 | g_CAmmoClassInfo.name_hash
        ;   Label: LAB_004c2559
    PUSH EDX                            ; 004c255f
    PUSH EDI                            ; 004c2560
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c2561
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c2566
    TEST EAX,EAX                        ; 004c2569
    JNZ 0x004c25ba                      ; 004c256b
        ;   XREF to: 004c25ba (CONDITIONAL_JUMP)  ; LAB_004c25ba
    MOV ECX,dword ptr [0x01d5b9b4]      ; 004c256d | g_CHealthItemClassInfo.name_hash
    PUSH ECX                            ; 004c2573
    PUSH EDI                            ; 004c2574
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c2575
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c257a
    TEST EAX,EAX                        ; 004c257d
    JNZ 0x004c25fb                      ; 004c257f
        ;   XREF to: 004c25fb (CONDITIONAL_JUMP)  ; LAB_004c25fb
    MOV EBX,dword ptr [0x01d70c34]      ; 004c2581 | g_CLeverClassInfo.name_hash
    PUSH EBX                            ; 004c2587
    PUSH EDI                            ; 004c2588
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c2589
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c258e
    TEST EAX,EAX                        ; 004c2591
    JZ 0x004c263d                       ; 004c2593
        ;   XREF to: 004c263d (CONDITIONAL_JUMP)  ; LAB_004c263d
    MOV EAX,[0x01d5ba14]                ; 004c2599 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c259e
    MOV dword ptr [0x01d22c2c],EDI      ; 004c25a5 | DAT_01d22c2c
    MOV dword ptr [EAX + 0x20b68],0x8   ; 004c25ab
    JMP 0x004c23a6                      ; 004c25b5
        ;   XREF to: 004c23a6 (UNCONDITIONAL_JUMP)  ; LAB_004c23a6
    MOV EAX,[0x007dfd24]                ; 004c25ba | g_CAmmoClassInfo.name_hash
        ;   Label: LAB_004c25ba
    PUSH EAX                            ; 004c25bf
    PUSH EDI                            ; 004c25c0
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c25c1
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV EDX,dword ptr [0x01d5ba14]      ; 004c25c6 | DAT_01d5ba14
    ADD ESP,0x8                         ; 004c25cc
    MOV EBX,dword ptr [EDX*0x4 + 0x1d5ba04] ; 004c25cf
    PUSH EBX                            ; 004c25d6
    MOV ECX,dword ptr [EAX + 0x154]     ; 004c25d7
    PUSH EAX                            ; 004c25dd
    CALL dword ptr [ECX + 0x84]         ; 004c25de
    ADD ESP,0x8                         ; 004c25e4
    CMP EAX,0x5                         ; 004c25e7
    JZ 0x004c23a6                       ; 004c25ea
        ;   XREF to: 004c23a6 (CONDITIONAL_JUMP)  ; LAB_004c23a6
    MOV dword ptr [0x01d22c2c],EDI      ; 004c25f0 | DAT_01d22c2c
    JMP 0x004c23a6                      ; 004c25f6
        ;   XREF to: 004c23a6 (UNCONDITIONAL_JUMP)  ; LAB_004c23a6
    MOV EBX,dword ptr [0x01d5b9b4]      ; 004c25fb | g_CHealthItemClassInfo.name_hash
        ;   Label: LAB_004c25fb
    PUSH EBX                            ; 004c2601
    PUSH EDI                            ; 004c2602
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c2603
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV ECX,dword ptr [0x01d5ba14]      ; 004c2608 | DAT_01d5ba14
    ADD ESP,0x8                         ; 004c260e
    MOV ESI,dword ptr [ECX*0x4 + 0x1d5ba04] ; 004c2611
    PUSH ESI                            ; 004c2618
    MOV EDX,dword ptr [EAX + 0x154]     ; 004c2619
    PUSH EAX                            ; 004c261f
    CALL dword ptr [EDX + 0x84]         ; 004c2620
    ADD ESP,0x8                         ; 004c2626
    CMP EAX,0x5                         ; 004c2629
    JZ 0x004c23a6                       ; 004c262c
        ;   XREF to: 004c23a6 (CONDITIONAL_JUMP)  ; LAB_004c23a6
    MOV dword ptr [0x01d22c2c],EDI      ; 004c2632 | DAT_01d22c2c
    JMP 0x004c23a6                      ; 004c2638
        ;   XREF to: 004c23a6 (UNCONDITIONAL_JUMP)  ; LAB_004c23a6
    MOV ESI,dword ptr [0x01c5bc48]      ; 004c263d | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_004c263d
    PUSH ESI                            ; 004c2643
    PUSH EDI                            ; 004c2644
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c2645
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c264a
    TEST EAX,EAX                        ; 004c264d
    JZ 0x004c267f                       ; 004c264f
        ;   XREF to: 004c267f (CONDITIONAL_JUMP)  ; LAB_004c267f
    MOV EAX,[0x01c5bc48]                ; 004c2651 | g_CEnemyClassInfo.name_hash
    PUSH EAX                            ; 004c2656
    PUSH EDI                            ; 004c2657
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c2658
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c265d
    MOV EBX,dword ptr [EAX + 0x154]     ; 004c2660
    PUSH EAX                            ; 004c2666
    CALL dword ptr [EBX + 0x10c]        ; 004c2667
    ADD ESP,0x4                         ; 004c266d
    TEST EAX,EAX                        ; 004c2670
    JNZ 0x004c267f                      ; 004c2672
        ;   XREF to: 004c267f (CONDITIONAL_JUMP)  ; LAB_004c267f
    MOV dword ptr [0x01d22c2c],EDI      ; 004c2674 | DAT_01d22c2c
    JMP 0x004c23a6                      ; 004c267a
        ;   XREF to: 004c23a6 (UNCONDITIONAL_JUMP)  ; LAB_004c23a6
    MOV EDX,dword ptr [0x01dd6a7c]      ; 004c267f | g_CNPCClassInfo.name_hash
        ;   Label: LAB_004c267f
    PUSH EDX                            ; 004c2685
    PUSH EDI                            ; 004c2686
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c2687
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c268c
    TEST EAX,EAX                        ; 004c268f
    JZ 0x004c269e                       ; 004c2691
        ;   XREF to: 004c269e (CONDITIONAL_JUMP)  ; LAB_004c269e
    MOV dword ptr [0x01d22c2c],EDI      ; 004c2693 | DAT_01d22c2c
    JMP 0x004c23a6                      ; 004c2699
        ;   XREF to: 004c23a6 (UNCONDITIONAL_JUMP)  ; LAB_004c23a6
    MOV ECX,dword ptr [0x007f8ed8]      ; 004c269e | g_CConstructClassInfo.name_hash
        ;   Label: LAB_004c269e
    PUSH ECX                            ; 004c26a4
    PUSH EDI                            ; 004c26a5
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c26a6
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c26ab
    TEST EAX,EAX                        ; 004c26ae
    JZ 0x004c2707                       ; 004c26b0
        ;   XREF to: 004c2707 (CONDITIONAL_JUMP)  ; LAB_004c2707
    MOV EBX,dword ptr [0x007f8ed8]      ; 004c26b2 | g_CConstructClassInfo.name_hash
    PUSH EBX                            ; 004c26b8
    PUSH EDI                            ; 004c26b9
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c26ba
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV ESI,dword ptr [EAX + 0xd844]    ; 004c26bf
    ADD ESP,0x8                         ; 004c26c5
    CMP ESI,0x1                         ; 004c26c8
    JNZ 0x004c2707                      ; 004c26cb
        ;   XREF to: 004c2707 (CONDITIONAL_JUMP)  ; LAB_004c2707
    MOV EDX,dword ptr [EAX + 0xd848]    ; 004c26cd
    TEST EDX,EDX                        ; 004c26d3
    JL 0x004c2707                       ; 004c26d5
        ;   XREF to: 004c2707 (CONDITIONAL_JUMP)  ; LAB_004c2707
    LEA EBX,[EDX*0x8 + 0x0]             ; 004c26d7
    ADD EBX,EDX                         ; 004c26de
    MOV EAX,dword ptr [EAX + EBX*0x8 + 0xd1c8] ; 004c26e0
    MOV [0x01d22c2c],EAX                ; 004c26e7 | DAT_01d22c2c
    MOV EAX,[0x01d5ba14]                ; 004c26ec | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c26f1
    MOV dword ptr [EAX + 0x20b68],0x4   ; 004c26f8
    JMP 0x004c23a6                      ; 004c2702
        ;   XREF to: 004c23a6 (UNCONDITIONAL_JUMP)  ; LAB_004c23a6
    MOV ECX,dword ptr [0x01d5ba70]      ; 004c2707 | g_CHeroClassInfo.name_hash
        ;   Label: LAB_004c2707
    PUSH ECX                            ; 004c270d
    PUSH EDI                            ; 004c270e
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c270f
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c2714
    TEST EAX,EAX                        ; 004c2717
    JZ 0x004c2747                       ; 004c2719
        ;   XREF to: 004c2747 (CONDITIONAL_JUMP)  ; LAB_004c2747
    MOV ESI,dword ptr [0x01d5ba70]      ; 004c271b | g_CHeroClassInfo.name_hash
    PUSH ESI                            ; 004c2721
    PUSH EDI                            ; 004c2722
    MOV EBX,dword ptr [0x01d5ba14]      ; 004c2723 | DAT_01d5ba14
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c2729
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV EDX,dword ptr [EBX*0x4 + 0x1d5ba04] ; 004c272e
    ADD ESP,0x8                         ; 004c2735
    CMP EAX,EDX                         ; 004c2738
    JZ 0x004c2747                       ; 004c273a
        ;   XREF to: 004c2747 (CONDITIONAL_JUMP)  ; LAB_004c2747
    MOV dword ptr [0x01d22c2c],EDI      ; 004c273c | DAT_01d22c2c
    JMP 0x004c23a6                      ; 004c2742
        ;   XREF to: 004c23a6 (UNCONDITIONAL_JUMP)  ; LAB_004c23a6
    CMP EDI,dword ptr [0x01d22c2c]      ; 004c2747 | DAT_01d22c2c
        ;   Label: LAB_004c2747
    JZ 0x004c278e                       ; 004c274d
        ;   XREF to: 004c278e (CONDITIONAL_JUMP)  ; LAB_004c278e
    XOR ESI,ESI                         ; 004c274f
    XOR EBX,EBX                         ; 004c2751
    MOV EAX,[0x00603b28]                ; 004c2753 | g_CDemonSetPtr
        ;   Label: LAB_004c2753
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 004c2758 | g_CDemonSetInstance.actor_count
    JGE 0x004c278e                      ; 004c275e
        ;   XREF to: 004c278e (CONDITIONAL_JUMP)  ; LAB_004c278e
    MOV EDX,dword ptr [0x02cfd894]      ; 004c2760 | g_CTriggerClassInfo.name_hash
    PUSH EDX                            ; 004c2766
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 004c2767 | g_CDemonSetInstance.actors[0]
    PUSH EAX                            ; 004c276e
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c276f
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c2774
    TEST EAX,EAX                        ; 004c2777
    JNZ 0x004c2781                      ; 004c2779
        ;   XREF to: 004c2781 (CONDITIONAL_JUMP)  ; LAB_004c2781
    INC EBX                             ; 004c277b
        ;   Label: LAB_004c277b
    ADD ESI,0x4                         ; 004c277c
    JMP 0x004c2753                      ; 004c277f
        ;   XREF to: 004c2753 (UNCONDITIONAL_JUMP)  ; LAB_004c2753
    CMP EDI,dword ptr [EAX + 0x2fc]     ; 004c2781
        ;   Label: LAB_004c2781
    JNZ 0x004c277b                      ; 004c2787
        ;   XREF to: 004c277b (CONDITIONAL_JUMP)  ; LAB_004c277b
    MOV [0x01d22c2c],EAX                ; 004c2789 | DAT_01d22c2c
    PUSH EDI                            ; 004c278e
        ;   Label: LAB_004c278e
    MOV EBX,dword ptr [0x00603b28]      ; 004c278f | g_CDemonSetPtr
    PUSH EBX                            ; 004c2795 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 004c2796
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004c279b
    FLDZ                                ; 004c279e
    FCOMP float ptr [ESP + 0x828]       ; 004c27a0
    FNSTSW AX                           ; 004c27a7
    SAHF                                ; 004c27a9
    JA 0x004c23a6                       ; 004c27aa
        ;   XREF to: 004c23a6 (CONDITIONAL_JUMP)  ; LAB_004c23a6
    CMP dword ptr [ESP + 0x828],0x3f800000 ; 004c27b0
    JLE 0x004c2348                      ; 004c27bb
        ;   XREF to: 004c2348 (CONDITIONAL_JUMP)  ; LAB_004c2348
    JMP 0x004c23a6                      ; 004c27c1
        ;   XREF to: 004c23a6 (UNCONDITIONAL_JUMP)  ; LAB_004c23a6
    MOV EDX,dword ptr [EAX + 0x1d5ba04] ; 004c27c6
        ;   Label: LAB_004c27c6
    MOV ESI,dword ptr [0x02cfd894]      ; 004c27cc | g_CTriggerClassInfo.name_hash
    MOV dword ptr [EDX + 0x20b68],0x1   ; 004c27d2
    PUSH ESI                            ; 004c27dc
    MOV EDX,dword ptr [EAX + 0x1d5ba04] ; 004c27dd
    MOV EAX,[0x01d22c2c]                ; 004c27e3 | DAT_01d22c2c
    PUSH EAX                            ; 004c27e8
    MOV dword ptr [EDX + 0x20b6c],EAX   ; 004c27e9
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c27ef
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV EDX,EAX                         ; 004c27f4
    MOV EAX,[0x01d5ba14]                ; 004c27f6 | DAT_01d5ba14
    MOV ECX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c27fb
    MOV EDX,dword ptr [EDX + 0x2fc]     ; 004c2802
    MOV dword ptr [ECX + 0x20b70],EDX   ; 004c2808
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c280e
    MOV dword ptr [EDX + 0x20b7c],0x0   ; 004c2815
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c281f
    ADD ESP,0x8                         ; 004c2826
    MOV dword ptr [EAX + 0x20b78],0x1   ; 004c2829
    JMP 0x004c0f16                      ; 004c2833
        ;   XREF to: 004c0f16 (UNCONDITIONAL_JUMP)  ; LAB_004c0f16
    MOV EAX,[0x01d5ba14]                ; 004c2838 | DAT_01d5ba14
        ;   Label: LAB_004c2838
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c283d
    PUSH EDX                            ; 004c2844
    CALL core_hero.cpp_FUN_004d3210     ; 004c2845
        ;   XREF to: 004d3210 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d3210()
    ADD ESP,0x4                         ; 004c284a
    JMP 0x004c0f16                      ; 004c284d
        ;   XREF to: 004c0f16 (UNCONDITIONAL_JUMP)  ; LAB_004c0f16
    MOV EAX,dword ptr [ESP + 0x7d8]     ; 004c2852
        ;   Label: LAB_004c2852
    MOV EDX,dword ptr [ESP + 0x7e0]     ; 004c2859
    SUB EAX,0x20                        ; 004c2860
    CMP EAX,EDX                         ; 004c2863
    JGE 0x004c2876                      ; 004c2865
        ;   XREF to: 004c2876 (CONDITIONAL_JUMP)  ; LAB_004c2876
    MOV dword ptr [0x01d22b48],0x4      ; 004c2867 | DAT_01d22b48
    JMP 0x004c0f2e                      ; 004c2871
        ;   XREF to: 004c0f2e (UNCONDITIONAL_JUMP)  ; LAB_004c0f2e
    MOV ECX,dword ptr [ESP + 0x81c]     ; 004c2876
        ;   Label: LAB_004c2876
    CMP ECX,0x20                        ; 004c287d
    JGE 0x004c2891                      ; 004c2880
        ;   XREF to: 004c2891 (CONDITIONAL_JUMP)  ; LAB_004c2891
    MOV dword ptr [0x01d22b48],0x1      ; 004c2882 | DAT_01d22b48
    JMP 0x004c0f2e                      ; 004c288c
        ;   XREF to: 004c0f2e (UNCONDITIONAL_JUMP)  ; LAB_004c0f2e
    MOV EAX,dword ptr [ESP + 0x7bc]     ; 004c2891
        ;   Label: LAB_004c2891
    SUB EAX,0x20                        ; 004c2898
    CMP EAX,ECX                         ; 004c289b
    JGE 0x004c28ae                      ; 004c289d
        ;   XREF to: 004c28ae (CONDITIONAL_JUMP)  ; LAB_004c28ae
    MOV dword ptr [0x01d22b48],0x2      ; 004c289f | DAT_01d22b48
    JMP 0x004c0f2e                      ; 004c28a9
        ;   XREF to: 004c0f2e (UNCONDITIONAL_JUMP)  ; LAB_004c0f2e
    MOV ESI,dword ptr [0x01d22c2c]      ; 004c28ae | DAT_01d22c2c
        ;   Label: LAB_004c28ae
    TEST ESI,ESI                        ; 004c28b4
    JNZ 0x004c28d0                      ; 004c28b6
        ;   XREF to: 004c28d0 (CONDITIONAL_JUMP)  ; LAB_004c28d0
    CMP dword ptr [0x01d1e34c],0x0      ; 004c28b8 | DAT_01d1e34c
    JZ 0x004c2900                       ; 004c28bf
        ;   XREF to: 004c2900 (CONDITIONAL_JUMP)  ; LAB_004c2900
    MOV dword ptr [0x01d22b48],0x7      ; 004c28c1 | DAT_01d22b48
    JMP 0x004c0f2e                      ; 004c28cb
        ;   XREF to: 004c0f2e (UNCONDITIONAL_JUMP)  ; LAB_004c0f2e
    PUSH 0x5c3be0                       ; 004c28d0 | s_BCEnemy_005c3bdf+1
        ;   Label: LAB_004c28d0
    PUSH ESI                            ; 004c28d5
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004c28d6
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004c28db
    TEST EAX,EAX                        ; 004c28de
    JZ 0x004c28f1                       ; 004c28e0
        ;   XREF to: 004c28f1 (CONDITIONAL_JUMP)  ; LAB_004c28f1
    MOV dword ptr [0x01d22b48],0x6      ; 004c28e2 | DAT_01d22b48
    JMP 0x004c0f2e                      ; 004c28ec
        ;   XREF to: 004c0f2e (UNCONDITIONAL_JUMP)  ; LAB_004c0f2e
    MOV dword ptr [0x01d22b48],0x5      ; 004c28f1 | DAT_01d22b48
        ;   Label: LAB_004c28f1
    JMP 0x004c0f2e                      ; 004c28fb
        ;   XREF to: 004c0f2e (UNCONDITIONAL_JUMP)  ; LAB_004c0f2e
    MOV dword ptr [0x01d22b48],ESI      ; 004c2900 | DAT_01d22b48
        ;   Label: LAB_004c2900
    JMP 0x004c0f2e                      ; 004c2906
        ;   XREF to: 004c0f2e (UNCONDITIONAL_JUMP)  ; LAB_004c0f2e
    TEST byte ptr [0x01c5fae4],0x2      ; 004c290b | DAT_01c5fae4
        ;   Label: LAB_004c290b
    JNZ 0x004c0f52                      ; 004c2912
        ;   XREF to: 004c0f52 (CONDITIONAL_JUMP)  ; LAB_004c0f52
    JMP 0x004c1237                      ; 004c2918
        ;   XREF to: 004c1237 (UNCONDITIONAL_JUMP)  ; LAB_004c1237
    XOR EBX,EBX                         ; 004c291d
        ;   Label: LAB_004c291d
    MOV dword ptr [ESP + 0x5a0],EBX     ; 004c291f
    MOV dword ptr [ESP + 0x59c],EBX     ; 004c2926
    MOV dword ptr [ESP + 0x5a4],EBX     ; 004c292d
    JMP 0x004c10e7                      ; 004c2934
        ;   XREF to: 004c10e7 (UNCONDITIONAL_JUMP)  ; LAB_004c10e7
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 004c2939
        ;   Label: LAB_004c2939
    MOV dword ptr [ESP + 0x5c0],EAX     ; 004c2940
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 004c2947
    MOV dword ptr [ESP + 0x5c4],EAX     ; 004c294e
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 004c2955
    MOV dword ptr [ESP + 0x5c8],EAX     ; 004c295c
    JMP 0x004c1191                      ; 004c2963
        ;   XREF to: 004c1191 (UNCONDITIONAL_JUMP)  ; LAB_004c1191
    CMP dword ptr [ESP + 0x82c],0x3f800000 ; 004c2968
        ;   Label: LAB_004c2968
    JG 0x004c122b                       ; 004c2973
        ;   XREF to: 004c122b (CONDITIONAL_JUMP)  ; LAB_004c122b
    MOV ECX,dword ptr [0x01b85178]      ; 004c2979 | g_CDoorClassInfo.name_hash
    MOV EDI,dword ptr [0x00603b28]      ; 004c297f | g_CDemonSetPtr
    PUSH ECX                            ; 004c2985
    MOV EDI,dword ptr [EDI + 0x14d144]  ; 004c2986 | g_CDemonSetInstance.collision_actor
    PUSH EDI                            ; 004c298c
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c298d
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c2992
    TEST EAX,EAX                        ; 004c2995
    JZ 0x004c29cb                       ; 004c2997
        ;   XREF to: 004c29cb (CONDITIONAL_JUMP)  ; LAB_004c29cb
    MOV EBX,dword ptr [0x01b85178]      ; 004c2999 | g_CDoorClassInfo.name_hash
    PUSH EBX                            ; 004c299f
    PUSH EDI                            ; 004c29a0
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c29a1
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV ESI,dword ptr [EAX + 0x2e0]     ; 004c29a6
    ADD ESP,0x8                         ; 004c29ac
    TEST ESI,ESI                        ; 004c29af
    JNZ 0x004c29cb                      ; 004c29b1
        ;   XREF to: 004c29cb (CONDITIONAL_JUMP)  ; LAB_004c29cb
    ADD EAX,0x2e8                       ; 004c29b3
    PUSH EAX                            ; 004c29b8
    MOV EAX,[0x005fba60]                ; 004c29b9 | DAT_005fba60
    PUSH EAX                            ; 004c29be
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 004c29bf
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004c29c4
    TEST EAX,EAX                        ; 004c29c7
    JZ 0x004c29ff                       ; 004c29c9
        ;   XREF to: 004c29ff (CONDITIONAL_JUMP)  ; LAB_004c29ff
    MOV ECX,dword ptr [0x007e17b4]      ; 004c29cb | g_CBoxActorClassInfo.name_hash
        ;   Label: LAB_004c29cb
    PUSH ECX                            ; 004c29d1
    PUSH EDI                            ; 004c29d2
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c29d3
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c29d8
    TEST EAX,EAX                        ; 004c29db
    JNZ 0x004c2a16                      ; 004c29dd
        ;   XREF to: 004c2a16 (CONDITIONAL_JUMP)  ; LAB_004c2a16
    MOV EBX,dword ptr [0x02d0c150]      ; 004c29df | g_CWeaponClassInfo.name_hash
    PUSH EBX                            ; 004c29e5
    PUSH EDI                            ; 004c29e6
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c29e7
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c29ec
    TEST EAX,EAX                        ; 004c29ef
    JZ 0x004c2a4b                       ; 004c29f1
        ;   XREF to: 004c2a4b (CONDITIONAL_JUMP)  ; LAB_004c2a4b
    MOV dword ptr [ESP + 0x7f4],EDI     ; 004c29f3
    JMP 0x004c122b                      ; 004c29fa
        ;   XREF to: 004c122b (UNCONDITIONAL_JUMP)  ; LAB_004c122b
    MOV EDX,0x3                         ; 004c29ff
        ;   Label: LAB_004c29ff
    MOV dword ptr [ESP + 0x7f4],EDI     ; 004c2a04
    MOV dword ptr [0x01d1e354],EDX      ; 004c2a0b | DAT_01d1e354
    JMP 0x004c122b                      ; 004c2a11
        ;   XREF to: 004c122b (UNCONDITIONAL_JUMP)  ; LAB_004c122b
    MOV ESI,dword ptr [0x007e17b4]      ; 004c2a16 | g_CBoxActorClassInfo.name_hash
        ;   Label: LAB_004c2a16
    PUSH ESI                            ; 004c2a1c
    PUSH EDI                            ; 004c2a1d
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c2a1e
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV EDX,dword ptr [EAX + 0x314]     ; 004c2a23
    ADD ESP,0x8                         ; 004c2a29
    TEST EDX,EDX                        ; 004c2a2c
    JZ 0x004c122b                       ; 004c2a2e
        ;   XREF to: 004c122b (CONDITIONAL_JUMP)  ; LAB_004c122b
    MOV ECX,0x4                         ; 004c2a34
    MOV dword ptr [ESP + 0x7f4],EDI     ; 004c2a39
    MOV dword ptr [0x01d1e354],ECX      ; 004c2a40 | DAT_01d1e354
    JMP 0x004c122b                      ; 004c2a46
        ;   XREF to: 004c122b (UNCONDITIONAL_JUMP)  ; LAB_004c122b
    MOV ESI,dword ptr [0x007dfd24]      ; 004c2a4b | g_CAmmoClassInfo.name_hash
        ;   Label: LAB_004c2a4b
    PUSH ESI                            ; 004c2a51
    PUSH EDI                            ; 004c2a52
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c2a53
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c2a58
    TEST EAX,EAX                        ; 004c2a5b
    JNZ 0x004c2aa0                      ; 004c2a5d
        ;   XREF to: 004c2aa0 (CONDITIONAL_JUMP)  ; LAB_004c2aa0
    MOV EAX,[0x01d5b9b4]                ; 004c2a5f | g_CHealthItemClassInfo.name_hash
    PUSH EAX                            ; 004c2a64
    PUSH EDI                            ; 004c2a65
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c2a66
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c2a6b
    TEST EAX,EAX                        ; 004c2a6e
    JNZ 0x004c2ae3                      ; 004c2a70
        ;   XREF to: 004c2ae3 (CONDITIONAL_JUMP)  ; LAB_004c2ae3
    MOV EDX,dword ptr [0x01d70c34]      ; 004c2a72 | g_CLeverClassInfo.name_hash
    PUSH EDX                            ; 004c2a78
    PUSH EDI                            ; 004c2a79
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c2a7a
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c2a7f
    TEST EAX,EAX                        ; 004c2a82
    JZ 0x004c2b26                       ; 004c2a84
        ;   XREF to: 004c2b26 (CONDITIONAL_JUMP)  ; LAB_004c2b26
    MOV EAX,0x8                         ; 004c2a8a
    MOV dword ptr [ESP + 0x7f4],EDI     ; 004c2a8f
    MOV [0x01d1e354],EAX                ; 004c2a96 | DAT_01d1e354
    JMP 0x004c122b                      ; 004c2a9b
        ;   XREF to: 004c122b (UNCONDITIONAL_JUMP)  ; LAB_004c122b
    MOV ESI,dword ptr [0x007dfd24]      ; 004c2aa0 | g_CAmmoClassInfo.name_hash
        ;   Label: LAB_004c2aa0
    PUSH ESI                            ; 004c2aa6
    PUSH EDI                            ; 004c2aa7
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c2aa8
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV ECX,dword ptr [0x01d5ba14]      ; 004c2aad | DAT_01d5ba14
    ADD ESP,0x8                         ; 004c2ab3
    MOV EBX,dword ptr [ECX*0x4 + 0x1d5ba04] ; 004c2ab6
    PUSH EBX                            ; 004c2abd
    MOV EDX,dword ptr [EAX + 0x154]     ; 004c2abe
    PUSH EAX                            ; 004c2ac4
    CALL dword ptr [EDX + 0x84]         ; 004c2ac5
    ADD ESP,0x8                         ; 004c2acb
    CMP EAX,0x5                         ; 004c2ace
    JZ 0x004c122b                       ; 004c2ad1
        ;   XREF to: 004c122b (CONDITIONAL_JUMP)  ; LAB_004c122b
    MOV dword ptr [ESP + 0x7f4],EDI     ; 004c2ad7
    JMP 0x004c122b                      ; 004c2ade
        ;   XREF to: 004c122b (UNCONDITIONAL_JUMP)  ; LAB_004c122b
    MOV EDX,dword ptr [0x01d5b9b4]      ; 004c2ae3 | g_CHealthItemClassInfo.name_hash
        ;   Label: LAB_004c2ae3
    PUSH EDX                            ; 004c2ae9
    PUSH EDI                            ; 004c2aea
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c2aeb
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV EDX,dword ptr [0x01d5ba14]      ; 004c2af0 | DAT_01d5ba14
    ADD ESP,0x8                         ; 004c2af6
    MOV EBX,dword ptr [EDX*0x4 + 0x1d5ba04] ; 004c2af9
    PUSH EBX                            ; 004c2b00
    MOV ECX,dword ptr [EAX + 0x154]     ; 004c2b01
    PUSH EAX                            ; 004c2b07
    CALL dword ptr [ECX + 0x84]         ; 004c2b08
    ADD ESP,0x8                         ; 004c2b0e
    CMP EAX,0x5                         ; 004c2b11
    JZ 0x004c122b                       ; 004c2b14
        ;   XREF to: 004c122b (CONDITIONAL_JUMP)  ; LAB_004c122b
    MOV dword ptr [ESP + 0x7f4],EDI     ; 004c2b1a
    JMP 0x004c122b                      ; 004c2b21
        ;   XREF to: 004c122b (UNCONDITIONAL_JUMP)  ; LAB_004c122b
    MOV ECX,dword ptr [0x01dd6a7c]      ; 004c2b26 | g_CNPCClassInfo.name_hash
        ;   Label: LAB_004c2b26
    PUSH ECX                            ; 004c2b2c
    PUSH EDI                            ; 004c2b2d
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c2b2e
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c2b33
    TEST EAX,EAX                        ; 004c2b36
    JZ 0x004c2b46                       ; 004c2b38
        ;   XREF to: 004c2b46 (CONDITIONAL_JUMP)  ; LAB_004c2b46
    MOV dword ptr [ESP + 0x7f4],EDI     ; 004c2b3a
    JMP 0x004c122b                      ; 004c2b41
        ;   XREF to: 004c122b (UNCONDITIONAL_JUMP)  ; LAB_004c122b
    MOV EBX,dword ptr [0x01d5ba70]      ; 004c2b46 | g_CHeroClassInfo.name_hash
        ;   Label: LAB_004c2b46
    PUSH EBX                            ; 004c2b4c
    PUSH EDI                            ; 004c2b4d
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c2b4e
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c2b53
    TEST EAX,EAX                        ; 004c2b56
    JZ 0x004c2b66                       ; 004c2b58
        ;   XREF to: 004c2b66 (CONDITIONAL_JUMP)  ; LAB_004c2b66
    MOV dword ptr [ESP + 0x7f4],EDI     ; 004c2b5a
    JMP 0x004c122b                      ; 004c2b61
        ;   XREF to: 004c122b (UNCONDITIONAL_JUMP)  ; LAB_004c122b
    MOV ESI,dword ptr [0x007f8ed8]      ; 004c2b66 | g_CConstructClassInfo.name_hash
        ;   Label: LAB_004c2b66
    PUSH ESI                            ; 004c2b6c
    PUSH EDI                            ; 004c2b6d
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c2b6e
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c2b73
    TEST EAX,EAX                        ; 004c2b76
    JZ 0x004c2bc5                       ; 004c2b78
        ;   XREF to: 004c2bc5 (CONDITIONAL_JUMP)  ; LAB_004c2bc5
    MOV EAX,[0x007f8ed8]                ; 004c2b7a | g_CConstructClassInfo.name_hash
    PUSH EAX                            ; 004c2b7f
    PUSH EDI                            ; 004c2b80
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c2b81
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV EDX,dword ptr [EAX + 0xd844]    ; 004c2b86
    ADD ESP,0x8                         ; 004c2b8c
    CMP EDX,0x1                         ; 004c2b8f
    JNZ 0x004c2bc5                      ; 004c2b92
        ;   XREF to: 004c2bc5 (CONDITIONAL_JUMP)  ; LAB_004c2bc5
    MOV ECX,dword ptr [EAX + 0xd848]    ; 004c2b94
    TEST ECX,ECX                        ; 004c2b9a
    JL 0x004c2bc5                       ; 004c2b9c
        ;   XREF to: 004c2bc5 (CONDITIONAL_JUMP)  ; LAB_004c2bc5
    LEA EBX,[ECX*0x8 + 0x0]             ; 004c2b9e
    ADD EBX,ECX                         ; 004c2ba5
    MOV EAX,dword ptr [EAX + EBX*0x8 + 0xd1c8] ; 004c2ba7
    MOV EDI,0x4                         ; 004c2bae
    MOV dword ptr [ESP + 0x7f4],EAX     ; 004c2bb3
    MOV dword ptr [0x01d1e354],EDI      ; 004c2bba | DAT_01d1e354
    JMP 0x004c122b                      ; 004c2bc0
        ;   XREF to: 004c122b (UNCONDITIONAL_JUMP)  ; LAB_004c122b
    MOV EBX,dword ptr [0x02cfd894]      ; 004c2bc5 | g_CTriggerClassInfo.name_hash
        ;   Label: LAB_004c2bc5
    PUSH EBX                            ; 004c2bcb
    PUSH EDI                            ; 004c2bcc
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c2bcd
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c2bd2
    TEST EAX,EAX                        ; 004c2bd5
    JZ 0x004c2be5                       ; 004c2bd7
        ;   XREF to: 004c2be5 (CONDITIONAL_JUMP)  ; LAB_004c2be5
    MOV dword ptr [ESP + 0x7f4],EDI     ; 004c2bd9
    JMP 0x004c122b                      ; 004c2be0
        ;   XREF to: 004c122b (UNCONDITIONAL_JUMP)  ; LAB_004c122b
    CMP EDI,dword ptr [ESP + 0x7f4]     ; 004c2be5
        ;   Label: LAB_004c2be5
    JZ 0x004c2c3a                       ; 004c2bec
        ;   XREF to: 004c2c3a (CONDITIONAL_JUMP)  ; LAB_004c2c3a
    XOR EBX,EBX                         ; 004c2bee
    XOR ESI,ESI                         ; 004c2bf0
    MOV EAX,[0x00603b28]                ; 004c2bf2 | g_CDemonSetPtr
        ;   Label: LAB_004c2bf2
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 004c2bf7 | g_CDemonSetInstance.actor_count
    JGE 0x004c2c3a                      ; 004c2bfd
        ;   XREF to: 004c2c3a (CONDITIONAL_JUMP)  ; LAB_004c2c3a
    MOV ECX,dword ptr [0x02cfd894]      ; 004c2bff | g_CTriggerClassInfo.name_hash
    PUSH ECX                            ; 004c2c05
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x14d168] ; 004c2c06 | g_CDemonSetInstance.actors[0]
    PUSH EAX                            ; 004c2c0d
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c2c0e
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c2c13
    TEST EAX,EAX                        ; 004c2c16
    JNZ 0x004c2c20                      ; 004c2c18
        ;   XREF to: 004c2c20 (CONDITIONAL_JUMP)  ; LAB_004c2c20
    INC ESI                             ; 004c2c1a
        ;   Label: LAB_004c2c1a
    ADD EBX,0x4                         ; 004c2c1b
    JMP 0x004c2bf2                      ; 004c2c1e
        ;   XREF to: 004c2bf2 (UNCONDITIONAL_JUMP)  ; LAB_004c2bf2
    CMP EDI,dword ptr [EAX + 0x2fc]     ; 004c2c20
        ;   Label: LAB_004c2c20
    JNZ 0x004c2c1a                      ; 004c2c26
        ;   XREF to: 004c2c1a (CONDITIONAL_JUMP)  ; LAB_004c2c1a
    MOV ECX,0x1                         ; 004c2c28
    MOV dword ptr [ESP + 0x7f4],EAX     ; 004c2c2d
    MOV dword ptr [0x01d1e354],ECX      ; 004c2c34 | DAT_01d1e354
    PUSH EDI                            ; 004c2c3a
        ;   Label: LAB_004c2c3a
    MOV EBX,dword ptr [0x00603b28]      ; 004c2c3b | g_CDemonSetPtr
    PUSH EBX                            ; 004c2c41 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 004c2c42
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004c2c47
    FLDZ                                ; 004c2c4a
    FCOMP float ptr [ESP + 0x82c]       ; 004c2c4c
    FNSTSW AX                           ; 004c2c53
    SAHF                                ; 004c2c55
    JA 0x004c122b                       ; 004c2c56
        ;   XREF to: 004c122b (CONDITIONAL_JUMP)  ; LAB_004c122b
    CMP dword ptr [ESP + 0x82c],0x3f800000 ; 004c2c5c
    JLE 0x004c11ce                      ; 004c2c67
        ;   XREF to: 004c11ce (CONDITIONAL_JUMP)  ; LAB_004c11ce
    JMP 0x004c122b                      ; 004c2c6d
        ;   XREF to: 004c122b (UNCONDITIONAL_JUMP)  ; LAB_004c122b
    TEST byte ptr [0x01c5fae4],0x2      ; 004c2c72 | DAT_01c5fae4
        ;   Label: LAB_004c2c72
    JZ 0x004c1245                       ; 004c2c79
        ;   XREF to: 004c1245 (CONDITIONAL_JUMP)  ; LAB_004c1245
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c2c7f
    MOV dword ptr [EAX + 0xc],0x1       ; 004c2c82
    JMP 0x004c1245                      ; 004c2c89
        ;   XREF to: 004c1245 (UNCONDITIONAL_JUMP)  ; LAB_004c1245
    PUSH 0x5c3be7                       ; 004c2c8e | = "CStorm"
        ;   Label: LAB_004c2c8e
    PUSH EDX                            ; 004c2c93
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004c2c94
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004c2c99
    TEST EAX,EAX                        ; 004c2c9c
    JNZ 0x004c126b                      ; 004c2c9e
        ;   XREF to: 004c126b (CONDITIONAL_JUMP)  ; LAB_004c126b
    PUSH 0x5c3bee                       ; 004c2ca4 | = "CHeal"
    PUSH EBX                            ; 004c2ca9
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004c2caa
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004c2caf
    TEST EAX,EAX                        ; 004c2cb2
    JNZ 0x004c126b                      ; 004c2cb4
        ;   XREF to: 004c126b (CONDITIONAL_JUMP)  ; LAB_004c126b
    PUSH 0x5c3bf4                       ; 004c2cba | = "CFireStaff"
    PUSH EBX                            ; 004c2cbf
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004c2cc0
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004c2cc5
    TEST EAX,EAX                        ; 004c2cc8
    JNZ 0x004c126b                      ; 004c2cca
        ;   XREF to: 004c126b (CONDITIONAL_JUMP)  ; LAB_004c126b
    JMP 0x004c1284                      ; 004c2cd0
        ;   XREF to: 004c1284 (UNCONDITIONAL_JUMP)  ; LAB_004c1284
    XOR EAX,EAX                         ; 004c2cd5
        ;   Label: LAB_004c2cd5
    MOV dword ptr [ESP + 0x600],EAX     ; 004c2cd7
    MOV dword ptr [ESP + 0x5fc],EAX     ; 004c2cde
    MOV dword ptr [ESP + 0x604],EAX     ; 004c2ce5
    JMP 0x004c145f                      ; 004c2cec
        ;   XREF to: 004c145f (UNCONDITIONAL_JUMP)  ; LAB_004c145f
    MOV EAX,[0x00603b28]                ; 004c2cf1 | g_CDemonSetPtr
        ;   Label: LAB_004c2cf1
    PUSH EAX                            ; 004c2cf6 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 004c2cf7
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004c2cfc
    MOV EDX,dword ptr [ESP + 0x81c]     ; 004c2cff
    PUSH EDX                            ; 004c2d06
    MOV ECX,dword ptr [ESP + 0x7e4]     ; 004c2d07
    PUSH ECX                            ; 004c2d0e
    PUSH 0x2038f4c                      ; 004c2d0f
    LEA ESI,[ESP + 0x500]               ; 004c2d14
    LEA EDI,[ESP + 0x668]               ; 004c2d1b
    CALL core_dcamera.cpp_FUN_00449eb0  ; 004c2d22
        ;   XREF to: 00449eb0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00449eb0()
    ADD ESP,0xc                         ; 004c2d27
    LEA EAX,[ESP + 0x65c]               ; 004c2d2a
    LEA ESI,[ESP + 0x4f4]               ; 004c2d31
    PUSH EAX                            ; 004c2d38
    MOVSD ES:EDI,ESI                    ; 004c2d39
    MOVSD ES:EDI,ESI                    ; 004c2d3a
    MOVSD ES:EDI,ESI                    ; 004c2d3b
    PUSH 0x2038f4c                      ; 004c2d3c
    LEA ESI,[ESP + 0x6a0]               ; 004c2d41
    LEA EDI,[ESP + 0x664]               ; 004c2d48
    CALL core_dcamera.cpp_FUN_00449f80  ; 004c2d4f
        ;   XREF to: 00449f80 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00449f80()
    LEA ESI,[ESP + 0x6a0]               ; 004c2d54
    ADD ESP,0x8                         ; 004c2d5b
    LEA EBX,[ESP + 0x440]               ; 004c2d5e
    MOVSD ES:EDI,ESI                    ; 004c2d65
    MOVSD ES:EDI,ESI                    ; 004c2d66
    MOVSD ES:EDI,ESI                    ; 004c2d67
    LEA EAX,[ESP + 0x65c]               ; 004c2d68
    LEA EDI,[ESP + 0x62c]               ; 004c2d6f
    FILD dword ptr [EAX]                ; 004c2d76
    FMUL float ptr [0x005e06e4]         ; 004c2d78 | DAT_005e06e4
    FSTP float ptr [EBX]                ; 004c2d7e
    FILD dword ptr [EAX + 0x4]          ; 004c2d80
    FMUL float ptr [0x005e06e4]         ; 004c2d83 | DAT_005e06e4
    FSTP float ptr [EBX + 0x4]          ; 004c2d89
    FILD dword ptr [EAX + 0x8]          ; 004c2d8c
    FMUL float ptr [0x005e06e4]         ; 004c2d8f | DAT_005e06e4
    FSTP float ptr [EBX + 0x8]          ; 004c2d95
    MOV ESI,0x2038f50                   ; 004c2d98
    MOVSD ES:EDI,ESI                    ; 004c2d9d | g_CDemonCameraInstance.base.position
    MOVSD ES:EDI,ESI                    ; 004c2d9e | g_CDemonCameraInstance.base.position+4
    MOVSD ES:EDI,ESI                    ; 004c2d9f | g_CDemonCameraInstance.base.position+8
    FLD float ptr [ESP + 0x440]         ; 004c2da0
    LEA EDI,[ESP + 0x584]               ; 004c2da7
    LEA ESI,[ESP + 0x62c]               ; 004c2dae
    FLD float ptr [ESP + 0x444]         ; 004c2db5
    MOVSD ES:EDI,ESI                    ; 004c2dbc
    MOVSD ES:EDI,ESI                    ; 004c2dbd
    MOVSD ES:EDI,ESI                    ; 004c2dbe
    FLD float ptr [ESP + 0x448]         ; 004c2dbf
    LEA EDI,[ESP + 0x284]               ; 004c2dc6
    LEA ESI,[ESP + 0x734]               ; 004c2dcd
    FXCH ST2                            ; 004c2dd4
    FSUB float ptr [ESP + 0x584]        ; 004c2dd6
    FXCH                                ; 004c2ddd
    FSUB float ptr [ESP + 0x588]        ; 004c2ddf
    FXCH ST2                            ; 004c2de6
    FSUB float ptr [ESP + 0x58c]        ; 004c2de8
    FXCH                                ; 004c2def
    FSTP float ptr [ESP + 0x734]        ; 004c2df1
    FXCH                                ; 004c2df8
    FSTP float ptr [ESP + 0x738]        ; 004c2dfa
    FSTP float ptr [ESP + 0x73c]        ; 004c2e01
    MOVSD ES:EDI,ESI                    ; 004c2e08
    MOVSD ES:EDI,ESI                    ; 004c2e09
    MOVSD ES:EDI,ESI                    ; 004c2e0a
    FLD float ptr [ESP + 0x288]         ; 004c2e0b
    FMUL ST0                            ; 004c2e12
    FLD float ptr [ESP + 0x284]         ; 004c2e14
    FMUL ST0                            ; 004c2e1b
    FADDP                               ; 004c2e1d
    FLD float ptr [ESP + 0x28c]         ; 004c2e1f
    FMUL ST0                            ; 004c2e26
    FADDP                               ; 004c2e28
    FSQRT                               ; 004c2e2a
    FLDZ                                ; 004c2e2c
    FXCH                                ; 004c2e2e
    FSTP float ptr [ESP + 0x838]        ; 004c2e30
    FCOMP float ptr [ESP + 0x838]       ; 004c2e37
    FNSTSW AX                           ; 004c2e3e
    SAHF                                ; 004c2e40
    JNC 0x004c2fb7                      ; 004c2e41
        ;   XREF to: 004c2fb7 (CONDITIONAL_JUMP)  ; LAB_004c2fb7
    FLD1                                ; 004c2e47
    FLD float ptr [ESP + 0x284]         ; 004c2e49
    FXCH                                ; 004c2e50
    FDIV float ptr [ESP + 0x838]        ; 004c2e52
    FXCH                                ; 004c2e59
    FMUL ST1                            ; 004c2e5b
    FLD float ptr [ESP + 0x288]         ; 004c2e5d
    FMUL ST2                            ; 004c2e64
    FLD float ptr [ESP + 0x28c]         ; 004c2e66
    FMULP ST3                           ; 004c2e6d
    FXCH                                ; 004c2e6f
    FSTP float ptr [ESP + 0x284]        ; 004c2e71
    FSTP float ptr [ESP + 0x288]        ; 004c2e78
    FSTP float ptr [ESP + 0x28c]        ; 004c2e7f
    FLD float ptr [0x005c3c08]          ; 004c2e86 | DAT_005c3c08
        ;   Label: LAB_004c2e86
    FLD float ptr [ESP + 0x284]         ; 004c2e8c
    FMUL ST1                            ; 004c2e93
    FLD float ptr [ESP + 0x288]         ; 004c2e95
    FMUL ST2                            ; 004c2e9c
    FLD float ptr [ESP + 0x28c]         ; 004c2e9e
    FMULP ST3                           ; 004c2ea5
    FLD float ptr [ESP + 0x584]         ; 004c2ea7
    FLD float ptr [ESP + 0x588]         ; 004c2eae
    FLD float ptr [ESP + 0x58c]         ; 004c2eb5
    LEA EDI,[ESP + 0x710]               ; 004c2ebc
    LEA ESI,[ESP + 0x5b4]               ; 004c2ec3
    LEA EAX,[ESP + 0x710]               ; 004c2eca
    LEA EDX,[ESP + 0x440]               ; 004c2ed1
    FXCH ST4                            ; 004c2ed8
    FSTP float ptr [ESP + 0x284]        ; 004c2eda
    FXCH ST2                            ; 004c2ee1
    FSTP float ptr [ESP + 0x288]        ; 004c2ee3
    FXCH ST3                            ; 004c2eea
    FSTP float ptr [ESP + 0x28c]        ; 004c2eec
    FXCH ST2                            ; 004c2ef3
    FADD float ptr [ESP + 0x284]        ; 004c2ef5
    FXCH ST2                            ; 004c2efc
    FADD float ptr [ESP + 0x288]        ; 004c2efe
    FXCH                                ; 004c2f05
    FADD float ptr [ESP + 0x28c]        ; 004c2f07
    FXCH ST2                            ; 004c2f0e
    FSTP float ptr [ESP + 0x5b4]        ; 004c2f10
    FSTP float ptr [ESP + 0x5b8]        ; 004c2f17
    FSTP float ptr [ESP + 0x5bc]        ; 004c2f1e
    MOVSD ES:EDI,ESI                    ; 004c2f25
    MOVSD ES:EDI,ESI                    ; 004c2f26
    MOVSD ES:EDI,ESI                    ; 004c2f27
    CMP EDX,EAX                         ; 004c2f28
    JNZ 0x004c2fd3                      ; 004c2f2a
        ;   XREF to: 004c2fd3 (CONDITIONAL_JUMP)  ; LAB_004c2fd3
    PUSH 0x4                            ; 004c2f30
        ;   Label: LAB_004c2f30
    MOV EAX,[0x00603b28]                ; 004c2f32 | g_CDemonSetPtr
    PUSH EAX                            ; 004c2f37 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90 ; 004c2f38
        ;   XREF to: 0053ec90 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90(CDemonSet * this_ptr, int ray_type)
    MOV EAX,[0x01d5ba14]                ; 004c2f3d | DAT_01d5ba14
    ADD ESP,0x8                         ; 004c2f42
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c2f45
    PUSH EDX                            ; 004c2f4c
    MOV ECX,dword ptr [0x00603b28]      ; 004c2f4d | g_CDemonSetPtr
    PUSH ECX                            ; 004c2f53 | g_CDemonSetInstance
    XOR ESI,ESI                         ; 004c2f54
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 004c2f56
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004c2f5b
    MOV EAX,ESI                         ; 004c2f5e
        ;   Label: LAB_004c2f5e
    INC ESI                             ; 004c2f60
    CMP EAX,0x4                         ; 004c2f61
    JGE 0x004c2fa4                      ; 004c2f64
        ;   XREF to: 004c2fa4 (CONDITIONAL_JUMP)  ; LAB_004c2fa4
    LEA EAX,[ESP + 0x440]               ; 004c2f66
    PUSH EAX                            ; 004c2f6d
    LEA EAX,[ESP + 0x588]               ; 004c2f6e
    PUSH EAX                            ; 004c2f75
    MOV EDX,dword ptr [0x00603b28]      ; 004c2f76 | g_CDemonSetPtr
    PUSH EDX                            ; 004c2f7c | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053ccc0 ; 004c2f7d
        ;   XREF to: 0053ccc0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053ccc0()
    MOV dword ptr [ESP + 0x84c],EAX     ; 004c2f82
    FLD float ptr [ESP + 0x84c]         ; 004c2f89
    ADD ESP,0xc                         ; 004c2f90
    FST float ptr [ESP + 0xc]           ; 004c2f93
    FLDZ                                ; 004c2f97
    FCOMPP                              ; 004c2f99
    FNSTSW AX                           ; 004c2f9b
    SAHF                                ; 004c2f9d
    JBE 0x004c303f                      ; 004c2f9e
        ;   XREF to: 004c303f (CONDITIONAL_JUMP)  ; LAB_004c303f
    MOV ESI,dword ptr [0x01d1e34c]      ; 004c2fa4 | DAT_01d1e34c
        ;   Label: LAB_004c2fa4
    TEST ESI,ESI                        ; 004c2faa
    JNZ 0x004c30a1                      ; 004c2fac
        ;   XREF to: 004c30a1 (CONDITIONAL_JUMP)  ; LAB_004c30a1
    JMP 0x004c15d5                      ; 004c2fb2
        ;   XREF to: 004c15d5 (UNCONDITIONAL_JUMP)  ; LAB_004c15d5
    XOR EBX,EBX                         ; 004c2fb7
        ;   Label: LAB_004c2fb7
    MOV dword ptr [ESP + 0x288],EBX     ; 004c2fb9
    MOV dword ptr [ESP + 0x284],EBX     ; 004c2fc0
    MOV dword ptr [ESP + 0x28c],EBX     ; 004c2fc7
    JMP 0x004c2e86                      ; 004c2fce
        ;   XREF to: 004c2e86 (UNCONDITIONAL_JUMP)  ; LAB_004c2e86
    MOV EAX,dword ptr [ESP + 0x710]     ; 004c2fd3
        ;   Label: LAB_004c2fd3
    MOV dword ptr [ESP + 0x440],EAX     ; 004c2fda
    MOV EAX,dword ptr [ESP + 0x714]     ; 004c2fe1
    MOV dword ptr [ESP + 0x444],EAX     ; 004c2fe8
    MOV EAX,dword ptr [ESP + 0x718]     ; 004c2fef
    MOV dword ptr [ESP + 0x448],EAX     ; 004c2ff6
    JMP 0x004c2f30                      ; 004c2ffd
        ;   XREF to: 004c2f30 (UNCONDITIONAL_JUMP)  ; LAB_004c2f30
    MOV EAX,[0x00603b28]                ; 004c3002 | g_CDemonSetPtr
        ;   Label: LAB_004c3002
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004c3007 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 004c300d
    PUSH EAX                            ; 004c300e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 004c300f
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004c3014
    FLDZ                                ; 004c3017
    FCOMP float ptr [ESP + 0xc]         ; 004c3019
    FNSTSW AX                           ; 004c301d
    SAHF                                ; 004c301f
    JA 0x004c2fa4                       ; 004c3020
        ;   XREF to: 004c2fa4 (CONDITIONAL_JUMP)  ; LAB_004c2fa4
    CMP dword ptr [ESP + 0xc],0x3f800000 ; 004c3022
    JLE 0x004c2f5e                      ; 004c302a
        ;   XREF to: 004c2f5e (CONDITIONAL_JUMP)  ; LAB_004c2f5e
    MOV ESI,dword ptr [0x01d1e34c]      ; 004c3030 | DAT_01d1e34c
    TEST ESI,ESI                        ; 004c3036
    JNZ 0x004c30a1                      ; 004c3038
        ;   XREF to: 004c30a1 (CONDITIONAL_JUMP)  ; LAB_004c30a1
    JMP 0x004c15d5                      ; 004c303a
        ;   XREF to: 004c15d5 (UNCONDITIONAL_JUMP)  ; LAB_004c15d5
    CMP dword ptr [ESP + 0xc],0x3f800000 ; 004c303f
        ;   Label: LAB_004c303f
    JG 0x004c2fa4                       ; 004c3047
        ;   XREF to: 004c2fa4 (CONDITIONAL_JUMP)  ; LAB_004c2fa4
    MOV EBX,dword ptr [0x01c5bc48]      ; 004c304d | g_CEnemyClassInfo.name_hash
    MOV EAX,[0x00603b28]                ; 004c3053 | g_CDemonSetPtr
    PUSH EBX                            ; 004c3058
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 004c3059 | g_CDemonSetInstance.collision_actor
    PUSH EDI                            ; 004c305f
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c3060
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV EBX,EAX                         ; 004c3065
    ADD ESP,0x8                         ; 004c3067
    TEST EAX,EAX                        ; 004c306a
    JZ 0x004c3002                       ; 004c306c
        ;   XREF to: 004c3002 (CONDITIONAL_JUMP)  ; LAB_004c3002
    PUSH EBX                            ; 004c306e
    MOV EAX,dword ptr [EAX + 0x154]     ; 004c306f
    CALL dword ptr [EAX + 0x10c]        ; 004c3075
    ADD ESP,0x4                         ; 004c307b
    TEST EAX,EAX                        ; 004c307e
    JNZ 0x004c3002                      ; 004c3080
        ;   XREF to: 004c3002 (CONDITIONAL_JUMP)  ; LAB_004c3002
    MOV dword ptr [0x01d1e34c],EBX      ; 004c3082 | DAT_01d1e34c
    MOV dword ptr [0x01d22b48],0x5      ; 004c3088 | DAT_01d22b48
    MOV ESI,dword ptr [0x01d1e34c]      ; 004c3092 | DAT_01d1e34c
    TEST ESI,ESI                        ; 004c3098
    JNZ 0x004c30a1                      ; 004c309a
        ;   XREF to: 004c30a1 (CONDITIONAL_JUMP)  ; LAB_004c30a1
    JMP 0x004c15d5                      ; 004c309c
        ;   XREF to: 004c15d5 (UNCONDITIONAL_JUMP)  ; LAB_004c15d5
    LEA EAX,[ESI + 0x20]                ; 004c30a1
        ;   Label: LAB_004c30a1
    PUSH EAX                            ; 004c30a4
    MOV EAX,[0x01d5ba14]                ; 004c30a5 | DAT_01d5ba14
    MOV EDI,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c30aa
    PUSH EDI                            ; 004c30b1
    LEA ESI,[ESP + 0x13c]               ; 004c30b2
    CALL core_actor.cpp_FUN_00408bf0    ; 004c30b9
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA EDI,[ESP + 0x430]               ; 004c30be
    LEA ESI,[ESP + 0x13c]               ; 004c30c5
    ADD ESP,0x8                         ; 004c30cc
    LEA EAX,[ESP + 0x428]               ; 004c30cf
    MOVSD ES:EDI,ESI                    ; 004c30d6
    MOVSD ES:EDI,ESI                    ; 004c30d7
    MOVSD ES:EDI,ESI                    ; 004c30d8
    PUSH EAX                            ; 004c30d9
    LEA ESI,[ESP + 0x1e0]               ; 004c30da
    LEA EDI,[ESP + 0x21c]               ; 004c30e1
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 004c30e8
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[ESP + 0x1e0]               ; 004c30ed
    ADD ESP,0x4                         ; 004c30f4
    MOVSD ES:EDI,ESI                    ; 004c30f7
    MOVSD ES:EDI,ESI                    ; 004c30f8
    MOVSD ES:EDI,ESI                    ; 004c30f9
    FLD float ptr [ESP + 0x21c]         ; 004c30fa
    FCOMP float ptr [0x005c3c10]        ; 004c3101 | DAT_005c3c10
    FNSTSW AX                           ; 004c3107
    SAHF                                ; 004c3109
    JBE 0x004c15df                      ; 004c310a
        ;   XREF to: 004c15df (CONDITIONAL_JUMP)  ; LAB_004c15df
    CMP dword ptr [ESP + 0x21c],0x3e860a92 ; 004c3110
    JGE 0x004c15df                      ; 004c311b
        ;   XREF to: 004c15df (CONDITIONAL_JUMP)  ; LAB_004c15df
    JMP 0x004c15d5                      ; 004c3121
        ;   XREF to: 004c15d5 (UNCONDITIONAL_JUMP)  ; LAB_004c15d5
    MOV EDX,dword ptr [ESP + 0x7b4]     ; 004c3126
        ;   Label: LAB_004c3126
    TEST EDX,EDX                        ; 004c312d
    JNZ 0x004c15df                      ; 004c312f
        ;   XREF to: 004c15df (CONDITIONAL_JUMP)  ; LAB_004c15df
    MOV dword ptr [0x01d1e34c],EDX      ; 004c3135 | DAT_01d1e34c
    JMP 0x004c15df                      ; 004c313b
        ;   XREF to: 004c15df (UNCONDITIONAL_JUMP)  ; LAB_004c15df
    MOV EAX,[0x00603b28]                ; 004c3140 | g_CDemonSetPtr
        ;   Label: LAB_004c3140
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 004c3145 | g_CDemonSetInstance.selected_camera_index
    MOV [0x01d1e358],EAX                ; 004c314b | DAT_01d1e358
    JMP 0x004c161d                      ; 004c3150
        ;   XREF to: 004c161d (UNCONDITIONAL_JUMP)  ; LAB_004c161d
    MOV ESI,dword ptr [ESP + 0x7c8]     ; 004c3155
        ;   Label: LAB_004c3155
    LEA EDI,[ESP + 0x308]               ; 004c315c
    MOV EAX,[0x01d5ba14]                ; 004c3163 | DAT_01d5ba14
    LEA ESI,[ESI + 0x20]                ; 004c3168
    MOV EBX,0x40000000                  ; 004c316b
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c3170
    MOVSD ES:EDI,ESI                    ; 004c3177
    MOVSD ES:EDI,ESI                    ; 004c3178
    MOVSD ES:EDI,ESI                    ; 004c3179
    XOR EDX,EDX                         ; 004c317a
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c317c
    MOV ESI,dword ptr [ESP + 0x7c8]     ; 004c317f
    MOV dword ptr [ESP + 0x30c],EAX     ; 004c3186
    LEA EAX,[ESP + 0x344]               ; 004c318d
    LEA EDI,[ESP + 0x368]               ; 004c3194
    PUSH EAX                            ; 004c319b
    MOV dword ptr [ESP + 0x348],EDX     ; 004c319c
    MOV dword ptr [ESP + 0x34c],EDX     ; 004c31a3
    PUSH ESI                            ; 004c31aa
    LEA ESI,[ESP + 0x3a0]               ; 004c31ab
    MOV dword ptr [ESP + 0x354],EBX     ; 004c31b2
    CALL core_actor.cpp_FUN_00408b00    ; 004c31b9
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x3a0]               ; 004c31be
    ADD ESP,0x8                         ; 004c31c5
    LEA EAX,[ESP + 0x308]               ; 004c31c8
    FLD float ptr [ESP + 0x308]         ; 004c31cf
    FLD float ptr [ESP + 0x30c]         ; 004c31d6
    MOVSD ES:EDI,ESI                    ; 004c31dd
    MOVSD ES:EDI,ESI                    ; 004c31de
    MOVSD ES:EDI,ESI                    ; 004c31df
    FLD float ptr [ESP + 0x310]         ; 004c31e0
    FXCH ST2                            ; 004c31e7
    FADD float ptr [ESP + 0x368]        ; 004c31e9
    FXCH                                ; 004c31f0
    FADD float ptr [ESP + 0x36c]        ; 004c31f2
    FXCH ST2                            ; 004c31f9
    FADD float ptr [ESP + 0x370]        ; 004c31fb
    FXCH                                ; 004c3202
    FSTP float ptr [ESP + 0x308]        ; 004c3204
    FXCH                                ; 004c320b
    FSTP float ptr [ESP + 0x30c]        ; 004c320d
    FSTP float ptr [ESP + 0x310]        ; 004c3214
    CMP EAX,0x1d1e328                   ; 004c321b
    JZ 0x004c3246                       ; 004c3220
        ;   XREF to: 004c3246 (CONDITIONAL_JUMP)  ; LAB_004c3246
    MOV EAX,dword ptr [ESP + 0x308]     ; 004c3222
    MOV [0x01d1e328],EAX                ; 004c3229 | DAT_01d1e328
    MOV EAX,dword ptr [ESP + 0x30c]     ; 004c322e
    MOV [0x01d1e32c],EAX                ; 004c3235 | DAT_01d1e32c
    MOV EAX,dword ptr [ESP + 0x310]     ; 004c323a
    MOV [0x01d1e330],EAX                ; 004c3241 | DAT_01d1e330
    MOV EAX,dword ptr [ESP + 0x844]     ; 004c3246
        ;   Label: LAB_004c3246
    ADD EAX,0x20                        ; 004c324d
    CMP EAX,0x1d22c30                   ; 004c3250
    JZ 0x004c3271                       ; 004c3255
        ;   XREF to: 004c3271 (CONDITIONAL_JUMP)  ; LAB_004c3271
    FLD float ptr [EAX]                 ; 004c3257
    FLD float ptr [EAX + 0x8]           ; 004c3259
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c325c
    MOV dword ptr [0x01d22c34],EDX      ; 004c325f | DAT_01d22c34
    FSTP float ptr [0x01d22c38]         ; 004c3265 | DAT_01d22c38
    FSTP float ptr [0x01d22c30]         ; 004c326b | DAT_01d22c30
    MOV dword ptr [ESP + 0x8],0x40400000 ; 004c3271
        ;   Label: LAB_004c3271
    JMP 0x004c1893                      ; 004c3279
        ;   XREF to: 004c1893 (UNCONDITIONAL_JUMP)  ; LAB_004c1893
    TEST EBX,EBX                        ; 004c327e
        ;   Label: LAB_004c327e
    JZ 0x004c3848                       ; 004c3280
        ;   XREF to: 004c3848 (CONDITIONAL_JUMP)  ; LAB_004c3848
    CMP dword ptr [EBX + 0x9d8],0x0     ; 004c3286
    JZ 0x004c33f6                       ; 004c328d
        ;   XREF to: 004c33f6 (CONDITIONAL_JUMP)  ; LAB_004c33f6
    MOV EAX,[0x01d5ba14]                ; 004c3293 | DAT_01d5ba14
        ;   Label: LAB_004c3293
    MOV ESI,dword ptr [ESP + 0x7c4]     ; 004c3298
    LEA EDI,[ESP + 0x2fc]               ; 004c329f
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c32a6
    LEA ESI,[ESI + 0x9bc]               ; 004c32ad
    ADD EAX,0x20                        ; 004c32b3
    MOV EBX,dword ptr [ESP + 0x7c4]     ; 004c32b6
    PUSH EAX                            ; 004c32bd
    MOVSD ES:EDI,ESI                    ; 004c32be
    MOVSD ES:EDI,ESI                    ; 004c32bf
    MOVSD ES:EDI,ESI                    ; 004c32c0
    PUSH EBX                            ; 004c32c1
    LEA ESI,[ESP + 0x358]               ; 004c32c2
    LEA EDI,[ESP + 0x1fc]               ; 004c32c9
    CALL core_actor.cpp_FUN_00408bf0    ; 004c32d0
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x358]               ; 004c32d5
    ADD ESP,0x8                         ; 004c32dc
    MOVSD ES:EDI,ESI                    ; 004c32df
    MOVSD ES:EDI,ESI                    ; 004c32e0
    MOVSD ES:EDI,ESI                    ; 004c32e1
    FLDZ                                ; 004c32e2
    FCOMP float ptr [ESP + 0x1fc]       ; 004c32e4
    FNSTSW AX                           ; 004c32eb
    SAHF                                ; 004c32ed
    JBE 0x004c374f                      ; 004c32ee
        ;   XREF to: 004c374f (CONDITIONAL_JUMP)  ; LAB_004c374f
    MOV EBX,0xc0600000                  ; 004c32f4
    MOV ESI,0xbfc00000                  ; 004c32f9
    LEA EAX,[ESP + 0x260]               ; 004c32fe
    MOV EDI,dword ptr [ESP + 0x7c4]     ; 004c3305
    XOR ECX,ECX                         ; 004c330c
    PUSH EAX                            ; 004c330e
    MOV dword ptr [ESP + 0x264],ECX     ; 004c330f
    MOV dword ptr [ESP + 0x26c],ESI     ; 004c3316
    PUSH EDI                            ; 004c331d
    LEA ESI,[ESP + 0x5d4]               ; 004c331e
    MOV dword ptr [ESP + 0x26c],EBX     ; 004c3325
    CALL core_actor.cpp_FUN_00408b00    ; 004c332c
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA EDI,[ESP + 0x298]               ; 004c3331
    ADD ESP,0x8                         ; 004c3338
    LEA ESI,[ESP + 0x5cc]               ; 004c333b
    FLD float ptr [ESP + 0x2fc]         ; 004c3342
    FLD float ptr [ESP + 0x300]         ; 004c3349
    MOVSD ES:EDI,ESI                    ; 004c3350
    MOVSD ES:EDI,ESI                    ; 004c3351
    MOVSD ES:EDI,ESI                    ; 004c3352
    FLD float ptr [ESP + 0x304]         ; 004c3353
    FXCH ST2                            ; 004c335a
    FADD float ptr [ESP + 0x290]        ; 004c335c
    FXCH                                ; 004c3363
    FADD float ptr [ESP + 0x294]        ; 004c3365
    FXCH ST2                            ; 004c336c
    FADD float ptr [ESP + 0x298]        ; 004c336e
    FXCH                                ; 004c3375
        ;   Label: LAB_004c3375
    FSTP float ptr [ESP + 0x2fc]        ; 004c3377
    FXCH                                ; 004c337e
    FSTP float ptr [ESP + 0x300]        ; 004c3380
    FSTP float ptr [ESP + 0x304]        ; 004c3387
    LEA EAX,[ESP + 0x2fc]               ; 004c338e
    CMP EAX,0x1d1e328                   ; 004c3395
    JZ 0x004c33c0                       ; 004c339a
        ;   XREF to: 004c33c0 (CONDITIONAL_JUMP)  ; LAB_004c33c0
    MOV EAX,dword ptr [ESP + 0x2fc]     ; 004c339c
    MOV [0x01d1e328],EAX                ; 004c33a3 | DAT_01d1e328
    MOV EAX,dword ptr [ESP + 0x300]     ; 004c33a8
    MOV [0x01d1e32c],EAX                ; 004c33af | DAT_01d1e32c
    MOV EAX,dword ptr [ESP + 0x304]     ; 004c33b4
    MOV [0x01d1e330],EAX                ; 004c33bb | DAT_01d1e330
    MOV EAX,dword ptr [ESP + 0x7c4]     ; 004c33c0
        ;   Label: LAB_004c33c0
    ADD EAX,0x9bc                       ; 004c33c7
    CMP EAX,0x1d22c30                   ; 004c33cc
    JZ 0x004c1893                       ; 004c33d1
        ;   XREF to: 004c1893 (CONDITIONAL_JUMP)  ; LAB_004c1893
    FLD float ptr [EAX]                 ; 004c33d7
    FLD float ptr [EAX + 0x8]           ; 004c33d9
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c33dc
    MOV dword ptr [0x01d22c34],EDX      ; 004c33df | DAT_01d22c34
    FSTP float ptr [0x01d22c38]         ; 004c33e5 | DAT_01d22c38
    FSTP float ptr [0x01d22c30]         ; 004c33eb | DAT_01d22c30
    JMP 0x004c1893                      ; 004c33f1
        ;   XREF to: 004c1893 (UNCONDITIONAL_JUMP)  ; LAB_004c1893
    CMP dword ptr [EBX + 0x2d8],0x0     ; 004c33f6
        ;   Label: LAB_004c33f6
    JZ 0x004c3293                       ; 004c33fd
        ;   XREF to: 004c3293 (CONDITIONAL_JUMP)  ; LAB_004c3293
    PUSH EBX                            ; 004c3403
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c3404
    LEA ESI,[ESP + 0xc0]                ; 004c340a
    LEA EDI,[ESP + 0x108]               ; 004c3411
    CALL dword ptr [EAX + 0x1c]         ; 004c3418
    MOV ECX,0x6                         ; 004c341b
    LEA ESI,[ESP + 0xc0]                ; 004c3420
    ADD ESP,0x4                         ; 004c3427
    MOVSD.REP ES:EDI,ESI                ; 004c342a
    LEA EAX,[ESP + 0x104]               ; 004c342c
    FLD float ptr [ESP + 0x108]         ; 004c3433
    FLD float ptr [ESP + 0x104]         ; 004c343a
    FADD float ptr [EAX + 0xc]          ; 004c3441
    FLD float ptr [ESP + 0x10c]         ; 004c3444
    FXCH                                ; 004c344b
    FSTP float ptr [ESP + 0x35c]        ; 004c344d
    FXCH                                ; 004c3454
    FADD float ptr [EAX + 0x10]         ; 004c3456
    LEA EDI,[ESP + 0x44c]               ; 004c3459
    FSTP float ptr [ESP + 0x360]        ; 004c3460
    FADD float ptr [EAX + 0x14]         ; 004c3467
    LEA ESI,[ESP + 0x35c]               ; 004c346a
    FSTP float ptr [ESP + 0x364]        ; 004c3471
    MOVSD ES:EDI,ESI                    ; 004c3478
    MOVSD ES:EDI,ESI                    ; 004c3479
    MOVSD ES:EDI,ESI                    ; 004c347a
    FLD float ptr [0x005c3c14]          ; 004c347b | DAT_005c3c14
    FLD float ptr [ESP + 0x44c]         ; 004c3481
    FMUL ST1                            ; 004c3488
    FLD float ptr [ESP + 0x450]         ; 004c348a
    FMUL ST2                            ; 004c3491
    LEA EAX,[ESP + 0x374]               ; 004c3493
    FLD float ptr [ESP + 0x454]         ; 004c349a
    FMULP ST3                           ; 004c34a1
    PUSH EAX                            ; 004c34a3
    LEA EDI,[ESP + 0x378]               ; 004c34a4
    LEA ESI,[ESP + 0x4bc]               ; 004c34ab
    FXCH                                ; 004c34b2
    FSTP float ptr [ESP + 0x4bc]        ; 004c34b4
    FSTP float ptr [ESP + 0x4c0]        ; 004c34bb
    FSTP float ptr [ESP + 0x4c4]        ; 004c34c2
    MOVSD ES:EDI,ESI                    ; 004c34c9
    MOVSD ES:EDI,ESI                    ; 004c34ca
    MOVSD ES:EDI,ESI                    ; 004c34cb
    PUSH EBX                            ; 004c34cc
    LEA ESI,[ESP + 0x124]               ; 004c34cd
    CALL core_actor.cpp_FUN_00408b80    ; 004c34d4
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    MOV EAX,[0x01d5ba14]                ; 004c34d9 | DAT_01d5ba14
    LEA EDI,[ESP + 0x6e8]               ; 004c34de
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c34e5
    ADD ESP,0x8                         ; 004c34ec
    ADD EAX,0x20                        ; 004c34ef
    LEA ESI,[ESP + 0x11c]               ; 004c34f2
    PUSH EAX                            ; 004c34f9
    MOVSD ES:EDI,ESI                    ; 004c34fa
    MOVSD ES:EDI,ESI                    ; 004c34fb
    MOVSD ES:EDI,ESI                    ; 004c34fc
    PUSH EBX                            ; 004c34fd
    LEA ESI,[ESP + 0x508]               ; 004c34fe
    LEA EDI,[ESP + 0x274]               ; 004c3505
    CALL core_actor.cpp_FUN_00408bf0    ; 004c350c
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x508]               ; 004c3511
    ADD ESP,0x8                         ; 004c3518
    MOVSD ES:EDI,ESI                    ; 004c351b
    MOVSD ES:EDI,ESI                    ; 004c351c
    MOVSD ES:EDI,ESI                    ; 004c351d
    PUSH EBX                            ; 004c351e
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c351f
    LEA ESI,[ESP + 0xf0]                ; 004c3525
    LEA EDI,[ESP + 0x48]                ; 004c352c
    CALL dword ptr [EAX + 0x1c]         ; 004c3530
    MOV ECX,0x6                         ; 004c3533
    LEA ESI,[ESP + 0xf0]                ; 004c3538
    ADD ESP,0x4                         ; 004c353f
    MOVSD.REP ES:EDI,ESI                ; 004c3542
    MOV EAX,dword ptr [ESP + 0x44]      ; 004c3544
    FLDZ                                ; 004c3548
    MOV dword ptr [ESP + 0x6e4],EAX     ; 004c354a
    FCOMP float ptr [ESP + 0x274]       ; 004c3551
    FNSTSW AX                           ; 004c3558
    SAHF                                ; 004c355a
    JBE 0x004c37ce                      ; 004c355b
        ;   XREF to: 004c37ce (CONDITIONAL_JUMP)  ; LAB_004c37ce
    MOV dword ptr [ESP + 0x760],0xbfc00000 ; 004c3561
    LEA EAX,[ESP + 0x758]               ; 004c356c
    XOR ESI,ESI                         ; 004c3573
    PUSH EAX                            ; 004c3575
    MOV dword ptr [ESP + 0x75c],ESI     ; 004c3576
    MOV dword ptr [ESP + 0x760],ESI     ; 004c357d
    PUSH EBX                            ; 004c3584
    LEA ESI,[ESP + 0x598]               ; 004c3585
    LEA EDI,[ESP + 0x154]               ; 004c358c
    CALL core_actor.cpp_FUN_00408b00    ; 004c3593
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    ADD ESP,0x8                         ; 004c3598
    LEA ESI,[ESP + 0x590]               ; 004c359b
    FLD float ptr [ESP + 0x6e0]         ; 004c35a2
    FLD float ptr [ESP + 0x6e4]         ; 004c35a9
    MOVSD ES:EDI,ESI                    ; 004c35b0
    MOVSD ES:EDI,ESI                    ; 004c35b1
    MOVSD ES:EDI,ESI                    ; 004c35b2
    FLD float ptr [ESP + 0x6e8]         ; 004c35b3
    FXCH ST2                            ; 004c35ba
    FADD float ptr [ESP + 0x14c]        ; 004c35bc
    FXCH                                ; 004c35c3
    FADD float ptr [ESP + 0x150]        ; 004c35c5
    FXCH ST2                            ; 004c35cc
    FADD float ptr [ESP + 0x154]        ; 004c35ce
    FXCH                                ; 004c35d5
        ;   Label: LAB_004c35d5
    FSTP float ptr [ESP + 0x6e0]        ; 004c35d7
    FXCH                                ; 004c35de
    FSTP float ptr [ESP + 0x6e4]        ; 004c35e0
    FSTP float ptr [ESP + 0x6e8]        ; 004c35e7
    LEA EAX,[ESP + 0x6e0]               ; 004c35ee
    CMP EAX,0x1d1e328                   ; 004c35f5
    JZ 0x004c3620                       ; 004c35fa
        ;   XREF to: 004c3620 (CONDITIONAL_JUMP)  ; LAB_004c3620
    MOV EAX,dword ptr [ESP + 0x6e0]     ; 004c35fc
    MOV [0x01d1e328],EAX                ; 004c3603 | DAT_01d1e328
    MOV EAX,dword ptr [ESP + 0x6e4]     ; 004c3608
    MOV [0x01d1e32c],EAX                ; 004c360f | DAT_01d1e32c
    MOV EAX,dword ptr [ESP + 0x6e8]     ; 004c3614
    MOV [0x01d1e330],EAX                ; 004c361b | DAT_01d1e330
    MOV EDX,dword ptr [ESP + 0x7c4]     ; 004c3620
        ;   Label: LAB_004c3620
    MOV EAX,dword ptr [ESP + 0x7c4]     ; 004c3627
    PUSH EDX                            ; 004c362e
    MOV EAX,dword ptr [EAX + 0x154]     ; 004c362f
    LEA ESI,[ESP + 0x30]                ; 004c3635
    LEA EDI,[ESP + 0xd8]                ; 004c3639
    CALL dword ptr [EAX + 0x1c]         ; 004c3640
    MOV ECX,0x6                         ; 004c3643
    LEA ESI,[ESP + 0x30]                ; 004c3648
    ADD ESP,0x4                         ; 004c364c
    MOVSD.REP ES:EDI,ESI                ; 004c364f
    LEA EAX,[ESP + 0xd4]                ; 004c3651
    FLD float ptr [ESP + 0xd8]          ; 004c3658
    FLD float ptr [ESP + 0xd4]          ; 004c365f
    FADD float ptr [EAX + 0xc]          ; 004c3666
    FLD float ptr [ESP + 0xdc]          ; 004c3669
    FXCH                                ; 004c3670
    FSTP float ptr [ESP + 0x668]        ; 004c3672
    FXCH                                ; 004c3679
    FADD float ptr [EAX + 0x10]         ; 004c367b
    LEA EDI,[ESP + 0x410]               ; 004c367e
    FSTP float ptr [ESP + 0x66c]        ; 004c3685
    FADD float ptr [EAX + 0x14]         ; 004c368c
    LEA ESI,[ESP + 0x668]               ; 004c368f
    FSTP float ptr [ESP + 0x670]        ; 004c3696
    MOVSD ES:EDI,ESI                    ; 004c369d
    MOVSD ES:EDI,ESI                    ; 004c369e
    MOVSD ES:EDI,ESI                    ; 004c369f
    FLD float ptr [0x005c3c14]          ; 004c36a0 | DAT_005c3c14
    FLD float ptr [ESP + 0x410]         ; 004c36a6
    FMUL ST1                            ; 004c36ad
    FLD float ptr [ESP + 0x414]         ; 004c36af
    FMUL ST2                            ; 004c36b6
    FLD float ptr [ESP + 0x418]         ; 004c36b8
    FMULP ST3                           ; 004c36bf
    LEA EAX,[ESP + 0x3e0]               ; 004c36c1
    MOV ECX,dword ptr [ESP + 0x7c4]     ; 004c36c8
    PUSH EAX                            ; 004c36cf
    LEA EDI,[ESP + 0x3e4]               ; 004c36d0
    LEA ESI,[ESP + 0x684]               ; 004c36d7
    FXCH                                ; 004c36de
    FSTP float ptr [ESP + 0x684]        ; 004c36e0
    FSTP float ptr [ESP + 0x688]        ; 004c36e7
    FSTP float ptr [ESP + 0x68c]        ; 004c36ee
    MOVSD ES:EDI,ESI                    ; 004c36f5
    MOVSD ES:EDI,ESI                    ; 004c36f6
    MOVSD ES:EDI,ESI                    ; 004c36f7
    PUSH ECX                            ; 004c36f8
    LEA ESI,[ESP + 0x6b8]               ; 004c36f9
    LEA EDI,[ESP + 0x400]               ; 004c3700
    CALL core_actor.cpp_FUN_00408b80    ; 004c3707
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x6b8]               ; 004c370c
    ADD ESP,0x8                         ; 004c3713
    LEA EAX,[ESP + 0x3f8]               ; 004c3716
    MOVSD ES:EDI,ESI                    ; 004c371d
    MOVSD ES:EDI,ESI                    ; 004c371e
    MOVSD ES:EDI,ESI                    ; 004c371f
    CMP EAX,0x1d22c30                   ; 004c3720
    JZ 0x004c1893                       ; 004c3725
        ;   XREF to: 004c1893 (CONDITIONAL_JUMP)  ; LAB_004c1893
    MOV EAX,dword ptr [ESP + 0x3f8]     ; 004c372b
    MOV [0x01d22c30],EAX                ; 004c3732 | DAT_01d22c30
    MOV EAX,dword ptr [ESP + 0x3fc]     ; 004c3737
    MOV [0x01d22c34],EAX                ; 004c373e | DAT_01d22c34
    MOV EAX,dword ptr [ESP + 0x400]     ; 004c3743
    JMP 0x004c188e                      ; 004c374a
        ;   XREF to: 004c188e (UNCONDITIONAL_JUMP)  ; LAB_004c188e
    MOV EAX,0x3fc00000                  ; 004c374f
        ;   Label: LAB_004c374f
    MOV EDI,0xc0600000                  ; 004c3754
    MOV dword ptr [ESP + 0x3d0],EAX     ; 004c3759
    LEA EAX,[ESP + 0x3c8]               ; 004c3760
    XOR ESI,ESI                         ; 004c3767
    PUSH EAX                            ; 004c3769
    MOV dword ptr [ESP + 0x3cc],ESI     ; 004c376a
    MOV dword ptr [ESP + 0x3d0],EDI     ; 004c3771
    PUSH EBX                            ; 004c3778
    LEA ESI,[ESP + 0x76c]               ; 004c3779
    LEA EDI,[ESP + 0x2ec]               ; 004c3780
    CALL core_actor.cpp_FUN_00408b00    ; 004c3787
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    ADD ESP,0x8                         ; 004c378c
    LEA ESI,[ESP + 0x764]               ; 004c378f
    FLD float ptr [ESP + 0x2fc]         ; 004c3796
    FLD float ptr [ESP + 0x300]         ; 004c379d
    MOVSD ES:EDI,ESI                    ; 004c37a4
    MOVSD ES:EDI,ESI                    ; 004c37a5
    MOVSD ES:EDI,ESI                    ; 004c37a6
    FLD float ptr [ESP + 0x304]         ; 004c37a7
    FXCH ST2                            ; 004c37ae
    FADD float ptr [ESP + 0x2e4]        ; 004c37b0
    FXCH                                ; 004c37b7
    FADD float ptr [ESP + 0x2e8]        ; 004c37b9
    FXCH ST2                            ; 004c37c0
    FADD float ptr [ESP + 0x2ec]        ; 004c37c2
    JMP 0x004c3375                      ; 004c37c9
        ;   XREF to: 004c3375 (UNCONDITIONAL_JUMP)  ; LAB_004c3375
    XOR EAX,EAX                         ; 004c37ce
        ;   Label: LAB_004c37ce
    MOV dword ptr [ESP + 0x494],EAX     ; 004c37d0
    MOV dword ptr [ESP + 0x498],EAX     ; 004c37d7
    LEA EAX,[ESP + 0x494]               ; 004c37de
    PUSH EAX                            ; 004c37e5
    MOV ECX,0x3fc00000                  ; 004c37e6
    LEA ESI,[ESP + 0x5f4]               ; 004c37eb
    PUSH EBX                            ; 004c37f2
    LEA EDI,[ESP + 0x4b4]               ; 004c37f3
    MOV dword ptr [ESP + 0x4a4],ECX     ; 004c37fa
    CALL core_actor.cpp_FUN_00408b00    ; 004c3801
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    ADD ESP,0x8                         ; 004c3806
    LEA ESI,[ESP + 0x5f0]               ; 004c3809
    FLD float ptr [ESP + 0x6e0]         ; 004c3810
    FLD float ptr [ESP + 0x6e4]         ; 004c3817
    MOVSD ES:EDI,ESI                    ; 004c381e
    MOVSD ES:EDI,ESI                    ; 004c381f
    MOVSD ES:EDI,ESI                    ; 004c3820
    FLD float ptr [ESP + 0x6e8]         ; 004c3821
    FXCH ST2                            ; 004c3828
    FADD float ptr [ESP + 0x4ac]        ; 004c382a
    FXCH                                ; 004c3831
    FADD float ptr [ESP + 0x4b0]        ; 004c3833
    FXCH ST2                            ; 004c383a
    FADD float ptr [ESP + 0x4b4]        ; 004c383c
    JMP 0x004c35d5                      ; 004c3843
        ;   XREF to: 004c35d5 (UNCONDITIONAL_JUMP)  ; LAB_004c35d5
    MOV ECX,dword ptr [0x01d5ba14]      ; 004c3848 | DAT_01d5ba14
        ;   Label: LAB_004c3848
    MOV EBX,dword ptr [ESP + 0x7cc]     ; 004c384e
    SHL ECX,0x2                         ; 004c3855
    TEST EBX,EBX                        ; 004c3858
    JZ 0x004c3a37                       ; 004c385a
        ;   XREF to: 004c3a37 (CONDITIONAL_JUMP)  ; LAB_004c3a37
    MOV ESI,EBX                         ; 004c3860
    MOV EAX,dword ptr [ECX + 0x1d5ba04] ; 004c3862
    LEA EDI,[ESP + 0x38c]               ; 004c3868
    ADD EAX,0x20                        ; 004c386f
    LEA ESI,[ESI + 0x20]                ; 004c3872
    PUSH EAX                            ; 004c3875
    MOVSD ES:EDI,ESI                    ; 004c3876
    MOVSD ES:EDI,ESI                    ; 004c3877
    MOVSD ES:EDI,ESI                    ; 004c3878
    PUSH EBX                            ; 004c3879
    LEA ESI,[ESP + 0x2c8]               ; 004c387a
    LEA EDI,[ESP + 0x4d8]               ; 004c3881
    CALL core_actor.cpp_FUN_00408bf0    ; 004c3888
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    MOV EAX,[0x01d5ba14]                ; 004c388d | DAT_01d5ba14
    LEA ESI,[ESP + 0x2c8]               ; 004c3892
    ADD ESP,0x8                         ; 004c3899
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c389c
    MOVSD ES:EDI,ESI                    ; 004c38a3
    MOVSD ES:EDI,ESI                    ; 004c38a4
    MOVSD ES:EDI,ESI                    ; 004c38a5
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c38a6
    FLDZ                                ; 004c38a9
    MOV dword ptr [ESP + 0x390],EAX     ; 004c38ab
    FCOMP float ptr [ESP + 0x4d8]       ; 004c38b2
    FNSTSW AX                           ; 004c38b9
    SAHF                                ; 004c38bb
    JBE 0x004c39b6                      ; 004c38bc
        ;   XREF to: 004c39b6 (CONDITIONAL_JUMP)  ; LAB_004c39b6
    MOV EDX,0xc0000000                  ; 004c38c2
    LEA EAX,[ESP + 0x740]               ; 004c38c7
    LEA ESI,[ESP + 0x560]               ; 004c38ce
    XOR EDI,EDI                         ; 004c38d5
    PUSH EAX                            ; 004c38d7
    MOV dword ptr [ESP + 0x744],EDI     ; 004c38d8
    MOV dword ptr [ESP + 0x748],EDI     ; 004c38df
    PUSH EBX                            ; 004c38e6
    MOV dword ptr [ESP + 0x750],EDX     ; 004c38e7
    LEA EDI,[ESP + 0x6d0]               ; 004c38ee
    CALL core_actor.cpp_FUN_00408b00    ; 004c38f5
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    ADD ESP,0x8                         ; 004c38fa
    LEA ESI,[ESP + 0x560]               ; 004c38fd
    FLD float ptr [ESP + 0x38c]         ; 004c3904
    FLD float ptr [ESP + 0x390]         ; 004c390b
    MOVSD ES:EDI,ESI                    ; 004c3912
    MOVSD ES:EDI,ESI                    ; 004c3913
    MOVSD ES:EDI,ESI                    ; 004c3914
    FLD float ptr [ESP + 0x394]         ; 004c3915
    FXCH ST2                            ; 004c391c
    FADD float ptr [ESP + 0x6c8]        ; 004c391e
    FXCH                                ; 004c3925
    FADD float ptr [ESP + 0x6cc]        ; 004c3927
    FXCH ST2                            ; 004c392e
    FADD float ptr [ESP + 0x6d0]        ; 004c3930
    FXCH                                ; 004c3937
        ;   Label: LAB_004c3937
    FSTP float ptr [ESP + 0x38c]        ; 004c3939
    FXCH                                ; 004c3940
    FSTP float ptr [ESP + 0x390]        ; 004c3942
    FSTP float ptr [ESP + 0x394]        ; 004c3949
    LEA EAX,[ESP + 0x38c]               ; 004c3950
    CMP EAX,0x1d1e328                   ; 004c3957
    JZ 0x004c3982                       ; 004c395c
        ;   XREF to: 004c3982 (CONDITIONAL_JUMP)  ; LAB_004c3982
    MOV EAX,dword ptr [ESP + 0x38c]     ; 004c395e
    MOV [0x01d1e328],EAX                ; 004c3965 | DAT_01d1e328
    MOV EAX,dword ptr [ESP + 0x390]     ; 004c396a
    MOV [0x01d1e32c],EAX                ; 004c3971 | DAT_01d1e32c
    MOV EAX,dword ptr [ESP + 0x394]     ; 004c3976
    MOV [0x01d1e330],EAX                ; 004c397d | DAT_01d1e330
    MOV EAX,dword ptr [ESP + 0x850]     ; 004c3982
        ;   Label: LAB_004c3982
    ADD EAX,0x20                        ; 004c3989
    CMP EAX,0x1d22c30                   ; 004c398c
    JZ 0x004c1893                       ; 004c3991
        ;   XREF to: 004c1893 (CONDITIONAL_JUMP)  ; LAB_004c1893
    FLD float ptr [EAX]                 ; 004c3997
    FLD float ptr [EAX + 0x8]           ; 004c3999
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c399c
    MOV dword ptr [0x01d22c34],EDX      ; 004c399f | DAT_01d22c34
    FSTP float ptr [0x01d22c38]         ; 004c39a5 | DAT_01d22c38
    FSTP float ptr [0x01d22c30]         ; 004c39ab | DAT_01d22c30
    JMP 0x004c1893                      ; 004c39b1
        ;   XREF to: 004c1893 (UNCONDITIONAL_JUMP)  ; LAB_004c1893
    MOV EBX,0x40000000                  ; 004c39b6
        ;   Label: LAB_004c39b6
    LEA EAX,[ESP + 0x794]               ; 004c39bb
    MOV ESI,dword ptr [ESP + 0x7cc]     ; 004c39c2
    LEA EDI,[ESP + 0x5a8]               ; 004c39c9
    XOR EDX,EDX                         ; 004c39d0
    PUSH EAX                            ; 004c39d2
    MOV dword ptr [ESP + 0x798],EDX     ; 004c39d3
    MOV dword ptr [ESP + 0x79c],EDX     ; 004c39da
    PUSH ESI                            ; 004c39e1
    LEA ESI,[ESP + 0x3b8]               ; 004c39e2
    MOV dword ptr [ESP + 0x7a4],EBX     ; 004c39e9
    CALL core_actor.cpp_FUN_00408b00    ; 004c39f0
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    ADD ESP,0x8                         ; 004c39f5
    LEA ESI,[ESP + 0x3b0]               ; 004c39f8
    FLD float ptr [ESP + 0x38c]         ; 004c39ff
    FLD float ptr [ESP + 0x390]         ; 004c3a06
    MOVSD ES:EDI,ESI                    ; 004c3a0d
    MOVSD ES:EDI,ESI                    ; 004c3a0e
    MOVSD ES:EDI,ESI                    ; 004c3a0f
    FLD float ptr [ESP + 0x394]         ; 004c3a10
    FXCH ST2                            ; 004c3a17
    FADD float ptr [ESP + 0x5a8]        ; 004c3a19
    FXCH                                ; 004c3a20
    FADD float ptr [ESP + 0x5ac]        ; 004c3a22
    FXCH ST2                            ; 004c3a29
    FADD float ptr [ESP + 0x5b0]        ; 004c3a2b
    JMP 0x004c3937                      ; 004c3a32
        ;   XREF to: 004c3937 (UNCONDITIONAL_JUMP)  ; LAB_004c3937
    MOV ESI,dword ptr [ESP + 0x7d4]     ; 004c3a37
        ;   Label: LAB_004c3a37
    TEST ESI,ESI                        ; 004c3a3e
    JZ 0x004c3af0                       ; 004c3a40
        ;   XREF to: 004c3af0 (CONDITIONAL_JUMP)  ; LAB_004c3af0
    LEA EDI,[ESP + 0x3ec]               ; 004c3a46
    MOV EAX,dword ptr [ECX + 0x1d5ba04] ; 004c3a4d
    LEA ESI,[ESI + 0x20]                ; 004c3a53
    ADD EAX,0x20                        ; 004c3a56
    MOVSD ES:EDI,ESI                    ; 004c3a59
    MOVSD ES:EDI,ESI                    ; 004c3a5a
    MOVSD ES:EDI,ESI                    ; 004c3a5b
    PUSH EAX                            ; 004c3a5c
    MOV EDI,dword ptr [ESP + 0x7d8]     ; 004c3a5d
    PUSH EDI                            ; 004c3a64
    LEA ESI,[ESP + 0x178]               ; 004c3a65
    CALL core_actor.cpp_FUN_00408bf0    ; 004c3a6c
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    MOV EAX,[0x01d5ba14]                ; 004c3a71 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c3a76
    ADD ESP,0x8                         ; 004c3a7d
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c3a80
    MOV dword ptr [ESP + 0x3f0],EAX     ; 004c3a83
    LEA EAX,[ESP + 0x3ec]               ; 004c3a8a
    CMP EAX,0x1d1e328                   ; 004c3a91
    JZ 0x004c3abc                       ; 004c3a96
        ;   XREF to: 004c3abc (CONDITIONAL_JUMP)  ; LAB_004c3abc
    MOV EAX,dword ptr [ESP + 0x3ec]     ; 004c3a98
    MOV [0x01d1e328],EAX                ; 004c3a9f | DAT_01d1e328
    MOV EAX,dword ptr [ESP + 0x3f0]     ; 004c3aa4
    MOV [0x01d1e32c],EAX                ; 004c3aab | DAT_01d1e32c
    MOV EAX,dword ptr [ESP + 0x3f4]     ; 004c3ab0
    MOV [0x01d1e330],EAX                ; 004c3ab7 | DAT_01d1e330
    MOV EAX,dword ptr [ESP + 0x84c]     ; 004c3abc
        ;   Label: LAB_004c3abc
    ADD EAX,0x20                        ; 004c3ac3
    CMP EAX,0x1d22c30                   ; 004c3ac6
    JZ 0x004c1893                       ; 004c3acb
        ;   XREF to: 004c1893 (CONDITIONAL_JUMP)  ; LAB_004c1893
    FLD float ptr [EAX]                 ; 004c3ad1
    FLD float ptr [EAX + 0x8]           ; 004c3ad3
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c3ad6
    MOV dword ptr [0x01d22c34],EDX      ; 004c3ad9 | DAT_01d22c34
    FSTP float ptr [0x01d22c38]         ; 004c3adf | DAT_01d22c38
    FSTP float ptr [0x01d22c30]         ; 004c3ae5 | DAT_01d22c30
    JMP 0x004c1893                      ; 004c3aeb
        ;   XREF to: 004c1893 (UNCONDITIONAL_JUMP)  ; LAB_004c1893
    CMP dword ptr [ESP + 0x7e4],0x0     ; 004c3af0
        ;   Label: LAB_004c3af0
    JZ 0x004c3c4f                       ; 004c3af8
        ;   XREF to: 004c3c4f (CONDITIONAL_JUMP)  ; LAB_004c3c4f
    MOV ESI,dword ptr [ESP + 0x7e4]     ; 004c3afe
    LEA EDI,[ESP + 0x230]               ; 004c3b05
    LEA ESI,[ESI + 0x20]                ; 004c3b0c
    MOV EAX,dword ptr [ESP + 0x7e4]     ; 004c3b0f
    MOV EDX,dword ptr [ESP + 0x7e4]     ; 004c3b16
    MOVSD ES:EDI,ESI                    ; 004c3b1d
    MOVSD ES:EDI,ESI                    ; 004c3b1e
    MOVSD ES:EDI,ESI                    ; 004c3b1f
    PUSH EDX                            ; 004c3b20
    MOV EAX,dword ptr [EAX + 0x154]     ; 004c3b21
    LEA ESI,[ESP + 0xa8]                ; 004c3b27
    LEA EDI,[ESP + 0x90]                ; 004c3b2e
    CALL dword ptr [EAX + 0x1c]         ; 004c3b35
    MOV ECX,0x6                         ; 004c3b38
    LEA ESI,[ESP + 0xa8]                ; 004c3b3d
    ADD ESP,0x4                         ; 004c3b44
    MOVSD.REP ES:EDI,ESI                ; 004c3b47
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004c3b49
    MOV dword ptr [ESP + 0x460],EAX     ; 004c3b50
    LEA EAX,[ESP + 0x458]               ; 004c3b57
    MOV dword ptr [ESP + 0x458],EBX     ; 004c3b5e
    PUSH EAX                            ; 004c3b65
    MOV ESI,dword ptr [ESP + 0x7e8]     ; 004c3b66
    MOV dword ptr [ESP + 0x460],EBX     ; 004c3b6d
    PUSH ESI                            ; 004c3b74
    LEA ESI,[ESP + 0x4f0]               ; 004c3b75
    LEA EDI,[ESP + 0x1a8]               ; 004c3b7c
    CALL core_actor.cpp_FUN_00408b80    ; 004c3b83
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x4f0]               ; 004c3b88
    LEA EAX,[ESP + 0x1a8]               ; 004c3b8f
    ADD ESP,0x8                         ; 004c3b96
    LEA EDX,[ESP + 0x458]               ; 004c3b99
    MOVSD ES:EDI,ESI                    ; 004c3ba0
    MOVSD ES:EDI,ESI                    ; 004c3ba1
    MOVSD ES:EDI,ESI                    ; 004c3ba2
    CMP EDX,EAX                         ; 004c3ba3
    JZ 0x004c3bd1                       ; 004c3ba5
        ;   XREF to: 004c3bd1 (CONDITIONAL_JUMP)  ; LAB_004c3bd1
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 004c3ba7
    MOV dword ptr [ESP + 0x458],EAX     ; 004c3bae
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 004c3bb5
    MOV dword ptr [ESP + 0x45c],EAX     ; 004c3bbc
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 004c3bc3
    MOV dword ptr [ESP + 0x460],EAX     ; 004c3bca
    MOV EAX,[0x01d5ba14]                ; 004c3bd1 | DAT_01d5ba14
        ;   Label: LAB_004c3bd1
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c3bd6
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c3bdd
    MOV dword ptr [ESP + 0x234],EAX     ; 004c3be0
    LEA EAX,[ESP + 0x230]               ; 004c3be7
    CMP EAX,0x1d1e328                   ; 004c3bee
    JZ 0x004c3c19                       ; 004c3bf3
        ;   XREF to: 004c3c19 (CONDITIONAL_JUMP)  ; LAB_004c3c19
    MOV EAX,dword ptr [ESP + 0x230]     ; 004c3bf5
    MOV [0x01d1e328],EAX                ; 004c3bfc | DAT_01d1e328
    MOV EAX,dword ptr [ESP + 0x234]     ; 004c3c01
    MOV [0x01d1e32c],EAX                ; 004c3c08 | DAT_01d1e32c
    MOV EAX,dword ptr [ESP + 0x238]     ; 004c3c0d
    MOV [0x01d1e330],EAX                ; 004c3c14 | DAT_01d1e330
    LEA EAX,[ESP + 0x458]               ; 004c3c19
        ;   Label: LAB_004c3c19
    CMP EAX,0x1d22c30                   ; 004c3c20
    JZ 0x004c1893                       ; 004c3c25
        ;   XREF to: 004c1893 (CONDITIONAL_JUMP)  ; LAB_004c1893
    MOV EAX,dword ptr [ESP + 0x458]     ; 004c3c2b
    MOV [0x01d22c30],EAX                ; 004c3c32 | DAT_01d22c30
    MOV EAX,dword ptr [ESP + 0x45c]     ; 004c3c37
    MOV [0x01d22c34],EAX                ; 004c3c3e | DAT_01d22c34
    MOV EAX,dword ptr [ESP + 0x460]     ; 004c3c43
    JMP 0x004c188e                      ; 004c3c4a
        ;   XREF to: 004c188e (UNCONDITIONAL_JUMP)  ; LAB_004c188e
    TEST EAX,EAX                        ; 004c3c4f
        ;   Label: LAB_004c3c4f
    JZ 0x004c3cfa                       ; 004c3c51
        ;   XREF to: 004c3cfa (CONDITIONAL_JUMP)  ; LAB_004c3cfa
    MOV EDX,dword ptr [ECX + 0x1d5ba04] ; 004c3c57
    LEA EDI,[ESP + 0x614]               ; 004c3c5d
    ADD EDX,0x20                        ; 004c3c64
    LEA ESI,[EAX + 0x20]                ; 004c3c67
    PUSH EDX                            ; 004c3c6a
    MOVSD ES:EDI,ESI                    ; 004c3c6b
    MOVSD ES:EDI,ESI                    ; 004c3c6c
    MOVSD ES:EDI,ESI                    ; 004c3c6d
    PUSH EAX                            ; 004c3c6e
    LEA ESI,[ESP + 0x55c]               ; 004c3c6f
    CALL core_actor.cpp_FUN_00408bf0    ; 004c3c76
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    MOV EAX,[0x01d5ba14]                ; 004c3c7b | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c3c80
    ADD ESP,0x8                         ; 004c3c87
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c3c8a
    MOV dword ptr [ESP + 0x618],EAX     ; 004c3c8d
    LEA EAX,[ESP + 0x614]               ; 004c3c94
    CMP EAX,0x1d1e328                   ; 004c3c9b
    JZ 0x004c3cc6                       ; 004c3ca0
        ;   XREF to: 004c3cc6 (CONDITIONAL_JUMP)  ; LAB_004c3cc6
    MOV EAX,dword ptr [ESP + 0x614]     ; 004c3ca2
    MOV [0x01d1e328],EAX                ; 004c3ca9 | DAT_01d1e328
    MOV EAX,dword ptr [ESP + 0x618]     ; 004c3cae
    MOV [0x01d1e32c],EAX                ; 004c3cb5 | DAT_01d1e32c
    MOV EAX,dword ptr [ESP + 0x61c]     ; 004c3cba
    MOV [0x01d1e330],EAX                ; 004c3cc1 | DAT_01d1e330
    MOV EAX,dword ptr [ESP + 0x848]     ; 004c3cc6
        ;   Label: LAB_004c3cc6
    ADD EAX,0x20                        ; 004c3ccd
    CMP EAX,0x1d22c30                   ; 004c3cd0
    JZ 0x004c1893                       ; 004c3cd5
        ;   XREF to: 004c1893 (CONDITIONAL_JUMP)  ; LAB_004c1893
    FLD float ptr [EAX]                 ; 004c3cdb
    FLD float ptr [EAX + 0x8]           ; 004c3cdd
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c3ce0
    MOV dword ptr [0x01d22c34],EDX      ; 004c3ce3 | DAT_01d22c34
    FSTP float ptr [0x01d22c38]         ; 004c3ce9 | DAT_01d22c38
    FSTP float ptr [0x01d22c30]         ; 004c3cef | DAT_01d22c30
    JMP 0x004c1893                      ; 004c3cf5
        ;   XREF to: 004c1893 (UNCONDITIONAL_JUMP)  ; LAB_004c1893
    MOV EAX,dword ptr [ESP + 0x7d0]     ; 004c3cfa
        ;   Label: LAB_004c3cfa
    TEST EAX,EAX                        ; 004c3d01
    JZ 0x004c3e65                       ; 004c3d03
        ;   XREF to: 004c3e65 (CONDITIONAL_JUMP)  ; LAB_004c3e65
    MOV ESI,EAX                         ; 004c3d09
    LEA EDI,[ESP + 0x74c]               ; 004c3d0b
    MOV EAX,dword ptr [ECX + 0x1d5ba04] ; 004c3d12
    LEA ESI,[ESI + 0x20]                ; 004c3d18
    ADD EAX,0x20                        ; 004c3d1b
    MOV ECX,dword ptr [ESP + 0x7d0]     ; 004c3d1e
    PUSH EAX                            ; 004c3d25
    MOVSD ES:EDI,ESI                    ; 004c3d26
    MOVSD ES:EDI,ESI                    ; 004c3d27
    MOVSD ES:EDI,ESI                    ; 004c3d28
    PUSH ECX                            ; 004c3d29
    LEA ESI,[ESP + 0x64c]               ; 004c3d2a
    CALL core_actor.cpp_FUN_00408bf0    ; 004c3d31
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    MOV EAX,[0x01d5ba14]                ; 004c3d36 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c3d3b
    ADD ESP,0x8                         ; 004c3d42
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c3d45
    MOV EBX,dword ptr [ESP + 0x7d0]     ; 004c3d48
    MOV dword ptr [ESP + 0x750],EAX     ; 004c3d4f
    MOV EAX,dword ptr [ESP + 0x7d0]     ; 004c3d56
    PUSH EBX                            ; 004c3d5d
    MOV EAX,dword ptr [EAX + 0x154]     ; 004c3d5e
    LEA ESI,[ESP + 0x78]                ; 004c3d64
    LEA EDI,[ESP + 0x60]                ; 004c3d68
    CALL dword ptr [EAX + 0x1c]         ; 004c3d6c
    MOV ECX,0x6                         ; 004c3d6f
    LEA ESI,[ESP + 0x78]                ; 004c3d74
    ADD ESP,0x4                         ; 004c3d78
    MOVSD.REP ES:EDI,ESI                ; 004c3d7b
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004c3d7d
    MOV dword ptr [ESP + 0x3a8],EAX     ; 004c3d81
    LEA EAX,[ESP + 0x3a4]               ; 004c3d88
    XOR ESI,ESI                         ; 004c3d8f
    PUSH EAX                            ; 004c3d91
    MOV dword ptr [ESP + 0x3a8],ESI     ; 004c3d92
    MOV dword ptr [ESP + 0x3b0],ESI     ; 004c3d99
    PUSH EBX                            ; 004c3da0
    LEA ESI,[ESP + 0x244]               ; 004c3da1
    LEA EDI,[ESP + 0x610]               ; 004c3da8
    CALL core_actor.cpp_FUN_00408b80    ; 004c3daf
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x244]               ; 004c3db4
    LEA EAX,[ESP + 0x610]               ; 004c3dbb
    ADD ESP,0x8                         ; 004c3dc2
    LEA EDX,[ESP + 0x3a4]               ; 004c3dc5
    MOVSD ES:EDI,ESI                    ; 004c3dcc
    MOVSD ES:EDI,ESI                    ; 004c3dcd
    MOVSD ES:EDI,ESI                    ; 004c3dce
    CMP EDX,EAX                         ; 004c3dcf
    JZ 0x004c3dfd                       ; 004c3dd1
        ;   XREF to: 004c3dfd (CONDITIONAL_JUMP)  ; LAB_004c3dfd
    MOV EAX,dword ptr [ESP + 0x608]     ; 004c3dd3
    MOV dword ptr [ESP + 0x3a4],EAX     ; 004c3dda
    MOV EAX,dword ptr [ESP + 0x60c]     ; 004c3de1
    MOV dword ptr [ESP + 0x3a8],EAX     ; 004c3de8
    MOV EAX,dword ptr [ESP + 0x610]     ; 004c3def
    MOV dword ptr [ESP + 0x3ac],EAX     ; 004c3df6
    LEA EAX,[ESP + 0x74c]               ; 004c3dfd
        ;   Label: LAB_004c3dfd
    CMP EAX,0x1d1e328                   ; 004c3e04
    JZ 0x004c3e2f                       ; 004c3e09
        ;   XREF to: 004c3e2f (CONDITIONAL_JUMP)  ; LAB_004c3e2f
    MOV EAX,dword ptr [ESP + 0x74c]     ; 004c3e0b
    MOV [0x01d1e328],EAX                ; 004c3e12 | DAT_01d1e328
    MOV EAX,dword ptr [ESP + 0x750]     ; 004c3e17
    MOV [0x01d1e32c],EAX                ; 004c3e1e | DAT_01d1e32c
    MOV EAX,dword ptr [ESP + 0x754]     ; 004c3e23
    MOV [0x01d1e330],EAX                ; 004c3e2a | DAT_01d1e330
    LEA EAX,[ESP + 0x3a4]               ; 004c3e2f
        ;   Label: LAB_004c3e2f
    CMP EAX,0x1d22c30                   ; 004c3e36
    JZ 0x004c1893                       ; 004c3e3b
        ;   XREF to: 004c1893 (CONDITIONAL_JUMP)  ; LAB_004c1893
    MOV EAX,dword ptr [ESP + 0x3a4]     ; 004c3e41
    MOV [0x01d22c30],EAX                ; 004c3e48 | DAT_01d22c30
    MOV EAX,dword ptr [ESP + 0x3a8]     ; 004c3e4d
    MOV [0x01d22c34],EAX                ; 004c3e54 | DAT_01d22c34
    MOV EAX,dword ptr [ESP + 0x3ac]     ; 004c3e59
    JMP 0x004c188e                      ; 004c3e60
        ;   XREF to: 004c188e (UNCONDITIONAL_JUMP)  ; LAB_004c188e
    CMP dword ptr [0x01c5fae4],0x1      ; 004c3e65 | DAT_01c5fae4
        ;   Label: LAB_004c3e65
    JNZ 0x004c1893                      ; 004c3e6c
        ;   XREF to: 004c1893 (CONDITIONAL_JUMP)  ; LAB_004c1893
    MOV EAX,dword ptr [ESP + 0x7f4]     ; 004c3e72
    ADD EAX,0x20                        ; 004c3e79
    CMP EAX,0x1d1e328                   ; 004c3e7c
    JZ 0x004c1893                       ; 004c3e81
        ;   XREF to: 004c1893 (CONDITIONAL_JUMP)  ; LAB_004c1893
    FLD float ptr [EAX]                 ; 004c3e87
    FLD float ptr [EAX + 0x8]           ; 004c3e89
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c3e8c
    MOV dword ptr [0x01d1e32c],EDX      ; 004c3e8f | DAT_01d1e32c
    FSTP float ptr [0x01d1e330]         ; 004c3e95 | DAT_01d1e330
    FSTP float ptr [0x01d1e328]         ; 004c3e9b | DAT_01d1e328
    JMP 0x004c1893                      ; 004c3ea1
        ;   XREF to: 004c1893 (UNCONDITIONAL_JUMP)  ; LAB_004c1893
    MOV ESI,0x1                         ; 004c3ea6
        ;   Label: LAB_004c3ea6
    XOR EDI,EDI                         ; 004c3eab
    MOV EAX,[0x01d1e34c]                ; 004c3ead | DAT_01d1e34c
    MOV dword ptr [0x01d1e344],EDI      ; 004c3eb2 | DAT_01d1e344
    MOV dword ptr [0x01d1e334],ESI      ; 004c3eb8 | DAT_01d1e334
    TEST EAX,EAX                        ; 004c3ebe
    JZ 0x004c3ecc                       ; 004c3ec0
        ;   XREF to: 004c3ecc (CONDITIONAL_JUMP)  ; LAB_004c3ecc
    MOV dword ptr [0x01d22c30],0x7149f2ca ; 004c3ec2 | DAT_01d22c30
        ;   Label: LAB_004c3ec2
    CMP dword ptr [0x01d1e334],0x0      ; 004c3ecc | DAT_01d1e334
        ;   Label: LAB_004c3ecc
    JZ 0x004c18c1                       ; 004c3ed3
        ;   XREF to: 004c18c1 (CONDITIONAL_JUMP)  ; LAB_004c18c1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c3ed9
        ;   Label: LAB_004c3ed9
    CMP dword ptr [EAX + 0xb0],0x0      ; 004c3edc
    JZ 0x004c457c                       ; 004c3ee3
        ;   XREF to: 004c457c (CONDITIONAL_JUMP)  ; LAB_004c457c
    MOV EAX,dword ptr [EAX + 0x30]      ; 004c3ee9
    CMP byte ptr [EAX + 0x1c6cef0],0x0  ; 004c3eec | DAT_01c6cef0
    SETZ AL                             ; 004c3ef3
    MOV EDX,dword ptr [EBP + 0x18]      ; 004c3ef6
        ;   Label: LAB_004c3ef6
    AND EAX,0xff                        ; 004c3ef9
    MOV dword ptr [EDX + 0x8],EAX       ; 004c3efe
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c3f01
    MOV ESI,dword ptr [EAX + 0x8]       ; 004c3f04
    TEST ESI,ESI                        ; 004c3f07
    JZ 0x004c458a                       ; 004c3f09
        ;   XREF to: 004c458a (CONDITIONAL_JUMP)  ; LAB_004c458a
    MOV dword ptr [0x01d1e348],0x1      ; 004c3f0f | DAT_01d1e348
    JMP 0x004c18c1                      ; 004c3f19
        ;   XREF to: 004c18c1 (UNCONDITIONAL_JUMP)  ; LAB_004c18c1
    MOV ESI,dword ptr [ESP + 0x7e0]     ; 004c3f1e
        ;   Label: LAB_004c3f1e
    CMP ESI,0x20                        ; 004c3f25
    JGE 0x004c4132                      ; 004c3f28
        ;   XREF to: 004c4132 (CONDITIONAL_JUMP)  ; LAB_004c4132
    MOV EAX,dword ptr [ESP + 0x7bc]     ; 004c3f2e
        ;   Label: LAB_004c3f2e
    MOV EDX,EAX                         ; 004c3f35
    SAR EDX,0x1f                        ; 004c3f37
    SUB EAX,EDX                         ; 004c3f3a
    SAR EAX,0x1                         ; 004c3f3c
    PUSH EAX                            ; 004c3f3e
    MOV EAX,dword ptr [ESP + 0x7dc]     ; 004c3f3f
    MOV EDX,EAX                         ; 004c3f46
    SAR EDX,0x1f                        ; 004c3f48
    SUB EAX,EDX                         ; 004c3f4b
    SAR EAX,0x1                         ; 004c3f4d
    PUSH EAX                            ; 004c3f4f
    PUSH 0x2038f4c                      ; 004c3f50
    LEA ESI,[ESP + 0x2fc]               ; 004c3f55
    LEA EDI,[ESP + 0x260]               ; 004c3f5c
    CALL core_dcamera.cpp_FUN_00449eb0  ; 004c3f63
        ;   XREF to: 00449eb0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00449eb0()
    LEA ESI,[ESP + 0x2fc]               ; 004c3f68
    ADD ESP,0xc                         ; 004c3f6f
    LEA EAX,[ESP + 0x254]               ; 004c3f72
    LEA EBX,[ESP + 0x278]               ; 004c3f79
    PUSH EAX                            ; 004c3f80
    MOVSD ES:EDI,ESI                    ; 004c3f81
    MOVSD ES:EDI,ESI                    ; 004c3f82
    MOVSD ES:EDI,ESI                    ; 004c3f83
    PUSH 0x2038f4c                      ; 004c3f84
    LEA ESI,[ESP + 0x640]               ; 004c3f89
    LEA EDI,[ESP + 0x25c]               ; 004c3f90
    CALL core_dcamera.cpp_FUN_00449f80  ; 004c3f97
        ;   XREF to: 00449f80 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00449f80()
    LEA ESI,[ESP + 0x640]               ; 004c3f9c
    ADD ESP,0x8                         ; 004c3fa3
    LEA EAX,[ESP + 0x254]               ; 004c3fa6
    MOVSD ES:EDI,ESI                    ; 004c3fad
    MOVSD ES:EDI,ESI                    ; 004c3fae
    MOVSD ES:EDI,ESI                    ; 004c3faf
    FILD dword ptr [EAX]                ; 004c3fb0
    FMUL float ptr [0x005e06e4]         ; 004c3fb2 | DAT_005e06e4
    FSTP float ptr [EBX]                ; 004c3fb8
    FILD dword ptr [EAX + 0x4]          ; 004c3fba
    FMUL float ptr [0x005e06e4]         ; 004c3fbd | DAT_005e06e4
    FSTP float ptr [EBX + 0x4]          ; 004c3fc3
    FILD dword ptr [EAX + 0x8]          ; 004c3fc6
    FMUL float ptr [0x005e06e4]         ; 004c3fc9 | DAT_005e06e4
    FSTP float ptr [EBX + 0x8]          ; 004c3fcf
    LEA EAX,[ESP + 0x17c]               ; 004c3fd2
    PUSH EAX                            ; 004c3fd9
    LEA ESI,[ESP + 0x6f0]               ; 004c3fda
    PUSH 0x2038f4c                      ; 004c3fe1
    LEA EDI,[ESP + 0x184]               ; 004c3fe6
    LEA EBX,[ESP + 0x2bc]               ; 004c3fed
    CALL core_dcamera.cpp_FUN_00449f80  ; 004c3ff4
        ;   XREF to: 00449f80 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00449f80()
    LEA ESI,[ESP + 0x6f4]               ; 004c3ff9
    ADD ESP,0x8                         ; 004c4000
    LEA EAX,[ESP + 0x17c]               ; 004c4003
    MOVSD ES:EDI,ESI                    ; 004c400a
    MOVSD ES:EDI,ESI                    ; 004c400b
    MOVSD ES:EDI,ESI                    ; 004c400c
    FILD dword ptr [EAX]                ; 004c400d
    FMUL float ptr [0x005e06e4]         ; 004c400f | DAT_005e06e4
    FSTP float ptr [EBX]                ; 004c4015
    FILD dword ptr [EAX + 0x4]          ; 004c4017
    FMUL float ptr [0x005e06e4]         ; 004c401a | DAT_005e06e4
    FSTP float ptr [EBX + 0x4]          ; 004c4020
    FILD dword ptr [EAX + 0x8]          ; 004c4023
    FMUL float ptr [0x005e06e4]         ; 004c4026 | DAT_005e06e4
    FSTP float ptr [EBX + 0x8]          ; 004c402c
    FLD float ptr [ESP + 0x2b4]         ; 004c402f
    FLD float ptr [ESP + 0x2b8]         ; 004c4036
    FLD float ptr [ESP + 0x2bc]         ; 004c403d
    LEA EDI,[ESP + 0x2cc]               ; 004c4044
    LEA ESI,[ESP + 0x32c]               ; 004c404b
    FXCH ST2                            ; 004c4052
    FSUB float ptr [ESP + 0x278]        ; 004c4054
    FXCH                                ; 004c405b
    FSUB float ptr [ESP + 0x27c]        ; 004c405d
    FXCH ST2                            ; 004c4064
    FSUB float ptr [ESP + 0x280]        ; 004c4066
    FXCH                                ; 004c406d
    FSTP float ptr [ESP + 0x32c]        ; 004c406f
    FXCH                                ; 004c4076
    FSTP float ptr [ESP + 0x330]        ; 004c4078
    FSTP float ptr [ESP + 0x334]        ; 004c407f
    MOVSD ES:EDI,ESI                    ; 004c4086
    MOVSD ES:EDI,ESI                    ; 004c4087
    MOVSD ES:EDI,ESI                    ; 004c4088
    FLD float ptr [ESP + 0x2cc]         ; 004c4089
    FMUL ST0                            ; 004c4090
    FLD float ptr [ESP + 0x2d4]         ; 004c4092
    FMUL ST0                            ; 004c4099
    FADDP                               ; 004c409b
    FSQRT                               ; 004c409d
    XOR EDI,EDI                         ; 004c409f
    FLDZ                                ; 004c40a1
    MOV dword ptr [ESP + 0x2d0],EDI     ; 004c40a3
    FXCH                                ; 004c40aa
    FSTP float ptr [ESP + 0x7f8]        ; 004c40ac
    FCOMP float ptr [ESP + 0x7f8]       ; 004c40b3
    FNSTSW AX                           ; 004c40ba
    SAHF                                ; 004c40bc
    JNC 0x004c440e                      ; 004c40bd
        ;   XREF to: 004c440e (CONDITIONAL_JUMP)  ; LAB_004c440e
    FLD1                                ; 004c40c3
    FLD float ptr [ESP + 0x2cc]         ; 004c40c5
    FXCH                                ; 004c40cc
    FDIV float ptr [ESP + 0x7f8]        ; 004c40ce
    FXCH                                ; 004c40d5
    FMUL ST1                            ; 004c40d7
    FLDZ                                ; 004c40d9
    FMUL ST2                            ; 004c40db
    FLD float ptr [ESP + 0x2d4]         ; 004c40dd
    FMULP ST3                           ; 004c40e4
    FXCH                                ; 004c40e6
    FSTP float ptr [ESP + 0x2cc]        ; 004c40e8
    FSTP float ptr [ESP + 0x2d0]        ; 004c40ef
    FSTP float ptr [ESP + 0x2d4]        ; 004c40f6
    CMP dword ptr [ESP + 0x7b4],0x0     ; 004c40fd
        ;   Label: LAB_004c40fd
    JZ 0x004c4421                       ; 004c4105
        ;   XREF to: 004c4421 (CONDITIONAL_JUMP)  ; LAB_004c4421
    TEST byte ptr [0x01c5fae4],0x2      ; 004c410b | DAT_01c5fae4
    JZ 0x004c4421                       ; 004c4112
        ;   XREF to: 004c4421 (CONDITIONAL_JUMP)  ; LAB_004c4421
    CMP dword ptr [0x01d1e334],0x1      ; 004c4118 | DAT_01d1e334
    JZ 0x004c3ec2                       ; 004c411f
        ;   XREF to: 004c3ec2 (CONDITIONAL_JUMP)  ; LAB_004c3ec2
    XOR EDX,EDX                         ; 004c4125
    MOV dword ptr [0x01d1e334],EDX      ; 004c4127 | DAT_01d1e334
    JMP 0x004c3ec2                      ; 004c412d
        ;   XREF to: 004c3ec2 (UNCONDITIONAL_JUMP)  ; LAB_004c3ec2
    MOV EAX,dword ptr [ESP + 0x7d8]     ; 004c4132
        ;   Label: LAB_004c4132
    SUB EAX,0x20                        ; 004c4139
    CMP EAX,ESI                         ; 004c413c
    JL 0x004c3f2e                       ; 004c413e
        ;   XREF to: 004c3f2e (CONDITIONAL_JUMP)  ; LAB_004c3f2e
    CMP dword ptr [ESP + 0x81c],0x20    ; 004c4144
    JL 0x004c3f2e                       ; 004c414c
        ;   XREF to: 004c3f2e (CONDITIONAL_JUMP)  ; LAB_004c3f2e
    MOV EAX,dword ptr [ESP + 0x7bc]     ; 004c4152
    MOV EDX,dword ptr [ESP + 0x81c]     ; 004c4159
    SUB EAX,0x20                        ; 004c4160
    CMP EAX,EDX                         ; 004c4163
    JL 0x004c3f2e                       ; 004c4165
        ;   XREF to: 004c3f2e (CONDITIONAL_JUMP)  ; LAB_004c3f2e
    LEA EAX,[ESP + 0x17c]               ; 004c416b
    PUSH EAX                            ; 004c4172
    PUSH 0x2038f4c                      ; 004c4173
    LEA ESI,[ESP + 0x730]               ; 004c4178
    LEA EDI,[ESP + 0x184]               ; 004c417f
    CALL core_dcamera.cpp_FUN_00449f80  ; 004c4186
        ;   XREF to: 00449f80 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00449f80()
    LEA ESI,[ESP + 0x730]               ; 004c418b
    ADD ESP,0x8                         ; 004c4192
    LEA EBX,[ESP + 0x464]               ; 004c4195
    MOVSD ES:EDI,ESI                    ; 004c419c
    MOVSD ES:EDI,ESI                    ; 004c419d
    MOVSD ES:EDI,ESI                    ; 004c419e
    LEA EAX,[ESP + 0x17c]               ; 004c419f
    LEA EDI,[ESP + 0x6bc]               ; 004c41a6
    FILD dword ptr [EAX]                ; 004c41ad
    FMUL float ptr [0x005e06e4]         ; 004c41af | DAT_005e06e4
    FSTP float ptr [EBX]                ; 004c41b5
    FILD dword ptr [EAX + 0x4]          ; 004c41b7
    FMUL float ptr [0x005e06e4]         ; 004c41ba | DAT_005e06e4
    FSTP float ptr [EBX + 0x4]          ; 004c41c0
    FILD dword ptr [EAX + 0x8]          ; 004c41c3
    FMUL float ptr [0x005e06e4]         ; 004c41c6 | DAT_005e06e4
    FSTP float ptr [EBX + 0x8]          ; 004c41cc
    MOV ESI,0x2038f50                   ; 004c41cf
    MOVSD ES:EDI,ESI                    ; 004c41d4 | g_CDemonCameraInstance.base.position
    MOVSD ES:EDI,ESI                    ; 004c41d5 | g_CDemonCameraInstance.base.position+4
    MOVSD ES:EDI,ESI                    ; 004c41d6 | g_CDemonCameraInstance.base.position+8
    FLD float ptr [ESP + 0x464]         ; 004c41d7
    LEA EDI,[ESP + 0x4c4]               ; 004c41de
    LEA ESI,[ESP + 0x6bc]               ; 004c41e5
    FLD float ptr [ESP + 0x468]         ; 004c41ec
    MOVSD ES:EDI,ESI                    ; 004c41f3
    MOVSD ES:EDI,ESI                    ; 004c41f4
    MOVSD ES:EDI,ESI                    ; 004c41f5
    FLD float ptr [ESP + 0x46c]         ; 004c41f6
    LEA EDI,[ESP + 0x4dc]               ; 004c41fd
    LEA ESI,[ESP + 0x548]               ; 004c4204
    FXCH ST2                            ; 004c420b
    FSUB float ptr [ESP + 0x4c4]        ; 004c420d
    FXCH                                ; 004c4214
    FSUB float ptr [ESP + 0x4c8]        ; 004c4216
    FXCH ST2                            ; 004c421d
    FSUB float ptr [ESP + 0x4cc]        ; 004c421f
    FXCH                                ; 004c4226
    FSTP float ptr [ESP + 0x548]        ; 004c4228
    FXCH                                ; 004c422f
    FSTP float ptr [ESP + 0x54c]        ; 004c4231
    FSTP float ptr [ESP + 0x550]        ; 004c4238
    MOVSD ES:EDI,ESI                    ; 004c423f
    MOVSD ES:EDI,ESI                    ; 004c4240
    MOVSD ES:EDI,ESI                    ; 004c4241
    FLD float ptr [ESP + 0x4e0]         ; 004c4242
    FMUL ST0                            ; 004c4249
    FLD float ptr [ESP + 0x4dc]         ; 004c424b
    FMUL ST0                            ; 004c4252
    FADDP                               ; 004c4254
    FLD float ptr [ESP + 0x4e4]         ; 004c4256
    FMUL ST0                            ; 004c425d
    FADDP                               ; 004c425f
    FSQRT                               ; 004c4261
    FLDZ                                ; 004c4263
    FXCH                                ; 004c4265
    FSTP float ptr [ESP + 0x800]        ; 004c4267
    FCOMP float ptr [ESP + 0x800]       ; 004c426e
    FNSTSW AX                           ; 004c4275
    SAHF                                ; 004c4277
    JNC 0x004c4511                      ; 004c4278
        ;   XREF to: 004c4511 (CONDITIONAL_JUMP)  ; LAB_004c4511
    FLD1                                ; 004c427e
    FLD float ptr [ESP + 0x4dc]         ; 004c4280
    FXCH                                ; 004c4287
    FDIV float ptr [ESP + 0x800]        ; 004c4289
    FXCH                                ; 004c4290
    FMUL ST1                            ; 004c4292
    FLD float ptr [ESP + 0x4e0]         ; 004c4294
    FMUL ST2                            ; 004c429b
    FLD float ptr [ESP + 0x4e4]         ; 004c429d
    FMULP ST3                           ; 004c42a4
    FXCH                                ; 004c42a6
    FSTP float ptr [ESP + 0x4dc]        ; 004c42a8
    FSTP float ptr [ESP + 0x4e0]        ; 004c42af
    FSTP float ptr [ESP + 0x4e4]        ; 004c42b6
    FLD float ptr [0x005c3c08]          ; 004c42bd | DAT_005c3c08
        ;   Label: LAB_004c42bd
    FLD float ptr [ESP + 0x4dc]         ; 004c42c3
    FMUL ST1                            ; 004c42ca
    FLD float ptr [ESP + 0x4e0]         ; 004c42cc
    FMUL ST2                            ; 004c42d3
    FLD float ptr [ESP + 0x4e4]         ; 004c42d5
    FMULP ST3                           ; 004c42dc
    FLD float ptr [ESP + 0x4c4]         ; 004c42de
    FLD float ptr [ESP + 0x4c8]         ; 004c42e5
    FLD float ptr [ESP + 0x4cc]         ; 004c42ec
    LEA EDI,[ESP + 0x50c]               ; 004c42f3
    LEA ESI,[ESP + 0x5d8]               ; 004c42fa
    LEA EAX,[ESP + 0x50c]               ; 004c4301
    LEA EDX,[ESP + 0x464]               ; 004c4308
    FXCH ST4                            ; 004c430f
    FSTP float ptr [ESP + 0x4dc]        ; 004c4311
    FXCH ST2                            ; 004c4318
    FSTP float ptr [ESP + 0x4e0]        ; 004c431a
    FXCH ST3                            ; 004c4321
    FSTP float ptr [ESP + 0x4e4]        ; 004c4323
    FXCH ST2                            ; 004c432a
    FADD float ptr [ESP + 0x4dc]        ; 004c432c
    FXCH ST2                            ; 004c4333
    FADD float ptr [ESP + 0x4e0]        ; 004c4335
    FXCH                                ; 004c433c
    FADD float ptr [ESP + 0x4e4]        ; 004c433e
    FXCH ST2                            ; 004c4345
    FSTP float ptr [ESP + 0x5d8]        ; 004c4347
    FSTP float ptr [ESP + 0x5dc]        ; 004c434e
    FSTP float ptr [ESP + 0x5e0]        ; 004c4355
    MOVSD ES:EDI,ESI                    ; 004c435c
    MOVSD ES:EDI,ESI                    ; 004c435d
    MOVSD ES:EDI,ESI                    ; 004c435e
    CMP EDX,EAX                         ; 004c435f
    JZ 0x004c438d                       ; 004c4361
        ;   XREF to: 004c438d (CONDITIONAL_JUMP)  ; LAB_004c438d
    MOV EAX,dword ptr [ESP + 0x50c]     ; 004c4363
    MOV dword ptr [ESP + 0x464],EAX     ; 004c436a
    MOV EAX,dword ptr [ESP + 0x510]     ; 004c4371
    MOV dword ptr [ESP + 0x468],EAX     ; 004c4378
    MOV EAX,dword ptr [ESP + 0x514]     ; 004c437f
    MOV dword ptr [ESP + 0x46c],EAX     ; 004c4386
    PUSH 0x4                            ; 004c438d
        ;   Label: LAB_004c438d
    MOV EDI,dword ptr [0x00603b28]      ; 004c438f | g_CDemonSetPtr
    PUSH EDI                            ; 004c4395 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90 ; 004c4396
        ;   XREF to: 0053ec90 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90(CDemonSet * this_ptr, int ray_type)
    MOV EAX,[0x01d5ba14]                ; 004c439b | DAT_01d5ba14
    ADD ESP,0x8                         ; 004c43a0
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c43a3
    PUSH EDX                            ; 004c43aa
    MOV ECX,dword ptr [0x00603b28]      ; 004c43ab | g_CDemonSetPtr
    PUSH ECX                            ; 004c43b1 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 004c43b2
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004c43b7
    LEA EAX,[ESP + 0x464]               ; 004c43ba
    PUSH EAX                            ; 004c43c1
    LEA EAX,[ESP + 0x4c8]               ; 004c43c2
    PUSH EAX                            ; 004c43c9
    MOV EBX,dword ptr [0x00603b28]      ; 004c43ca | g_CDemonSetPtr
    PUSH EBX                            ; 004c43d0 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053ccc0 ; 004c43d1
        ;   XREF to: 0053ccc0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053ccc0()
    ADD ESP,0xc                         ; 004c43d6
    CMP dword ptr [ESP + 0x7b4],0x0     ; 004c43d9
    JZ 0x004c452d                       ; 004c43e1
        ;   XREF to: 004c452d (CONDITIONAL_JUMP)  ; LAB_004c452d
    TEST byte ptr [0x01c5fae4],0x2      ; 004c43e7 | DAT_01c5fae4
    JZ 0x004c452d                       ; 004c43ee
        ;   XREF to: 004c452d (CONDITIONAL_JUMP)  ; LAB_004c452d
    CMP dword ptr [0x01d1e334],0x1      ; 004c43f4 | DAT_01d1e334
    JZ 0x004c3ec2                       ; 004c43fb
        ;   XREF to: 004c3ec2 (CONDITIONAL_JUMP)  ; LAB_004c3ec2
    XOR EBX,EBX                         ; 004c4401
    MOV dword ptr [0x01d1e334],EBX      ; 004c4403 | DAT_01d1e334
    JMP 0x004c3ec2                      ; 004c4409
        ;   XREF to: 004c3ec2 (UNCONDITIONAL_JUMP)  ; LAB_004c3ec2
    MOV dword ptr [ESP + 0x2cc],EDI     ; 004c440e
        ;   Label: LAB_004c440e
    MOV dword ptr [ESP + 0x2d4],EDI     ; 004c4415
    JMP 0x004c40fd                      ; 004c441c
        ;   XREF to: 004c40fd (UNCONDITIONAL_JUMP)  ; LAB_004c40fd
    FLD float ptr [ESP + 0x814]         ; 004c4421
        ;   Label: LAB_004c4421
    FLD float ptr [ESP + 0x2cc]         ; 004c4428
    FMUL ST1                            ; 004c442f
    FLD float ptr [ESP + 0x2d0]         ; 004c4431
    FMUL ST2                            ; 004c4438
    FLD float ptr [ESP + 0x2d4]         ; 004c443a
    FMULP ST3                           ; 004c4441
    FLD float ptr [ESP + 0x2b4]         ; 004c4443
    FLD float ptr [ESP + 0x2b8]         ; 004c444a
    FLD float ptr [ESP + 0x2bc]         ; 004c4451
    LEA EDI,[ESP + 0x5e4]               ; 004c4458
    LEA ESI,[ESP + 0x20c]               ; 004c445f
    FXCH ST4                            ; 004c4466
    FSTP float ptr [ESP + 0x20c]        ; 004c4468
    FXCH ST2                            ; 004c446f
    FSTP float ptr [ESP + 0x210]        ; 004c4471
    FXCH ST3                            ; 004c4478
    FSTP float ptr [ESP + 0x214]        ; 004c447a
    MOVSD ES:EDI,ESI                    ; 004c4481
    MOVSD ES:EDI,ESI                    ; 004c4482
    MOVSD ES:EDI,ESI                    ; 004c4483
    LEA EAX,[ESP + 0x404]               ; 004c4484
    LEA EDI,[ESP + 0x404]               ; 004c448b
    LEA ESI,[ESP + 0x224]               ; 004c4492
    FXCH ST2                            ; 004c4499
    FADD float ptr [ESP + 0x5e4]        ; 004c449b
    FXCH ST2                            ; 004c44a2
    FADD float ptr [ESP + 0x5e8]        ; 004c44a4
    FXCH                                ; 004c44ab
    FADD float ptr [ESP + 0x5ec]        ; 004c44ad
    FXCH ST2                            ; 004c44b4
    FSTP float ptr [ESP + 0x224]        ; 004c44b6
    FSTP float ptr [ESP + 0x228]        ; 004c44bd
    FSTP float ptr [ESP + 0x22c]        ; 004c44c4
    MOVSD ES:EDI,ESI                    ; 004c44cb
    MOVSD ES:EDI,ESI                    ; 004c44cc
    MOVSD ES:EDI,ESI                    ; 004c44cd
    CMP EAX,0x1d1e328                   ; 004c44ce
    JZ 0x004c44f9                       ; 004c44d3
        ;   XREF to: 004c44f9 (CONDITIONAL_JUMP)  ; LAB_004c44f9
    MOV EAX,dword ptr [ESP + 0x404]     ; 004c44d5
    MOV [0x01d1e328],EAX                ; 004c44dc | DAT_01d1e328
    MOV EAX,dword ptr [ESP + 0x408]     ; 004c44e1
    MOV [0x01d1e32c],EAX                ; 004c44e8 | DAT_01d1e32c
    MOV EAX,dword ptr [ESP + 0x40c]     ; 004c44ed
    MOV [0x01d1e330],EAX                ; 004c44f4 | DAT_01d1e330
    XOR EDI,EDI                         ; 004c44f9
        ;   Label: LAB_004c44f9
    MOV ESI,0x1                         ; 004c44fb
    MOV dword ptr [0x01d1e344],EDI      ; 004c4500 | DAT_01d1e344
    MOV dword ptr [0x01d1e334],ESI      ; 004c4506 | DAT_01d1e334
    JMP 0x004c3ed9                      ; 004c450c
        ;   XREF to: 004c3ed9 (UNCONDITIONAL_JUMP)  ; LAB_004c3ed9
    XOR ECX,ECX                         ; 004c4511
        ;   Label: LAB_004c4511
    MOV dword ptr [ESP + 0x4e0],ECX     ; 004c4513
    MOV dword ptr [ESP + 0x4dc],ECX     ; 004c451a
    MOV dword ptr [ESP + 0x4e4],ECX     ; 004c4521
    JMP 0x004c42bd                      ; 004c4528
        ;   XREF to: 004c42bd (UNCONDITIONAL_JUMP)  ; LAB_004c42bd
    CMP dword ptr [0x01c5fae4],0x1      ; 004c452d | DAT_01c5fae4
        ;   Label: LAB_004c452d
    JNZ 0x004c3ecc                      ; 004c4534
        ;   XREF to: 004c3ecc (CONDITIONAL_JUMP)  ; LAB_004c3ecc
    MOV EAX,[0x00603b28]                ; 004c453a | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 004c453f
    CMP EAX,0x1d1e328                   ; 004c4544
    JZ 0x004c4565                       ; 004c4549
        ;   XREF to: 004c4565 (CONDITIONAL_JUMP)  ; LAB_004c4565
    FLD float ptr [EAX]                 ; 004c454b | g_CDemonSetInstance.collision_impact_position.x
    FLD float ptr [EAX + 0x8]           ; 004c454d | g_CDemonSetInstance.collision_impact_position.z
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c4550 | g_CDemonSetInstance.collision_impact_position.y
    MOV dword ptr [0x01d1e32c],EDX      ; 004c4553 | DAT_01d1e32c
    FSTP float ptr [0x01d1e330]         ; 004c4559 | DAT_01d1e330
    FSTP float ptr [0x01d1e328]         ; 004c455f | DAT_01d1e328
    XOR EDX,EDX                         ; 004c4565
        ;   Label: LAB_004c4565
    MOV EAX,0x1                         ; 004c4567
    MOV dword ptr [0x01d1e344],EDX      ; 004c456c | DAT_01d1e344
    MOV [0x01d1e334],EAX                ; 004c4572 | DAT_01d1e334
    JMP 0x004c3ed9                      ; 004c4577
        ;   XREF to: 004c3ed9 (UNCONDITIONAL_JUMP)  ; LAB_004c3ed9
    MOV EAX,dword ptr [EAX + 0x30]      ; 004c457c
        ;   Label: LAB_004c457c
    MOV AL,byte ptr [EAX + 0x1c6cef0]   ; 004c457f | DAT_01c6cef0
    JMP 0x004c3ef6                      ; 004c4585
        ;   XREF to: 004c3ef6 (UNCONDITIONAL_JUMP)  ; LAB_004c3ef6
    MOV dword ptr [0x01d1e348],ESI      ; 004c458a | DAT_01d1e348
        ;   Label: LAB_004c458a
    JMP 0x004c18c1                      ; 004c4590
        ;   XREF to: 004c18c1 (UNCONDITIONAL_JUMP)  ; LAB_004c18c1
    FLD float ptr [0x01d22c30]          ; 004c4595 | DAT_01d22c30
        ;   Label: LAB_004c4595
    FCOMP double ptr [0x005c3c18]       ; 004c459b | DAT_005c3c18
    FNSTSW AX                           ; 004c45a1
    SAHF                                ; 004c45a3
    JC 0x004c194e                       ; 004c45a4
        ;   XREF to: 004c194e (CONDITIONAL_JUMP)  ; LAB_004c194e
    JMP 0x004c1e34                      ; 004c45aa
        ;   XREF to: 004c1e34 (UNCONDITIONAL_JUMP)  ; LAB_004c1e34
    MOV [0x01d1e334],EAX                ; 004c45af | DAT_01d1e334
        ;   Label: LAB_004c45af
    JMP 0x004c1a98                      ; 004c45b4
        ;   XREF to: 004c1a98 (UNCONDITIONAL_JUMP)  ; LAB_004c1a98
    FLD float ptr [ESP + 0x8]           ; 004c45b9
        ;   Label: LAB_004c45b9
    FMUL double ptr [0x005c3c48]        ; 004c45bd | DAT_005c3c48
    FLD float ptr [ESP + 0x14]          ; 004c45c3
    FCOMPP                              ; 004c45c7
    FNSTSW AX                           ; 004c45c9
    SAHF                                ; 004c45cb
    JNC 0x004c1d19                      ; 004c45cc
        ;   XREF to: 004c1d19 (CONDITIONAL_JUMP)  ; LAB_004c1d19
    CMP dword ptr [0x01d1e348],0x1      ; 004c45d2 | DAT_01d1e348
    JZ 0x004c1abc                       ; 004c45d9
        ;   XREF to: 004c1abc (CONDITIONAL_JUMP)  ; LAB_004c1abc
    JMP 0x004c1d19                      ; 004c45df
        ;   XREF to: 004c1d19 (UNCONDITIONAL_JUMP)  ; LAB_004c1d19
    XOR EAX,EAX                         ; 004c45e4
        ;   Label: LAB_004c45e4
    MOV [0x01d1e334],EAX                ; 004c45e6 | DAT_01d1e334
    JMP 0x004c1ce8                      ; 004c45eb
        ;   XREF to: 004c1ce8 (UNCONDITIONAL_JUMP)  ; LAB_004c1ce8
    FLD float ptr [ESP + 0x24]          ; 004c45f0
        ;   Label: LAB_004c45f0
    FLDZ                                ; 004c45f4
    FCOMPP                              ; 004c45f6
    FNSTSW AX                           ; 004c45f8
    SAHF                                ; 004c45fa
    JC 0x004c1d19                       ; 004c45fb
        ;   XREF to: 004c1d19 (CONDITIONAL_JUMP)  ; LAB_004c1d19
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c4601
    MOV dword ptr [EAX + 0xc],0x1       ; 004c4604
    JMP 0x004c1d19                      ; 004c460b
        ;   XREF to: 004c1d19 (UNCONDITIONAL_JUMP)  ; LAB_004c1d19
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c4610
        ;   Label: LAB_004c4610
    MOV dword ptr [EAX + 0xc],0x1       ; 004c4613
    JMP 0x004c1e27                      ; 004c461a
        ;   XREF to: 004c1e27 (UNCONDITIONAL_JUMP)  ; LAB_004c1e27
    XOR EDX,EDX                         ; 004c461f
        ;   Label: LAB_004c461f
    MOV dword ptr [0x01d1e344],EDX      ; 004c4621 | DAT_01d1e344
    JMP 0x004c1e27                      ; 004c4627
        ;   XREF to: 004c1e27 (UNCONDITIONAL_JUMP)  ; LAB_004c1e27
    MOV ECX,dword ptr [0x01d1e350]      ; 004c462c | DAT_01d1e350
        ;   Label: LAB_004c462c
    TEST ECX,ECX                        ; 004c4632
    JZ 0x004c1e34                       ; 004c4634
        ;   XREF to: 004c1e34 (CONDITIONAL_JUMP)  ; LAB_004c1e34
    MOV EBX,dword ptr [0x02cfd894]      ; 004c463a | g_CTriggerClassInfo.name_hash
    PUSH EBX                            ; 004c4640
    PUSH ECX                            ; 004c4641
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c4642
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c4647
    TEST EAX,EAX                        ; 004c464a
    JZ 0x004c46ea                       ; 004c464c
        ;   XREF to: 004c46ea (CONDITIONAL_JUMP)  ; LAB_004c46ea
    MOV EAX,[0x01d5ba14]                ; 004c4652 | DAT_01d5ba14
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c4657
    MOV ECX,dword ptr [0x01d1e354]      ; 004c465e | DAT_01d1e354
    MOV dword ptr [EDX + 0x20b68],ECX   ; 004c4664
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c466a
    MOV EAX,[0x01d1e350]                ; 004c4671 | DAT_01d1e350
    MOV dword ptr [EDX + 0x20b6c],EAX   ; 004c4676
    MOV EAX,[0x02cfd894]                ; 004c467c | g_CTriggerClassInfo.name_hash
    PUSH EAX                            ; 004c4681
    MOV EDX,dword ptr [0x01d1e350]      ; 004c4682 | DAT_01d1e350
    PUSH EDX                            ; 004c4688
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c4689
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV EDX,EAX                         ; 004c468e
    MOV EAX,[0x01d5ba14]                ; 004c4690 | DAT_01d5ba14
    MOV ECX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c4695
    MOV EDX,dword ptr [EDX + 0x2fc]     ; 004c469c
    MOV dword ptr [ECX + 0x20b70],EDX   ; 004c46a2
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c46a8
    MOV dword ptr [EDX + 0x20b7c],0x0   ; 004c46af
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c46b9
    ADD ESP,0x8                         ; 004c46c0
    MOV dword ptr [EAX + 0x20b78],0x1   ; 004c46c3
        ;   Label: LAB_004c46c3
    XOR ECX,ECX                         ; 004c46cd
        ;   Label: LAB_004c46cd
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c46cf
    MOV dword ptr [0x01d1e350],ECX      ; 004c46d2 | DAT_01d1e350
    MOV dword ptr [0x01d1e354],ECX      ; 004c46d8 | DAT_01d1e354
    MOV dword ptr [EAX + 0x10],0x1      ; 004c46de
    JMP 0x004c1e34                      ; 004c46e5
        ;   XREF to: 004c1e34 (UNCONDITIONAL_JUMP)  ; LAB_004c1e34
    MOV EDI,dword ptr [0x01b85178]      ; 004c46ea | g_CDoorClassInfo.name_hash
        ;   Label: LAB_004c46ea
    PUSH EDI                            ; 004c46f0
    MOV EAX,[0x01d1e350]                ; 004c46f1 | DAT_01d1e350
    PUSH EAX                            ; 004c46f6
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c46f7
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c46fc
    TEST EAX,EAX                        ; 004c46ff
    JZ 0x004c4723                       ; 004c4701
        ;   XREF to: 004c4723 (CONDITIONAL_JUMP)  ; LAB_004c4723
    MOV EDX,dword ptr [0x01b85178]      ; 004c4703 | g_CDoorClassInfo.name_hash
    PUSH EDX                            ; 004c4709
    MOV ECX,dword ptr [0x01d1e350]      ; 004c470a | DAT_01d1e350
    PUSH ECX                            ; 004c4710
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c4711
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV EBX,dword ptr [EAX + 0x9d8]     ; 004c4716
    ADD ESP,0x8                         ; 004c471c
    TEST EBX,EBX                        ; 004c471f
    JZ 0x004c4792                       ; 004c4721
        ;   XREF to: 004c4792 (CONDITIONAL_JUMP)  ; LAB_004c4792
    MOV ESI,dword ptr [0x01b85178]      ; 004c4723 | g_CDoorClassInfo.name_hash
        ;   Label: LAB_004c4723
    PUSH ESI                            ; 004c4729
    MOV EDI,dword ptr [0x01d1e350]      ; 004c472a | DAT_01d1e350
    PUSH EDI                            ; 004c4730
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c4731
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c4736
    TEST EAX,EAX                        ; 004c4739
    JNZ 0x004c47ac                      ; 004c473b
        ;   XREF to: 004c47ac (CONDITIONAL_JUMP)  ; LAB_004c47ac
    MOV EAX,[0x01d5ba14]                ; 004c473d | DAT_01d5ba14
    MOV ECX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c4742
    MOV EDX,dword ptr [0x01d1e354]      ; 004c4749 | DAT_01d1e354
    MOV dword ptr [ECX + 0x20b68],EDX   ; 004c474f
    MOV ECX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c4755
    MOV EDX,dword ptr [0x01d1e350]      ; 004c475c | DAT_01d1e350
    MOV dword ptr [ECX + 0x20b6c],EDX   ; 004c4762
    MOV ECX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c4768
    MOV dword ptr [ECX + 0x20b70],EDX   ; 004c476f
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c4775
    MOV dword ptr [EDX + 0x20b7c],0x0   ; 004c477c
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c4786
    JMP 0x004c46c3                      ; 004c478d
        ;   XREF to: 004c46c3 (UNCONDITIONAL_JUMP)  ; LAB_004c46c3
    MOV EAX,[0x01d5ba14]                ; 004c4792 | DAT_01d5ba14
        ;   Label: LAB_004c4792
    MOV EDI,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c4797
    PUSH EDI                            ; 004c479e
    CALL core_hero.cpp_FUN_004d2cf0     ; 004c479f
        ;   XREF to: 004d2cf0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d2cf0()
    ADD ESP,0x4                         ; 004c47a4
    JMP 0x004c46cd                      ; 004c47a7
        ;   XREF to: 004c46cd (UNCONDITIONAL_JUMP)  ; LAB_004c46cd
    MOV EAX,[0x01b85178]                ; 004c47ac | g_CDoorClassInfo.name_hash
        ;   Label: LAB_004c47ac
    PUSH EAX                            ; 004c47b1
    MOV EDX,dword ptr [0x01d1e350]      ; 004c47b2 | DAT_01d1e350
    PUSH EDX                            ; 004c47b8
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004c47b9
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004c47be
    MOV EBX,EAX                         ; 004c47c1
    MOV EAX,[0x01d5ba14]                ; 004c47c3 | DAT_01d5ba14
    PUSH 0x1                            ; 004c47c8
    MOV ECX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c47ca
    PUSH ECX                            ; 004c47d1
    PUSH EBX                            ; 004c47d2
    CALL core_door.cpp_CDoor_getMoveType_FUN_00465380 ; 004c47d3
        ;   XREF to: 00465380 (UNCONDITIONAL_CALL)  ; int core_door.cpp_CDoor_getMoveType_FUN_00465380(CDoor * this_ptr, CDemonActor * opener)
    ADD ESP,0xc                         ; 004c47d8
    TEST EAX,EAX                        ; 004c47db
    JZ 0x004c46cd                       ; 004c47dd
        ;   XREF to: 004c46cd (CONDITIONAL_JUMP)  ; LAB_004c46cd
    MOV EAX,[0x01d5ba14]                ; 004c47e3 | DAT_01d5ba14
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c47e8
    MOV ECX,dword ptr [0x01d1e354]      ; 004c47ef | DAT_01d1e354
    MOV dword ptr [EDX + 0x20b68],ECX   ; 004c47f5
    MOV ECX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c47fb
    MOV EDX,dword ptr [0x01d1e350]      ; 004c4802 | DAT_01d1e350
    MOV dword ptr [ECX + 0x20b6c],EDX   ; 004c4808
    MOV ECX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c480e
    MOV dword ptr [ECX + 0x20b70],EDX   ; 004c4815
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c481b
    MOV dword ptr [EDX + 0x20b7c],0x0   ; 004c4822
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c482c
    MOV dword ptr [EDX + 0x20b78],0x1   ; 004c4833
    PUSH 0x1                            ; 004c483d
    MOV ESI,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004c483f
    PUSH ESI                            ; 004c4846
    PUSH EBX                            ; 004c4847
    CALL core_door.cpp_CDoor_getMoveType_FUN_00465380 ; 004c4848
        ;   XREF to: 00465380 (UNCONDITIONAL_CALL)  ; int core_door.cpp_CDoor_getMoveType_FUN_00465380(CDoor * this_ptr, CDemonActor * opener)
    MOV EDX,dword ptr [0x01d5ba14]      ; 004c484d | DAT_01d5ba14
    MOV EDX,dword ptr [EDX*0x4 + 0x1d5ba04] ; 004c4853
    ADD ESP,0xc                         ; 004c485a
    MOV dword ptr [EDX + 0x20b74],EAX   ; 004c485d
    JMP 0x004c46cd                      ; 004c4863
        ;   XREF to: 004c46cd (UNCONDITIONAL_JUMP)  ; LAB_004c46cd

