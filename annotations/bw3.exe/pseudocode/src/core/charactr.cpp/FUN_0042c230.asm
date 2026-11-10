; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_FUN_0042c230(CCharacter *this_ptr,CVector3f *velocity)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   velocity
; Local Variables:
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined8       Stack[-0x118]:8  local_118
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined        Stack[-0xf0]:1  local_f0
; undefined        Stack[-0xe4]:1  local_e4
; undefined        Stack[-0xc0]:1  local_c0
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined        Stack[-0xa8]:1  local_a8
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[40]:
;   core_asgaya.cpp_CAsgaya_process_FUN_005a0be0 at 005a1042
;   core_baal.cpp_CBaal_process_FUN_005968a0 at 00596c3f
;   core_bird.cpp_CBird_process_FUN_0040fb40 at 0040fd99
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 0041a14e
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 00417ffc
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422570 at 0042294d
;   core_bugs.cpp_CBugs_updateBugsBehavior_FUN_004221c0 at 004223c8
;   core_carved.cpp_CCarved_process_FUN_00425da0 at 00426b1a
;   core_constrct.cpp_CConstruct_process_FUN_00442a20 at 0044358f
;   core_cow.cpp_CZombieCow_process_FUN_00445130 at 00445365
;   ... and 30 more
;
; Referenced Globals:
;   undefined4 DAT_005b822e
;   undefined4 DAT_005b8236
;   undefined4 DAT_005b823e
;   undefined4 DAT_005b8246
;   undefined4 DAT_005b824e
;   TerminatedCString s_noCollision_005f0f50
;   undefined4 s_llision_005f0f50+4
;   undefined4 s_ion_005f0f50+8
;   CGame* g_CGamePtr = 01d2130c
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_006e6f69
;   undefined4 DAT_007e2cf0
;   undefined4 DAT_01548b58
;   undefined4 DAT_01548b5c
;   undefined4 DAT_01548b60
;   ... and 12 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
;   core_actor.cpp_FUN_00408b00
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10
;   core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0
;   core_setcolid.cpp_FUN_0053de10
;   crt_string.c__strnicmp_FUN_005a3f90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042c230
        ;   Label: core_charactr.cpp_FUN_0042c230
    PUSH ESI                            ; 0042c231
    PUSH EDI                            ; 0042c232
    PUSH EBP                            ; 0042c233
    MOV EBP,ESP                         ; 0042c234
    SUB ESP,0x108                       ; 0042c236
    AND ESP,0xfffffff8                  ; 0042c23c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042c23f
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042c242
    XOR EDX,EDX                         ; 0042c245
    MOV ECX,dword ptr [EAX + 0x8]       ; 0042c247
    MOV dword ptr [0x007e2cf0],EDX      ; 0042c24a | DAT_007e2cf0
    TEST ECX,0x7fffffff                 ; 0042c250
    JNZ 0x0042c288                      ; 0042c256
        ;   XREF to: 0042c288 (CONDITIONAL_JUMP)  ; LAB_0042c288
    TEST dword ptr [EAX],0x7fffffff     ; 0042c258
    JNZ 0x0042c288                      ; 0042c25e
        ;   XREF to: 0042c288 (CONDITIONAL_JUMP)  ; LAB_0042c288
    FLD float ptr [EAX + 0x4]           ; 0042c260
    FLDZ                                ; 0042c263
    FCOMPP                              ; 0042c265
    FNSTSW AX                           ; 0042c267
    SAHF                                ; 0042c269
    JC 0x0042c288                       ; 0042c26a
        ;   XREF to: 0042c288 (CONDITIONAL_JUMP)  ; LAB_0042c288
    MOV EDI,dword ptr [EBX + 0xdc]      ; 0042c26c
    TEST EDI,EDI                        ; 0042c272
    JNZ 0x0042c288                      ; 0042c274
        ;   XREF to: 0042c288 (CONDITIONAL_JUMP)  ; LAB_0042c288
    FLD float ptr [EBX + 0x24]          ; 0042c276
    FCOMP float ptr [EBX + 0x2504]      ; 0042c279
    FNSTSW AX                           ; 0042c27f
    SAHF                                ; 0042c281
    JZ 0x0042c722                       ; 0042c282
        ;   XREF to: 0042c722 (CONDITIONAL_JUMP)  ; LAB_0042c722
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042c288
        ;   Label: LAB_0042c288
    PUSH EAX                            ; 0042c28b
    PUSH EBX                            ; 0042c28c
    LEA ESI,[ESP + 0xa8]                ; 0042c28d
    LEA EDI,[ESP + 0x24]                ; 0042c294
    CALL core_actor.cpp_FUN_00408b00    ; 0042c298
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0xa8]                ; 0042c29d
    ADD ESP,0x8                         ; 0042c2a4
    MOVSD ES:EDI,ESI                    ; 0042c2a7
    MOVSD ES:EDI,ESI                    ; 0042c2a8
    MOVSD ES:EDI,ESI                    ; 0042c2a9
    CMP dword ptr [EBX + 0x27a8],0x0    ; 0042c2aa
    JNZ 0x0042c756                      ; 0042c2b1
        ;   XREF to: 0042c756 (CONDITIONAL_JUMP)  ; LAB_0042c756
    LEA EDX,[EBX + 0x158]               ; 0042c2b7
    LEA EAX,[EBX + 0x24a8]              ; 0042c2bd
    CMP byte ptr [EAX],0x0              ; 0042c2c3
    JNZ 0x0042c7b2                      ; 0042c2c6
        ;   XREF to: 0042c7b2 (CONDITIONAL_JUMP)  ; LAB_0042c7b2
    CMP dword ptr [EBX + 0xdc],0x0      ; 0042c2cc
        ;   Label: LAB_0042c2cc
    JNZ 0x0042c836                      ; 0042c2d3
        ;   XREF to: 0042c836 (CONDITIONAL_JUMP)  ; LAB_0042c836
    LEA EAX,[EBX + 0x30d0]              ; 0042c2d9
        ;   Label: LAB_0042c2d9
    XOR ESI,ESI                         ; 0042c2df
    LEA EDX,[EBX + 0x3184]              ; 0042c2e1
    MOV dword ptr [ESP + 0xbc],EAX      ; 0042c2e7
    LEA EAX,[EBX + 0x30f4]              ; 0042c2ee
    MOV dword ptr [ESP + 0xc8],EDX      ; 0042c2f4
    MOV dword ptr [ESP + 0xcc],EAX      ; 0042c2fb
    IMUL EAX,ESI,0x24                   ; 0042c302
        ;   Label: LAB_0042c302
    MOV ECX,dword ptr [ESP + 0xbc]      ; 0042c305
    MOV EDX,dword ptr [ESP + 0xc8]      ; 0042c30c
    ADD EAX,ECX                         ; 0042c313
    MOV ECX,dword ptr [ESP + 0xcc]      ; 0042c315
    MOV dword ptr [EAX + 0x8],0x0       ; 0042c31c
        ;   Label: LAB_0042c31c
    ADD EDX,0xc                         ; 0042c323
    MOV EDI,dword ptr [EAX + 0x8]       ; 0042c326
    MOV dword ptr [EAX + 0x4],EDI       ; 0042c329
    MOV EDI,dword ptr [EAX + 0x4]       ; 0042c32c
    MOV dword ptr [EAX],EDI             ; 0042c32f
    MOV dword ptr [EDX + -0x4],0x0      ; 0042c331
    ADD EAX,0xc                         ; 0042c338
    MOV EDI,dword ptr [EDX + -0x4]      ; 0042c33b
    MOV dword ptr [EDX + -0x8],EDI      ; 0042c33e
    MOV EDI,dword ptr [EDX + -0x8]      ; 0042c341
    MOV dword ptr [EDX + -0xc],EDI      ; 0042c344
    CMP EAX,ECX                         ; 0042c347
    JNZ 0x0042c31c                      ; 0042c349
        ;   XREF to: 0042c31c (CONDITIONAL_JUMP)  ; LAB_0042c31c
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0042c34b
    MOV EDI,dword ptr [ESP + 0xcc]      ; 0042c352
    INC ESI                             ; 0042c359
    ADD EAX,0x24                        ; 0042c35a
    ADD EDI,0x24                        ; 0042c35d
    MOV dword ptr [ESP + 0xc8],EAX      ; 0042c360
    MOV dword ptr [ESP + 0xcc],EDI      ; 0042c367
    CMP ESI,0x5                         ; 0042c36e
    JL 0x0042c302                       ; 0042c371
        ;   XREF to: 0042c302 (CONDITIONAL_JUMP)  ; LAB_0042c302
    LEA EDI,[ESP + 0x34]                ; 0042c373
    PUSH EBX                            ; 0042c377
    MOV EDX,dword ptr [0x00603b28]      ; 0042c378 | g_CDemonSetPtr
    LEA ESI,[EBX + 0x20]                ; 0042c37e
    PUSH EDX                            ; 0042c381 | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 0042c382
    MOVSD ES:EDI,ESI                    ; 0042c383
    MOVSD ES:EDI,ESI                    ; 0042c384
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 0042c385
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0042c38a
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042c38d
    MOV EAX,dword ptr [EAX + 0x4]       ; 0042c390
    MOV dword ptr [ESP + 0xb8],EAX      ; 0042c393
    LEA EAX,[EBX + 0x20]                ; 0042c39a
    MOV dword ptr [ESP + 0xf8],EAX      ; 0042c39d
    LEA EAX,[EBX + 0x3184]              ; 0042c3a4
    MOV dword ptr [ESP + 0xdc],EAX      ; 0042c3aa
    LEA EAX,[EBX + 0x30d0]              ; 0042c3b1
    MOV dword ptr [ESP + 0xd0],EAX      ; 0042c3b7
    ADD EAX,0xc                         ; 0042c3be
    MOV dword ptr [ESP + 0xf0],EAX      ; 0042c3c1
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0042c3c8
    ADD EAX,0x18                        ; 0042c3cf
    MOV dword ptr [ESP + 0xe8],EAX      ; 0042c3d2
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0042c3d9
    ADD EAX,0xc                         ; 0042c3e0
    MOV dword ptr [ESP + 0xf4],EAX      ; 0042c3e3
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0042c3ea
    XOR ECX,ECX                         ; 0042c3f1
    ADD EAX,0x18                        ; 0042c3f3
    MOV dword ptr [ESP + 0xe0],ECX      ; 0042c3f6
    MOV dword ptr [ESP + 0xec],EAX      ; 0042c3fd
    FLD float ptr [EBX + 0x3280]        ; 0042c404
        ;   Label: LAB_0042c404
    FMUL float ptr [EBX + 0x27b8]       ; 0042c40a
    FLD float ptr [EBX + 0x327c]        ; 0042c410
    XOR ESI,ESI                         ; 0042c416
    FMUL float ptr [EBX + 0x27b8]       ; 0042c418
    MOV dword ptr [ESP + 0x20],ESI      ; 0042c41e
    FXCH                                ; 0042c422
    FSTP float ptr [ESP + 0xe4]         ; 0042c424
    FCOMP float ptr [ESP + 0xe4]        ; 0042c42b
    FNSTSW AX                           ; 0042c432
    SAHF                                ; 0042c434
    JBE 0x0042c444                      ; 0042c435
        ;   XREF to: 0042c444 (CONDITIONAL_JUMP)  ; LAB_0042c444
    MOV EAX,dword ptr [EBX + 0x2490]    ; 0042c437
    MOV dword ptr [ESP + 0xe4],EAX      ; 0042c43d
    FLD float ptr [EBX + 0x327c]        ; 0042c444
        ;   Label: LAB_0042c444
    FMUL float ptr [EBX + 0x27b8]       ; 0042c44a
    FLD float ptr [ESP + 0xe4]          ; 0042c450
    FXCH                                ; 0042c457
    FSTP float ptr [ESP + 0x10]         ; 0042c459
    FCOMP float ptr [ESP + 0x10]        ; 0042c45d
    FNSTSW AX                           ; 0042c461
    SAHF                                ; 0042c463
    JNC 0x0042c47f                      ; 0042c464
        ;   XREF to: 0042c47f (CONDITIONAL_JUMP)  ; LAB_0042c47f
    FLD float ptr [ESP + 0x10]          ; 0042c466
    FLD float ptr [EBX + 0x27b8]        ; 0042c46a
    FMUL double ptr [0x005b822e]        ; 0042c470 | DAT_005b822e
    FADDP                               ; 0042c476
    FSTP float ptr [ESP + 0xe4]         ; 0042c478
    FLD float ptr [EBX + 0x24]          ; 0042c47f
        ;   Label: LAB_0042c47f
    FADD float ptr [ESP + 0xe4]         ; 0042c482
    SUB ESP,0x4                         ; 0042c489
    FSTP float ptr [ESP]                ; 0042c48c
    FLD float ptr [EBX + 0x327c]        ; 0042c48f
    FMUL float ptr [EBX + 0x27b8]       ; 0042c495
    FADD float ptr [EBX + 0x24]         ; 0042c49b
    SUB ESP,0x4                         ; 0042c49e
    FSTP float ptr [ESP]                ; 0042c4a1
    FLD float ptr [EBX + 0x3270]        ; 0042c4a4
    FMUL float ptr [EBX + 0x27b8]       ; 0042c4aa
    SUB ESP,0x4                         ; 0042c4b0
    FSTP float ptr [ESP]                ; 0042c4b3
    PUSH dword ptr [ESP + 0x30]         ; 0042c4b6
    PUSH dword ptr [ESP + 0x2c]         ; 0042c4ba
    PUSH dword ptr [EBX + 0x28]         ; 0042c4be
    MOV EDI,dword ptr [0x00603b28]      ; 0042c4c1 | g_CDemonSetPtr
    PUSH dword ptr [EBX + 0x20]         ; 0042c4c7
    PUSH EDI                            ; 0042c4ca | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053de10 ; 0042c4cb
        ;   XREF to: 0053de10 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053de10()
    MOV dword ptr [ESP + 0x124],EAX     ; 0042c4d0
    FLD float ptr [ESP + 0x124]         ; 0042c4d7
    ADD ESP,0x20                        ; 0042c4de
    MOV EAX,[0x007e2cf0]                ; 0042c4e1 | DAT_007e2cf0
    FSTP float ptr [ESP + 0x14]         ; 0042c4e6
    TEST EAX,EAX                        ; 0042c4ea
    JNZ 0x0042c4fe                      ; 0042c4ec
        ;   XREF to: 0042c4fe (CONDITIONAL_JUMP)  ; LAB_0042c4fe
    MOV EAX,[0x00603b28]                ; 0042c4ee | g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x14d144]  ; 0042c4f3 | g_CDemonSetInstance.collision_actor
    MOV [0x007e2cf0],EAX                ; 0042c4f9 | DAT_007e2cf0
    IMUL EAX,dword ptr [ESP + 0xe0],0x24 ; 0042c4fe
        ;   Label: LAB_0042c4fe
    ADD EAX,dword ptr [ESP + 0xd0]      ; 0042c506
    CMP EAX,0x1548b58                   ; 0042c50d
    JZ 0x0042c52e                       ; 0042c512
        ;   XREF to: 0042c52e (CONDITIONAL_JUMP)  ; LAB_0042c52e
    MOV EDX,dword ptr [0x01548b58]      ; 0042c514 | DAT_01548b58
    MOV dword ptr [EAX],EDX             ; 0042c51a
    MOV EDX,dword ptr [0x01548b5c]      ; 0042c51c | DAT_01548b5c
    MOV dword ptr [EAX + 0x4],EDX       ; 0042c522
    MOV EDX,dword ptr [0x01548b60]      ; 0042c525 | DAT_01548b60
    MOV dword ptr [EAX + 0x8],EDX       ; 0042c52b
    MOV ESI,dword ptr [ESP + 0xf0]      ; 0042c52e
        ;   Label: LAB_0042c52e
    CMP ESI,0x1548b64                   ; 0042c535
    JZ 0x0042c554                       ; 0042c53b
        ;   XREF to: 0042c554 (CONDITIONAL_JUMP)  ; LAB_0042c554
    MOV EAX,[0x01548b64]                ; 0042c53d | DAT_01548b64
    MOV dword ptr [ESI],EAX             ; 0042c542
    MOV EAX,[0x01548b68]                ; 0042c544 | DAT_01548b68
    MOV dword ptr [ESI + 0x4],EAX       ; 0042c549
    MOV EAX,[0x01548b6c]                ; 0042c54c | DAT_01548b6c
    MOV dword ptr [ESI + 0x8],EAX       ; 0042c551
    MOV EDI,dword ptr [ESP + 0xe8]      ; 0042c554
        ;   Label: LAB_0042c554
    CMP EDI,0x1548b70                   ; 0042c55b
    JZ 0x0042c57a                       ; 0042c561
        ;   XREF to: 0042c57a (CONDITIONAL_JUMP)  ; LAB_0042c57a
    MOV EAX,[0x01548b70]                ; 0042c563 | DAT_01548b70
    MOV dword ptr [EDI],EAX             ; 0042c568
    MOV EAX,[0x01548b74]                ; 0042c56a | DAT_01548b74
    MOV dword ptr [EDI + 0x4],EAX       ; 0042c56f
    MOV EAX,[0x01548b78]                ; 0042c572 | DAT_01548b78
    MOV dword ptr [EDI + 0x8],EAX       ; 0042c577
    FLD float ptr [ESP + 0x14]          ; 0042c57a
        ;   Label: LAB_0042c57a
    FLDZ                                ; 0042c57e
    FXCH                                ; 0042c580
    FSTP double ptr [ESP]               ; 0042c582
    FCOMP double ptr [ESP]              ; 0042c585
    FNSTSW AX                           ; 0042c588
    SAHF                                ; 0042c58a
    JBE 0x0042c8c1                      ; 0042c58b
        ;   XREF to: 0042c8c1 (CONDITIONAL_JUMP)  ; LAB_0042c8c1
    FLD double ptr [ESP]                ; 0042c591
    MOV EAX,[0x00603b28]                ; 0042c594 | g_CDemonSetPtr
    FADD double ptr [0x005b824e]        ; 0042c599 | DAT_005b824e
    FLD float ptr [EAX + 0x14d128]      ; 0042c59f | g_CDemonSetInstance.collision_normal.x
    FXCH                                ; 0042c5a5
    FSTP float ptr [ESP + 0xd8]         ; 0042c5a7
    FMUL float ptr [ESP + 0xd8]         ; 0042c5ae
    FLD float ptr [EAX + 0x14d12c]      ; 0042c5b5 | g_CDemonSetInstance.collision_normal.y
    FMUL float ptr [ESP + 0xd8]         ; 0042c5bb
    FLD float ptr [EAX + 0x14d130]      ; 0042c5c2 | g_CDemonSetInstance.collision_normal.z
    FMUL float ptr [ESP + 0xd8]         ; 0042c5c8
    LEA EDI,[ESP + 0x94]                ; 0042c5cf
    LEA ESI,[ESP + 0x7c]                ; 0042c5d6
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0042c5da
    FXCH ST2                            ; 0042c5e1
    FSTP float ptr [ESP + 0x7c]         ; 0042c5e3
    FSTP float ptr [ESP + 0x80]         ; 0042c5e7
    FSTP float ptr [ESP + 0x84]         ; 0042c5ee
    MOVSD ES:EDI,ESI                    ; 0042c5f5
    MOVSD ES:EDI,ESI                    ; 0042c5f6
    MOVSD ES:EDI,ESI                    ; 0042c5f7
    MOV EDX,0x1                         ; 0042c5f8
    FLD float ptr [EAX]                 ; 0042c5fd
    FLD float ptr [EAX + 0x4]           ; 0042c5ff
    FLD float ptr [EAX + 0x8]           ; 0042c602
    FXCH ST2                            ; 0042c605
    FSUB float ptr [ESP + 0x94]         ; 0042c607
    FXCH                                ; 0042c60e
    FSUB float ptr [ESP + 0x98]         ; 0042c610
    FXCH ST2                            ; 0042c617
    FSUB float ptr [ESP + 0x9c]         ; 0042c619
    FXCH                                ; 0042c620
    FSTP float ptr [EAX]                ; 0042c622
    FXCH                                ; 0042c624
    FSTP float ptr [EAX + 0x4]          ; 0042c626
    FSTP float ptr [EAX + 0x8]          ; 0042c629
    MOV ESI,dword ptr [ESP + 0xf0]      ; 0042c62c
        ;   Label: LAB_0042c62c
    MOV EDI,dword ptr [ESP + 0xe8]      ; 0042c633
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0042c63a
    MOV ECX,dword ptr [ESP + 0xec]      ; 0042c641
    ADD ESI,0x24                        ; 0042c648
    ADD EDI,0x24                        ; 0042c64b
    ADD EAX,0x24                        ; 0042c64e
    ADD ECX,0x24                        ; 0042c651
    MOV dword ptr [ESP + 0xf0],ESI      ; 0042c654
    MOV dword ptr [ESP + 0xe8],EDI      ; 0042c65b
    MOV ESI,dword ptr [ESP + 0xe0]      ; 0042c662
    MOV dword ptr [ESP + 0xf4],EAX      ; 0042c669
    INC ESI                             ; 0042c670
    MOV dword ptr [ESP + 0xec],ECX      ; 0042c671
    MOV dword ptr [ESP + 0xe0],ESI      ; 0042c678
    CMP ESI,0x3                         ; 0042c67f
    JL 0x0042c404                       ; 0042c682
        ;   XREF to: 0042c404 (CONDITIONAL_JUMP)  ; LAB_0042c404
    TEST EDX,EDX                        ; 0042c688
        ;   Label: LAB_0042c688
    JZ 0x0042c6b5                       ; 0042c68a
        ;   XREF to: 0042c6b5 (CONDITIONAL_JUMP)  ; LAB_0042c6b5
    PUSH 0x0                            ; 0042c68c
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042c68e
    PUSH dword ptr [EBX + 0x326c]       ; 0042c694
    PUSH EBX                            ; 0042c69a
    CALL dword ptr [EAX + 0x40]         ; 0042c69b
    MOV dword ptr [ESP + 0x110],EAX     ; 0042c69e
    MOV EAX,dword ptr [ESP + 0x110]     ; 0042c6a5
    MOV dword ptr [EBX + 0x2504],EAX    ; 0042c6ac
    ADD ESP,0xc                         ; 0042c6b2
    FLD float ptr [EBX + 0x24]          ; 0042c6b5
        ;   Label: LAB_0042c6b5
    FADD float ptr [ESP + 0xb8]         ; 0042c6b8
    FST float ptr [EBX + 0x24]          ; 0042c6bf
    FCOMP float ptr [EBX + 0x2504]      ; 0042c6c2
    FNSTSW AX                           ; 0042c6c8
    SAHF                                ; 0042c6ca
    JNC 0x0042cca8                      ; 0042c6cb
        ;   XREF to: 0042cca8 (CONDITIONAL_JUMP)  ; LAB_0042cca8
    MOV EAX,dword ptr [EBX + 0x2504]    ; 0042c6d1
    MOV dword ptr [EBX + 0x24],EAX      ; 0042c6d7
    LEA EAX,[EBX + 0x2518]              ; 0042c6da
        ;   Label: LAB_0042c6da
    MOV dword ptr [EAX + 0x8],0x0       ; 0042c6e0
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042c6e7
    MOV dword ptr [EAX + 0x4],EDX       ; 0042c6ea
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042c6ed
    MOV dword ptr [EAX],EDX             ; 0042c6f0
    MOV EAX,[0x005fe9dc]                ; 0042c6f2 | g_CGamePtr
    FLD float ptr [EAX + 0x314]         ; 0042c6f7 | g_CGameInstance.delta_time_float
    FLD float ptr [EBX + 0x24]          ; 0042c6fd
    FSUB float ptr [ESP + 0x38]         ; 0042c700
    FDIVRP                              ; 0042c704
    MOV EDX,dword ptr [0x00603b28]      ; 0042c706 | g_CDemonSetPtr
    PUSH EDX                            ; 0042c70c | g_CDemonSetInstance
    FSTP float ptr [EBX + 0x251c]       ; 0042c70d
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 0042c713
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0042c718
    MOV ESP,EBP                         ; 0042c71b
        ;   Label: LAB_0042c71b
    POP EBP                             ; 0042c71d
    POP EDI                             ; 0042c71e
    POP ESI                             ; 0042c71f
    POP EBX                             ; 0042c720
    RET                                 ; 0042c721
    MOV ESI,dword ptr [0x00603b28]      ; 0042c722 | g_CDemonSetPtr
        ;   Label: LAB_0042c722
    PUSH ESI                            ; 0042c728 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 0042c729
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    MOV dword ptr [EBX + 0x2520],EDI    ; 0042c72e
    ADD ESP,0x4                         ; 0042c734
    MOV EAX,dword ptr [EBX + 0x2520]    ; 0042c737
    MOV dword ptr [EBX + 0x251c],EAX    ; 0042c73d
    MOV EAX,dword ptr [EBX + 0x251c]    ; 0042c743
    MOV dword ptr [EBX + 0x2518],EAX    ; 0042c749
    MOV ESP,EBP                         ; 0042c74f
    POP EBP                             ; 0042c751
    POP EDI                             ; 0042c752
    POP ESI                             ; 0042c753
    POP EBX                             ; 0042c754
    RET                                 ; 0042c755
    LEA EAX,[EBX + 0x20]                ; 0042c756
        ;   Label: LAB_0042c756
    MOV dword ptr [EBX + 0xdc],0x0      ; 0042c759
    FLD float ptr [EAX]                 ; 0042c763
    FLD float ptr [EAX + 0x4]           ; 0042c765
    FLD float ptr [EAX + 0x8]           ; 0042c768
    FXCH ST2                            ; 0042c76b
    FADD float ptr [ESP + 0x1c]         ; 0042c76d
    FXCH                                ; 0042c771
    FADD float ptr [ESP + 0x20]         ; 0042c773
    FXCH ST2                            ; 0042c777
    FADD float ptr [ESP + 0x24]         ; 0042c779
    FXCH                                ; 0042c77d
    FSTP float ptr [EAX]                ; 0042c77f
    FXCH                                ; 0042c781
    FSTP float ptr [EAX + 0x4]          ; 0042c783
    FSTP float ptr [EAX + 0x8]          ; 0042c786
    MOV dword ptr [EBX + 0x2520],0x0    ; 0042c789
    MOV EAX,dword ptr [EBX + 0x2520]    ; 0042c793
    MOV dword ptr [EBX + 0x251c],EAX    ; 0042c799
    MOV EAX,dword ptr [EBX + 0x251c]    ; 0042c79f
    MOV dword ptr [EBX + 0x2518],EAX    ; 0042c7a5
    MOV ESP,EBP                         ; 0042c7ab
    POP EBP                             ; 0042c7ad
    POP EDI                             ; 0042c7ae
    POP ESI                             ; 0042c7af
    POP EBX                             ; 0042c7b0
    RET                                 ; 0042c7b1
    PUSH EDX                            ; 0042c7b2
        ;   Label: LAB_0042c7b2
    MOV ESI,0x5f0f50                    ; 0042c7b3 | = "noCollision"
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0042c7b8
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0042c7bd
    MOV EDI,EAX                         ; 0042c7c0
    MOV EDX,EAX                         ; 0042c7c2
    SUB ECX,ECX                         ; 0042c7c4
    DEC ECX                             ; 0042c7c6
    XOR EAX,EAX                         ; 0042c7c7
    SCASB.REPNE ES:EDI                  ; 0042c7c9
    NOT ECX                             ; 0042c7cb
    DEC ECX                             ; 0042c7cd
    LEA EDI,[ESP + 0x70]                ; 0042c7ce
    SUB ECX,0xb                         ; 0042c7d2
    MOVSD ES:EDI,ESI                    ; 0042c7d5 | = "noCollision"
    MOVSD ES:EDI,ESI                    ; 0042c7d6 | s_llision_005f0f50+4
    MOVSD ES:EDI,ESI                    ; 0042c7d7 | s_ion_005f0f50+8 | DAT_006e6f69
    MOV dword ptr [ESP + 0xc0],ECX      ; 0042c7d8
    MOV ESI,EDX                         ; 0042c7df
    XOR EDI,EDI                         ; 0042c7e1
    TEST ECX,ECX                        ; 0042c7e3
    JL 0x0042c2cc                       ; 0042c7e5
        ;   XREF to: 0042c2cc (CONDITIONAL_JUMP)  ; LAB_0042c2cc
    PUSH 0xb                            ; 0042c7eb
        ;   Label: LAB_0042c7eb
    LEA EAX,[ESP + 0x74]                ; 0042c7ed
    PUSH EAX                            ; 0042c7f1
    PUSH ESI                            ; 0042c7f2
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0042c7f3
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0042c7f8
    TEST EAX,EAX                        ; 0042c7fb
    JZ 0x0042c811                       ; 0042c7fd
        ;   XREF to: 0042c811 (CONDITIONAL_JUMP)  ; LAB_0042c811
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0042c7ff
    INC EDI                             ; 0042c806
    INC ESI                             ; 0042c807
    CMP EDI,EAX                         ; 0042c808
    JLE 0x0042c7eb                      ; 0042c80a
        ;   XREF to: 0042c7eb (CONDITIONAL_JUMP)  ; LAB_0042c7eb
    JMP 0x0042c2cc                      ; 0042c80c
        ;   XREF to: 0042c2cc (UNCONDITIONAL_JUMP)  ; LAB_0042c2cc
    MOV dword ptr [EBX + 0x2520],EAX    ; 0042c811
        ;   Label: LAB_0042c811
    MOV EAX,dword ptr [EBX + 0x2520]    ; 0042c817
    MOV dword ptr [EBX + 0x251c],EAX    ; 0042c81d
    MOV EAX,dword ptr [EBX + 0x251c]    ; 0042c823
    MOV dword ptr [EBX + 0x2518],EAX    ; 0042c829
    MOV ESP,EBP                         ; 0042c82f
    POP EBP                             ; 0042c831
    POP EDI                             ; 0042c832
    POP ESI                             ; 0042c833
    POP EBX                             ; 0042c834
    RET                                 ; 0042c835
    FLD float ptr [ESP + 0x1c]          ; 0042c836
        ;   Label: LAB_0042c836
    FLD float ptr [ESP + 0x24]          ; 0042c83a
    FLD float ptr [EBX + 0xe4]          ; 0042c83e
    LEA EAX,[EBX + 0xe0]                ; 0042c844
    FADD float ptr [EBX + 0x24]         ; 0042c84a
    FXCH ST2                            ; 0042c84d
    FADD float ptr [EBX + 0xe0]         ; 0042c84f
    FXCH                                ; 0042c855
    FADD float ptr [EBX + 0xe8]         ; 0042c857
    FXCH ST2                            ; 0042c85d
    FSTP float ptr [EBX + 0x24]         ; 0042c85f
    MOV dword ptr [EAX + 0x8],0x0       ; 0042c862
    LEA EDX,[EBX + 0x30]                ; 0042c869
    MOV ECX,dword ptr [EAX + 0x8]       ; 0042c86c
    MOV dword ptr [EAX + 0x4],ECX       ; 0042c86f
    MOV ECX,dword ptr [EAX + 0x4]       ; 0042c872
    MOV dword ptr [EAX],ECX             ; 0042c875
    LEA EAX,[EBX + 0xec]                ; 0042c877
    FLD float ptr [EAX]                 ; 0042c87d
    FADD float ptr [EDX]                ; 0042c87f
    FSTP float ptr [EDX]                ; 0042c881
    FLD float ptr [EAX + 0x4]           ; 0042c883
    FADD float ptr [EDX + 0x4]          ; 0042c886
    FXCH                                ; 0042c889
    FSTP float ptr [ESP + 0x1c]         ; 0042c88b
    FSTP float ptr [EDX + 0x4]          ; 0042c88f
    FLD float ptr [EAX + 0x8]           ; 0042c892
    FADD float ptr [EDX + 0x8]          ; 0042c895
    FXCH                                ; 0042c898
    FSTP float ptr [ESP + 0x24]         ; 0042c89a
    FSTP float ptr [EDX + 0x8]          ; 0042c89e
    MOV dword ptr [EAX + 0x8],0x0       ; 0042c8a1
    PUSH EBX                            ; 0042c8a8
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042c8a9
    MOV dword ptr [EAX + 0x4],EDX       ; 0042c8ac
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042c8af
    MOV dword ptr [EAX],EDX             ; 0042c8b2
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 0042c8b4
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042c8b9
    JMP 0x0042c2d9                      ; 0042c8bc
        ;   XREF to: 0042c2d9 (UNCONDITIONAL_JUMP)  ; LAB_0042c2d9
    FLD1                                ; 0042c8c1
        ;   Label: LAB_0042c8c1
    FCOMP double ptr [ESP]              ; 0042c8c3
    FNSTSW AX                           ; 0042c8c6
    SAHF                                ; 0042c8c8
    JNC 0x0042c8d3                      ; 0042c8c9
        ;   XREF to: 0042c8d3 (CONDITIONAL_JUMP)  ; LAB_0042c8d3
    MOV dword ptr [ESP + 0x14],0x3f800000 ; 0042c8cb
    FLD float ptr [ESP + 0x14]          ; 0042c8d3
        ;   Label: LAB_0042c8d3
    FLD float ptr [ESP + 0x1c]          ; 0042c8d7
    FMUL ST1                            ; 0042c8db
    FLD float ptr [ESP + 0x20]          ; 0042c8dd
    FMUL ST2                            ; 0042c8e1
    FLD float ptr [ESP + 0x24]          ; 0042c8e3
    FMULP ST3                           ; 0042c8e7
    LEA EDI,[ESP + 0xac]                ; 0042c8e9
    LEA ESI,[ESP + 0x64]                ; 0042c8f0
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0042c8f4
    FXCH                                ; 0042c8fb
    FSTP float ptr [ESP + 0x64]         ; 0042c8fd
    FSTP float ptr [ESP + 0x68]         ; 0042c901
    FSTP float ptr [ESP + 0x6c]         ; 0042c905
    MOVSD ES:EDI,ESI                    ; 0042c909
    MOVSD ES:EDI,ESI                    ; 0042c90a
    MOVSD ES:EDI,ESI                    ; 0042c90b
    FLD float ptr [EAX]                 ; 0042c90c
    FLD float ptr [EAX + 0x4]           ; 0042c90e
    FLD float ptr [EAX + 0x8]           ; 0042c911
    LEA EDI,[ESP + 0x58]                ; 0042c914
    MOV ESI,dword ptr [0x00603b28]      ; 0042c918 | g_CDemonSetPtr
    FXCH ST2                            ; 0042c91e
    FADD float ptr [ESP + 0xac]         ; 0042c920
    FXCH                                ; 0042c927
    FADD float ptr [ESP + 0xb0]         ; 0042c929
    FXCH ST2                            ; 0042c930
    FADD float ptr [ESP + 0xb4]         ; 0042c932
    FXCH                                ; 0042c939
    FSTP float ptr [EAX]                ; 0042c93b
    FXCH                                ; 0042c93d
    FSTP float ptr [EAX + 0x4]          ; 0042c93f
    FSTP float ptr [EAX + 0x8]          ; 0042c942
    LEA EAX,[ESP + 0x28]                ; 0042c945
    LEA ESI,[ESI + 0x14d128]            ; 0042c949
    PUSH EAX                            ; 0042c94f
    MOVSD ES:EDI,ESI                    ; 0042c950 | g_CDemonSetInstance.collision_normal.x
    MOVSD ES:EDI,ESI                    ; 0042c951 | g_CDemonSetInstance.collision_normal.y
    MOVSD ES:EDI,ESI                    ; 0042c952 | g_CDemonSetInstance.collision_normal.z
    PUSH dword ptr [EBX + 0x326c]       ; 0042c953
    MOV EDX,dword ptr [EBX + 0x154]     ; 0042c959
    PUSH EBX                            ; 0042c95f
    CALL dword ptr [EDX + 0x40]         ; 0042c960
    MOV dword ptr [ESP + 0x110],EAX     ; 0042c963
    FLD float ptr [ESP + 0x110]         ; 0042c96a
    ADD ESP,0xc                         ; 0042c971
    IMUL EAX,dword ptr [ESP + 0xe0],0x24 ; 0042c974
    MOV ESI,dword ptr [ESP + 0xdc]      ; 0042c97c
    XOR EDX,EDX                         ; 0042c983
    ADD EAX,ESI                         ; 0042c985
    FSTP float ptr [EBX + 0x2504]       ; 0042c987
    CMP EAX,0x1548b58                   ; 0042c98d
    JZ 0x0042c9ae                       ; 0042c992
        ;   XREF to: 0042c9ae (CONDITIONAL_JUMP)  ; LAB_0042c9ae
    MOV ECX,dword ptr [0x01548b58]      ; 0042c994 | DAT_01548b58
    MOV dword ptr [EAX],ECX             ; 0042c99a
    MOV ECX,dword ptr [0x01548b5c]      ; 0042c99c | DAT_01548b5c
    MOV dword ptr [EAX + 0x4],ECX       ; 0042c9a2
    MOV ECX,dword ptr [0x01548b60]      ; 0042c9a5 | DAT_01548b60
    MOV dword ptr [EAX + 0x8],ECX       ; 0042c9ab
    MOV EDI,dword ptr [ESP + 0xf4]      ; 0042c9ae
        ;   Label: LAB_0042c9ae
    CMP EDI,0x1548b64                   ; 0042c9b5
    JZ 0x0042c9d4                       ; 0042c9bb
        ;   XREF to: 0042c9d4 (CONDITIONAL_JUMP)  ; LAB_0042c9d4
    MOV EAX,[0x01548b64]                ; 0042c9bd | DAT_01548b64
    MOV dword ptr [EDI],EAX             ; 0042c9c2
    MOV EAX,[0x01548b68]                ; 0042c9c4 | DAT_01548b68
    MOV dword ptr [EDI + 0x4],EAX       ; 0042c9c9
    MOV EAX,[0x01548b6c]                ; 0042c9cc | DAT_01548b6c
    MOV dword ptr [EDI + 0x8],EAX       ; 0042c9d1
    MOV EAX,dword ptr [ESP + 0xec]      ; 0042c9d4
        ;   Label: LAB_0042c9d4
    CMP EAX,0x1548b70                   ; 0042c9db
    JZ 0x0042c9fc                       ; 0042c9e0
        ;   XREF to: 0042c9fc (CONDITIONAL_JUMP)  ; LAB_0042c9fc
    MOV ECX,dword ptr [0x01548b70]      ; 0042c9e2 | DAT_01548b70
    MOV dword ptr [EAX],ECX             ; 0042c9e8
    MOV ECX,dword ptr [0x01548b74]      ; 0042c9ea | DAT_01548b74
    MOV dword ptr [EAX + 0x4],ECX       ; 0042c9f0
    MOV ECX,dword ptr [0x01548b78]      ; 0042c9f3 | DAT_01548b78
    MOV dword ptr [EAX + 0x8],ECX       ; 0042c9f9
    FLD float ptr [ESP + 0x38]          ; 0042c9fc
        ;   Label: LAB_0042c9fc
    FCOMP float ptr [EBX + 0x2504]      ; 0042ca00
    FNSTSW AX                           ; 0042ca06
    SAHF                                ; 0042ca08
    JNC 0x0042cb2f                      ; 0042ca09
        ;   XREF to: 0042cb2f (CONDITIONAL_JUMP)  ; LAB_0042cb2f
    LEA EAX,[ESP + 0x28]                ; 0042ca0f
    LEA ECX,[ESP + 0x88]                ; 0042ca13
    XOR ESI,ESI                         ; 0042ca1a
    CMP ECX,EAX                         ; 0042ca1c
    JZ 0x0042ca41                       ; 0042ca1e
        ;   XREF to: 0042ca41 (CONDITIONAL_JUMP)  ; LAB_0042ca41
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042ca20
    MOV dword ptr [ESP + 0x88],EAX      ; 0042ca24
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042ca2b
    MOV dword ptr [ESP + 0x8c],EAX      ; 0042ca2f
    MOV EAX,dword ptr [ESP + 0x30]      ; 0042ca36
    MOV dword ptr [ESP + 0x90],EAX      ; 0042ca3a
    FLD float ptr [ESP + 0x8c]          ; 0042ca41
        ;   Label: LAB_0042ca41
    FMUL ST0                            ; 0042ca48
    FLD float ptr [ESP + 0x88]          ; 0042ca4a
    FMUL ST0                            ; 0042ca51
    FADDP                               ; 0042ca53
    FLD float ptr [ESP + 0x90]          ; 0042ca55
    FMUL ST0                            ; 0042ca5c
    FADDP                               ; 0042ca5e
    FSQRT                               ; 0042ca60
    FLDZ                                ; 0042ca62
    FXCH                                ; 0042ca64
    FSTP float ptr [ESP + 0xc4]         ; 0042ca66
    FCOMP float ptr [ESP + 0xc4]        ; 0042ca6d
    FNSTSW AX                           ; 0042ca74
    SAHF                                ; 0042ca76
    JNC 0x0042cb12                      ; 0042ca77
        ;   XREF to: 0042cb12 (CONDITIONAL_JUMP)  ; LAB_0042cb12
    FLD1                                ; 0042ca7d
    FLD float ptr [ESP + 0x88]          ; 0042ca7f
    FXCH                                ; 0042ca86
    FDIV float ptr [ESP + 0xc4]         ; 0042ca88
    FXCH                                ; 0042ca8f
    FMUL ST1                            ; 0042ca91
    FLD float ptr [ESP + 0x8c]          ; 0042ca93
    FMUL ST2                            ; 0042ca9a
    FLD float ptr [ESP + 0x90]          ; 0042ca9c
    FMULP ST3                           ; 0042caa3
    FXCH                                ; 0042caa5
    FSTP float ptr [ESP + 0x88]         ; 0042caa7
    FSTP float ptr [ESP + 0x8c]         ; 0042caae
    FSTP float ptr [ESP + 0x90]         ; 0042cab5
    FLD float ptr [ESP + 0x8c]          ; 0042cabc
        ;   Label: LAB_0042cabc
    FCOMP double ptr [0x005b823e]       ; 0042cac3 | DAT_005b823e
    FNSTSW AX                           ; 0042cac9
    SAHF                                ; 0042cacb
    JNC 0x0042cb2b                      ; 0042cacc
        ;   XREF to: 0042cb2b (CONDITIONAL_JUMP)  ; LAB_0042cb2b
    MOV EAX,dword ptr [ESP + 0x34]      ; 0042cace
        ;   Label: LAB_0042cace
    MOV dword ptr [EBX + 0x20],EAX      ; 0042cad2
    MOV EAX,dword ptr [ESP + 0x38]      ; 0042cad5
    MOV dword ptr [EBX + 0x24],EAX      ; 0042cad9
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0042cadc
    LEA EDX,[ESP + 0x58]                ; 0042cae0
    MOV dword ptr [EBX + 0x28],EAX      ; 0042cae4
    LEA EAX,[ESP + 0x28]                ; 0042cae7
    CMP EDX,EAX                         ; 0042caeb
    JZ 0x0042c71b                       ; 0042caed
        ;   XREF to: 0042c71b (CONDITIONAL_JUMP)  ; LAB_0042c71b
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042caf3
    MOV dword ptr [ESP + 0x58],EAX      ; 0042caf7
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042cafb
    MOV dword ptr [ESP + 0x5c],EAX      ; 0042caff
    MOV EAX,dword ptr [ESP + 0x30]      ; 0042cb03
    MOV dword ptr [ESP + 0x60],EAX      ; 0042cb07
    MOV ESP,EBP                         ; 0042cb0b
    POP EBP                             ; 0042cb0d
    POP EDI                             ; 0042cb0e
    POP ESI                             ; 0042cb0f
    POP EBX                             ; 0042cb10
    RET                                 ; 0042cb11
    XOR ECX,ECX                         ; 0042cb12
        ;   Label: LAB_0042cb12
    MOV dword ptr [ESP + 0x8c],ECX      ; 0042cb14
    MOV dword ptr [ESP + 0x88],ECX      ; 0042cb1b
    MOV dword ptr [ESP + 0x90],ECX      ; 0042cb22
    JMP 0x0042cabc                      ; 0042cb29
        ;   XREF to: 0042cabc (UNCONDITIONAL_JUMP)  ; LAB_0042cabc
    TEST ESI,ESI                        ; 0042cb2b
        ;   Label: LAB_0042cb2b
    JNZ 0x0042cace                      ; 0042cb2d
        ;   XREF to: 0042cace (CONDITIONAL_JUMP)  ; LAB_0042cace
    FLD float ptr [EBX + 0x24]          ; 0042cb2f
        ;   Label: LAB_0042cb2f
    FCOMP float ptr [EBX + 0x2504]      ; 0042cb32
    FNSTSW AX                           ; 0042cb38
    SAHF                                ; 0042cb3a
    JNC 0x0042cb4d                      ; 0042cb3b
        ;   XREF to: 0042cb4d (CONDITIONAL_JUMP)  ; LAB_0042cb4d
    MOV EAX,dword ptr [EBX + 0x2504]    ; 0042cb3d
    MOV dword ptr [EBX + 0x24],EAX      ; 0042cb43
    MOV EAX,dword ptr [EBX + 0x24]      ; 0042cb46
    MOV dword ptr [ESP + 0x38],EAX      ; 0042cb49
    FLD float ptr [ESP + 0x14]          ; 0042cb4d
        ;   Label: LAB_0042cb4d
    FCOMP double ptr [0x005b8246]       ; 0042cb51 | DAT_005b8246
    FNSTSW AX                           ; 0042cb57
    SAHF                                ; 0042cb59
    JA 0x0042c688                       ; 0042cb5a
        ;   XREF to: 0042c688 (CONDITIONAL_JUMP)  ; LAB_0042c688
    FLD float ptr [ESP + 0x58]          ; 0042cb60
    FMUL ST0                            ; 0042cb64
    FLD float ptr [ESP + 0x60]          ; 0042cb66
    FMUL ST0                            ; 0042cb6a
    FADDP                               ; 0042cb6c
    FSQRT                               ; 0042cb6e
    XOR ECX,ECX                         ; 0042cb70
    FLDZ                                ; 0042cb72
    MOV dword ptr [ESP + 0x5c],ECX      ; 0042cb74
    FXCH                                ; 0042cb78
    FSTP float ptr [ESP + 0x18]         ; 0042cb7a
    FCOMP float ptr [ESP + 0x18]        ; 0042cb7e
    FNSTSW AX                           ; 0042cb82
    SAHF                                ; 0042cb84
    JNC 0x0042cbc5                      ; 0042cb85
        ;   XREF to: 0042cbc5 (CONDITIONAL_JUMP)  ; LAB_0042cbc5
    FLD float ptr [ESP + 0x18]          ; 0042cb87
    FLD1                                ; 0042cb8b
    FDIVRP                              ; 0042cb8d
    FLD float ptr [ESP + 0x58]          ; 0042cb8f
    FXCH                                ; 0042cb93
    FSTP float ptr [ESP + 0xfc]         ; 0042cb95
    FMUL float ptr [ESP + 0xfc]         ; 0042cb9c
    FLDZ                                ; 0042cba3
    FMUL float ptr [ESP + 0xfc]         ; 0042cba5
    FLD float ptr [ESP + 0x60]          ; 0042cbac
    FMUL float ptr [ESP + 0xfc]         ; 0042cbb0
    FXCH ST2                            ; 0042cbb7
    FSTP float ptr [ESP + 0x58]         ; 0042cbb9
    FSTP float ptr [ESP + 0x5c]         ; 0042cbbd
    FSTP float ptr [ESP + 0x60]         ; 0042cbc1
    FLD float ptr [ESP + 0x14]          ; 0042cbc5
        ;   Label: LAB_0042cbc5
    FSUBR double ptr [0x005b8246]       ; 0042cbc9 | DAT_005b8246
    FLD float ptr [ESP + 0x1c]          ; 0042cbcf
    FXCH                                ; 0042cbd3
    FSTP float ptr [ESP + 0xd4]         ; 0042cbd5
    FMUL float ptr [ESP + 0xd4]         ; 0042cbdc
    FLD float ptr [ESP + 0x20]          ; 0042cbe3
    FMUL float ptr [ESP + 0xd4]         ; 0042cbe7
    FLD float ptr [ESP + 0x5c]          ; 0042cbee
    FXCH                                ; 0042cbf2
    FSTP float ptr [ESP + 0x20]         ; 0042cbf4
    FMUL float ptr [ESP + 0x20]         ; 0042cbf8
    FXCH                                ; 0042cbfc
    FSTP float ptr [ESP + 0x1c]         ; 0042cbfe
    FLD float ptr [ESP + 0x58]          ; 0042cc02
    FMUL float ptr [ESP + 0x1c]         ; 0042cc06
    FLD float ptr [ESP + 0x24]          ; 0042cc0a
    FMUL float ptr [ESP + 0xd4]         ; 0042cc0e
    FXCH                                ; 0042cc15
    FADDP ST2,ST0                       ; 0042cc17
    FSTP float ptr [ESP + 0x24]         ; 0042cc19
    FLD float ptr [ESP + 0x60]          ; 0042cc1d
    FMUL float ptr [ESP + 0x24]         ; 0042cc21
    FADDP                               ; 0042cc25
    FLDZ                                ; 0042cc27
    FXCH                                ; 0042cc29
    FSTP double ptr [ESP + 0x8]         ; 0042cc2b
    FCOMP double ptr [ESP + 0x8]        ; 0042cc2f
    FNSTSW AX                           ; 0042cc33
    SAHF                                ; 0042cc35
    JBE 0x0042c688                      ; 0042cc36
        ;   XREF to: 0042c688 (CONDITIONAL_JUMP)  ; LAB_0042c688
    FLD double ptr [ESP + 0x8]          ; 0042cc3c
    FMUL double ptr [0x005b8236]        ; 0042cc40 | DAT_005b8236
    FLD float ptr [ESP + 0x58]          ; 0042cc46
    FMUL ST1                            ; 0042cc4a
    FLD float ptr [ESP + 0x5c]          ; 0042cc4c
    FMUL ST2                            ; 0042cc50
    FLD float ptr [ESP + 0x60]          ; 0042cc52
    FMULP ST3                           ; 0042cc56
    FLD float ptr [ESP + 0x1c]          ; 0042cc58
    FLD float ptr [ESP + 0x20]          ; 0042cc5c
    LEA EDI,[ESP + 0x4c]                ; 0042cc60
    LEA ESI,[ESP + 0x40]                ; 0042cc64
    FXCH ST3                            ; 0042cc68
    FSTP float ptr [ESP + 0x40]         ; 0042cc6a
    FXCH                                ; 0042cc6e
    FSTP float ptr [ESP + 0x44]         ; 0042cc70
    FXCH ST2                            ; 0042cc74
    FSTP float ptr [ESP + 0x48]         ; 0042cc76
    MOVSD ES:EDI,ESI                    ; 0042cc7a
    MOVSD ES:EDI,ESI                    ; 0042cc7b
    MOVSD ES:EDI,ESI                    ; 0042cc7c
    FLD float ptr [ESP + 0x24]          ; 0042cc7d
    FXCH ST2                            ; 0042cc81
    FSUB float ptr [ESP + 0x4c]         ; 0042cc83
    FXCH                                ; 0042cc87
    FSUB float ptr [ESP + 0x50]         ; 0042cc89
    FXCH ST2                            ; 0042cc8d
    FSUB float ptr [ESP + 0x54]         ; 0042cc8f
    FXCH                                ; 0042cc93
    FSTP float ptr [ESP + 0x1c]         ; 0042cc95
    FXCH                                ; 0042cc99
    FSTP float ptr [ESP + 0x20]         ; 0042cc9b
    FSTP float ptr [ESP + 0x24]         ; 0042cc9f
    JMP 0x0042c62c                      ; 0042cca3
        ;   XREF to: 0042c62c (UNCONDITIONAL_JUMP)  ; LAB_0042c62c
    CMP dword ptr [EBX + 0x2500],0x0    ; 0042cca8
        ;   Label: LAB_0042cca8
    JZ 0x0042c6da                       ; 0042ccaf
        ;   XREF to: 0042c6da (CONDITIONAL_JUMP)  ; LAB_0042c6da
    FLD float ptr [EBX + 0x2504]        ; 0042ccb5
    FADD double ptr [0x005b822e]        ; 0042ccbb | DAT_005b822e
    FLD float ptr [EBX + 0x24]          ; 0042ccc1
    FCOMPP                              ; 0042ccc4
    FNSTSW AX                           ; 0042ccc6
    SAHF                                ; 0042ccc8
    JNC 0x0042c6da                      ; 0042ccc9
        ;   XREF to: 0042c6da (CONDITIONAL_JUMP)  ; LAB_0042c6da
    MOV EAX,dword ptr [EBX + 0x2504]    ; 0042cccf
    MOV dword ptr [EBX + 0x24],EAX      ; 0042ccd5
    MOV EAX,dword ptr [EBX + 0x24]      ; 0042ccd8
    MOV dword ptr [ESP + 0x38],EAX      ; 0042ccdb
    JMP 0x0042c6da                      ; 0042ccdf
        ;   XREF to: 0042c6da (UNCONDITIONAL_JUMP)  ; LAB_0042c6da

