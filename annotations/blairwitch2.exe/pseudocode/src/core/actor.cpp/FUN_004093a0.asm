; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_actor_cpp_FUN_004093a0(int param_1,CBoundingBox3D *param_2,float *param_3,undefined4 *param_4,int param_5,uint param_6,CBoundingBox3D *param_7)
;
; Local Variables:
; undefined8       Stack[-0x110]:8  local_110
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined        Stack[-0xe4]:1  local_e4
; undefined        Stack[-0xcc]:1  local_cc
; undefined        Stack[-0xb4]:1  local_b4
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_setcolid.cpp_FUN_00536490 at 00536787
;   core_spike.cpp_CSpike_testCollisionWithCharacters_FUN_00560cb0 at 00561120
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005ca5c2
;   TerminatedCString s_CDemonActor_rayIntersect_005ca5d4
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 g_CDemonSetInstance.skip_exact_collisions
;   undefined4 DAT_020ccfdc
;   undefined4 DAT_020ccfe0
;   undefined4 DAT_020ccfe4
;   undefined4 DAT_020ccfe8
;   undefined4 DAT_020ccfec
;   undefined4 DAT_020ccff0
;
; Called Functions:
;   core_actor.cpp_FUN_00408290
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d30
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_FUN_004090f0
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041a590
;   core_box.cpp_FUN_0041af70
;   core_box.cpp_FUN_0041b660
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_dmodel.cpp_FUN_0044f020
;   core_main.c_FUN_004e4500
;   core_skeleton.cpp_CDeformableModel_findMaxWeightBone_FUN_00544bb0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_005481d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004093a0
        ;   Label: core_actor.cpp_FUN_004093a0
    PUSH ESI                            ; 004093a1
    PUSH EDI                            ; 004093a2
    PUSH EBP                            ; 004093a3
    MOV EBP,ESP                         ; 004093a4
    SUB ESP,0x108                       ; 004093a6
    AND ESP,0xfffffff8                  ; 004093ac
    MOV EBX,dword ptr [EBP + 0x20]      ; 004093af
    MOV EDX,dword ptr [EBP + 0x28]      ; 004093b2
    TEST EDX,EDX                        ; 004093b5
    JNZ 0x004093d2                      ; 004093b7
        ;   XREF to: 004093d2 (CONDITIONAL_JUMP)  ; LAB_004093d2
    MOV dword ptr [ESP + 0x100],0x40000000 ; 004093b9
        ;   Label: LAB_004093b9
    MOV EAX,dword ptr [ESP + 0x100]     ; 004093c4
    MOV ESP,EBP                         ; 004093cb
    POP EBP                             ; 004093cd
    POP EDI                             ; 004093ce
    POP ESI                             ; 004093cf
    POP EBX                             ; 004093d0
    RET                                 ; 004093d1
    PUSH EDX                            ; 004093d2
        ;   Label: LAB_004093d2
    MOV ESI,dword ptr [EBP + 0x24]      ; 004093d3
    PUSH ESI                            ; 004093d6
    MOV EDI,dword ptr [EBP + 0x14]      ; 004093d7
    PUSH EDI                            ; 004093da
    LEA ESI,[ESP + 0x40]                ; 004093db
    CALL core_actor.cpp_FUN_004090f0    ; 004093df
        ;   XREF to: 004090f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004090f0()
    MOV ECX,0x6                         ; 004093e4
    LEA EDI,[ESP + 0x88]                ; 004093e9
    ADD ESP,0xc                         ; 004093f0
    LEA ESI,[ESP + 0x34]                ; 004093f3
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004093f7
    MOVSD.REP ES:EDI,ESI                ; 004093fa
    TEST EAX,EAX                        ; 004093fc
    JNZ 0x00409642                      ; 004093fe
        ;   XREF to: 00409642 (CONDITIONAL_JUMP)  ; LAB_00409642
    LEA EAX,[ESP + 0x1c]                ; 00409404
    MOV EDX,dword ptr [EBP + 0x18]      ; 00409408
    CMP EAX,EDX                         ; 0040940b
    JZ 0x00409423                       ; 0040940d
        ;   XREF to: 00409423 (CONDITIONAL_JUMP)  ; LAB_00409423
    MOV EAX,dword ptr [EDX]             ; 0040940f
    MOV dword ptr [ESP + 0x1c],EAX      ; 00409411
    MOV EAX,dword ptr [EDX + 0x4]       ; 00409415
    MOV dword ptr [ESP + 0x20],EAX      ; 00409418
    MOV EAX,dword ptr [EDX + 0x8]       ; 0040941c
    MOV dword ptr [ESP + 0x24],EAX      ; 0040941f
    LEA EAX,[ESP + 0x28]                ; 00409423
        ;   Label: LAB_00409423
    CMP EAX,EDX                         ; 00409427
    JZ 0x0040943f                       ; 00409429
        ;   XREF to: 0040943f (CONDITIONAL_JUMP)  ; LAB_0040943f
    MOV EAX,dword ptr [EDX]             ; 0040942b
    MOV dword ptr [ESP + 0x28],EAX      ; 0040942d
    MOV EAX,dword ptr [EDX + 0x4]       ; 00409431
    MOV dword ptr [ESP + 0x2c],EAX      ; 00409434
    MOV EAX,dword ptr [EDX + 0x8]       ; 00409438
    MOV dword ptr [ESP + 0x30],EAX      ; 0040943b
    MOV EAX,dword ptr [EBP + 0x18]      ; 0040943f
        ;   Label: LAB_0040943f
    FLD float ptr [EAX]                 ; 00409442
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00409444
    FADD float ptr [EAX]                ; 00409447
    MOV EAX,dword ptr [EBP + 0x18]      ; 00409449
    FLD float ptr [EAX + 0x4]           ; 0040944c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0040944f
    FADD float ptr [EAX + 0x4]          ; 00409452
    MOV EAX,dword ptr [EBP + 0x18]      ; 00409455
    LEA EDI,[ESP + 0xa0]                ; 00409458
    LEA ESI,[ESP + 0xac]                ; 0040945f
    FLD float ptr [EAX + 0x8]           ; 00409466
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00409469
    FXCH ST2                            ; 0040946c
    FSTP float ptr [ESP + 0xac]         ; 0040946e
    FXCH                                ; 00409475
    FADD float ptr [EAX + 0x8]          ; 00409477
    LEA EAX,[ESP + 0xa0]                ; 0040947a
    FXCH                                ; 00409481
    FSTP float ptr [ESP + 0xb0]         ; 00409483
    PUSH EAX                            ; 0040948a
    LEA EAX,[ESP + 0x20]                ; 0040948b
    FSTP float ptr [ESP + 0xb8]         ; 0040948f
    PUSH EAX                            ; 00409496
    MOVSD ES:EDI,ESI                    ; 00409497
    MOVSD ES:EDI,ESI                    ; 00409498
    MOVSD ES:EDI,ESI                    ; 00409499
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041a590 ; 0040949a
        ;   XREF to: 0041a590 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041a590(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0040949f
    LEA EAX,[ESP + 0x7c]                ; 004094a2
    PUSH EAX                            ; 004094a6
    LEA EAX,[ESP + 0x20]                ; 004094a7
    PUSH EAX                            ; 004094ab
    CALL core_box.cpp_FUN_0041b660      ; 004094ac
        ;   XREF to: 0041b660 (UNCONDITIONAL_CALL)  ; int core_box.cpp_FUN_0041b660(CBoundingBox3D * this_ptr, CBoundingBox3D * other)
    ADD ESP,0x8                         ; 004094b1
    TEST EAX,EAX                        ; 004094b4
    JZ 0x004093b9                       ; 004094b6
        ;   XREF to: 004093b9 (CONDITIONAL_JUMP)  ; LAB_004093b9
    MOV EAX,dword ptr [EBP + 0x18]      ; 004094bc
        ;   Label: LAB_004094bc
    PUSH EAX                            ; 004094bf
    MOV EDX,dword ptr [EBP + 0x14]      ; 004094c0
    PUSH EDX                            ; 004094c3
    LEA ESI,[ESP + 0xf0]                ; 004094c4
    LEA EDI,[ESP + 0x9c]                ; 004094cb
    CALL core_actor.cpp_FUN_00408de0    ; 004094d2
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    ADD ESP,0x8                         ; 004094d7
    LEA ESI,[ESP + 0xe8]                ; 004094da
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004094e1
    MOVSD ES:EDI,ESI                    ; 004094e4
    MOVSD ES:EDI,ESI                    ; 004094e5
    MOVSD ES:EDI,ESI                    ; 004094e6
    PUSH ECX                            ; 004094e7
    MOV ESI,dword ptr [EBP + 0x14]      ; 004094e8
    PUSH ESI                            ; 004094eb
    LEA ESI,[ESP + 0xcc]                ; 004094ec
    LEA EDI,[ESP + 0xd8]                ; 004094f3
    CALL core_actor.cpp_FUN_00408d30    ; 004094fa
        ;   XREF to: 00408d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d30()
    LEA ESI,[ESP + 0xcc]                ; 004094ff
    ADD ESP,0x8                         ; 00409506
    MOVSD ES:EDI,ESI                    ; 00409509
    MOVSD ES:EDI,ESI                    ; 0040950a
    MOVSD ES:EDI,ESI                    ; 0040950b
    MOV EDI,dword ptr [EBP + 0x28]      ; 0040950c
    CMP EDI,0x2                         ; 0040950f
    JNC 0x004096b6                      ; 00409512
        ;   XREF to: 004096b6 (CONDITIONAL_JUMP)  ; LAB_004096b6
    CMP EDI,0x1                         ; 00409518
    JNZ 0x004096bd                      ; 0040951b
        ;   XREF to: 004096bd (CONDITIONAL_JUMP)  ; LAB_004096bd
    LEA EAX,[ESP + 0xb8]                ; 00409521
    PUSH EAX                            ; 00409528
    LEA EAX,[ESP + 0xd4]                ; 00409529
    PUSH EAX                            ; 00409530
    LEA EAX,[ESP + 0x9c]                ; 00409531
    PUSH EAX                            ; 00409538
    MOV ECX,dword ptr [EBP + 0x14]      ; 00409539
    MOV EAX,dword ptr [EBP + 0x14]      ; 0040953c
    PUSH ECX                            ; 0040953f
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00409540
    LEA ESI,[ESP + 0x5c]                ; 00409546
    LEA EDI,[ESP + 0x74]                ; 0040954a
    CALL dword ptr [EAX + 0x24]         ; 0040954e
    MOV ECX,0x6                         ; 00409551
    ADD ESP,0x4                         ; 00409556
    LEA EAX,[ESP + 0x70]                ; 00409559
    LEA ESI,[ESP + 0x58]                ; 0040955d
    PUSH EAX                            ; 00409561
    MOVSD.REP ES:EDI,ESI                ; 00409562
    CALL core_box.cpp_FUN_0041af70      ; 00409564
        ;   XREF to: 0041af70 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041af70()
    MOV dword ptr [ESP + 0x114],EAX     ; 00409569
        ;   Label: LAB_00409569
    FLD float ptr [ESP + 0x114]         ; 00409570
    ADD ESP,0x10                        ; 00409577
    FSTP float ptr [ESP + 0x18]         ; 0040957a
    FLD float ptr [ESP + 0x18]          ; 0040957e
        ;   Label: LAB_0040957e
    FLDZ                                ; 00409582
    FXCH                                ; 00409584
    FSTP double ptr [ESP + 0x8]         ; 00409586
    FCOMP double ptr [ESP + 0x8]        ; 0040958a
    FNSTSW AX                           ; 0040958e
    SAHF                                ; 00409590
    JA 0x004093b9                       ; 00409591
        ;   XREF to: 004093b9 (CONDITIONAL_JUMP)  ; LAB_004093b9
    FLD1                                ; 00409597
    FCOMP double ptr [ESP + 0x8]        ; 00409599
    FNSTSW AX                           ; 0040959d
    SAHF                                ; 0040959f
    JC 0x004093b9                       ; 004095a0
        ;   XREF to: 004093b9 (CONDITIONAL_JUMP)  ; LAB_004093b9
    MOV dword ptr [EBX + 0x10],0xffffffff ; 004095a6
    MOV dword ptr [EBX + 0x14],0xffffffff ; 004095ad
    MOV dword ptr [EBX + 0x18],0xffffffff ; 004095b4
    MOV EAX,[0x0061b5a8]                ; 004095bb | g_CDemonSetPtr
    MOV dword ptr [EBX + 0xc],0xffffffff ; 004095c0
    MOV EAX,dword ptr [EAX + 0x15f6f0]  ; 004095c7 | g_CDemonSetInstance.skip_exact_collisions
    TEST EAX,EAX                        ; 004095cd
    JZ 0x004096e4                       ; 004095cf
        ;   XREF to: 004096e4 (CONDITIONAL_JUMP)  ; LAB_004096e4
    LEA EAX,[ESP + 0xb8]                ; 004095d5
        ;   Label: LAB_004095d5
    PUSH EAX                            ; 004095dc
    MOV ESI,dword ptr [EBP + 0x14]      ; 004095dd
    PUSH ESI                            ; 004095e0
    LEA ESI,[ESP + 0xfc]                ; 004095e1
    LEA EDI,[ESP + 0xe4]                ; 004095e8
    CALL core_actor.cpp_FUN_00408cf0    ; 004095ef
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0xfc]                ; 004095f4
    ADD ESP,0x8                         ; 004095fb
    LEA EAX,[ESP + 0xdc]                ; 004095fe
    MOVSD ES:EDI,ESI                    ; 00409605
    MOVSD ES:EDI,ESI                    ; 00409606
    MOVSD ES:EDI,ESI                    ; 00409607
    CMP EBX,EAX                         ; 00409608
    JZ 0x00409629                       ; 0040960a
        ;   XREF to: 00409629 (CONDITIONAL_JUMP)  ; LAB_00409629
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0040960c
    MOV dword ptr [EBX],EAX             ; 00409613
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00409615
    MOV dword ptr [EBX + 0x4],EAX       ; 0040961c
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0040961f
    MOV dword ptr [EBX + 0x8],EAX       ; 00409626
    MOV EAX,dword ptr [ESP + 0x18]      ; 00409629
        ;   Label: LAB_00409629
    MOV dword ptr [ESP + 0x100],EAX     ; 0040962d
    MOV EAX,dword ptr [ESP + 0x100]     ; 00409634
    MOV ESP,EBP                         ; 0040963b
    POP EBP                             ; 0040963d
    POP EDI                             ; 0040963e
    POP ESI                             ; 0040963f
    POP EBX                             ; 00409640
    RET                                 ; 00409641
    LEA EAX,[ESP + 0x7c]                ; 00409642
        ;   Label: LAB_00409642
    PUSH EAX                            ; 00409646
    MOV ESI,dword ptr [EBP + 0x2c]      ; 00409647
    PUSH ESI                            ; 0040964a
    CALL core_box.cpp_FUN_0041b660      ; 0040964b
        ;   XREF to: 0041b660 (UNCONDITIONAL_CALL)  ; int core_box.cpp_FUN_0041b660(CBoundingBox3D * this_ptr, CBoundingBox3D * other)
    ADD ESP,0x8                         ; 00409650
    TEST EAX,EAX                        ; 00409653
    JNZ 0x004094bc                      ; 00409655
        ;   XREF to: 004094bc (CONDITIONAL_JUMP)  ; LAB_004094bc
    JMP 0x004093b9                      ; 0040965b
        ;   XREF to: 004093b9 (UNCONDITIONAL_JUMP)  ; LAB_004093b9
    LEA EAX,[ESP + 0xb8]                ; 00409660
        ;   Label: LAB_00409660
    PUSH EAX                            ; 00409667
    LEA EAX,[ESP + 0xd4]                ; 00409668
    PUSH EAX                            ; 0040966f
    LEA EAX,[ESP + 0x9c]                ; 00409670
    PUSH EAX                            ; 00409677
    MOV ESI,dword ptr [EBP + 0x24]      ; 00409678
    PUSH ESI                            ; 0040967b
    CALL core_actor.cpp_FUN_00408290    ; 0040967c
        ;   XREF to: 00408290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408290()
    JMP 0x00409569                      ; 00409681
        ;   XREF to: 00409569 (UNCONDITIONAL_JUMP)  ; LAB_00409569
    LEA EAX,[ESP + 0xb8]                ; 00409686
        ;   Label: LAB_00409686
    PUSH EAX                            ; 0040968d
    LEA EAX,[ESP + 0xd4]                ; 0040968e
    PUSH EAX                            ; 00409695
    LEA EAX,[ESP + 0x9c]                ; 00409696
    MOV EDX,dword ptr [EBP + 0x14]      ; 0040969d
    PUSH EAX                            ; 004096a0
    MOV ECX,dword ptr [EBP + 0x14]      ; 004096a1
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 004096a4
    PUSH ECX                            ; 004096aa
    CALL dword ptr [EDX + 0xc0]         ; 004096ab
    JMP 0x00409569                      ; 004096b1
        ;   XREF to: 00409569 (UNCONDITIONAL_JUMP)  ; LAB_00409569
    JBE 0x00409660                      ; 004096b6
        ;   XREF to: 00409660 (CONDITIONAL_JUMP)  ; LAB_00409660
        ;   Label: LAB_004096b6
    CMP EDI,0x3                         ; 004096b8
    JZ 0x00409686                       ; 004096bb
        ;   XREF to: 00409686 (CONDITIONAL_JUMP)  ; LAB_00409686
    MOV EAX,0x5ca5c2                    ; 004096bd | = "..\\core\\actor.cpp"
        ;   Label: LAB_004096bd
    MOV EDX,0x4ab                       ; 004096c2
    PUSH 0x5ca5d4                       ; 004096c7 | = "CDemonActor::rayIntersect - Invalid c..."
    MOV [0x01d046a0],EAX                ; 004096cc | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 004096d1 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004096d7
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004096dc
    JMP 0x0040957e                      ; 004096df
        ;   XREF to: 0040957e (UNCONDITIONAL_JUMP)  ; LAB_0040957e
    MOV EAX,dword ptr [EBP + 0x24]      ; 004096e4
        ;   Label: LAB_004096e4
    MOV ESI,dword ptr [EAX + 0x20]      ; 004096e7
    TEST ESI,ESI                        ; 004096ea
    JNZ 0x00409761                      ; 004096ec
        ;   XREF to: 00409761 (CONDITIONAL_JUMP)  ; LAB_00409761
    CMP dword ptr [EAX + 0x24],0x0      ; 004096ee
    JZ 0x004095d5                       ; 004096f2
        ;   XREF to: 004095d5 (CONDITIONAL_JUMP)  ; LAB_004095d5
    LEA EAX,[ESP + 0xb8]                ; 004096f8
    PUSH EAX                            ; 004096ff
    LEA EAX,[ESP + 0xd4]                ; 00409700
    PUSH EAX                            ; 00409707
    LEA EAX,[ESP + 0x9c]                ; 00409708
    PUSH EAX                            ; 0040970f
    MOV EAX,dword ptr [EBP + 0x24]      ; 00409710
    PUSH ESI                            ; 00409713
    MOV EDX,dword ptr [EAX + 0x24]      ; 00409714
    PUSH EDX                            ; 00409717
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 00409718
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040971d
    PUSH EAX                            ; 00409720
    CALL core_dmodel.cpp_FUN_0044f020   ; 00409721
        ;   XREF to: 0044f020 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_0044f020()
    MOV dword ptr [ESP + 0x118],EAX     ; 00409726
    FLD float ptr [ESP + 0x118]         ; 0040972d
    ADD ESP,0x14                        ; 00409734
    FLDZ                                ; 00409737
    FXCH                                ; 00409739
    FST float ptr [ESP + 0x18]          ; 0040973b
    FSTP double ptr [ESP]               ; 0040973f
    FCOMP double ptr [ESP]              ; 00409742
    FNSTSW AX                           ; 00409745
    SAHF                                ; 00409747
    JA 0x004093b9                       ; 00409748
        ;   XREF to: 004093b9 (CONDITIONAL_JUMP)  ; LAB_004093b9
    FLD1                                ; 0040974e
    FCOMP double ptr [ESP]              ; 00409750
    FNSTSW AX                           ; 00409753
    SAHF                                ; 00409755
    JNC 0x004095d5                      ; 00409756
        ;   XREF to: 004095d5 (CONDITIONAL_JUMP)  ; LAB_004095d5
    JMP 0x004093b9                      ; 0040975c
        ;   XREF to: 004093b9 (UNCONDITIONAL_JUMP)  ; LAB_004093b9
    LEA EAX,[ESP + 0xd0]                ; 00409761
        ;   Label: LAB_00409761
    PUSH EAX                            ; 00409768
    LEA EAX,[ESP + 0x98]                ; 00409769
    PUSH EAX                            ; 00409770
    MOV EAX,dword ptr [EBP + 0x24]      ; 00409771
    MOV ESI,dword ptr [EAX + 0x20]      ; 00409774
    PUSH ESI                            ; 00409777
    CALL core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_005481d0 ; 00409778
        ;   XREF to: 005481d0 (UNCONDITIONAL_CALL)  ; float core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_005481d0(CDeformableModelInstance * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction)
    MOV dword ptr [ESP + 0x110],EAX     ; 0040977d
    FLD float ptr [ESP + 0x110]         ; 00409784
    ADD ESP,0xc                         ; 0040978b
    FLDZ                                ; 0040978e
    FXCH                                ; 00409790
    FST float ptr [ESP + 0x18]          ; 00409792
    FSTP double ptr [ESP + 0x10]        ; 00409796
    FCOMP double ptr [ESP + 0x10]       ; 0040979a
    FNSTSW AX                           ; 0040979e
    SAHF                                ; 004097a0
    JA 0x004093b9                       ; 004097a1
        ;   XREF to: 004093b9 (CONDITIONAL_JUMP)  ; LAB_004093b9
    FLD1                                ; 004097a7
    FCOMP double ptr [ESP + 0x10]       ; 004097a9
    FNSTSW AX                           ; 004097ad
    SAHF                                ; 004097af
    JC 0x004093b9                       ; 004097b0
        ;   XREF to: 004093b9 (CONDITIONAL_JUMP)  ; LAB_004093b9
    MOV EAX,[0x020ccfdc]                ; 004097b6 | DAT_020ccfdc
    MOV dword ptr [EBX + 0xc],EAX       ; 004097bb
    MOV EAX,[0x020ccfec]                ; 004097be | DAT_020ccfec
    MOV dword ptr [EBX + 0x10],EAX      ; 004097c3
    MOV EAX,[0x020ccff0]                ; 004097c6 | DAT_020ccff0
    PUSH EAX                            ; 004097cb
    MOV dword ptr [EBX + 0x14],EAX      ; 004097cc
    MOV EAX,[0x020ccfec]                ; 004097cf | DAT_020ccfec
    PUSH EAX                            ; 004097d4
    MOV EAX,dword ptr [EBP + 0x24]      ; 004097d5
    MOV EDX,dword ptr [EAX + 0x20]      ; 004097d8
    PUSH EDX                            ; 004097db
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 004097dc
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004097e1
    PUSH EAX                            ; 004097e4
    CALL core_skeleton.cpp_CDeformableModel_findMaxWeightBone_FUN_00544bb0 ; 004097e5
        ;   XREF to: 00544bb0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findMaxWeightBone_FUN_00544bb0(CDeformableModel * this_ptr, int lod_level, int triangle_index)
    MOV dword ptr [EBX + 0x18],EAX      ; 004097ea
    LEA EAX,[ESP + 0xc4]                ; 004097ed
    ADD ESP,0xc                         ; 004097f4
    CMP EAX,0x20ccfe0                   ; 004097f7
    JZ 0x004095d5                       ; 004097fc
        ;   XREF to: 004095d5 (CONDITIONAL_JUMP)  ; LAB_004095d5
    MOV EAX,[0x020ccfe0]                ; 00409802 | DAT_020ccfe0
    MOV dword ptr [ESP + 0xb8],EAX      ; 00409807
    MOV EAX,[0x020ccfe4]                ; 0040980e | DAT_020ccfe4
    MOV dword ptr [ESP + 0xbc],EAX      ; 00409813
    MOV EAX,[0x020ccfe8]                ; 0040981a | DAT_020ccfe8
    MOV dword ptr [ESP + 0xc0],EAX      ; 0040981f
    JMP 0x004095d5                      ; 00409826
        ;   XREF to: 004095d5 (UNCONDITIONAL_JUMP)  ; LAB_004095d5

