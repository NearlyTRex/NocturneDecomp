; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004afa20(CGabriella *this_ptr)
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
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined8       Stack[-0x58]:8  local_58
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x48]:4  local_48
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
;   core_gabriela.cpp_CGabriella_process_FUN_004ad640 at 004adcc7
;
; Referenced Globals:
;   undefined4 DAT_005d7037
;   undefined4 DAT_005d7043
;   undefined4 DAT_005d704b
;   undefined4 DAT_005d7053
;   undefined4 DAT_005d7057
;   undefined4 DAT_005d705b
;   undefined4 DAT_005d7063
;   undefined4 DAT_005f7330
;   undefined4 DAT_005f7334
;   undefined4 DAT_005f7338
;   undefined4 DAT_01cb0624
;   undefined4 DAT_01cb0628
;   undefined4 DAT_01cb062c
;   undefined4 DAT_01cb0630
;   undefined4 DAT_01cb0634
;   ... and 14 more
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c840
;   core_gabriela.cpp_CGabriella_getFlashlightMaxAngle_FUN_004af950
;   core_gabriela.cpp_CGabriella_getFlashlightMinAngle_FUN_004af900
;   core_motion.cpp_FUN_00503f50
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
;   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_00544f80
;   core_xform.cpp_FUN_00594380
;   core_xform.cpp_multiplyQuaternion_FUN_00593c60
;   core_xform.cpp_quaternionFromAngleX_FUN_00593fa0
;   core_xform.cpp_quaternionFromAngleY_FUN_00593fe0
;   core_xform.cpp_quaternionFromAngleZ_FUN_00594020
;   core_xform.cpp_slerpQuaternion_FUN_00593df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004afa20
        ;   Label: core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004afa20
    PUSH ESI                            ; 004afa21
    PUSH EDI                            ; 004afa22
    PUSH EBP                            ; 004afa23
    MOV EBP,ESP                         ; 004afa24
    SUB ESP,0x1fc                       ; 004afa26
    SUB EBP,0x7e                        ; 004afa2c
    MOV EBX,dword ptr [EBP + 0x92]      ; 004afa2f
    LEA EAX,[EBX + 0x2b4]               ; 004afa35
    PUSH EAX                            ; 004afa3b
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 004afa3c
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x25670]   ; 004afa41
    XOR EDX,EDX                         ; 004afa47
    MOV dword ptr [EBP + -0xe],EAX      ; 004afa49
    MOV dword ptr [EBP + -0x6],EDX      ; 004afa4c
    MOV EAX,dword ptr [EBX + 0x25674]   ; 004afa4f
    ADD ESP,0x4                         ; 004afa55
    MOV dword ptr [EBP + -0xa],EAX      ; 004afa58
    LEA EAX,[EBP + -0xe]                ; 004afa5b
    PUSH EAX                            ; 004afa5e
    LEA ESI,[EBP + 0xffffff52]          ; 004afa5f
    LEA EDI,[EBP + 0xfffffed2]          ; 004afa65
    CALL core_xform.cpp_FUN_00594380    ; 004afa6b
        ;   XREF to: 00594380 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00594380()
    LEA ESI,[EBP + 0xffffff52]          ; 004afa70
    MOVSD ES:EDI,ESI                    ; 004afa76
    MOVSD ES:EDI,ESI                    ; 004afa77
    MOVSD ES:EDI,ESI                    ; 004afa78
    MOVSD ES:EDI,ESI                    ; 004afa79
    ADD ESP,0x4                         ; 004afa7a
    FLD float ptr [EBX + 0x25648]       ; 004afa7d
    FLDZ                                ; 004afa83
    FCOMPP                              ; 004afa85
    FNSTSW AX                           ; 004afa87
    SAHF                                ; 004afa89
    JC 0x004afc34                       ; 004afa8a
        ;   XREF to: 004afc34 (CONDITIONAL_JUMP)  ; LAB_004afc34
    FLD float ptr [EBP + -0xe]          ; 004afa90
        ;   Label: LAB_004afa90
    MOV EDX,0x3f490fdb                  ; 004afa93
    MOV ECX,0xbfdf66f3                  ; 004afa98
    MOV ESI,0x3fdf66f3                  ; 004afa9d
    MOV dword ptr [EBP + 0x52],EDX      ; 004afaa2
    MOV dword ptr [EBP + 0x56],ECX      ; 004afaa5
    MOV dword ptr [EBP + 0x5a],ESI      ; 004afaa8
    FCOMP float ptr [0x005d705b]        ; 004afaab | DAT_005d705b
    FNSTSW AX                           ; 004afab1
    SAHF                                ; 004afab3
    JNC 0x004afabd                      ; 004afab4
        ;   XREF to: 004afabd (CONDITIONAL_JUMP)  ; LAB_004afabd
    MOV dword ptr [EBP + -0xe],0xbf9c61aa ; 004afab6
    FLD float ptr [EBP + -0xe]          ; 004afabd
        ;   Label: LAB_004afabd
    FCOMP float ptr [EBP + 0x52]        ; 004afac0
    FNSTSW AX                           ; 004afac3
    SAHF                                ; 004afac5
    JBE 0x004aface                      ; 004afac6
        ;   XREF to: 004aface (CONDITIONAL_JUMP)  ; LAB_004aface
    MOV EAX,dword ptr [EBP + 0x52]      ; 004afac8
    MOV dword ptr [EBP + -0xe],EAX      ; 004afacb
    FLD float ptr [EBP + -0xa]          ; 004aface
        ;   Label: LAB_004aface
    FCOMP float ptr [EBP + 0x56]        ; 004afad1
    FNSTSW AX                           ; 004afad4
    SAHF                                ; 004afad6
    JNC 0x004afadf                      ; 004afad7
        ;   XREF to: 004afadf (CONDITIONAL_JUMP)  ; LAB_004afadf
    MOV EAX,dword ptr [EBP + 0x56]      ; 004afad9
    MOV dword ptr [EBP + -0xa],EAX      ; 004afadc
    FLD float ptr [EBP + -0xa]          ; 004afadf
        ;   Label: LAB_004afadf
    FCOMP float ptr [EBP + 0x5a]        ; 004afae2
    FNSTSW AX                           ; 004afae5
    SAHF                                ; 004afae7
    JBE 0x004afaf0                      ; 004afae8
        ;   XREF to: 004afaf0 (CONDITIONAL_JUMP)  ; LAB_004afaf0
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004afaea
    MOV dword ptr [EBP + -0xa],EAX      ; 004afaed
    PUSH 0x544cc0                       ; 004afaf0
        ;   Label: LAB_004afaf0
    MOV EAX,[0x01cb0678]                ; 004afaf5 | DAT_01cb0678
    FLD float ptr [EBX + 0x2564c]       ; 004afafa
    PUSH EAX                            ; 004afb00
    FMUL float ptr [EBX + 0x2567c]      ; 004afb01
    SUB ESP,0x4                         ; 004afb07
    LEA EAX,[EBP + -0xe]                ; 004afb0a
    FSTP float ptr [ESP]                ; 004afb0d
    PUSH EAX                            ; 004afb10
    LEA ESI,[EBP + -0x6e]               ; 004afb11
    CALL core_xform.cpp_FUN_00594380    ; 004afb14
        ;   XREF to: 00594380 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00594380()
    ADD ESP,0x4                         ; 004afb19
    LEA EAX,[EBP + 0xfffffee2]          ; 004afb1c
    LEA EDI,[EBP + 0xfffffee2]          ; 004afb22
    PUSH EAX                            ; 004afb28
    LEA EAX,[EBX + 0x2b4]               ; 004afb29
    LEA ESI,[EBP + -0x6e]               ; 004afb2f
    PUSH EAX                            ; 004afb32
    MOVSD ES:EDI,ESI                    ; 004afb33
    MOVSD ES:EDI,ESI                    ; 004afb34
    MOVSD ES:EDI,ESI                    ; 004afb35
    MOVSD ES:EDI,ESI                    ; 004afb36
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0 ; 004afb37
        ;   XREF to: 005466c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 004afb3c
    PUSH EBX                            ; 004afb3f
    CALL core_gabriela.cpp_CGabriella_getFlashlightMinAngle_FUN_004af900 ; 004afb40
        ;   XREF to: 004af900 (UNCONDITIONAL_CALL)  ; float core_gabriela.cpp_CGabriella_getFlashlightMinAngle_FUN_004af900(CGabriella * this_ptr)
    MOV dword ptr [EBP + 0x7a],EAX      ; 004afb45
    ADD ESP,0x4                         ; 004afb48
    FLD float ptr [EBP + 0x7a]          ; 004afb4b
    PUSH EBX                            ; 004afb4e
    FSTP float ptr [EBP + 0x46]         ; 004afb4f
    CALL core_gabriela.cpp_CGabriella_getFlashlightMaxAngle_FUN_004af950 ; 004afb52
        ;   XREF to: 004af950 (UNCONDITIONAL_CALL)  ; float core_gabriela.cpp_CGabriella_getFlashlightMaxAngle_FUN_004af950(CGabriella * this_ptr)
    FLD float ptr [EBX + 0x25654]       ; 004afb57
    MOV dword ptr [EBP + 0x7a],EAX      ; 004afb5d
    FSUB float ptr [EBP + 0x46]         ; 004afb60
    FLD float ptr [EBP + 0x7a]          ; 004afb63
    FSUB float ptr [EBP + 0x46]         ; 004afb66
    FDIVP                               ; 004afb69
    FLD1                                ; 004afb6b
    FSUBRP                              ; 004afb6d
    FMUL double ptr [0x005d7063]        ; 004afb6f | DAT_005d7063
    ADD ESP,0x4                         ; 004afb75
    FST float ptr [0x01cb0674]          ; 004afb78 | DAT_01cb0674
    FLD1                                ; 004afb7e
    FCOMPP                              ; 004afb80
    FNSTSW AX                           ; 004afb82
    SAHF                                ; 004afb84
    JNC 0x004afb91                      ; 004afb85
        ;   XREF to: 004afb91 (CONDITIONAL_JUMP)  ; LAB_004afb91
    MOV dword ptr [0x01cb0674],0x3f800000 ; 004afb87 | DAT_01cb0674
    PUSH 0x4ad1e0                       ; 004afb91
        ;   Label: LAB_004afb91
    MOV ECX,dword ptr [0x01cb067c]      ; 004afb96 | DAT_01cb067c
    PUSH ECX                            ; 004afb9c
    PUSH dword ptr [EBX + 0x25650]      ; 004afb9d
    LEA ESI,[EBP + 0xfffffea2]          ; 004afba3
    PUSH dword ptr [EBX + 0x25654]      ; 004afba9
    LEA EDI,[EBP + 0xffffff22]          ; 004afbaf
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00593fa0 ; 004afbb5
        ;   XREF to: 00593fa0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00593fa0()
    ADD ESP,0x4                         ; 004afbba
    LEA EAX,[EBP + 0xffffff22]          ; 004afbbd
    LEA ESI,[EBP + 0xfffffea2]          ; 004afbc3
    PUSH EAX                            ; 004afbc9
    MOVSD ES:EDI,ESI                    ; 004afbca
    MOVSD ES:EDI,ESI                    ; 004afbcb
    MOVSD ES:EDI,ESI                    ; 004afbcc
    MOVSD ES:EDI,ESI                    ; 004afbcd
    PUSH 0x3fc90fdb                     ; 004afbce
    LEA ESI,[EBP + 0xfffffeb2]          ; 004afbd3
    LEA EDI,[EBP + 0xffffff12]          ; 004afbd9
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 004afbdf
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    LEA ESI,[EBP + 0xfffffeb2]          ; 004afbe4
    LEA EAX,[EBP + 0xffffff12]          ; 004afbea
    ADD ESP,0x4                         ; 004afbf0
    MOVSD ES:EDI,ESI                    ; 004afbf3
    MOVSD ES:EDI,ESI                    ; 004afbf4
    MOVSD ES:EDI,ESI                    ; 004afbf5
    MOVSD ES:EDI,ESI                    ; 004afbf6
    PUSH EAX                            ; 004afbf7
    LEA ESI,[EBP + 0xfffffec2]          ; 004afbf8
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 004afbfe
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    ADD ESP,0x8                         ; 004afc03
    LEA EAX,[EBP + 0xffffff32]          ; 004afc06
    ADD EBX,0x2b4                       ; 004afc0c
    PUSH EAX                            ; 004afc12
    LEA EDI,[EBP + 0xffffff32]          ; 004afc13
    LEA ESI,[EBP + 0xfffffec2]          ; 004afc19
    PUSH EBX                            ; 004afc1f
    MOVSD ES:EDI,ESI                    ; 004afc20
    MOVSD ES:EDI,ESI                    ; 004afc21
    MOVSD ES:EDI,ESI                    ; 004afc22
    MOVSD ES:EDI,ESI                    ; 004afc23
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0 ; 004afc24
        ;   XREF to: 005466c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 004afc29
    LEA ESP,[EBP + 0x7e]                ; 004afc2c
    POP EBP                             ; 004afc2f
    POP EDI                             ; 004afc30
    POP ESI                             ; 004afc31
    POP EBX                             ; 004afc32
    RET                                 ; 004afc33
    FLD float ptr [EBX + 0x25648]       ; 004afc34
        ;   Label: LAB_004afc34
    FDIV float ptr [0x005f7330]         ; 004afc3a | DAT_005f7330
    FST float ptr [EBP + 0x6a]          ; 004afc40
    FLD1                                ; 004afc43
    FCOMPP                              ; 004afc45
    FNSTSW AX                           ; 004afc47
    SAHF                                ; 004afc49
    JNC 0x004afc53                      ; 004afc4a
        ;   XREF to: 004afc53 (CONDITIONAL_JUMP)  ; LAB_004afc53
    MOV dword ptr [EBP + 0x6a],0x3f800000 ; 004afc4c
    FLD float ptr [EBX + 0x25648]       ; 004afc53
        ;   Label: LAB_004afc53
    FCOMP float ptr [0x005f7338]        ; 004afc59 | DAT_005f7338
    FNSTSW AX                           ; 004afc5f
    SAHF                                ; 004afc61
    JBE 0x004afc8e                      ; 004afc62
        ;   XREF to: 004afc8e (CONDITIONAL_JUMP)  ; LAB_004afc8e
    FLD float ptr [0x005f7338]          ; 004afc64 | DAT_005f7338
    FLD float ptr [EBX + 0x25648]       ; 004afc6a
    FSUB ST0,ST1                        ; 004afc70
    FLD1                                ; 004afc72
    FSUBRP ST2,ST0                      ; 004afc74
    FDIVRP                              ; 004afc76
    FLD float ptr [EBX + 0x2567c]       ; 004afc78
    FLD1                                ; 004afc7e
    FSUBRP                              ; 004afc80
    FMULP                               ; 004afc82
    FLD1                                ; 004afc84
    FSUBRP                              ; 004afc86
    FMUL float ptr [EBP + 0x6a]         ; 004afc88
    FSTP float ptr [EBP + 0x6a]         ; 004afc8b
    LEA EAX,[EBX + 0x2437c]             ; 004afc8e
        ;   Label: LAB_004afc8e
    MOV ESI,dword ptr [EAX + 0x468]     ; 004afc94
    PUSH 0x5d7037                       ; 004afc9a | DAT_005d7037
    MOV EAX,dword ptr [EAX + ESI*0x4 + 0x610] ; 004afc9f
    PUSH EAX                            ; 004afca6
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004afca7
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004afcac
    TEST EAX,EAX                        ; 004afcaf
    JZ 0x004aff2f                       ; 004afcb1
        ;   XREF to: 004aff2f (CONDITIONAL_JUMP)  ; LAB_004aff2f
    FLD float ptr [EBX + 0x25648]       ; 004afcb7
    FDIV float ptr [0x005f7334]         ; 004afcbd | DAT_005f7334
    MOV ESI,dword ptr [0x01cb0690]      ; 004afcc3 | DAT_01cb0690
    LEA EAX,[EBX + 0x964]               ; 004afcc9
    SHL ESI,0x4                         ; 004afccf
    SUB ESP,0x4                         ; 004afcd2
    ADD ESI,EAX                         ; 004afcd5
    FSTP float ptr [ESP]                ; 004afcd7
    PUSH ESI                            ; 004afcda
    MOV ESI,dword ptr [0x01cb06bc]      ; 004afcdb | DAT_01cb06bc
    SHL ESI,0x4                         ; 004afce1
    ADD EAX,ESI                         ; 004afce4
    PUSH EAX                            ; 004afce6
    LEA ESI,[EBP + -0x4e]               ; 004afce7
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 004afcea
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    MOV EAX,[0x01cb06bc]                ; 004afcef | DAT_01cb06bc
    SHL EAX,0x4                         ; 004afcf4
    LEA ESI,[EBP + -0x4e]               ; 004afcf7
    LEA EDI,[EBX + EAX*0x1 + 0x964]     ; 004afcfa
    FLD float ptr [EBP + 0x6a]          ; 004afd01
    ADD ESP,0xc                         ; 004afd04
    MOVSD ES:EDI,ESI                    ; 004afd07
    MOVSD ES:EDI,ESI                    ; 004afd08
    MOVSD ES:EDI,ESI                    ; 004afd09
    MOVSD ES:EDI,ESI                    ; 004afd0a
    FCOMP double ptr [0x005d7043]       ; 004afd0b | DAT_005d7043
    FNSTSW AX                           ; 004afd11
    SAHF                                ; 004afd13
    JBE 0x004afe40                      ; 004afd14
        ;   XREF to: 004afe40 (CONDITIONAL_JUMP)  ; LAB_004afe40
    MOV EAX,dword ptr [EBX + 0x25648]   ; 004afd1a
    MOV dword ptr [EBP + 0x6e],EAX      ; 004afd20
    FLD float ptr [EBP + 0x6e]          ; 004afd23
    FCOMP float ptr [0x005f7338]        ; 004afd26 | DAT_005f7338
    FNSTSW AX                           ; 004afd2c
    SAHF                                ; 004afd2e
    JBE 0x004afd39                      ; 004afd2f
        ;   XREF to: 004afd39 (CONDITIONAL_JUMP)  ; LAB_004afd39
    MOV EAX,[0x005f7338]                ; 004afd31 | DAT_005f7338
    MOV dword ptr [EBP + 0x6e],EAX      ; 004afd36
    FLD float ptr [0x005f7330]          ; 004afd39 | DAT_005f7330
        ;   Label: LAB_004afd39
    FLD float ptr [EBP + 0x6e]          ; 004afd3f
    FSUB ST0,ST1                        ; 004afd42
    FLD1                                ; 004afd44
    FSUBRP ST2,ST0                      ; 004afd46
    FDIVRP                              ; 004afd48
    FST float ptr [EBP + 0x6e]          ; 004afd4a
    FLDZ                                ; 004afd4d
    FCOMPP                              ; 004afd4f
    FNSTSW AX                           ; 004afd51
    SAHF                                ; 004afd53
    JBE 0x004afd5b                      ; 004afd54
        ;   XREF to: 004afd5b (CONDITIONAL_JUMP)  ; LAB_004afd5b
    XOR EDX,EDX                         ; 004afd56
    MOV dword ptr [EBP + 0x6e],EDX      ; 004afd58
    FLD float ptr [EBP + 0x6e]          ; 004afd5b
        ;   Label: LAB_004afd5b
    FLD1                                ; 004afd5e
    FCOMPP                              ; 004afd60
    FNSTSW AX                           ; 004afd62
    SAHF                                ; 004afd64
    JNC 0x004afd6e                      ; 004afd65
        ;   XREF to: 004afd6e (CONDITIONAL_JUMP)  ; LAB_004afd6e
    MOV dword ptr [EBP + 0x6e],0x3f800000 ; 004afd67
    MOV ESI,dword ptr [0x01cb06ac]      ; 004afd6e | DAT_01cb06ac
        ;   Label: LAB_004afd6e
    PUSH dword ptr [EBP + 0x6e]         ; 004afd74
    PUSH ESI                            ; 004afd77
    LEA ESI,[EBX + 0x2b4]               ; 004afd78
    PUSH ESI                            ; 004afd7e
    CALL core_motion.cpp_FUN_00503f50   ; 004afd7f
        ;   XREF to: 00503f50 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00503f50()
    ADD ESP,0xc                         ; 004afd84
    PUSH 0x544cc0                       ; 004afd87
    MOV EDI,dword ptr [0x01cb0688]      ; 004afd8c | DAT_01cb0688
    MOV dword ptr [EBP + 0x7a],EAX      ; 004afd92
    PUSH EDI                            ; 004afd95
    FLD float ptr [EBP + 0x7a]          ; 004afd96
    MOV EAX,[0x01cb06ac]                ; 004afd99 | DAT_01cb06ac
    PUSH dword ptr [EBP + 0x6a]         ; 004afd9e
    FSTP float ptr [EBP + 0x3e]         ; 004afda1
    PUSH dword ptr [EBP + 0x3e]         ; 004afda4
    PUSH EAX                            ; 004afda7
    PUSH ESI                            ; 004afda8
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00545a60 ; 004afda9
        ;   XREF to: 00545a60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00545a60(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    FLD float ptr [EBX + 0x25648]       ; 004afdae
    ADD ESP,0x18                        ; 004afdb4
    FCOMP float ptr [0x005f7338]        ; 004afdb7 | DAT_005f7338
    FNSTSW AX                           ; 004afdbd
    SAHF                                ; 004afdbf
    JC 0x004afe40                       ; 004afdc0
        ;   XREF to: 004afe40 (CONDITIONAL_JUMP)  ; LAB_004afe40
    FLD float ptr [0x005f7338]          ; 004afdc6 | DAT_005f7338
    FLD float ptr [EBX + 0x25648]       ; 004afdcc
    FSUB ST0,ST1                        ; 004afdd2
    FLD1                                ; 004afdd4
    FSUBRP ST2,ST0                      ; 004afdd6
    FDIVRP                              ; 004afdd8
    FMUL float ptr [EBX + 0x2567c]      ; 004afdda
    FST float ptr [EBP + 0x5e]          ; 004afde0
    FCOMP double ptr [0x005d7043]       ; 004afde3 | DAT_005d7043
    FNSTSW AX                           ; 004afde9
    SAHF                                ; 004afdeb
    JBE 0x004afe40                      ; 004afdec
        ;   XREF to: 004afe40 (CONDITIONAL_JUMP)  ; LAB_004afe40
    MOV AH,byte ptr [0x01cb0634]        ; 004afdee | DAT_01cb0634
    TEST AH,0x1                         ; 004afdf4
    JZ 0x004afeba                       ; 004afdf7
        ;   XREF to: 004afeba (CONDITIONAL_JUMP)  ; LAB_004afeba
    LEA EAX,[EBP + 0xfffffed2]          ; 004afdfd
        ;   Label: LAB_004afdfd
    PUSH EAX                            ; 004afe03
    PUSH 0x1cb0624                      ; 004afe04 | DAT_01cb0624
    LEA ESI,[EBP + -0x5e]               ; 004afe09
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 004afe0c
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    ADD ESP,0x8                         ; 004afe11
    PUSH 0x4ad1a0                       ; 004afe14
    MOV EDX,dword ptr [0x01cb0688]      ; 004afe19 | DAT_01cb0688
    PUSH EDX                            ; 004afe1f
    LEA EAX,[EBP + -0x1e]               ; 004afe20
    PUSH dword ptr [EBP + 0x5e]         ; 004afe23
    LEA EDI,[EBP + -0x1e]               ; 004afe26
    PUSH EAX                            ; 004afe29
    LEA EAX,[EBX + 0x2b4]               ; 004afe2a
    LEA ESI,[EBP + -0x5e]               ; 004afe30
    PUSH EAX                            ; 004afe33
    MOVSD ES:EDI,ESI                    ; 004afe34
    MOVSD ES:EDI,ESI                    ; 004afe35
    MOVSD ES:EDI,ESI                    ; 004afe36
    MOVSD ES:EDI,ESI                    ; 004afe37
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0 ; 004afe38
        ;   XREF to: 005466c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 004afe3d
    FLD float ptr [EBX + 0x25678]       ; 004afe40
        ;   Label: LAB_004afe40
    FLDZ                                ; 004afe46
    FCOMPP                              ; 004afe48
    FNSTSW AX                           ; 004afe4a
    SAHF                                ; 004afe4c
    JNC 0x004afa90                      ; 004afe4d
        ;   XREF to: 004afa90 (CONDITIONAL_JUMP)  ; LAB_004afa90
    FLD float ptr [EBX + 0x25678]       ; 004afe53
    FMUL double ptr [0x005d704b]        ; 004afe59 | DAT_005d704b
    SUB ESP,0x4                         ; 004afe5f
    MOV dword ptr [EBX + 0x2504],0x2    ; 004afe62
    FLD1                                ; 004afe6c
    FSUBRP                              ; 004afe6e
    MOV ECX,dword ptr [0x01cb06b4]      ; 004afe70 | DAT_01cb06b4
    FSTP float ptr [ESP]                ; 004afe76
    PUSH ECX                            ; 004afe79
    LEA ESI,[EBX + 0x2b4]               ; 004afe7a
    PUSH ESI                            ; 004afe80
    CALL core_motion.cpp_FUN_00503f50   ; 004afe81
        ;   XREF to: 00503f50 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00503f50()
    MOV EDI,dword ptr [0x01cb0690]      ; 004afe86 | DAT_01cb0690
    MOV dword ptr [EBP + 0x7a],EAX      ; 004afe8c
    ADD ESP,0xc                         ; 004afe8f
    FLD float ptr [EBP + 0x7a]          ; 004afe92
    MOV EAX,[0x01cb06b4]                ; 004afe95 | DAT_01cb06b4
    PUSH EDI                            ; 004afe9a
    FSTP float ptr [EBP + 0x4e]         ; 004afe9b
    PUSH dword ptr [EBP + 0x4e]         ; 004afe9e
    PUSH EAX                            ; 004afea1
    PUSH ESI                            ; 004afea2
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_00544f80 ; 004afea3
        ;   XREF to: 00544f80 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_00544f80(CDeformableModelInstance * this_ptr, int motion_index, float frame_number, int bone_index)
    ADD ESP,0x10                        ; 004afea8
    MOV dword ptr [EBX + 0x2504],0x0    ; 004afeab
    JMP 0x004afa90                      ; 004afeb5
        ;   XREF to: 004afa90 (UNCONDITIONAL_JUMP)  ; LAB_004afa90
    PUSH 0xbfc90fdb                     ; 004afeba
        ;   Label: LAB_004afeba
    MOV DL,AH                           ; 004afebf
    LEA ESI,[EBP + 0xffffff72]          ; 004afec1
    OR DL,0x1                           ; 004afec7
    LEA EDI,[EBP + -0x3e]               ; 004afeca
    MOV byte ptr [0x01cb0634],DL        ; 004afecd | DAT_01cb0634
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_00594020 ; 004afed3
        ;   XREF to: 00594020 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleZ_FUN_00594020()
    ADD ESP,0x4                         ; 004afed8
    LEA EAX,[EBP + -0x3e]               ; 004afedb
    LEA ESI,[EBP + 0xffffff72]          ; 004afede
    PUSH EAX                            ; 004afee4
    MOVSD ES:EDI,ESI                    ; 004afee5
    MOVSD ES:EDI,ESI                    ; 004afee6
    MOVSD ES:EDI,ESI                    ; 004afee7
    MOVSD ES:EDI,ESI                    ; 004afee8
    PUSH 0xbfc90fdb                     ; 004afee9
    LEA ESI,[EBP + 0xfffffe82]          ; 004afeee
    LEA EDI,[EBP + -0x2e]               ; 004afef4
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 004afef7
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    LEA ESI,[EBP + 0xfffffe82]          ; 004afefc
    LEA EAX,[EBP + -0x2e]               ; 004aff02
    ADD ESP,0x4                         ; 004aff05
    MOVSD ES:EDI,ESI                    ; 004aff08
    MOVSD ES:EDI,ESI                    ; 004aff09
    MOVSD ES:EDI,ESI                    ; 004aff0a
    MOVSD ES:EDI,ESI                    ; 004aff0b
    PUSH EAX                            ; 004aff0c
    LEA ESI,[EBP + 0xfffffe92]          ; 004aff0d
    MOV EDI,0x1cb0624                   ; 004aff13
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 004aff18
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[EBP + 0xfffffe92]          ; 004aff1d
    ADD ESP,0x8                         ; 004aff23
    MOVSD ES:EDI,ESI                    ; 004aff26 | DAT_01cb0624
    MOVSD ES:EDI,ESI                    ; 004aff27 | DAT_01cb0628
    MOVSD ES:EDI,ESI                    ; 004aff28 | DAT_01cb062c
    MOVSD ES:EDI,ESI                    ; 004aff29 | DAT_01cb0630
    JMP 0x004afdfd                      ; 004aff2a
        ;   XREF to: 004afdfd (UNCONDITIONAL_JUMP)  ; LAB_004afdfd
    FLD float ptr [EBP + 0x6a]          ; 004aff2f
        ;   Label: LAB_004aff2f
    FCOMP double ptr [0x005d7043]       ; 004aff32 | DAT_005d7043
    FNSTSW AX                           ; 004aff38
    SAHF                                ; 004aff3a
    JBE 0x004b014b                      ; 004aff3b
        ;   XREF to: 004b014b (CONDITIONAL_JUMP)  ; LAB_004b014b
    MOV EAX,dword ptr [EBX + 0x25648]   ; 004aff41
    MOV dword ptr [EBP + 0x72],EAX      ; 004aff47
    FLD float ptr [EBP + 0x72]          ; 004aff4a
    FCOMP float ptr [0x005f7338]        ; 004aff4d | DAT_005f7338
    FNSTSW AX                           ; 004aff53
    SAHF                                ; 004aff55
    JBE 0x004aff60                      ; 004aff56
        ;   XREF to: 004aff60 (CONDITIONAL_JUMP)  ; LAB_004aff60
    MOV EAX,[0x005f7338]                ; 004aff58 | DAT_005f7338
    MOV dword ptr [EBP + 0x72],EAX      ; 004aff5d
    FLD float ptr [0x005f7330]          ; 004aff60 | DAT_005f7330
        ;   Label: LAB_004aff60
    FLD float ptr [EBP + 0x72]          ; 004aff66
    FSUB ST0,ST1                        ; 004aff69
    FLD1                                ; 004aff6b
    FSUBRP ST2,ST0                      ; 004aff6d
    FDIVRP                              ; 004aff6f
    FST float ptr [EBP + 0x72]          ; 004aff71
    FLDZ                                ; 004aff74
    FCOMPP                              ; 004aff76
    FNSTSW AX                           ; 004aff78
    SAHF                                ; 004aff7a
    JBE 0x004aff82                      ; 004aff7b
        ;   XREF to: 004aff82 (CONDITIONAL_JUMP)  ; LAB_004aff82
    XOR ESI,ESI                         ; 004aff7d
    MOV dword ptr [EBP + 0x72],ESI      ; 004aff7f
    FLD float ptr [EBP + 0x72]          ; 004aff82
        ;   Label: LAB_004aff82
    FLD1                                ; 004aff85
    FCOMPP                              ; 004aff87
    FNSTSW AX                           ; 004aff89
    SAHF                                ; 004aff8b
    JNC 0x004aff95                      ; 004aff8c
        ;   XREF to: 004aff95 (CONDITIONAL_JUMP)  ; LAB_004aff95
    MOV dword ptr [EBP + 0x72],0x3f800000 ; 004aff8e
    MOV EAX,[0x01cb06ac]                ; 004aff95 | DAT_01cb06ac
        ;   Label: LAB_004aff95
    PUSH dword ptr [EBP + 0x72]         ; 004aff9a
    PUSH EAX                            ; 004aff9d
    LEA ESI,[EBX + 0x2b4]               ; 004aff9e
    PUSH ESI                            ; 004affa4
    CALL core_motion.cpp_FUN_00503f50   ; 004affa5
        ;   XREF to: 00503f50 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00503f50()
    ADD ESP,0xc                         ; 004affaa
    MOV EDX,dword ptr [0x01cb0688]      ; 004affad | DAT_01cb0688
    PUSH 0x544cc0                       ; 004affb3
    MOV ECX,dword ptr [0x01cb06ac]      ; 004affb8 | DAT_01cb06ac
    MOV dword ptr [EBP + 0x7a],EAX      ; 004affbe
    PUSH EDX                            ; 004affc1
    FLD float ptr [EBP + 0x7a]          ; 004affc2
    PUSH dword ptr [EBP + 0x6a]         ; 004affc5
    FSTP float ptr [EBP + 0x76]         ; 004affc8
    PUSH dword ptr [EBP + 0x76]         ; 004affcb
    PUSH ECX                            ; 004affce
    PUSH ESI                            ; 004affcf
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00545a60 ; 004affd0
        ;   XREF to: 00545a60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00545a60(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    FLD float ptr [EBX + 0x25648]       ; 004affd5
    ADD ESP,0x18                        ; 004affdb
    FCOMP float ptr [0x005f7338]        ; 004affde | DAT_005f7338
    FNSTSW AX                           ; 004affe4
    SAHF                                ; 004affe6
    JC 0x004b014b                       ; 004affe7
        ;   XREF to: 004b014b (CONDITIONAL_JUMP)  ; LAB_004b014b
    FLD float ptr [0x005f7338]          ; 004affed | DAT_005f7338
    FLD float ptr [EBX + 0x25648]       ; 004afff3
    FSUB ST0,ST1                        ; 004afff9
    FLD1                                ; 004afffb
    FSUBRP ST2,ST0                      ; 004afffd
    FDIVRP                              ; 004affff
    FMUL float ptr [EBX + 0x2567c]      ; 004b0001
    FST float ptr [EBP + 0x66]          ; 004b0007
    FCOMP float ptr [EBX + 0x25678]     ; 004b000a
    FNSTSW AX                           ; 004b0010
    SAHF                                ; 004b0012
    JNC 0x004b001e                      ; 004b0013
        ;   XREF to: 004b001e (CONDITIONAL_JUMP)  ; LAB_004b001e
    MOV EAX,dword ptr [EBX + 0x25678]   ; 004b0015
    MOV dword ptr [EBP + 0x66],EAX      ; 004b001b
    FLD float ptr [EBP + 0x66]          ; 004b001e
        ;   Label: LAB_004b001e
    FCOMP double ptr [0x005d7043]       ; 004b0021 | DAT_005d7043
    FNSTSW AX                           ; 004b0027
    SAHF                                ; 004b0029
    JBE 0x004b014b                      ; 004b002a
        ;   XREF to: 004b014b (CONDITIONAL_JUMP)  ; LAB_004b014b
    FLDZ                                ; 004b0030
    FLD float ptr [EBX + 0x25678]       ; 004b0032
    XOR ESI,ESI                         ; 004b0038
    FSTP double ptr [EBP + 0x36]        ; 004b003a
    MOV dword ptr [EBP + 0x62],ESI      ; 004b003d
    FCOMP double ptr [EBP + 0x36]       ; 004b0040
    FNSTSW AX                           ; 004b0043
    SAHF                                ; 004b0045
    JNC 0x004b0050                      ; 004b0046
        ;   XREF to: 004b0050 (CONDITIONAL_JUMP)  ; LAB_004b0050
    FLD1                                ; 004b0048
    FSUB double ptr [EBP + 0x36]        ; 004b004a
    FSTP float ptr [EBP + 0x62]         ; 004b004d
    PUSH 0x544cc0                       ; 004b0050
        ;   Label: LAB_004b0050
    MOV EDI,dword ptr [0x01cb06c0]      ; 004b0055 | DAT_01cb06c0
    FLD float ptr [EBP + 0x66]          ; 004b005b
    PUSH EDI                            ; 004b005e
    FMUL double ptr [0x005d704b]        ; 004b005f | DAT_005d704b
    SUB ESP,0x4                         ; 004b0065
    FSTP float ptr [ESP]                ; 004b0068
    MOV EAX,[0x01cb06b0]                ; 004b006b | DAT_01cb06b0
    PUSH dword ptr [EBP + 0x62]         ; 004b0070
    PUSH EAX                            ; 004b0073
    LEA EAX,[EBX + 0x2b4]               ; 004b0074
    PUSH EAX                            ; 004b007a
    MOV dword ptr [EBP + 0x7a],EAX      ; 004b007b
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00545a60 ; 004b007e
        ;   XREF to: 00545a60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00545a60(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    FLD float ptr [0x005d7053]          ; 004b0083 | DAT_005d7053
    FLD float ptr [0x01cb0668]          ; 004b0089 | DAT_01cb0668
    FMUL ST1                            ; 004b008f
    FLD float ptr [0x01cb066c]          ; 004b0091 | DAT_01cb066c
    FMUL ST2                            ; 004b0097
    FLD float ptr [0x01cb0670]          ; 004b0099 | DAT_01cb0670
    FMULP ST3                           ; 004b009f
    LEA ESI,[EBP + -0x2]                ; 004b00a1
    LEA EDI,[EBP + 0x22]                ; 004b00a4
    FXCH                                ; 004b00a7
    FSTP float ptr [EBP + -0x2]         ; 004b00a9
    FSTP float ptr [EBP + 0x2]          ; 004b00ac
    FSTP float ptr [EBP + 0x6]          ; 004b00af
    MOVSD ES:EDI,ESI                    ; 004b00b2
    MOVSD ES:EDI,ESI                    ; 004b00b3
    MOVSD ES:EDI,ESI                    ; 004b00b4
    FLD float ptr [0x005d7057]          ; 004b00b5 | DAT_005d7057
    FLD float ptr [EBP + 0x22]          ; 004b00bb
    FMUL ST1                            ; 004b00be
    FLD float ptr [EBP + 0x26]          ; 004b00c0
    FMUL ST2                            ; 004b00c3
    LEA EAX,[EBP + 0xfffffed2]          ; 004b00c5
    ADD ESP,0x18                        ; 004b00cb
    FLD float ptr [EBP + 0x2a]          ; 004b00ce
    FMULP ST3                           ; 004b00d1
    PUSH EAX                            ; 004b00d3
    LEA EAX,[EBP + 0x16]                ; 004b00d4
    LEA EDI,[EBP + 0x16]                ; 004b00d7
    LEA ESI,[EBP + 0xa]                 ; 004b00da
    FXCH                                ; 004b00dd
    FSTP float ptr [EBP + 0xa]          ; 004b00df
    FSTP float ptr [EBP + 0xe]          ; 004b00e2
    FSTP float ptr [EBP + 0x12]         ; 004b00e5
    MOVSD ES:EDI,ESI                    ; 004b00e8
    MOVSD ES:EDI,ESI                    ; 004b00e9
    MOVSD ES:EDI,ESI                    ; 004b00ea
    PUSH EAX                            ; 004b00eb
    LEA ESI,[EBP + 0xfffffef2]          ; 004b00ec
    LEA EDI,[EBP + -0x7e]               ; 004b00f2
    CALL core_xform.cpp_FUN_00594380    ; 004b00f5
        ;   XREF to: 00594380 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00594380()
    LEA ESI,[EBP + 0xfffffef2]          ; 004b00fa
    LEA EAX,[EBP + -0x7e]               ; 004b0100
    ADD ESP,0x4                         ; 004b0103
    MOVSD ES:EDI,ESI                    ; 004b0106
    MOVSD ES:EDI,ESI                    ; 004b0107
    MOVSD ES:EDI,ESI                    ; 004b0108
    MOVSD ES:EDI,ESI                    ; 004b0109
    PUSH EAX                            ; 004b010a
    LEA ESI,[EBP + 0xffffff02]          ; 004b010b
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 004b0111
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    ADD ESP,0x8                         ; 004b0116
    PUSH 0x4ad230                       ; 004b0119
    MOV ECX,dword ptr [0x01cb06c4]      ; 004b011e | DAT_01cb06c4
    LEA EDI,[EBP + 0xffffff62]          ; 004b0124
    PUSH ECX                            ; 004b012a
    LEA ESI,[EBP + 0xffffff02]          ; 004b012b
    LEA EAX,[EBP + 0xffffff62]          ; 004b0131
    PUSH dword ptr [EBP + 0x66]         ; 004b0137
    MOVSD ES:EDI,ESI                    ; 004b013a
    MOVSD ES:EDI,ESI                    ; 004b013b
    MOVSD ES:EDI,ESI                    ; 004b013c
    MOVSD ES:EDI,ESI                    ; 004b013d
    PUSH EAX                            ; 004b013e
    MOV ESI,dword ptr [EBP + 0x7a]      ; 004b013f
    PUSH ESI                            ; 004b0142
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40 ; 004b0143
        ;   XREF to: 00546f40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 004b0148
    FLD float ptr [EBX + 0x25648]       ; 004b014b
        ;   Label: LAB_004b014b
    FDIV float ptr [0x005f7334]         ; 004b0151 | DAT_005f7334
    MOV ESI,dword ptr [0x01cb0690]      ; 004b0157 | DAT_01cb0690
    LEA EAX,[EBX + 0x964]               ; 004b015d
    SHL ESI,0x4                         ; 004b0163
    SUB ESP,0x4                         ; 004b0166
    ADD ESI,EAX                         ; 004b0169
    FSTP float ptr [ESP]                ; 004b016b
    PUSH ESI                            ; 004b016e
    MOV ESI,dword ptr [0x01cb06bc]      ; 004b016f | DAT_01cb06bc
    SHL ESI,0x4                         ; 004b0175
    ADD EAX,ESI                         ; 004b0178
    PUSH EAX                            ; 004b017a
    LEA ESI,[EBP + 0xffffff42]          ; 004b017b
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 004b0181
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    MOV ESI,dword ptr [0x01cb06bc]      ; 004b0186 | DAT_01cb06bc
    SHL ESI,0x4                         ; 004b018c
    LEA EDI,[ESI + EBX*0x1 + 0x964]     ; 004b018f
    LEA ESI,[EBP + 0xffffff42]          ; 004b0196
    MOVSD ES:EDI,ESI                    ; 004b019c
    MOVSD ES:EDI,ESI                    ; 004b019d
    MOVSD ES:EDI,ESI                    ; 004b019e
    MOVSD ES:EDI,ESI                    ; 004b019f
    ADD ESP,0xc                         ; 004b01a0
    FLD float ptr [EBX + 0x25678]       ; 004b01a3
    FLDZ                                ; 004b01a9
    FCOMPP                              ; 004b01ab
    FNSTSW AX                           ; 004b01ad
    SAHF                                ; 004b01af
    JNC 0x004afa90                      ; 004b01b0
        ;   XREF to: 004afa90 (CONDITIONAL_JUMP)  ; LAB_004afa90
    MOV EDI,dword ptr [0x01cb06b0]      ; 004b01b6 | DAT_01cb06b0
    PUSH dword ptr [EBX + 0x25678]      ; 004b01bc
    PUSH EDI                            ; 004b01c2
    LEA ESI,[EBX + 0x2b4]               ; 004b01c3
    PUSH ESI                            ; 004b01c9
    MOV dword ptr [EBX + 0x2504],0x2    ; 004b01ca
    CALL core_motion.cpp_FUN_00503f50   ; 004b01d4
        ;   XREF to: 00503f50 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00503f50()
    MOV dword ptr [EBP + 0x7a],EAX      ; 004b01d9
    ADD ESP,0xc                         ; 004b01dc
    FLD float ptr [EBP + 0x7a]          ; 004b01df
    PUSH 0x0                            ; 004b01e2
    MOV EAX,[0x01cb06b0]                ; 004b01e4 | DAT_01cb06b0
    FSTP float ptr [EBP + 0x4a]         ; 004b01e9
    PUSH dword ptr [EBP + 0x4a]         ; 004b01ec
    PUSH EAX                            ; 004b01ef
    PUSH ESI                            ; 004b01f0
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_00544f80 ; 004b01f1
        ;   XREF to: 00544f80 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_00544f80(CDeformableModelInstance * this_ptr, int motion_index, float frame_number, int bone_index)
    ADD ESP,0x10                        ; 004b01f6
    MOV dword ptr [EBX + 0x2504],0x0    ; 004b01f9
    JMP 0x004afa90                      ; 004b0203
        ;   XREF to: 004afa90 (UNCONDITIONAL_JUMP)  ; LAB_004afa90

