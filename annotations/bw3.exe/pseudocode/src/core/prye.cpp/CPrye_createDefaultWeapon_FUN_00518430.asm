; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_prye_cpp_CPrye_createDefaultWeapon_FUN_00518430(CPrye *this_ptr)
;
; Parameters:
; CPrye *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_prye.cpp_CPrye_ctor_FUN_00517f80 at 00517f9b
;
; Referenced Globals:
;   TerminatedCString s_CFlintlock_005ccd33
;   TerminatedCString s_core_prye_cpp_005ccd3e
;   TerminatedCString s_Out_of_memory_005ccd4f
;   TerminatedCString s_Prye_s_flintlock_005ccd5e
;   undefined4 s_Prye_s_flintlock_005ccd5e+1
;   undefined4 s_Prye_s_flintlock_005ccd5e+2
;   undefined4 s_Prye_s_flintlock_005ccd5e+3
;   TerminatedCString s_CHolycross_005ccd6f
;   TerminatedCString s_core_prye_cpp_005ccd7a
;   TerminatedCString s_Out_of_memory_005ccd8b
;   TerminatedCString s_Prye_s_holy_cross_005ccd9a
;   undefined4 s_Prye_s_holy_cross_005ccd9a+1
;   undefined4 s_Prye_s_holy_cross_005ccd9a+2
;   undefined4 s_Prye_s_holy_cross_005ccd9a+3
;   TerminatedCString s_CLightActor_005ccdac
;   ... and 19 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_createActorByName_FUN_0040c4f0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;   core_inv.cpp_CInventory_initialize_FUN_004da4e0
;   core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40
;   core_inv.cpp_FUN_004da880
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00518430
        ;   Label: core_prye.cpp_CPrye_createDefaultWeapon_FUN_00518430
    PUSH ESI                            ; 00518431
    PUSH EDI                            ; 00518432
    PUSH EBP                            ; 00518433
    MOV EBP,dword ptr [ESP + 0x14]      ; 00518434
    LEA EAX,[EBP + 0x206e8]             ; 00518438
    PUSH EAX                            ; 0051843e
    CALL core_inv.cpp_CInventory_initialize_FUN_004da4e0 ; 0051843f
        ;   XREF to: 004da4e0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_initialize_FUN_004da4e0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 00518444
    MOV EDX,dword ptr [0x02d0c150]      ; 00518447 | g_CWeaponClassInfo.name_hash
    PUSH EDX                            ; 0051844d
    PUSH 0x5ccd33                       ; 0051844e | = "CFlintlock"
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 00518453
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040c4f0()
    ADD ESP,0x4                         ; 00518458
    PUSH EAX                            ; 0051845b
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0051845c
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00518461
    MOV EBX,EAX                         ; 00518464
    TEST EAX,EAX                        ; 00518466
    JNZ 0x0051848d                      ; 00518468
        ;   XREF to: 0051848d (CONDITIONAL_JUMP)  ; LAB_0051848d
    MOV ECX,0x5ccd3e                    ; 0051846a | = "..\\core\\prye.cpp"
    MOV ESI,0x39f                       ; 0051846f
    PUSH 0x5ccd4f                       ; 00518474 | = "Out of memory!"
    MOV dword ptr [0x01d71de0],ECX      ; 00518479 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0051847f | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00518485
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0051848a
    MOV ESI,0x5ccd5e                    ; 0051848d | = "Prye's flintlock"
        ;   Label: LAB_0051848d
    MOV EDI,EBX                         ; 00518492
    PUSH EDI                            ; 00518494
    MOV AL,byte ptr [ESI]               ; 00518495 | = "Prye's flintlock" | s_Prye_s_flintlock_005ccd5e+2
        ;   Label: LAB_00518495
    MOV byte ptr [EDI],AL               ; 00518497
    CMP AL,0x0                          ; 00518499
    JZ 0x005184ad                       ; 0051849b
        ;   XREF to: 005184ad (CONDITIONAL_JUMP)  ; LAB_005184ad
    MOV AL,byte ptr [ESI + 0x1]         ; 0051849d | s_Prye_s_flintlock_005ccd5e+1 | s_Prye_s_flintlock_005ccd5e+3
    ADD ESI,0x2                         ; 005184a0
    MOV byte ptr [EDI + 0x1],AL         ; 005184a3
    ADD EDI,0x2                         ; 005184a6
    CMP AL,0x0                          ; 005184a9
    JNZ 0x00518495                      ; 005184ab
        ;   XREF to: 00518495 (CONDITIONAL_JUMP)  ; LAB_00518495
    POP EDI                             ; 005184ad
        ;   Label: LAB_005184ad
    PUSH 0x1                            ; 005184ae
    PUSH EBX                            ; 005184b0
    LEA EBX,[EBP + 0x206e8]             ; 005184b1
    PUSH EBX                            ; 005184b7
    CALL core_inv.cpp_FUN_004da880      ; 005184b8
        ;   XREF to: 004da880 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004da880(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 005184bd
    PUSH 0x1                            ; 005184c0
    PUSH 0x5                            ; 005184c2
    PUSH 0x0                            ; 005184c4
    PUSH EBX                            ; 005184c6
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40 ; 005184c7
        ;   XREF to: 004dbb40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 005184cc
    MOV EDI,dword ptr [0x02d0c150]      ; 005184cf | g_CWeaponClassInfo.name_hash
    PUSH EDI                            ; 005184d5
    PUSH 0x5ccd6f                       ; 005184d6 | = "CHolycross"
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 005184db
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040c4f0()
    ADD ESP,0x4                         ; 005184e0
    PUSH EAX                            ; 005184e3
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 005184e4
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 005184e9
    MOV EBX,EAX                         ; 005184ec
    TEST EAX,EAX                        ; 005184ee
    JZ 0x00518626                       ; 005184f0
        ;   XREF to: 00518626 (CONDITIONAL_JUMP)  ; LAB_00518626
    MOV ESI,0x5ccd9a                    ; 005184f6 | = "Prye's holy cross"
        ;   Label: LAB_005184f6
    MOV EDI,EBX                         ; 005184fb
    PUSH EDI                            ; 005184fd
    MOV AL,byte ptr [ESI]               ; 005184fe | = "Prye's holy cross" | s_Prye_s_holy_cross_005ccd9a+2
        ;   Label: LAB_005184fe
    MOV byte ptr [EDI],AL               ; 00518500
    CMP AL,0x0                          ; 00518502
    JZ 0x00518516                       ; 00518504
        ;   XREF to: 00518516 (CONDITIONAL_JUMP)  ; LAB_00518516
    MOV AL,byte ptr [ESI + 0x1]         ; 00518506 | s_Prye_s_holy_cross_005ccd9a+1 | s_Prye_s_holy_cross_005ccd9a+3
    ADD ESI,0x2                         ; 00518509
    MOV byte ptr [EDI + 0x1],AL         ; 0051850c
    ADD EDI,0x2                         ; 0051850f
    CMP AL,0x0                          ; 00518512
    JNZ 0x005184fe                      ; 00518514
        ;   XREF to: 005184fe (CONDITIONAL_JUMP)  ; LAB_005184fe
    POP EDI                             ; 00518516
        ;   Label: LAB_00518516
    PUSH 0x1                            ; 00518517
    PUSH EBX                            ; 00518519
    LEA EAX,[EBP + 0x206e8]             ; 0051851a
    PUSH EAX                            ; 00518520
    CALL core_inv.cpp_FUN_004da880      ; 00518521
        ;   XREF to: 004da880 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004da880(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 00518526
    MOV ECX,dword ptr [0x007e1a50]      ; 00518529 | DAT_007e1a50
    PUSH ECX                            ; 0051852f
    PUSH 0x5ccdac                       ; 00518530 | = "CLightActor"
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 00518535
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040c4f0()
    ADD ESP,0x4                         ; 0051853a
    PUSH EAX                            ; 0051853d
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0051853e
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00518543
    MOV EBX,EAX                         ; 00518546
    TEST EAX,EAX                        ; 00518548
    JNZ 0x0051856f                      ; 0051854a
        ;   XREF to: 0051856f (CONDITIONAL_JUMP)  ; LAB_0051856f
    MOV ESI,0x5ccdb8                    ; 0051854c | = "..\\core\\prye.cpp"
    MOV EDI,0x3b3                       ; 00518551
    PUSH 0x5ccdc9                       ; 00518556 | = "Out of memory!"
    MOV dword ptr [0x01d71de0],ESI      ; 0051855b | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00518561 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00518567
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0051856c
    MOV ESI,0x5ccdd8                    ; 0051856f | = "Prye's lantern"
        ;   Label: LAB_0051856f
    MOV EDI,EBX                         ; 00518574
    MOV dword ptr [EBX + 0x6e8],0x2     ; 00518576
    PUSH EDI                            ; 00518580
    MOV AL,byte ptr [ESI]               ; 00518581 | = "Prye's lantern" | s_Prye_s_lantern_005ccdd8+2
        ;   Label: LAB_00518581
    MOV byte ptr [EDI],AL               ; 00518583
    CMP AL,0x0                          ; 00518585
    JZ 0x00518599                       ; 00518587
        ;   XREF to: 00518599 (CONDITIONAL_JUMP)  ; LAB_00518599
    MOV AL,byte ptr [ESI + 0x1]         ; 00518589 | s_Prye_s_lantern_005ccdd8+1 | s_Prye_s_lantern_005ccdd8+3
    ADD ESI,0x2                         ; 0051858c
    MOV byte ptr [EDI + 0x1],AL         ; 0051858f
    ADD EDI,0x2                         ; 00518592
    CMP AL,0x0                          ; 00518595
    JNZ 0x00518581                      ; 00518597
        ;   XREF to: 00518581 (CONDITIONAL_JUMP)  ; LAB_00518581
    POP EDI                             ; 00518599
        ;   Label: LAB_00518599
    PUSH EBX                            ; 0051859a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051859b
    CALL dword ptr [EAX]                ; 005185a1
    ADD ESP,0x4                         ; 005185a3
    PUSH 0x1                            ; 005185a6
    PUSH EBX                            ; 005185a8
    LEA EAX,[EBP + 0x206e8]             ; 005185a9
    PUSH EAX                            ; 005185af
    CALL core_inv.cpp_FUN_004da880      ; 005185b0
        ;   XREF to: 004da880 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004da880(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 005185b5
    MOV EAX,[0x007e17b4]                ; 005185b8 | g_CBoxActorClassInfo.name_hash
    PUSH EAX                            ; 005185bd
    PUSH 0x5ccde7                       ; 005185be | = "CBoxActor"
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 005185c3
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040c4f0()
    ADD ESP,0x4                         ; 005185c8
    PUSH EAX                            ; 005185cb
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 005185cc
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 005185d1
    MOV EBX,EAX                         ; 005185d4
    TEST EAX,EAX                        ; 005185d6
    JZ 0x0051864d                       ; 005185d8
        ;   XREF to: 0051864d (CONDITIONAL_JUMP)  ; LAB_0051864d
    PUSH 0x5cce11                       ; 005185da | = "journal.kfm"
        ;   Label: LAB_005185da
    LEA EAX,[EBX + 0x158]               ; 005185df
    PUSH EAX                            ; 005185e5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 005185e6
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005185eb
    MOV ESI,0x5cce1d                    ; 005185ee | = "Prye's journal"
    MOV EDI,EBX                         ; 005185f3
    PUSH EDI                            ; 005185f5
    MOV AL,byte ptr [ESI]               ; 005185f6 | = "Prye's journal" | s_Prye_s_journal_005cce1d+2
        ;   Label: LAB_005185f6
    MOV byte ptr [EDI],AL               ; 005185f8
    CMP AL,0x0                          ; 005185fa
    JZ 0x0051860e                       ; 005185fc
        ;   XREF to: 0051860e (CONDITIONAL_JUMP)  ; LAB_0051860e
    MOV AL,byte ptr [ESI + 0x1]         ; 005185fe | s_Prye_s_journal_005cce1d+1 | s_Prye_s_journal_005cce1d+3
    ADD ESI,0x2                         ; 00518601
    MOV byte ptr [EDI + 0x1],AL         ; 00518604
    ADD EDI,0x2                         ; 00518607
    CMP AL,0x0                          ; 0051860a
    JNZ 0x005185f6                      ; 0051860c
        ;   XREF to: 005185f6 (CONDITIONAL_JUMP)  ; LAB_005185f6
    POP EDI                             ; 0051860e
        ;   Label: LAB_0051860e
    PUSH 0x1                            ; 0051860f
    PUSH EBX                            ; 00518611
    ADD EBP,0x206e8                     ; 00518612
    PUSH EBP                            ; 00518618
    CALL core_inv.cpp_FUN_004da880      ; 00518619
        ;   XREF to: 004da880 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004da880(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 0051861e
    POP EBP                             ; 00518621
    POP EDI                             ; 00518622
    POP ESI                             ; 00518623
    POP EBX                             ; 00518624
    RET                                 ; 00518625
    MOV EAX,0x5ccd7a                    ; 00518626 | = "..\\core\\prye.cpp"
        ;   Label: LAB_00518626
    MOV EDX,0x3ab                       ; 0051862b
    PUSH 0x5ccd8b                       ; 00518630 | = "Out of memory!"
    MOV [0x01d71de0],EAX                ; 00518635 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0051863a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00518640
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00518645
    JMP 0x005184f6                      ; 00518648
        ;   XREF to: 005184f6 (UNCONDITIONAL_JUMP)  ; LAB_005184f6
    MOV EDX,0x5ccdf1                    ; 0051864d | = "..\\core\\prye.cpp"
        ;   Label: LAB_0051864d
    MOV ECX,0x3bd                       ; 00518652
    PUSH 0x5cce02                       ; 00518657 | = "Out of memory!"
    MOV dword ptr [0x01d71de0],EDX      ; 0051865c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00518662 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00518668
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0051866d
    JMP 0x005185da                      ; 00518670
        ;   XREF to: 005185da (UNCONDITIONAL_JUMP)  ; LAB_005185da

