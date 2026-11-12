; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_00568100(CDeformableModelInstance *param_1,int param_2,float param_3,float param_4,int param_5,code *param_6)
;
; Local Variables:
; undefined4       Stack[-0x980]:4  local_980
; undefined        Stack[-0x97c]:1  local_97c
; undefined        Stack[-0x19c]:1  local_19c
; undefined        Stack[-0x18c]:1  local_18c
; undefined        Stack[-0x17c]:1  local_17c
; undefined        Stack[-0x16c]:1  local_16c
; undefined        Stack[-0x14c]:1  local_14c
; undefined        Stack[-0x12c]:1  local_12c
; undefined        Stack[-0x11c]:1  local_11c
; undefined        Stack[-0x10c]:1  local_10c
; undefined        Stack[-0xfc]:1  local_fc
; undefined        Stack[-0xec]:1  local_ec
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[17]:
;   core_charactr.cpp_FUN_00432cb0 at 00432db0
;   core_charactr.cpp_FUN_004342c0 at 00434308
;   core_doc.cpp_FUN_0046caa0 at 0046e621
;   core_doc.cpp_FUN_0046ea80 at 0046ee0f
;   core_doc.cpp_FUN_0046f200 at 0046f354
;   core_gabriela.cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004cad20 at 004cafb1
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004c89c0 at 004c8d42
;   core_gabriela.cpp_FUN_004caff0 at 004cb0e0
;   core_ghoul.cpp_CGhoul_process_FUN_004de330 at 004de686
;   core_hostage.cpp_CHostage_process_FUN_004ed890 at 004eed9f
;   ... and 7 more
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005f24d1
;   TerminatedCString s_Write_me_005f24e6
;   undefined4 DAT_005f24f1
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_motion.cpp_FUN_00525240
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00563630
;   core_skeleton.cpp_FUN_005635a0
;   core_xform.cpp_multiplyQuaternion_FUN_005b77b0
;   core_xform.cpp_negateFirstComponent_FUN_005b7750
;   core_xform.cpp_slerpQuaternion_FUN_005b7940
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568100
        ;   Label: core_skeleton.cpp_FUN_00568100
    PUSH ESI                            ; 00568101
    PUSH EDI                            ; 00568102
    PUSH EBP                            ; 00568103
    MOV EBP,ESP                         ; 00568104
    SUB ESP,0x96c                       ; 00568106
    AND ESP,0xfffffff8                  ; 0056810c
    FLD float ptr [EBP + 0x20]          ; 0056810f
    FCOMP double ptr [0x005f24f1]       ; 00568112 | DAT_005f24f1
    FNSTSW AX                           ; 00568118
    SAHF                                ; 0056811a
    JA 0x00568124                       ; 0056811b
        ;   XREF to: 00568124 (CONDITIONAL_JUMP)  ; LAB_00568124
    MOV ESP,EBP                         ; 0056811d
        ;   Label: LAB_0056811d
    POP EBP                             ; 0056811f
    POP EDI                             ; 00568120
    POP ESI                             ; 00568121
    POP EBX                             ; 00568122
    RET                                 ; 00568123
    MOV EAX,ESP                         ; 00568124
        ;   Label: LAB_00568124
    PUSH EAX                            ; 00568126
    LEA EAX,[ESP + 0x930]               ; 00568127
    PUSH EAX                            ; 0056812e
    LEA EAX,[ESP + 0x92c]               ; 0056812f
    PUSH EAX                            ; 00568136
    MOV EDX,dword ptr [EBP + 0x18]      ; 00568137
    PUSH dword ptr [EBP + 0x1c]         ; 0056813a
    PUSH EDX                            ; 0056813d
    MOV ECX,dword ptr [EBP + 0x14]      ; 0056813e
    PUSH ECX                            ; 00568141
    CALL core_motion.cpp_FUN_00525240   ; 00568142
        ;   XREF to: 00525240 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_00525240(CMotionController * this_ptr, int motion_index, float frame_number, int * out_frame1, ...)
    ADD ESP,0x18                        ; 00568147
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056814a
    PUSH EBX                            ; 0056814d
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0056814e
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00568153
    MOV ESI,dword ptr [EBP + 0x14]      ; 00568156
    MOV EDI,dword ptr [ESI + 0x2340]    ; 00568159
    MOV EBX,EAX                         ; 0056815f
    TEST EDI,EDI                        ; 00568161
    JNZ 0x00568502                      ; 00568163
        ;   XREF to: 00568502 (CONDITIONAL_JUMP)  ; LAB_00568502
    MOV ESI,dword ptr [EAX + 0x1de78]   ; 00568169
    MOV dword ptr [ESP + 0x964],EDI     ; 0056816f
    TEST ESI,ESI                        ; 00568176
    JLE 0x00568289                      ; 00568178
        ;   XREF to: 00568289 (CONDITIONAL_JUMP)  ; LAB_00568289
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056817e
    MOV ESI,dword ptr [EBP + 0x14]      ; 00568181
    ADD EAX,0x6b0                       ; 00568184
    MOV dword ptr [ESP + 0x93c],ESI     ; 00568189
    MOV dword ptr [ESP + 0x944],EAX     ; 00568190
    MOV ESI,dword ptr [EBP + 0x24]      ; 00568197
        ;   Label: LAB_00568197
    PUSH ESI                            ; 0056819a
    MOV EDI,dword ptr [ESP + 0x968]     ; 0056819b
    PUSH EDI                            ; 005681a2
    PUSH EBX                            ; 005681a3
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00563630 ; 005681a4
        ;   XREF to: 00563630 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00563630(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 005681a9
    TEST EAX,EAX                        ; 005681ac
    JL 0x0056824a                       ; 005681ae
        ;   XREF to: 0056824a (CONDITIONAL_JUMP)  ; LAB_0056824a
    MOV EDX,dword ptr [EBP + 0x14]      ; 005681b4
    PUSH EDX                            ; 005681b7
    PUSH EAX                            ; 005681b8
    PUSH dword ptr [EBP + 0x20]         ; 005681b9
    PUSH ESI                            ; 005681bc
    PUSH EDI                            ; 005681bd
    CALL dword ptr [EBP + 0x28]         ; 005681be
    MOV dword ptr [ESP + 0x97c],EAX     ; 005681c1
    FLD float ptr [ESP + 0x97c]         ; 005681c8
    ADD ESP,0x14                        ; 005681cf
    SUB ESP,0x4                         ; 005681d2
    MOV ESI,EDI                         ; 005681d5
    FSTP float ptr [ESP]                ; 005681d7
    MOV EDI,dword ptr [ESP + 0x930]     ; 005681da
    PUSH dword ptr [ESP + 0x4]          ; 005681e1
    PUSH EDI                            ; 005681e5
    MOV EAX,dword ptr [ESP + 0x930]     ; 005681e6
    PUSH EAX                            ; 005681ed
    MOV EDX,ESI                         ; 005681ee
    PUSH EDX                            ; 005681f0
    PUSH EBX                            ; 005681f1
    LEA ESI,[ESP + 0x85c]               ; 005681f2
    LEA EDI,[ESP + 0x83c]               ; 005681f9
    CALL core_skeleton.cpp_FUN_005635a0 ; 00568200
        ;   XREF to: 005635a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005635a0()
    LEA ESI,[ESP + 0x85c]               ; 00568205
    ADD ESP,0x14                        ; 0056820c
    LEA EAX,[ESP + 0x828]               ; 0056820f
    MOV ECX,dword ptr [ESP + 0x948]     ; 00568216
    PUSH EAX                            ; 0056821d
    MOVSD ES:EDI,ESI                    ; 0056821e
    MOVSD ES:EDI,ESI                    ; 0056821f
    MOVSD ES:EDI,ESI                    ; 00568220
    MOVSD ES:EDI,ESI                    ; 00568221
    PUSH ECX                            ; 00568222
    LEA ESI,[ESP + 0x7e0]               ; 00568223
    CALL core_xform.cpp_slerpQuaternion_FUN_005b7940 ; 0056822a
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_005b7940()
    ADD ESP,0xc                         ; 0056822f
    MOV EDI,dword ptr [ESP + 0x93c]     ; 00568232
    LEA ESI,[ESP + 0x7d4]               ; 00568239
    LEA EDI,[EDI + 0x6b0]               ; 00568240
    MOVSD ES:EDI,ESI                    ; 00568246
    MOVSD ES:EDI,ESI                    ; 00568247
    MOVSD ES:EDI,ESI                    ; 00568248
    MOVSD ES:EDI,ESI                    ; 00568249
    MOV EDI,dword ptr [ESP + 0x93c]     ; 0056824a
        ;   Label: LAB_0056824a
    MOV EAX,dword ptr [ESP + 0x944]     ; 00568251
    MOV EDX,dword ptr [ESP + 0x964]     ; 00568258
    MOV ECX,dword ptr [EBX + 0x1de78]   ; 0056825f
    ADD EDI,0x10                        ; 00568265
    ADD EAX,0x10                        ; 00568268
    INC EDX                             ; 0056826b
    MOV dword ptr [ESP + 0x93c],EDI     ; 0056826c
    MOV dword ptr [ESP + 0x944],EAX     ; 00568273
    MOV dword ptr [ESP + 0x964],EDX     ; 0056827a
    CMP EDX,ECX                         ; 00568281
    JL 0x00568197                       ; 00568283
        ;   XREF to: 00568197 (CONDITIONAL_JUMP)  ; LAB_00568197
    CMP dword ptr [EBP + 0x24],0x0      ; 00568289
        ;   Label: LAB_00568289
    JGE 0x0056811d                      ; 0056828d
        ;   XREF to: 0056811d (CONDITIONAL_JUMP)  ; LAB_0056811d
    MOV ESI,dword ptr [ESP + 0x92c]     ; 00568293
    LEA EAX,[ESI*0x4 + 0x0]             ; 0056829a
    MOV EBX,dword ptr [EBX + 0x1ec94]   ; 005682a1
    SUB EAX,ESI                         ; 005682a7
    FLD float ptr [EBX + EAX*0x4]       ; 005682a9
    FMUL float ptr [ESP]                ; 005682ac
    FLD float ptr [EBX + EAX*0x4 + 0x4] ; 005682af
    FMUL float ptr [ESP]                ; 005682b3
    FLD float ptr [EBX + EAX*0x4 + 0x8] ; 005682b6
    FMUL float ptr [ESP]                ; 005682ba
    LEA EDI,[ESP + 0x894]               ; 005682bd
    LEA ESI,[ESP + 0x8c4]               ; 005682c4
    FXCH ST2                            ; 005682cb
    FSTP float ptr [ESP + 0x8c4]        ; 005682cd
    FSTP float ptr [ESP + 0x8c8]        ; 005682d4
    FSTP float ptr [ESP + 0x8cc]        ; 005682db
    MOVSD ES:EDI,ESI                    ; 005682e2
    MOVSD ES:EDI,ESI                    ; 005682e3
    MOVSD ES:EDI,ESI                    ; 005682e4
    FLD float ptr [ESP]                 ; 005682e5
    MOV ESI,dword ptr [ESP + 0x924]     ; 005682e8
    FLD1                                ; 005682ef
    LEA EAX,[ESI*0x4 + 0x0]             ; 005682f1
    FSUBRP                              ; 005682f8
    SUB EAX,ESI                         ; 005682fa
    FSTP float ptr [ESP + 0x928]        ; 005682fc
    FLD float ptr [EBX + EAX*0x4]       ; 00568303
    FMUL float ptr [ESP + 0x928]        ; 00568306
    FLD float ptr [EBX + EAX*0x4 + 0x4] ; 0056830d
    FMUL float ptr [ESP + 0x928]        ; 00568311
    FLD float ptr [EBX + EAX*0x4 + 0x8] ; 00568318
    FMUL float ptr [ESP + 0x928]        ; 0056831c
    LEA EDI,[ESP + 0x8b8]               ; 00568323
    LEA ESI,[ESP + 0x8dc]               ; 0056832a
    FXCH ST2                            ; 00568331
    FSTP float ptr [ESP + 0x8dc]        ; 00568333
    FSTP float ptr [ESP + 0x8e0]        ; 0056833a
    FSTP float ptr [ESP + 0x8e4]        ; 00568341
    MOVSD ES:EDI,ESI                    ; 00568348
    MOVSD ES:EDI,ESI                    ; 00568349
    MOVSD ES:EDI,ESI                    ; 0056834a
    FLD float ptr [ESP + 0x8b8]         ; 0056834b
    FLD float ptr [ESP + 0x8bc]         ; 00568352
    FLD float ptr [ESP + 0x8c0]         ; 00568359
    LEA EDI,[ESP + 0x8f4]               ; 00568360
    LEA ESI,[ESP + 0x900]               ; 00568367
    FXCH ST2                            ; 0056836e
    FADD float ptr [ESP + 0x894]        ; 00568370
    FXCH                                ; 00568377
    FADD float ptr [ESP + 0x898]        ; 00568379
    FXCH ST2                            ; 00568380
    FADD float ptr [ESP + 0x89c]        ; 00568382
    FXCH                                ; 00568389
    FSTP float ptr [ESP + 0x900]        ; 0056838b
    FXCH                                ; 00568392
    FSTP float ptr [ESP + 0x904]        ; 00568394
    FSTP float ptr [ESP + 0x908]        ; 0056839b
    MOVSD ES:EDI,ESI                    ; 005683a2
    MOVSD ES:EDI,ESI                    ; 005683a3
    MOVSD ES:EDI,ESI                    ; 005683a4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005683a5
    FLD float ptr [ESP + 0x8f4]         ; 005683a8
    FMUL float ptr [EAX + 0x508]        ; 005683af
    FLD float ptr [ESP + 0x8f8]         ; 005683b5
    FMUL float ptr [EAX + 0x50c]        ; 005683bc
    FLD float ptr [ESP + 0x8fc]         ; 005683c2
    FMUL float ptr [EAX + 0x510]        ; 005683c9
    FXCH ST2                            ; 005683cf
    FST float ptr [ESP + 0x8f4]         ; 005683d1
    FLD float ptr [EBP + 0x20]          ; 005683d8
    FXCH                                ; 005683db
    FMUL ST1                            ; 005683dd
    FXCH ST2                            ; 005683df
    FST float ptr [ESP + 0x8f8]         ; 005683e1
    FMUL ST1                            ; 005683e8
    FXCH ST3                            ; 005683ea
    FST float ptr [ESP + 0x8fc]         ; 005683ec
    FMUL ST1                            ; 005683f3
    FLD1                                ; 005683f5
    FSUBRP ST2,ST0                      ; 005683f7
    LEA EBX,[EAX + 0x6a4]               ; 005683f9
    LEA EDI,[ESP + 0x918]               ; 005683ff
    LEA ESI,[ESP + 0x8a0]               ; 00568406
    FXCH ST2                            ; 0056840d
    FSTP float ptr [ESP + 0x8a0]        ; 0056840f
    FXCH ST2                            ; 00568416
    FSTP float ptr [ESP + 0x8a4]        ; 00568418
    FSTP float ptr [ESP + 0x8a8]        ; 0056841f
    MOVSD ES:EDI,ESI                    ; 00568426
    MOVSD ES:EDI,ESI                    ; 00568427
    MOVSD ES:EDI,ESI                    ; 00568428
    FSTP float ptr [ESP + 0x930]        ; 00568429
    FLD float ptr [EBX]                 ; 00568430
    FMUL float ptr [ESP + 0x930]        ; 00568432
    FLD float ptr [EBX + 0x4]           ; 00568439
    FMUL float ptr [ESP + 0x930]        ; 0056843c
    FLD float ptr [EBX + 0x8]           ; 00568443
    FMUL float ptr [ESP + 0x930]        ; 00568446
    LEA EDI,[ESP + 0x8d0]               ; 0056844d
    LEA ESI,[ESP + 0x8ac]               ; 00568454
    FXCH ST2                            ; 0056845b
    FSTP float ptr [ESP + 0x8ac]        ; 0056845d
    FSTP float ptr [ESP + 0x8b0]        ; 00568464
    FSTP float ptr [ESP + 0x8b4]        ; 0056846b
    MOVSD ES:EDI,ESI                    ; 00568472
    MOVSD ES:EDI,ESI                    ; 00568473
    MOVSD ES:EDI,ESI                    ; 00568474
    LEA EAX,[ESP + 0x90c]               ; 00568475
    FLD float ptr [ESP + 0x8d0]         ; 0056847c
    FLD float ptr [ESP + 0x8d4]         ; 00568483
    FLD float ptr [ESP + 0x8d8]         ; 0056848a
    LEA EDI,[ESP + 0x90c]               ; 00568491
    LEA ESI,[ESP + 0x8e8]               ; 00568498
    FXCH ST2                            ; 0056849f
    FADD float ptr [ESP + 0x918]        ; 005684a1
    FXCH                                ; 005684a8
    FADD float ptr [ESP + 0x91c]        ; 005684aa
    FXCH ST2                            ; 005684b1
    FADD float ptr [ESP + 0x920]        ; 005684b3
    FXCH                                ; 005684ba
    FSTP float ptr [ESP + 0x8e8]        ; 005684bc
    FXCH                                ; 005684c3
    FSTP float ptr [ESP + 0x8ec]        ; 005684c5
    FSTP float ptr [ESP + 0x8f0]        ; 005684cc
    MOVSD ES:EDI,ESI                    ; 005684d3
    MOVSD ES:EDI,ESI                    ; 005684d4
    MOVSD ES:EDI,ESI                    ; 005684d5
    CMP EBX,EAX                         ; 005684d6
    JZ 0x0056811d                       ; 005684d8
        ;   XREF to: 0056811d (CONDITIONAL_JUMP)  ; LAB_0056811d
    MOV EAX,dword ptr [ESP + 0x90c]     ; 005684de
    MOV dword ptr [EBX],EAX             ; 005684e5
    MOV EAX,dword ptr [ESP + 0x910]     ; 005684e7
    MOV dword ptr [EBX + 0x4],EAX       ; 005684ee
    MOV EAX,dword ptr [ESP + 0x914]     ; 005684f1
    MOV dword ptr [EBX + 0x8],EAX       ; 005684f8
    MOV ESP,EBP                         ; 005684fb
    POP EBP                             ; 005684fd
    POP EDI                             ; 005684fe
    POP ESI                             ; 005684ff
    POP EBX                             ; 00568500
    RET                                 ; 00568501
    CMP EDI,0x1                         ; 00568502
        ;   Label: LAB_00568502
    JNZ 0x00568800                      ; 00568505
        ;   XREF to: 00568800 (CONDITIONAL_JUMP)  ; LAB_00568800
    XOR EDI,EDI                         ; 0056850b
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0056850d
    MOV dword ptr [ESP + 0x960],EDI     ; 00568513
    TEST EDX,EDX                        ; 0056851a
    JLE 0x00568592                      ; 0056851c
        ;   XREF to: 00568592 (CONDITIONAL_JUMP)  ; LAB_00568592
    MOV dword ptr [ESP + 0x940],EDI     ; 0056851e
    MOV dword ptr [ESP + 0x958],EDI     ; 00568525
    MOV EAX,dword ptr [EBP + 0x24]      ; 0056852c
        ;   Label: LAB_0056852c
    PUSH EAX                            ; 0056852f
    MOV EDX,dword ptr [ESP + 0x964]     ; 00568530
    PUSH EDX                            ; 00568537
    PUSH EBX                            ; 00568538
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00563630 ; 00568539
        ;   XREF to: 00563630 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00563630(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 0056853e
    MOV ESI,dword ptr [ESP + 0x958]     ; 00568541
    MOV dword ptr [ESP + ESI*0x1 + 0x644],EAX ; 00568548
    TEST EAX,EAX                        ; 0056854f
    JGE 0x00568711                      ; 00568551
        ;   XREF to: 00568711 (CONDITIONAL_JUMP)  ; LAB_00568711
    MOV EDI,dword ptr [ESP + 0x958]     ; 00568557
        ;   Label: LAB_00568557
    MOV EAX,dword ptr [ESP + 0x940]     ; 0056855e
    MOV EDX,dword ptr [ESP + 0x960]     ; 00568565
    MOV ECX,dword ptr [EBX + 0x1de78]   ; 0056856c
    ADD EDI,0x4                         ; 00568572
    ADD EAX,0x10                        ; 00568575
    INC EDX                             ; 00568578
    MOV dword ptr [ESP + 0x958],EDI     ; 00568579
    MOV dword ptr [ESP + 0x940],EAX     ; 00568580
    MOV dword ptr [ESP + 0x960],EDX     ; 00568587
    CMP EDX,ECX                         ; 0056858e
    JL 0x0056852c                       ; 00568590
        ;   XREF to: 0056852c (CONDITIONAL_JUMP)  ; LAB_0056852c
    MOV ESI,dword ptr [EBP + 0x24]      ; 00568592
        ;   Label: LAB_00568592
    LEA EAX,[ESI*0x8 + 0x0]             ; 00568595
    ADD EAX,ESI                         ; 0056859c
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x1de9c] ; 0056859e
    TEST EDI,EDI                        ; 005685a5
    JL 0x005685df                       ; 005685a7
        ;   XREF to: 005685df (CONDITIONAL_JUMP)  ; LAB_005685df
    MOV ESI,dword ptr [ESP + 0x92c]     ; 005685a9
    PUSH dword ptr [ESP]                ; 005685b0
    PUSH ESI                            ; 005685b3
    MOV EAX,dword ptr [ESP + 0x92c]     ; 005685b4
    PUSH EAX                            ; 005685bb
    PUSH EDI                            ; 005685bc
    PUSH EBX                            ; 005685bd
    LEA ESI,[ESP + 0x828]               ; 005685be
    CALL core_skeleton.cpp_FUN_005635a0 ; 005685c5
        ;   XREF to: 005635a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005635a0()
    SHL EDI,0x4                         ; 005685ca
    ADD ESP,0x14                        ; 005685cd
    LEA ESI,[ESP + 0x814]               ; 005685d0
    LEA EDI,[ESP + EDI*0x1 + 0x4]       ; 005685d7
    MOVSD ES:EDI,ESI                    ; 005685db
    MOVSD ES:EDI,ESI                    ; 005685dc
    MOVSD ES:EDI,ESI                    ; 005685dd
    MOVSD ES:EDI,ESI                    ; 005685de
    XOR EDX,EDX                         ; 005685df
        ;   Label: LAB_005685df
    MOV ECX,dword ptr [EBX + 0x1de78]   ; 005685e1
    MOV dword ptr [ESP + 0x95c],EDX     ; 005685e7
    TEST ECX,ECX                        ; 005685ee
    JLE 0x00568289                      ; 005685f0
        ;   XREF to: 00568289 (CONDITIONAL_JUMP)  ; LAB_00568289
    MOV EAX,dword ptr [EBP + 0x14]      ; 005685f6
    ADD EAX,0x6b0                       ; 005685f9
    MOV dword ptr [ESP + 0x934],EAX     ; 005685fe
    MOV EAX,dword ptr [EBP + 0x14]      ; 00568605
    MOV dword ptr [ESP + 0x950],EDX     ; 00568608
    MOV dword ptr [ESP + 0x948],EAX     ; 0056860f
    MOV EAX,dword ptr [ESP + 0x934]     ; 00568616
    MOV dword ptr [ESP + 0x954],EBX     ; 0056861d
    MOV dword ptr [ESP + 0x94c],EAX     ; 00568624
    MOV EAX,dword ptr [ESP + 0x950]     ; 0056862b
        ;   Label: LAB_0056862b
    CMP dword ptr [ESP + EAX*0x1 + 0x644],0x0 ; 00568632
    JL 0x005686ab                       ; 0056863a
        ;   XREF to: 005686ab (CONDITIONAL_JUMP)  ; LAB_005686ab
    MOV ESI,dword ptr [ESP + 0x95c]     ; 0056863c
    MOV EAX,dword ptr [ESP + 0x954]     ; 00568643
    SHL ESI,0x4                         ; 0056864a
    MOV EAX,dword ptr [EAX + 0x1de9c]   ; 0056864d
    MOV dword ptr [ESP + 0x938],ESI     ; 00568653
    TEST EAX,EAX                        ; 0056865a
    JGE 0x00568757                      ; 0056865c
        ;   XREF to: 00568757 (CONDITIONAL_JUMP)  ; LAB_00568757
    LEA EDI,[ESP + 0x834]               ; 00568662
    LEA ESI,[ESP + ESI*0x1 + 0x4]       ; 00568669
    MOVSD ES:EDI,ESI                    ; 0056866d
        ;   Label: LAB_0056866d
    MOVSD ES:EDI,ESI                    ; 0056866e
    MOVSD ES:EDI,ESI                    ; 0056866f
    MOVSD ES:EDI,ESI                    ; 00568670
    LEA EAX,[ESP + 0x834]               ; 00568671
    PUSH dword ptr [EBP + 0x20]         ; 00568678
    PUSH EAX                            ; 0056867b
    MOV ESI,dword ptr [ESP + 0x954]     ; 0056867c
    PUSH ESI                            ; 00568683
    LEA ESI,[ESP + 0x890]               ; 00568684
    CALL core_xform.cpp_slerpQuaternion_FUN_005b7940 ; 0056868b
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_005b7940()
    ADD ESP,0xc                         ; 00568690
    MOV EDI,dword ptr [ESP + 0x948]     ; 00568693
    LEA ESI,[ESP + 0x884]               ; 0056869a
    LEA EDI,[EDI + 0x6b0]               ; 005686a1
    MOVSD ES:EDI,ESI                    ; 005686a7
    MOVSD ES:EDI,ESI                    ; 005686a8
    MOVSD ES:EDI,ESI                    ; 005686a9
    MOVSD ES:EDI,ESI                    ; 005686aa
    MOV EDX,dword ptr [ESP + 0x950]     ; 005686ab
        ;   Label: LAB_005686ab
    MOV ECX,dword ptr [ESP + 0x954]     ; 005686b2
    MOV ESI,dword ptr [ESP + 0x948]     ; 005686b9
    MOV EDI,dword ptr [ESP + 0x94c]     ; 005686c0
    MOV EAX,dword ptr [ESP + 0x95c]     ; 005686c7
    ADD EDX,0x4                         ; 005686ce
    ADD ECX,0x24                        ; 005686d1
    ADD ESI,0x10                        ; 005686d4
    ADD EDI,0x10                        ; 005686d7
    INC EAX                             ; 005686da
    MOV dword ptr [ESP + 0x950],EDX     ; 005686db
    MOV dword ptr [ESP + 0x954],ECX     ; 005686e2
    MOV dword ptr [ESP + 0x948],ESI     ; 005686e9
    MOV dword ptr [ESP + 0x94c],EDI     ; 005686f0
    MOV EDX,dword ptr [EBX + 0x1de78]   ; 005686f7
    MOV dword ptr [ESP + 0x95c],EAX     ; 005686fd
    CMP EAX,EDX                         ; 00568704
    JGE 0x00568289                      ; 00568706
        ;   XREF to: 00568289 (CONDITIONAL_JUMP)  ; LAB_00568289
    JMP 0x0056862b                      ; 0056870c
        ;   XREF to: 0056862b (UNCONDITIONAL_JUMP)  ; LAB_0056862b
    MOV ESI,dword ptr [ESP + 0x92c]     ; 00568711
        ;   Label: LAB_00568711
    PUSH dword ptr [ESP]                ; 00568718
    PUSH ESI                            ; 0056871b
    MOV EDI,dword ptr [ESP + 0x92c]     ; 0056871c
    PUSH EDI                            ; 00568723
    MOV EAX,dword ptr [ESP + 0x96c]     ; 00568724
    PUSH EAX                            ; 0056872b
    PUSH EBX                            ; 0056872c
    LEA ESI,[ESP + 0x7f8]               ; 0056872d
    CALL core_skeleton.cpp_FUN_005635a0 ; 00568734
        ;   XREF to: 005635a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005635a0()
    ADD ESP,0x14                        ; 00568739
    MOV EDI,dword ptr [ESP + 0x940]     ; 0056873c
    LEA ESI,[ESP + 0x7e4]               ; 00568743
    LEA EDI,[ESP + EDI*0x1 + 0x4]       ; 0056874a
    MOVSD ES:EDI,ESI                    ; 0056874e
    MOVSD ES:EDI,ESI                    ; 0056874f
    MOVSD ES:EDI,ESI                    ; 00568750
    MOVSD ES:EDI,ESI                    ; 00568751
    JMP 0x00568557                      ; 00568752
        ;   XREF to: 00568557 (UNCONDITIONAL_JUMP)  ; LAB_00568557
    SHL EAX,0x4                         ; 00568757
        ;   Label: LAB_00568757
    MOV dword ptr [ESP + 0x968],EAX     ; 0056875a
    LEA EAX,[ESP + 0x4]                 ; 00568761
    ADD EAX,dword ptr [ESP + 0x968]     ; 00568765
    PUSH EAX                            ; 0056876c
    LEA ESI,[ESP + 0x878]               ; 0056876d
    LEA EDI,[ESP + 0x858]               ; 00568774
    CALL core_xform.cpp_negateFirstComponent_FUN_005b7750 ; 0056877b
        ;   XREF to: 005b7750 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_negateFirstComponent_FUN_005b7750()
    ADD ESP,0x4                         ; 00568780
    LEA EAX,[ESP + 0x854]               ; 00568783
    MOV EDX,dword ptr [ESP + 0x938]     ; 0056878a
    PUSH EAX                            ; 00568791
    LEA EAX,[ESP + 0x8]                 ; 00568792
    LEA ESI,[ESP + 0x878]               ; 00568796
    ADD EAX,EDX                         ; 0056879d
    MOVSD ES:EDI,ESI                    ; 0056879f
    MOVSD ES:EDI,ESI                    ; 005687a0
    MOVSD ES:EDI,ESI                    ; 005687a1
    MOVSD ES:EDI,ESI                    ; 005687a2
    PUSH EAX                            ; 005687a3
    LEA ESI,[ESP + 0x7fc]               ; 005687a4
    CALL core_xform.cpp_multiplyQuaternion_FUN_005b77b0 ; 005687ab
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_005b77b0()
    ADD ESP,0x8                         ; 005687b0
    MOV EAX,dword ptr [ESP + 0x934]     ; 005687b3
    MOV ECX,dword ptr [ESP + 0x968]     ; 005687ba
    LEA EDI,[ESP + 0x804]               ; 005687c1
    ADD EAX,ECX                         ; 005687c8
    LEA ESI,[ESP + 0x7f4]               ; 005687ca
    PUSH EAX                            ; 005687d1
    LEA EAX,[ESP + 0x808]               ; 005687d2
    MOVSD ES:EDI,ESI                    ; 005687d9
    MOVSD ES:EDI,ESI                    ; 005687da
    MOVSD ES:EDI,ESI                    ; 005687db
    MOVSD ES:EDI,ESI                    ; 005687dc
    PUSH EAX                            ; 005687dd
    LEA ESI,[ESP + 0x86c]               ; 005687de
    LEA EDI,[ESP + 0x83c]               ; 005687e5
    CALL core_xform.cpp_multiplyQuaternion_FUN_005b77b0 ; 005687ec
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_005b77b0()
    LEA ESI,[ESP + 0x86c]               ; 005687f1
    ADD ESP,0x8                         ; 005687f8
    JMP 0x0056866d                      ; 005687fb
        ;   XREF to: 0056866d (UNCONDITIONAL_JUMP)  ; LAB_0056866d
    MOV ECX,0x5f24d1                    ; 00568800 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_00568800
    MOV ESI,0xaa1                       ; 00568805
    PUSH 0x5f24e6                       ; 0056880a | = "Write me!"
    MOV dword ptr [0x01d1d400],ECX      ; 0056880f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00568815 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0056881b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00568820
    JMP 0x00568289                      ; 00568823
        ;   XREF to: 00568289 (UNCONDITIONAL_JUMP)  ; LAB_00568289

