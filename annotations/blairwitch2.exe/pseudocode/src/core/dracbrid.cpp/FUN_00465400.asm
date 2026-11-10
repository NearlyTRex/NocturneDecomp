; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dracbrid_cpp_FUN_00465400(CDraculaBride *this_ptr,char *sound_name,float volume)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
; float            Stack[0xc]:4   volume
; Local Variables:
; undefined        Stack[-0x1ac]:1  local_1ac
; undefined        Stack[-0xe4]:1  local_e4
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_dracbrid.cpp_CDraculaBride_processDamage_FUN_00464f60 at 00465124
;   core_dracbrid.cpp_CDraculaBride_process_FUN_00462ff0 at 0046357d
;
; Referenced Globals:
;   undefined4 DAT_0061c068
;   undefined4 DAT_01ba5778
;   undefined4 DAT_01ba5798
;   undefined4 DAT_01ba579c
;   undefined4 DAT_01ba57a0
;   undefined4 DAT_01ba57a4
;   undefined4 DAT_01ba57a8
;   undefined4 DAT_01ba57ac
;   undefined4 DAT_01ba57b0
;   undefined4 DAT_01ba57b4
;   undefined4 DAT_01ba57b8
;   undefined4 DAT_01ba57bc
;   undefined4 DAT_01ba57c0
;   undefined4 DAT_01ba57c4
;   undefined4 DAT_01ba57c8
;   ... and 12 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_skeleton.cpp_FUN_00546a90
;   core_sound.cpp_FUN_005593d0
;   core_spline.cpp_FUN_00561310
;   core_spline.cpp_FUN_00561540
;   core_spline.cpp_FUN_00561780
;   sound_sndmain.cpp_FUN_005506b0
;   sound_sndmain.cpp_FUN_00550b70
;   sound_sndmain.cpp_isSoundBusy_FUN_00552b20
;   sound_sndmain.cpp_popSfxOptions_FUN_005504d0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00550450
;   sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00550170
;   sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00550210
;   sound_sndmain.cpp_setNextSfxVolume_FUN_00550270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465400
        ;   Label: core_dracbrid.cpp_FUN_00465400
    PUSH ESI                            ; 00465401
    PUSH EBP                            ; 00465402
    SUB ESP,0x1a0                       ; 00465403
    PUSH 0x40e00000                     ; 00465409
    PUSH 0x3f800000                     ; 0046540e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00465413
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1a4],EAX     ; 00465418
    FLD float ptr [ESP + 0x1a4]         ; 0046541f
    ADD ESP,0x8                         ; 00465426
    MOV EAX,dword ptr [ESP + 0x1b0]     ; 00465429
    FSTP float ptr [EAX + 0x10b8c]      ; 00465430
    CALL sound_sndmain.cpp_isSoundBusy_FUN_00552b20 ; 00465436
        ;   XREF to: 00552b20 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundBusy_FUN_00552b20()
    TEST EAX,EAX                        ; 0046543b
    JZ 0x00465460                       ; 0046543d
        ;   XREF to: 00465460 (CONDITIONAL_JUMP)  ; LAB_00465460
    MOV EBX,0x1ba5798                   ; 0046543f
    XOR ESI,ESI                         ; 00465444
    MOV EDX,dword ptr [EBX]             ; 00465446 | DAT_01ba5798 | DAT_01ba57ec
        ;   Label: LAB_00465446
    PUSH EDX                            ; 00465448
    MOV EBP,EBX                         ; 00465449
    CALL sound_sndmain.cpp_FUN_00550b70 ; 0046544b
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00465450
    TEST EAX,EAX                        ; 00465453
    JZ 0x0046546a                       ; 00465455
        ;   XREF to: 0046546a (CONDITIONAL_JUMP)  ; LAB_0046546a
    INC ESI                             ; 00465457
    ADD EBX,0x54                        ; 00465458
    CMP ESI,0x6                         ; 0046545b
    JL 0x00465446                       ; 0046545e
        ;   XREF to: 00465446 (CONDITIONAL_JUMP)  ; LAB_00465446
    ADD ESP,0x1a0                       ; 00465460
        ;   Label: LAB_00465460
    POP EBP                             ; 00465466
    POP ESI                             ; 00465467
    POP EBX                             ; 00465468
    RET                                 ; 00465469
    PUSH EDI                            ; 0046546a
        ;   Label: LAB_0046546a
    MOV ECX,dword ptr [0x01ba5778]      ; 0046546b | DAT_01ba5778
    MOV dword ptr [EBX + 0x1c],EAX      ; 00465471 | DAT_01ba57b4
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 00465474
    PUSH ECX                            ; 0046547b
    ADD EAX,0x2b4                       ; 0046547c
    PUSH EAX                            ; 00465481
    LEA ESI,[ESP + 0x124]               ; 00465482
    LEA EDI,[ESP + 0x13c]               ; 00465489
    CALL core_skeleton.cpp_FUN_00546a90 ; 00465490
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[ESP + 0x124]               ; 00465495
    ADD ESP,0x8                         ; 0046549c
    LEA EAX,[ESP + 0x134]               ; 0046549f
    MOVSD ES:EDI,ESI                    ; 004654a6
    MOVSD ES:EDI,ESI                    ; 004654a7
    MOVSD ES:EDI,ESI                    ; 004654a8
    PUSH EAX                            ; 004654a9
    MOV ESI,dword ptr [ESP + 0x1b8]     ; 004654aa
    ADD EBX,0x2c                        ; 004654b1
    PUSH ESI                            ; 004654b4
    LEA ESI,[ESP + 0x130]               ; 004654b5
    LEA EDI,[ESP + 0x16c]               ; 004654bc
    CALL core_actor.cpp_FUN_00408d70    ; 004654c3
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x130]               ; 004654c8
    ADD ESP,0x8                         ; 004654cf
    LEA EAX,[ESP + 0x164]               ; 004654d2
    MOVSD ES:EDI,ESI                    ; 004654d9
    MOVSD ES:EDI,ESI                    ; 004654da
    MOVSD ES:EDI,ESI                    ; 004654db
    CMP EBX,EAX                         ; 004654dc
    JZ 0x004654fd                       ; 004654de
        ;   XREF to: 004654fd (CONDITIONAL_JUMP)  ; LAB_004654fd
    MOV EAX,dword ptr [ESP + 0x164]     ; 004654e0
    MOV dword ptr [EBX],EAX             ; 004654e7 | DAT_01ba57c4
    MOV EAX,dword ptr [ESP + 0x168]     ; 004654e9
    MOV dword ptr [EBX + 0x4],EAX       ; 004654f0 | DAT_01ba57c8
    MOV EAX,dword ptr [ESP + 0x16c]     ; 004654f3
    MOV dword ptr [EBX + 0x8],EAX       ; 004654fa | DAT_01ba57cc
    PUSH 0x40a00000                     ; 004654fd
        ;   Label: LAB_004654fd
    LEA EDI,[ESP + 0xfc]                ; 00465502
    LEA ESI,[EBP + 0x2c]                ; 00465509
    PUSH 0xc0a00000                     ; 0046550c
    MOVSD ES:EDI,ESI                    ; 00465511 | DAT_01ba57c4
    MOVSD ES:EDI,ESI                    ; 00465512 | DAT_01ba57c8
    MOVSD ES:EDI,ESI                    ; 00465513 | DAT_01ba57cc
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00465514
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1a8],EAX     ; 00465519
    FLD float ptr [ESP + 0x1a8]         ; 00465520
    ADD ESP,0x8                         ; 00465527
    PUSH 0x40000000                     ; 0046552a
    FADD float ptr [ESP + 0xfc]         ; 0046552f
    PUSH 0xc0000000                     ; 00465536
    FSTP float ptr [ESP + 0x100]        ; 0046553b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00465542
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1a8],EAX     ; 00465547
    FLD float ptr [ESP + 0x1a8]         ; 0046554e
    ADD ESP,0x8                         ; 00465555
    LEA EBX,[EBP + 0x20]                ; 00465558
    PUSH 0x40a00000                     ; 0046555b
    FADD float ptr [ESP + 0x100]        ; 00465560
    PUSH 0xc0a00000                     ; 00465567
    FSTP float ptr [ESP + 0x104]        ; 0046556c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00465573
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1a8],EAX     ; 00465578
    LEA EDI,[ESP + 0x118]               ; 0046557f
    FLD float ptr [ESP + 0x1a8]         ; 00465586
    ADD ESP,0x8                         ; 0046558d
    LEA ESI,[ESP + 0xf8]                ; 00465590
    FADD float ptr [ESP + 0x100]        ; 00465597
    LEA EAX,[ESP + 0x110]               ; 0046559e
    FSTP float ptr [ESP + 0x100]        ; 004655a5
    MOVSD ES:EDI,ESI                    ; 004655ac
    MOVSD ES:EDI,ESI                    ; 004655ad
    MOVSD ES:EDI,ESI                    ; 004655ae
    CMP EBX,EAX                         ; 004655af
    JZ 0x004655d0                       ; 004655b1
        ;   XREF to: 004655d0 (CONDITIONAL_JUMP)  ; LAB_004655d0
    MOV EAX,dword ptr [ESP + 0x110]     ; 004655b3
    MOV dword ptr [EBX],EAX             ; 004655ba | DAT_01ba57b8
    MOV EAX,dword ptr [ESP + 0x114]     ; 004655bc
    MOV dword ptr [EBX + 0x4],EAX       ; 004655c3 | DAT_01ba57bc
    MOV EAX,dword ptr [ESP + 0x118]     ; 004655c6
    MOV dword ptr [EBX + 0x8],EAX       ; 004655cd | DAT_01ba57c0
    PUSH 0x40a00000                     ; 004655d0
        ;   Label: LAB_004655d0
    LEA EDI,[ESP + 0x174]               ; 004655d5
    LEA ESI,[EBP + 0x2c]                ; 004655dc
    PUSH 0xc0a00000                     ; 004655df
    MOVSD ES:EDI,ESI                    ; 004655e4 | DAT_01ba57c4
    MOVSD ES:EDI,ESI                    ; 004655e5 | DAT_01ba57c8
    MOVSD ES:EDI,ESI                    ; 004655e6 | DAT_01ba57cc
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004655e7
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1a8],EAX     ; 004655ec
    FLD float ptr [ESP + 0x1a8]         ; 004655f3
    ADD ESP,0x8                         ; 004655fa
    PUSH 0x40000000                     ; 004655fd
    FADD float ptr [ESP + 0x174]        ; 00465602
    PUSH 0xc0000000                     ; 00465609
    FSTP float ptr [ESP + 0x178]        ; 0046560e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00465615
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0046561a
    FLD float ptr [ESP + 0x1a8]         ; 00465621
    ADD ESP,0x8                         ; 00465628
    LEA EBX,[EBP + 0x38]                ; 0046562b
    PUSH 0x40a00000                     ; 0046562e
    FADD float ptr [ESP + 0x178]        ; 00465633
    PUSH 0xc0a00000                     ; 0046563a
    FSTP float ptr [ESP + 0x17c]        ; 0046563f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00465646
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0046564b
    LEA EDI,[ESP + 0x148]               ; 00465652
    FLD float ptr [ESP + 0x1a8]         ; 00465659
    ADD ESP,0x8                         ; 00465660
    LEA ESI,[ESP + 0x170]               ; 00465663
    FADD float ptr [ESP + 0x178]        ; 0046566a
    LEA EAX,[ESP + 0x140]               ; 00465671
    FSTP float ptr [ESP + 0x178]        ; 00465678
    MOVSD ES:EDI,ESI                    ; 0046567f
    MOVSD ES:EDI,ESI                    ; 00465680
    MOVSD ES:EDI,ESI                    ; 00465681
    CMP EBX,EAX                         ; 00465682
    JZ 0x004656a3                       ; 00465684
        ;   XREF to: 004656a3 (CONDITIONAL_JUMP)  ; LAB_004656a3
    MOV EAX,dword ptr [ESP + 0x140]     ; 00465686
    MOV dword ptr [EBX],EAX             ; 0046568d | DAT_01ba57d0
    MOV EAX,dword ptr [ESP + 0x144]     ; 0046568f
    MOV dword ptr [EBX + 0x4],EAX       ; 00465696 | DAT_01ba57d4
    MOV EAX,dword ptr [ESP + 0x148]     ; 00465699
    MOV dword ptr [EBX + 0x8],EAX       ; 004656a0 | DAT_01ba57d8
    PUSH 0x40a00000                     ; 004656a3
        ;   Label: LAB_004656a3
    LEA EDI,[ESP + 0x180]               ; 004656a8
    MOV ESI,0x1fc783c                   ; 004656af
    PUSH 0xc0a00000                     ; 004656b4
    MOVSD ES:EDI,ESI                    ; 004656b9 | g_CDemonCameraInstance.base.position
    MOVSD ES:EDI,ESI                    ; 004656ba | g_CDemonCameraInstance.base.position+4
    MOVSD ES:EDI,ESI                    ; 004656bb | g_CDemonCameraInstance.base.position+8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004656bc
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    LEA EDI,[ESP + 0xf4]                ; 004656c1
    MOV dword ptr [ESP + 0x1a8],EAX     ; 004656c8
    LEA ESI,[ESP + 0x184]               ; 004656cf
    FLD float ptr [ESP + 0x1a8]         ; 004656d6
    MOVSD ES:EDI,ESI                    ; 004656dd
    MOVSD ES:EDI,ESI                    ; 004656de
    MOVSD ES:EDI,ESI                    ; 004656df
    ADD ESP,0x8                         ; 004656e0
    PUSH 0x40000000                     ; 004656e3
    FADD float ptr [ESP + 0xf0]         ; 004656e8
    PUSH 0xc0000000                     ; 004656ef
    FSTP float ptr [ESP + 0xf4]         ; 004656f4
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004656fb
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1a8],EAX     ; 00465700
    FLD float ptr [ESP + 0x1a8]         ; 00465707
    ADD ESP,0x8                         ; 0046570e
    LEA EBX,[EBP + 0x44]                ; 00465711
    PUSH 0x40a00000                     ; 00465714
    FADD float ptr [ESP + 0xf4]         ; 00465719
    PUSH 0xc0a00000                     ; 00465720
    FSTP float ptr [ESP + 0xf8]         ; 00465725
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0046572c
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1a8],EAX     ; 00465731
    LEA EDI,[ESP + 0x190]               ; 00465738
    FLD float ptr [ESP + 0x1a8]         ; 0046573f
    ADD ESP,0x8                         ; 00465746
    LEA ESI,[ESP + 0xec]                ; 00465749
    FADD float ptr [ESP + 0xf4]         ; 00465750
    LEA EAX,[ESP + 0x188]               ; 00465757
    FSTP float ptr [ESP + 0xf4]         ; 0046575e
    MOVSD ES:EDI,ESI                    ; 00465765
    MOVSD ES:EDI,ESI                    ; 00465766
    MOVSD ES:EDI,ESI                    ; 00465767
    CMP EBX,EAX                         ; 00465768
    JZ 0x00465789                       ; 0046576a
        ;   XREF to: 00465789 (CONDITIONAL_JUMP)  ; LAB_00465789
    MOV EAX,dword ptr [ESP + 0x188]     ; 0046576c
    MOV dword ptr [EBX],EAX             ; 00465773 | DAT_01ba57dc
    MOV EAX,dword ptr [ESP + 0x18c]     ; 00465775
    MOV dword ptr [EBX + 0x4],EAX       ; 0046577c | DAT_01ba57e0
    MOV EAX,dword ptr [ESP + 0x190]     ; 0046577f
    MOV dword ptr [EBX + 0x8],EAX       ; 00465786 | DAT_01ba57e4
    PUSH 0x0                            ; 00465789
        ;   Label: LAB_00465789
    LEA EAX,[ESP + 0xd0]                ; 0046578b
    PUSH dword ptr [EBP + 0x1c]         ; 00465792 | DAT_01ba57b4
    PUSH EAX                            ; 00465795
    CALL core_spline.cpp_FUN_00561310   ; 00465796
        ;   XREF to: 00561310 (UNCONDITIONAL_CALL)  ; void core_spline.cpp_FUN_00561310(float * out_basis, float t, float tension)
    LEA EDX,[EBP + 0x20]                ; 0046579b
    LEA ESI,[EBP + 0x2c]                ; 0046579e
    LEA EBX,[EBP + 0x38]                ; 004657a1
    ADD ESP,0xc                         ; 004657a4
    LEA EAX,[EBP + 0x44]                ; 004657a7
    PUSH EAX                            ; 004657aa | DAT_01ba57dc
    PUSH EBX                            ; 004657ab | DAT_01ba57d0
    PUSH ESI                            ; 004657ac | DAT_01ba57c4
    PUSH EDX                            ; 004657ad | DAT_01ba57b8
    LEA EAX,[ESP + 0xdc]                ; 004657ae
    LEA EDI,[ESP + 0x1a4]               ; 004657b5
    PUSH EAX                            ; 004657bc
    LEA ESI,[ESP + 0x16c]               ; 004657bd
    LEA EBX,[EBP + 0x4]                 ; 004657c4
    CALL core_spline.cpp_FUN_00561540   ; 004657c7
        ;   XREF to: 00561540 (UNCONDITIONAL_CALL)  ; undefined core_spline.cpp_FUN_00561540()
    LEA ESI,[ESP + 0x16c]               ; 004657cc
    ADD ESP,0x14                        ; 004657d3
    LEA EAX,[ESP + 0x194]               ; 004657d6
    MOVSD ES:EDI,ESI                    ; 004657dd
    MOVSD ES:EDI,ESI                    ; 004657de
    MOVSD ES:EDI,ESI                    ; 004657df
    CMP EBX,EAX                         ; 004657e0
    JZ 0x00465801                       ; 004657e2
        ;   XREF to: 00465801 (CONDITIONAL_JUMP)  ; LAB_00465801
    MOV EAX,dword ptr [ESP + 0x194]     ; 004657e4
    MOV dword ptr [EBX],EAX             ; 004657eb | DAT_01ba579c
    MOV EAX,dword ptr [ESP + 0x198]     ; 004657ed
    MOV dword ptr [EBX + 0x4],EAX       ; 004657f4 | DAT_01ba57a0
    MOV EAX,dword ptr [ESP + 0x19c]     ; 004657f7
    MOV dword ptr [EBX + 0x8],EAX       ; 004657fe | DAT_01ba57a4
    LEA EAX,[EBP + 0x44]                ; 00465801
        ;   Label: LAB_00465801
    PUSH EAX                            ; 00465804 | DAT_01ba57dc
    LEA EAX,[EBP + 0x38]                ; 00465805
    PUSH EAX                            ; 00465808 | DAT_01ba57d0
    LEA EAX,[EBP + 0x2c]                ; 00465809
    PUSH EAX                            ; 0046580c | DAT_01ba57c4
    LEA EAX,[EBP + 0x20]                ; 0046580d
    PUSH EAX                            ; 00465810 | DAT_01ba57b8
    LEA EAX,[ESP + 0xdc]                ; 00465811
    LEA ESI,[ESP + 0x114]               ; 00465818
    PUSH EAX                            ; 0046581f
    LEA EDI,[ESP + 0x160]               ; 00465820
    LEA EBX,[EBP + 0x10]                ; 00465827
    CALL core_spline.cpp_FUN_00561780   ; 0046582a
        ;   XREF to: 00561780 (UNCONDITIONAL_CALL)  ; undefined core_spline.cpp_FUN_00561780()
    LEA ESI,[ESP + 0x118]               ; 0046582f
    ADD ESP,0x14                        ; 00465836
    LEA EAX,[ESP + 0x14c]               ; 00465839
    MOVSD ES:EDI,ESI                    ; 00465840
    MOVSD ES:EDI,ESI                    ; 00465841
    MOVSD ES:EDI,ESI                    ; 00465842
    CMP EBX,EAX                         ; 00465843
    JZ 0x00465864                       ; 00465845
        ;   XREF to: 00465864 (CONDITIONAL_JUMP)  ; LAB_00465864
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00465847
    MOV dword ptr [EBX],EAX             ; 0046584e | DAT_01ba57a8
    MOV EAX,dword ptr [ESP + 0x150]     ; 00465850
    MOV dword ptr [EBX + 0x4],EAX       ; 00465857 | DAT_01ba57ac
    MOV EAX,dword ptr [ESP + 0x154]     ; 0046585a
    MOV dword ptr [EBX + 0x8],EAX       ; 00465861 | DAT_01ba57b0
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 00465864
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
        ;   Label: LAB_00465864
    LEA EAX,[EBP + 0x4]                 ; 00465869
    PUSH EAX                            ; 0046586c | DAT_01ba579c
    CALL sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00550170 ; 0046586d
        ;   XREF to: 00550170 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00550170(CVector3f * position_source_ptr)
    ADD ESP,0x4                         ; 00465872
    LEA EAX,[EBP + 0x10]                ; 00465875
    PUSH EAX                            ; 00465878 | DAT_01ba57a8
    CALL sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00550210 ; 00465879
        ;   XREF to: 00550210 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00550210(CVector3f * velocity_source_ptr)
    ADD ESP,0x4                         ; 0046587e
    PUSH dword ptr [ESP + 0x1bc]        ; 00465881
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_00550270 ; 00465888
        ;   XREF to: 00550270 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxVolume_FUN_00550270(float volume)
    ADD ESP,0x4                         ; 0046588d
    MOV EDI,dword ptr [ESP + 0x1b8]     ; 00465890
    PUSH EDI                            ; 00465897
    LEA EAX,[ESP + 0x8]                 ; 00465898
    PUSH EAX                            ; 0046589c
    MOV EAX,[0x0061c068]                ; 0046589d | DAT_0061c068
    PUSH EAX                            ; 004658a2
    CALL core_sound.cpp_FUN_005593d0    ; 004658a3
        ;   XREF to: 005593d0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_005593d0(CSound * this_ptr, char * out_result, char * wildcard_pattern)
    ADD ESP,0xc                         ; 004658a8
    LEA EAX,[ESP + 0x4]                 ; 004658ab
    PUSH EAX                            ; 004658af
    CALL sound_sndmain.cpp_FUN_005506b0 ; 004658b0
        ;   XREF to: 005506b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005506b0()
    ADD ESP,0x4                         ; 004658b5
    MOV dword ptr [EBP],EAX             ; 004658b8 | DAT_01ba5798
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 004658bb
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 004658c0
    MOV dword ptr [EBP + 0x50],EAX      ; 004658c7 | DAT_01ba57e8
    POP EDI                             ; 004658ca
    ADD ESP,0x1a0                       ; 004658cb
    POP EBP                             ; 004658d1
    POP ESI                             ; 004658d2
    POP EBX                             ; 004658d3
    RET                                 ; 004658d4

