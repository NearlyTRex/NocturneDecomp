; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00497900(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x200]:4  local_200
; undefined4       Stack[-0x1f8]:4  local_1f8
; undefined        Stack[-0x1f4]:1  local_1f4
; undefined        Stack[-0x1e4]:1  local_1e4
; undefined        Stack[-0x1d4]:1  local_1d4
; undefined        Stack[-0x1c4]:1  local_1c4
; undefined        Stack[-0x1b4]:1  local_1b4
; undefined        Stack[-0x1a4]:1  local_1a4
; undefined        Stack[-0x194]:1  local_194
; undefined        Stack[-0x184]:1  local_184
; undefined        Stack[-0x174]:1  local_174
; undefined        Stack[-0x164]:1  local_164
; undefined        Stack[-0x154]:1  local_154
; undefined        Stack[-0x144]:1  local_144
; undefined        Stack[-0x134]:1  local_134
; undefined        Stack[-0x124]:1  local_124
; undefined        Stack[-0x114]:1  local_114
; undefined        Stack[-0x104]:1  local_104
; undefined        Stack[-0xf4]:1  local_f4
; undefined        Stack[-0xe4]:1  local_e4
; undefined        Stack[-0xd4]:1  local_d4
; undefined        Stack[-0xc4]:1  local_c4
; undefined        Stack[-0xb4]:1  local_b4
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined8       Stack[-0x58]:8  local_58
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   FUN_00495a20 at 0049604f
;
; Referenced Globals:
;   float FLOAT_005820f6 = 1.897749E+28
;   double DOUBLE_00582102 = 0.00100000000000000
;   double DOUBLE_0058210a = 0.900000000000000
;   float FLOAT_00582112 = 3.141593
;   float FLOAT_00582116 = 180
;   float FLOAT_0058211a = 0.005555556
;   float FLOAT_0058211e = -1.221730
;   double DOUBLE_00582122 = 1.30000000000000
;   float FLOAT_0059dca0 = 0.2000000
;   float FLOAT_0059dca4 = 0.6400000
;   float FLOAT_0059dca8 = 0.8200000
;   undefined4 DAT_01c71344
;   undefined4 DAT_01c71348
;   undefined4 DAT_01c7134c
;   undefined4 DAT_01c71350
;   ... and 15 more
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
;   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920
;   core_xform.cpp_FUN_0055d4a0
;   core_xform.cpp_FUN_0055d4e0
;   core_xform.cpp_FUN_0055d520
;   core_xform.cpp_FUN_0055d610
;   core_xform.cpp_multiplyQuaternion_FUN_0055d130
;   core_xform.cpp_slerpQuaternion_FUN_0055d2d0
;   FUN_00497810
;   FUN_00497860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00497900
        ;   Label: FUN_00497900
    PUSH ESI                            ; 00497901
    PUSH EDI                            ; 00497902
    PUSH EBP                            ; 00497903
    MOV EBP,ESP                         ; 00497904
    SUB ESP,0x1e4                       ; 00497906
    SUB EBP,0x7e                        ; 0049790c
    MOV EBX,dword ptr [EBP + 0x92]      ; 0049790f
    LEA EAX,[EBX + 0x150]               ; 00497915
    PUSH EAX                            ; 0049791b
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 0049791c
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0()
    MOV EAX,dword ptr [EBX + 0x1fa6c]   ; 00497921
    XOR EDX,EDX                         ; 00497927
    MOV dword ptr [EBP + 0x16],EAX      ; 00497929
    MOV dword ptr [EBP + 0x1e],EDX      ; 0049792c
    MOV EAX,dword ptr [EBX + 0x1fa70]   ; 0049792f
    ADD ESP,0x4                         ; 00497935
    MOV dword ptr [EBP + 0x1a],EAX      ; 00497938
    LEA EAX,[EBP + 0x16]                ; 0049793b
    PUSH EAX                            ; 0049793e
    LEA ESI,[EBP + 0xffffff6a]          ; 0049793f
    LEA EDI,[EBP + 0xfffffeea]          ; 00497945
    CALL core_xform.cpp_FUN_0055d610    ; 0049794b
        ;   XREF to: 0055d610 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_0055d610()
    LEA ESI,[EBP + 0xffffff6a]          ; 00497950
    MOVSD ES:EDI,ESI                    ; 00497956
    MOVSD ES:EDI,ESI                    ; 00497957
    MOVSD ES:EDI,ESI                    ; 00497958
    MOVSD ES:EDI,ESI                    ; 00497959
    ADD ESP,0x4                         ; 0049795a
    FLD float ptr [EBX + 0x1fa44]       ; 0049795d
    FLDZ                                ; 00497963
    FCOMPP                              ; 00497965
    FNSTSW AX                           ; 00497967
    SAHF                                ; 00497969
    JC 0x00497b08                       ; 0049796a
        ;   XREF to: 00497b08 (CONDITIONAL_JUMP)  ; LAB_00497b08
    FLD float ptr [EBP + 0x16]          ; 00497970
        ;   Label: LAB_00497970
    MOV EDX,0x3f490fdb                  ; 00497973
    MOV ECX,0xbfdf66f3                  ; 00497978
    MOV ESI,0x3fdf66f3                  ; 0049797d
    MOV dword ptr [EBP + 0x52],EDX      ; 00497982
    MOV dword ptr [EBP + 0x5e],ECX      ; 00497985
    MOV dword ptr [EBP + 0x56],ESI      ; 00497988
    FCOMP float ptr [0x0058211e]        ; 0049798b | FLOAT_0058211e
    FNSTSW AX                           ; 00497991
    SAHF                                ; 00497993
    JNC 0x0049799d                      ; 00497994
        ;   XREF to: 0049799d (CONDITIONAL_JUMP)  ; LAB_0049799d
    MOV dword ptr [EBP + 0x16],0xbf9c61aa ; 00497996
    FLD float ptr [EBP + 0x16]          ; 0049799d
        ;   Label: LAB_0049799d
    FCOMP float ptr [EBP + 0x52]        ; 004979a0
    FNSTSW AX                           ; 004979a3
    SAHF                                ; 004979a5
    JBE 0x004979ae                      ; 004979a6
        ;   XREF to: 004979ae (CONDITIONAL_JUMP)  ; LAB_004979ae
    MOV EAX,dword ptr [EBP + 0x52]      ; 004979a8
    MOV dword ptr [EBP + 0x16],EAX      ; 004979ab
    FLD float ptr [EBP + 0x1a]          ; 004979ae
        ;   Label: LAB_004979ae
    FCOMP float ptr [EBP + 0x5e]        ; 004979b1
    FNSTSW AX                           ; 004979b4
    SAHF                                ; 004979b6
    JNC 0x004979bf                      ; 004979b7
        ;   XREF to: 004979bf (CONDITIONAL_JUMP)  ; LAB_004979bf
    MOV EAX,dword ptr [EBP + 0x5e]      ; 004979b9
    MOV dword ptr [EBP + 0x1a],EAX      ; 004979bc
    FLD float ptr [EBP + 0x1a]          ; 004979bf
        ;   Label: LAB_004979bf
    FCOMP float ptr [EBP + 0x56]        ; 004979c2
    FNSTSW AX                           ; 004979c5
    SAHF                                ; 004979c7
    JBE 0x004979d0                      ; 004979c8
        ;   XREF to: 004979d0 (CONDITIONAL_JUMP)  ; LAB_004979d0
    MOV EAX,dword ptr [EBP + 0x56]      ; 004979ca
    MOV dword ptr [EBP + 0x1a],EAX      ; 004979cd
    PUSH 0x51b650                       ; 004979d0
        ;   Label: LAB_004979d0
    MOV EAX,[0x01c71398]                ; 004979d5 | DAT_01c71398
    FLD float ptr [EBX + 0x1fa48]       ; 004979da
    PUSH EAX                            ; 004979e0
    FMUL float ptr [EBX + 0x1fa78]      ; 004979e1
    SUB ESP,0x4                         ; 004979e7
    LEA EAX,[EBP + 0x16]                ; 004979ea
    FSTP float ptr [ESP]                ; 004979ed
    PUSH EAX                            ; 004979f0
    LEA ESI,[EBP + -0x36]               ; 004979f1
    CALL core_xform.cpp_FUN_0055d610    ; 004979f4
        ;   XREF to: 0055d610 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_0055d610()
    ADD ESP,0x4                         ; 004979f9
    LEA EAX,[EBP + 0xfffffefa]          ; 004979fc
    LEA EDI,[EBP + 0xfffffefa]          ; 00497a02
    PUSH EAX                            ; 00497a08
    LEA EAX,[EBX + 0x150]               ; 00497a09
    LEA ESI,[EBP + -0x36]               ; 00497a0f
    PUSH EAX                            ; 00497a12
    MOVSD ES:EDI,ESI                    ; 00497a13
    MOVSD ES:EDI,ESI                    ; 00497a14
    MOVSD ES:EDI,ESI                    ; 00497a15
    MOVSD ES:EDI,ESI                    ; 00497a16
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0 ; 00497a17
        ;   XREF to: 0051cfd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0()
    ADD ESP,0x14                        ; 00497a1c
    PUSH EBX                            ; 00497a1f
    CALL FUN_00497810                   ; 00497a20
        ;   XREF to: 00497810 (UNCONDITIONAL_CALL)  ; undefined FUN_00497810()
    MOV dword ptr [EBP + 0x7a],EAX      ; 00497a25
    ADD ESP,0x4                         ; 00497a28
    FLD float ptr [EBP + 0x7a]          ; 00497a2b
    PUSH EBX                            ; 00497a2e
    FSTP float ptr [EBP + 0x42]         ; 00497a2f
    CALL FUN_00497860                   ; 00497a32
        ;   XREF to: 00497860 (UNCONDITIONAL_CALL)  ; undefined FUN_00497860()
    FLD float ptr [EBX + 0x1fa50]       ; 00497a37
    MOV dword ptr [EBP + 0x7a],EAX      ; 00497a3d
    FSUB float ptr [EBP + 0x42]         ; 00497a40
    FLD float ptr [EBP + 0x7a]          ; 00497a43
    FSUB float ptr [EBP + 0x42]         ; 00497a46
    FDIVP                               ; 00497a49
    FLD1                                ; 00497a4b
    FSUBRP                              ; 00497a4d
    FMUL double ptr [0x00582122]        ; 00497a4f | DOUBLE_00582122
    ADD ESP,0x4                         ; 00497a55
    FST float ptr [0x01c71394]          ; 00497a58 | DAT_01c71394
    FLD1                                ; 00497a5e
    FCOMPP                              ; 00497a60
    FNSTSW AX                           ; 00497a62
    SAHF                                ; 00497a64
    JNC 0x00497a71                      ; 00497a65
        ;   XREF to: 00497a71 (CONDITIONAL_JUMP)  ; LAB_00497a71
    MOV dword ptr [0x01c71394],0x3f800000 ; 00497a67 | DAT_01c71394
    PUSH 0x4955c0                       ; 00497a71
        ;   Label: LAB_00497a71
    MOV ECX,dword ptr [0x01c7139c]      ; 00497a76 | DAT_01c7139c
    PUSH ECX                            ; 00497a7c
    PUSH dword ptr [EBX + 0x1fa4c]      ; 00497a7d
    LEA ESI,[EBP + -0x46]               ; 00497a83
    PUSH dword ptr [EBX + 0x1fa50]      ; 00497a86
    LEA EDI,[EBP + 0xffffff3a]          ; 00497a8c
    CALL core_xform.cpp_FUN_0055d4a0    ; 00497a92
        ;   XREF to: 0055d4a0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_0055d4a0()
    ADD ESP,0x4                         ; 00497a97
    LEA EAX,[EBP + 0xffffff3a]          ; 00497a9a
    LEA ESI,[EBP + -0x46]               ; 00497aa0
    PUSH EAX                            ; 00497aa3
    MOVSD ES:EDI,ESI                    ; 00497aa4
    MOVSD ES:EDI,ESI                    ; 00497aa5
    MOVSD ES:EDI,ESI                    ; 00497aa6
    MOVSD ES:EDI,ESI                    ; 00497aa7
    PUSH 0x3fc90fdb                     ; 00497aa8
    LEA ESI,[EBP + 0xffffff5a]          ; 00497aad
    LEA EDI,[EBP + 0xffffff2a]          ; 00497ab3
    CALL core_xform.cpp_FUN_0055d4e0    ; 00497ab9
        ;   XREF to: 0055d4e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_0055d4e0()
    LEA ESI,[EBP + 0xffffff5a]          ; 00497abe
    LEA EAX,[EBP + 0xffffff2a]          ; 00497ac4
    ADD ESP,0x4                         ; 00497aca
    MOVSD ES:EDI,ESI                    ; 00497acd
    MOVSD ES:EDI,ESI                    ; 00497ace
    MOVSD ES:EDI,ESI                    ; 00497acf
    MOVSD ES:EDI,ESI                    ; 00497ad0
    PUSH EAX                            ; 00497ad1
    LEA ESI,[EBP + -0x6]                ; 00497ad2
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 00497ad5
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_0055d130()
    ADD ESP,0x8                         ; 00497ada
    LEA EAX,[EBP + 0xffffff4a]          ; 00497add
    ADD EBX,0x150                       ; 00497ae3
    PUSH EAX                            ; 00497ae9
    LEA EDI,[EBP + 0xffffff4a]          ; 00497aea
    LEA ESI,[EBP + -0x6]                ; 00497af0
    PUSH EBX                            ; 00497af3
    MOVSD ES:EDI,ESI                    ; 00497af4
    MOVSD ES:EDI,ESI                    ; 00497af5
    MOVSD ES:EDI,ESI                    ; 00497af6
    MOVSD ES:EDI,ESI                    ; 00497af7
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0 ; 00497af8
        ;   XREF to: 0051cfd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0()
    ADD ESP,0x14                        ; 00497afd
    LEA ESP,[EBP + 0x7e]                ; 00497b00
    POP EBP                             ; 00497b03
    POP EDI                             ; 00497b04
    POP ESI                             ; 00497b05
    POP EBX                             ; 00497b06
    RET                                 ; 00497b07
    FLD float ptr [EBX + 0x1fa44]       ; 00497b08
        ;   Label: LAB_00497b08
    FDIV float ptr [0x0059dca0]         ; 00497b0e | FLOAT_0059dca0
    FST float ptr [EBP + 0x66]          ; 00497b14
    FLD1                                ; 00497b17
    FCOMPP                              ; 00497b19
    FNSTSW AX                           ; 00497b1b
    SAHF                                ; 00497b1d
    JNC 0x00497b27                      ; 00497b1e
        ;   XREF to: 00497b27 (CONDITIONAL_JUMP)  ; LAB_00497b27
    MOV dword ptr [EBP + 0x66],0x3f800000 ; 00497b20
    FLD float ptr [EBX + 0x1fa44]       ; 00497b27
        ;   Label: LAB_00497b27
    FCOMP float ptr [0x0059dca8]        ; 00497b2d | FLOAT_0059dca8
    FNSTSW AX                           ; 00497b33
    SAHF                                ; 00497b35
    JBE 0x00497b62                      ; 00497b36
        ;   XREF to: 00497b62 (CONDITIONAL_JUMP)  ; LAB_00497b62
    FLD float ptr [0x0059dca8]          ; 00497b38 | FLOAT_0059dca8
    FLD float ptr [EBX + 0x1fa44]       ; 00497b3e
    FSUB ST0,ST1                        ; 00497b44
    FLD1                                ; 00497b46
    FSUBRP ST2,ST0                      ; 00497b48
    FDIVRP                              ; 00497b4a
    FLD float ptr [EBX + 0x1fa78]       ; 00497b4c
    FLD1                                ; 00497b52
    FSUBRP                              ; 00497b54
    FMULP                               ; 00497b56
    FLD1                                ; 00497b58
    FSUBRP                              ; 00497b5a
    FMUL float ptr [EBP + 0x66]         ; 00497b5c
    FSTP float ptr [EBP + 0x66]         ; 00497b5f
    LEA EAX,[EBX + 0x1f5a0]             ; 00497b62
        ;   Label: LAB_00497b62
    PUSH 0x5820f6                       ; 00497b68 | FLOAT_005820f6
    MOV EAX,dword ptr [EAX + 0x330]     ; 00497b6d
    PUSH EAX                            ; 00497b73
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 00497b74
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 00497b79
    TEST EAX,EAX                        ; 00497b7c
    JZ 0x00497e08                       ; 00497b7e
        ;   XREF to: 00497e08 (CONDITIONAL_JUMP)  ; LAB_00497e08
    FLD float ptr [EBX + 0x1fa44]       ; 00497b84
    FDIV float ptr [0x0059dca4]         ; 00497b8a | FLOAT_0059dca4
    MOV ESI,dword ptr [0x01c713b0]      ; 00497b90 | DAT_01c713b0
    LEA EAX,[EBX + 0x800]               ; 00497b96
    SHL ESI,0x4                         ; 00497b9c
    SUB ESP,0x4                         ; 00497b9f
    ADD ESI,EAX                         ; 00497ba2
    FSTP float ptr [ESP]                ; 00497ba4
    PUSH ESI                            ; 00497ba7
    MOV ESI,dword ptr [0x01c713dc]      ; 00497ba8 | DAT_01c713dc
    SHL ESI,0x4                         ; 00497bae
    ADD EAX,ESI                         ; 00497bb1
    PUSH EAX                            ; 00497bb3
    LEA ESI,[EBP + 0xfffffeca]          ; 00497bb4
    CALL core_xform.cpp_slerpQuaternion_FUN_0055d2d0 ; 00497bba
        ;   XREF to: 0055d2d0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_0055d2d0()
    MOV EAX,[0x01c713dc]                ; 00497bbf | DAT_01c713dc
    SHL EAX,0x4                         ; 00497bc4
    LEA ESI,[EBP + 0xfffffeca]          ; 00497bc7
    LEA EDI,[EBX + EAX*0x1 + 0x800]     ; 00497bcd
    FLD float ptr [EBP + 0x66]          ; 00497bd4
    ADD ESP,0xc                         ; 00497bd7
    MOVSD ES:EDI,ESI                    ; 00497bda
    MOVSD ES:EDI,ESI                    ; 00497bdb
    MOVSD ES:EDI,ESI                    ; 00497bdc
    MOVSD ES:EDI,ESI                    ; 00497bdd
    FCOMP double ptr [0x00582102]       ; 00497bde | DOUBLE_00582102
    FNSTSW AX                           ; 00497be4
    SAHF                                ; 00497be6
    JBE 0x00497d1f                      ; 00497be7
        ;   XREF to: 00497d1f (CONDITIONAL_JUMP)  ; LAB_00497d1f
    MOV EAX,dword ptr [EBX + 0x1fa44]   ; 00497bed
    MOV dword ptr [EBP + 0x6e],EAX      ; 00497bf3
    FLD float ptr [EBP + 0x6e]          ; 00497bf6
    FCOMP float ptr [0x0059dca8]        ; 00497bf9 | FLOAT_0059dca8
    FNSTSW AX                           ; 00497bff
    SAHF                                ; 00497c01
    JBE 0x00497c0c                      ; 00497c02
        ;   XREF to: 00497c0c (CONDITIONAL_JUMP)  ; LAB_00497c0c
    MOV EAX,[0x0059dca8]                ; 00497c04 | FLOAT_0059dca8
    MOV dword ptr [EBP + 0x6e],EAX      ; 00497c09
    FLD float ptr [0x0059dca0]          ; 00497c0c | FLOAT_0059dca0
        ;   Label: LAB_00497c0c
    FLD float ptr [EBP + 0x6e]          ; 00497c12
    FSUB ST0,ST1                        ; 00497c15
    FLD1                                ; 00497c17
    FSUBRP ST2,ST0                      ; 00497c19
    FDIVRP                              ; 00497c1b
    FST float ptr [EBP + 0x6e]          ; 00497c1d
    FLDZ                                ; 00497c20
    FCOMPP                              ; 00497c22
    FNSTSW AX                           ; 00497c24
    SAHF                                ; 00497c26
    JBE 0x00497c2e                      ; 00497c27
        ;   XREF to: 00497c2e (CONDITIONAL_JUMP)  ; LAB_00497c2e
    XOR EDX,EDX                         ; 00497c29
    MOV dword ptr [EBP + 0x6e],EDX      ; 00497c2b
    FLD float ptr [EBP + 0x6e]          ; 00497c2e
        ;   Label: LAB_00497c2e
    FLD1                                ; 00497c31
    FCOMPP                              ; 00497c33
    FNSTSW AX                           ; 00497c35
    SAHF                                ; 00497c37
    JNC 0x00497c41                      ; 00497c38
        ;   XREF to: 00497c41 (CONDITIONAL_JUMP)  ; LAB_00497c41
    MOV dword ptr [EBP + 0x6e],0x3f800000 ; 00497c3a
    MOV ESI,dword ptr [0x01c713cc]      ; 00497c41 | DAT_01c713cc
        ;   Label: LAB_00497c41
    PUSH dword ptr [EBP + 0x6e]         ; 00497c47
    PUSH ESI                            ; 00497c4a
    LEA ESI,[EBX + 0x150]               ; 00497c4b
    PUSH ESI                            ; 00497c51
    CALL core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50 ; 00497c52
        ;   XREF to: 004e1f50 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50()
    ADD ESP,0xc                         ; 00497c57
    PUSH 0x51b650                       ; 00497c5a
    MOV EDI,dword ptr [0x01c713a8]      ; 00497c5f | DAT_01c713a8
    MOV dword ptr [EBP + 0x7a],EAX      ; 00497c65
    PUSH EDI                            ; 00497c68
    FLD float ptr [EBP + 0x7a]          ; 00497c69
    MOV EAX,[0x01c713cc]                ; 00497c6c | DAT_01c713cc
    PUSH dword ptr [EBP + 0x66]         ; 00497c71
    FSTP float ptr [EBP + 0x4a]         ; 00497c74
    PUSH dword ptr [EBP + 0x4a]         ; 00497c77
    PUSH EAX                            ; 00497c7a
    PUSH ESI                            ; 00497c7b
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0 ; 00497c7c
        ;   XREF to: 0051c3d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0()
    FLD float ptr [EBX + 0x1fa44]       ; 00497c81
    ADD ESP,0x18                        ; 00497c87
    FCOMP float ptr [0x0059dca8]        ; 00497c8a | FLOAT_0059dca8
    FNSTSW AX                           ; 00497c90
    SAHF                                ; 00497c92
    JC 0x00497d1f                       ; 00497c93
        ;   XREF to: 00497d1f (CONDITIONAL_JUMP)  ; LAB_00497d1f
    FLD float ptr [0x0059dca8]          ; 00497c99 | FLOAT_0059dca8
    FLD float ptr [EBX + 0x1fa44]       ; 00497c9f
    FSUB ST0,ST1                        ; 00497ca5
    FLD1                                ; 00497ca7
    FSUBRP ST2,ST0                      ; 00497ca9
    FDIVRP                              ; 00497cab
    FMUL float ptr [EBX + 0x1fa78]      ; 00497cad
    FST float ptr [EBP + 0x4e]          ; 00497cb3
    FCOMP double ptr [0x00582102]       ; 00497cb6 | DOUBLE_00582102
    FNSTSW AX                           ; 00497cbc
    SAHF                                ; 00497cbe
    JBE 0x00497d1f                      ; 00497cbf
        ;   XREF to: 00497d1f (CONDITIONAL_JUMP)  ; LAB_00497d1f
    MOV AH,byte ptr [0x01c71354]        ; 00497cc1 | DAT_01c71354
    TEST AH,0x1                         ; 00497cc7
    JZ 0x00497d99                       ; 00497cca
        ;   XREF to: 00497d99 (CONDITIONAL_JUMP)  ; LAB_00497d99
    LEA EAX,[EBP + 0xfffffeea]          ; 00497cd0
        ;   Label: LAB_00497cd0
    PUSH EAX                            ; 00497cd6
    PUSH 0x1c71344                      ; 00497cd7 | DAT_01c71344
    LEA ESI,[EBP + 0xfffffeba]          ; 00497cdc
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 00497ce2
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_0055d130()
    ADD ESP,0x8                         ; 00497ce7
    PUSH 0x495580                       ; 00497cea
    MOV EDX,dword ptr [0x01c713a8]      ; 00497cef | DAT_01c713a8
    PUSH EDX                            ; 00497cf5
    LEA EAX,[EBP + 0xffffff7a]          ; 00497cf6
    PUSH dword ptr [EBP + 0x4e]         ; 00497cfc
    LEA EDI,[EBP + 0xffffff7a]          ; 00497cff
    PUSH EAX                            ; 00497d05
    LEA EAX,[EBX + 0x150]               ; 00497d06
    LEA ESI,[EBP + 0xfffffeba]          ; 00497d0c
    PUSH EAX                            ; 00497d12
    MOVSD ES:EDI,ESI                    ; 00497d13
    MOVSD ES:EDI,ESI                    ; 00497d14
    MOVSD ES:EDI,ESI                    ; 00497d15
    MOVSD ES:EDI,ESI                    ; 00497d16
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0 ; 00497d17
        ;   XREF to: 0051cfd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0()
    ADD ESP,0x14                        ; 00497d1c
    FLD float ptr [EBX + 0x1fa74]       ; 00497d1f
        ;   Label: LAB_00497d1f
    FLDZ                                ; 00497d25
    FCOMPP                              ; 00497d27
    FNSTSW AX                           ; 00497d29
    SAHF                                ; 00497d2b
    JNC 0x00497970                      ; 00497d2c
        ;   XREF to: 00497970 (CONDITIONAL_JUMP)  ; LAB_00497970
    FLD float ptr [EBX + 0x1fa74]       ; 00497d32
    FMUL double ptr [0x0058210a]        ; 00497d38 | DOUBLE_0058210a
    SUB ESP,0x4                         ; 00497d3e
    MOV dword ptr [EBX + 0x23a0],0x2    ; 00497d41
    FLD1                                ; 00497d4b
    FSUBRP                              ; 00497d4d
    MOV ECX,dword ptr [0x01c713d4]      ; 00497d4f | DAT_01c713d4
    FSTP float ptr [ESP]                ; 00497d55
    PUSH ECX                            ; 00497d58
    LEA ESI,[EBX + 0x150]               ; 00497d59
    PUSH ESI                            ; 00497d5f
    CALL core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50 ; 00497d60
        ;   XREF to: 004e1f50 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50()
    MOV EDI,dword ptr [0x01c713b0]      ; 00497d65 | DAT_01c713b0
    MOV dword ptr [EBP + 0x7a],EAX      ; 00497d6b
    ADD ESP,0xc                         ; 00497d6e
    FLD float ptr [EBP + 0x7a]          ; 00497d71
    MOV EAX,[0x01c713d4]                ; 00497d74 | DAT_01c713d4
    PUSH EDI                            ; 00497d79
    FSTP float ptr [EBP + 0x76]         ; 00497d7a
    PUSH dword ptr [EBP + 0x76]         ; 00497d7d
    PUSH EAX                            ; 00497d80
    PUSH ESI                            ; 00497d81
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920 ; 00497d82
        ;   XREF to: 0051b920 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920()
    ADD ESP,0x10                        ; 00497d87
    MOV dword ptr [EBX + 0x23a0],0x0    ; 00497d8a
    JMP 0x00497970                      ; 00497d94
        ;   XREF to: 00497970 (UNCONDITIONAL_JUMP)  ; LAB_00497970
    PUSH 0xbfc90fdb                     ; 00497d99
        ;   Label: LAB_00497d99
    MOV DL,AH                           ; 00497d9e
    LEA ESI,[EBP + -0x56]               ; 00497da0
    OR DL,0x1                           ; 00497da3
    LEA EDI,[EBP + -0x16]               ; 00497da6
    MOV byte ptr [0x01c71354],DL        ; 00497da9 | DAT_01c71354
    CALL core_xform.cpp_FUN_0055d520    ; 00497daf
        ;   XREF to: 0055d520 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_0055d520()
    ADD ESP,0x4                         ; 00497db4
    LEA EAX,[EBP + -0x16]               ; 00497db7
    LEA ESI,[EBP + -0x56]               ; 00497dba
    PUSH EAX                            ; 00497dbd
    MOVSD ES:EDI,ESI                    ; 00497dbe
    MOVSD ES:EDI,ESI                    ; 00497dbf
    MOVSD ES:EDI,ESI                    ; 00497dc0
    MOVSD ES:EDI,ESI                    ; 00497dc1
    PUSH 0xbfc90fdb                     ; 00497dc2
    LEA ESI,[EBP + 0xfffffe9a]          ; 00497dc7
    LEA EDI,[EBP + -0x26]               ; 00497dcd
    CALL core_xform.cpp_FUN_0055d4e0    ; 00497dd0
        ;   XREF to: 0055d4e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_0055d4e0()
    LEA ESI,[EBP + 0xfffffe9a]          ; 00497dd5
    LEA EAX,[EBP + -0x26]               ; 00497ddb
    ADD ESP,0x4                         ; 00497dde
    MOVSD ES:EDI,ESI                    ; 00497de1
    MOVSD ES:EDI,ESI                    ; 00497de2
    MOVSD ES:EDI,ESI                    ; 00497de3
    MOVSD ES:EDI,ESI                    ; 00497de4
    PUSH EAX                            ; 00497de5
    LEA ESI,[EBP + 0xfffffeaa]          ; 00497de6
    MOV EDI,0x1c71344                   ; 00497dec
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 00497df1
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_0055d130()
    LEA ESI,[EBP + 0xfffffeaa]          ; 00497df6
    ADD ESP,0x8                         ; 00497dfc
    MOVSD ES:EDI,ESI                    ; 00497dff | DAT_01c71344
    MOVSD ES:EDI,ESI                    ; 00497e00 | DAT_01c71348
    MOVSD ES:EDI,ESI                    ; 00497e01 | DAT_01c7134c
    MOVSD ES:EDI,ESI                    ; 00497e02 | DAT_01c71350
    JMP 0x00497cd0                      ; 00497e03
        ;   XREF to: 00497cd0 (UNCONDITIONAL_JUMP)  ; LAB_00497cd0
    FLD float ptr [EBP + 0x66]          ; 00497e08
        ;   Label: LAB_00497e08
    FCOMP double ptr [0x00582102]       ; 00497e0b | DOUBLE_00582102
    FNSTSW AX                           ; 00497e11
    SAHF                                ; 00497e13
    JBE 0x0049800b                      ; 00497e14
        ;   XREF to: 0049800b (CONDITIONAL_JUMP)  ; LAB_0049800b
    MOV EAX,dword ptr [EBX + 0x1fa44]   ; 00497e1a
    MOV dword ptr [EBP + 0x6a],EAX      ; 00497e20
    FLD float ptr [EBP + 0x6a]          ; 00497e23
    FCOMP float ptr [0x0059dca8]        ; 00497e26 | FLOAT_0059dca8
    FNSTSW AX                           ; 00497e2c
    SAHF                                ; 00497e2e
    JBE 0x00497e39                      ; 00497e2f
        ;   XREF to: 00497e39 (CONDITIONAL_JUMP)  ; LAB_00497e39
    MOV EAX,[0x0059dca8]                ; 00497e31 | FLOAT_0059dca8
    MOV dword ptr [EBP + 0x6a],EAX      ; 00497e36
    FLD float ptr [0x0059dca0]          ; 00497e39 | FLOAT_0059dca0
        ;   Label: LAB_00497e39
    FLD float ptr [EBP + 0x6a]          ; 00497e3f
    FSUB ST0,ST1                        ; 00497e42
    FLD1                                ; 00497e44
    FSUBRP ST2,ST0                      ; 00497e46
    FDIVRP                              ; 00497e48
    FST float ptr [EBP + 0x6a]          ; 00497e4a
    FLDZ                                ; 00497e4d
    FCOMPP                              ; 00497e4f
    FNSTSW AX                           ; 00497e51
    SAHF                                ; 00497e53
    JBE 0x00497e5b                      ; 00497e54
        ;   XREF to: 00497e5b (CONDITIONAL_JUMP)  ; LAB_00497e5b
    XOR ESI,ESI                         ; 00497e56
    MOV dword ptr [EBP + 0x6a],ESI      ; 00497e58
    FLD float ptr [EBP + 0x6a]          ; 00497e5b
        ;   Label: LAB_00497e5b
    FLD1                                ; 00497e5e
    FCOMPP                              ; 00497e60
    FNSTSW AX                           ; 00497e62
    SAHF                                ; 00497e64
    JNC 0x00497e6e                      ; 00497e65
        ;   XREF to: 00497e6e (CONDITIONAL_JUMP)  ; LAB_00497e6e
    MOV dword ptr [EBP + 0x6a],0x3f800000 ; 00497e67
    MOV EAX,[0x01c713cc]                ; 00497e6e | DAT_01c713cc
        ;   Label: LAB_00497e6e
    PUSH dword ptr [EBP + 0x6a]         ; 00497e73
    PUSH EAX                            ; 00497e76
    LEA ESI,[EBX + 0x150]               ; 00497e77
    PUSH ESI                            ; 00497e7d
    CALL core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50 ; 00497e7e
        ;   XREF to: 004e1f50 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50()
    ADD ESP,0xc                         ; 00497e83
    MOV EDX,dword ptr [0x01c713a8]      ; 00497e86 | DAT_01c713a8
    PUSH 0x51b650                       ; 00497e8c
    MOV ECX,dword ptr [0x01c713cc]      ; 00497e91 | DAT_01c713cc
    MOV dword ptr [EBP + 0x7a],EAX      ; 00497e97
    PUSH EDX                            ; 00497e9a
    FLD float ptr [EBP + 0x7a]          ; 00497e9b
    PUSH dword ptr [EBP + 0x66]         ; 00497e9e
    FSTP float ptr [EBP + 0x3e]         ; 00497ea1
    PUSH dword ptr [EBP + 0x3e]         ; 00497ea4
    PUSH ECX                            ; 00497ea7
    PUSH ESI                            ; 00497ea8
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0 ; 00497ea9
        ;   XREF to: 0051c3d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0()
    FLD float ptr [EBX + 0x1fa44]       ; 00497eae
    ADD ESP,0x18                        ; 00497eb4
    FCOMP float ptr [0x0059dca8]        ; 00497eb7 | FLOAT_0059dca8
    FNSTSW AX                           ; 00497ebd
    SAHF                                ; 00497ebf
    JC 0x0049800b                       ; 00497ec0
        ;   XREF to: 0049800b (CONDITIONAL_JUMP)  ; LAB_0049800b
    FLD float ptr [0x0059dca8]          ; 00497ec6 | FLOAT_0059dca8
    FLD float ptr [EBX + 0x1fa44]       ; 00497ecc
    FSUB ST0,ST1                        ; 00497ed2
    FLD1                                ; 00497ed4
    FSUBRP ST2,ST0                      ; 00497ed6
    FDIVRP                              ; 00497ed8
    FMUL float ptr [EBX + 0x1fa78]      ; 00497eda
    FST float ptr [EBP + 0x62]          ; 00497ee0
    FCOMP float ptr [EBX + 0x1fa74]     ; 00497ee3
    FNSTSW AX                           ; 00497ee9
    SAHF                                ; 00497eeb
    JNC 0x00497ef7                      ; 00497eec
        ;   XREF to: 00497ef7 (CONDITIONAL_JUMP)  ; LAB_00497ef7
    MOV EAX,dword ptr [EBX + 0x1fa74]   ; 00497eee
    MOV dword ptr [EBP + 0x62],EAX      ; 00497ef4
    FLD float ptr [EBP + 0x62]          ; 00497ef7
        ;   Label: LAB_00497ef7
    FCOMP double ptr [0x00582102]       ; 00497efa | DOUBLE_00582102
    FNSTSW AX                           ; 00497f00
    SAHF                                ; 00497f02
    JBE 0x0049800b                      ; 00497f03
        ;   XREF to: 0049800b (CONDITIONAL_JUMP)  ; LAB_0049800b
    FLDZ                                ; 00497f09
    FLD float ptr [EBX + 0x1fa74]       ; 00497f0b
    XOR ESI,ESI                         ; 00497f11
    FSTP double ptr [EBP + 0x36]        ; 00497f13
    MOV dword ptr [EBP + 0x5a],ESI      ; 00497f16
    FCOMP double ptr [EBP + 0x36]       ; 00497f19
    FNSTSW AX                           ; 00497f1c
    SAHF                                ; 00497f1e
    JNC 0x00497f29                      ; 00497f1f
        ;   XREF to: 00497f29 (CONDITIONAL_JUMP)  ; LAB_00497f29
    FLD1                                ; 00497f21
    FSUB double ptr [EBP + 0x36]        ; 00497f23
    FSTP float ptr [EBP + 0x5a]         ; 00497f26
    PUSH 0x51b650                       ; 00497f29
        ;   Label: LAB_00497f29
    MOV EDI,dword ptr [0x01c713e0]      ; 00497f2e | DAT_01c713e0
    FLD float ptr [EBP + 0x62]          ; 00497f34
    PUSH EDI                            ; 00497f37
    FMUL double ptr [0x0058210a]        ; 00497f38 | DOUBLE_0058210a
    SUB ESP,0x4                         ; 00497f3e
    FSTP float ptr [ESP]                ; 00497f41
    MOV EAX,[0x01c713d0]                ; 00497f44 | DAT_01c713d0
    PUSH dword ptr [EBP + 0x5a]         ; 00497f49
    PUSH EAX                            ; 00497f4c
    LEA EAX,[EBX + 0x150]               ; 00497f4d
    PUSH EAX                            ; 00497f53
    MOV dword ptr [EBP + 0x7a],EAX      ; 00497f54
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0 ; 00497f57
        ;   XREF to: 0051c3d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0()
    FLD float ptr [0x00582112]          ; 00497f5c | FLOAT_00582112
    FLD float ptr [0x01c71388]          ; 00497f62 | DAT_01c71388
    FMUL ST1                            ; 00497f68
    FST float ptr [EBP + 0xa]           ; 00497f6a
    FDIV float ptr [0x00582116]         ; 00497f6d | FLOAT_00582116
    FLD float ptr [0x01c7138c]          ; 00497f73 | DAT_01c7138c
    FMUL ST2                            ; 00497f79
    FLD float ptr [0x01c71390]          ; 00497f7b | DAT_01c71390
    FMULP ST3                           ; 00497f81
    FST float ptr [EBP + 0xe]           ; 00497f83
    FLD float ptr [0x0058211a]          ; 00497f86 | FLOAT_0058211a
    FXCH                                ; 00497f8c
    FMUL ST1                            ; 00497f8e
    FXCH ST3                            ; 00497f90
    FST float ptr [EBP + 0x12]          ; 00497f92
    FMULP                               ; 00497f95
    ADD ESP,0x18                        ; 00497f97
    LEA EAX,[EBP + 0xfffffeea]          ; 00497f9a
    LEA ESI,[EBP + 0xffffff0a]          ; 00497fa0
    PUSH EAX                            ; 00497fa6
    LEA EAX,[EBP + 0x22]                ; 00497fa7
    LEA EDI,[EBP + 0xffffff1a]          ; 00497faa
    PUSH EAX                            ; 00497fb0
    FXCH ST2                            ; 00497fb1
    FSTP float ptr [EBP + 0x26]         ; 00497fb3
    FXCH                                ; 00497fb6
    FSTP float ptr [EBP + 0x2a]         ; 00497fb8
    FSTP float ptr [EBP + 0x22]         ; 00497fbb
    CALL core_xform.cpp_FUN_0055d610    ; 00497fbe
        ;   XREF to: 0055d610 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_0055d610()
    LEA ESI,[EBP + 0xffffff0a]          ; 00497fc3
    LEA EAX,[EBP + 0xffffff1a]          ; 00497fc9
    ADD ESP,0x4                         ; 00497fcf
    MOVSD ES:EDI,ESI                    ; 00497fd2
    MOVSD ES:EDI,ESI                    ; 00497fd3
    MOVSD ES:EDI,ESI                    ; 00497fd4
    MOVSD ES:EDI,ESI                    ; 00497fd5
    PUSH EAX                            ; 00497fd6
    LEA ESI,[EBP + -0x66]               ; 00497fd7
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 00497fda
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_0055d130()
    ADD ESP,0x8                         ; 00497fdf
    PUSH 0x495610                       ; 00497fe2
    MOV ECX,dword ptr [0x01c713e4]      ; 00497fe7 | DAT_01c713e4
    LEA EDI,[EBP + -0x76]               ; 00497fed
    PUSH ECX                            ; 00497ff0
    LEA ESI,[EBP + -0x66]               ; 00497ff1
    LEA EAX,[EBP + -0x76]               ; 00497ff4
    PUSH dword ptr [EBP + 0x62]         ; 00497ff7
    MOVSD ES:EDI,ESI                    ; 00497ffa
    MOVSD ES:EDI,ESI                    ; 00497ffb
    MOVSD ES:EDI,ESI                    ; 00497ffc
    MOVSD ES:EDI,ESI                    ; 00497ffd
    PUSH EAX                            ; 00497ffe
    MOV ESI,dword ptr [EBP + 0x7a]      ; 00497fff
    PUSH ESI                            ; 00498002
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0 ; 00498003
        ;   XREF to: 0051d7a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0()
    ADD ESP,0x14                        ; 00498008
    FLD float ptr [EBX + 0x1fa44]       ; 0049800b
        ;   Label: LAB_0049800b
    FDIV float ptr [0x0059dca4]         ; 00498011 | FLOAT_0059dca4
    MOV ESI,dword ptr [0x01c713b0]      ; 00498017 | DAT_01c713b0
    LEA EAX,[EBX + 0x800]               ; 0049801d
    SHL ESI,0x4                         ; 00498023
    SUB ESP,0x4                         ; 00498026
    ADD ESI,EAX                         ; 00498029
    FSTP float ptr [ESP]                ; 0049802b
    PUSH ESI                            ; 0049802e
    MOV ESI,dword ptr [0x01c713dc]      ; 0049802f | DAT_01c713dc
    SHL ESI,0x4                         ; 00498035
    ADD EAX,ESI                         ; 00498038
    PUSH EAX                            ; 0049803a
    LEA ESI,[EBP + 0xfffffeda]          ; 0049803b
    CALL core_xform.cpp_slerpQuaternion_FUN_0055d2d0 ; 00498041
        ;   XREF to: 0055d2d0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_0055d2d0()
    MOV ESI,dword ptr [0x01c713dc]      ; 00498046 | DAT_01c713dc
    SHL ESI,0x4                         ; 0049804c
    LEA EDI,[ESI + EBX*0x1 + 0x800]     ; 0049804f
    LEA ESI,[EBP + 0xfffffeda]          ; 00498056
    MOVSD ES:EDI,ESI                    ; 0049805c
    MOVSD ES:EDI,ESI                    ; 0049805d
    MOVSD ES:EDI,ESI                    ; 0049805e
    MOVSD ES:EDI,ESI                    ; 0049805f
    ADD ESP,0xc                         ; 00498060
    FLD float ptr [EBX + 0x1fa74]       ; 00498063
    FLDZ                                ; 00498069
    FCOMPP                              ; 0049806b
    FNSTSW AX                           ; 0049806d
    SAHF                                ; 0049806f
    JNC 0x00497970                      ; 00498070
        ;   XREF to: 00497970 (CONDITIONAL_JUMP)  ; LAB_00497970
    MOV EDI,dword ptr [0x01c713d0]      ; 00498076 | DAT_01c713d0
    PUSH dword ptr [EBX + 0x1fa74]      ; 0049807c
    PUSH EDI                            ; 00498082
    LEA ESI,[EBX + 0x150]               ; 00498083
    PUSH ESI                            ; 00498089
    MOV dword ptr [EBX + 0x23a0],0x2    ; 0049808a
    CALL core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50 ; 00498094
        ;   XREF to: 004e1f50 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50()
    MOV dword ptr [EBP + 0x7a],EAX      ; 00498099
    ADD ESP,0xc                         ; 0049809c
    FLD float ptr [EBP + 0x7a]          ; 0049809f
    PUSH 0x0                            ; 004980a2
    MOV EAX,[0x01c713d0]                ; 004980a4 | DAT_01c713d0
    FSTP float ptr [EBP + 0x72]         ; 004980a9
    PUSH dword ptr [EBP + 0x72]         ; 004980ac
    PUSH EAX                            ; 004980af
    PUSH ESI                            ; 004980b0
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920 ; 004980b1
        ;   XREF to: 0051b920 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920()
    ADD ESP,0x10                        ; 004980b6
    MOV dword ptr [EBX + 0x23a0],0x0    ; 004980b9
    JMP 0x00497970                      ; 004980c3
        ;   XREF to: 00497970 (UNCONDITIONAL_JUMP)  ; LAB_00497970

