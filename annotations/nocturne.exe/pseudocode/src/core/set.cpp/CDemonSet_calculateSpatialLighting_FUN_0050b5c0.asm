; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0(CDemonSet *param_1,undefined4 param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_set.cpp_CDemonSet_lightVertexColor_FUN_0050b7f0 at 0050b999
;   core_set.cpp_FUN_0050a260 at 0050a4be
;   core_trigger.cpp_FUN_00547b30 at 00547db5
;
; Referenced Globals:
;   undefined4 DAT_01fba2d8
;   undefined4 DAT_01ffeef8
;   undefined4 DAT_01ffeefc
;   undefined4 DAT_01fff07c
;   undefined4 DAT_01fff080
;   undefined4 DAT_01fff090
;   undefined4 DAT_01fff094
;   undefined4 DAT_01fff098
;   undefined4 DAT_01fff548
;   undefined4 DAT_01fff54c
;   undefined4 DAT_01fff558
;   undefined4 DAT_01fff564
;   undefined4 DAT_01fff570
;   undefined4 DAT_01fff57c
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50
;   core_dglobe.cpp_CDemonGlobe_getAttenuationAtVertex_FUN_0044d2d0
;   core_mirror.cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_004d7bd0
;   core_mirror.cpp_CMirrorReflection_transformMirrorVertex_FUN_004d7b30
;   core_set.cpp_CDemonSet_gatherVisibleLights_FUN_0050aee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b5c0
        ;   Label: core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0
    PUSH ESI                            ; 0050b5c1
    PUSH EDI                            ; 0050b5c2
    PUSH EBP                            ; 0050b5c3
    SUB ESP,0x38                        ; 0050b5c4
    MOV EBP,dword ptr [ESP + 0x54]      ; 0050b5c7
    MOV EDX,dword ptr [0x01fff548]      ; 0050b5cb | DAT_01fff548
    TEST EDX,EDX                        ; 0050b5d1
    JZ 0x0050b5fd                       ; 0050b5d3
        ;   XREF to: 0050b5fd (CONDITIONAL_JUMP)  ; LAB_0050b5fd
    CMP EDX,0x1                         ; 0050b5d5
    JNZ 0x0050b783                      ; 0050b5d8
        ;   XREF to: 0050b783 (CONDITIONAL_JUMP)  ; LAB_0050b783
    PUSH 0x0                            ; 0050b5de
    PUSH 0x0                            ; 0050b5e0
    PUSH 0x0                            ; 0050b5e2
    PUSH 0x0                            ; 0050b5e4
    PUSH 0x0                            ; 0050b5e6
    MOV ESI,dword ptr [ESP + 0x60]      ; 0050b5e8
    PUSH ESI                            ; 0050b5ec
    CALL core_set.cpp_CDemonSet_gatherVisibleLights_FUN_0050aee0 ; 0050b5ed
        ;   XREF to: 0050aee0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_gatherVisibleLights_FUN_0050aee0(CDemonSet * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * aabb_min, ...)
        ;   Label: LAB_0050b5ed
    ADD ESP,0x18                        ; 0050b5f2
    XOR EDI,EDI                         ; 0050b5f5
    MOV dword ptr [0x01fff548],EDI      ; 0050b5f7 | DAT_01fff548
    MOV EAX,[0x01fff07c]                ; 0050b5fd | DAT_01fff07c
        ;   Label: LAB_0050b5fd
    XOR ESI,ESI                         ; 0050b602
    XOR EBX,EBX                         ; 0050b604
    TEST EAX,EAX                        ; 0050b606
    JLE 0x0050b640                      ; 0050b608
        ;   XREF to: 0050b640 (CONDITIONAL_JUMP)  ; LAB_0050b640
    XOR EDI,EDI                         ; 0050b60a
    PUSH EBP                            ; 0050b60c
        ;   Label: LAB_0050b60c
    MOV EDX,dword ptr [EDI + 0x1fff080] ; 0050b60d | DAT_01fff080
    PUSH EDX                            ; 0050b613
    MOV ECX,dword ptr [ESP + 0x58]      ; 0050b614
    PUSH ECX                            ; 0050b618
    PUSH 0x1fb8508                      ; 0050b619
    ADD EDI,0x4                         ; 0050b61e
    INC ESI                             ; 0050b621
    CALL core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50 ; 0050b622
        ;   XREF to: 00442c50 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50()
    ADD EBX,EAX                         ; 0050b627
    MOV EAX,[0x01fff07c]                ; 0050b629 | DAT_01fff07c
    ADD ESP,0x10                        ; 0050b62e
    CMP ESI,EAX                         ; 0050b631
    JL 0x0050b60c                       ; 0050b633
        ;   XREF to: 0050b60c (CONDITIONAL_JUMP)  ; LAB_0050b60c
    LEA EAX,[EAX]                       ; 0050b635
    LEA EDX,[EDX]                       ; 0050b63b
    MOV EBX,EBX                         ; 0050b63e
    MOV EDX,dword ptr [0x01ffeef8]      ; 0050b640 | DAT_01ffeef8
        ;   Label: LAB_0050b640
    XOR EDI,EDI                         ; 0050b646
    TEST EDX,EDX                        ; 0050b648
    JLE 0x0050b680                      ; 0050b64a
        ;   XREF to: 0050b680 (CONDITIONAL_JUMP)  ; LAB_0050b680
    XOR ESI,ESI                         ; 0050b64c
    PUSH EBP                            ; 0050b64e
        ;   Label: LAB_0050b64e
    MOV ECX,dword ptr [ESI + 0x1ffeefc] ; 0050b64f | DAT_01ffeefc
    PUSH ECX                            ; 0050b655
    MOV EAX,dword ptr [ESP + 0x58]      ; 0050b656
    PUSH EAX                            ; 0050b65a
    PUSH 0x1fb8508                      ; 0050b65b
    ADD ESI,0x4                         ; 0050b660
    INC EDI                             ; 0050b663
    CALL core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50 ; 0050b664
        ;   XREF to: 00442c50 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50()
    MOV EDX,dword ptr [0x01ffeef8]      ; 0050b669 | DAT_01ffeef8
    ADD ESP,0x10                        ; 0050b66f
    ADD EBX,EAX                         ; 0050b672
    CMP EDI,EDX                         ; 0050b674
    JL 0x0050b64e                       ; 0050b676
        ;   XREF to: 0050b64e (CONDITIONAL_JUMP)  ; LAB_0050b64e
    LEA EAX,[EAX]                       ; 0050b678
    MOV EDX,EDX                         ; 0050b67e
    MOV ECX,dword ptr [0x01fff090]      ; 0050b680 | DAT_01fff090
        ;   Label: LAB_0050b680
    XOR EDI,EDI                         ; 0050b686
    TEST ECX,ECX                        ; 0050b688
    JLE 0x0050b6c0                      ; 0050b68a
        ;   XREF to: 0050b6c0 (CONDITIONAL_JUMP)  ; LAB_0050b6c0
    XOR ESI,ESI                         ; 0050b68c
    PUSH EBP                            ; 0050b68e
        ;   Label: LAB_0050b68e
    MOV EAX,dword ptr [ESP + 0x54]      ; 0050b68f
    PUSH EAX                            ; 0050b693
    MOV EDX,dword ptr [ESI + 0x1fff094] ; 0050b694 | DAT_01fff094 | DAT_01fff098
    PUSH EDX                            ; 0050b69a
    ADD ESI,0x4                         ; 0050b69b
    INC EDI                             ; 0050b69e
    CALL core_dglobe.cpp_CDemonGlobe_getAttenuationAtVertex_FUN_0044d2d0 ; 0050b69f
        ;   XREF to: 0044d2d0 (UNCONDITIONAL_CALL)  ; undefined core_dglobe.cpp_CDemonGlobe_getAttenuationAtVertex_FUN_0044d2d0()
    MOV ECX,dword ptr [0x01fff090]      ; 0050b6a4 | DAT_01fff090
    ADD ESP,0xc                         ; 0050b6aa
    ADD EBX,EAX                         ; 0050b6ad
    CMP EDI,ECX                         ; 0050b6af
    JL 0x0050b68e                       ; 0050b6b1
        ;   XREF to: 0050b68e (CONDITIONAL_JUMP)  ; LAB_0050b68e
    LEA EAX,[EAX]                       ; 0050b6b3
    LEA EDX,[EDX]                       ; 0050b6b9
    NOP                                 ; 0050b6bf
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0050b6c0
        ;   Label: LAB_0050b6c0
    XOR ESI,ESI                         ; 0050b6c4
    MOV EDI,dword ptr [EAX + 0x15a8cc]  ; 0050b6c6
    MOV dword ptr [ESP + 0x30],ESI      ; 0050b6cc
    TEST EDI,EDI                        ; 0050b6d0
    JLE 0x0050b779                      ; 0050b6d2
        ;   XREF to: 0050b779 (CONDITIONAL_JUMP)  ; LAB_0050b779
    MOV dword ptr [ESP + 0x34],EAX      ; 0050b6d8
    MOV EAX,dword ptr [ESP + 0x34]      ; 0050b6dc
        ;   Label: LAB_0050b6dc
    MOV ESI,dword ptr [ESP + 0x50]      ; 0050b6e0
    MOV EAX,dword ptr [EAX + 0x15a8d0]  ; 0050b6e4
    PUSH ESI                            ; 0050b6ea
    ADD EAX,0x1e4                       ; 0050b6eb
    PUSH EAX                            ; 0050b6f0
    LEA ESI,[ESP + 0x14]                ; 0050b6f1
    LEA EDI,[ESP + 0x8]                 ; 0050b6f5
    CALL core_mirror.cpp_CMirrorReflection_transformMirrorVertex_FUN_004d7b30 ; 0050b6f9
        ;   XREF to: 004d7b30 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_CMirrorReflection_transformMirrorVertex_FUN_004d7b30()
    LEA ESI,[ESP + 0x14]                ; 0050b6fe
    ADD ESP,0x8                         ; 0050b702
    MOVSD ES:EDI,ESI                    ; 0050b705
    MOVSD ES:EDI,ESI                    ; 0050b706
    MOVSD ES:EDI,ESI                    ; 0050b707
    TEST EBP,EBP                        ; 0050b708
    JNZ 0x0050b7a6                      ; 0050b70a
        ;   XREF to: 0050b7a6 (CONDITIONAL_JUMP)  ; LAB_0050b7a6
    MOV EAX,[0x01fba2d8]                ; 0050b710 | DAT_01fba2d8
        ;   Label: LAB_0050b710
    XOR EDI,EDI                         ; 0050b715
    TEST EAX,EAX                        ; 0050b717
    JLE 0x0050b753                      ; 0050b719
        ;   XREF to: 0050b753 (CONDITIONAL_JUMP)  ; LAB_0050b753
    XOR ESI,ESI                         ; 0050b71b
    TEST EBP,EBP                        ; 0050b71d
        ;   Label: LAB_0050b71d
    JZ 0x0050b7d8                       ; 0050b71f
        ;   XREF to: 0050b7d8 (CONDITIONAL_JUMP)  ; LAB_0050b7d8
    LEA EAX,[ESP + 0x24]                ; 0050b725
    PUSH EAX                            ; 0050b729
    MOV EAX,dword ptr [ESI + 0x1fba2dc] ; 0050b72a
    PUSH EAX                            ; 0050b730
    LEA EAX,[ESP + 0x8]                 ; 0050b731
        ;   Label: LAB_0050b731
    PUSH EAX                            ; 0050b735
    PUSH 0x1fb8508                      ; 0050b736
    CALL core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50 ; 0050b73b
        ;   XREF to: 00442c50 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50()
    ADD ESP,0x10                        ; 0050b740
    ADD EBX,EAX                         ; 0050b743
    MOV EDX,dword ptr [0x01fba2d8]      ; 0050b745 | DAT_01fba2d8
    INC EDI                             ; 0050b74b
    ADD ESI,0x4                         ; 0050b74c
    CMP EDI,EDX                         ; 0050b74f
    JL 0x0050b71d                       ; 0050b751
        ;   XREF to: 0050b71d (CONDITIONAL_JUMP)  ; LAB_0050b71d
    MOV EAX,dword ptr [ESP + 0x34]      ; 0050b753
        ;   Label: LAB_0050b753
    MOV EDX,dword ptr [ESP + 0x30]      ; 0050b757
    MOV ESI,dword ptr [ESP + 0x4c]      ; 0050b75b
    ADD EAX,0x4                         ; 0050b75f
    INC EDX                             ; 0050b762
    MOV ECX,dword ptr [ESI + 0x15a8cc]  ; 0050b763
    MOV dword ptr [ESP + 0x34],EAX      ; 0050b769
    MOV dword ptr [ESP + 0x30],EDX      ; 0050b76d
    CMP EDX,ECX                         ; 0050b771
    JL 0x0050b6dc                       ; 0050b773
        ;   XREF to: 0050b6dc (CONDITIONAL_JUMP)  ; LAB_0050b6dc
    MOV EAX,EBX                         ; 0050b779
        ;   Label: LAB_0050b779
    ADD ESP,0x38                        ; 0050b77b
    POP EBP                             ; 0050b77e
    POP EDI                             ; 0050b77f
    POP ESI                             ; 0050b780
    POP EBX                             ; 0050b781
    RET                                 ; 0050b782
    PUSH 0x1fff57c                      ; 0050b783 | DAT_01fff57c
        ;   Label: LAB_0050b783
    PUSH 0x1fff570                      ; 0050b788 | DAT_01fff570
    PUSH 0x1fff564                      ; 0050b78d | DAT_01fff564
    PUSH 0x1fff558                      ; 0050b792 | DAT_01fff558
    PUSH 0x1fff54c                      ; 0050b797 | DAT_01fff54c
    MOV EBX,dword ptr [ESP + 0x60]      ; 0050b79c
    PUSH EBX                            ; 0050b7a0
    JMP 0x0050b5ed                      ; 0050b7a1
        ;   XREF to: 0050b5ed (UNCONDITIONAL_JUMP)  ; LAB_0050b5ed
    MOV EAX,dword ptr [ESP + 0x34]      ; 0050b7a6
        ;   Label: LAB_0050b7a6
    PUSH EBP                            ; 0050b7aa
    MOV EDI,dword ptr [ESP + 0x54]      ; 0050b7ab
    MOV EAX,dword ptr [EAX + 0x15a8d0]  ; 0050b7af
    PUSH EDI                            ; 0050b7b5
    ADD EAX,0x1e4                       ; 0050b7b6
    PUSH EAX                            ; 0050b7bb
    LEA ESI,[ESP + 0x24]                ; 0050b7bc
    LEA EDI,[ESP + 0x30]                ; 0050b7c0
    CALL core_mirror.cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_004d7bd0 ; 0050b7c4
        ;   XREF to: 004d7bd0 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_004d7bd0()
    LEA ESI,[ESP + 0x24]                ; 0050b7c9
    ADD ESP,0xc                         ; 0050b7cd
    MOVSD ES:EDI,ESI                    ; 0050b7d0
    MOVSD ES:EDI,ESI                    ; 0050b7d1
    MOVSD ES:EDI,ESI                    ; 0050b7d2
    JMP 0x0050b710                      ; 0050b7d3
        ;   XREF to: 0050b710 (UNCONDITIONAL_JUMP)  ; LAB_0050b710
    PUSH EBP                            ; 0050b7d8
        ;   Label: LAB_0050b7d8
    MOV ECX,dword ptr [ESI + 0x1fba2dc] ; 0050b7d9
    PUSH ECX                            ; 0050b7df
    JMP 0x0050b731                      ; 0050b7e0
        ;   XREF to: 0050b731 (UNCONDITIONAL_JUMP)  ; LAB_0050b731

