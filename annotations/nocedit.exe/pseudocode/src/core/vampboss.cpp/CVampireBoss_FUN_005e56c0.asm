; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e56c0(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_batwing_cth_00656adc
;   TerminatedCString s_noscape_cth_00656ae8
;   TerminatedCString s_nosskirt_cth_00656af4
;   TerminatedCString s_Bip01_Spine2_00656b01
;   undefined4 DAT_02f43974
;
; Called Functions:
;   core_cloth.cpp_CCloth_load_FUN_00438cf0
;   core_cloth.cpp_FUN_00439710
;   core_enemy.cpp_CEnemy_FUN_004a9650
;   core_morph.cpp_CMorph_getReady_FUN_0052b680
;   core_morph.cpp_FUN_0052b430
;   core_morph.cpp_FUN_0052b580
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e56c0
        ;   Label: core_vampboss.cpp_CVampireBoss_FUN_005e56c0
    PUSH ESI                            ; 005e56c1
    PUSH EDI                            ; 005e56c2
    PUSH EBP                            ; 005e56c3
    SUB ESP,0x10                        ; 005e56c4
    MOV EBX,dword ptr [ESP + 0x24]      ; 005e56c7
    PUSH EBX                            ; 005e56cb
    CALL core_enemy.cpp_CEnemy_FUN_004a9650 ; 005e56cc
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9650(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005e56d1
    LEA EDI,[EBX + 0x158]               ; 005e56d4
    PUSH EDI                            ; 005e56da
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 005e56db
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e56e0
    LEA EBP,[EBX + 0xbebc]              ; 005e56e3
    PUSH EBP                            ; 005e56e9
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 005e56ea
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e56ef
    PUSH 0x656adc                       ; 005e56f2 | = "batwing.cth"
    LEA EAX,[EBX + 0xe170]              ; 005e56f7
    PUSH EAX                            ; 005e56fd
    MOV dword ptr [ESP + 0x10],EAX      ; 005e56fe
    CALL core_cloth.cpp_CCloth_load_FUN_00438cf0 ; 005e5702
        ;   XREF to: 00438cf0 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_00438cf0(CCloth * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005e5707
    PUSH EBP                            ; 005e570a
    LEA EAX,[EBX + 0x30]                ; 005e570b
    PUSH EAX                            ; 005e570e
    LEA ESI,[EBX + 0x20]                ; 005e570f
    PUSH ESI                            ; 005e5712
    MOV dword ptr [ESP + 0xc],EAX       ; 005e5713
    MOV EAX,dword ptr [ESP + 0x14]      ; 005e5717
    PUSH EAX                            ; 005e571b
    CALL core_cloth.cpp_FUN_00439710    ; 005e571c
        ;   XREF to: 00439710 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_00439710()
    ADD ESP,0x10                        ; 005e5721
    PUSH 0x656ae8                       ; 005e5724 | = "noscape.cth"
    LEA EAX,[EBX + 0x4dfe0]             ; 005e5729
    PUSH EAX                            ; 005e572f
    MOV dword ptr [ESP + 0x14],EAX      ; 005e5730
    CALL core_cloth.cpp_CCloth_load_FUN_00438cf0 ; 005e5734
        ;   XREF to: 00438cf0 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_00438cf0(CCloth * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005e5739
    PUSH EDI                            ; 005e573c
    MOV ECX,dword ptr [ESP + 0x4]       ; 005e573d
    PUSH ECX                            ; 005e5741
    PUSH ESI                            ; 005e5742
    MOV EAX,dword ptr [ESP + 0x18]      ; 005e5743
    PUSH EAX                            ; 005e5747
    CALL core_cloth.cpp_FUN_00439710    ; 005e5748
        ;   XREF to: 00439710 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_00439710()
    ADD ESP,0x10                        ; 005e574d
    PUSH 0x656af4                       ; 005e5750 | = "nosskirt.cth"
    LEA EAX,[EBX + 0x8de50]             ; 005e5755
    PUSH EAX                            ; 005e575b
    MOV dword ptr [ESP + 0xc],EAX       ; 005e575c
    CALL core_cloth.cpp_CCloth_load_FUN_00438cf0 ; 005e5760
        ;   XREF to: 00438cf0 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_00438cf0(CCloth * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005e5765
    PUSH EDI                            ; 005e5768
    MOV ECX,dword ptr [ESP + 0x4]       ; 005e5769
    PUSH ECX                            ; 005e576d
    PUSH ESI                            ; 005e576e
    MOV ESI,dword ptr [ESP + 0x10]      ; 005e576f
    PUSH ESI                            ; 005e5773
    CALL core_cloth.cpp_FUN_00439710    ; 005e5774
        ;   XREF to: 00439710 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_00439710()
    ADD ESP,0x10                        ; 005e5779
    PUSH EDI                            ; 005e577c
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80 ; 005e577d
        ;   XREF to: 0059df80 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e5782
    PUSH EDI                            ; 005e5785
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 ; 005e5786
        ;   XREF to: 0059fb40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e578b
    PUSH EBP                            ; 005e578e
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80 ; 005e578f
        ;   XREF to: 0059df80 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e5794
    PUSH EBP                            ; 005e5797
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 ; 005e5798
        ;   XREF to: 0059fb40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e579d
    PUSH EDI                            ; 005e57a0
    XOR EAX,EAX                         ; 005e57a1
    PUSH EAX                            ; 005e57a3
    LEA ESI,[EBX + 0xcdcc4]             ; 005e57a4
    PUSH ESI                            ; 005e57aa
    MOV [0x02f43974],EAX                ; 005e57ab | DAT_02f43974
    CALL core_morph.cpp_FUN_0052b430    ; 005e57b0
        ;   XREF to: 0052b430 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_FUN_0052b430()
    ADD ESP,0xc                         ; 005e57b5
    PUSH 0x0                            ; 005e57b8
    MOV EDX,dword ptr [ESP + 0x10]      ; 005e57ba
    PUSH EDX                            ; 005e57be
    PUSH 0x0                            ; 005e57bf
    PUSH ESI                            ; 005e57c1
    CALL core_morph.cpp_FUN_0052b580    ; 005e57c2
        ;   XREF to: 0052b580 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_FUN_0052b580()
    ADD ESP,0x10                        ; 005e57c7
    PUSH 0x0                            ; 005e57ca
    MOV EAX,dword ptr [ESP + 0x10]      ; 005e57cc
    PUSH EAX                            ; 005e57d0
    PUSH 0x0                            ; 005e57d1
    MOV ECX,0x1                         ; 005e57d3
    PUSH ESI                            ; 005e57d8
    MOV dword ptr [0x02f43974],ECX      ; 005e57d9 | DAT_02f43974
    CALL core_morph.cpp_FUN_0052b580    ; 005e57df
        ;   XREF to: 0052b580 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_FUN_0052b580()
    ADD ESP,0x10                        ; 005e57e4
    XOR EDX,EDX                         ; 005e57e7
    PUSH EDX                            ; 005e57e9
    MOV ECX,dword ptr [ESP + 0x8]       ; 005e57ea
    PUSH ECX                            ; 005e57ee
    PUSH EDX                            ; 005e57ef
    PUSH ESI                            ; 005e57f0
    MOV dword ptr [0x02f43974],EDX      ; 005e57f1 | DAT_02f43974
    CALL core_morph.cpp_FUN_0052b580    ; 005e57f7
        ;   XREF to: 0052b580 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_FUN_0052b580()
    ADD ESP,0x10                        ; 005e57fc
    PUSH 0x0                            ; 005e57ff
    MOV EDX,dword ptr [ESP + 0x8]       ; 005e5801
    PUSH EDX                            ; 005e5805
    PUSH 0x0                            ; 005e5806
    MOV EAX,0x1                         ; 005e5808
    PUSH ESI                            ; 005e580d
    MOV [0x02f43974],EAX                ; 005e580e | DAT_02f43974
    CALL core_morph.cpp_FUN_0052b580    ; 005e5813
        ;   XREF to: 0052b580 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_FUN_0052b580()
    ADD ESP,0x10                        ; 005e5818
    PUSH EBP                            ; 005e581b
    PUSH 0x1                            ; 005e581c
    XOR ECX,ECX                         ; 005e581e
    PUSH ESI                            ; 005e5820
    MOV dword ptr [0x02f43974],ECX      ; 005e5821 | DAT_02f43974
    CALL core_morph.cpp_FUN_0052b430    ; 005e5827
        ;   XREF to: 0052b430 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_FUN_0052b430()
    ADD ESP,0xc                         ; 005e582c
    PUSH 0x0                            ; 005e582f
    MOV EAX,dword ptr [ESP + 0xc]       ; 005e5831
    PUSH EAX                            ; 005e5835
    PUSH 0x1                            ; 005e5836
    PUSH ESI                            ; 005e5838
    CALL core_morph.cpp_FUN_0052b580    ; 005e5839
        ;   XREF to: 0052b580 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_FUN_0052b580()
    ADD ESP,0x10                        ; 005e583e
    PUSH 0x0                            ; 005e5841
    MOV ECX,dword ptr [ESP + 0xc]       ; 005e5843
    PUSH ECX                            ; 005e5847
    MOV EDX,0x1                         ; 005e5848
    PUSH EDX                            ; 005e584d
    PUSH ESI                            ; 005e584e
    MOV dword ptr [0x02f43974],EDX      ; 005e584f | DAT_02f43974
    CALL core_morph.cpp_FUN_0052b580    ; 005e5855
        ;   XREF to: 0052b580 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_FUN_0052b580()
    ADD ESP,0x10                        ; 005e585a
    XOR EAX,EAX                         ; 005e585d
    PUSH ESI                            ; 005e585f
    MOV [0x02f43974],EAX                ; 005e5860 | DAT_02f43974
    CALL core_morph.cpp_CMorph_getReady_FUN_0052b680 ; 005e5865
        ;   XREF to: 0052b680 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_0052b680(CMorph * this_ptr)
    ADD ESP,0x4                         ; 005e586a
    PUSH EDI                            ; 005e586d
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000 ; 005e586e
        ;   XREF to: 0059e000 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e5873
    PUSH EBP                            ; 005e5876
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000 ; 005e5877
        ;   XREF to: 0059e000 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e587c
    PUSH EDI                            ; 005e587f
    MOV dword ptr [EBX + 0xfc],0x1      ; 005e5880
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005e588a
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e588f
    PUSH 0x1                            ; 005e5892
    PUSH 0x656b01                       ; 005e5894 | = "Bip01 Spine2"
    PUSH EAX                            ; 005e5899
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005e589a
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    MOV dword ptr [EBX + 0x24b0],0x0    ; 005e589f
    MOV dword ptr [EBX + 0xce900],0x0   ; 005e58a9
    ADD ESP,0xc                         ; 005e58b3
    MOV dword ptr [EBX + 0x24ac],EAX    ; 005e58b6
    ADD ESP,0x10                        ; 005e58bc
    POP EBP                             ; 005e58bf
    POP EDI                             ; 005e58c0
    POP ESI                             ; 005e58c1
    POP EBX                             ; 005e58c2
    RET                                 ; 005e58c3

