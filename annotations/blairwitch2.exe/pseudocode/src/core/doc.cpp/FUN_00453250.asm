; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_00453250(CCharacter *param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x170]:1  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined        Stack[-0x134]:1  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined        Stack[-0xf8]:1  local_f8
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined        Stack[-0xbc]:1  local_bc
; undefined4       Stack[-0xb4]:4  local_b4
; undefined        Stack[-0xb0]:1  local_b0
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined        Stack[-0x8c]:1  local_8c
; undefined        Stack[-0x80]:1  local_80
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_doc.cpp_FUN_00450c60 at 00450ec2
;
; Referenced Globals:
;   undefined4 s_actionPending_d_doc_cpp_005d000a+1
;   TerminatedCString s_actionPending_d_doc_cpp_005d002e
;   TerminatedCString s_Object_to_pick_up_is_now_005d0051
;   TerminatedCString s_actionPending_d_doc_cpp_005d007f
;   TerminatedCString s_actionPending_d_doc_cpp_005d00a2
;   TerminatedCString s_kick1_wav_005d00c5
;   TerminatedCString s_hit_gh_4_7_wav_005d00cf
;   TerminatedCString s_actionPending_d_doc_cpp_005d00df
;   TerminatedCString s_doorToOpen_NULL_doc_cpp_005d0102
;   undefined4 DAT_005d0127
;   undefined4 DAT_005d012f
;   undefined4 DAT_005d0137
;   undefined4 DAT_005f5140
;   undefined4 DAT_005f5144
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   ... and 9 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_doc.cpp_FUN_00458320
;   core_doc.cpp_FUN_004583a0
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004cf230
;   core_hero.cpp_FUN_004cf440
;   core_hero.cpp_FUN_004cff50
;   core_hero.cpp_FUN_004cff90
;   core_inv.cpp_FUN_004db9d0
;   core_motion.cpp_CMotionController_advance_FUN_005030c0
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453250
        ;   Label: core_doc.cpp_FUN_00453250
    PUSH ESI                            ; 00453251
    PUSH EDI                            ; 00453252
    PUSH EBP                            ; 00453253
    MOV EBP,ESP                         ; 00453254
    SUB ESP,0x168                       ; 00453256
    AND ESP,0xfffffff8                  ; 0045325c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045325f
    LEA EAX,[EBX + 0x2b4]               ; 00453262
    MOV dword ptr [ESP + 0x154],EAX     ; 00453268
    LEA EAX,[EBX + 0x2437c]             ; 0045326f
    MOV dword ptr [ESP + 0x140],EAX     ; 00453275
    LEA EAX,[EBX + 0x2562c]             ; 0045327c
    MOV dword ptr [ESP + 0x144],EAX     ; 00453282
    LEA EAX,[EBX + 0x25620]             ; 00453289
    MOV dword ptr [ESP + 0x148],EAX     ; 0045328f
    LEA EAX,[EBP + 0x18]                ; 00453296
        ;   Label: LAB_00453296
    PUSH EAX                            ; 00453299
    MOV EDX,dword ptr [ESP + 0x158]     ; 0045329a
    PUSH EDX                            ; 004532a1
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 004532a2
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004532a7
    MOV ESI,EAX                         ; 004532aa
    CMP EAX,0x12                        ; 004532ac
    JNC 0x00453b53                      ; 004532af
        ;   XREF to: 00453b53 (CONDITIONAL_JUMP)  ; LAB_00453b53
    CMP EAX,0x6                         ; 004532b5
    JNC 0x00453bfc                      ; 004532b8
        ;   XREF to: 00453bfc (CONDITIONAL_JUMP)  ; LAB_00453bfc
    CMP EAX,0x2                         ; 004532be
    JNC 0x00453c3d                      ; 004532c1
        ;   XREF to: 00453c3d (CONDITIONAL_JUMP)  ; LAB_00453c3d
    CMP EAX,0x1                         ; 004532c7
    JNZ 0x00453c4c                      ; 004532ca
        ;   XREF to: 00453c4c (CONDITIONAL_JUMP)  ; LAB_00453c4c
    CMP ESI,0x7                         ; 004532d0
        ;   Label: LAB_004532d0
    JNZ 0x00453663                      ; 004532d3
        ;   XREF to: 00453663 (CONDITIONAL_JUMP)  ; LAB_00453663
    MOV EAX,[0x01b4d278]                ; 004532d9 | DAT_01b4d278
    PUSH EAX                            ; 004532de
        ;   Label: LAB_004532de
    MOV ECX,dword ptr [ESP + 0x158]     ; 004532df
    PUSH ECX                            ; 004532e6
    LEA ESI,[ESP + 0x88]                ; 004532e7
    LEA EDI,[ESP + 0x118]               ; 004532ee
    CALL core_skeleton.cpp_FUN_005469a0 ; 004532f5
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    LEA ESI,[ESP + 0x88]                ; 004532fa
    ADD ESP,0x8                         ; 00453301
    MOVSD ES:EDI,ESI                    ; 00453304
    MOVSD ES:EDI,ESI                    ; 00453305
    MOVSD ES:EDI,ESI                    ; 00453306
    MOV ESI,dword ptr [EBX + 0x25614]   ; 00453307
    TEST ESI,ESI                        ; 0045330d
    JZ 0x0045366d                       ; 0045330f
        ;   XREF to: 0045366d (CONDITIONAL_JUMP)  ; LAB_0045366d
    PUSH 0x3f800000                     ; 00453315
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045331a
    MOV EDX,dword ptr [ESI + 0x2b0]     ; 00453320
    PUSH ESI                            ; 00453326
    MOV dword ptr [ESP + 0x16c],EAX     ; 00453327
    CALL dword ptr [EDX + 0x4c]         ; 0045332e
    ADD ESP,0x4                         ; 00453331
    PUSH EAX                            ; 00453334
    LEA EAX,[ESP + 0x118]               ; 00453335
    PUSH EAX                            ; 0045333c
    PUSH EBX                            ; 0045333d
    LEA ESI,[ESP + 0xc0]                ; 0045333e
    CALL core_actor.cpp_FUN_00408d70    ; 00453345
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0045334a
    LEA EAX,[ESP + 0x130]               ; 0045334d
    LEA EDI,[ESP + 0x130]               ; 00453354
    PUSH EAX                            ; 0045335b
    LEA ESI,[ESP + 0xbc]                ; 0045335c
    MOV EAX,dword ptr [ESP + 0x170]     ; 00453363
        ;   Label: LAB_00453363
    PUSH EBX                            ; 0045336a
    MOVSD ES:EDI,ESI                    ; 0045336b
    MOVSD ES:EDI,ESI                    ; 0045336c
    MOVSD ES:EDI,ESI                    ; 0045336d
    CALL dword ptr [EAX + 0x30]         ; 0045336e
    ADD ESP,0x10                        ; 00453371
        ;   Label: LAB_00453371
    FLD float ptr [EBP + 0x18]          ; 00453374
        ;   Label: LAB_00453374
    FLDZ                                ; 00453377
    FCOMPP                              ; 00453379
    FNSTSW AX                           ; 0045337b
    SAHF                                ; 0045337d
    JC 0x00453296                       ; 0045337e
        ;   XREF to: 00453296 (CONDITIONAL_JUMP)  ; LAB_00453296
    MOV ESP,EBP                         ; 00453384
    POP EBP                             ; 00453386
    POP EDI                             ; 00453387
    POP ESI                             ; 00453388
    POP EBX                             ; 00453389
    RET                                 ; 0045338a
    PUSH EBX                            ; 0045338b
        ;   Label: LAB_0045338b
    MOV ESI,dword ptr [EBX + 0x2698]    ; 0045338c
    CALL core_doc.cpp_FUN_004583a0      ; 00453392
        ;   XREF to: 004583a0 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_004583a0()
    MOV EDI,dword ptr [EBX + 0x256a4]   ; 00453397
    ADD ESP,0x4                         ; 0045339d
    CMP EDI,0x2                         ; 004533a0
    JNZ 0x00453414                      ; 004533a3
        ;   XREF to: 00453414 (CONDITIONAL_JUMP)  ; LAB_00453414
    TEST ESI,ESI                        ; 004533a5
    JZ 0x004533c6                       ; 004533a7
        ;   XREF to: 004533c6 (CONDITIONAL_JUMP)  ; LAB_004533c6
    MOV EDI,dword ptr [ESP + 0x144]     ; 004533a9
    PUSH EDI                            ; 004533b0
    MOV EDX,dword ptr [ESP + 0x14c]     ; 004533b1
    PUSH EDX                            ; 004533b8
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 004533b9
    PUSH ESI                            ; 004533bf
    CALL dword ptr [EAX + 0x70]         ; 004533c0
    ADD ESP,0xc                         ; 004533c3
    MOV dword ptr [EBX + 0x256a4],0x0   ; 004533c6
        ;   Label: LAB_004533c6
    MOV ECX,dword ptr [EBX + 0x2d04]    ; 004533d0
        ;   Label: LAB_004533d0
    MOV dword ptr [EBX + 0x2561c],0x0   ; 004533d6
    CMP ECX,0x9                         ; 004533e0
    JNZ 0x004533f9                      ; 004533e3
        ;   XREF to: 004533f9 (CONDITIONAL_JUMP)  ; LAB_004533f9
    MOV dword ptr [EBX + 0x2d08],0x0    ; 004533e5
    MOV dword ptr [EBX + 0x2d04],0x0    ; 004533ef
    CMP ESI,dword ptr [EBX + 0x25698]   ; 004533f9
        ;   Label: LAB_004533f9
    JNZ 0x00453374                      ; 004533ff
        ;   XREF to: 00453374 (CONDITIONAL_JUMP)  ; LAB_00453374
    MOV dword ptr [EBX + 0x25698],0x0   ; 00453405
    JMP 0x00453374                      ; 0045340f
        ;   XREF to: 00453374 (UNCONDITIONAL_JUMP)  ; LAB_00453374
    CMP EDI,0x6                         ; 00453414
        ;   Label: LAB_00453414
    JZ 0x004533c6                       ; 00453417
        ;   XREF to: 004533c6 (CONDITIONAL_JUMP)  ; LAB_004533c6
    PUSH 0x87a                          ; 00453419
    PUSH EDI                            ; 0045341e
    MOV EAX,0x5d000b                    ; 0045341f | s_actionPending_d_doc_cpp_005d000a+1
    PUSH EAX                            ; 00453424 | s_actionPending_d_doc_cpp_005d000a+1
    MOV ECX,dword ptr [0x006138e0]      ; 00453425 | g_CEditorToolsPtr
    PUSH ECX                            ; 0045342b
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0 ; 0045342c
        ;   XREF to: 0047bdf0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 00453431
    JMP 0x004533d0                      ; 00453434
        ;   XREF to: 004533d0 (UNCONDITIONAL_JUMP)  ; LAB_004533d0
    MOV EAX,dword ptr [EBX + 0x256a4]   ; 00453436
        ;   Label: LAB_00453436
    CMP EAX,0x4                         ; 0045343c
    JNZ 0x00453477                      ; 0045343f
        ;   XREF to: 00453477 (CONDITIONAL_JUMP)  ; LAB_00453477
    MOV dword ptr [EBX + 0x256a4],0x0   ; 00453441
    MOV ESI,dword ptr [EBX + 0x25608]   ; 0045344b
        ;   Label: LAB_0045344b
    TEST ESI,ESI                        ; 00453451
    JZ 0x00453494                       ; 00453453
        ;   XREF to: 00453494 (CONDITIONAL_JUMP)  ; LAB_00453494
    PUSH EBX                            ; 00453455
    MOV EDX,dword ptr [ESI + 0x2b0]     ; 00453456
    PUSH ESI                            ; 0045345c
    CALL dword ptr [EDX + 0x8c]         ; 0045345d
    ADD ESP,0x8                         ; 00453463
    MOV EDI,EAX                         ; 00453466
    TEST EAX,EAX                        ; 00453468
    JNZ 0x004534b2                      ; 0045346a
        ;   XREF to: 004534b2 (CONDITIONAL_JUMP)  ; LAB_004534b2
    MOV dword ptr [EBX + 0x25608],EAX   ; 0045346c
    JMP 0x00453374                      ; 00453472
        ;   XREF to: 00453374 (UNCONDITIONAL_JUMP)  ; LAB_00453374
    PUSH 0x899                          ; 00453477
        ;   Label: LAB_00453477
    PUSH EAX                            ; 0045347c
    MOV EAX,0x5d002e                    ; 0045347d | = "actionPending = %d\ndoc.cpp line %d"
    PUSH EAX                            ; 00453482 | = "actionPending = %d\ndoc.cpp line %d"
    MOV ECX,dword ptr [0x006138e0]      ; 00453483 | g_CEditorToolsPtr
    PUSH ECX                            ; 00453489
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0 ; 0045348a
        ;   XREF to: 0047bdf0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 0045348f
    JMP 0x0045344b                      ; 00453492
        ;   XREF to: 0045344b (UNCONDITIONAL_JUMP)  ; LAB_0045344b
    PUSH 0x89f                          ; 00453494
        ;   Label: LAB_00453494
    PUSH 0x5d0051                       ; 00453499 | = "Object to pick up is now NULL\ndoc.cp..."
    MOV EDX,dword ptr [0x006138e0]      ; 0045349e | g_CEditorToolsPtr
    PUSH EDX                            ; 004534a4
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0 ; 004534a5
        ;   XREF to: 0047bdf0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004534aa
    JMP 0x00453374                      ; 004534ad
        ;   XREF to: 00453374 (UNCONDITIONAL_JUMP)  ; LAB_00453374
    MOV EAX,dword ptr [EBX + 0x25608]   ; 004534b2
        ;   Label: LAB_004534b2
    TEST EAX,EAX                        ; 004534b8
    JNZ 0x0045353c                      ; 004534ba
        ;   XREF to: 0045353c (CONDITIONAL_JUMP)  ; LAB_0045353c
    XOR ESI,ESI                         ; 004534c0
        ;   Label: LAB_004534c0
    CMP EDI,0x2                         ; 004534c2
    JNZ 0x004535e0                      ; 004534c5
        ;   XREF to: 004535e0 (CONDITIONAL_JUMP)  ; LAB_004535e0
    MOV EDI,dword ptr [EBX + 0x256a4]   ; 004534cb
    TEST EDI,EDI                        ; 004534d1
    JZ 0x004534ef                       ; 004534d3
        ;   XREF to: 004534ef (CONDITIONAL_JUMP)  ; LAB_004534ef
    PUSH 0x8c2                          ; 004534d5
    PUSH EDI                            ; 004534da
    PUSH 0x5d007f                       ; 004534db | = "actionPending = %d\ndoc.cpp line %d"
    MOV EDX,dword ptr [0x006138e0]      ; 004534e0 | g_CEditorToolsPtr
    PUSH EDX                            ; 004534e6
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0 ; 004534e7
        ;   XREF to: 0047bdf0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 004534ec
    MOV ECX,dword ptr [0x02661f38]      ; 004534ef | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004534ef
    PUSH ECX                            ; 004534f5
    MOV ESI,dword ptr [EBX + 0x25608]   ; 004534f6
    PUSH ESI                            ; 004534fc
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004534fd
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 00453502
    MOV ESI,EAX                         ; 00453505
    TEST EAX,EAX                        ; 00453507
    JZ 0x00453522                       ; 00453509
        ;   XREF to: 00453522 (CONDITIONAL_JUMP)  ; LAB_00453522
    MOV EAX,dword ptr [EAX + 0x43c]     ; 0045350b
    CMP EAX,0x6                         ; 00453511
    JNC 0x004535d9                      ; 00453514
        ;   XREF to: 004535d9 (CONDITIONAL_JUMP)  ; LAB_004535d9
    TEST EAX,EAX                        ; 0045351a
    JNZ 0x004535e0                      ; 0045351c
        ;   XREF to: 004535e0 (CONDITIONAL_JUMP)  ; LAB_004535e0
    MOV dword ptr [EBX + 0x256a4],0x1   ; 00453522
        ;   Label: LAB_00453522
    PUSH 0x1                            ; 0045352c
        ;   Label: LAB_0045352c
    PUSH EBX                            ; 0045352e
    CALL core_hero.cpp_FUN_004cff50     ; 0045352f
        ;   XREF to: 004cff50 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_FUN_004cff50(CHero * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 00453534
    JMP 0x00453374                      ; 00453537
        ;   XREF to: 00453374 (UNCONDITIONAL_JUMP)  ; LAB_00453374
    PUSH EBX                            ; 0045353c
        ;   Label: LAB_0045353c
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0045353d
    PUSH EAX                            ; 00453543
    CALL dword ptr [EDX + 0x8c]         ; 00453544
    ADD ESP,0x8                         ; 0045354a
    CMP EAX,0x4                         ; 0045354d
    SETZ AL                             ; 00453550
    AND EAX,0xff                        ; 00453553
    JZ 0x004534c0                       ; 00453558
        ;   XREF to: 004534c0 (CONDITIONAL_JUMP)  ; LAB_004534c0
    MOV dword ptr [EBX + 0x2d08],0x0    ; 0045355e
    MOV dword ptr [EBX + 0x2d04],0x9    ; 00453568
    JMP 0x004534c0                      ; 00453572
        ;   XREF to: 004534c0 (UNCONDITIONAL_JUMP)  ; LAB_004534c0
    MOV dword ptr [EBX + 0x256a4],0x0   ; 00453577
        ;   Label: LAB_00453577
    TEST ESI,ESI                        ; 00453581
        ;   Label: LAB_00453581
    JZ 0x0045352c                       ; 00453583
        ;   XREF to: 0045352c (CONDITIONAL_JUMP)  ; LAB_0045352c
    PUSH 0x1                            ; 00453585
    PUSH EBX                            ; 00453587
    CALL core_hero.cpp_FUN_004cff50     ; 00453588
        ;   XREF to: 004cff50 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_FUN_004cff50(CHero * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 0045358d
    PUSH 0x1                            ; 00453590
    PUSH EBX                            ; 00453592
    CALL core_hero.cpp_FUN_004cff90     ; 00453593
        ;   XREF to: 004cff90 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cff90()
    ADD ESP,0x8                         ; 00453598
    PUSH 0x1                            ; 0045359b
    PUSH 0x5                            ; 0045359d
    PUSH ESI                            ; 0045359f
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004535a0
    PUSH EAX                            ; 004535a7
    CALL core_inv.cpp_FUN_004db9d0      ; 004535a8
        ;   XREF to: 004db9d0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004db9d0()
    MOV dword ptr [EBX + 0x25640],0x1   ; 004535ad
    MOV dword ptr [EBX + 0x2d04],0x3    ; 004535b7
    MOV dword ptr [EBX + 0x2d08],0x3f800000 ; 004535c1
    ADD ESP,0x10                        ; 004535cb
    MOV dword ptr [EBX + 0x25698],ESI   ; 004535ce
    JMP 0x00453374                      ; 004535d4
        ;   XREF to: 00453374 (UNCONDITIONAL_JUMP)  ; LAB_00453374
    JBE 0x00453577                      ; 004535d9
        ;   XREF to: 00453577 (CONDITIONAL_JUMP)  ; LAB_00453577
        ;   Label: LAB_004535d9
    CMP EAX,0x8                         ; 004535db
    JNC 0x004535f9                      ; 004535de
        ;   XREF to: 004535f9 (CONDITIONAL_JUMP)  ; LAB_004535f9
    CMP dword ptr [EBX + 0x256a4],0x0   ; 004535e0
        ;   Label: LAB_004535e0
    JZ 0x00453581                       ; 004535e7
        ;   XREF to: 00453581 (CONDITIONAL_JUMP)  ; LAB_00453581
    PUSH 0x1                            ; 004535e9
    PUSH EBX                            ; 004535eb
    CALL core_hero.cpp_FUN_004cff50     ; 004535ec
        ;   XREF to: 004cff50 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_FUN_004cff50(CHero * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 004535f1
    JMP 0x00453374                      ; 004535f4
        ;   XREF to: 00453374 (UNCONDITIONAL_JUMP)  ; LAB_00453374
    JBE 0x00453577                      ; 004535f9
        ;   XREF to: 00453577 (CONDITIONAL_JUMP)  ; LAB_00453577
        ;   Label: LAB_004535f9
    CMP EAX,0xd                         ; 004535ff
    JZ 0x00453577                       ; 00453602
        ;   XREF to: 00453577 (CONDITIONAL_JUMP)  ; LAB_00453577
    JMP 0x004535e0                      ; 00453608
        ;   XREF to: 004535e0 (UNCONDITIONAL_JUMP)  ; LAB_004535e0
    MOV ESI,dword ptr [EBX + 0x2698]    ; 0045360a
        ;   Label: LAB_0045360a
    CMP ESI,dword ptr [EBX + 0x25698]   ; 00453610
    JNZ 0x00453622                      ; 00453616
        ;   XREF to: 00453622 (CONDITIONAL_JUMP)  ; LAB_00453622
    MOV dword ptr [EBX + 0x25698],0x0   ; 00453618
    PUSH 0x1                            ; 00453622
        ;   Label: LAB_00453622
    PUSH EBX                            ; 00453624
    CALL core_hero.cpp_FUN_004cff90     ; 00453625
        ;   XREF to: 004cff90 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cff90()
    MOV EDI,dword ptr [EBX + 0x256a4]   ; 0045362a
    ADD ESP,0x8                         ; 00453630
    CMP EDI,0x1                         ; 00453633
    JNZ 0x00453647                      ; 00453636
        ;   XREF to: 00453647 (CONDITIONAL_JUMP)  ; LAB_00453647
    MOV dword ptr [EBX + 0x256a4],0x0   ; 00453638
    JMP 0x00453374                      ; 00453642
        ;   XREF to: 00453374 (UNCONDITIONAL_JUMP)  ; LAB_00453374
    PUSH 0x912                          ; 00453647
        ;   Label: LAB_00453647
    PUSH EDI                            ; 0045364c
    PUSH 0x5d00a2                       ; 0045364d | = "actionPending = %d\ndoc.cpp line %d"
    MOV EDX,dword ptr [0x006138e0]      ; 00453652 | g_CEditorToolsPtr
    PUSH EDX                            ; 00453658
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0 ; 00453659
        ;   XREF to: 0047bdf0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0(CEditorTools * this_ptr, char * format)
    JMP 0x00453371                      ; 0045365e
        ;   XREF to: 00453371 (UNCONDITIONAL_JUMP)  ; LAB_00453371
    MOV EAX,[0x01b4d274]                ; 00453663 | DAT_01b4d274
        ;   Label: LAB_00453663
    JMP 0x004532de                      ; 00453668
        ;   XREF to: 004532de (UNCONDITIONAL_JUMP)  ; LAB_004532de
    MOV EDI,dword ptr [EBX + 0x25694]   ; 0045366d
        ;   Label: LAB_0045366d
    TEST EDI,EDI                        ; 00453673
    JNZ 0x00453705                      ; 00453675
        ;   XREF to: 00453705 (CONDITIONAL_JUMP)  ; LAB_00453705
    CMP dword ptr [EBX + 0x2570],0x0    ; 0045367b
    JZ 0x00453374                       ; 00453682
        ;   XREF to: 00453374 (CONDITIONAL_JUMP)  ; LAB_00453374
    PUSH 0x3                            ; 00453688
    MOV EDX,dword ptr [ESP + 0x158]     ; 0045368a
    PUSH EDX                            ; 00453691
    CALL core_motion.cpp_FUN_005038a0   ; 00453692
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x16c],EAX     ; 00453697
    FLD float ptr [ESP + 0x16c]         ; 0045369e
    ADD ESP,0x8                         ; 004536a5
    FCOMP double ptr [0x005d012f]       ; 004536a8 | DAT_005d012f
    FNSTSW AX                           ; 004536ae
    SAHF                                ; 004536b0
    JA 0x00453758                       ; 004536b1
        ;   XREF to: 00453758 (CONDITIONAL_JUMP)  ; LAB_00453758
    PUSH 0x1                            ; 004536b7
    MOV ECX,dword ptr [ESP + 0x158]     ; 004536b9
    PUSH ECX                            ; 004536c0
    CALL core_motion.cpp_FUN_005038a0   ; 004536c1
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x16c],EAX     ; 004536c6
    FLD float ptr [ESP + 0x16c]         ; 004536cd
    ADD ESP,0x8                         ; 004536d4
    FCOMP double ptr [0x005d012f]       ; 004536d7 | DAT_005d012f
    FNSTSW AX                           ; 004536dd
    SAHF                                ; 004536df
    JBE 0x00453777                      ; 004536e0
        ;   XREF to: 00453777 (CONDITIONAL_JUMP)  ; LAB_00453777
    LEA EAX,[ESP + 0x110]               ; 004536e6
    PUSH 0x3f800000                     ; 004536ed
    PUSH EAX                            ; 004536f2
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 004536f3
    PUSH EBX                            ; 004536f9
    CALL dword ptr [EDX + 0x2c]         ; 004536fa
    ADD ESP,0xc                         ; 004536fd
    JMP 0x00453374                      ; 00453700
        ;   XREF to: 00453374 (UNCONDITIONAL_JUMP)  ; LAB_00453374
    PUSH 0x3f800000                     ; 00453705
        ;   Label: LAB_00453705
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045370a
    MOV EDX,dword ptr [EDI + 0x2b0]     ; 00453710
    PUSH EDI                            ; 00453716
    MOV dword ptr [ESP + 0x16c],EAX     ; 00453717
    CALL dword ptr [EDX + 0x4c]         ; 0045371e
    ADD ESP,0x4                         ; 00453721
    PUSH EAX                            ; 00453724
    LEA EAX,[ESP + 0x118]               ; 00453725
    PUSH EAX                            ; 0045372c
    PUSH EBX                            ; 0045372d
    LEA ESI,[ESP + 0x114]               ; 0045372e
    CALL core_actor.cpp_FUN_00408d70    ; 00453735
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0045373a
    LEA EAX,[ESP + 0xa0]                ; 0045373d
    LEA EDI,[ESP + 0xa0]                ; 00453744
    PUSH EAX                            ; 0045374b
    LEA ESI,[ESP + 0x110]               ; 0045374c
    JMP 0x00453363                      ; 00453753
        ;   XREF to: 00453363 (UNCONDITIONAL_JUMP)  ; LAB_00453363
    LEA EAX,[ESP + 0x110]               ; 00453758
        ;   Label: LAB_00453758
    PUSH 0x3fd9999a                     ; 0045375f
    PUSH EAX                            ; 00453764
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 00453765
    PUSH EBX                            ; 0045376b
    CALL dword ptr [EDX + 0x2c]         ; 0045376c
    ADD ESP,0xc                         ; 0045376f
    JMP 0x00453374                      ; 00453772
        ;   XREF to: 00453374 (UNCONDITIONAL_JUMP)  ; LAB_00453374
    PUSH 0x2                            ; 00453777
        ;   Label: LAB_00453777
    MOV ESI,dword ptr [ESP + 0x158]     ; 00453779
    PUSH ESI                            ; 00453780
    CALL core_motion.cpp_FUN_005038a0   ; 00453781
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x16c],EAX     ; 00453786
    FLD float ptr [ESP + 0x16c]         ; 0045378d
    ADD ESP,0x8                         ; 00453794
    FCOMP double ptr [0x005d012f]       ; 00453797 | DAT_005d012f
    FNSTSW AX                           ; 0045379d
    SAHF                                ; 0045379f
    JBE 0x00453374                      ; 004537a0
        ;   XREF to: 00453374 (CONDITIONAL_JUMP)  ; LAB_00453374
    LEA EAX,[ESP + 0x110]               ; 004537a6
    PUSH 0x3f800000                     ; 004537ad
    PUSH EAX                            ; 004537b2
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 004537b3
    PUSH EBX                            ; 004537b9
    CALL dword ptr [EDX + 0x2c]         ; 004537ba
    ADD ESP,0xc                         ; 004537bd
    JMP 0x00453374                      ; 004537c0
        ;   XREF to: 00453374 (UNCONDITIONAL_JUMP)  ; LAB_00453374
    MOV ESI,dword ptr [0x01c264e0]      ; 004537c5 | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_004537c5
    PUSH ESI                            ; 004537cb
    MOV EDI,dword ptr [EBX + 0x276c]    ; 004537cc
    PUSH EDI                            ; 004537d2
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004537d3
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV dword ptr [ESP + 0x158],EAX     ; 004537d8
    ADD ESP,0x8                         ; 004537df
    MOV dword ptr [ESP + 0x14c],EAX     ; 004537e2
    TEST EAX,EAX                        ; 004537e9
    JNZ 0x004538d7                      ; 004537eb
        ;   XREF to: 004538d7 (CONDITIONAL_JUMP)  ; LAB_004538d7
    XOR EDX,EDX                         ; 004537f1
        ;   Label: LAB_004537f1
    MOV dword ptr [ESP + 0x158],EDX     ; 004537f3
    MOV dword ptr [ESP + 0x15c],EDX     ; 004537fa
    MOV EAX,[0x0061b5a8]                ; 00453801 | g_CDemonSetPtr
        ;   Label: LAB_00453801
    MOV EDX,dword ptr [ESP + 0x158]     ; 00453806
    CMP EDX,dword ptr [EAX + 0x150fec]  ; 0045380d | g_CDemonSetInstance.enemy_count
    JGE 0x00453a8d                      ; 00453813
        ;   XREF to: 00453a8d (CONDITIONAL_JUMP)  ; LAB_00453a8d
    ADD EAX,dword ptr [ESP + 0x15c]     ; 00453819
    MOV EAX,dword ptr [EAX + 0x150ff0]  ; 00453820
    MOV dword ptr [ESP + 0x160],EAX     ; 00453826
    MOV EAX,[0x01cedef4]                ; 0045382d | DAT_01cedef4
    LEA EDI,[ESP + 0x8c]                ; 00453832
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 00453839
    LEA ESI,[ESP + 0xa4]                ; 00453840
    MOV EDX,dword ptr [ESP + 0x160]     ; 00453847
    FLD float ptr [EAX + 0x20]          ; 0045384e
    FLD float ptr [EAX + 0x24]          ; 00453851
    FLD float ptr [EAX + 0x28]          ; 00453854
    FXCH ST2                            ; 00453857
    FSUB float ptr [EDX + 0x20]         ; 00453859
    FXCH                                ; 0045385c
    FSUB float ptr [EDX + 0x24]         ; 0045385e
    FXCH ST2                            ; 00453861
    FSUB float ptr [EDX + 0x28]         ; 00453863
    FXCH                                ; 00453866
    FSTP float ptr [ESP + 0xa4]         ; 00453868
    FXCH                                ; 0045386f
    FSTP float ptr [ESP + 0xa8]         ; 00453871
    FSTP float ptr [ESP + 0xac]         ; 00453878
    MOVSD ES:EDI,ESI                    ; 0045387f
    MOVSD ES:EDI,ESI                    ; 00453880
    MOVSD ES:EDI,ESI                    ; 00453881
    FLD float ptr [ESP + 0x90]          ; 00453882
    FMUL ST0                            ; 00453889
    FLD float ptr [ESP + 0x8c]          ; 0045388b
    FMUL ST0                            ; 00453892
    FADDP                               ; 00453894
    FLD float ptr [ESP + 0x94]          ; 00453896
    FMUL ST0                            ; 0045389d
    FADDP                               ; 0045389f
    FSQRT                               ; 004538a1
    FCOMP double ptr [0x005d0137]       ; 004538a3 | DAT_005d0137
    FNSTSW AX                           ; 004538a9
    SAHF                                ; 004538ab
    JBE 0x00453a4f                      ; 004538ac
        ;   XREF to: 00453a4f (CONDITIONAL_JUMP)  ; LAB_00453a4f
    MOV EAX,dword ptr [ESP + 0x158]     ; 004538b2
        ;   Label: LAB_004538b2
    MOV EDI,dword ptr [ESP + 0x15c]     ; 004538b9
    INC EAX                             ; 004538c0
    ADD EDI,0x4                         ; 004538c1
    MOV dword ptr [ESP + 0x158],EAX     ; 004538c4
    MOV dword ptr [ESP + 0x15c],EDI     ; 004538cb
    JMP 0x00453801                      ; 004538d2
        ;   XREF to: 00453801 (UNCONDITIONAL_JUMP)  ; LAB_00453801
    MOV EDX,dword ptr [0x01b4d288]      ; 004538d7 | DAT_01b4d288
        ;   Label: LAB_004538d7
    PUSH EDX                            ; 004538dd
    MOV ECX,dword ptr [ESP + 0x158]     ; 004538de
    PUSH ECX                            ; 004538e5
    LEA ESI,[ESP + 0x100]               ; 004538e6
    LEA EDI,[ESP + 0xdc]                ; 004538ed
    CALL core_skeleton.cpp_FUN_005469a0 ; 004538f4
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 004538f9
    LEA EAX,[ESP + 0xd4]                ; 004538fc
    LEA ESI,[ESP + 0xf8]                ; 00453903
    PUSH EAX                            ; 0045390a
    MOVSD ES:EDI,ESI                    ; 0045390b
    MOVSD ES:EDI,ESI                    ; 0045390c
    MOVSD ES:EDI,ESI                    ; 0045390d
    PUSH EBX                            ; 0045390e
    LEA ESI,[ESP + 0x124]               ; 0045390f
    LEA EDI,[ESP + 0xd0]                ; 00453916
    CALL core_actor.cpp_FUN_00408d70    ; 0045391d
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 00453922
    LEA EAX,[ESP + 0x44]                ; 00453925
    LEA ESI,[ESP + 0x11c]               ; 00453929
    PUSH EAX                            ; 00453930
    MOVSD ES:EDI,ESI                    ; 00453931
    MOVSD ES:EDI,ESI                    ; 00453932
    MOVSD ES:EDI,ESI                    ; 00453933
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 00453934
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00453939
    PUSH 0x41700000                     ; 0045393c
    PUSH 0x41200000                     ; 00453941
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00453946
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x16c],EAX     ; 0045394b
    FLD float ptr [ESP + 0x16c]         ; 00453952
    ADD ESP,0x8                         ; 00453959
    LEA EAX,[ESP + 0xc8]                ; 0045395c
    PUSH EAX                            ; 00453963
    MOV ESI,dword ptr [ESP + 0x154]     ; 00453964
    LEA EDI,[ESP + 0xe4]                ; 0045396b
    PUSH ESI                            ; 00453972
    LEA ESI,[ESP + 0x13c]               ; 00453973
    FSTP float ptr [ESP + 0x50]         ; 0045397a
    CALL core_actor.cpp_FUN_00408de0    ; 0045397e
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x13c]               ; 00453983
    LEA EAX,[ESP + 0xe8]                ; 0045398a
    ADD ESP,0x8                         ; 00453991
    LEA EDX,[ESP + 0x60]                ; 00453994
    MOVSD ES:EDI,ESI                    ; 00453998
    MOVSD ES:EDI,ESI                    ; 00453999
    MOVSD ES:EDI,ESI                    ; 0045399a
    CMP EDX,EAX                         ; 0045399b
    JZ 0x004539c0                       ; 0045399d
        ;   XREF to: 004539c0 (CONDITIONAL_JUMP)  ; LAB_004539c0
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0045399f
    MOV dword ptr [ESP + 0x60],EAX      ; 004539a6
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004539aa
    MOV dword ptr [ESP + 0x64],EAX      ; 004539b1
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004539b5
    MOV dword ptr [ESP + 0x68],EAX      ; 004539bc
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004539c0
        ;   Label: LAB_004539c0
    LEA EDX,[ESP + 0x44]                ; 004539c7
    MOV dword ptr [ESP + 0x78],EBX      ; 004539cb
    MOV dword ptr [ESP + 0x7c],EBX      ; 004539cf
    PUSH EDX                            ; 004539d3
    MOV EDI,dword ptr [ESP + 0x150]     ; 004539d4
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004539db
    PUSH EDI                            ; 004539e1
    CALL dword ptr [EAX + 0x110]        ; 004539e2
    ADD ESP,0x8                         ; 004539e8
    FLDZ                                ; 004539eb
    FLD float ptr [ESP + 0x48]          ; 004539ed
    FSTP double ptr [ESP]               ; 004539f1
    FCOMP double ptr [ESP]              ; 004539f4
    FNSTSW AX                           ; 004539f7
    SAHF                                ; 004539f9
    JNC 0x004537f1                      ; 004539fa
        ;   XREF to: 004537f1 (CONDITIONAL_JUMP)  ; LAB_004537f1
    FLD double ptr [ESP]                ; 00453a00
    FMUL double ptr [0x005d0127]        ; 00453a03 | DAT_005d0127
    CALL crt_math.c_round_FUN_005b7ff0  ; 00453a09
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x164]       ; 00453a0e
    MOV EAX,dword ptr [ESP + 0x164]     ; 00453a15
    PUSH 0x0                            ; 00453a1c
    INC EAX                             ; 00453a1e
    PUSH EAX                            ; 00453a1f
    PUSH 0x0                            ; 00453a20
    LEA EAX,[ESP + 0xd4]                ; 00453a22
    PUSH EAX                            ; 00453a29
    MOV EAX,[0x006167e0]                ; 00453a2a | g_CGorePtr
    PUSH EAX                            ; 00453a2f
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850 ; 00453a30
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 00453a35
    PUSH 0x5d00c5                       ; 00453a38 | = "kick1.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00453a3d
    PUSH EBX                            ; 00453a43
    CALL dword ptr [EAX + 0x34]         ; 00453a44
    ADD ESP,0x8                         ; 00453a47
    JMP 0x004537f1                      ; 00453a4a
        ;   XREF to: 004537f1 (UNCONDITIONAL_JUMP)  ; LAB_004537f1
    LEA EAX,[ESP + 0x8]                 ; 00453a4f
        ;   Label: LAB_00453a4f
    PUSH EAX                            ; 00453a53
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 00453a54
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    MOV ECX,0x40a00000                  ; 00453a59
    ADD ESP,0x4                         ; 00453a5e
    LEA EDX,[ESP + 0x8]                 ; 00453a61
    MOV EAX,dword ptr [ESP + 0x160]     ; 00453a65
    PUSH EDX                            ; 00453a6c
    MOV ESI,dword ptr [ESP + 0x164]     ; 00453a6d
    MOV dword ptr [ESP + 0x10],ECX      ; 00453a74
    PUSH ESI                            ; 00453a78
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00453a79
    CALL dword ptr [EAX + 0x110]        ; 00453a7f
    ADD ESP,0x8                         ; 00453a85
    JMP 0x004538b2                      ; 00453a88
        ;   XREF to: 004538b2 (UNCONDITIONAL_JUMP)  ; LAB_004538b2
    MOV dword ptr [EBX + 0x276c],0x0    ; 00453a8d
        ;   Label: LAB_00453a8d
    JMP 0x00453374                      ; 00453a97
        ;   XREF to: 00453374 (UNCONDITIONAL_JUMP)  ; LAB_00453374
    MOV ECX,dword ptr [EBX + 0x276c]    ; 00453a9c
        ;   Label: LAB_00453a9c
    TEST ECX,ECX                        ; 00453aa2
    JZ 0x00453374                       ; 00453aa4
        ;   XREF to: 00453374 (CONDITIONAL_JUMP)  ; LAB_00453374
    LEA EAX,[ECX + 0x20]                ; 00453aaa
    PUSH EAX                            ; 00453aad
    PUSH EBX                            ; 00453aae
    LEA ESI,[ESP + 0xf4]                ; 00453aaf
    LEA EDI,[ESP + 0xc4]                ; 00453ab6
    CALL core_actor.cpp_FUN_00408de0    ; 00453abd
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0xf4]                ; 00453ac2
    ADD ESP,0x8                         ; 00453ac9
    MOVSD ES:EDI,ESI                    ; 00453acc
    MOVSD ES:EDI,ESI                    ; 00453acd
    MOVSD ES:EDI,ESI                    ; 00453ace
    FLDZ                                ; 00453acf
    FCOMP float ptr [ESP + 0xc4]        ; 00453ad1
    FNSTSW AX                           ; 00453ad8
    SAHF                                ; 00453ada
    JNC 0x00453374                      ; 00453adb
        ;   XREF to: 00453374 (CONDITIONAL_JUMP)  ; LAB_00453374
    PUSH 0x5d00cf                       ; 00453ae1 | = "hit-gh[4,7].wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00453ae6
    PUSH EBX                            ; 00453aec
    CALL dword ptr [EAX + 0x34]         ; 00453aed
    ADD ESP,0x8                         ; 00453af0
    JMP 0x00453374                      ; 00453af3
        ;   XREF to: 00453374 (UNCONDITIONAL_JUMP)  ; LAB_00453374
    PUSH EBX                            ; 00453af8
        ;   Label: LAB_00453af8
    CALL core_doc.cpp_FUN_00458320      ; 00453af9
        ;   XREF to: 00458320 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_00458320()
    ADD ESP,0x4                         ; 00453afe
    JMP 0x00453374                      ; 00453b01
        ;   XREF to: 00453374 (UNCONDITIONAL_JUMP)  ; LAB_00453374
    PUSH 0x971                          ; 00453b06
        ;   Label: LAB_00453b06
    PUSH ECX                            ; 00453b0b
    PUSH 0x5d00df                       ; 00453b0c | = "actionPending = %d\ndoc.cpp line %d"
    MOV EDI,dword ptr [0x006138e0]      ; 00453b11 | g_CEditorToolsPtr
    PUSH EDI                            ; 00453b17
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0 ; 00453b18
        ;   XREF to: 0047bdf0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 00453b1d
    JMP 0x00453bb1                      ; 00453b20
        ;   XREF to: 00453bb1 (UNCONDITIONAL_JUMP)  ; LAB_00453bb1
    PUSH EBX                            ; 00453b25
        ;   Label: LAB_00453b25
    CALL core_hero.cpp_FUN_004cf440     ; 00453b26
        ;   XREF to: 004cf440 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf440()
    ADD ESP,0x4                         ; 00453b2b
    JMP 0x00453374                      ; 00453b2e
        ;   XREF to: 00453374 (UNCONDITIONAL_JUMP)  ; LAB_00453374
    MOV EAX,[0x005f5140]                ; 00453b33 | DAT_005f5140
        ;   Label: LAB_00453b33
    MOV dword ptr [EBX + 0x258c],EAX    ; 00453b38
    JMP 0x00453374                      ; 00453b3e
        ;   XREF to: 00453374 (UNCONDITIONAL_JUMP)  ; LAB_00453374
    MOV EAX,[0x005f5144]                ; 00453b43 | DAT_005f5144
        ;   Label: LAB_00453b43
    MOV dword ptr [EBX + 0x258c],EAX    ; 00453b48
    JMP 0x00453374                      ; 00453b4e
        ;   XREF to: 00453374 (UNCONDITIONAL_JUMP)  ; LAB_00453374
    JBE 0x00453374                      ; 00453b53
        ;   XREF to: 00453374 (CONDITIONAL_JUMP)  ; LAB_00453374
        ;   Label: LAB_00453b53
    CMP EAX,0x17                        ; 00453b59
    JNC 0x00453b6d                      ; 00453b5c
        ;   XREF to: 00453b6d (CONDITIONAL_JUMP)  ; LAB_00453b6d
    CMP EAX,0x15                        ; 00453b5e
    JNC 0x00453b92                      ; 00453b61
        ;   XREF to: 00453b92 (CONDITIONAL_JUMP)  ; LAB_00453b92
    CMP EAX,0x13                        ; 00453b63
    JZ 0x00453af8                       ; 00453b66
        ;   XREF to: 00453af8 (CONDITIONAL_JUMP)  ; LAB_00453af8
    JMP 0x00453c4c                      ; 00453b68
        ;   XREF to: 00453c4c (UNCONDITIONAL_JUMP)  ; LAB_00453c4c
    JBE 0x00453b25                      ; 00453b6d
        ;   XREF to: 00453b25 (CONDITIONAL_JUMP)  ; LAB_00453b25
        ;   Label: LAB_00453b6d
    CMP EAX,0x29a                       ; 00453b6f
    JNC 0x00453b84                      ; 00453b74
        ;   XREF to: 00453b84 (CONDITIONAL_JUMP)  ; LAB_00453b84
    CMP EAX,0x18                        ; 00453b76
    JZ 0x00453374                       ; 00453b79
        ;   XREF to: 00453374 (CONDITIONAL_JUMP)  ; LAB_00453374
    JMP 0x00453c4c                      ; 00453b7f
        ;   XREF to: 00453c4c (UNCONDITIONAL_JUMP)  ; LAB_00453c4c
    JBE 0x00453b33                      ; 00453b84
        ;   XREF to: 00453b33 (CONDITIONAL_JUMP)  ; LAB_00453b33
        ;   Label: LAB_00453b84
    CMP EAX,0x29b                       ; 00453b86
    JZ 0x00453b43                       ; 00453b8b
        ;   XREF to: 00453b43 (CONDITIONAL_JUMP)  ; LAB_00453b43
    JMP 0x00453c4c                      ; 00453b8d
        ;   XREF to: 00453c4c (UNCONDITIONAL_JUMP)  ; LAB_00453c4c
    JBE 0x0045360a                      ; 00453b92
        ;   XREF to: 0045360a (CONDITIONAL_JUMP)  ; LAB_0045360a
        ;   Label: LAB_00453b92
    MOV ECX,dword ptr [EBX + 0x256a4]   ; 00453b98
    CMP ECX,0x5                         ; 00453b9e
    JNZ 0x00453b06                      ; 00453ba1
        ;   XREF to: 00453b06 (CONDITIONAL_JUMP)  ; LAB_00453b06
    MOV dword ptr [EBX + 0x256a4],0x0   ; 00453ba7
    CMP dword ptr [EBX + 0x25604],0x0   ; 00453bb1
        ;   Label: LAB_00453bb1
    JNZ 0x00453bd3                      ; 00453bb8
        ;   XREF to: 00453bd3 (CONDITIONAL_JUMP)  ; LAB_00453bd3
    PUSH 0x977                          ; 00453bba
    PUSH 0x5d0102                       ; 00453bbf | = "doorToOpen == NULL\ndoc.cpp line %d"
    MOV EDX,dword ptr [0x006138e0]      ; 00453bc4 | g_CEditorToolsPtr
    PUSH EDX                            ; 00453bca
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0 ; 00453bcb
        ;   XREF to: 0047bdf0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 00453bd0
    PUSH EBX                            ; 00453bd3
        ;   Label: LAB_00453bd3
    CALL core_hero.cpp_CHero_tryOpenDoor_FUN_004cf230 ; 00453bd4
        ;   XREF to: 004cf230 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryOpenDoor_FUN_004cf230(CHero * this_ptr)
    ADD ESP,0x4                         ; 00453bd9
    TEST EAX,EAX                        ; 00453bdc
    JNZ 0x00453374                      ; 00453bde
        ;   XREF to: 00453374 (CONDITIONAL_JUMP)  ; LAB_00453374
    PUSH 0x1                            ; 00453be4
    PUSH EAX                            ; 00453be6
    MOV ECX,dword ptr [ESP + 0x15c]     ; 00453be7
    PUSH ECX                            ; 00453bee
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00453bef
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00453bf4
    JMP 0x00453374                      ; 00453bf7
        ;   XREF to: 00453374 (UNCONDITIONAL_JUMP)  ; LAB_00453374
    JBE 0x004537c5                      ; 00453bfc
        ;   XREF to: 004537c5 (CONDITIONAL_JUMP)  ; LAB_004537c5
        ;   Label: LAB_00453bfc
    CMP EAX,0xf                         ; 00453c02
    JNC 0x00453c1f                      ; 00453c05
        ;   XREF to: 00453c1f (CONDITIONAL_JUMP)  ; LAB_00453c1f
    CMP EAX,0x7                         ; 00453c07
    JZ 0x004532d0                       ; 00453c0a
        ;   XREF to: 004532d0 (CONDITIONAL_JUMP)  ; LAB_004532d0
    PUSH ESI                            ; 00453c10
    PUSH EBX                            ; 00453c11
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 00453c12
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00453c17
    JMP 0x00453374                      ; 00453c1a
        ;   XREF to: 00453374 (UNCONDITIONAL_JUMP)  ; LAB_00453374
    JBE 0x00453a9c                      ; 00453c1f
        ;   XREF to: 00453a9c (CONDITIONAL_JUMP)  ; LAB_00453a9c
        ;   Label: LAB_00453c1f
    CMP EAX,0x11                        ; 00453c25
    JZ 0x00453374                       ; 00453c28
        ;   XREF to: 00453374 (CONDITIONAL_JUMP)  ; LAB_00453374
    PUSH ESI                            ; 00453c2e
    PUSH EBX                            ; 00453c2f
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 00453c30
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00453c35
    JMP 0x00453374                      ; 00453c38
        ;   XREF to: 00453374 (UNCONDITIONAL_JUMP)  ; LAB_00453374
    JBE 0x00453436                      ; 00453c3d
        ;   XREF to: 00453436 (CONDITIONAL_JUMP)  ; LAB_00453436
        ;   Label: LAB_00453c3d
    CMP EAX,0x3                         ; 00453c43
    JZ 0x0045338b                       ; 00453c46
        ;   XREF to: 0045338b (CONDITIONAL_JUMP)  ; LAB_0045338b
    PUSH ESI                            ; 00453c4c
        ;   Label: LAB_00453c4c
    PUSH EBX                            ; 00453c4d
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 00453c4e
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00453c53
    JMP 0x00453374                      ; 00453c56
        ;   XREF to: 00453374 (UNCONDITIONAL_JUMP)  ; LAB_00453374

