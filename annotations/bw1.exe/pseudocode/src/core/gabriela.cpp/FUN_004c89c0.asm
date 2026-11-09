; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_FUN_004c89c0(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x218]:4  local_218
; undefined4       Stack[-0x210]:4  local_210
; undefined        Stack[-0x20c]:1  local_20c
; undefined        Stack[-0x1fc]:1  local_1fc
; undefined        Stack[-0x1ec]:1  local_1ec
; undefined        Stack[-0x1dc]:1  local_1dc
; undefined        Stack[-0x1cc]:1  local_1cc
; undefined        Stack[-0x1bc]:1  local_1bc
; undefined        Stack[-0x1ac]:1  local_1ac
; undefined        Stack[-0x19c]:1  local_19c
; undefined        Stack[-0x18c]:1  local_18c
; undefined        Stack[-0x17c]:1  local_17c
; undefined        Stack[-0x16c]:1  local_16c
; undefined        Stack[-0x15c]:1  local_15c
; undefined        Stack[-0x14c]:1  local_14c
; undefined        Stack[-0x13c]:1  local_13c
; undefined        Stack[-0x12c]:1  local_12c
; undefined        Stack[-0x11c]:1  local_11c
; undefined        Stack[-0x10c]:1  local_10c
; undefined        Stack[-0xfc]:1  local_fc
; undefined        Stack[-0xec]:1  local_ec
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xcc]:1  local_cc
; undefined        Stack[-0xbc]:1  local_bc
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined8       Stack[-0x60]:8  local_60
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
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_gabriela.cpp_FUN_004c65f0 at 004c6c7d
;
; Referenced Globals:
;   undefined4 DAT_005e10b0
;   undefined4 DAT_005e10bc
;   undefined4 DAT_005e10c4
;   undefined4 DAT_005e10cc
;   undefined4 DAT_005e10d0
;   undefined4 DAT_005e10d4
;   undefined4 DAT_005e10dc
;   undefined4 DAT_00600d50
;   undefined4 DAT_00600d54
;   undefined4 DAT_00600d58
;   undefined4 DAT_01cc90b4
;   undefined4 DAT_01cc90b8
;   undefined4 DAT_01cc90bc
;   undefined4 DAT_01cc90c0
;   undefined4 DAT_01cc90c4
;   ... and 14 more
;
; Called Functions:
;   core_actor.cpp_FUN_0040c550
;   core_gabriela.cpp_FUN_004c88a0
;   core_gabriela.cpp_FUN_004c88f0
;   core_motion.cpp_FUN_00525110
;   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
;   core_skeleton.cpp_FUN_00567620
;   core_skeleton.cpp_FUN_00568100
;   core_skeleton.cpp_FUN_005695e0
;   core_xform.cpp_FUN_005b7940
;   core_xform.cpp_FUN_005b7af0
;   core_xform.cpp_FUN_005b7b30
;   core_xform.cpp_FUN_005b7ed0
;   core_xform.cpp_multiplyQuaternion_FUN_005b77b0
;   core_xform.cpp_quaternionFromAngleZ_FUN_005b7b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c89c0
        ;   Label: core_gabriela.cpp_FUN_004c89c0
    PUSH ESI                            ; 004c89c1
    PUSH EDI                            ; 004c89c2
    PUSH EBP                            ; 004c89c3
    MOV EBP,ESP                         ; 004c89c4
    SUB ESP,0x1fc                       ; 004c89c6
    SUB EBP,0x7e                        ; 004c89cc
    MOV EBX,dword ptr [EBP + 0x92]      ; 004c89cf
    LEA EAX,[EBX + 0x158]               ; 004c89d5
    PUSH EAX                            ; 004c89db
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 004c89dc
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x1ffdc]   ; 004c89e1
    XOR EDX,EDX                         ; 004c89e7
    MOV dword ptr [EBP + 0x16],EAX      ; 004c89e9
    MOV dword ptr [EBP + 0x1e],EDX      ; 004c89ec
    MOV EAX,dword ptr [EBX + 0x1ffe0]   ; 004c89ef
    ADD ESP,0x4                         ; 004c89f5
    MOV dword ptr [EBP + 0x1a],EAX      ; 004c89f8
    LEA EAX,[EBP + 0x16]                ; 004c89fb
    PUSH EAX                            ; 004c89fe
    LEA ESI,[EBP + 0xffffff02]          ; 004c89ff
    LEA EDI,[EBP + 0xfffffed2]          ; 004c8a05
    CALL core_xform.cpp_FUN_005b7ed0    ; 004c8a0b
        ;   XREF to: 005b7ed0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7ed0()
    LEA ESI,[EBP + 0xffffff02]          ; 004c8a10
    MOVSD ES:EDI,ESI                    ; 004c8a16
    MOVSD ES:EDI,ESI                    ; 004c8a17
    MOVSD ES:EDI,ESI                    ; 004c8a18
    MOVSD ES:EDI,ESI                    ; 004c8a19
    ADD ESP,0x4                         ; 004c8a1a
    FLD float ptr [EBX + 0x1ffb4]       ; 004c8a1d
    FLDZ                                ; 004c8a23
    FCOMPP                              ; 004c8a25
    FNSTSW AX                           ; 004c8a27
    SAHF                                ; 004c8a29
    JC 0x004c8bd4                       ; 004c8a2a
        ;   XREF to: 004c8bd4 (CONDITIONAL_JUMP)  ; LAB_004c8bd4
    FLD float ptr [EBP + 0x16]          ; 004c8a30
        ;   Label: LAB_004c8a30
    MOV EDX,0x3f490fdb                  ; 004c8a33
    MOV ECX,0xbfdf66f3                  ; 004c8a38
    MOV ESI,0x3fdf66f3                  ; 004c8a3d
    MOV dword ptr [EBP + 0x5a],EDX      ; 004c8a42
    MOV dword ptr [EBP + 0x52],ECX      ; 004c8a45
    MOV dword ptr [EBP + 0x56],ESI      ; 004c8a48
    FCOMP float ptr [0x005e10d4]        ; 004c8a4b | DAT_005e10d4
    FNSTSW AX                           ; 004c8a51
    SAHF                                ; 004c8a53
    JNC 0x004c8a5d                      ; 004c8a54
        ;   XREF to: 004c8a5d (CONDITIONAL_JUMP)  ; LAB_004c8a5d
    MOV dword ptr [EBP + 0x16],0xbf9c61aa ; 004c8a56
    FLD float ptr [EBP + 0x16]          ; 004c8a5d
        ;   Label: LAB_004c8a5d
    FCOMP float ptr [EBP + 0x5a]        ; 004c8a60
    FNSTSW AX                           ; 004c8a63
    SAHF                                ; 004c8a65
    JBE 0x004c8a6e                      ; 004c8a66
        ;   XREF to: 004c8a6e (CONDITIONAL_JUMP)  ; LAB_004c8a6e
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004c8a68
    MOV dword ptr [EBP + 0x16],EAX      ; 004c8a6b
    FLD float ptr [EBP + 0x1a]          ; 004c8a6e
        ;   Label: LAB_004c8a6e
    FCOMP float ptr [EBP + 0x52]        ; 004c8a71
    FNSTSW AX                           ; 004c8a74
    SAHF                                ; 004c8a76
    JNC 0x004c8a7f                      ; 004c8a77
        ;   XREF to: 004c8a7f (CONDITIONAL_JUMP)  ; LAB_004c8a7f
    MOV EAX,dword ptr [EBP + 0x52]      ; 004c8a79
    MOV dword ptr [EBP + 0x1a],EAX      ; 004c8a7c
    FLD float ptr [EBP + 0x1a]          ; 004c8a7f
        ;   Label: LAB_004c8a7f
    FCOMP float ptr [EBP + 0x56]        ; 004c8a82
    FNSTSW AX                           ; 004c8a85
    SAHF                                ; 004c8a87
    JBE 0x004c8a90                      ; 004c8a88
        ;   XREF to: 004c8a90 (CONDITIONAL_JUMP)  ; LAB_004c8a90
    MOV EAX,dword ptr [EBP + 0x56]      ; 004c8a8a
    MOV dword ptr [EBP + 0x1a],EAX      ; 004c8a8d
    PUSH 0x567360                       ; 004c8a90
        ;   Label: LAB_004c8a90
    MOV EAX,[0x01cc9108]                ; 004c8a95 | DAT_01cc9108
    FLD float ptr [EBX + 0x1ffb8]       ; 004c8a9a
    PUSH EAX                            ; 004c8aa0
    FMUL float ptr [EBX + 0x1ffe8]      ; 004c8aa1
    SUB ESP,0x4                         ; 004c8aa7
    LEA EAX,[EBP + 0x16]                ; 004c8aaa
    FSTP float ptr [ESP]                ; 004c8aad
    PUSH EAX                            ; 004c8ab0
    LEA ESI,[EBP + -0x7e]               ; 004c8ab1
    CALL core_xform.cpp_FUN_005b7ed0    ; 004c8ab4
        ;   XREF to: 005b7ed0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7ed0()
    ADD ESP,0x4                         ; 004c8ab9
    LEA EAX,[EBP + 0xfffffee2]          ; 004c8abc
    LEA EDI,[EBP + 0xfffffee2]          ; 004c8ac2
    PUSH EAX                            ; 004c8ac8
    LEA EAX,[EBX + 0x158]               ; 004c8ac9
    LEA ESI,[EBP + -0x7e]               ; 004c8acf
    PUSH EAX                            ; 004c8ad2
    MOVSD ES:EDI,ESI                    ; 004c8ad3
    MOVSD ES:EDI,ESI                    ; 004c8ad4
    MOVSD ES:EDI,ESI                    ; 004c8ad5
    MOVSD ES:EDI,ESI                    ; 004c8ad6
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60 ; 004c8ad7
        ;   XREF to: 00568d60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 004c8adc
    PUSH EBX                            ; 004c8adf
    CALL core_gabriela.cpp_FUN_004c88a0 ; 004c8ae0
        ;   XREF to: 004c88a0 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_FUN_004c88a0()
    MOV dword ptr [EBP + 0x7a],EAX      ; 004c8ae5
    ADD ESP,0x4                         ; 004c8ae8
    FLD float ptr [EBP + 0x7a]          ; 004c8aeb
    PUSH EBX                            ; 004c8aee
    FSTP float ptr [EBP + 0x46]         ; 004c8aef
    CALL core_gabriela.cpp_FUN_004c88f0 ; 004c8af2
        ;   XREF to: 004c88f0 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_FUN_004c88f0()
    FLD float ptr [EBX + 0x1ffc0]       ; 004c8af7
    MOV dword ptr [EBP + 0x7a],EAX      ; 004c8afd
    FSUB float ptr [EBP + 0x46]         ; 004c8b00
    FLD float ptr [EBP + 0x7a]          ; 004c8b03
    FSUB float ptr [EBP + 0x46]         ; 004c8b06
    FDIVP                               ; 004c8b09
    FLD1                                ; 004c8b0b
    FSUBRP                              ; 004c8b0d
    FMUL double ptr [0x005e10dc]        ; 004c8b0f | DAT_005e10dc
    ADD ESP,0x4                         ; 004c8b15
    FST float ptr [0x01cc9104]          ; 004c8b18 | DAT_01cc9104
    FLD1                                ; 004c8b1e
    FCOMPP                              ; 004c8b20
    FNSTSW AX                           ; 004c8b22
    SAHF                                ; 004c8b24
    JNC 0x004c8b31                      ; 004c8b25
        ;   XREF to: 004c8b31 (CONDITIONAL_JUMP)  ; LAB_004c8b31
    MOV dword ptr [0x01cc9104],0x3f800000 ; 004c8b27 | DAT_01cc9104
    PUSH 0x4c6190                       ; 004c8b31
        ;   Label: LAB_004c8b31
    MOV ECX,dword ptr [0x01cc910c]      ; 004c8b36 | DAT_01cc910c
    PUSH ECX                            ; 004c8b3c
    PUSH dword ptr [EBX + 0x1ffbc]      ; 004c8b3d
    LEA ESI,[EBP + 0xfffffea2]          ; 004c8b43
    PUSH dword ptr [EBX + 0x1ffc0]      ; 004c8b49
    LEA EDI,[EBP + 0xffffff22]          ; 004c8b4f
    CALL core_xform.cpp_FUN_005b7af0    ; 004c8b55
        ;   XREF to: 005b7af0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7af0()
    ADD ESP,0x4                         ; 004c8b5a
    LEA EAX,[EBP + 0xffffff22]          ; 004c8b5d
    LEA ESI,[EBP + 0xfffffea2]          ; 004c8b63
    PUSH EAX                            ; 004c8b69
    MOVSD ES:EDI,ESI                    ; 004c8b6a
    MOVSD ES:EDI,ESI                    ; 004c8b6b
    MOVSD ES:EDI,ESI                    ; 004c8b6c
    MOVSD ES:EDI,ESI                    ; 004c8b6d
    PUSH 0x3fc90fdb                     ; 004c8b6e
    LEA ESI,[EBP + 0xfffffeb2]          ; 004c8b73
    LEA EDI,[EBP + 0xffffff12]          ; 004c8b79
    CALL core_xform.cpp_FUN_005b7b30    ; 004c8b7f
        ;   XREF to: 005b7b30 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7b30()
    LEA ESI,[EBP + 0xfffffeb2]          ; 004c8b84
    LEA EAX,[EBP + 0xffffff12]          ; 004c8b8a
    ADD ESP,0x4                         ; 004c8b90
    MOVSD ES:EDI,ESI                    ; 004c8b93
    MOVSD ES:EDI,ESI                    ; 004c8b94
    MOVSD ES:EDI,ESI                    ; 004c8b95
    MOVSD ES:EDI,ESI                    ; 004c8b96
    PUSH EAX                            ; 004c8b97
    LEA ESI,[EBP + 0xfffffec2]          ; 004c8b98
    CALL core_xform.cpp_multiplyQuaternion_FUN_005b77b0 ; 004c8b9e
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_005b77b0()
    ADD ESP,0x8                         ; 004c8ba3
    LEA EAX,[EBP + 0xffffff32]          ; 004c8ba6
    ADD EBX,0x158                       ; 004c8bac
    PUSH EAX                            ; 004c8bb2
    LEA EDI,[EBP + 0xffffff32]          ; 004c8bb3
    LEA ESI,[EBP + 0xfffffec2]          ; 004c8bb9
    PUSH EBX                            ; 004c8bbf
    MOVSD ES:EDI,ESI                    ; 004c8bc0
    MOVSD ES:EDI,ESI                    ; 004c8bc1
    MOVSD ES:EDI,ESI                    ; 004c8bc2
    MOVSD ES:EDI,ESI                    ; 004c8bc3
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60 ; 004c8bc4
        ;   XREF to: 00568d60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 004c8bc9
    LEA ESP,[EBP + 0x7e]                ; 004c8bcc
    POP EBP                             ; 004c8bcf
    POP EDI                             ; 004c8bd0
    POP ESI                             ; 004c8bd1
    POP EBX                             ; 004c8bd2
    RET                                 ; 004c8bd3
    FLD float ptr [EBX + 0x1ffb4]       ; 004c8bd4
        ;   Label: LAB_004c8bd4
    FDIV float ptr [0x00600d50]         ; 004c8bda | DAT_00600d50
    FST float ptr [EBP + 0x6a]          ; 004c8be0
    FLD1                                ; 004c8be3
    FCOMPP                              ; 004c8be5
    FNSTSW AX                           ; 004c8be7
    SAHF                                ; 004c8be9
    JNC 0x004c8bf3                      ; 004c8bea
        ;   XREF to: 004c8bf3 (CONDITIONAL_JUMP)  ; LAB_004c8bf3
    MOV dword ptr [EBP + 0x6a],0x3f800000 ; 004c8bec
    FLD float ptr [EBX + 0x1ffb4]       ; 004c8bf3
        ;   Label: LAB_004c8bf3
    FCOMP float ptr [0x00600d58]        ; 004c8bf9 | DAT_00600d58
    FNSTSW AX                           ; 004c8bff
    SAHF                                ; 004c8c01
    JBE 0x004c8c2e                      ; 004c8c02
        ;   XREF to: 004c8c2e (CONDITIONAL_JUMP)  ; LAB_004c8c2e
    FLD float ptr [0x00600d58]          ; 004c8c04 | DAT_00600d58
    FLD float ptr [EBX + 0x1ffb4]       ; 004c8c0a
    FSUB ST0,ST1                        ; 004c8c10
    FLD1                                ; 004c8c12
    FSUBRP ST2,ST0                      ; 004c8c14
    FDIVRP                              ; 004c8c16
    FLD float ptr [EBX + 0x1ffe8]       ; 004c8c18
    FLD1                                ; 004c8c1e
    FSUBRP                              ; 004c8c20
    FMULP                               ; 004c8c22
    FLD1                                ; 004c8c24
    FSUBRP                              ; 004c8c26
    FMUL float ptr [EBP + 0x6a]         ; 004c8c28
    FSTP float ptr [EBP + 0x6a]         ; 004c8c2b
    LEA EAX,[EBX + 0x1fae8]             ; 004c8c2e
        ;   Label: LAB_004c8c2e
    PUSH 0x5e10b0                       ; 004c8c34 | DAT_005e10b0
    MOV EAX,dword ptr [EAX + 0x338]     ; 004c8c39
    PUSH EAX                            ; 004c8c3f
    CALL core_actor.cpp_FUN_0040c550    ; 004c8c40
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004c8c45
    TEST EAX,EAX                        ; 004c8c48
    JZ 0x004c8ece                       ; 004c8c4a
        ;   XREF to: 004c8ece (CONDITIONAL_JUMP)  ; LAB_004c8ece
    FLD float ptr [EBX + 0x1ffb4]       ; 004c8c50
    FDIV float ptr [0x00600d54]         ; 004c8c56 | DAT_00600d54
    MOV ESI,dword ptr [0x01cc9120]      ; 004c8c5c | DAT_01cc9120
    LEA EAX,[EBX + 0x808]               ; 004c8c62
    SHL ESI,0x4                         ; 004c8c68
    SUB ESP,0x4                         ; 004c8c6b
    ADD ESI,EAX                         ; 004c8c6e
    FSTP float ptr [ESP]                ; 004c8c70
    PUSH ESI                            ; 004c8c73
    MOV ESI,dword ptr [0x01cc914c]      ; 004c8c74 | DAT_01cc914c
    SHL ESI,0x4                         ; 004c8c7a
    ADD EAX,ESI                         ; 004c8c7d
    PUSH EAX                            ; 004c8c7f
    LEA ESI,[EBP + -0x6e]               ; 004c8c80
    CALL core_xform.cpp_FUN_005b7940    ; 004c8c83
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7940()
    MOV EAX,[0x01cc914c]                ; 004c8c88 | DAT_01cc914c
    SHL EAX,0x4                         ; 004c8c8d
    LEA ESI,[EBP + -0x6e]               ; 004c8c90
    LEA EDI,[EBX + EAX*0x1 + 0x808]     ; 004c8c93
    FLD float ptr [EBP + 0x6a]          ; 004c8c9a
    ADD ESP,0xc                         ; 004c8c9d
    MOVSD ES:EDI,ESI                    ; 004c8ca0
    MOVSD ES:EDI,ESI                    ; 004c8ca1
    MOVSD ES:EDI,ESI                    ; 004c8ca2
    MOVSD ES:EDI,ESI                    ; 004c8ca3
    FCOMP double ptr [0x005e10bc]       ; 004c8ca4 | DAT_005e10bc
    FNSTSW AX                           ; 004c8caa
    SAHF                                ; 004c8cac
    JBE 0x004c8de5                      ; 004c8cad
        ;   XREF to: 004c8de5 (CONDITIONAL_JUMP)  ; LAB_004c8de5
    MOV EAX,dword ptr [EBX + 0x1ffb4]   ; 004c8cb3
    MOV dword ptr [EBP + 0x6e],EAX      ; 004c8cb9
    FLD float ptr [EBP + 0x6e]          ; 004c8cbc
    FCOMP float ptr [0x00600d58]        ; 004c8cbf | DAT_00600d58
    FNSTSW AX                           ; 004c8cc5
    SAHF                                ; 004c8cc7
    JBE 0x004c8cd2                      ; 004c8cc8
        ;   XREF to: 004c8cd2 (CONDITIONAL_JUMP)  ; LAB_004c8cd2
    MOV EAX,[0x00600d58]                ; 004c8cca | DAT_00600d58
    MOV dword ptr [EBP + 0x6e],EAX      ; 004c8ccf
    FLD float ptr [0x00600d50]          ; 004c8cd2 | DAT_00600d50
        ;   Label: LAB_004c8cd2
    FLD float ptr [EBP + 0x6e]          ; 004c8cd8
    FSUB ST0,ST1                        ; 004c8cdb
    FLD1                                ; 004c8cdd
    FSUBRP ST2,ST0                      ; 004c8cdf
    FDIVRP                              ; 004c8ce1
    FST float ptr [EBP + 0x6e]          ; 004c8ce3
    FLDZ                                ; 004c8ce6
    FCOMPP                              ; 004c8ce8
    FNSTSW AX                           ; 004c8cea
    SAHF                                ; 004c8cec
    JBE 0x004c8cf4                      ; 004c8ced
        ;   XREF to: 004c8cf4 (CONDITIONAL_JUMP)  ; LAB_004c8cf4
    XOR EDX,EDX                         ; 004c8cef
    MOV dword ptr [EBP + 0x6e],EDX      ; 004c8cf1
    FLD float ptr [EBP + 0x6e]          ; 004c8cf4
        ;   Label: LAB_004c8cf4
    FLD1                                ; 004c8cf7
    FCOMPP                              ; 004c8cf9
    FNSTSW AX                           ; 004c8cfb
    SAHF                                ; 004c8cfd
    JNC 0x004c8d07                      ; 004c8cfe
        ;   XREF to: 004c8d07 (CONDITIONAL_JUMP)  ; LAB_004c8d07
    MOV dword ptr [EBP + 0x6e],0x3f800000 ; 004c8d00
    MOV ESI,dword ptr [0x01cc913c]      ; 004c8d07 | DAT_01cc913c
        ;   Label: LAB_004c8d07
    PUSH dword ptr [EBP + 0x6e]         ; 004c8d0d
    PUSH ESI                            ; 004c8d10
    LEA ESI,[EBX + 0x158]               ; 004c8d11
    PUSH ESI                            ; 004c8d17
    CALL core_motion.cpp_FUN_00525110   ; 004c8d18
        ;   XREF to: 00525110 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00525110()
    ADD ESP,0xc                         ; 004c8d1d
    PUSH 0x567360                       ; 004c8d20
    MOV EDI,dword ptr [0x01cc9118]      ; 004c8d25 | DAT_01cc9118
    MOV dword ptr [EBP + 0x7a],EAX      ; 004c8d2b
    PUSH EDI                            ; 004c8d2e
    FLD float ptr [EBP + 0x7a]          ; 004c8d2f
    MOV EAX,[0x01cc913c]                ; 004c8d32 | DAT_01cc913c
    PUSH dword ptr [EBP + 0x6a]         ; 004c8d37
    FSTP float ptr [EBP + 0x3e]         ; 004c8d3a
    PUSH dword ptr [EBP + 0x3e]         ; 004c8d3d
    PUSH EAX                            ; 004c8d40
    PUSH ESI                            ; 004c8d41
    CALL core_skeleton.cpp_FUN_00568100 ; 004c8d42
        ;   XREF to: 00568100 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00568100()
    FLD float ptr [EBX + 0x1ffb4]       ; 004c8d47
    ADD ESP,0x18                        ; 004c8d4d
    FCOMP float ptr [0x00600d58]        ; 004c8d50 | DAT_00600d58
    FNSTSW AX                           ; 004c8d56
    SAHF                                ; 004c8d58
    JC 0x004c8de5                       ; 004c8d59
        ;   XREF to: 004c8de5 (CONDITIONAL_JUMP)  ; LAB_004c8de5
    FLD float ptr [0x00600d58]          ; 004c8d5f | DAT_00600d58
    FLD float ptr [EBX + 0x1ffb4]       ; 004c8d65
    FSUB ST0,ST1                        ; 004c8d6b
    FLD1                                ; 004c8d6d
    FSUBRP ST2,ST0                      ; 004c8d6f
    FDIVRP                              ; 004c8d71
    FMUL float ptr [EBX + 0x1ffe8]      ; 004c8d73
    FST float ptr [EBP + 0x62]          ; 004c8d79
    FCOMP double ptr [0x005e10bc]       ; 004c8d7c | DAT_005e10bc
    FNSTSW AX                           ; 004c8d82
    SAHF                                ; 004c8d84
    JBE 0x004c8de5                      ; 004c8d85
        ;   XREF to: 004c8de5 (CONDITIONAL_JUMP)  ; LAB_004c8de5
    MOV AH,byte ptr [0x01cc90c4]        ; 004c8d87 | DAT_01cc90c4
    TEST AH,0x1                         ; 004c8d8d
    JZ 0x004c8e5f                       ; 004c8d90
        ;   XREF to: 004c8e5f (CONDITIONAL_JUMP)  ; LAB_004c8e5f
    LEA EAX,[EBP + 0xfffffed2]          ; 004c8d96
        ;   Label: LAB_004c8d96
    PUSH EAX                            ; 004c8d9c
    PUSH 0x1cc90b4                      ; 004c8d9d | DAT_01cc90b4
    LEA ESI,[EBP + 0xfffffe92]          ; 004c8da2
    CALL core_xform.cpp_multiplyQuaternion_FUN_005b77b0 ; 004c8da8
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_005b77b0()
    ADD ESP,0x8                         ; 004c8dad
    PUSH 0x4c6150                       ; 004c8db0
    MOV EDX,dword ptr [0x01cc9118]      ; 004c8db5 | DAT_01cc9118
    PUSH EDX                            ; 004c8dbb
    LEA EAX,[EBP + 0xffffff42]          ; 004c8dbc
    PUSH dword ptr [EBP + 0x62]         ; 004c8dc2
    LEA EDI,[EBP + 0xffffff42]          ; 004c8dc5
    PUSH EAX                            ; 004c8dcb
    LEA EAX,[EBX + 0x158]               ; 004c8dcc
    LEA ESI,[EBP + 0xfffffe92]          ; 004c8dd2
    PUSH EAX                            ; 004c8dd8
    MOVSD ES:EDI,ESI                    ; 004c8dd9
    MOVSD ES:EDI,ESI                    ; 004c8dda
    MOVSD ES:EDI,ESI                    ; 004c8ddb
    MOVSD ES:EDI,ESI                    ; 004c8ddc
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60 ; 004c8ddd
        ;   XREF to: 00568d60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 004c8de2
    FLD float ptr [EBX + 0x1ffe4]       ; 004c8de5
        ;   Label: LAB_004c8de5
    FLDZ                                ; 004c8deb
    FCOMPP                              ; 004c8ded
    FNSTSW AX                           ; 004c8def
    SAHF                                ; 004c8df1
    JNC 0x004c8a30                      ; 004c8df2
        ;   XREF to: 004c8a30 (CONDITIONAL_JUMP)  ; LAB_004c8a30
    FLD float ptr [EBX + 0x1ffe4]       ; 004c8df8
    FMUL double ptr [0x005e10c4]        ; 004c8dfe | DAT_005e10c4
    SUB ESP,0x4                         ; 004c8e04
    MOV dword ptr [EBX + 0x2498],0x2    ; 004c8e07
    FLD1                                ; 004c8e11
    FSUBRP                              ; 004c8e13
    MOV ECX,dword ptr [0x01cc9144]      ; 004c8e15 | DAT_01cc9144
    FSTP float ptr [ESP]                ; 004c8e1b
    PUSH ECX                            ; 004c8e1e
    LEA ESI,[EBX + 0x158]               ; 004c8e1f
    PUSH ESI                            ; 004c8e25
    CALL core_motion.cpp_FUN_00525110   ; 004c8e26
        ;   XREF to: 00525110 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00525110()
    MOV EDI,dword ptr [0x01cc9120]      ; 004c8e2b | DAT_01cc9120
    MOV dword ptr [EBP + 0x7a],EAX      ; 004c8e31
    ADD ESP,0xc                         ; 004c8e34
    FLD float ptr [EBP + 0x7a]          ; 004c8e37
    MOV EAX,[0x01cc9144]                ; 004c8e3a | DAT_01cc9144
    PUSH EDI                            ; 004c8e3f
    FSTP float ptr [EBP + 0x76]         ; 004c8e40
    PUSH dword ptr [EBP + 0x76]         ; 004c8e43
    PUSH EAX                            ; 004c8e46
    PUSH ESI                            ; 004c8e47
    CALL core_skeleton.cpp_FUN_00567620 ; 004c8e48
        ;   XREF to: 00567620 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00567620()
    ADD ESP,0x10                        ; 004c8e4d
    MOV dword ptr [EBX + 0x2498],0x0    ; 004c8e50
    JMP 0x004c8a30                      ; 004c8e5a
        ;   XREF to: 004c8a30 (UNCONDITIONAL_JUMP)  ; LAB_004c8a30
    PUSH 0xbfc90fdb                     ; 004c8e5f
        ;   Label: LAB_004c8e5f
    MOV DL,AH                           ; 004c8e64
    LEA ESI,[EBP + -0x1e]               ; 004c8e66
    OR DL,0x1                           ; 004c8e69
    LEA EDI,[EBP + -0x5e]               ; 004c8e6c
    MOV byte ptr [0x01cc90c4],DL        ; 004c8e6f | DAT_01cc90c4
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_005b7b70 ; 004c8e75
        ;   XREF to: 005b7b70 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleZ_FUN_005b7b70()
    ADD ESP,0x4                         ; 004c8e7a
    LEA EAX,[EBP + -0x5e]               ; 004c8e7d
    LEA ESI,[EBP + -0x1e]               ; 004c8e80
    PUSH EAX                            ; 004c8e83
    MOVSD ES:EDI,ESI                    ; 004c8e84
    MOVSD ES:EDI,ESI                    ; 004c8e85
    MOVSD ES:EDI,ESI                    ; 004c8e86
    MOVSD ES:EDI,ESI                    ; 004c8e87
    PUSH 0xbfc90fdb                     ; 004c8e88
    LEA ESI,[EBP + 0xffffff62]          ; 004c8e8d
    LEA EDI,[EBP + -0x4e]               ; 004c8e93
    CALL core_xform.cpp_FUN_005b7b30    ; 004c8e96
        ;   XREF to: 005b7b30 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7b30()
    LEA ESI,[EBP + 0xffffff62]          ; 004c8e9b
    LEA EAX,[EBP + -0x4e]               ; 004c8ea1
    ADD ESP,0x4                         ; 004c8ea4
    MOVSD ES:EDI,ESI                    ; 004c8ea7
    MOVSD ES:EDI,ESI                    ; 004c8ea8
    MOVSD ES:EDI,ESI                    ; 004c8ea9
    MOVSD ES:EDI,ESI                    ; 004c8eaa
    PUSH EAX                            ; 004c8eab
    LEA ESI,[EBP + 0xfffffe82]          ; 004c8eac
    MOV EDI,0x1cc90b4                   ; 004c8eb2
    CALL core_xform.cpp_multiplyQuaternion_FUN_005b77b0 ; 004c8eb7
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_005b77b0()
    LEA ESI,[EBP + 0xfffffe82]          ; 004c8ebc
    ADD ESP,0x8                         ; 004c8ec2
    MOVSD ES:EDI,ESI                    ; 004c8ec5 | DAT_01cc90b4
    MOVSD ES:EDI,ESI                    ; 004c8ec6 | DAT_01cc90b8
    MOVSD ES:EDI,ESI                    ; 004c8ec7 | DAT_01cc90bc
    MOVSD ES:EDI,ESI                    ; 004c8ec8 | DAT_01cc90c0
    JMP 0x004c8d96                      ; 004c8ec9
        ;   XREF to: 004c8d96 (UNCONDITIONAL_JUMP)  ; LAB_004c8d96
    FLD float ptr [EBP + 0x6a]          ; 004c8ece
        ;   Label: LAB_004c8ece
    FCOMP double ptr [0x005e10bc]       ; 004c8ed1 | DAT_005e10bc
    FNSTSW AX                           ; 004c8ed7
    SAHF                                ; 004c8ed9
    JBE 0x004c90e4                      ; 004c8eda
        ;   XREF to: 004c90e4 (CONDITIONAL_JUMP)  ; LAB_004c90e4
    MOV EAX,dword ptr [EBX + 0x1ffb4]   ; 004c8ee0
    MOV dword ptr [EBP + 0x72],EAX      ; 004c8ee6
    FLD float ptr [EBP + 0x72]          ; 004c8ee9
    FCOMP float ptr [0x00600d58]        ; 004c8eec | DAT_00600d58
    FNSTSW AX                           ; 004c8ef2
    SAHF                                ; 004c8ef4
    JBE 0x004c8eff                      ; 004c8ef5
        ;   XREF to: 004c8eff (CONDITIONAL_JUMP)  ; LAB_004c8eff
    MOV EAX,[0x00600d58]                ; 004c8ef7 | DAT_00600d58
    MOV dword ptr [EBP + 0x72],EAX      ; 004c8efc
    FLD float ptr [0x00600d50]          ; 004c8eff | DAT_00600d50
        ;   Label: LAB_004c8eff
    FLD float ptr [EBP + 0x72]          ; 004c8f05
    FSUB ST0,ST1                        ; 004c8f08
    FLD1                                ; 004c8f0a
    FSUBRP ST2,ST0                      ; 004c8f0c
    FDIVRP                              ; 004c8f0e
    FST float ptr [EBP + 0x72]          ; 004c8f10
    FLDZ                                ; 004c8f13
    FCOMPP                              ; 004c8f15
    FNSTSW AX                           ; 004c8f17
    SAHF                                ; 004c8f19
    JBE 0x004c8f21                      ; 004c8f1a
        ;   XREF to: 004c8f21 (CONDITIONAL_JUMP)  ; LAB_004c8f21
    XOR ESI,ESI                         ; 004c8f1c
    MOV dword ptr [EBP + 0x72],ESI      ; 004c8f1e
    FLD float ptr [EBP + 0x72]          ; 004c8f21
        ;   Label: LAB_004c8f21
    FLD1                                ; 004c8f24
    FCOMPP                              ; 004c8f26
    FNSTSW AX                           ; 004c8f28
    SAHF                                ; 004c8f2a
    JNC 0x004c8f34                      ; 004c8f2b
        ;   XREF to: 004c8f34 (CONDITIONAL_JUMP)  ; LAB_004c8f34
    MOV dword ptr [EBP + 0x72],0x3f800000 ; 004c8f2d
    MOV EAX,[0x01cc913c]                ; 004c8f34 | DAT_01cc913c
        ;   Label: LAB_004c8f34
    PUSH dword ptr [EBP + 0x72]         ; 004c8f39
    PUSH EAX                            ; 004c8f3c
    LEA ESI,[EBX + 0x158]               ; 004c8f3d
    PUSH ESI                            ; 004c8f43
    CALL core_motion.cpp_FUN_00525110   ; 004c8f44
        ;   XREF to: 00525110 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00525110()
    ADD ESP,0xc                         ; 004c8f49
    MOV EDX,dword ptr [0x01cc9118]      ; 004c8f4c | DAT_01cc9118
    PUSH 0x567360                       ; 004c8f52
    MOV ECX,dword ptr [0x01cc913c]      ; 004c8f57 | DAT_01cc913c
    MOV dword ptr [EBP + 0x7a],EAX      ; 004c8f5d
    PUSH EDX                            ; 004c8f60
    FLD float ptr [EBP + 0x7a]          ; 004c8f61
    PUSH dword ptr [EBP + 0x6a]         ; 004c8f64
    FSTP float ptr [EBP + 0x42]         ; 004c8f67
    PUSH dword ptr [EBP + 0x42]         ; 004c8f6a
    PUSH ECX                            ; 004c8f6d
    PUSH ESI                            ; 004c8f6e
    CALL core_skeleton.cpp_FUN_00568100 ; 004c8f6f
        ;   XREF to: 00568100 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00568100()
    FLD float ptr [EBX + 0x1ffb4]       ; 004c8f74
    ADD ESP,0x18                        ; 004c8f7a
    FCOMP float ptr [0x00600d58]        ; 004c8f7d | DAT_00600d58
    FNSTSW AX                           ; 004c8f83
    SAHF                                ; 004c8f85
    JC 0x004c90e4                       ; 004c8f86
        ;   XREF to: 004c90e4 (CONDITIONAL_JUMP)  ; LAB_004c90e4
    FLD float ptr [0x00600d58]          ; 004c8f8c | DAT_00600d58
    FLD float ptr [EBX + 0x1ffb4]       ; 004c8f92
    FSUB ST0,ST1                        ; 004c8f98
    FLD1                                ; 004c8f9a
    FSUBRP ST2,ST0                      ; 004c8f9c
    FDIVRP                              ; 004c8f9e
    FMUL float ptr [EBX + 0x1ffe8]      ; 004c8fa0
    FST float ptr [EBP + 0x66]          ; 004c8fa6
    FCOMP float ptr [EBX + 0x1ffe4]     ; 004c8fa9
    FNSTSW AX                           ; 004c8faf
    SAHF                                ; 004c8fb1
    JNC 0x004c8fbd                      ; 004c8fb2
        ;   XREF to: 004c8fbd (CONDITIONAL_JUMP)  ; LAB_004c8fbd
    MOV EAX,dword ptr [EBX + 0x1ffe4]   ; 004c8fb4
    MOV dword ptr [EBP + 0x66],EAX      ; 004c8fba
    FLD float ptr [EBP + 0x66]          ; 004c8fbd
        ;   Label: LAB_004c8fbd
    FCOMP double ptr [0x005e10bc]       ; 004c8fc0 | DAT_005e10bc
    FNSTSW AX                           ; 004c8fc6
    SAHF                                ; 004c8fc8
    JBE 0x004c90e4                      ; 004c8fc9
        ;   XREF to: 004c90e4 (CONDITIONAL_JUMP)  ; LAB_004c90e4
    FLDZ                                ; 004c8fcf
    FLD float ptr [EBX + 0x1ffe4]       ; 004c8fd1
    XOR ESI,ESI                         ; 004c8fd7
    FSTP double ptr [EBP + 0x2e]        ; 004c8fd9
    MOV dword ptr [EBP + 0x5e],ESI      ; 004c8fdc
    FCOMP double ptr [EBP + 0x2e]       ; 004c8fdf
    FNSTSW AX                           ; 004c8fe2
    SAHF                                ; 004c8fe4
    JNC 0x004c8fef                      ; 004c8fe5
        ;   XREF to: 004c8fef (CONDITIONAL_JUMP)  ; LAB_004c8fef
    FLD1                                ; 004c8fe7
    FSUB double ptr [EBP + 0x2e]        ; 004c8fe9
    FSTP float ptr [EBP + 0x5e]         ; 004c8fec
    PUSH 0x567360                       ; 004c8fef
        ;   Label: LAB_004c8fef
    MOV EDI,dword ptr [0x01cc9150]      ; 004c8ff4 | DAT_01cc9150
    FLD float ptr [EBP + 0x66]          ; 004c8ffa
    PUSH EDI                            ; 004c8ffd
    FMUL double ptr [0x005e10c4]        ; 004c8ffe | DAT_005e10c4
    SUB ESP,0x4                         ; 004c9004
    FSTP float ptr [ESP]                ; 004c9007
    MOV EAX,[0x01cc9140]                ; 004c900a | DAT_01cc9140
    PUSH dword ptr [EBP + 0x5e]         ; 004c900f
    PUSH EAX                            ; 004c9012
    LEA EAX,[EBX + 0x158]               ; 004c9013
    PUSH EAX                            ; 004c9019
    MOV dword ptr [EBP + 0x7a],EAX      ; 004c901a
    CALL core_skeleton.cpp_FUN_00568100 ; 004c901d
        ;   XREF to: 00568100 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00568100()
    FLD float ptr [0x005e10cc]          ; 004c9022 | DAT_005e10cc
    FLD float ptr [0x01cc90f8]          ; 004c9028 | DAT_01cc90f8
    FMUL ST1                            ; 004c902e
    FLD float ptr [0x01cc90fc]          ; 004c9030 | DAT_01cc90fc
    FMUL ST2                            ; 004c9036
    FLD float ptr [0x01cc9100]          ; 004c9038 | DAT_01cc9100
    FMULP ST3                           ; 004c903e
    LEA ESI,[EBP + -0x2]                ; 004c9040
    LEA EDI,[EBP + -0xe]                ; 004c9043
    FXCH                                ; 004c9046
    FSTP float ptr [EBP + -0x2]         ; 004c9048
    FSTP float ptr [EBP + 0x2]          ; 004c904b
    FSTP float ptr [EBP + 0x6]          ; 004c904e
    MOVSD ES:EDI,ESI                    ; 004c9051
    MOVSD ES:EDI,ESI                    ; 004c9052
    MOVSD ES:EDI,ESI                    ; 004c9053
    FLD float ptr [0x005e10d0]          ; 004c9054 | DAT_005e10d0
    FLD float ptr [EBP + -0xe]          ; 004c905a
    FMUL ST1                            ; 004c905d
    FLD float ptr [EBP + -0xa]          ; 004c905f
    FMUL ST2                            ; 004c9062
    LEA EAX,[EBP + 0xfffffed2]          ; 004c9064
    ADD ESP,0x18                        ; 004c906a
    FLD float ptr [EBP + -0x6]          ; 004c906d
    FMULP ST3                           ; 004c9070
    PUSH EAX                            ; 004c9072
    LEA EAX,[EBP + 0xa]                 ; 004c9073
    LEA EDI,[EBP + 0xa]                 ; 004c9076
    LEA ESI,[EBP + 0x22]                ; 004c9079
    FXCH                                ; 004c907c
    FSTP float ptr [EBP + 0x22]         ; 004c907e
    FSTP float ptr [EBP + 0x26]         ; 004c9081
    FSTP float ptr [EBP + 0x2a]         ; 004c9084
    MOVSD ES:EDI,ESI                    ; 004c9087
    MOVSD ES:EDI,ESI                    ; 004c9088
    MOVSD ES:EDI,ESI                    ; 004c9089
    PUSH EAX                            ; 004c908a
    LEA ESI,[EBP + -0x2e]               ; 004c908b
    LEA EDI,[EBP + 0xffffff72]          ; 004c908e
    CALL core_xform.cpp_FUN_005b7ed0    ; 004c9094
        ;   XREF to: 005b7ed0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7ed0()
    LEA ESI,[EBP + -0x2e]               ; 004c9099
    LEA EAX,[EBP + 0xffffff72]          ; 004c909c
    ADD ESP,0x4                         ; 004c90a2
    MOVSD ES:EDI,ESI                    ; 004c90a5
    MOVSD ES:EDI,ESI                    ; 004c90a6
    MOVSD ES:EDI,ESI                    ; 004c90a7
    MOVSD ES:EDI,ESI                    ; 004c90a8
    PUSH EAX                            ; 004c90a9
    LEA ESI,[EBP + 0xfffffef2]          ; 004c90aa
    CALL core_xform.cpp_multiplyQuaternion_FUN_005b77b0 ; 004c90b0
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_005b77b0()
    ADD ESP,0x8                         ; 004c90b5
    PUSH 0x4c61e0                       ; 004c90b8
    MOV ECX,dword ptr [0x01cc9154]      ; 004c90bd | DAT_01cc9154
    LEA EDI,[EBP + -0x3e]               ; 004c90c3
    PUSH ECX                            ; 004c90c6
    LEA ESI,[EBP + 0xfffffef2]          ; 004c90c7
    LEA EAX,[EBP + -0x3e]               ; 004c90cd
    PUSH dword ptr [EBP + 0x66]         ; 004c90d0
    MOVSD ES:EDI,ESI                    ; 004c90d3
    MOVSD ES:EDI,ESI                    ; 004c90d4
    MOVSD ES:EDI,ESI                    ; 004c90d5
    MOVSD ES:EDI,ESI                    ; 004c90d6
    PUSH EAX                            ; 004c90d7
    MOV ESI,dword ptr [EBP + 0x7a]      ; 004c90d8
    PUSH ESI                            ; 004c90db
    CALL core_skeleton.cpp_FUN_005695e0 ; 004c90dc
        ;   XREF to: 005695e0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_005695e0(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 004c90e1
    FLD float ptr [EBX + 0x1ffb4]       ; 004c90e4
        ;   Label: LAB_004c90e4
    FDIV float ptr [0x00600d54]         ; 004c90ea | DAT_00600d54
    MOV ESI,dword ptr [0x01cc9120]      ; 004c90f0 | DAT_01cc9120
    LEA EAX,[EBX + 0x808]               ; 004c90f6
    SHL ESI,0x4                         ; 004c90fc
    SUB ESP,0x4                         ; 004c90ff
    ADD ESI,EAX                         ; 004c9102
    FSTP float ptr [ESP]                ; 004c9104
    PUSH ESI                            ; 004c9107
    MOV ESI,dword ptr [0x01cc914c]      ; 004c9108 | DAT_01cc914c
    SHL ESI,0x4                         ; 004c910e
    ADD EAX,ESI                         ; 004c9111
    PUSH EAX                            ; 004c9113
    LEA ESI,[EBP + 0xffffff52]          ; 004c9114
    CALL core_xform.cpp_FUN_005b7940    ; 004c911a
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7940()
    MOV ESI,dword ptr [0x01cc914c]      ; 004c911f | DAT_01cc914c
    SHL ESI,0x4                         ; 004c9125
    LEA EDI,[ESI + EBX*0x1 + 0x808]     ; 004c9128
    LEA ESI,[EBP + 0xffffff52]          ; 004c912f
    MOVSD ES:EDI,ESI                    ; 004c9135
    MOVSD ES:EDI,ESI                    ; 004c9136
    MOVSD ES:EDI,ESI                    ; 004c9137
    MOVSD ES:EDI,ESI                    ; 004c9138
    ADD ESP,0xc                         ; 004c9139
    FLD float ptr [EBX + 0x1ffe4]       ; 004c913c
    FLDZ                                ; 004c9142
    FCOMPP                              ; 004c9144
    FNSTSW AX                           ; 004c9146
    SAHF                                ; 004c9148
    JNC 0x004c8a30                      ; 004c9149
        ;   XREF to: 004c8a30 (CONDITIONAL_JUMP)  ; LAB_004c8a30
    MOV EDI,dword ptr [0x01cc9140]      ; 004c914f | DAT_01cc9140
    PUSH dword ptr [EBX + 0x1ffe4]      ; 004c9155
    PUSH EDI                            ; 004c915b
    LEA ESI,[EBX + 0x158]               ; 004c915c
    PUSH ESI                            ; 004c9162
    MOV dword ptr [EBX + 0x2498],0x2    ; 004c9163
    CALL core_motion.cpp_FUN_00525110   ; 004c916d
        ;   XREF to: 00525110 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00525110()
    MOV dword ptr [EBP + 0x7a],EAX      ; 004c9172
    ADD ESP,0xc                         ; 004c9175
    FLD float ptr [EBP + 0x7a]          ; 004c9178
    PUSH 0x0                            ; 004c917b
    MOV EAX,[0x01cc9140]                ; 004c917d | DAT_01cc9140
    FSTP float ptr [EBP + 0x4e]         ; 004c9182
    PUSH dword ptr [EBP + 0x4e]         ; 004c9185
    PUSH EAX                            ; 004c9188
    PUSH ESI                            ; 004c9189
    CALL core_skeleton.cpp_FUN_00567620 ; 004c918a
        ;   XREF to: 00567620 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00567620()
    ADD ESP,0x10                        ; 004c918f
    MOV dword ptr [EBX + 0x2498],0x0    ; 004c9192
    JMP 0x004c8a30                      ; 004c919c
        ;   XREF to: 004c8a30 (UNCONDITIONAL_JUMP)  ; LAB_004c8a30

