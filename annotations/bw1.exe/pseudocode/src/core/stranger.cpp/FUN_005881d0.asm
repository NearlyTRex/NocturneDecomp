; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stranger_cpp_FUN_005881d0(CStranger *param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined        Stack[-0xd4]:1  local_d4
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined        Stack[-0xbc]:1  local_bc
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x9c]:4  local_9c
; undefined        Stack[-0x80]:1  local_80
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_stranger.cpp_CStranger_processFrame_FUN_00585b00 at 00585da6
;
; Referenced Globals:
;   undefined4 s_actionPending_d_stranger_005f68d4+1
;   TerminatedCString s_actionPending_d_stranger_005f68fd
;   TerminatedCString s_Object_to_pick_up_is_now_005f6925
;   TerminatedCString s_actionPending_d_stranger_005f6958
;   TerminatedCString s_actionPending_d_stranger_005f6980
;   TerminatedCString s_kick1_wav_005f69a8
;   TerminatedCString s_hit_gh_4_7_wav_005f69b2
;   TerminatedCString s_fall_1_wav_005f69c2
;   TerminatedCString s_actionPending_d_stranger_005f69cd
;   TerminatedCString s_doorToOpen_NULL_stranger_005f69f5
;   undefined4 DAT_005f6a21
;   undefined4 DAT_005f6a29
;   undefined4 DAT_00606090
;   undefined4 DAT_00606098
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060
;   core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0
;   core_hero.cpp_FUN_004eb7f0
;   core_hero.cpp_FUN_004ec280
;   core_motion.cpp_CMotionController_advance_FUN_00524270
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_motion.cpp_FUN_00524a40
;   core_skeleton.cpp_FUN_00569040
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005881d0
        ;   Label: core_stranger.cpp_FUN_005881d0
    PUSH ESI                            ; 005881d1
    PUSH EDI                            ; 005881d2
    PUSH EBP                            ; 005881d3
    MOV EBP,ESP                         ; 005881d4
    SUB ESP,0x104                       ; 005881d6
    AND ESP,0xfffffff8                  ; 005881dc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005881df
    LEA EAX,[EBX + 0x158]               ; 005881e2
    MOV dword ptr [ESP + 0xfc],EAX      ; 005881e8
    LEA EAX,[EBX + 0x1ff9c]             ; 005881ef
    MOV dword ptr [ESP + 0xf0],EAX      ; 005881f5
    LEA EAX,[EBX + 0x1ff90]             ; 005881fc
    MOV dword ptr [ESP + 0xec],EAX      ; 00588202
    LEA EAX,[EBP + 0x18]                ; 00588209
        ;   Label: LAB_00588209
    PUSH EAX                            ; 0058820c
    MOV EDX,dword ptr [ESP + 0x100]     ; 0058820d
    PUSH EDX                            ; 00588214
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 00588215
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0058821a
    MOV ESI,EAX                         ; 0058821d
    CMP EAX,0x12                        ; 0058821f
    JNC 0x005888a4                      ; 00588222
        ;   XREF to: 005888a4 (CONDITIONAL_JUMP)  ; LAB_005888a4
    CMP EAX,0x6                         ; 00588228
    JNC 0x0058894d                      ; 0058822b
        ;   XREF to: 0058894d (CONDITIONAL_JUMP)  ; LAB_0058894d
    CMP EAX,0x2                         ; 00588231
    JNC 0x0058898e                      ; 00588234
        ;   XREF to: 0058898e (CONDITIONAL_JUMP)  ; LAB_0058898e
    CMP EAX,0x1                         ; 0058823a
    JNZ 0x0058899d                      ; 0058823d
        ;   XREF to: 0058899d (CONDITIONAL_JUMP)  ; LAB_0058899d
    CMP ESI,0x7                         ; 00588243
        ;   Label: LAB_00588243
    JNZ 0x00588503                      ; 00588246
        ;   XREF to: 00588503 (CONDITIONAL_JUMP)  ; LAB_00588503
    MOV EAX,[0x02c83620]                ; 0058824c | DAT_02c83620
    PUSH EAX                            ; 00588251
        ;   Label: LAB_00588251
    MOV EDI,dword ptr [ESP + 0x100]     ; 00588252
    PUSH EDI                            ; 00588259
    LEA ESI,[ESP + 0xd0]                ; 0058825a
    CALL core_skeleton.cpp_FUN_00569040 ; 00588261
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    LEA EDI,[ESP + 0xac]                ; 00588266
    LEA ESI,[ESP + 0xd0]                ; 0058826d
    ADD ESP,0x8                         ; 00588274
    MOVSD ES:EDI,ESI                    ; 00588277
    MOVSD ES:EDI,ESI                    ; 00588278
    MOVSD ES:EDI,ESI                    ; 00588279
    CMP dword ptr [EBX + 0x1ff84],0x0   ; 0058827a
    JZ 0x0058850d                       ; 00588281
        ;   XREF to: 0058850d (CONDITIONAL_JUMP)  ; LAB_0058850d
    MOV EAX,dword ptr [EBX + 0x154]     ; 00588287
    MOV dword ptr [ESP + 0x100],EAX     ; 0058828d
    MOV EAX,dword ptr [EBX + 0x1ff84]   ; 00588294
    PUSH 0x3f800000                     ; 0058829a
    PUSH EAX                            ; 0058829f
    MOV ESI,dword ptr [EAX + 0x154]     ; 005882a0
    CALL dword ptr [ESI + 0x44]         ; 005882a6
    ADD ESP,0x4                         ; 005882a9
    PUSH EAX                            ; 005882ac
    LEA EAX,[ESP + 0xac]                ; 005882ad
    PUSH EAX                            ; 005882b4
    PUSH EBX                            ; 005882b5
    LEA ESI,[ESP + 0xc0]                ; 005882b6
    CALL core_actor.cpp_FUN_00408b40    ; 005882bd
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 005882c2
    LEA EAX,[ESP + 0x88]                ; 005882c5
    LEA EDI,[ESP + 0x88]                ; 005882cc
    PUSH EAX                            ; 005882d3
    LEA ESI,[ESP + 0xbc]                ; 005882d4
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005882db
        ;   Label: LAB_005882db
    PUSH EBX                            ; 005882e2
    MOVSD ES:EDI,ESI                    ; 005882e3
    MOVSD ES:EDI,ESI                    ; 005882e4
    MOVSD ES:EDI,ESI                    ; 005882e5
    CALL dword ptr [EAX + 0x28]         ; 005882e6
    ADD ESP,0x10                        ; 005882e9
        ;   Label: LAB_005882e9
    FLD float ptr [EBP + 0x18]          ; 005882ec
        ;   Label: LAB_005882ec
    FLDZ                                ; 005882ef
    FCOMPP                              ; 005882f1
    FNSTSW AX                           ; 005882f3
    SAHF                                ; 005882f5
    JC 0x00588209                       ; 005882f6
        ;   XREF to: 00588209 (CONDITIONAL_JUMP)  ; LAB_00588209
    MOV ESP,EBP                         ; 005882fc
    POP EBP                             ; 005882fe
    POP EDI                             ; 005882ff
    POP ESI                             ; 00588300
    POP EBX                             ; 00588301
    RET                                 ; 00588302
    PUSH EBX                            ; 00588303
        ;   Label: LAB_00588303
    MOV ESI,dword ptr [EBX + 0x2628]    ; 00588304
    CALL core_stranger.cpp_CStranger_dropRightHandObject_FUN_0058ce20 ; 0058830a
        ;   XREF to: 0058ce20 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_dropRightHandObject_FUN_0058ce20(CStranger * this_ptr)
    MOV EDX,dword ptr [EBX + 0x1ff5c]   ; 0058830f
    ADD ESP,0x4                         ; 00588315
    CMP EDX,0x2                         ; 00588318
    JNZ 0x0058838c                      ; 0058831b
        ;   XREF to: 0058838c (CONDITIONAL_JUMP)  ; LAB_0058838c
    TEST ESI,ESI                        ; 0058831d
    JZ 0x0058833e                       ; 0058831f
        ;   XREF to: 0058833e (CONDITIONAL_JUMP)  ; LAB_0058833e
    MOV EDX,dword ptr [ESP + 0xf0]      ; 00588321
    PUSH EDX                            ; 00588328
    MOV ECX,dword ptr [ESP + 0xf0]      ; 00588329
    PUSH ECX                            ; 00588330
    MOV EAX,dword ptr [ESI + 0x154]     ; 00588331
    PUSH ESI                            ; 00588337
    CALL dword ptr [EAX + 0x68]         ; 00588338
    ADD ESP,0xc                         ; 0058833b
    MOV dword ptr [EBX + 0x1ff5c],0x0   ; 0058833e
        ;   Label: LAB_0058833e
    MOV EDI,dword ptr [EBX + 0x2c98]    ; 00588348
        ;   Label: LAB_00588348
    MOV dword ptr [EBX + 0x1ff8c],0x0   ; 0058834e
    CMP EDI,0xe                         ; 00588358
    JNZ 0x00588371                      ; 0058835b
        ;   XREF to: 00588371 (CONDITIONAL_JUMP)  ; LAB_00588371
    MOV dword ptr [EBX + 0x2c9c],0x0    ; 0058835d
    MOV dword ptr [EBX + 0x2c98],0x0    ; 00588367
    CMP ESI,dword ptr [EBX + 0x20004]   ; 00588371
        ;   Label: LAB_00588371
    JNZ 0x005882ec                      ; 00588377
        ;   XREF to: 005882ec (CONDITIONAL_JUMP)  ; LAB_005882ec
    MOV dword ptr [EBX + 0x20004],0x0   ; 0058837d
    JMP 0x005882ec                      ; 00588387
        ;   XREF to: 005882ec (UNCONDITIONAL_JUMP)  ; LAB_005882ec
    CMP EDX,0x6                         ; 0058838c
        ;   Label: LAB_0058838c
    JZ 0x0058833e                       ; 0058838f
        ;   XREF to: 0058833e (CONDITIONAL_JUMP)  ; LAB_0058833e
    PUSH 0x7c4                          ; 00588391
    PUSH EDX                            ; 00588396
    MOV EAX,0x5f68d5                    ; 00588397 | s_actionPending_d_stranger_005f68d4+1
    PUSH EAX                            ; 0058839c | s_actionPending_d_stranger_005f68d4+1
    MOV EAX,[0x0061abc0]                ; 0058839d | g_CEditorToolsPtr
    PUSH EAX                            ; 005883a2
    CALL shape_edittool.cpp_FUN_00494340 ; 005883a3
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00494340()
    ADD ESP,0x10                        ; 005883a8
    JMP 0x00588348                      ; 005883ab
        ;   XREF to: 00588348 (UNCONDITIONAL_JUMP)  ; LAB_00588348
    MOV EDX,dword ptr [EBX + 0x1ff5c]   ; 005883ad
        ;   Label: LAB_005883ad
    CMP EDX,0x4                         ; 005883b3
    JNZ 0x005883ee                      ; 005883b6
        ;   XREF to: 005883ee (CONDITIONAL_JUMP)  ; LAB_005883ee
    MOV dword ptr [EBX + 0x1ff5c],0x0   ; 005883b8
    MOV EDI,dword ptr [EBX + 0x1ff78]   ; 005883c2
        ;   Label: LAB_005883c2
    TEST EDI,EDI                        ; 005883c8
    JZ 0x0058840b                       ; 005883ca
        ;   XREF to: 0058840b (CONDITIONAL_JUMP)  ; LAB_0058840b
    PUSH EBX                            ; 005883cc
    MOV ESI,dword ptr [EDI + 0x154]     ; 005883cd
    PUSH EDI                            ; 005883d3
    CALL dword ptr [ESI + 0x84]         ; 005883d4
    ADD ESP,0x8                         ; 005883da
    MOV ESI,EAX                         ; 005883dd
    TEST EAX,EAX                        ; 005883df
    JNZ 0x00588429                      ; 005883e1
        ;   XREF to: 00588429 (CONDITIONAL_JUMP)  ; LAB_00588429
    MOV dword ptr [EBX + 0x1ff78],EAX   ; 005883e3
    JMP 0x005882ec                      ; 005883e9
        ;   XREF to: 005882ec (UNCONDITIONAL_JUMP)  ; LAB_005882ec
    PUSH 0x7e2                          ; 005883ee
        ;   Label: LAB_005883ee
    PUSH EDX                            ; 005883f3
    MOV EAX,0x5f68fd                    ; 005883f4 | = "actionPending = %d\nstranger.cpp line %d"
    PUSH EAX                            ; 005883f9 | = "actionPending = %d\nstranger.cpp line %d"
    MOV ESI,dword ptr [0x0061abc0]      ; 005883fa | g_CEditorToolsPtr
    PUSH ESI                            ; 00588400
    CALL shape_edittool.cpp_FUN_00494340 ; 00588401
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00494340()
    ADD ESP,0x10                        ; 00588406
    JMP 0x005883c2                      ; 00588409
        ;   XREF to: 005883c2 (UNCONDITIONAL_JUMP)  ; LAB_005883c2
    PUSH 0x7e8                          ; 0058840b
        ;   Label: LAB_0058840b
    PUSH 0x5f6925                       ; 00588410 | = "Object to pick up is now NULL\nstrang..."
    MOV ESI,dword ptr [0x0061abc0]      ; 00588415 | g_CEditorToolsPtr
    PUSH ESI                            ; 0058841b
    CALL shape_edittool.cpp_FUN_00494340 ; 0058841c
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00494340()
    ADD ESP,0xc                         ; 00588421
    JMP 0x005882ec                      ; 00588424
        ;   XREF to: 005882ec (UNCONDITIONAL_JUMP)  ; LAB_005882ec
    MOV EAX,dword ptr [EBX + 0x1ff78]   ; 00588429
        ;   Label: LAB_00588429
    TEST EAX,EAX                        ; 0058842f
    JNZ 0x00588476                      ; 00588431
        ;   XREF to: 00588476 (CONDITIONAL_JUMP)  ; LAB_00588476
    CMP ESI,0x2                         ; 00588433
        ;   Label: LAB_00588433
    JNZ 0x00588466                      ; 00588436
        ;   XREF to: 00588466 (CONDITIONAL_JUMP)  ; LAB_00588466
    MOV EAX,dword ptr [EBX + 0x1ff5c]   ; 00588438
    TEST EAX,EAX                        ; 0058843e
    JZ 0x0058845c                       ; 00588440
        ;   XREF to: 0058845c (CONDITIONAL_JUMP)  ; LAB_0058845c
    PUSH 0x806                          ; 00588442
    PUSH EAX                            ; 00588447
    PUSH 0x5f6958                       ; 00588448 | = "actionPending = %d\nstranger.cpp line %d"
    MOV ECX,dword ptr [0x0061abc0]      ; 0058844d | g_CEditorToolsPtr
    PUSH ECX                            ; 00588453
    CALL shape_edittool.cpp_FUN_00494340 ; 00588454
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00494340()
    ADD ESP,0x10                        ; 00588459
    MOV dword ptr [EBX + 0x1ff5c],0x1   ; 0058845c
        ;   Label: LAB_0058845c
    PUSH 0x1                            ; 00588466
        ;   Label: LAB_00588466
    PUSH EBX                            ; 00588468
    CALL core_hero.cpp_FUN_004ec280     ; 00588469
        ;   XREF to: 004ec280 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_FUN_004ec280(CHero * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 0058846e
    JMP 0x005882ec                      ; 00588471
        ;   XREF to: 005882ec (UNCONDITIONAL_JUMP)  ; LAB_005882ec
    PUSH EBX                            ; 00588476
        ;   Label: LAB_00588476
    MOV EDX,dword ptr [EAX + 0x154]     ; 00588477
    PUSH EAX                            ; 0058847d
    CALL dword ptr [EDX + 0x84]         ; 0058847e
    ADD ESP,0x8                         ; 00588484
    CMP EAX,0x4                         ; 00588487
    SETZ AL                             ; 0058848a
    AND EAX,0xff                        ; 0058848d
    JZ 0x00588433                       ; 00588492
        ;   XREF to: 00588433 (CONDITIONAL_JUMP)  ; LAB_00588433
    MOV dword ptr [EBX + 0x2c9c],0x0    ; 00588494
    MOV dword ptr [EBX + 0x2c98],0xe    ; 0058849e
    JMP 0x00588433                      ; 005884a8
        ;   XREF to: 00588433 (UNCONDITIONAL_JUMP)  ; LAB_00588433
    MOV ESI,dword ptr [EBX + 0x2628]    ; 005884aa
        ;   Label: LAB_005884aa
    CMP ESI,dword ptr [EBX + 0x20004]   ; 005884b0
    JNZ 0x005884c2                      ; 005884b6
        ;   XREF to: 005884c2 (CONDITIONAL_JUMP)  ; LAB_005884c2
    MOV dword ptr [EBX + 0x20004],0x0   ; 005884b8
    PUSH 0x1                            ; 005884c2
        ;   Label: LAB_005884c2
    PUSH EBX                            ; 005884c4
    CALL core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0 ; 005884c5
        ;   XREF to: 004ec2c0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0(CHero * this_ptr, int hand_index)
    MOV EDI,dword ptr [EBX + 0x1ff5c]   ; 005884ca
    ADD ESP,0x8                         ; 005884d0
    CMP EDI,0x1                         ; 005884d3
    JNZ 0x005884e7                      ; 005884d6
        ;   XREF to: 005884e7 (CONDITIONAL_JUMP)  ; LAB_005884e7
    MOV dword ptr [EBX + 0x1ff5c],0x0   ; 005884d8
    JMP 0x005882ec                      ; 005884e2
        ;   XREF to: 005882ec (UNCONDITIONAL_JUMP)  ; LAB_005882ec
    PUSH 0x826                          ; 005884e7
        ;   Label: LAB_005884e7
    PUSH EDI                            ; 005884ec
    PUSH 0x5f6980                       ; 005884ed | = "actionPending = %d\nstranger.cpp line %d"
    MOV EDX,dword ptr [0x0061abc0]      ; 005884f2 | g_CEditorToolsPtr
    PUSH EDX                            ; 005884f8
    CALL shape_edittool.cpp_FUN_00494340 ; 005884f9
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00494340()
    JMP 0x005882e9                      ; 005884fe
        ;   XREF to: 005882e9 (UNCONDITIONAL_JUMP)  ; LAB_005882e9
    MOV EAX,[0x02c8361c]                ; 00588503 | DAT_02c8361c
        ;   Label: LAB_00588503
    JMP 0x00588251                      ; 00588508
        ;   XREF to: 00588251 (UNCONDITIONAL_JUMP)  ; LAB_00588251
    MOV EDX,dword ptr [EBX + 0x20000]   ; 0058850d
        ;   Label: LAB_0058850d
    TEST EDX,EDX                        ; 00588513
    JNZ 0x0058859e                      ; 00588515
        ;   XREF to: 0058859e (CONDITIONAL_JUMP)  ; LAB_0058859e
    CMP dword ptr [EBX + 0x2500],0x0    ; 0058851b
    JZ 0x005882ec                       ; 00588522
        ;   XREF to: 005882ec (CONDITIONAL_JUMP)  ; LAB_005882ec
    PUSH 0x4                            ; 00588528
    MOV ESI,dword ptr [ESP + 0x100]     ; 0058852a
    PUSH ESI                            ; 00588531
    CALL core_motion.cpp_FUN_00524a40   ; 00588532
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x108],EAX     ; 00588537
    FLD float ptr [ESP + 0x108]         ; 0058853e
    ADD ESP,0x8                         ; 00588545
    FCOMP double ptr [0x005f6a29]       ; 00588548 | DAT_005f6a29
    FNSTSW AX                           ; 0058854e
    SAHF                                ; 00588550
    JA 0x005885eb                       ; 00588551
        ;   XREF to: 005885eb (CONDITIONAL_JUMP)  ; LAB_005885eb
    PUSH 0x1                            ; 00588557
    PUSH ESI                            ; 00588559
    CALL core_motion.cpp_FUN_00524a40   ; 0058855a
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x108],EAX     ; 0058855f
    FLD float ptr [ESP + 0x108]         ; 00588566
    ADD ESP,0x8                         ; 0058856d
    FCOMP double ptr [0x005f6a29]       ; 00588570 | DAT_005f6a29
    FNSTSW AX                           ; 00588576
    SAHF                                ; 00588578
    JBE 0x0058860a                      ; 00588579
        ;   XREF to: 0058860a (CONDITIONAL_JUMP)  ; LAB_0058860a
    LEA EAX,[ESP + 0xa4]                ; 0058857f
    PUSH 0x3f800000                     ; 00588586
    PUSH EAX                            ; 0058858b
    MOV EDX,dword ptr [EBX + 0x154]     ; 0058858c
    PUSH EBX                            ; 00588592
    CALL dword ptr [EDX + 0x24]         ; 00588593
    ADD ESP,0xc                         ; 00588596
    JMP 0x005882ec                      ; 00588599
        ;   XREF to: 005882ec (UNCONDITIONAL_JUMP)  ; LAB_005882ec
    PUSH 0x3f800000                     ; 0058859e
        ;   Label: LAB_0058859e
    MOV EAX,dword ptr [EBX + 0x154]     ; 005885a3
    MOV ESI,dword ptr [EDX + 0x154]     ; 005885a9
    PUSH EDX                            ; 005885af
    MOV dword ptr [ESP + 0x108],EAX     ; 005885b0
    CALL dword ptr [ESI + 0x44]         ; 005885b7
    ADD ESP,0x4                         ; 005885ba
    PUSH EAX                            ; 005885bd
    LEA EAX,[ESP + 0xac]                ; 005885be
    PUSH EAX                            ; 005885c5
    PUSH EBX                            ; 005885c6
    LEA ESI,[ESP + 0x9c]                ; 005885c7
    CALL core_actor.cpp_FUN_00408b40    ; 005885ce
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 005885d3
    LEA EAX,[ESP + 0x70]                ; 005885d6
    LEA EDI,[ESP + 0x70]                ; 005885da
    PUSH EAX                            ; 005885de
    LEA ESI,[ESP + 0x98]                ; 005885df
    JMP 0x005882db                      ; 005885e6
        ;   XREF to: 005882db (UNCONDITIONAL_JUMP)  ; LAB_005882db
    LEA ESI,[ESP + 0xa4]                ; 005885eb
        ;   Label: LAB_005885eb
    PUSH 0x3fd9999a                     ; 005885f2
    PUSH ESI                            ; 005885f7
    MOV EAX,dword ptr [EBX + 0x154]     ; 005885f8
    PUSH EBX                            ; 005885fe
    CALL dword ptr [EAX + 0x24]         ; 005885ff
    ADD ESP,0xc                         ; 00588602
    JMP 0x005882ec                      ; 00588605
        ;   XREF to: 005882ec (UNCONDITIONAL_JUMP)  ; LAB_005882ec
    PUSH 0x2                            ; 0058860a
        ;   Label: LAB_0058860a
    PUSH ESI                            ; 0058860c
    CALL core_motion.cpp_FUN_00524a40   ; 0058860d
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x108],EAX     ; 00588612
    FLD float ptr [ESP + 0x108]         ; 00588619
    ADD ESP,0x8                         ; 00588620
    FCOMP double ptr [0x005f6a29]       ; 00588623 | DAT_005f6a29
    FNSTSW AX                           ; 00588629
    SAHF                                ; 0058862b
    JBE 0x005882ec                      ; 0058862c
        ;   XREF to: 005882ec (CONDITIONAL_JUMP)  ; LAB_005882ec
    LEA EAX,[ESP + 0xa4]                ; 00588632
    PUSH 0x3f800000                     ; 00588639
    PUSH EAX                            ; 0058863e
    MOV EDX,dword ptr [EBX + 0x154]     ; 0058863f
    PUSH EBX                            ; 00588645
    CALL dword ptr [EDX + 0x24]         ; 00588646
    ADD ESP,0xc                         ; 00588649
    JMP 0x005882ec                      ; 0058864c
        ;   XREF to: 005882ec (UNCONDITIONAL_JUMP)  ; LAB_005882ec
    MOV ESI,dword ptr [0x01c3f6a0]      ; 00588651 | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_00588651
    PUSH ESI                            ; 00588657
    MOV EDI,dword ptr [EBX + 0x26fc]    ; 00588658
    PUSH EDI                            ; 0058865e
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0058865f
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x100],EAX     ; 00588664
    ADD ESP,0x8                         ; 0058866b
    MOV dword ptr [ESP + 0xf4],EAX      ; 0058866e
    TEST EAX,EAX                        ; 00588675
    JZ 0x005887cd                       ; 00588677
        ;   XREF to: 005887cd (CONDITIONAL_JUMP)  ; LAB_005887cd
    MOV EDX,dword ptr [0x02c83630]      ; 0058867d | DAT_02c83630
    PUSH EDX                            ; 00588683
    MOV ECX,dword ptr [ESP + 0x100]     ; 00588684
    PUSH ECX                            ; 0058868b
    LEA ESI,[ESP + 0x4c]                ; 0058868c
    LEA EDI,[ESP + 0xa0]                ; 00588690
    CALL core_skeleton.cpp_FUN_00569040 ; 00588697
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 0058869c
    LEA EAX,[ESP + 0x98]                ; 0058869f
    LEA ESI,[ESP + 0x44]                ; 005886a6
    PUSH EAX                            ; 005886aa
    MOVSD ES:EDI,ESI                    ; 005886ab
    MOVSD ES:EDI,ESI                    ; 005886ac
    MOVSD ES:EDI,ESI                    ; 005886ad
    PUSH EBX                            ; 005886ae
    LEA ESI,[ESP + 0x64]                ; 005886af
    LEA EDI,[ESP + 0xdc]                ; 005886b3
    CALL core_actor.cpp_FUN_00408b40    ; 005886ba
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 005886bf
    LEA EAX,[ESP + 0x8]                 ; 005886c2
    LEA ESI,[ESP + 0x5c]                ; 005886c6
    PUSH EAX                            ; 005886ca
    MOVSD ES:EDI,ESI                    ; 005886cb
    MOVSD ES:EDI,ESI                    ; 005886cc
    MOVSD ES:EDI,ESI                    ; 005886cd
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 005886ce
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 005886d3
    PUSH 0x41700000                     ; 005886d6
    PUSH 0x41200000                     ; 005886db
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 005886e0
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x108],EAX     ; 005886e5
    FLD float ptr [ESP + 0x108]         ; 005886ec
    ADD ESP,0x8                         ; 005886f3
    LEA EAX,[ESP + 0xd4]                ; 005886f6
    PUSH EAX                            ; 005886fd
    MOV ESI,dword ptr [ESP + 0xfc]      ; 005886fe
    LEA EDI,[ESP + 0x54]                ; 00588705
    PUSH ESI                            ; 00588709
    LEA ESI,[ESP + 0xc4]                ; 0058870a
    FSTP float ptr [ESP + 0x14]         ; 00588711
    CALL core_actor.cpp_FUN_00408bb0    ; 00588715
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0xc4]                ; 0058871a
    ADD ESP,0x8                         ; 00588721
    MOVSD ES:EDI,ESI                    ; 00588724
    MOVSD ES:EDI,ESI                    ; 00588725
    MOVSD ES:EDI,ESI                    ; 00588726
    LEA EDX,[ESP + 0x24]                ; 00588727
    LEA ESI,[ESP + 0x50]                ; 0058872b
    CMP EDX,ESI                         ; 0058872f
    JZ 0x00588747                       ; 00588731
        ;   XREF to: 00588747 (CONDITIONAL_JUMP)  ; LAB_00588747
    MOV EAX,dword ptr [ESI]             ; 00588733
    MOV dword ptr [ESP + 0x24],EAX      ; 00588735
    MOV EAX,dword ptr [ESI + 0x4]       ; 00588739
    MOV dword ptr [ESP + 0x28],EAX      ; 0058873c
    MOV EAX,dword ptr [ESI + 0x8]       ; 00588740
    MOV dword ptr [ESP + 0x2c],EAX      ; 00588743
    MOV EDX,dword ptr [ESP + 0xf4]      ; 00588747
        ;   Label: LAB_00588747
    LEA EAX,[ESP + 0x8]                 ; 0058874e
    MOV dword ptr [ESP + 0x3c],EBX      ; 00588752
    MOV dword ptr [ESP + 0x40],EBX      ; 00588756
    PUSH EAX                            ; 0058875a
    MOV EDI,dword ptr [ESP + 0xf8]      ; 0058875b
    MOV EDX,dword ptr [EDX + 0x154]     ; 00588762
    PUSH EDI                            ; 00588768
    CALL dword ptr [EDX + 0x108]        ; 00588769
    ADD ESP,0x8                         ; 0058876f
    FLDZ                                ; 00588772
    FLD float ptr [ESP + 0xc]           ; 00588774
    FSTP double ptr [ESP]               ; 00588778
    FCOMP double ptr [ESP]              ; 0058877b
    FNSTSW AX                           ; 0058877e
    SAHF                                ; 00588780
    JNC 0x005887cd                      ; 00588781
        ;   XREF to: 005887cd (CONDITIONAL_JUMP)  ; LAB_005887cd
    FLD double ptr [ESP]                ; 00588783
    FMUL double ptr [0x005f6a21]        ; 00588786 | DAT_005f6a21
    CALL crt_math.c_round_FUN_005c03a0  ; 0058878c
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x100]       ; 00588791
    MOV EAX,dword ptr [ESP + 0x100]     ; 00588798
    PUSH 0x0                            ; 0058879f
    INC EAX                             ; 005887a1
    PUSH EAX                            ; 005887a2
    PUSH 0x0                            ; 005887a3
    LEA EAX,[ESP + 0xe0]                ; 005887a5
    PUSH EAX                            ; 005887ac
    MOV EAX,[0x0061dca4]                ; 005887ad | g_CGorePtr
    PUSH EAX                            ; 005887b2
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060 ; 005887b3
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 005887b8
    PUSH 0x5f69a8                       ; 005887bb | = "kick1.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005887c0
    PUSH EBX                            ; 005887c6
    CALL dword ptr [EAX + 0x2c]         ; 005887c7
    ADD ESP,0x8                         ; 005887ca
    MOV dword ptr [EBX + 0x26fc],0x0    ; 005887cd
        ;   Label: LAB_005887cd
    JMP 0x005882ec                      ; 005887d7
        ;   XREF to: 005882ec (UNCONDITIONAL_JUMP)  ; LAB_005882ec
    MOV ECX,dword ptr [EBX + 0x26fc]    ; 005887dc
        ;   Label: LAB_005887dc
    TEST ECX,ECX                        ; 005887e2
    JZ 0x005882ec                       ; 005887e4
        ;   XREF to: 005882ec (CONDITIONAL_JUMP)  ; LAB_005882ec
    LEA EAX,[ECX + 0x20]                ; 005887ea
    PUSH EAX                            ; 005887ed
    PUSH EBX                            ; 005887ee
    LEA ESI,[ESP + 0xe8]                ; 005887ef
    LEA EDI,[ESP + 0x7c]                ; 005887f6
    CALL core_actor.cpp_FUN_00408bb0    ; 005887fa
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0xe8]                ; 005887ff
    ADD ESP,0x8                         ; 00588806
    MOVSD ES:EDI,ESI                    ; 00588809
    MOVSD ES:EDI,ESI                    ; 0058880a
    MOVSD ES:EDI,ESI                    ; 0058880b
    FLDZ                                ; 0058880c
    FCOMP float ptr [ESP + 0x7c]        ; 0058880e
    FNSTSW AX                           ; 00588812
    SAHF                                ; 00588814
    JNC 0x005882ec                      ; 00588815
        ;   XREF to: 005882ec (CONDITIONAL_JUMP)  ; LAB_005882ec
    PUSH 0x5f69b2                       ; 0058881b | = "hit-gh[4,7].wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00588820
    PUSH EBX                            ; 00588826
    CALL dword ptr [EAX + 0x2c]         ; 00588827
    ADD ESP,0x8                         ; 0058882a
    JMP 0x005882ec                      ; 0058882d
        ;   XREF to: 005882ec (UNCONDITIONAL_JUMP)  ; LAB_005882ec
    PUSH 0x5f69c2                       ; 00588832 | = "fall-1.wav"
        ;   Label: LAB_00588832
    MOV EAX,dword ptr [EBX + 0x154]     ; 00588837
    PUSH EBX                            ; 0058883d
    CALL dword ptr [EAX + 0x2c]         ; 0058883e
    ADD ESP,0x8                         ; 00588841
    JMP 0x005882ec                      ; 00588844
        ;   XREF to: 005882ec (UNCONDITIONAL_JUMP)  ; LAB_005882ec
    PUSH EBX                            ; 00588849
        ;   Label: LAB_00588849
    CALL core_stranger.cpp_CStranger_processPickupComplete_FUN_0058cda0 ; 0058884a
        ;   XREF to: 0058cda0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_processPickupComplete_FUN_0058cda0(CStranger * this_ptr)
    ADD ESP,0x4                         ; 0058884f
    JMP 0x005882ec                      ; 00588852
        ;   XREF to: 005882ec (UNCONDITIONAL_JUMP)  ; LAB_005882ec
    PUSH 0x879                          ; 00588857
        ;   Label: LAB_00588857
    PUSH ECX                            ; 0058885c
    PUSH 0x5f69cd                       ; 0058885d | = "actionPending = %d\nstranger.cpp line %d"
    MOV EDI,dword ptr [0x0061abc0]      ; 00588862 | g_CEditorToolsPtr
    PUSH EDI                            ; 00588868
    CALL shape_edittool.cpp_FUN_00494340 ; 00588869
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00494340()
    ADD ESP,0x10                        ; 0058886e
    JMP 0x00588902                      ; 00588871
        ;   XREF to: 00588902 (UNCONDITIONAL_JUMP)  ; LAB_00588902
    PUSH EBX                            ; 00588876
        ;   Label: LAB_00588876
    CALL core_hero.cpp_FUN_004eb7f0     ; 00588877
        ;   XREF to: 004eb7f0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb7f0()
    ADD ESP,0x4                         ; 0058887c
    JMP 0x005882ec                      ; 0058887f
        ;   XREF to: 005882ec (UNCONDITIONAL_JUMP)  ; LAB_005882ec
    MOV EAX,[0x00606090]                ; 00588884 | DAT_00606090
        ;   Label: LAB_00588884
    MOV dword ptr [EBX + 0x251c],EAX    ; 00588889
    JMP 0x005882ec                      ; 0058888f
        ;   XREF to: 005882ec (UNCONDITIONAL_JUMP)  ; LAB_005882ec
    MOV EAX,[0x00606098]                ; 00588894 | DAT_00606098
        ;   Label: LAB_00588894
    MOV dword ptr [EBX + 0x251c],EAX    ; 00588899
    JMP 0x005882ec                      ; 0058889f
        ;   XREF to: 005882ec (UNCONDITIONAL_JUMP)  ; LAB_005882ec
    JBE 0x005882ec                      ; 005888a4
        ;   XREF to: 005882ec (CONDITIONAL_JUMP)  ; LAB_005882ec
        ;   Label: LAB_005888a4
    CMP EAX,0x17                        ; 005888aa
    JNC 0x005888be                      ; 005888ad
        ;   XREF to: 005888be (CONDITIONAL_JUMP)  ; LAB_005888be
    CMP EAX,0x15                        ; 005888af
    JNC 0x005888e3                      ; 005888b2
        ;   XREF to: 005888e3 (CONDITIONAL_JUMP)  ; LAB_005888e3
    CMP EAX,0x13                        ; 005888b4
    JZ 0x00588849                       ; 005888b7
        ;   XREF to: 00588849 (CONDITIONAL_JUMP)  ; LAB_00588849
    JMP 0x0058899d                      ; 005888b9
        ;   XREF to: 0058899d (UNCONDITIONAL_JUMP)  ; LAB_0058899d
    JBE 0x00588876                      ; 005888be
        ;   XREF to: 00588876 (CONDITIONAL_JUMP)  ; LAB_00588876
        ;   Label: LAB_005888be
    CMP EAX,0x29a                       ; 005888c0
    JNC 0x005888d5                      ; 005888c5
        ;   XREF to: 005888d5 (CONDITIONAL_JUMP)  ; LAB_005888d5
    CMP EAX,0x18                        ; 005888c7
    JZ 0x005882ec                       ; 005888ca
        ;   XREF to: 005882ec (CONDITIONAL_JUMP)  ; LAB_005882ec
    JMP 0x0058899d                      ; 005888d0
        ;   XREF to: 0058899d (UNCONDITIONAL_JUMP)  ; LAB_0058899d
    JBE 0x00588884                      ; 005888d5
        ;   XREF to: 00588884 (CONDITIONAL_JUMP)  ; LAB_00588884
        ;   Label: LAB_005888d5
    CMP EAX,0x29b                       ; 005888d7
    JZ 0x00588894                       ; 005888dc
        ;   XREF to: 00588894 (CONDITIONAL_JUMP)  ; LAB_00588894
    JMP 0x0058899d                      ; 005888de
        ;   XREF to: 0058899d (UNCONDITIONAL_JUMP)  ; LAB_0058899d
    JBE 0x005884aa                      ; 005888e3
        ;   XREF to: 005884aa (CONDITIONAL_JUMP)  ; LAB_005884aa
        ;   Label: LAB_005888e3
    MOV ECX,dword ptr [EBX + 0x1ff5c]   ; 005888e9
    CMP ECX,0x5                         ; 005888ef
    JNZ 0x00588857                      ; 005888f2
        ;   XREF to: 00588857 (CONDITIONAL_JUMP)  ; LAB_00588857
    MOV dword ptr [EBX + 0x1ff5c],0x0   ; 005888f8
    CMP dword ptr [EBX + 0x1ff74],0x0   ; 00588902
        ;   Label: LAB_00588902
    JNZ 0x00588924                      ; 00588909
        ;   XREF to: 00588924 (CONDITIONAL_JUMP)  ; LAB_00588924
    PUSH 0x87f                          ; 0058890b
    PUSH 0x5f69f5                       ; 00588910 | = "doorToOpen == NULL\nstranger.cpp line %d"
    MOV EDX,dword ptr [0x0061abc0]      ; 00588915 | g_CEditorToolsPtr
    PUSH EDX                            ; 0058891b
    CALL shape_edittool.cpp_FUN_00494340 ; 0058891c
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00494340()
    ADD ESP,0xc                         ; 00588921
    PUSH EBX                            ; 00588924
        ;   Label: LAB_00588924
    CALL core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0 ; 00588925
        ;   XREF to: 004eb5e0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0(CHero * this_ptr)
    ADD ESP,0x4                         ; 0058892a
    TEST EAX,EAX                        ; 0058892d
    JNZ 0x005882ec                      ; 0058892f
        ;   XREF to: 005882ec (CONDITIONAL_JUMP)  ; LAB_005882ec
    PUSH 0x1                            ; 00588935
    PUSH EAX                            ; 00588937
    MOV ECX,dword ptr [ESP + 0x104]     ; 00588938
    PUSH ECX                            ; 0058893f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00588940
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00588945
    JMP 0x005882ec                      ; 00588948
        ;   XREF to: 005882ec (UNCONDITIONAL_JUMP)  ; LAB_005882ec
    JBE 0x00588651                      ; 0058894d
        ;   XREF to: 00588651 (CONDITIONAL_JUMP)  ; LAB_00588651
        ;   Label: LAB_0058894d
    CMP EAX,0xf                         ; 00588953
    JNC 0x00588970                      ; 00588956
        ;   XREF to: 00588970 (CONDITIONAL_JUMP)  ; LAB_00588970
    CMP EAX,0x7                         ; 00588958
    JZ 0x00588243                       ; 0058895b
        ;   XREF to: 00588243 (CONDITIONAL_JUMP)  ; LAB_00588243
    PUSH ESI                            ; 00588961
    PUSH EBX                            ; 00588962
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 00588963
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00588968
    JMP 0x005882ec                      ; 0058896b
        ;   XREF to: 005882ec (UNCONDITIONAL_JUMP)  ; LAB_005882ec
    JBE 0x005887dc                      ; 00588970
        ;   XREF to: 005887dc (CONDITIONAL_JUMP)  ; LAB_005887dc
        ;   Label: LAB_00588970
    CMP EAX,0x11                        ; 00588976
    JZ 0x00588832                       ; 00588979
        ;   XREF to: 00588832 (CONDITIONAL_JUMP)  ; LAB_00588832
    PUSH ESI                            ; 0058897f
    PUSH EBX                            ; 00588980
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 00588981
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00588986
    JMP 0x005882ec                      ; 00588989
        ;   XREF to: 005882ec (UNCONDITIONAL_JUMP)  ; LAB_005882ec
    JBE 0x005883ad                      ; 0058898e
        ;   XREF to: 005883ad (CONDITIONAL_JUMP)  ; LAB_005883ad
        ;   Label: LAB_0058898e
    CMP EAX,0x3                         ; 00588994
    JZ 0x00588303                       ; 00588997
        ;   XREF to: 00588303 (CONDITIONAL_JUMP)  ; LAB_00588303
    PUSH ESI                            ; 0058899d
        ;   Label: LAB_0058899d
    PUSH EBX                            ; 0058899e
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 0058899f
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 005889a4
    JMP 0x005882ec                      ; 005889a7
        ;   XREF to: 005882ec (UNCONDITIONAL_JUMP)  ; LAB_005882ec

