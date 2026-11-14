; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_autoAimAtThreat_FUN_0058eb50(CStranger *this_ptr,int hand_index,float delta_time)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
; float            Stack[0xc]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
;
; XREF[1]:
;   core_stranger.cpp_CStranger_processFrame_FUN_00585b00 at 00586845
;
; Referenced Globals:
;   undefined4 DAT_005f6ed9
;   undefined4 DAT_005f6ee1
;   undefined4 DAT_005f6ee9
;   undefined4 DAT_005f6ef1
;   undefined4 DAT_005f6ef9
;   undefined4 DAT_005f6f01
;   undefined4 DAT_005f6f09
;   undefined4 DAT_005f6f11
;   WatcomTypeInfo g_CVectorTypeInfo
;   undefined4 DAT_006060b0
;   undefined4 DAT_006060b4
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CCharacterClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.threat_count
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   core_dirmat.cpp_FUN_0045f690
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00557230
;   core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058eb50
        ;   Label: core_stranger.cpp_CStranger_autoAimAtThreat_FUN_0058eb50
    PUSH ESI                            ; 0058eb51
    PUSH EDI                            ; 0058eb52
    PUSH EBP                            ; 0058eb53
    MOV EBP,ESP                         ; 0058eb54
    SUB ESP,0x21c                       ; 0058eb56
    AND ESP,0xfffffff8                  ; 0058eb5c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0058eb5f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058eb62
    ADD EAX,0x1ffe0                     ; 0058eb65
    MOV dword ptr [ESP + 0x208],EAX     ; 0058eb6a
    CMP ESI,0x1                         ; 0058eb71
    JZ 0x0058ef97                       ; 0058eb74
        ;   XREF to: 0058ef97 (CONDITIONAL_JUMP)  ; LAB_0058ef97
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058eb7a
        ;   Label: LAB_0058eb7a
    MOV EDX,dword ptr [EAX + 0x20004]   ; 0058eb7d
    TEST EDX,EDX                        ; 0058eb83
    JNZ 0x0058efc6                      ; 0058eb85
        ;   XREF to: 0058efc6 (CONDITIONAL_JUMP)  ; LAB_0058efc6
    MOV EAX,dword ptr [ESP + 0x208]     ; 0058eb8b
    MOV dword ptr [EAX + 0xc],EDX       ; 0058eb92
    MOV dword ptr [EAX + 0x4],EDX       ; 0058eb95
    LEA EAX,[ESI*0x8 + 0x0]             ; 0058eb98
    MOV EBX,EAX                         ; 0058eb9f
    SHL EAX,0x4                         ; 0058eba1
    MOV ECX,dword ptr [EBP + 0x14]      ; 0058eba4
    SUB EAX,EBX                         ; 0058eba7
    ADD EAX,ECX                         ; 0058eba9
    MOV EBX,dword ptr [EAX + 0x25b0]    ; 0058ebab
    TEST EBX,EBX                        ; 0058ebb1
    JZ 0x0058ebc4                       ; 0058ebb3
        ;   XREF to: 0058ebc4 (CONDITIONAL_JUMP)  ; LAB_0058ebc4
    PUSH EBX                            ; 0058ebb5
    MOV EDX,dword ptr [EBX + 0x154]     ; 0058ebb6
    CALL dword ptr [EDX + 0x74]         ; 0058ebbc
    ADD ESP,0x4                         ; 0058ebbf
    MOV EDX,EAX                         ; 0058ebc2
    TEST DL,0x4                         ; 0058ebc4
        ;   Label: LAB_0058ebc4
    JZ 0x0058efab                       ; 0058ebc7
        ;   XREF to: 0058efab (CONDITIONAL_JUMP)  ; LAB_0058efab
    MOV dword ptr [ESP + 0x1e4],0x3     ; 0058ebcd
    TEST ESI,ESI                        ; 0058ebd8
        ;   Label: LAB_0058ebd8
    JNZ 0x0058efd8                      ; 0058ebda
        ;   XREF to: 0058efd8 (CONDITIONAL_JUMP)  ; LAB_0058efd8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058ebe0
    CMP dword ptr [EAX + 0x1fae4],0x2   ; 0058ebe3
    JNZ 0x0058ebfa                      ; 0058ebea
        ;   XREF to: 0058ebfa (CONDITIONAL_JUMP)  ; LAB_0058ebfa
    CMP dword ptr [ESP + 0x1e4],0x0     ; 0058ebec
    JZ 0x0058efbf                       ; 0058ebf4
        ;   XREF to: 0058efbf (CONDITIONAL_JUMP)  ; LAB_0058efbf
    MOV ESI,0xbfa78d36                  ; 0058ebfa
        ;   Label: LAB_0058ebfa
    MOV EDI,0x3f060a92                  ; 0058ebff
    MOV EAX,[0x02c83634]                ; 0058ec04 | DAT_02c83634
    MOV EBX,dword ptr [0x02c8360c]      ; 0058ec09 | DAT_02c8360c
    MOV dword ptr [ESP + 0x1d4],EAX     ; 0058ec0f
    MOV dword ptr [ESP + 0x200],ESI     ; 0058ec16
    MOV dword ptr [ESP + 0x1fc],EDI     ; 0058ec1d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058ec24
        ;   Label: LAB_0058ec24
    FLD float ptr [EAX + 0xc204]        ; 0058ec27
    FMUL float ptr [0x005f6ed9]         ; 0058ec2d | DAT_005f6ed9
    FMUL double ptr [0x005f6ee1]        ; 0058ec33 | DAT_005f6ee1
    FMUL float ptr [EBP + 0x1c]         ; 0058ec39
    MOV EAX,dword ptr [ESP + 0x208]     ; 0058ec3c
    FLD float ptr [EAX]                 ; 0058ec43
    FXCH                                ; 0058ec45
    FADD ST0,ST1                        ; 0058ec47
    MOV dword ptr [EAX + 0x4],0x0       ; 0058ec49
    FSTP ST1                            ; 0058ec50
    FST float ptr [EAX]                 ; 0058ec52
    FCOMP float ptr [0x006060b0]        ; 0058ec54 | DAT_006060b0
    FNSTSW AX                           ; 0058ec5a
    SAHF                                ; 0058ec5c
    JNC 0x0058ec6e                      ; 0058ec5d
        ;   XREF to: 0058ec6e (CONDITIONAL_JUMP)  ; LAB_0058ec6e
    MOV EAX,dword ptr [ESP + 0x208]     ; 0058ec5f
    MOV EDX,dword ptr [0x006060b0]      ; 0058ec66 | DAT_006060b0
    MOV dword ptr [EAX],EDX             ; 0058ec6c
    MOV EAX,dword ptr [ESP + 0x208]     ; 0058ec6e
        ;   Label: LAB_0058ec6e
    FLD float ptr [EAX]                 ; 0058ec75
    FCOMP float ptr [0x006060b4]        ; 0058ec77 | DAT_006060b4
    FNSTSW AX                           ; 0058ec7d
    SAHF                                ; 0058ec7f
    JBE 0x0058ec91                      ; 0058ec80
        ;   XREF to: 0058ec91 (CONDITIONAL_JUMP)  ; LAB_0058ec91
    MOV EAX,dword ptr [ESP + 0x208]     ; 0058ec82
    MOV EDX,dword ptr [0x006060b4]      ; 0058ec89 | DAT_006060b4
    MOV dword ptr [EAX],EDX             ; 0058ec8f
    MOV EAX,dword ptr [ESP + 0x208]     ; 0058ec91
        ;   Label: LAB_0058ec91
    FLD float ptr [EAX + 0xc]           ; 0058ec98
    FCOMP float ptr [ESP + 0x200]       ; 0058ec9b
    FNSTSW AX                           ; 0058eca2
    SAHF                                ; 0058eca4
    JNC 0x0058ecb8                      ; 0058eca5
        ;   XREF to: 0058ecb8 (CONDITIONAL_JUMP)  ; LAB_0058ecb8
    MOV EDX,dword ptr [ESP + 0x208]     ; 0058eca7
    MOV EAX,dword ptr [ESP + 0x200]     ; 0058ecae
    MOV dword ptr [EDX + 0xc],EAX       ; 0058ecb5
    MOV EAX,dword ptr [ESP + 0x208]     ; 0058ecb8
        ;   Label: LAB_0058ecb8
    FLD float ptr [EAX + 0xc]           ; 0058ecbf
    FCOMP float ptr [ESP + 0x1fc]       ; 0058ecc2
    FNSTSW AX                           ; 0058ecc9
    SAHF                                ; 0058eccb
    JBE 0x0058ecdf                      ; 0058eccc
        ;   XREF to: 0058ecdf (CONDITIONAL_JUMP)  ; LAB_0058ecdf
    MOV EDX,dword ptr [ESP + 0x208]     ; 0058ecce
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0058ecd5
    MOV dword ptr [EDX + 0xc],EAX       ; 0058ecdc
    MOV EAX,dword ptr [ESP + 0x208]     ; 0058ecdf
        ;   Label: LAB_0058ecdf
    FLD float ptr [EAX + 0x4]           ; 0058ece6
    FCOMP float ptr [ESP + 0x200]       ; 0058ece9
    FNSTSW AX                           ; 0058ecf0
    SAHF                                ; 0058ecf2
    JNC 0x0058ed06                      ; 0058ecf3
        ;   XREF to: 0058ed06 (CONDITIONAL_JUMP)  ; LAB_0058ed06
    MOV EDX,dword ptr [ESP + 0x208]     ; 0058ecf5
    MOV EAX,dword ptr [ESP + 0x200]     ; 0058ecfc
    MOV dword ptr [EDX + 0x4],EAX       ; 0058ed03
    MOV EAX,dword ptr [ESP + 0x208]     ; 0058ed06
        ;   Label: LAB_0058ed06
    FLD float ptr [EAX + 0x4]           ; 0058ed0d
    FCOMP float ptr [ESP + 0x1fc]       ; 0058ed10
    FNSTSW AX                           ; 0058ed17
    SAHF                                ; 0058ed19
    JBE 0x0058ed2d                      ; 0058ed1a
        ;   XREF to: 0058ed2d (CONDITIONAL_JUMP)  ; LAB_0058ed2d
    MOV EDX,dword ptr [ESP + 0x208]     ; 0058ed1c
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0058ed23
    MOV dword ptr [EDX + 0x4],EAX       ; 0058ed2a
    MOV EAX,dword ptr [ESP + 0x208]     ; 0058ed2d
        ;   Label: LAB_0058ed2d
    MOV dword ptr [EAX + 0x1c],0x0      ; 0058ed34
    MOV EAX,dword ptr [EAX + 0x4]       ; 0058ed3b
    MOV dword ptr [ESP + 0x1f8],EAX     ; 0058ed3e
    MOV EAX,dword ptr [ESP + 0x208]     ; 0058ed45
    MOV EAX,dword ptr [EAX]             ; 0058ed4c
    MOV dword ptr [ESP + 0x1f4],EAX     ; 0058ed4e
    CMP dword ptr [ESP + 0x1e4],0x3     ; 0058ed55
    JZ 0x0058f433                       ; 0058ed5d
        ;   XREF to: 0058f433 (CONDITIONAL_JUMP)  ; LAB_0058f433
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058ed63
    MOV EDX,dword ptr [EAX + 0x1fae4]   ; 0058ed66
    TEST EDX,EDX                        ; 0058ed6c
    JNZ 0x0058f433                      ; 0058ed6e
        ;   XREF to: 0058f433 (CONDITIONAL_JUMP)  ; LAB_0058f433
    MOV dword ptr [ESP + 0x11c],EDX     ; 0058ed74
    MOV dword ptr [ESP + 0x120],EDX     ; 0058ed7b
    MOV dword ptr [ESP + 0x118],EDX     ; 0058ed82
    MOV EDX,dword ptr [EAX + 0x20004]   ; 0058ed89
    TEST EDX,EDX                        ; 0058ed8f
    JZ 0x0058edf9                       ; 0058ed91
        ;   XREF to: 0058edf9 (CONDITIONAL_JUMP)  ; LAB_0058edf9
    MOV EAX,EDX                         ; 0058ed93
    PUSH EAX                            ; 0058ed95
    MOV EDX,dword ptr [EDX + 0x154]     ; 0058ed96
    LEA ESI,[ESP + 0x1a0]               ; 0058ed9c
    LEA EDI,[ESP + 0x158]               ; 0058eda3
    CALL dword ptr [EDX + 0xe0]         ; 0058edaa
    LEA ESI,[ESP + 0x1a0]               ; 0058edb0
    LEA EDX,[ESP + 0x158]               ; 0058edb7
    ADD ESP,0x4                         ; 0058edbe
    LEA EAX,[ESP + 0x118]               ; 0058edc1
    MOVSD ES:EDI,ESI                    ; 0058edc8
    MOVSD ES:EDI,ESI                    ; 0058edc9
    MOVSD ES:EDI,ESI                    ; 0058edca
    CMP EAX,EDX                         ; 0058edcb
    JZ 0x0058edf9                       ; 0058edcd
        ;   XREF to: 0058edf9 (CONDITIONAL_JUMP)  ; LAB_0058edf9
    MOV EAX,dword ptr [ESP + 0x154]     ; 0058edcf
    MOV dword ptr [ESP + 0x118],EAX     ; 0058edd6
    MOV EAX,dword ptr [ESP + 0x158]     ; 0058eddd
    MOV dword ptr [ESP + 0x11c],EAX     ; 0058ede4
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0058edeb
    MOV dword ptr [ESP + 0x120],EAX     ; 0058edf2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058edf9
        ;   Label: LAB_0058edf9
    MOV ECX,dword ptr [ESP + 0x1e4]     ; 0058edfc
    ADD EAX,0x158                       ; 0058ee03
    TEST ECX,ECX                        ; 0058ee08
    JNZ 0x0058f05e                      ; 0058ee0a
        ;   XREF to: 0058f05e (CONDITIONAL_JUMP)  ; LAB_0058f05e
    PUSH EBX                            ; 0058ee10
    PUSH EAX                            ; 0058ee11
    LEA ESI,[ESP + 0xf0]                ; 0058ee12
    LEA EDI,[ESP + 0x144]               ; 0058ee19
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040 ; 0058ee20
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0xf0]                ; 0058ee25
    LEA EAX,[ESP + 0x144]               ; 0058ee2c
    ADD ESP,0x8                         ; 0058ee33
    LEA EDX,[ESP + 0x184]               ; 0058ee36
    MOVSD ES:EDI,ESI                    ; 0058ee3d
    MOVSD ES:EDI,ESI                    ; 0058ee3e
    MOVSD ES:EDI,ESI                    ; 0058ee3f
    CMP EDX,EAX                         ; 0058ee40
    JNZ 0x0058f02f                      ; 0058ee42
        ;   XREF to: 0058f02f (CONDITIONAL_JUMP)  ; LAB_0058f02f
    LEA EAX,[ESP + 0x184]               ; 0058ee48
        ;   Label: LAB_0058ee48
    PUSH EAX                            ; 0058ee4f
    MOV ESI,dword ptr [EBP + 0x14]      ; 0058ee50
    PUSH ESI                            ; 0058ee53
    LEA ESI,[ESP + 0x168]               ; 0058ee54
    LEA EDI,[ESP + 0xe4]                ; 0058ee5b
    CALL core_actor.cpp_FUN_00408b40    ; 0058ee62
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0058ee67
    LEA ESI,[ESP + 0x160]               ; 0058ee6a
    MOV EAX,dword ptr [ESP + 0x208]     ; 0058ee71
    MOVSD ES:EDI,ESI                    ; 0058ee78
    MOVSD ES:EDI,ESI                    ; 0058ee79
    MOVSD ES:EDI,ESI                    ; 0058ee7a
    MOV EAX,dword ptr [EAX]             ; 0058ee7b
    XOR EDI,EDI                         ; 0058ee7d
    MOV dword ptr [ESP + 0x100],EAX     ; 0058ee7f
    MOV EAX,dword ptr [ESP + 0x208]     ; 0058ee86
    MOV dword ptr [ESP + 0x108],EDI     ; 0058ee8d
    MOV EAX,dword ptr [EAX + 0x4]       ; 0058ee94
    MOV dword ptr [ESP + 0x104],EAX     ; 0058ee97
    LEA EAX,[ESP + 0x100]               ; 0058ee9e
    PUSH EAX                            ; 0058eea5
    LEA EAX,[ESP + 0x94]                ; 0058eea6
    PUSH EAX                            ; 0058eead
    LEA ESI,[ESP + 0x174]               ; 0058eeae
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 0058eeb5
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV ECX,0x3f800000                  ; 0058eeba
    ADD ESP,0x8                         ; 0058eebf
    LEA EAX,[ESP + 0x178]               ; 0058eec2
    MOV dword ptr [ESP + 0x178],EDI     ; 0058eec9
    PUSH EAX                            ; 0058eed0
    LEA EAX,[ESP + 0x94]                ; 0058eed1
    MOV dword ptr [ESP + 0x180],EDI     ; 0058eed8
    PUSH EAX                            ; 0058eedf
    MOV dword ptr [ESP + 0x188],ECX     ; 0058eee0
    LEA EDI,[ESP + 0xc0]                ; 0058eee7
    CALL core_dirmat.cpp_FUN_0045f690   ; 0058eeee
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x174]               ; 0058eef3
    ADD ESP,0x8                         ; 0058eefa
    MOVSD ES:EDI,ESI                    ; 0058eefd
    MOVSD ES:EDI,ESI                    ; 0058eefe
    MOVSD ES:EDI,ESI                    ; 0058eeff
    MOV EBX,0x7149f2ca                  ; 0058ef00
    XOR ESI,ESI                         ; 0058ef05
    MOV dword ptr [ESP + 0x20c],EBX     ; 0058ef07
    MOV dword ptr [ESP + 0x1ec],ESI     ; 0058ef0e
    MOV dword ptr [ESP + 0x1f0],ESI     ; 0058ef15
    MOV EAX,[0x00622c18]                ; 0058ef1c | g_CDemonSetPtr
        ;   Label: LAB_0058ef1c
    MOV EDX,dword ptr [ESP + 0x1ec]     ; 0058ef21
    CMP EDX,dword ptr [EAX + 0x152f30]  ; 0058ef28 | g_CDemonSetInstance.threat_count
    JGE 0x0058f441                      ; 0058ef2e
        ;   XREF to: 0058f441 (CONDITIONAL_JUMP)  ; LAB_0058f441
    MOV ESI,dword ptr [ESP + 0x1f0]     ; 0058ef34
    MOV EBX,dword ptr [0x007c637c]      ; 0058ef3b | g_CCharacterClassInfo.name_hash
    ADD EAX,ESI                         ; 0058ef41
    PUSH EBX                            ; 0058ef43
    MOV EDI,dword ptr [EAX + 0x152f34]  ; 0058ef44
    PUSH EDI                            ; 0058ef4a
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0058ef4b
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 0058ef50
    ADD ESP,0x8                         ; 0058ef52
    TEST EAX,EAX                        ; 0058ef55
    JZ 0x0058f0e1                       ; 0058ef57
        ;   XREF to: 0058f0e1 (CONDITIONAL_JUMP)  ; LAB_0058f0e1
    PUSH EBX                            ; 0058ef5d
    MOV EAX,dword ptr [EAX + 0x154]     ; 0058ef5e
    CALL dword ptr [EAX + 0x10c]        ; 0058ef64
    ADD ESP,0x4                         ; 0058ef6a
    TEST EAX,EAX                        ; 0058ef6d
    JZ 0x0058f0cc                       ; 0058ef6f
        ;   XREF to: 0058f0cc (CONDITIONAL_JUMP)  ; LAB_0058f0cc
    MOV EBX,dword ptr [ESP + 0x1ec]     ; 0058ef75
        ;   Label: LAB_0058ef75
    MOV ECX,dword ptr [ESP + 0x1f0]     ; 0058ef7c
    INC EBX                             ; 0058ef83
    ADD ECX,0x4                         ; 0058ef84
    MOV dword ptr [ESP + 0x1ec],EBX     ; 0058ef87
    MOV dword ptr [ESP + 0x1f0],ECX     ; 0058ef8e
    JMP 0x0058ef1c                      ; 0058ef95
        ;   XREF to: 0058ef1c (UNCONDITIONAL_JUMP)  ; LAB_0058ef1c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058ef97
        ;   Label: LAB_0058ef97
    ADD EAX,0x1ffc0                     ; 0058ef9a
    MOV dword ptr [ESP + 0x208],EAX     ; 0058ef9f
    JMP 0x0058eb7a                      ; 0058efa6
        ;   XREF to: 0058eb7a (UNCONDITIONAL_JUMP)  ; LAB_0058eb7a
    MOV EAX,dword ptr [ESP + 0x208]     ; 0058efab
        ;   Label: LAB_0058efab
    MOV dword ptr [EAX + 0x8],0x0       ; 0058efb2
    MOV dword ptr [EAX],0x0             ; 0058efb9
    MOV ESP,EBP                         ; 0058efbf
        ;   Label: LAB_0058efbf
    POP EBP                             ; 0058efc1
    POP EDI                             ; 0058efc2
    POP ESI                             ; 0058efc3
    POP EBX                             ; 0058efc4
    RET                                 ; 0058efc5
    MOV EAX,dword ptr [EDX + 0x2e0]     ; 0058efc6
        ;   Label: LAB_0058efc6
    MOV dword ptr [ESP + 0x1e4],EAX     ; 0058efcc
    JMP 0x0058ebd8                      ; 0058efd3
        ;   XREF to: 0058ebd8 (UNCONDITIONAL_JUMP)  ; LAB_0058ebd8
    MOV EAX,[0x02c83638]                ; 0058efd8 | DAT_02c83638
        ;   Label: LAB_0058efd8
    MOV dword ptr [ESP + 0x1d4],EAX     ; 0058efdd
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 0058efe4
    MOV EBX,dword ptr [0x02c83610]      ; 0058efeb | DAT_02c83610
    TEST EAX,EAX                        ; 0058eff1
    JNZ 0x0058f012                      ; 0058eff3
        ;   XREF to: 0058f012 (CONDITIONAL_JUMP)  ; LAB_0058f012
    MOV EDI,0x3fa78d36                  ; 0058eff5
    MOV ESI,0xbf060a92                  ; 0058effa
    MOV dword ptr [ESP + 0x1fc],EDI     ; 0058efff
    MOV dword ptr [ESP + 0x200],ESI     ; 0058f006
    JMP 0x0058ec24                      ; 0058f00d
        ;   XREF to: 0058ec24 (UNCONDITIONAL_JUMP)  ; LAB_0058ec24
    MOV ECX,0x3f060a92                  ; 0058f012
        ;   Label: LAB_0058f012
    MOV EDX,0xbf060a92                  ; 0058f017
    MOV dword ptr [ESP + 0x1fc],ECX     ; 0058f01c
    MOV dword ptr [ESP + 0x200],EDX     ; 0058f023
    JMP 0x0058ec24                      ; 0058f02a
        ;   XREF to: 0058ec24 (UNCONDITIONAL_JUMP)  ; LAB_0058ec24
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0058f02f
        ;   Label: LAB_0058f02f
    MOV dword ptr [ESP + 0x184],EAX     ; 0058f036
    MOV EAX,dword ptr [ESP + 0x140]     ; 0058f03d
    MOV dword ptr [ESP + 0x188],EAX     ; 0058f044
    MOV EAX,dword ptr [ESP + 0x144]     ; 0058f04b
    MOV dword ptr [ESP + 0x18c],EAX     ; 0058f052
    JMP 0x0058ee48                      ; 0058f059
        ;   XREF to: 0058ee48 (UNCONDITIONAL_JUMP)  ; LAB_0058ee48
    MOV EBX,dword ptr [ESP + 0x1d4]     ; 0058f05e
        ;   Label: LAB_0058f05e
    PUSH EBX                            ; 0058f065
    PUSH EAX                            ; 0058f066
    LEA ESI,[ESP + 0x12c]               ; 0058f067
    LEA EDI,[ESP + 0x114]               ; 0058f06e
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040 ; 0058f075
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x12c]               ; 0058f07a
    LEA EDX,[ESP + 0x114]               ; 0058f081
    ADD ESP,0x8                         ; 0058f088
    LEA EAX,[ESP + 0x184]               ; 0058f08b
    MOVSD ES:EDI,ESI                    ; 0058f092
    MOVSD ES:EDI,ESI                    ; 0058f093
    MOVSD ES:EDI,ESI                    ; 0058f094
    CMP EAX,EDX                         ; 0058f095
    JZ 0x0058ee48                       ; 0058f097
        ;   XREF to: 0058ee48 (CONDITIONAL_JUMP)  ; LAB_0058ee48
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0058f09d
    MOV dword ptr [ESP + 0x184],EAX     ; 0058f0a4
    MOV EAX,dword ptr [ESP + 0x110]     ; 0058f0ab
    MOV dword ptr [ESP + 0x188],EAX     ; 0058f0b2
    MOV EAX,dword ptr [ESP + 0x114]     ; 0058f0b9
    MOV dword ptr [ESP + 0x18c],EAX     ; 0058f0c0
    JMP 0x0058ee48                      ; 0058f0c7
        ;   XREF to: 0058ee48 (UNCONDITIONAL_JUMP)  ; LAB_0058ee48
    PUSH EBX                            ; 0058f0cc
        ;   Label: LAB_0058f0cc
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058f0cd
    CALL dword ptr [EAX + 0x70]         ; 0058f0d3
    ADD ESP,0x4                         ; 0058f0d6
    TEST EAX,EAX                        ; 0058f0d9
    JNZ 0x0058ef75                      ; 0058f0db
        ;   XREF to: 0058ef75 (CONDITIONAL_JUMP)  ; LAB_0058ef75
    MOV EDX,dword ptr [ESP + 0x1f0]     ; 0058f0e1
        ;   Label: LAB_0058f0e1
    MOV EAX,[0x00622c18]                ; 0058f0e8 | g_CDemonSetPtr
    ADD EAX,EDX                         ; 0058f0ed
    PUSH 0x5fb430                       ; 0058f0ef | g_CVectorTypeInfo
    MOV EAX,dword ptr [EAX + 0x152f34]  ; 0058f0f4
    PUSH 0xa                            ; 0058f0fa
    MOV dword ptr [ESP + 0x218],EAX     ; 0058f0fc
    LEA EAX,[ESP + 0x20]                ; 0058f103
    PUSH EAX                            ; 0058f107
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0058f108
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0058f10d
    LEA EAX,[ESP + 0x18]                ; 0058f110
    PUSH EAX                            ; 0058f114
    MOV ECX,dword ptr [ESP + 0x214]     ; 0058f115
    MOV EBX,dword ptr [ESP + 0x214]     ; 0058f11c
    PUSH ECX                            ; 0058f123
    MOV EBX,dword ptr [EBX + 0x154]     ; 0058f124
    CALL dword ptr [EBX + 0x54]         ; 0058f12a
    ADD ESP,0x8                         ; 0058f12d
    MOV dword ptr [ESP + 0x204],EAX     ; 0058f130
    CMP EAX,0x1                         ; 0058f137
    JL 0x0058ef75                       ; 0058f13a
        ;   XREF to: 0058ef75 (CONDITIONAL_JUMP)  ; LAB_0058ef75
    XOR EBX,EBX                         ; 0058f140
    MOV dword ptr [ESP + 0x214],EBX     ; 0058f142
    TEST EAX,EAX                        ; 0058f149
    JLE 0x0058ef75                      ; 0058f14b
        ;   XREF to: 0058ef75 (CONDITIONAL_JUMP)  ; LAB_0058ef75
    LEA EBX,[ESP + 0x18]                ; 0058f151
    PUSH EBX                            ; 0058f155
        ;   Label: LAB_0058f155
    MOV EAX,dword ptr [ESP + 0x214]     ; 0058f156
    PUSH EAX                            ; 0058f15d
    LEA ESI,[ESP + 0x1bc]               ; 0058f15e
    LEA EDI,[ESP + 0xcc]                ; 0058f165
    CALL core_actor.cpp_FUN_00408b40    ; 0058f16c
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x1bc]               ; 0058f171
    ADD ESP,0x8                         ; 0058f178
    LEA EAX,[ESP + 0xc4]                ; 0058f17b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0058f182
    PUSH EAX                            ; 0058f185
    MOVSD ES:EDI,ESI                    ; 0058f186
    MOVSD ES:EDI,ESI                    ; 0058f187
    MOVSD ES:EDI,ESI                    ; 0058f188
    PUSH EDX                            ; 0058f189
    LEA ESI,[ESP + 0xd8]                ; 0058f18a
    LEA EDI,[ESP + 0x138]               ; 0058f191
    CALL core_actor.cpp_FUN_00408bb0    ; 0058f198
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0xd8]                ; 0058f19d
    ADD ESP,0x8                         ; 0058f1a4
    MOVSD ES:EDI,ESI                    ; 0058f1a7
    MOVSD ES:EDI,ESI                    ; 0058f1a8
    MOVSD ES:EDI,ESI                    ; 0058f1a9
    FLD float ptr [ESP + 0x130]         ; 0058f1aa
    FLD float ptr [ESP + 0x134]         ; 0058f1b1
    FLD float ptr [ESP + 0x138]         ; 0058f1b8
    LEA EDI,[ESP + 0x148]               ; 0058f1bf
    LEA ESI,[ESP + 0x190]               ; 0058f1c6
    FXCH ST2                            ; 0058f1cd
    FSUB float ptr [ESP + 0x184]        ; 0058f1cf
    FXCH                                ; 0058f1d6
    FSUB float ptr [ESP + 0x188]        ; 0058f1d8
    FXCH ST2                            ; 0058f1df
    FSUB float ptr [ESP + 0x18c]        ; 0058f1e1
    FXCH                                ; 0058f1e8
    FSTP float ptr [ESP + 0x190]        ; 0058f1ea
    FXCH                                ; 0058f1f1
    FSTP float ptr [ESP + 0x194]        ; 0058f1f3
    FSTP float ptr [ESP + 0x198]        ; 0058f1fa
    MOVSD ES:EDI,ESI                    ; 0058f201
    MOVSD ES:EDI,ESI                    ; 0058f202
    MOVSD ES:EDI,ESI                    ; 0058f203
    FLDZ                                ; 0058f204
    FLD float ptr [ESP + 0x150]         ; 0058f206
    FSTP double ptr [ESP]               ; 0058f20d
    FCOMP double ptr [ESP]              ; 0058f210
    FNSTSW AX                           ; 0058f213
    SAHF                                ; 0058f215
    JC 0x0058f23e                       ; 0058f216
        ;   XREF to: 0058f23e (CONDITIONAL_JUMP)  ; LAB_0058f23e
    MOV ESI,dword ptr [ESP + 0x214]     ; 0058f218
        ;   Label: LAB_0058f218
    MOV EDI,dword ptr [ESP + 0x204]     ; 0058f21f
    INC ESI                             ; 0058f226
    ADD EBX,0xc                         ; 0058f227
    MOV dword ptr [ESP + 0x214],ESI     ; 0058f22a
    CMP ESI,EDI                         ; 0058f231
    JGE 0x0058ef75                      ; 0058f233
        ;   XREF to: 0058ef75 (CONDITIONAL_JUMP)  ; LAB_0058ef75
    JMP 0x0058f155                      ; 0058f239
        ;   XREF to: 0058f155 (UNCONDITIONAL_JUMP)  ; LAB_0058f155
    FLD double ptr [ESP]                ; 0058f23e
        ;   Label: LAB_0058f23e
    FCOMP double ptr [0x005f6f09]       ; 0058f241 | DAT_005f6f09
    FNSTSW AX                           ; 0058f247
    SAHF                                ; 0058f249
    JA 0x0058f218                       ; 0058f24a
        ;   XREF to: 0058f218 (CONDITIONAL_JUMP)  ; LAB_0058f218
    LEA EAX,[ESP + 0x148]               ; 0058f24c
    PUSH EAX                            ; 0058f253
    LEA ESI,[ESP + 0xf8]                ; 0058f254
    LEA EDI,[ESP + 0x1ac]               ; 0058f25b
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 0058f262
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0xf8]                ; 0058f267
    ADD ESP,0x4                         ; 0058f26e
    MOV ECX,0x3f060a92                  ; 0058f271
    FLD float ptr [ESP + 0x150]         ; 0058f276
    MOV dword ptr [ESP + 0x14],ECX      ; 0058f27d
    MOVSD ES:EDI,ESI                    ; 0058f281
    MOVSD ES:EDI,ESI                    ; 0058f282
    MOVSD ES:EDI,ESI                    ; 0058f283
    FCOMP double ptr [0x005f6f11]       ; 0058f284 | DAT_005f6f11
    FNSTSW AX                           ; 0058f28a
    SAHF                                ; 0058f28c
    JNC 0x0058f297                      ; 0058f28d
        ;   XREF to: 0058f297 (CONDITIONAL_JUMP)  ; LAB_0058f297
    MOV dword ptr [ESP + 0x14],0x3fc90fdb ; 0058f28f
    FLD float ptr [ESP + 0x1a8]         ; 0058f297
        ;   Label: LAB_0058f297
    FABS                                ; 0058f29e
    FLD float ptr [ESP + 0x14]          ; 0058f2a0
    FCOMPP                              ; 0058f2a4
    FNSTSW AX                           ; 0058f2a6
    SAHF                                ; 0058f2a8
    JC 0x0058f218                       ; 0058f2a9
        ;   XREF to: 0058f218 (CONDITIONAL_JUMP)  ; LAB_0058f218
    FLD float ptr [ESP + 0x1ac]         ; 0058f2af
    FCOMP float ptr [ESP + 0x200]       ; 0058f2b6
    FNSTSW AX                           ; 0058f2bd
    SAHF                                ; 0058f2bf
    JC 0x0058f218                       ; 0058f2c0
        ;   XREF to: 0058f218 (CONDITIONAL_JUMP)  ; LAB_0058f218
    FLD float ptr [ESP + 0x1ac]         ; 0058f2c6
    FCOMP float ptr [ESP + 0x1fc]       ; 0058f2cd
    FNSTSW AX                           ; 0058f2d4
    SAHF                                ; 0058f2d6
    JA 0x0058f218                       ; 0058f2d7
        ;   XREF to: 0058f218 (CONDITIONAL_JUMP)  ; LAB_0058f218
    FLD float ptr [ESP + 0x14c]         ; 0058f2dd
    FMUL ST0                            ; 0058f2e4
    FLD float ptr [ESP + 0x148]         ; 0058f2e6
    FMUL ST0                            ; 0058f2ed
    FADDP                               ; 0058f2ef
    FLD float ptr [ESP + 0x150]         ; 0058f2f1
    FMUL ST0                            ; 0058f2f8
    FADDP                               ; 0058f2fa
    FSQRT                               ; 0058f2fc
    FLD1                                ; 0058f2fe
    FLD float ptr [ESP + 0x14c]         ; 0058f300
    FXCH                                ; 0058f307
    FDIV ST0,ST2                        ; 0058f309
    FXCH                                ; 0058f30b
    FMUL ST1                            ; 0058f30d
    FLD float ptr [ESP + 0x148]         ; 0058f30f
    FMUL ST2                            ; 0058f316
    FXCH                                ; 0058f318
    FST float ptr [ESP + 0x14c]         ; 0058f31a
    FMUL float ptr [ESP + 0xbc]         ; 0058f321
    FXCH                                ; 0058f328
    FST float ptr [ESP + 0x148]         ; 0058f32a
    FMUL float ptr [ESP + 0xb8]         ; 0058f331
    FLD float ptr [ESP + 0x150]         ; 0058f338
    FMULP ST3                           ; 0058f33f
    FADDP                               ; 0058f341
    FXCH                                ; 0058f343
    FST float ptr [ESP + 0x150]         ; 0058f345
    FMUL float ptr [ESP + 0xc0]         ; 0058f34c
    FADDP                               ; 0058f353
    FSUBR double ptr [0x005f6ee1]       ; 0058f355 | DAT_005f6ee1
    FXCH                                ; 0058f35b
    FMUL double ptr [0x005f6ee9]        ; 0058f35d | DAT_005f6ee9
    FADDP                               ; 0058f363
    FST float ptr [ESP + 0x10]          ; 0058f365
    FCOMP float ptr [ESP + 0x20c]       ; 0058f369
    FNSTSW AX                           ; 0058f370
    SAHF                                ; 0058f372
    JNC 0x0058f218                      ; 0058f373
        ;   XREF to: 0058f218 (CONDITIONAL_JUMP)  ; LAB_0058f218
    MOV EDI,dword ptr [0x00622c18]      ; 0058f379 | g_CDemonSetPtr
    PUSH EDI                            ; 0058f37f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0058f380
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0058f385
    PUSH 0x2                            ; 0058f388
    MOV EAX,[0x00622c18]                ; 0058f38a | g_CDemonSetPtr
    PUSH EAX                            ; 0058f38f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0 ; 0058f390
        ;   XREF to: 005592d0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 0058f395
    MOV EDX,dword ptr [EBP + 0x14]      ; 0058f398
    PUSH EDX                            ; 0058f39b
    MOV ECX,dword ptr [0x00622c18]      ; 0058f39c | g_CDemonSetPtr
    PUSH ECX                            ; 0058f3a2 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0058f3a3
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0058f3a8
    MOV ESI,dword ptr [ESP + 0x210]     ; 0058f3ab
    PUSH ESI                            ; 0058f3b2
    MOV EDI,dword ptr [0x00622c18]      ; 0058f3b3 | g_CDemonSetPtr
    PUSH EDI                            ; 0058f3b9 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0058f3ba
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0058f3bf
    LEA EAX,[ESP + 0xc4]                ; 0058f3c2
    PUSH EAX                            ; 0058f3c9
    LEA EAX,[ESP + 0xe0]                ; 0058f3ca
    PUSH EAX                            ; 0058f3d1
    MOV EAX,[0x00622c18]                ; 0058f3d2 | g_CDemonSetPtr
    PUSH EAX                            ; 0058f3d7 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00557230 ; 0058f3d8
        ;   XREF to: 00557230 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00557230(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 0058f3dd
    MOV EDX,dword ptr [0x00622c18]      ; 0058f3e0 | g_CDemonSetPtr
    PUSH EDX                            ; 0058f3e6 | g_CDemonSetInstance
    MOV ESI,EAX                         ; 0058f3e7
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0058f3e9
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0058f3ee
    TEST ESI,ESI                        ; 0058f3f1
    JNZ 0x0058f218                      ; 0058f3f3
        ;   XREF to: 0058f218 (CONDITIONAL_JUMP)  ; LAB_0058f218
    MOV EAX,dword ptr [ESP + 0x10]      ; 0058f3f9
    MOV dword ptr [ESP + 0x20c],EAX     ; 0058f3fd
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 0058f404
    MOV dword ptr [ESP + 0x1f8],EAX     ; 0058f40b
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 0058f412
    MOV dword ptr [ESP + 0x1f4],EAX     ; 0058f419
    MOV EAX,dword ptr [ESP + 0x208]     ; 0058f420
    MOV dword ptr [EAX + 0x1c],0x1      ; 0058f427
    JMP 0x0058f218                      ; 0058f42e
        ;   XREF to: 0058f218 (UNCONDITIONAL_JUMP)  ; LAB_0058f218
    MOV EAX,dword ptr [ESP + 0x208]     ; 0058f433
        ;   Label: LAB_0058f433
    MOV dword ptr [EAX + 0xc],0x0       ; 0058f43a
    FLD float ptr [EBP + 0x1c]          ; 0058f441
        ;   Label: LAB_0058f441
    FMUL float ptr [0x005f6ed9]         ; 0058f444 | DAT_005f6ed9
    FST double ptr [ESP + 0x8]          ; 0058f44a
    FMUL double ptr [0x005f6ef1]        ; 0058f44e | DAT_005f6ef1
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 0058f454
    FSTP float ptr [ESP + 0x1e8]        ; 0058f45b
    TEST ESI,ESI                        ; 0058f462
    JZ 0x0058f477                       ; 0058f464
        ;   XREF to: 0058f477 (CONDITIONAL_JUMP)  ; LAB_0058f477
    FLD double ptr [ESP + 0x8]          ; 0058f466
    FMUL double ptr [0x005f6ef9]        ; 0058f46a | DAT_005f6ef9
    FSTP float ptr [ESP + 0x1e8]        ; 0058f470
    MOV EAX,dword ptr [ESP + 0x208]     ; 0058f477
        ;   Label: LAB_0058f477
    FLD float ptr [ESP + 0x1f8]         ; 0058f47e
    FSUB float ptr [EAX + 0xc]          ; 0058f485
    SUB ESP,0x4                         ; 0058f488
    FSTP float ptr [ESP]                ; 0058f48b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0058f48e
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x21c],EAX     ; 0058f493
    FLD float ptr [ESP + 0x21c]         ; 0058f49a
    ADD ESP,0x4                         ; 0058f4a1
    FLD float ptr [ESP + 0x1f4]         ; 0058f4a4
    MOV EAX,dword ptr [ESP + 0x208]     ; 0058f4ab
    FXCH                                ; 0058f4b2
    FSTP float ptr [ESP + 0x1dc]        ; 0058f4b4
    FSUB float ptr [EAX + 0x8]          ; 0058f4bb
    SUB ESP,0x4                         ; 0058f4be
    FSTP float ptr [ESP]                ; 0058f4c1
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0058f4c4
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x21c],EAX     ; 0058f4c9
    FLD float ptr [ESP + 0x21c]         ; 0058f4d0
    ADD ESP,0x4                         ; 0058f4d7
    FLD float ptr [ESP + 0x1e8]         ; 0058f4da
    FLD float ptr [ESP + 0x1dc]         ; 0058f4e1
    FXCH ST2                            ; 0058f4e8
    FSTP float ptr [ESP + 0x1e0]        ; 0058f4ea
    FCHS                                ; 0058f4f1
    FSTP float ptr [ESP + 0x1d8]        ; 0058f4f3
    FCOMP float ptr [ESP + 0x1d8]       ; 0058f4fa
    FNSTSW AX                           ; 0058f501
    SAHF                                ; 0058f503
    JNC 0x0058f514                      ; 0058f504
        ;   XREF to: 0058f514 (CONDITIONAL_JUMP)  ; LAB_0058f514
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 0058f506
    MOV dword ptr [ESP + 0x1dc],EAX     ; 0058f50d
    FLD float ptr [ESP + 0x1dc]         ; 0058f514
        ;   Label: LAB_0058f514
    FCOMP float ptr [ESP + 0x1e8]       ; 0058f51b
    FNSTSW AX                           ; 0058f522
    SAHF                                ; 0058f524
    JBE 0x0058f535                      ; 0058f525
        ;   XREF to: 0058f535 (CONDITIONAL_JUMP)  ; LAB_0058f535
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 0058f527
    MOV dword ptr [ESP + 0x1dc],EAX     ; 0058f52e
    FLD float ptr [ESP + 0x1e0]         ; 0058f535
        ;   Label: LAB_0058f535
    FLD float ptr [ESP + 0x1e8]         ; 0058f53c
    FCHS                                ; 0058f543
    FSTP float ptr [ESP + 0x1d0]        ; 0058f545
    FCOMP float ptr [ESP + 0x1d0]       ; 0058f54c
    FNSTSW AX                           ; 0058f553
    SAHF                                ; 0058f555
    JNC 0x0058f566                      ; 0058f556
        ;   XREF to: 0058f566 (CONDITIONAL_JUMP)  ; LAB_0058f566
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 0058f558
    MOV dword ptr [ESP + 0x1e0],EAX     ; 0058f55f
    FLD float ptr [ESP + 0x1e0]         ; 0058f566
        ;   Label: LAB_0058f566
    FCOMP float ptr [ESP + 0x1e8]       ; 0058f56d
    FNSTSW AX                           ; 0058f574
    SAHF                                ; 0058f576
    JBE 0x0058f587                      ; 0058f577
        ;   XREF to: 0058f587 (CONDITIONAL_JUMP)  ; LAB_0058f587
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 0058f579
    MOV dword ptr [ESP + 0x1e0],EAX     ; 0058f580
    MOV EAX,dword ptr [ESP + 0x208]     ; 0058f587
        ;   Label: LAB_0058f587
    FLD float ptr [EAX + 0xc]           ; 0058f58e
    FADD float ptr [ESP + 0x1dc]        ; 0058f591
    SUB ESP,0x4                         ; 0058f598
    FSTP float ptr [ESP]                ; 0058f59b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0058f59e
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x21c],EAX     ; 0058f5a3
    FLD float ptr [ESP + 0x21c]         ; 0058f5aa
    ADD ESP,0x4                         ; 0058f5b1
    MOV EAX,dword ptr [ESP + 0x208]     ; 0058f5b4
    FLD float ptr [EAX + 0x8]           ; 0058f5bb
    FADD float ptr [ESP + 0x1e0]        ; 0058f5be
    SUB ESP,0x4                         ; 0058f5c5
    FXCH                                ; 0058f5c8
    FSTP float ptr [EAX + 0xc]          ; 0058f5ca
    FSTP float ptr [ESP]                ; 0058f5cd
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0058f5d0
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x21c],EAX     ; 0058f5d5
    FLD float ptr [ESP + 0x21c]         ; 0058f5dc
    ADD ESP,0x4                         ; 0058f5e3
    MOV EAX,dword ptr [ESP + 0x208]     ; 0058f5e6
    FSTP float ptr [EAX + 0x8]          ; 0058f5ed
    MOV EDI,dword ptr [EAX + 0x1c]      ; 0058f5f0
    MOV dword ptr [EAX + 0x14],0x3f800000 ; 0058f5f3
    CMP EDI,0x1                         ; 0058f5fa
    JNZ 0x0058efbf                      ; 0058f5fd
        ;   XREF to: 0058efbf (CONDITIONAL_JUMP)  ; LAB_0058efbf
    FLD float ptr [EAX + 0xc]           ; 0058f603
    FSUB float ptr [ESP + 0x1f8]        ; 0058f606
    FABS                                ; 0058f60d
    FCOMP double ptr [0x005f6f01]       ; 0058f60f | DAT_005f6f01
    FNSTSW AX                           ; 0058f615
    SAHF                                ; 0058f617
    JNC 0x0058efbf                      ; 0058f618
        ;   XREF to: 0058efbf (CONDITIONAL_JUMP)  ; LAB_0058efbf
    MOV EAX,dword ptr [ESP + 0x208]     ; 0058f61e
    FLD float ptr [EAX + 0x8]           ; 0058f625
    FSUB float ptr [ESP + 0x1f4]        ; 0058f628
    FABS                                ; 0058f62f
    FCOMP double ptr [0x005f6f01]       ; 0058f631 | DAT_005f6f01
    FNSTSW AX                           ; 0058f637
    SAHF                                ; 0058f639
    JNC 0x0058efbf                      ; 0058f63a
        ;   XREF to: 0058efbf (CONDITIONAL_JUMP)  ; LAB_0058efbf
    MOV EAX,dword ptr [ESP + 0x208]     ; 0058f640
    MOV dword ptr [EAX + 0x1c],0x2      ; 0058f647
    MOV ESP,EBP                         ; 0058f64e
    POP EBP                             ; 0058f650
    POP EDI                             ; 0058f651
    POP ESI                             ; 0058f652
    POP EBX                             ; 0058f653
    RET                                 ; 0058f654

