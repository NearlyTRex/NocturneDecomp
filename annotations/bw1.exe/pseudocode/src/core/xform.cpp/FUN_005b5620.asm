; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_FUN_005b5620(CMatrix3x4f *output_matrix,CVector3f *position,CVector3f *euler_angles)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   output_matrix
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   euler_angles
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[13]:
;   core_bodypart.cpp_CBodyPart_applyRotation_FUN_0041a200 at 0041a438
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_004263d0 at 004264e1
;   core_charactr.cpp_CCharacter_addDamageDecal_FUN_00430440 at 004307a6
;   core_charactr.cpp_CCharacter_computePickup_FUN_00432690 at 004326d6
;   core_cloth.cpp_CCloth_orientBoneToChild_FUN_0043fa20 at 0043fb26
;   core_fire.cpp_CBulletHole_init_FUN_004ac3e0 at 004ac54f
;   core_ladder.cpp_CLadder_cacheRelativePosition_FUN_004fd750 at 004fd79b
;   core_mimic.cpp_CMimic_updatePose_FUN_0050f7e0 at 0050f979
;   core_platfrm.cpp_CPlatform_attachActor_FUN_0053adb0 at 0053ae38
;   core_platfrm.cpp_CPlatform_process_FUN_00539810 at 00539a21
;   ... and 3 more
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045fd80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b5620
        ;   Label: core_xform.cpp_FUN_005b5620
    PUSH ESI                            ; 005b5621
    PUSH EDI                            ; 005b5622
    SUB ESP,0x18                        ; 005b5623
    MOV EBX,dword ptr [ESP + 0x28]      ; 005b5626
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005b562a
    MOV EDI,dword ptr [ESP + 0x30]      ; 005b562e
    PUSH EDI                            ; 005b5632
    LEA EAX,[ESP + 0x4]                 ; 005b5633
    PUSH EAX                            ; 005b5637
    LEA EAX,[ESP + 0x14]                ; 005b5638
    PUSH EAX                            ; 005b563c
    CALL core_dirmat.cpp_FUN_0045fd80   ; 005b563d
        ;   XREF to: 0045fd80 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045fd80()
    ADD ESP,0xc                         ; 005b5642
    LEA EAX,[EDI + 0x8]                 ; 005b5645
    PUSH EAX                            ; 005b5648
    LEA EAX,[ESP + 0x8]                 ; 005b5649
    PUSH EAX                            ; 005b564d
    LEA EAX,[ESP + 0x18]                ; 005b564e
    PUSH EAX                            ; 005b5652
    CALL core_dirmat.cpp_FUN_0045fd80   ; 005b5653
        ;   XREF to: 0045fd80 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045fd80()
    ADD ESP,0xc                         ; 005b5658
    ADD EDI,0x4                         ; 005b565b
    PUSH EDI                            ; 005b565e
    LEA EAX,[ESP + 0xc]                 ; 005b565f
    PUSH EAX                            ; 005b5663
    LEA EAX,[ESP + 0x1c]                ; 005b5664
    PUSH EAX                            ; 005b5668
    CALL core_dirmat.cpp_FUN_0045fd80   ; 005b5669
        ;   XREF to: 0045fd80 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045fd80()
    ADD ESP,0xc                         ; 005b566e
    FLD float ptr [ESP + 0x14]          ; 005b5671
    FMUL float ptr [ESP + 0xc]          ; 005b5675
    FMUL float ptr [ESP + 0x10]         ; 005b5679
    FLD float ptr [ESP + 0x8]           ; 005b567d
    FMUL float ptr [ESP + 0x4]          ; 005b5681
    FADDP                               ; 005b5685
    FSTP float ptr [EBX]                ; 005b5687
    FLD float ptr [ESP + 0x14]          ; 005b5689
    FMUL float ptr [ESP + 0xc]          ; 005b568d
    FMUL float ptr [ESP + 0x4]          ; 005b5691
    FLD float ptr [ESP + 0x8]           ; 005b5695
    FCHS                                ; 005b5699
    FMUL float ptr [ESP + 0x10]         ; 005b569b
    FADDP                               ; 005b569f
    FSTP float ptr [EBX + 0x10]         ; 005b56a1
    FLD float ptr [ESP + 0x14]          ; 005b56a4
    FMUL float ptr [ESP]                ; 005b56a8
    FSTP float ptr [EBX + 0x20]         ; 005b56ab
    FLD float ptr [ESP + 0x10]          ; 005b56ae
    FMUL float ptr [ESP]                ; 005b56b2
    FSTP float ptr [EBX + 0x4]          ; 005b56b5
    FLD float ptr [ESP + 0x4]           ; 005b56b8
    FMUL float ptr [ESP]                ; 005b56bc
    FSTP float ptr [EBX + 0x14]         ; 005b56bf
    FLD float ptr [ESP + 0xc]           ; 005b56c2
    FCHS                                ; 005b56c6
    FSTP float ptr [EBX + 0x24]         ; 005b56c8
    FLD float ptr [ESP + 0x8]           ; 005b56cb
    FMUL float ptr [ESP + 0xc]          ; 005b56cf
    FMUL float ptr [ESP + 0x10]         ; 005b56d3
    FLD float ptr [ESP + 0x14]          ; 005b56d7
    FCHS                                ; 005b56db
    FMUL float ptr [ESP + 0x4]          ; 005b56dd
    FADDP                               ; 005b56e1
    FSTP float ptr [EBX + 0x8]          ; 005b56e3
    FLD float ptr [ESP + 0x8]           ; 005b56e6
    FMUL float ptr [ESP + 0xc]          ; 005b56ea
    FMUL float ptr [ESP + 0x4]          ; 005b56ee
    FLD float ptr [ESP + 0x10]          ; 005b56f2
    FMUL float ptr [ESP + 0x14]         ; 005b56f6
    FADDP                               ; 005b56fa
    FSTP float ptr [EBX + 0x18]         ; 005b56fc
    FLD float ptr [ESP + 0x8]           ; 005b56ff
    FMUL float ptr [ESP]                ; 005b5703
    FSTP float ptr [EBX + 0x28]         ; 005b5706
    FLD float ptr [ESI + 0x4]           ; 005b5709
    FMUL float ptr [EBX + 0x4]          ; 005b570c
    FLD float ptr [ESI]                 ; 005b570f
    FMUL float ptr [EBX]                ; 005b5711
    FADDP                               ; 005b5713
    FLD float ptr [ESI + 0x8]           ; 005b5715
    FMUL float ptr [EBX + 0x8]          ; 005b5718
    FADDP                               ; 005b571b
    FCHS                                ; 005b571d
    FSTP float ptr [EBX + 0xc]          ; 005b571f
    FLD float ptr [ESI + 0x4]           ; 005b5722
    FMUL float ptr [EBX + 0x14]         ; 005b5725
    FLD float ptr [ESI]                 ; 005b5728
    FMUL float ptr [EBX + 0x10]         ; 005b572a
    FADDP                               ; 005b572d
    FLD float ptr [ESI + 0x8]           ; 005b572f
    FMUL float ptr [EBX + 0x18]         ; 005b5732
    FADDP                               ; 005b5735
    FCHS                                ; 005b5737
    FSTP float ptr [EBX + 0x1c]         ; 005b5739
    FLD float ptr [ESI + 0x4]           ; 005b573c
    FMUL float ptr [EBX + 0x24]         ; 005b573f
    FLD float ptr [ESI]                 ; 005b5742
    FMUL float ptr [EBX + 0x20]         ; 005b5744
    FADDP                               ; 005b5747
    FLD float ptr [ESI + 0x8]           ; 005b5749
    FMUL float ptr [EBX + 0x28]         ; 005b574c
    FADDP                               ; 005b574f
    FCHS                                ; 005b5751
    FSTP float ptr [EBX + 0x2c]         ; 005b5753
    ADD ESP,0x18                        ; 005b5756
    POP EDI                             ; 005b5759
    POP ESI                             ; 005b575a
    POP EBX                             ; 005b575b
    RET                                 ; 005b575c

