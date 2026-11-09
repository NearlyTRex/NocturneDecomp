; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_00455d10(CDemonActor *param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x2c4]:4  local_2c4
; undefined        Stack[-0x2c0]:1  local_2c0
; undefined        Stack[-0x290]:1  local_290
; undefined        Stack[-0x260]:1  local_260
; undefined        Stack[-0x230]:1  local_230
; undefined        Stack[-0x220]:1  local_220
; undefined        Stack[-0x210]:1  local_210
; undefined        Stack[-0x200]:1  local_200
; undefined        Stack[-0x1f0]:1  local_1f0
; undefined        Stack[-0x1e0]:1  local_1e0
; undefined        Stack[-0x1d0]:1  local_1d0
; undefined        Stack[-0x1c0]:1  local_1c0
; undefined        Stack[-0x1b0]:1  local_1b0
; undefined        Stack[-0x1a0]:1  local_1a0
; undefined        Stack[-0x190]:1  local_190
; undefined        Stack[-0x180]:1  local_180
; undefined        Stack[-0x170]:1  local_170
; undefined        Stack[-0x160]:1  local_160
; undefined        Stack[-0x150]:1  local_150
; undefined        Stack[-0x140]:1  local_140
; undefined        Stack[-0x130]:1  local_130
; undefined        Stack[-0x120]:1  local_120
; undefined        Stack[-0x110]:1  local_110
; undefined        Stack[-0x100]:1  local_100
; undefined        Stack[-0xf0]:1  local_f0
; undefined        Stack[-0xe0]:1  local_e0
; undefined        Stack[-0xd0]:1  local_d0
; undefined        Stack[-0xc0]:1  local_c0
; undefined        Stack[-0xb0]:1  local_b0
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x90]:1  local_90
; undefined        Stack[-0x80]:1  local_80
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined        Stack[-0x4c]:1  local_4c
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
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_doc.cpp_FUN_00453d80 at 00453e77
;
; Referenced Globals:
;   undefined4 DAT_005d0277
;   undefined4 DAT_005d027f
;   undefined4 DAT_005fe2f0
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01b4d268
;   undefined4 DAT_01b4d270
;   undefined4 DAT_01b4d290
;   undefined4 g_CDemonLightInstance.field4_0x4
;   undefined4 g_CDemonLightInstance.field8_0x8
;   undefined4 g_CDemonLightInstance.field12_0xc
;   undefined4 g_CDemonLightInstance.field16_0x10
;   undefined4 g_CDemonLightInstance.field56_0x38
;   undefined4 g_CDemonLightInstance.field320_0x140
;   undefined4 g_CDemonLightInstance.field7348_0x1cb4
;   undefined4 g_CDemonLightInstance.field7356_0x1cbc
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;   core_dirmat.cpp_FUN_00449280
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570
;   core_set.cpp_FUN_00530630
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
;   core_skeleton.cpp_FUN_005466c0
;   core_xform.cpp_FUN_00591c10
;   core_xform.cpp_FUN_00591de0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;   core_xform.cpp_multiplyMatrix3x4InPlace_FUN_00591860
;   core_xform.cpp_multiplyQuaternion_FUN_00593c60
;   core_xform.cpp_multiplyQuaternionInPlace_FUN_00593d20
;   core_xform.cpp_quaternionFromAngleX_FUN_00593fa0
;   core_xform.cpp_quaternionFromAngleY_FUN_00593fe0
;   core_xform.cpp_quaternionFromAngleZ_FUN_00594020
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455d10
        ;   Label: core_doc.cpp_FUN_00455d10
    PUSH ESI                            ; 00455d11
    PUSH EDI                            ; 00455d12
    PUSH EBP                            ; 00455d13
    MOV EBP,ESP                         ; 00455d14
    SUB ESP,0x2b0                       ; 00455d16
    SUB EBP,0x82                        ; 00455d1c
    MOV EBX,dword ptr [EBP + 0x96]      ; 00455d22
    FLD float ptr [EBP + 0x9a]          ; 00455d28
    FMUL float ptr [0x005d0277]         ; 00455d2e | DAT_005d0277
    MOV EDX,dword ptr [EBX + 0x25758]   ; 00455d34
    FSTP float ptr [EBP + 0x7e]         ; 00455d3a
    TEST EDX,EDX                        ; 00455d3d
    JZ 0x0045624e                       ; 00455d3f
        ;   XREF to: 0045624e (CONDITIONAL_JUMP)  ; LAB_0045624e
    FLD float ptr [EBX + 0x259b0]       ; 00455d45
    FLD1                                ; 00455d4b
    FCOMPP                              ; 00455d4d
    FNSTSW AX                           ; 00455d4f
    SAHF                                ; 00455d51
    JBE 0x0045623f                      ; 00455d52
        ;   XREF to: 0045623f (CONDITIONAL_JUMP)  ; LAB_0045623f
    FLD float ptr [EBX + 0x259b0]       ; 00455d58
    FADD float ptr [EBP + 0x7e]         ; 00455d5e
    FSTP float ptr [EBX + 0x259b0]      ; 00455d61
        ;   Label: LAB_00455d61
    FLD float ptr [EBX + 0x259b0]       ; 00455d67
        ;   Label: LAB_00455d67
    FLDZ                                ; 00455d6d
    FCOMPP                              ; 00455d6f
    FNSTSW AX                           ; 00455d71
    SAHF                                ; 00455d73
    JBE 0x00455d80                      ; 00455d74
        ;   XREF to: 00455d80 (CONDITIONAL_JUMP)  ; LAB_00455d80
    MOV dword ptr [EBX + 0x259b0],0x0   ; 00455d76
    FLD float ptr [EBX + 0x259b0]       ; 00455d80
        ;   Label: LAB_00455d80
    FLD1                                ; 00455d86
    FCOMPP                              ; 00455d88
    FNSTSW AX                           ; 00455d8a
    SAHF                                ; 00455d8c
    JNC 0x00456276                      ; 00455d8d
        ;   XREF to: 00456276 (CONDITIONAL_JUMP)  ; LAB_00456276
    MOV dword ptr [EBX + 0x259b0],0x3f800000 ; 00455d93
    MOV EAX,[0x01b4d268]                ; 00455d9d | DAT_01b4d268
        ;   Label: LAB_00455d9d
    PUSH 0xbf860a92                     ; 00455da2
    MOV dword ptr [EBP + 0x72],EAX      ; 00455da7
    MOV EAX,[0x01b4d270]                ; 00455daa | DAT_01b4d270
    LEA ESI,[EBP + -0x5e]               ; 00455daf
    MOV dword ptr [EBP + 0x7a],EAX      ; 00455db2
    MOV EAX,[0x01b4d290]                ; 00455db5 | DAT_01b4d290
    LEA EDI,[EBP + 0xfffffea2]          ; 00455dba
    MOV dword ptr [EBP + 0x6e],EAX      ; 00455dc0
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 00455dc3
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    ADD ESP,0x4                         ; 00455dc8
    LEA EAX,[EBP + 0xfffffea2]          ; 00455dcb
    LEA ESI,[EBP + -0x5e]               ; 00455dd1
    PUSH EAX                            ; 00455dd4
    MOVSD ES:EDI,ESI                    ; 00455dd5
    MOVSD ES:EDI,ESI                    ; 00455dd6
    MOVSD ES:EDI,ESI                    ; 00455dd7
    MOVSD ES:EDI,ESI                    ; 00455dd8
    PUSH 0xbf490fdb                     ; 00455dd9
    LEA ESI,[EBP + 0xffffff22]          ; 00455dde
    LEA EDI,[EBP + -0x3e]               ; 00455de4
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_00594020 ; 00455de7
        ;   XREF to: 00594020 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleZ_FUN_00594020()
    LEA ESI,[EBP + 0xffffff22]          ; 00455dec
    LEA EAX,[EBP + -0x3e]               ; 00455df2
    ADD ESP,0x4                         ; 00455df5
    MOVSD ES:EDI,ESI                    ; 00455df8
    MOVSD ES:EDI,ESI                    ; 00455df9
    MOVSD ES:EDI,ESI                    ; 00455dfa
    MOVSD ES:EDI,ESI                    ; 00455dfb
    PUSH EAX                            ; 00455dfc
    LEA ESI,[EBP + 0x2]                 ; 00455dfd
    LEA EDI,[EBP + 0xfffffe62]          ; 00455e00
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 00455e06
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[EBP + 0x2]                 ; 00455e0b
    ADD ESP,0x8                         ; 00455e0e
    MOVSD ES:EDI,ESI                    ; 00455e11
    MOVSD ES:EDI,ESI                    ; 00455e12
    MOVSD ES:EDI,ESI                    ; 00455e13
    MOVSD ES:EDI,ESI                    ; 00455e14
    PUSH 0xbf060a92                     ; 00455e15
    LEA ESI,[EBP + 0xffffff42]          ; 00455e1a
    LEA EDI,[EBP + 0xfffffec2]          ; 00455e20
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00593fa0 ; 00455e26
        ;   XREF to: 00593fa0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00593fa0()
    ADD ESP,0x4                         ; 00455e2b
    LEA EAX,[EBP + 0xfffffec2]          ; 00455e2e
    LEA ESI,[EBP + 0xffffff42]          ; 00455e34
    PUSH EAX                            ; 00455e3a
    MOVSD ES:EDI,ESI                    ; 00455e3b
    MOVSD ES:EDI,ESI                    ; 00455e3c
    MOVSD ES:EDI,ESI                    ; 00455e3d
    MOVSD ES:EDI,ESI                    ; 00455e3e
    PUSH 0xbfc90fdb                     ; 00455e3f
    LEA ESI,[EBP + 0xffffff52]          ; 00455e44
    LEA EDI,[EBP + 0xfffffeb2]          ; 00455e4a
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 00455e50
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    LEA ESI,[EBP + 0xffffff52]          ; 00455e55
    LEA EAX,[EBP + 0xfffffeb2]          ; 00455e5b
    ADD ESP,0x4                         ; 00455e61
    MOVSD ES:EDI,ESI                    ; 00455e64
    MOVSD ES:EDI,ESI                    ; 00455e65
    MOVSD ES:EDI,ESI                    ; 00455e66
    MOVSD ES:EDI,ESI                    ; 00455e67
    PUSH EAX                            ; 00455e68
    LEA ESI,[EBP + 0x12]                ; 00455e69
    LEA EDI,[EBP + 0xfffffe92]          ; 00455e6c
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 00455e72
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[EBP + 0x12]                ; 00455e77
    ADD ESP,0x8                         ; 00455e7a
    MOVSD ES:EDI,ESI                    ; 00455e7d
    MOVSD ES:EDI,ESI                    ; 00455e7e
    MOVSD ES:EDI,ESI                    ; 00455e7f
    MOVSD ES:EDI,ESI                    ; 00455e80
    PUSH 0xbfc90fdb                     ; 00455e81
    LEA ESI,[EBP + 0xfffffe72]          ; 00455e86
    LEA EDI,[EBP + 0xffffff12]          ; 00455e8c
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 00455e92
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    FLDZ                                ; 00455e97
    LEA ESI,[EBP + 0xfffffe72]          ; 00455e99
    ADD ESP,0x4                         ; 00455e9f
    LEA EAX,[EBX + 0x25674]             ; 00455ea2
    MOVSD ES:EDI,ESI                    ; 00455ea8
    MOVSD ES:EDI,ESI                    ; 00455ea9
    MOVSD ES:EDI,ESI                    ; 00455eaa
    MOVSD ES:EDI,ESI                    ; 00455eab
    MOV dword ptr [EBP + 0x76],EAX      ; 00455eac
    FCOMP float ptr [EBX + 0x256b8]     ; 00455eaf
    FNSTSW AX                           ; 00455eb5
    SAHF                                ; 00455eb7
    JNC 0x00456287                      ; 00455eb8
        ;   XREF to: 00456287 (CONDITIONAL_JUMP)  ; LAB_00456287
    PUSH dword ptr [EBX + 0x256b8]      ; 00455ebe
    LEA ESI,[EBP + 0xffffff72]          ; 00455ec4
    LEA EDI,[EBP + 0xfffffe82]          ; 00455eca
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 00455ed0
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    LEA ESI,[EBP + 0xffffff72]          ; 00455ed5
    ADD ESP,0x4                         ; 00455edb
        ;   Label: LAB_00455edb
    MOVSD ES:EDI,ESI                    ; 00455ede
    MOVSD ES:EDI,ESI                    ; 00455edf
    MOVSD ES:EDI,ESI                    ; 00455ee0
    MOVSD ES:EDI,ESI                    ; 00455ee1
    MOV EAX,dword ptr [EBP + 0x76]      ; 00455ee2
    FLD float ptr [EAX + 0x8]           ; 00455ee5
    FMUL double ptr [0x005d027f]        ; 00455ee8 | DAT_005d027f
    SUB ESP,0x4                         ; 00455eee
    LEA ESI,[EBP + -0x2e]               ; 00455ef1
    FSTP float ptr [ESP]                ; 00455ef4
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00593fa0 ; 00455ef7
        ;   XREF to: 00593fa0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00593fa0()
    ADD ESP,0x4                         ; 00455efc
    LEA EAX,[EBP + 0xfffffed2]          ; 00455eff
    LEA EDI,[EBP + 0xfffffed2]          ; 00455f05
    PUSH EAX                            ; 00455f0b
    LEA EAX,[EBP + 0xfffffe82]          ; 00455f0c
    LEA ESI,[EBP + -0x2e]               ; 00455f12
    PUSH EAX                            ; 00455f15
    MOVSD ES:EDI,ESI                    ; 00455f16
    MOVSD ES:EDI,ESI                    ; 00455f17
    MOVSD ES:EDI,ESI                    ; 00455f18
    MOVSD ES:EDI,ESI                    ; 00455f19
    CALL core_xform.cpp_multiplyQuaternionInPlace_FUN_00593d20 ; 00455f1a
        ;   XREF to: 00593d20 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternionInPlace_FUN_00593d20()
    ADD ESP,0x8                         ; 00455f1f
    LEA EAX,[EBP + 0xfffffe62]          ; 00455f22
    PUSH dword ptr [EBX + 0x259b0]      ; 00455f28
    PUSH EAX                            ; 00455f2e
    PUSH 0x5fe2f0                       ; 00455f2f | DAT_005fe2f0
    LEA ESI,[EBP + -0x1e]               ; 00455f34
    LEA EDI,[EBP + 0xfffffe62]          ; 00455f37
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 00455f3d
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    LEA ESI,[EBP + -0x1e]               ; 00455f42
    ADD ESP,0xc                         ; 00455f45
    MOVSD ES:EDI,ESI                    ; 00455f48
    MOVSD ES:EDI,ESI                    ; 00455f49
    MOVSD ES:EDI,ESI                    ; 00455f4a
    MOVSD ES:EDI,ESI                    ; 00455f4b
    LEA EAX,[EBP + 0xfffffe82]          ; 00455f4c
    PUSH dword ptr [EBX + 0x259b0]      ; 00455f52
    PUSH EAX                            ; 00455f58
    LEA EAX,[EBP + 0xfffffe62]          ; 00455f59
    PUSH EAX                            ; 00455f5f
    LEA ESI,[EBP + -0xe]                ; 00455f60
    LEA EDI,[EBP + 0xfffffee2]          ; 00455f63
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 00455f69
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[EBP + -0xe]                ; 00455f6e
    LEA EAX,[EBP + 0xfffffee2]          ; 00455f71
    ADD ESP,0x8                         ; 00455f77
    MOVSD ES:EDI,ESI                    ; 00455f7a
    MOVSD ES:EDI,ESI                    ; 00455f7b
    MOVSD ES:EDI,ESI                    ; 00455f7c
    MOVSD ES:EDI,ESI                    ; 00455f7d
    PUSH EAX                            ; 00455f7e
    MOV EDI,dword ptr [EBP + 0x72]      ; 00455f7f
    LEA EAX,[EBX + 0x964]               ; 00455f82
    SHL EDI,0x4                         ; 00455f88
    MOV dword ptr [EBP + 0x6a],EAX      ; 00455f8b
    ADD EAX,EDI                         ; 00455f8e
    PUSH EAX                            ; 00455f90
    LEA ESI,[EBP + -0x7e]               ; 00455f91
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 00455f94
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    LEA ESI,[EBP + -0x7e]               ; 00455f99
    LEA EDI,[EDI + EBX*0x1 + 0x964]     ; 00455f9c
    ADD ESP,0xc                         ; 00455fa3
    MOVSD ES:EDI,ESI                    ; 00455fa6
    MOVSD ES:EDI,ESI                    ; 00455fa7
    MOVSD ES:EDI,ESI                    ; 00455fa8
    MOVSD ES:EDI,ESI                    ; 00455fa9
    LEA EAX,[EBP + 0xfffffe82]          ; 00455faa
    PUSH dword ptr [EBX + 0x259b0]      ; 00455fb0
    PUSH EAX                            ; 00455fb6
    LEA EAX,[EBP + 0xfffffe92]          ; 00455fb7
    PUSH EAX                            ; 00455fbd
    LEA ESI,[EBP + -0x4e]               ; 00455fbe
    LEA EDI,[EBP + 0xfffffef2]          ; 00455fc1
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 00455fc7
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[EBP + -0x4e]               ; 00455fcc
    LEA EAX,[EBP + 0xfffffef2]          ; 00455fcf
    ADD ESP,0x8                         ; 00455fd5
    MOVSD ES:EDI,ESI                    ; 00455fd8
    MOVSD ES:EDI,ESI                    ; 00455fd9
    MOVSD ES:EDI,ESI                    ; 00455fda
    MOVSD ES:EDI,ESI                    ; 00455fdb
    PUSH EAX                            ; 00455fdc
    MOV EDI,dword ptr [EBP + 0x7a]      ; 00455fdd
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00455fe0
    SHL EDI,0x4                         ; 00455fe3
    ADD EAX,EDI                         ; 00455fe6
    PUSH EAX                            ; 00455fe8
    LEA ESI,[EBP + 0xffffff32]          ; 00455fe9
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 00455fef
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    LEA ESI,[EBP + 0xffffff32]          ; 00455ff4
    LEA EDI,[EDI + EBX*0x1 + 0x964]     ; 00455ffa
    ADD ESP,0xc                         ; 00456001
    MOVSD ES:EDI,ESI                    ; 00456004
    MOVSD ES:EDI,ESI                    ; 00456005
    MOVSD ES:EDI,ESI                    ; 00456006
    MOVSD ES:EDI,ESI                    ; 00456007
    PUSH 0x544cc0                       ; 00456008
    MOV ESI,dword ptr [EBP + 0x6e]      ; 0045600d
    PUSH ESI                            ; 00456010
    LEA EAX,[EBP + 0xfffffe82]          ; 00456011
    PUSH dword ptr [EBX + 0x259b0]      ; 00456017
    PUSH EAX                            ; 0045601d
    LEA EAX,[EBP + 0xffffff12]          ; 0045601e
    PUSH EAX                            ; 00456024
    LEA ESI,[EBP + 0xffffff62]          ; 00456025
    LEA EDI,[EBP + 0xffffff02]          ; 0045602b
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 00456031
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[EBP + 0xffffff62]          ; 00456036
    LEA EAX,[EBP + 0xffffff02]          ; 0045603c
    ADD ESP,0x8                         ; 00456042
    MOVSD ES:EDI,ESI                    ; 00456045
    MOVSD ES:EDI,ESI                    ; 00456046
    MOVSD ES:EDI,ESI                    ; 00456047
    MOVSD ES:EDI,ESI                    ; 00456048
    PUSH EAX                            ; 00456049
    LEA ESI,[EBX + 0x2b4]               ; 0045604a
    PUSH ESI                            ; 00456050
    CALL core_skeleton.cpp_FUN_005466c0 ; 00456051
        ;   XREF to: 005466c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_005466c0(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 00456056
    PUSH ESI                            ; 00456059
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0 ; 0045605a
        ;   XREF to: 00546ae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(CDeformableModelInstance * this_ptr)
    XOR EDI,EDI                         ; 0045605f
    ADD ESP,0x4                         ; 00456061
    LEA ESI,[EBP + 0x22]                ; 00456064
    MOV dword ptr [EBP + 0x22],EDI      ; 00456067
    PUSH EBX                            ; 0045606a
    MOV dword ptr [EBP + 0x2a],EDI      ; 0045606b
    LEA EDI,[EBP + 0x46]                ; 0045606e
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 00456071
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    MOV EDX,0x3fc90fdb                  ; 00456076
    LEA EAX,[EBP + 0x46]                ; 0045607b
    ADD ESP,0x4                         ; 0045607e
    MOV ECX,0x3e800000                  ; 00456081
    MOV dword ptr [EBP + 0x26],EDX      ; 00456086
    PUSH EAX                            ; 00456089
    MOV dword ptr [EBP + 0x2e],ECX      ; 0045608a
    MOVSD ES:EDI,ESI                    ; 0045608d
    MOVSD ES:EDI,ESI                    ; 0045608e
    MOVSD ES:EDI,ESI                    ; 0045608f
    LEA EAX,[EBP + 0x2e]                ; 00456090
    MOV ESI,0xbe051eb8                  ; 00456093
    PUSH EAX                            ; 00456098
    LEA EAX,[EBP + 0xfffffe32]          ; 00456099
    XOR EDI,EDI                         ; 0045609f
    PUSH EAX                            ; 004560a1
    MOV dword ptr [EBP + 0x32],ESI      ; 004560a2
    MOV dword ptr [EBP + 0x36],EDI      ; 004560a5
    CALL core_xform.cpp_FUN_00591c10    ; 004560a8
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    MOV ESI,dword ptr [0x01b4d290]      ; 004560ad | DAT_01b4d290
    LEA EAX,[ESI*0x4 + 0x0]             ; 004560b3
    SUB EAX,ESI                         ; 004560ba
    SHL EAX,0x4                         ; 004560bc
    LEA ESI,[EBX + 0x1134]              ; 004560bf
    ADD ESP,0xc                         ; 004560c5
    ADD EAX,ESI                         ; 004560c8
    PUSH EAX                            ; 004560ca
    LEA EAX,[EBP + 0xfffffe32]          ; 004560cb
    PUSH EAX                            ; 004560d1
    CALL core_xform.cpp_multiplyMatrix3x4InPlace_FUN_00591860 ; 004560d2
        ;   XREF to: 00591860 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4InPlace_FUN_00591860()
    ADD ESP,0x8                         ; 004560d7
    LEA EAX,[EBX + 0x30]                ; 004560da
    PUSH EAX                            ; 004560dd
    LEA EAX,[EBX + 0x20]                ; 004560de
    PUSH EAX                            ; 004560e1
    LEA EAX,[EBP + 0xfffffe02]          ; 004560e2
    PUSH EAX                            ; 004560e8
    CALL core_xform.cpp_FUN_00591c10    ; 004560e9
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    ADD ESP,0xc                         ; 004560ee
    LEA EAX,[EBP + 0xfffffe02]          ; 004560f1
    PUSH EAX                            ; 004560f7
    LEA EAX,[EBP + 0xfffffe32]          ; 004560f8
    PUSH EAX                            ; 004560fe
    LEA ESI,[EBP + 0xfffffdd2]          ; 004560ff
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 00456105
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 0045610a
    LEA ESI,[EBP + 0xfffffdd2]          ; 0045610f
    LEA EDI,[EBX + 0x2575c]             ; 00456115
    MOV EAX,0x3dcccccd                  ; 0045611b
    MOV EDX,0xbf800000                  ; 00456120
    MOVSD.REP ES:EDI,ESI                ; 00456125
    ADD ESP,0x8                         ; 00456127
    MOV ECX,0x3f19999a                  ; 0045612a
    MOV dword ptr [EBP + 0x52],EAX      ; 0045612f
    MOV dword ptr [EBP + 0x56],EDX      ; 00456132
    LEA ESI,[EBX + 0x25790]             ; 00456135
    LEA EAX,[EBP + 0x52]                ; 0045613b
    MOV dword ptr [EBP + 0x5a],ECX      ; 0045613e
    CMP ESI,EAX                         ; 00456141
    JZ 0x00456157                       ; 00456143
        ;   XREF to: 00456157 (CONDITIONAL_JUMP)  ; LAB_00456157
    MOV dword ptr [ESI],0x3dcccccd      ; 00456145
    MOV EAX,dword ptr [EBP + 0x56]      ; 0045614b
    MOV dword ptr [ESI + 0x4],EAX       ; 0045614e
    MOV EAX,dword ptr [EBP + 0x5a]      ; 00456151
    MOV dword ptr [ESI + 0x8],EAX       ; 00456154
    LEA EAX,[EBX + 0x2575c]             ; 00456157
        ;   Label: LAB_00456157
    PUSH EAX                            ; 0045615d
    LEA ESI,[EBP + 0x5e]                ; 0045615e
    LEA EDI,[EBP + 0x3a]                ; 00456161
    CALL core_xform.cpp_FUN_00591de0    ; 00456164
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591de0()
    LEA ESI,[EBP + 0x5e]                ; 00456169
    MOVSD ES:EDI,ESI                    ; 0045616c
    MOVSD ES:EDI,ESI                    ; 0045616d
    MOVSD ES:EDI,ESI                    ; 0045616e
    LEA EAX,[EBP + 0x3a]                ; 0045616f
    LEA ESI,[EBX + 0x2579c]             ; 00456172
    ADD ESP,0x4                         ; 00456178
    CMP ESI,EAX                         ; 0045617b
    JZ 0x00456190                       ; 0045617d
        ;   XREF to: 00456190 (CONDITIONAL_JUMP)  ; LAB_00456190
    MOV EAX,dword ptr [EBP + 0x3a]      ; 0045617f
    MOV dword ptr [ESI],EAX             ; 00456182
    MOV EAX,dword ptr [EBP + 0x3e]      ; 00456184
    MOV dword ptr [ESI + 0x4],EAX       ; 00456187
    MOV EAX,dword ptr [EBP + 0x42]      ; 0045618a
    MOV dword ptr [ESI + 0x8],EAX       ; 0045618d
    LEA EAX,[EBX + 0x2575c]             ; 00456190
        ;   Label: LAB_00456190
    PUSH EAX                            ; 00456196
    LEA ESI,[EBX + 0x25790]             ; 00456197
    PUSH ESI                            ; 0045619d
    CALL core_xform.cpp_transformVector3x4InPlace_FUN_005915b0 ; 0045619e
        ;   XREF to: 005915b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4InPlace_FUN_005915b0()
    ADD ESP,0x8                         ; 004561a3
    PUSH dword ptr [EBX + 0x259b0]      ; 004561a6
    PUSH 0x1cb3950                      ; 004561ac
    MOV EDI,0x1                         ; 004561b1
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570 ; 004561b6
        ;   XREF to: 0044d570 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570(CDemonLight * this_ptr, float intensity)
    ADD ESP,0x8                         ; 004561bb
    MOV dword ptr [0x01cb5604],EDI      ; 004561be | g_CDemonLightInstance.field7348_0x1cb4
    MOV dword ptr [0x01cb560c],EDI      ; 004561c4 | g_CDemonLightInstance.field7356_0x1cbc
    CMP ESI,0x1cb3954                   ; 004561ca
    JZ 0x004561eb                       ; 004561d0
        ;   XREF to: 004561eb (CONDITIONAL_JUMP)  ; LAB_004561eb
    FLD float ptr [ESI]                 ; 004561d2
    FLD float ptr [ESI + 0x8]           ; 004561d4
    MOV EAX,dword ptr [ESI + 0x4]       ; 004561d7
    MOV [0x01cb3958],EAX                ; 004561da | g_CDemonLightInstance.field8_0x8
    FSTP float ptr [0x01cb395c]         ; 004561df | g_CDemonLightInstance.field12_0xc
    FSTP float ptr [0x01cb3954]         ; 004561e5 | g_CDemonLightInstance.field4_0x4
    ADD EBX,0x2579c                     ; 004561eb
        ;   Label: LAB_004561eb
    PUSH EBX                            ; 004561f1
    PUSH 0x1cb3960                      ; 004561f2 | g_CDemonLightInstance.field16_0x10
    MOV EBX,0x1                         ; 004561f7
    CALL core_dirmat.cpp_FUN_00449280   ; 004561fc
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00456201
    MOV EDX,0x41800000                  ; 00456204
    MOV ECX,0x42000000                  ; 00456209
    PUSH 0x1cb3950                      ; 0045620e
    MOV ESI,dword ptr [0x0061b5a8]      ; 00456213 | g_CDemonSetPtr
    MOV dword ptr [0x01cb5620],EBX      ; 00456219 | g_CDemonLightInstance.field7376_0x1cd0
    PUSH ESI                            ; 0045621f | g_CDemonSetInstance
    MOV dword ptr [0x01cb3a90],EDX      ; 00456220 | g_CDemonLightInstance.field320_0x140
    MOV dword ptr [0x01cb3988],ECX      ; 00456226 | g_CDemonLightInstance.field56_0x38
    CALL core_set.cpp_FUN_00530630      ; 0045622c
        ;   XREF to: 00530630 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_00530630(CDemonSet * this_ptr, CDemonLight * light)
    ADD ESP,0x8                         ; 00456231
    LEA ESP,[EBP + 0x82]                ; 00456234
        ;   Label: LAB_00456234
    POP EBP                             ; 0045623a
    POP EDI                             ; 0045623b
    POP ESI                             ; 0045623c
    POP EBX                             ; 0045623d
    RET                                 ; 0045623e
    MOV dword ptr [EBX + 0x259b0],0x3f800000 ; 0045623f
        ;   Label: LAB_0045623f
    JMP 0x00455d67                      ; 00456249
        ;   XREF to: 00455d67 (UNCONDITIONAL_JUMP)  ; LAB_00455d67
    FLD float ptr [EBX + 0x259b0]       ; 0045624e
        ;   Label: LAB_0045624e
    FLDZ                                ; 00456254
    FCOMPP                              ; 00456256
    FNSTSW AX                           ; 00456258
    SAHF                                ; 0045625a
    JNC 0x0045626b                      ; 0045625b
        ;   XREF to: 0045626b (CONDITIONAL_JUMP)  ; LAB_0045626b
    FLD float ptr [EBX + 0x259b0]       ; 0045625d
    FSUB float ptr [EBP + 0x7e]         ; 00456263
    JMP 0x00455d61                      ; 00456266
        ;   XREF to: 00455d61 (UNCONDITIONAL_JUMP)  ; LAB_00455d61
    MOV dword ptr [EBX + 0x259b0],EDX   ; 0045626b
        ;   Label: LAB_0045626b
    JMP 0x00455d67                      ; 00456271
        ;   XREF to: 00455d67 (UNCONDITIONAL_JUMP)  ; LAB_00455d67
    TEST dword ptr [EBX + 0x259b0],0x7fffffff ; 00456276
        ;   Label: LAB_00456276
    JZ 0x00456234                       ; 00456280
        ;   XREF to: 00456234 (CONDITIONAL_JUMP)  ; LAB_00456234
    JMP 0x00455d9d                      ; 00456282
        ;   XREF to: 00455d9d (UNCONDITIONAL_JUMP)  ; LAB_00455d9d
    PUSH 0x0                            ; 00456287
        ;   Label: LAB_00456287
    LEA ESI,[EBP + -0x6e]               ; 00456289
    LEA EDI,[EBP + 0xfffffe82]          ; 0045628c
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 00456292
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    LEA ESI,[EBP + -0x6e]               ; 00456297
    JMP 0x00455edb                      ; 0045629a
        ;   XREF to: 00455edb (UNCONDITIONAL_JUMP)  ; LAB_00455edb

