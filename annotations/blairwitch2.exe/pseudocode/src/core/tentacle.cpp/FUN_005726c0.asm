; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tentacle_cpp_FUN_005726c0(CTentacle *param_1,float param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_CHero_CNPC_005ec48d
;   TerminatedCString s_CEnemy_CHero_CNPC_005ec498
;   undefined4 DAT_005ec4aa
;   undefined4 DAT_005ec4b2
;   undefined4 DAT_005ec4ba
;   undefined4 DAT_005ec4c2
;   undefined4 DAT_005ec4ca
;   undefined4 DAT_005ec4d2
;   undefined4 DAT_005ec4da
;   undefined4 DAT_005ec4e2
;   undefined4 DAT_005ec4ea
;   undefined4 DAT_005ec4f2
;   undefined4 DAT_005fcc78
;   CGore* g_CGorePtr = 01cb8284
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_0040cf60
;   core_actor.cpp_FUN_0040d0c0
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
;   core_charactr.cpp_FUN_00424470
;   core_charactr.cpp_FUN_00429e90
;   core_gore.cpp_FUN_004c9730
;   core_grave.cpp_FUN_004ca3e0
;   core_motion.cpp_CMotionController_advance_FUN_005030c0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
;   core_tentacle.cpp_CTentacle_findNearbyTarget_FUN_00573010
;   core_tentacle.cpp_FUN_005732e0
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005726c0
        ;   Label: core_tentacle.cpp_FUN_005726c0
    PUSH ESI                            ; 005726c1
    PUSH EDI                            ; 005726c2
    PUSH EBP                            ; 005726c3
    MOV EBP,ESP                         ; 005726c4
    SUB ESP,0x2a0                       ; 005726c6
    AND ESP,0xfffffff8                  ; 005726cc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005726cf
    PUSH dword ptr [EBP + 0x18]         ; 005726d2
    PUSH EBX                            ; 005726d5
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 005726d6
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005726db
    TEST EAX,EAX                        ; 005726de
    JZ 0x0057282b                       ; 005726e0
        ;   XREF to: 0057282b (CONDITIONAL_JUMP)  ; LAB_0057282b
    FLD float ptr [EBP + 0x18]          ; 005726e6
    LEA EAX,[EBX + 0x30]                ; 005726e9
    FMUL float ptr [EBX + 0x10a60]      ; 005726ec
    MOV dword ptr [ESP + 0x28c],EAX     ; 005726f2
    LEA EAX,[EBX + 0x10b38]             ; 005726f9
    MOV dword ptr [ESP + 0x290],EAX     ; 005726ff
    LEA EAX,[EBX + 0x20]                ; 00572706
    MOV dword ptr [ESP + 0x294],EAX     ; 00572709
    LEA EAX,[EBX + 0x2b4]               ; 00572710
    FSTP float ptr [ESP + 0x8]          ; 00572716
    MOV dword ptr [ESP + 0x298],EAX     ; 0057271a
    FLD float ptr [ESP + 0x8]           ; 00572721
        ;   Label: LAB_00572721
    FLDZ                                ; 00572725
    FCOMPP                              ; 00572727
    FNSTSW AX                           ; 00572729
    SAHF                                ; 0057272b
    JC 0x00572b5f                       ; 0057272c
        ;   XREF to: 00572b5f (CONDITIONAL_JUMP)  ; LAB_00572b5f
    MOV EDX,dword ptr [ESP + 0x298]     ; 00572732
    PUSH EDX                            ; 00572739
    CALL core_motion.cpp_FUN_005035c0   ; 0057273a
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0057273f
    ADD ESP,0x4                         ; 00572742
    CMP EAX,0x2                         ; 00572745
    JNC 0x00572f33                      ; 00572748
        ;   XREF to: 00572f33 (CONDITIONAL_JUMP)  ; LAB_00572f33
    TEST EAX,EAX                        ; 0057274e
    JNZ 0x005727df                      ; 00572750
        ;   XREF to: 005727df (CONDITIONAL_JUMP)  ; LAB_005727df
    FLD float ptr [EBX + 0x10af8]       ; 00572756
    FLDZ                                ; 0057275c
    MOV dword ptr [EBX + 0x10afc],EAX   ; 0057275e
    FCOMPP                              ; 00572764
    FNSTSW AX                           ; 00572766
    SAHF                                ; 00572768
    JNC 0x0057277a                      ; 00572769
        ;   XREF to: 0057277a (CONDITIONAL_JUMP)  ; LAB_0057277a
    FLD float ptr [EBX + 0x10af8]       ; 0057276b
    FSUB float ptr [EBP + 0x18]         ; 00572771
    FSTP float ptr [EBX + 0x10af8]      ; 00572774
    FLD float ptr [EBX + 0x10af8]       ; 0057277a
        ;   Label: LAB_0057277a
    FLDZ                                ; 00572780
    FCOMPP                              ; 00572782
    FNSTSW AX                           ; 00572784
    SAHF                                ; 00572786
    JC 0x005727df                       ; 00572787
        ;   XREF to: 005727df (CONDITIONAL_JUMP)  ; LAB_005727df
    MOV EAX,dword ptr [EBX + 0x10b00]   ; 00572789
    LEA ESI,[EBX + 0x2b4]               ; 0057278f
    TEST EAX,EAX                        ; 00572795
    JZ 0x00572b8d                       ; 00572797
        ;   XREF to: 00572b8d (CONDITIONAL_JUMP)  ; LAB_00572b8d
    PUSH 0x5ec48d                       ; 0057279d | = "CHero CNPC"
    PUSH EBX                            ; 005727a2
    CALL core_tentacle.cpp_CTentacle_findNearbyTarget_FUN_00573010 ; 005727a3
        ;   XREF to: 00573010 (UNCONDITIONAL_CALL)  ; int core_tentacle.cpp_CTentacle_findNearbyTarget_FUN_00573010(CTentacle * this_ptr, char * class_name)
    ADD ESP,0x8                         ; 005727a8
    TEST EAX,EAX                        ; 005727ab
    JZ 0x005727df                       ; 005727ad
        ;   XREF to: 005727df (CONDITIONAL_JUMP)  ; LAB_005727df
    PUSH 0x1                            ; 005727af
    PUSH 0x2                            ; 005727b1
    PUSH ESI                            ; 005727b3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005727b4
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005727b9
    MOV EDX,dword ptr [EBX + 0x10b00]   ; 005727bc
    PUSH EDX                            ; 005727c2
    MOV dword ptr [EBX + 0x10af8],0x0   ; 005727c3
    CALL core_grave.cpp_FUN_004ca3e0    ; 005727cd
        ;   XREF to: 004ca3e0 (UNCONDITIONAL_CALL)  ; void core_grave.cpp_FUN_004ca3e0(CGrave * this_ptr)
    ADD ESP,0x4                         ; 005727d2
    MOV dword ptr [EBX + 0x10b00],0x0   ; 005727d5
    FLD float ptr [EBP + 0x18]          ; 005727df
        ;   Label: LAB_005727df
    FDIV float ptr [0x005fcc78]         ; 005727e2 | DAT_005fcc78
    FADD float ptr [EBX + 0x10b04]      ; 005727e8
    FST float ptr [EBX + 0x10b04]       ; 005727ee
    FLD1                                ; 005727f4
    FCOMPP                              ; 005727f6
    FNSTSW AX                           ; 005727f8
    SAHF                                ; 005727fa
    JNC 0x00572807                      ; 005727fb
        ;   XREF to: 00572807 (CONDITIONAL_JUMP)  ; LAB_00572807
    MOV dword ptr [EBX + 0x10b04],0x3f800000 ; 005727fd
    PUSH EBX                            ; 00572807
        ;   Label: LAB_00572807
    CALL core_charactr.cpp_FUN_00424470 ; 00572808
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00424470(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0057280d
    LEA EAX,[EBX + 0x2b4]               ; 00572810
    PUSH EAX                            ; 00572816
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 00572817
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0057281c
    PUSH dword ptr [EBP + 0x18]         ; 0057281f
    PUSH EBX                            ; 00572822
    CALL core_charactr.cpp_FUN_00429e90 ; 00572823
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00572828
    MOV ESP,EBP                         ; 0057282b
        ;   Label: LAB_0057282b
    POP EBP                             ; 0057282d
    POP EDI                             ; 0057282e
    POP ESI                             ; 0057282f
    POP EBX                             ; 00572830
    RET                                 ; 00572831
    MOV EDI,dword ptr [EBX + 0x10a78]   ; 00572832
        ;   Label: LAB_00572832
    TEST EDI,EDI                        ; 00572838
    JZ 0x00572721                       ; 0057283a
        ;   XREF to: 00572721 (CONDITIONAL_JUMP)  ; LAB_00572721
    PUSH EDI                            ; 00572840
    MOV EDX,dword ptr [EDI + 0x2b0]     ; 00572841
    CALL dword ptr [EDX + 0xfc]         ; 00572847
    ADD ESP,0x4                         ; 0057284d
    TEST EAX,EAX                        ; 00572850
    JNZ 0x00572721                      ; 00572852
        ;   XREF to: 00572721 (CONDITIONAL_JUMP)  ; LAB_00572721
    MOV EAX,dword ptr [ESP + 0x298]     ; 00572858
    PUSH EAX                            ; 0057285f
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0 ; 00572860
        ;   XREF to: 00546ae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00572865
    PUSH EBX                            ; 00572868
    LEA ESI,[ESP + 0x10]                ; 00572869
    LEA EDI,[ESP + 0x190]               ; 0057286d
    CALL core_tentacle.cpp_FUN_005732e0 ; 00572874
        ;   XREF to: 005732e0 (UNCONDITIONAL_CALL)  ; undefined core_tentacle.cpp_FUN_005732e0()
    MOV ECX,0xc                         ; 00572879
    LEA ESI,[ESP + 0x10]                ; 0057287e
    ADD ESP,0x4                         ; 00572882
    LEA EAX,[ESP + 0x18c]               ; 00572885
    MOVSD.REP ES:EDI,ESI                ; 0057288c
    PUSH EAX                            ; 0057288e
    LEA ESI,[ESP + 0x1f0]               ; 0057288f
    LEA EDI,[ESP + 0x1c0]               ; 00572896
    CALL core_xform.cpp_FUN_00592720    ; 0057289d
        ;   XREF to: 00592720 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00592720()
    ADD ESP,0x4                         ; 005728a2
    LEA EAX,[ESP + 0x1bc]               ; 005728a5
    LEA ESI,[ESP + 0x1ec]               ; 005728ac
    PUSH EAX                            ; 005728b3
    MOVSD ES:EDI,ESI                    ; 005728b4
    MOVSD ES:EDI,ESI                    ; 005728b5
    MOVSD ES:EDI,ESI                    ; 005728b6
    PUSH EBX                            ; 005728b7
    LEA ESI,[ESP + 0x248]               ; 005728b8
    LEA EDI,[ESP + 0x26c]               ; 005728bf
    CALL core_actor.cpp_FUN_00408d70    ; 005728c6
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x248]               ; 005728cb
    ADD ESP,0x8                         ; 005728d2
    MOVSD ES:EDI,ESI                    ; 005728d5
    MOVSD ES:EDI,ESI                    ; 005728d6
    MOVSD ES:EDI,ESI                    ; 005728d7
    FLD float ptr [ESP + 0x264]         ; 005728d8
    FLD float ptr [ESP + 0x268]         ; 005728df
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 005728e6
    FLD float ptr [ESP + 0x26c]         ; 005728ec
    LEA EAX,[EDX + 0x20]                ; 005728f3
    LEA EDI,[ESP + 0x1e0]               ; 005728f6
    LEA ESI,[ESP + 0x258]               ; 005728fd
    FXCH ST2                            ; 00572904
    FSUB float ptr [EAX]                ; 00572906
    FXCH                                ; 00572908
    FSUB float ptr [EAX + 0x4]          ; 0057290a
    FXCH ST2                            ; 0057290d
    FSUB float ptr [EAX + 0x8]          ; 0057290f
    FXCH                                ; 00572912
    FSTP float ptr [ESP + 0x258]        ; 00572914
    FXCH                                ; 0057291b
    FSTP float ptr [ESP + 0x25c]        ; 0057291d
    FSTP float ptr [ESP + 0x260]        ; 00572924
    MOVSD ES:EDI,ESI                    ; 0057292b
    MOVSD ES:EDI,ESI                    ; 0057292c
    MOVSD ES:EDI,ESI                    ; 0057292d
    FLD float ptr [ESP + 0x1e4]         ; 0057292e
    FABS                                ; 00572935
    FCOMP double ptr [0x005ec4ea]       ; 00572937 | DAT_005ec4ea
    FNSTSW AX                           ; 0057293d
    SAHF                                ; 0057293f
    JA 0x00572721                       ; 00572940
        ;   XREF to: 00572721 (CONDITIONAL_JUMP)  ; LAB_00572721
    FLD float ptr [ESP + 0x1e8]         ; 00572946
    FMUL ST0                            ; 0057294d
    FLD float ptr [ESP + 0x1e0]         ; 0057294f
    FMUL ST0                            ; 00572956
    FADDP                               ; 00572958
    FCOMP double ptr [0x005ec4f2]       ; 0057295a | DAT_005ec4f2
    FNSTSW AX                           ; 00572960
    SAHF                                ; 00572962
    JA 0x00572721                       ; 00572963
        ;   XREF to: 00572721 (CONDITIONAL_JUMP)  ; LAB_00572721
    PUSH 0x1                            ; 00572969
    PUSH EBX                            ; 0057296b
    MOV EAX,dword ptr [EDX + 0x2b0]     ; 0057296c
    PUSH EDX                            ; 00572972
    CALL dword ptr [EAX + 0xf4]         ; 00572973
    ADD ESP,0xc                         ; 00572979
    TEST EAX,EAX                        ; 0057297c
    JZ 0x00572721                       ; 0057297e
        ;   XREF to: 00572721 (CONDITIONAL_JUMP)  ; LAB_00572721
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00572984
    LEA EDX,[EAX + 0x30]                ; 0057298a
    PUSH EDX                            ; 0057298d
    ADD EAX,0x20                        ; 0057298e
    PUSH EAX                            ; 00572991
    LEA EAX,[ESP + 0x134]               ; 00572992
    PUSH EAX                            ; 00572999
    MOV dword ptr [EBX + 0x10b04],0x0   ; 0057299a
    CALL core_xform.cpp_FUN_00591c10    ; 005729a4
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    ADD ESP,0xc                         ; 005729a9
    MOV EDX,dword ptr [ESP + 0x28c]     ; 005729ac
    PUSH EDX                            ; 005729b3
    MOV ECX,dword ptr [ESP + 0x298]     ; 005729b4
    PUSH ECX                            ; 005729bb
    LEA EAX,[ESP + 0x74]                ; 005729bc
    PUSH EAX                            ; 005729c0
    CALL core_xform.cpp_FUN_00591ad0    ; 005729c1
        ;   XREF to: 00591ad0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_00591ad0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005729c6
    LEA EAX,[ESP + 0x18c]               ; 005729c9
    PUSH EAX                            ; 005729d0
    LEA ESI,[ESP + 0x100]               ; 005729d1
    LEA EDI,[ESP + 0x160]               ; 005729d8
    CALL core_xform.cpp_FUN_00592830    ; 005729df
        ;   XREF to: 00592830 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00592830()
    ADD ESP,0x4                         ; 005729e4
    LEA EAX,[ESP + 0x15c]               ; 005729e7
    MOV ECX,0xc                         ; 005729ee
    PUSH EAX                            ; 005729f3
    LEA EAX,[ESP + 0x70]                ; 005729f4
    LEA ESI,[ESP + 0x100]               ; 005729f8
    PUSH EAX                            ; 005729ff
    LEA EAX,[ESP + 0x134]               ; 00572a00
    MOVSD.REP ES:EDI,ESI                ; 00572a07
    PUSH EAX                            ; 00572a09
    LEA ESI,[ESP + 0xa8]                ; 00572a0a
    LEA EDI,[ESP + 0xd8]                ; 00572a11
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 00572a18
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 00572a1d
    LEA ESI,[ESP + 0xa8]                ; 00572a22
    ADD ESP,0x8                         ; 00572a29
    LEA EAX,[ESP + 0xd0]                ; 00572a2c
    MOVSD.REP ES:EDI,ESI                ; 00572a33
    PUSH EAX                            ; 00572a35
    LEA ESI,[ESP + 0x44]                ; 00572a36
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 00572a3a
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 00572a3f
    LEA ESI,[ESP + 0x44]                ; 00572a44
    LEA EDI,[EBX + 0x10b08]             ; 00572a48
    ADD ESP,0x8                         ; 00572a4e
    MOVSD.REP ES:EDI,ESI                ; 00572a51
    MOV ECX,0xc                         ; 00572a53
    LEA EDI,[EBX + 0x10b38]             ; 00572a58
    LEA ESI,[EBX + 0x10b08]             ; 00572a5e
    MOVSD.REP ES:EDI,ESI                ; 00572a64
    MOV ESI,dword ptr [ESP + 0x290]     ; 00572a66
    PUSH ESI                            ; 00572a6d
    CALL core_xform.cpp_clearTranslation_FUN_00591ab0 ; 00572a6e
        ;   XREF to: 00591ab0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_clearTranslation_FUN_00591ab0()
    ADD ESP,0x4                         ; 00572a73
    XOR ESI,ESI                         ; 00572a76
    PUSH 0x40e00000                     ; 00572a78
        ;   Label: LAB_00572a78
    PUSH 0xc0e00000                     ; 00572a7d
    CALL core_actor.cpp_FUN_0040cf60    ; 00572a82
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x2a4],EAX     ; 00572a87
    FLD float ptr [ESP + 0x2a4]         ; 00572a8e
    ADD ESP,0x8                         ; 00572a95
    PUSH 0x40e00000                     ; 00572a98
    PUSH 0xc0e00000                     ; 00572a9d
    FSTP float ptr [ESP + 0x20c]        ; 00572aa2
    CALL core_actor.cpp_FUN_0040cf60    ; 00572aa9
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x2a4],EAX     ; 00572aae
    FLD float ptr [ESP + 0x2a4]         ; 00572ab5
    ADD ESP,0x8                         ; 00572abc
    PUSH 0x41700000                     ; 00572abf
    PUSH 0xbf800000                     ; 00572ac4
    FSTP float ptr [ESP + 0x214]        ; 00572ac9
    CALL core_actor.cpp_FUN_0040cf60    ; 00572ad0
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x2a4],EAX     ; 00572ad5
    FLD float ptr [ESP + 0x2a4]         ; 00572adc
    ADD ESP,0x8                         ; 00572ae3
    FSTP float ptr [ESP + 0x208]        ; 00572ae6
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00572aed
    MOV EDI,dword ptr [EAX + 0x280c]    ; 00572af3
    PUSH EDI                            ; 00572af9
    LEA EAX,[ESP + 0x208]               ; 00572afa
    PUSH EAX                            ; 00572b01
    LEA EAX,[ESP + 0x26c]               ; 00572b02
    PUSH EAX                            ; 00572b09
    MOV EAX,[0x006167e0]                ; 00572b0a | g_CGorePtr
    PUSH EAX                            ; 00572b0f
    INC ESI                             ; 00572b10
    CALL core_gore.cpp_FUN_004c9730     ; 00572b11
        ;   XREF to: 004c9730 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004c9730(CGore * this_ptr, CVector3f * position, CVector3f * velocity, EBloodType blood_type)
    ADD ESP,0x10                        ; 00572b16
    CMP ESI,0x46                        ; 00572b19
    JGE 0x00572721                      ; 00572b1c
        ;   XREF to: 00572721 (CONDITIONAL_JUMP)  ; LAB_00572721
    JMP 0x00572a78                      ; 00572b22
        ;   XREF to: 00572a78 (UNCONDITIONAL_JUMP)  ; LAB_00572a78
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 00572b27
        ;   Label: LAB_00572b27
    TEST ESI,ESI                        ; 00572b2d
    JZ 0x00572721                       ; 00572b2f
        ;   XREF to: 00572721 (CONDITIONAL_JUMP)  ; LAB_00572721
    PUSH ESI                            ; 00572b35
    MOV EDX,dword ptr [ESI + 0x2b0]     ; 00572b36
    CALL dword ptr [EDX + 0xfc]         ; 00572b3c
    ADD ESP,0x4                         ; 00572b42
    CMP EAX,EBX                         ; 00572b45
    JNZ 0x00572721                      ; 00572b47
        ;   XREF to: 00572721 (CONDITIONAL_JUMP)  ; LAB_00572721
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00572b4d
    MOV dword ptr [EAX + 0x70],0x2      ; 00572b53
    JMP 0x00572721                      ; 00572b5a
        ;   XREF to: 00572721 (UNCONDITIONAL_JUMP)  ; LAB_00572721
    LEA EAX,[ESP + 0x8]                 ; 00572b5f
        ;   Label: LAB_00572b5f
    PUSH EAX                            ; 00572b63
    MOV ECX,dword ptr [ESP + 0x29c]     ; 00572b64
    PUSH ECX                            ; 00572b6b
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 00572b6c
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00572b71
    CMP EAX,0x64                        ; 00572b74
    JC 0x00572721                       ; 00572b77
        ;   XREF to: 00572721 (CONDITIONAL_JUMP)  ; LAB_00572721
    JBE 0x00572832                      ; 00572b7d
        ;   XREF to: 00572832 (CONDITIONAL_JUMP)  ; LAB_00572832
    CMP EAX,0x65                        ; 00572b83
    JZ 0x00572b27                       ; 00572b86
        ;   XREF to: 00572b27 (CONDITIONAL_JUMP)  ; LAB_00572b27
    JMP 0x00572721                      ; 00572b88
        ;   XREF to: 00572721 (UNCONDITIONAL_JUMP)  ; LAB_00572721
    PUSH 0x5ec498                       ; 00572b8d | = "CEnemy CHero CNPC"
        ;   Label: LAB_00572b8d
    PUSH EBX                            ; 00572b92
    CALL core_tentacle.cpp_CTentacle_findNearbyTarget_FUN_00573010 ; 00572b93
        ;   XREF to: 00573010 (UNCONDITIONAL_CALL)  ; int core_tentacle.cpp_CTentacle_findNearbyTarget_FUN_00573010(CTentacle * this_ptr, char * class_name)
    ADD ESP,0x8                         ; 00572b98
    TEST EAX,EAX                        ; 00572b9b
    JZ 0x005727df                       ; 00572b9d
        ;   XREF to: 005727df (CONDITIONAL_JUMP)  ; LAB_005727df
    PUSH 0x1                            ; 00572ba3
    PUSH 0x2                            ; 00572ba5
    PUSH ESI                            ; 00572ba7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00572ba8
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00572bad
    MOV dword ptr [EBX + 0x10af8],0x0   ; 00572bb0
    JMP 0x005727df                      ; 00572bba
        ;   XREF to: 005727df (UNCONDITIONAL_JUMP)  ; LAB_005727df
    FLD float ptr [EBX + 0x10afc]       ; 00572bbf
        ;   Label: LAB_00572bbf
    FADD float ptr [EBP + 0x18]         ; 00572bc5
    FST float ptr [EBX + 0x10afc]       ; 00572bc8
    FCOMP double ptr [0x005ec4b2]       ; 00572bce | DAT_005ec4b2
    FNSTSW AX                           ; 00572bd4
    SAHF                                ; 00572bd6
    JC 0x00572bfc                       ; 00572bd7
        ;   XREF to: 00572bfc (CONDITIONAL_JUMP)  ; LAB_00572bfc
    PUSH 0x1                            ; 00572bd9
    PUSH 0x0                            ; 00572bdb
    MOV EDI,dword ptr [ESP + 0x2a0]     ; 00572bdd
    PUSH EDI                            ; 00572be4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00572be5
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00572bea
    MOV dword ptr [EBX + 0x10af8],0x41c80000 ; 00572bed
    JMP 0x005727df                      ; 00572bf7
        ;   XREF to: 005727df (UNCONDITIONAL_JUMP)  ; LAB_005727df
    PUSH dword ptr [EBP + 0x18]         ; 00572bfc
        ;   Label: LAB_00572bfc
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00572bff
    PUSH EBX                            ; 00572c05
    CALL dword ptr [EAX + 0x150]        ; 00572c06
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 00572c0c
    ADD ESP,0x8                         ; 00572c12
    TEST ESI,ESI                        ; 00572c15
    JZ 0x005727df                       ; 00572c17
        ;   XREF to: 005727df (CONDITIONAL_JUMP)  ; LAB_005727df
    MOV EAX,ESI                         ; 00572c1d
    MOV EDX,dword ptr [ESP + 0x294]     ; 00572c1f
    LEA EDI,[ESP + 0x234]               ; 00572c26
    FLD float ptr [EAX + 0x24]          ; 00572c2d
    FLD float ptr [EAX + 0x28]          ; 00572c30
    FLD float ptr [EAX + 0x20]          ; 00572c33
    LEA ESI,[ESP + 0x1f8]               ; 00572c36
    LEA EAX,[ESP + 0x234]               ; 00572c3d
    FSUB float ptr [EDX]                ; 00572c44
    FXCH ST2                            ; 00572c46
    FSUB float ptr [EDX + 0x4]          ; 00572c48
    FXCH                                ; 00572c4b
    FSUB float ptr [EDX + 0x8]          ; 00572c4d
    FXCH ST2                            ; 00572c50
    FSTP float ptr [ESP + 0x1f8]        ; 00572c52
    FSTP float ptr [ESP + 0x1fc]        ; 00572c59
    FSTP float ptr [ESP + 0x200]        ; 00572c60
    MOVSD ES:EDI,ESI                    ; 00572c67
    MOVSD ES:EDI,ESI                    ; 00572c68
    MOVSD ES:EDI,ESI                    ; 00572c69
    PUSH EAX                            ; 00572c6a
    LEA ESI,[ESP + 0x1d8]               ; 00572c6b
    LEA EDI,[ESP + 0x250]               ; 00572c72
    CALL core_vecdir.cpp_FUN_005838f0   ; 00572c79
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[ESP + 0x1d8]               ; 00572c7e
    ADD ESP,0x4                         ; 00572c85
    MOVSD ES:EDI,ESI                    ; 00572c88
    MOVSD ES:EDI,ESI                    ; 00572c89
    MOVSD ES:EDI,ESI                    ; 00572c8a
    FLD float ptr [ESP + 0x250]         ; 00572c8b
    FSUB float ptr [EBX + 0x34]         ; 00572c92
    SUB ESP,0x4                         ; 00572c95
    FSTP float ptr [ESP]                ; 00572c98
    CALL core_actor.cpp_FUN_0040d0c0    ; 00572c9b
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [ESP + 0x2a0],EAX     ; 00572ca0
    FLD float ptr [ESP + 0x2a0]         ; 00572ca7
    ADD ESP,0x4                         ; 00572cae
    FLD float ptr [EBP + 0x18]          ; 00572cb1
    FMUL float ptr [0x005ec4ba]         ; 00572cb4 | DAT_005ec4ba
    FXCH                                ; 00572cba
    FSTP float ptr [ESP + 0x274]        ; 00572cbc
    MOV EAX,dword ptr [ESP + 0x274]     ; 00572cc3
    FSTP float ptr [ESP + 0x284]        ; 00572cca
    MOV dword ptr [EBX + 0x2578],EAX    ; 00572cd1
    FLD float ptr [EBX + 0x2578]        ; 00572cd7
    FLD float ptr [ESP + 0x284]         ; 00572cdd
    FCHS                                ; 00572ce4
    FSTP float ptr [ESP + 0x27c]        ; 00572ce6
    FCOMP float ptr [ESP + 0x27c]       ; 00572ced
    FNSTSW AX                           ; 00572cf4
    SAHF                                ; 00572cf6
    JC 0x00572dd7                       ; 00572cf7
        ;   XREF to: 00572dd7 (CONDITIONAL_JUMP)  ; LAB_00572dd7
    FLD float ptr [EBX + 0x2578]        ; 00572cfd
        ;   Label: LAB_00572cfd
    FCOMP float ptr [ESP + 0x284]       ; 00572d03
    FNSTSW AX                           ; 00572d0a
    SAHF                                ; 00572d0c
    JBE 0x00572d1c                      ; 00572d0d
        ;   XREF to: 00572d1c (CONDITIONAL_JUMP)  ; LAB_00572d1c
    MOV EAX,dword ptr [ESP + 0x284]     ; 00572d0f
    MOV dword ptr [EBX + 0x2578],EAX    ; 00572d16
    FLD float ptr [EBX + 0x10afc]       ; 00572d1c
        ;   Label: LAB_00572d1c
    FCOMP double ptr [0x005ec4c2]       ; 00572d22 | DAT_005ec4c2
    FNSTSW AX                           ; 00572d28
    SAHF                                ; 00572d2a
    JBE 0x005727df                      ; 00572d2b
        ;   XREF to: 005727df (CONDITIONAL_JUMP)  ; LAB_005727df
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 00572d31
    LEA EDX,[EBX + 0x20]                ; 00572d37
    LEA EAX,[ESI + 0x20]                ; 00572d3a
    FLD float ptr [EDX]                 ; 00572d3d
    FSUB float ptr [EAX]                ; 00572d3f
    FMUL ST0                            ; 00572d41
    FLD float ptr [EDX + 0x8]           ; 00572d43
    FSUB float ptr [EAX + 0x8]          ; 00572d46
    FMUL ST0                            ; 00572d49
    FADDP                               ; 00572d4b
    FSQRT                               ; 00572d4d
    FSTP float ptr [ESP]                ; 00572d4f
    MOV EAX,dword ptr [ESP]             ; 00572d52
    FLD float ptr [ESP + 0x274]         ; 00572d55
    MOV dword ptr [ESP + 0x4],EAX       ; 00572d5c
    FCOMP float ptr [0x005ec4ca]        ; 00572d60 | DAT_005ec4ca
    FNSTSW AX                           ; 00572d66
    SAHF                                ; 00572d68
    JNC 0x005727df                      ; 00572d69
        ;   XREF to: 005727df (CONDITIONAL_JUMP)  ; LAB_005727df
    FLD float ptr [EBX + 0x24]          ; 00572d6f
    FSUB float ptr [ESI + 0x24]         ; 00572d72
    FABS                                ; 00572d75
    FCOMP double ptr [0x005ec4d2]       ; 00572d77 | DAT_005ec4d2
    FNSTSW AX                           ; 00572d7d
    SAHF                                ; 00572d7f
    JNC 0x005727df                      ; 00572d80
        ;   XREF to: 005727df (CONDITIONAL_JUMP)  ; LAB_005727df
    FLD float ptr [ESP]                 ; 00572d86
    FCOMP double ptr [0x005ec4da]       ; 00572d89 | DAT_005ec4da
    FNSTSW AX                           ; 00572d8f
    SAHF                                ; 00572d91
    JBE 0x00572de9                      ; 00572d92
        ;   XREF to: 00572de9 (CONDITIONAL_JUMP)  ; LAB_00572de9
    MOV EDX,0x1                         ; 00572d94
    FLD float ptr [ESP + 0x4]           ; 00572d99
        ;   Label: LAB_00572d99
    FCOMP double ptr [0x005ec4e2]       ; 00572d9d | DAT_005ec4e2
    FNSTSW AX                           ; 00572da3
    SAHF                                ; 00572da5
    JNC 0x00572ded                      ; 00572da6
        ;   XREF to: 00572ded (CONDITIONAL_JUMP)  ; LAB_00572ded
    MOV EAX,0x1                         ; 00572da8
    TEST EDX,EAX                        ; 00572dad
        ;   Label: LAB_00572dad
    JZ 0x005727df                       ; 00572daf
        ;   XREF to: 005727df (CONDITIONAL_JUMP)  ; LAB_005727df
    PUSH 0x1                            ; 00572db5
    PUSH 0x6                            ; 00572db7
    LEA EAX,[EBX + 0x2b4]               ; 00572db9
    PUSH EAX                            ; 00572dbf
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00572dc0
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00572dc5
    MOV dword ptr [EBX + 0x10af8],0x41c80000 ; 00572dc8
    JMP 0x005727df                      ; 00572dd2
        ;   XREF to: 005727df (UNCONDITIONAL_JUMP)  ; LAB_005727df
    MOV EAX,dword ptr [ESP + 0x27c]     ; 00572dd7
        ;   Label: LAB_00572dd7
    MOV dword ptr [EBX + 0x2578],EAX    ; 00572dde
    JMP 0x00572cfd                      ; 00572de4
        ;   XREF to: 00572cfd (UNCONDITIONAL_JUMP)  ; LAB_00572cfd
    XOR EDX,EDX                         ; 00572de9
        ;   Label: LAB_00572de9
    JMP 0x00572d99                      ; 00572deb
        ;   XREF to: 00572d99 (UNCONDITIONAL_JUMP)  ; LAB_00572d99
    XOR EAX,EAX                         ; 00572ded
        ;   Label: LAB_00572ded
    JMP 0x00572dad                      ; 00572def
        ;   XREF to: 00572dad (UNCONDITIONAL_JUMP)  ; LAB_00572dad
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 00572df1
        ;   Label: LAB_00572df1
    TEST ECX,ECX                        ; 00572df7
    JZ 0x005727df                       ; 00572df9
        ;   XREF to: 005727df (CONDITIONAL_JUMP)  ; LAB_005727df
    PUSH ECX                            ; 00572dff
    MOV EDX,dword ptr [ECX + 0x2b0]     ; 00572e00
    CALL dword ptr [EDX + 0x114]        ; 00572e06
    ADD ESP,0x4                         ; 00572e0c
    TEST EAX,EAX                        ; 00572e0f
    JG 0x005727df                       ; 00572e11
        ;   XREF to: 005727df (CONDITIONAL_JUMP)  ; LAB_005727df
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00572e17
    PUSH EAX                            ; 00572e1d
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00572e1e
    CALL dword ptr [EDX + 0xfc]         ; 00572e24
    ADD ESP,0x4                         ; 00572e2a
    TEST EAX,EAX                        ; 00572e2d
    JNZ 0x005727df                      ; 00572e2f
        ;   XREF to: 005727df (CONDITIONAL_JUMP)  ; LAB_005727df
    MOV EDX,dword ptr [ESP + 0x294]     ; 00572e35
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00572e3c
    LEA EDI,[ESP + 0x228]               ; 00572e42
    LEA ESI,[ESP + 0x210]               ; 00572e49
    FLD float ptr [EAX + 0x24]          ; 00572e50
    FLD float ptr [EAX + 0x28]          ; 00572e53
    FLD float ptr [EAX + 0x20]          ; 00572e56
    LEA EAX,[ESP + 0x228]               ; 00572e59
    FSUB float ptr [EDX]                ; 00572e60
    FXCH ST2                            ; 00572e62
    FSUB float ptr [EDX + 0x4]          ; 00572e64
    FXCH                                ; 00572e67
    FSUB float ptr [EDX + 0x8]          ; 00572e69
    FXCH ST2                            ; 00572e6c
    FSTP float ptr [ESP + 0x210]        ; 00572e6e
    FSTP float ptr [ESP + 0x214]        ; 00572e75
    FSTP float ptr [ESP + 0x218]        ; 00572e7c
    MOVSD ES:EDI,ESI                    ; 00572e83
    MOVSD ES:EDI,ESI                    ; 00572e84
    MOVSD ES:EDI,ESI                    ; 00572e85
    PUSH EAX                            ; 00572e86
    LEA ESI,[ESP + 0x1cc]               ; 00572e87
    LEA EDI,[ESP + 0x220]               ; 00572e8e
    CALL core_vecdir.cpp_FUN_005838f0   ; 00572e95
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[ESP + 0x1cc]               ; 00572e9a
    ADD ESP,0x4                         ; 00572ea1
    MOVSD ES:EDI,ESI                    ; 00572ea4
    MOVSD ES:EDI,ESI                    ; 00572ea5
    MOVSD ES:EDI,ESI                    ; 00572ea6
    FLD float ptr [ESP + 0x220]         ; 00572ea7
    FSUB float ptr [EBX + 0x34]         ; 00572eae
    SUB ESP,0x4                         ; 00572eb1
    FSTP float ptr [ESP]                ; 00572eb4
    CALL core_actor.cpp_FUN_0040d0c0    ; 00572eb7
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [ESP + 0x2a0],EAX     ; 00572ebc
    FLD float ptr [ESP + 0x2a0]         ; 00572ec3
    ADD ESP,0x4                         ; 00572eca
    FLD float ptr [EBP + 0x18]          ; 00572ecd
    FMUL float ptr [0x005ec4aa]         ; 00572ed0 | DAT_005ec4aa
    FXCH                                ; 00572ed6
    FST float ptr [EBX + 0x2578]        ; 00572ed8
    FXCH                                ; 00572ede
    FST float ptr [ESP + 0x288]         ; 00572ee0
    FCHS                                ; 00572ee7
    FSTP float ptr [ESP + 0x280]        ; 00572ee9
    FCOMP float ptr [ESP + 0x280]       ; 00572ef0
    FNSTSW AX                           ; 00572ef7
    SAHF                                ; 00572ef9
    JC 0x00572f24                       ; 00572efa
        ;   XREF to: 00572f24 (CONDITIONAL_JUMP)  ; LAB_00572f24
    FLD float ptr [EBX + 0x2578]        ; 00572efc
        ;   Label: LAB_00572efc
    FCOMP float ptr [ESP + 0x288]       ; 00572f02
    FNSTSW AX                           ; 00572f09
    SAHF                                ; 00572f0b
    JBE 0x005727df                      ; 00572f0c
        ;   XREF to: 005727df (CONDITIONAL_JUMP)  ; LAB_005727df
    MOV EAX,dword ptr [ESP + 0x288]     ; 00572f12
    MOV dword ptr [EBX + 0x2578],EAX    ; 00572f19
    JMP 0x005727df                      ; 00572f1f
        ;   XREF to: 005727df (UNCONDITIONAL_JUMP)  ; LAB_005727df
    MOV EAX,dword ptr [ESP + 0x280]     ; 00572f24
        ;   Label: LAB_00572f24
    MOV dword ptr [EBX + 0x2578],EAX    ; 00572f2b
    JMP 0x00572efc                      ; 00572f31
        ;   XREF to: 00572efc (UNCONDITIONAL_JUMP)  ; LAB_00572efc
    JBE 0x00572bbf                      ; 00572f33
        ;   XREF to: 00572bbf (CONDITIONAL_JUMP)  ; LAB_00572bbf
        ;   Label: LAB_00572f33
    CMP EAX,0x6                         ; 00572f39
    JZ 0x00572df1                       ; 00572f3c
        ;   XREF to: 00572df1 (CONDITIONAL_JUMP)  ; LAB_00572df1
    JMP 0x005727df                      ; 00572f42
        ;   XREF to: 005727df (UNCONDITIONAL_JUMP)  ; LAB_005727df

