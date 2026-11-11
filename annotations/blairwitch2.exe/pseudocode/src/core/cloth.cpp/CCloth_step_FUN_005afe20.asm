; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_step_FUN_005afe20(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   euler
; float            Stack[0x10]:4   delta_time
; float            Stack[0x14]:4   floor_y
; CDeformableModelInstance * Stack[0x18]:4   model_ptr
; Local Variables:
; undefined4       Stack[-0x2e0]:4  local_2e0
; undefined        Stack[-0x2dc]:1  local_2dc
; undefined4       Stack[-0x2d4]:4  local_2d4
; undefined4       Stack[-0x2c8]:4  local_2c8
; undefined4       Stack[-0x2bc]:4  local_2bc
; undefined4       Stack[-0x2b4]:4  local_2b4
; undefined4       Stack[-0x2b0]:4  local_2b0
; undefined4       Stack[-0x2ac]:4  local_2ac
; undefined4       Stack[-0x2a8]:4  local_2a8
; undefined4       Stack[-0x2a4]:4  local_2a4
; undefined4       Stack[-0x2a0]:4  local_2a0
; undefined        Stack[-0x29c]:1  local_29c
; undefined4       Stack[-0x290]:4  local_290
; undefined4       Stack[-0x28c]:4  local_28c
; undefined4       Stack[-0x288]:4  local_288
; undefined4       Stack[-0x284]:4  local_284
; undefined4       Stack[-0x280]:4  local_280
; undefined4       Stack[-0x27c]:4  local_27c
; undefined4       Stack[-0x278]:4  local_278
; undefined4       Stack[-0x274]:4  local_274
; undefined4       Stack[-0x270]:4  local_270
; undefined4       Stack[-0x26c]:4  local_26c
; undefined4       Stack[-0x268]:4  local_268
; undefined4       Stack[-0x264]:4  local_264
; undefined4       Stack[-0x260]:4  local_260
; undefined4       Stack[-0x25c]:4  local_25c
; undefined4       Stack[-0x258]:4  local_258
; undefined4       Stack[-0x254]:4  local_254
; undefined4       Stack[-0x250]:4  local_250
; undefined4       Stack[-0x24c]:4  local_24c
; undefined4       Stack[-0x248]:4  local_248
; undefined4       Stack[-0x244]:4  local_244
; undefined4       Stack[-0x240]:4  local_240
; undefined4       Stack[-0x23c]:4  local_23c
; undefined4       Stack[-0x238]:4  local_238
; undefined4       Stack[-0x234]:4  local_234
; undefined4       Stack[-0x230]:4  local_230
; undefined4       Stack[-0x22c]:4  local_22c
; undefined4       Stack[-0x228]:4  local_228
; undefined4       Stack[-0x224]:4  local_224
; undefined4       Stack[-0x220]:4  local_220
; undefined4       Stack[-0x21c]:4  local_21c
; undefined        Stack[-0x218]:1  local_218
; undefined4       Stack[-0x20c]:4  local_20c
; undefined4       Stack[-0x208]:4  local_208
; undefined4       Stack[-0x204]:4  local_204
; undefined4       Stack[-0x200]:4  local_200
; undefined4       Stack[-0x1fc]:4  local_1fc
; undefined4       Stack[-0x1f8]:4  local_1f8
; undefined4       Stack[-0x1f4]:4  local_1f4
; undefined4       Stack[-0x1f0]:4  local_1f0
; undefined4       Stack[-0x1ec]:4  local_1ec
; undefined4       Stack[-0x1e8]:4  local_1e8
; undefined4       Stack[-0x1e4]:4  local_1e4
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1dc]:4  local_1dc
; undefined4       Stack[-0x1d8]:4  local_1d8
; undefined4       Stack[-0x1d4]:4  local_1d4
; undefined4       Stack[-0x1d0]:4  local_1d0
; undefined4       Stack[-0x1cc]:4  local_1cc
; undefined4       Stack[-0x1c8]:4  local_1c8
; undefined4       Stack[-0x1c4]:4  local_1c4
; undefined4       Stack[-0x1c0]:4  local_1c0
; undefined4       Stack[-0x1bc]:4  local_1bc
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined4       Stack[-0x1b4]:4  local_1b4
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined        Stack[-0x194]:1  local_194
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined        Stack[-0x170]:1  local_170
; undefined        Stack[-0x164]:1  local_164
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined        Stack[-0x140]:1  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined        Stack[-0xf8]:1  local_f8
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined        Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_cloth.cpp_CCloth_process_FUN_005afdf0 at 005afe0e
;
; Referenced Globals:
;   undefined4 DAT_005f10eb
;   undefined4 DAT_005f10f3
;   undefined4 DAT_005f10fb
;   undefined4 DAT_005f1103
;   undefined4 DAT_006011a0
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CDemonSetInstance.active_fog.scroll.x
;   undefined4 g_CDemonSetInstance.active_fog.scroll.y
;   undefined4 g_CDemonSetInstance.active_fog.scroll.z
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_cloth.cpp_CCloth_applyConstraints_FUN_005af530
;   core_cloth.cpp_CCloth_computeBoneTransform_FUN_005af3b0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
;   core_dirmat.cpp_FUN_00449530
;   core_dirmat.cpp_FUN_004495a0
;   core_motion.cpp_FUN_005035c0
;   core_xform.cpp_FUN_00591530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005afe20
        ;   Label: core_cloth.cpp_CCloth_step_FUN_005afe20
    PUSH ESI                            ; 005afe21
    PUSH EDI                            ; 005afe22
    PUSH EBP                            ; 005afe23
    MOV EBP,ESP                         ; 005afe24
    SUB ESP,0x2cc                       ; 005afe26
    AND ESP,0xfffffff8                  ; 005afe2c
    XOR EDX,EDX                         ; 005afe2f
    FLD float ptr [EBP + 0x24]          ; 005afe31
    MOV dword ptr [ESP + 0x23c],EDX     ; 005afe34
    FCOMP double ptr [0x005f10eb]       ; 005afe3b | DAT_005f10eb
    FNSTSW AX                           ; 005afe41
    SAHF                                ; 005afe43
    JNC 0x005b0937                      ; 005afe44
        ;   XREF to: 005b0937 (CONDITIONAL_JUMP)  ; LAB_005b0937
    FLD float ptr [EBP + 0x20]          ; 005afe4a
        ;   Label: LAB_005afe4a
    FCOMP double ptr [0x005f10f3]       ; 005afe4d | DAT_005f10f3
    FNSTSW AX                           ; 005afe53
    SAHF                                ; 005afe55
    JNC 0x005afe5f                      ; 005afe56
        ;   XREF to: 005afe5f (CONDITIONAL_JUMP)  ; LAB_005afe5f
    MOV dword ptr [EBP + 0x20],0x3c23d70a ; 005afe58
    FLD float ptr [EBP + 0x20]          ; 005afe5f
        ;   Label: LAB_005afe5f
    FLD1                                ; 005afe62
    FDIVRP                              ; 005afe64
    MOV EAX,dword ptr [EBP + 0x14]      ; 005afe66
    FSTP float ptr [EAX + 0x3ab00]      ; 005afe69
    MOV EAX,dword ptr [EBP + 0x18]      ; 005afe6f
    FLD float ptr [EAX + 0x4]           ; 005afe72
    MOV EAX,dword ptr [EBP + 0x14]      ; 005afe75
    FSUBR float ptr [EBP + 0x24]        ; 005afe78
    MOV ESI,dword ptr [EBP + 0x28]      ; 005afe7b
    FSTP float ptr [EAX + 0x3ab04]      ; 005afe7e
    TEST ESI,ESI                        ; 005afe84
    JZ 0x005b00ae                       ; 005afe86
        ;   XREF to: 005b00ae (CONDITIONAL_JUMP)  ; LAB_005b00ae
    XOR EDI,EDI                         ; 005afe8c
    MOV EDX,dword ptr [EAX + 0x39ce8]   ; 005afe8e
    MOV dword ptr [ESP + 0x24c],EDI     ; 005afe94
    TEST EDX,EDX                        ; 005afe9b
    JLE 0x005b0056                      ; 005afe9d
        ;   XREF to: 005b0056 (CONDITIONAL_JUMP)  ; LAB_005b0056
    LEA EAX,[ESI + 0xe80]               ; 005afea3
    MOV dword ptr [ESP + 0x240],EAX     ; 005afea9
    MOV EAX,dword ptr [EBP + 0x14]      ; 005afeb0
    ADD EAX,0x398                       ; 005afeb3
    MOV dword ptr [ESP + 0x2c0],EAX     ; 005afeb8
    MOV EAX,dword ptr [EBP + 0x14]      ; 005afebf
    MOV dword ptr [ESP + 0x29c],EAX     ; 005afec2
    MOV EAX,dword ptr [ESP + 0x29c]     ; 005afec9
        ;   Label: LAB_005afec9
    IMUL EBX,dword ptr [EAX + 0x39cec],0x11c ; 005afed0
    ADD EBX,dword ptr [ESP + 0x2c0]     ; 005afeda
    XOR ESI,ESI                         ; 005afee1
    MOV dword ptr [EBX + 0x8],0x0       ; 005afee3
    MOV dword ptr [ESP + 0x264],ESI     ; 005afeea
    MOV EDI,dword ptr [EBX + 0xdc]      ; 005afef1
    MOV EAX,dword ptr [EBX + 0x8]       ; 005afef7
    MOV dword ptr [EBX + 0x4],EAX       ; 005afefa
    MOV EAX,dword ptr [EBX + 0x4]       ; 005afefd
    MOV dword ptr [EBX],EAX             ; 005aff00
    TEST EDI,EDI                        ; 005aff02
    JLE 0x005b0025                      ; 005aff04
        ;   XREF to: 005b0025 (CONDITIONAL_JUMP)  ; LAB_005b0025
    LEA EAX,[EBX + 0x110]               ; 005aff0a
    LEA EDX,[EBX + 0xec]                ; 005aff10
    MOV dword ptr [ESP + 0x298],EAX     ; 005aff16
    MOV dword ptr [ESP + 0x290],EDX     ; 005aff1d
    MOV dword ptr [ESP + 0x294],EBX     ; 005aff24
    MOV EAX,dword ptr [ESP + 0x294]     ; 005aff2b
        ;   Label: LAB_005aff2b
    IMUL EAX,dword ptr [EAX + 0xe0],0x30 ; 005aff32
    ADD EAX,dword ptr [ESP + 0x240]     ; 005aff39
    PUSH EAX                            ; 005aff40
    MOV ECX,dword ptr [ESP + 0x294]     ; 005aff41
    PUSH ECX                            ; 005aff48
    LEA ESI,[ESP + 0x154]               ; 005aff49
    LEA EDI,[ESP + 0xa0]                ; 005aff50
    CALL core_xform.cpp_FUN_00591530    ; 005aff57
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[ESP + 0x154]               ; 005aff5c
    ADD ESP,0x8                         ; 005aff63
    MOVSD ES:EDI,ESI                    ; 005aff66
    MOVSD ES:EDI,ESI                    ; 005aff67
    MOVSD ES:EDI,ESI                    ; 005aff68
    MOV EAX,dword ptr [ESP + 0x298]     ; 005aff69
    FLD float ptr [ESP + 0x98]          ; 005aff70
    FMUL float ptr [EAX]                ; 005aff77
    FLD float ptr [ESP + 0x9c]          ; 005aff79
    FXCH                                ; 005aff80
    FSTP float ptr [ESP + 0x1f4]        ; 005aff82
    FMUL float ptr [EAX]                ; 005aff89
    FLD float ptr [ESP + 0xa0]          ; 005aff8b
    FXCH                                ; 005aff92
    FSTP float ptr [ESP + 0x1f8]        ; 005aff94
    FMUL float ptr [EAX]                ; 005aff9b
    MOV EDX,dword ptr [ESP + 0x264]     ; 005aff9d
    LEA EDI,[ESP + 0x224]               ; 005affa4
    LEA ESI,[ESP + 0x1f4]               ; 005affab
    ADD EAX,0x4                         ; 005affb2
    INC EDX                             ; 005affb5
    MOV dword ptr [ESP + 0x298],EAX     ; 005affb6
    FSTP float ptr [ESP + 0x1fc]        ; 005affbd
    MOVSD ES:EDI,ESI                    ; 005affc4
    MOVSD ES:EDI,ESI                    ; 005affc5
    MOVSD ES:EDI,ESI                    ; 005affc6
    MOV dword ptr [ESP + 0x264],EDX     ; 005affc7
    FLD float ptr [EBX]                 ; 005affce
    FLD float ptr [EBX + 0x4]           ; 005affd0
    FLD float ptr [EBX + 0x8]           ; 005affd3
    MOV ESI,dword ptr [ESP + 0x290]     ; 005affd6
    MOV EDI,dword ptr [ESP + 0x294]     ; 005affdd
    MOV ECX,dword ptr [EBX + 0xdc]      ; 005affe4
    FXCH ST2                            ; 005affea
    FADD float ptr [ESP + 0x224]        ; 005affec
    ADD ESI,0xc                         ; 005afff3
    ADD EDI,0x4                         ; 005afff6
    FSTP float ptr [EBX]                ; 005afff9
    FADD float ptr [ESP + 0x228]        ; 005afffb
    MOV dword ptr [ESP + 0x290],ESI     ; 005b0002
    FSTP float ptr [EBX + 0x4]          ; 005b0009
    FADD float ptr [ESP + 0x22c]        ; 005b000c
    MOV dword ptr [ESP + 0x294],EDI     ; 005b0013
    FSTP float ptr [EBX + 0x8]          ; 005b001a
    CMP EDX,ECX                         ; 005b001d
    JL 0x005aff2b                       ; 005b001f
        ;   XREF to: 005aff2b (CONDITIONAL_JUMP)  ; LAB_005aff2b
    MOV ECX,dword ptr [ESP + 0x29c]     ; 005b0025
        ;   Label: LAB_005b0025
    MOV EBX,dword ptr [ESP + 0x24c]     ; 005b002c
    MOV EDX,dword ptr [EBP + 0x14]      ; 005b0033
    ADD ECX,0x4                         ; 005b0036
    INC EBX                             ; 005b0039
    MOV ESI,dword ptr [EDX + 0x39ce8]   ; 005b003a
    MOV dword ptr [ESP + 0x29c],ECX     ; 005b0040
    MOV dword ptr [ESP + 0x24c],EBX     ; 005b0047
    CMP EBX,ESI                         ; 005b004e
    JL 0x005afec9                       ; 005b0050
        ;   XREF to: 005afec9 (CONDITIONAL_JUMP)  ; LAB_005afec9
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b0056
        ;   Label: LAB_005b0056
    MOV EDI,dword ptr [EAX + 0x37b4c]   ; 005b0059
    XOR EBX,EBX                         ; 005b005f
    TEST EDI,EDI                        ; 005b0061
    JLE 0x005b0090                      ; 005b0063
        ;   XREF to: 005b0090 (CONDITIONAL_JUMP)  ; LAB_005b0090
    MOV EAX,dword ptr [EBP + 0x28]      ; 005b0065
        ;   Label: LAB_005b0065
    PUSH EAX                            ; 005b0068
    PUSH EBX                            ; 005b0069
    MOV EDX,dword ptr [EBP + 0x14]      ; 005b006a
    PUSH EDX                            ; 005b006d
    CALL core_cloth.cpp_CCloth_computeBoneTransform_FUN_005af3b0 ; 005b006e
        ;   XREF to: 005af3b0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_computeBoneTransform_FUN_005af3b0(CCloth * this_ptr, int bone_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 005b0073
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b0076
    INC EBX                             ; 005b0079
    CMP EBX,dword ptr [EAX + 0x37b4c]   ; 005b007a
    JL 0x005b0065                       ; 005b0080
        ;   XREF to: 005b0065 (CONDITIONAL_JUMP)  ; LAB_005b0065
    LEA EAX,[EAX]                       ; 005b0082
    LEA EDX,[EDX]                       ; 005b0088
    MOV EAX,EAX                         ; 005b008e
    MOV EBX,dword ptr [EBP + 0x28]      ; 005b0090
        ;   Label: LAB_005b0090
    PUSH EBX                            ; 005b0093
    CALL core_motion.cpp_FUN_005035c0   ; 005b0094
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005b0099
    ADD ESP,0x4                         ; 005b009c
    TEST EAX,EAX                        ; 005b009f
    JNZ 0x005b00ae                      ; 005b00a1
        ;   XREF to: 005b00ae (CONDITIONAL_JUMP)  ; LAB_005b00ae
    MOV dword ptr [ESP + 0x23c],0x1     ; 005b00a3
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b00ae
        ;   Label: LAB_005b00ae
    MOV ESI,dword ptr [EAX + 0x104]     ; 005b00b1
    XOR EBX,EBX                         ; 005b00b7
    TEST ESI,ESI                        ; 005b00b9
    JLE 0x005b01fc                      ; 005b00bb
        ;   XREF to: 005b01fc (CONDITIONAL_JUMP)  ; LAB_005b01fc
    ADD EAX,0x37b50                     ; 005b00c1
    MOV dword ptr [ESP + 0x260],EAX     ; 005b00c6
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b00cd
    ADD EAX,0x398                       ; 005b00d0
    MOV dword ptr [ESP + 0x250],EAX     ; 005b00d5
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b00dc
    MOV dword ptr [ESP + 0x2a0],EAX     ; 005b00df
    IMUL EAX,EBX,0x11c                  ; 005b00e6
        ;   Label: LAB_005b00e6
    MOV dword ptr [ESP + 0x244],EAX     ; 005b00ec
    MOV EAX,dword ptr [ESP + 0x2a0]     ; 005b00f3
    MOV EAX,dword ptr [EAX + 0x470]     ; 005b00fa
    CMP EAX,-0x1                        ; 005b0100
    JZ 0x005b01d6                       ; 005b0103
        ;   XREF to: 005b01d6 (CONDITIONAL_JUMP)  ; LAB_005b01d6
    IMUL EAX,EAX,0xac                   ; 005b0109
    MOV EDX,dword ptr [ESP + 0x260]     ; 005b010f
    ADD EDX,EAX                         ; 005b0116
    XOR ESI,ESI                         ; 005b0118
    MOV EAX,dword ptr [EDX + 0x44]      ; 005b011a
    MOV dword ptr [ESP + 0x248],EDX     ; 005b011d
    MOV dword ptr [ESP + 0x190],EAX     ; 005b0124
    LEA EAX,[ESP + 0x188]               ; 005b012b
    MOV dword ptr [ESP + 0x188],ESI     ; 005b0132
    PUSH EAX                            ; 005b0139
    LEA EAX,[EDX + 0x78]                ; 005b013a
    MOV dword ptr [ESP + 0x190],ESI     ; 005b013d
    PUSH EAX                            ; 005b0144
    LEA ESI,[ESP + 0xd0]                ; 005b0145
    LEA EDI,[ESP + 0x40]                ; 005b014c
    CALL core_dirmat.cpp_FUN_00449530   ; 005b0150
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    ADD ESP,0x8                         ; 005b0155
    LEA ESI,[ESP + 0xc8]                ; 005b0158
    MOV EAX,dword ptr [ESP + 0x248]     ; 005b015f
    MOVSD ES:EDI,ESI                    ; 005b0166
    MOVSD ES:EDI,ESI                    ; 005b0167
    MOVSD ES:EDI,ESI                    ; 005b0168
    MOV EDX,dword ptr [ESP + 0x250]     ; 005b0169
    FLD float ptr [EAX + 0xa0]          ; 005b0170
    FADD float ptr [ESP + 0x38]         ; 005b0176
    LEA EDI,[ESP + 0x74]                ; 005b017a
    FSTP float ptr [ESP + 0xf8]         ; 005b017e
    FLD float ptr [EAX + 0xa4]          ; 005b0185
    FADD float ptr [ESP + 0x3c]         ; 005b018b
    LEA ESI,[ESP + 0xf8]                ; 005b018f
    FSTP float ptr [ESP + 0xfc]         ; 005b0196
    FLD float ptr [EAX + 0xa8]          ; 005b019d
    FADD float ptr [ESP + 0x40]         ; 005b01a3
    MOV EAX,dword ptr [ESP + 0x244]     ; 005b01a7
    FSTP float ptr [ESP + 0x100]        ; 005b01ae
    ADD EDX,EAX                         ; 005b01b5
    LEA EAX,[ESP + 0x74]                ; 005b01b7
    MOVSD ES:EDI,ESI                    ; 005b01bb
    MOVSD ES:EDI,ESI                    ; 005b01bc
    MOVSD ES:EDI,ESI                    ; 005b01bd
    CMP EDX,EAX                         ; 005b01be
    JZ 0x005b01d6                       ; 005b01c0
        ;   XREF to: 005b01d6 (CONDITIONAL_JUMP)  ; LAB_005b01d6
    MOV EAX,dword ptr [ESP + 0x74]      ; 005b01c2
    MOV dword ptr [EDX],EAX             ; 005b01c6
    MOV EAX,dword ptr [ESP + 0x78]      ; 005b01c8
    MOV dword ptr [EDX + 0x4],EAX       ; 005b01cc
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005b01cf
    MOV dword ptr [EDX + 0x8],EAX       ; 005b01d3
    MOV EDI,dword ptr [ESP + 0x2a0]     ; 005b01d6
        ;   Label: LAB_005b01d6
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b01dd
    INC EBX                             ; 005b01e0
    ADD EDI,0x11c                       ; 005b01e1
    MOV EDX,dword ptr [EAX + 0x104]     ; 005b01e7
    MOV dword ptr [ESP + 0x2a0],EDI     ; 005b01ed
    CMP EBX,EDX                         ; 005b01f4
    JL 0x005b00e6                       ; 005b01f6
        ;   XREF to: 005b00e6 (CONDITIONAL_JUMP)  ; LAB_005b00e6
    MOV ECX,dword ptr [EBP + 0x1c]      ; 005b01fc
        ;   Label: LAB_005b01fc
    PUSH ECX                            ; 005b01ff
    LEA EAX,[ESP + 0x8]                 ; 005b0200
    PUSH EAX                            ; 005b0204
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 005b0205
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV ESI,dword ptr [0x0061b5a8]      ; 005b020a | g_CDemonSetPtr
    LEA EDI,[ESP + 0x208]               ; 005b0210
    LEA ESI,[ESI + 0x15ac70]            ; 005b0217
    ADD ESP,0x8                         ; 005b021d
    MOVSD ES:EDI,ESI                    ; 005b0220 | g_CDemonSetInstance.active_fog.scroll.x
    MOVSD ES:EDI,ESI                    ; 005b0221 | g_CDemonSetInstance.active_fog.scroll.y
    MOVSD ES:EDI,ESI                    ; 005b0222 | g_CDemonSetInstance.active_fog.scroll.z
    FLD float ptr [ESP + 0x204]         ; 005b0223
    FMUL ST0                            ; 005b022a
    MOV EAX,dword ptr [ESP + 0xc]       ; 005b022c
    FLD float ptr [ESP + 0x200]         ; 005b0230
    FMUL ST0                            ; 005b0237
    MOV dword ptr [ESP + 0x218],EAX     ; 005b0239
    FADDP                               ; 005b0240
    MOV EAX,dword ptr [ESP + 0x18]      ; 005b0242
    FLD float ptr [ESP + 0x208]         ; 005b0246
    FMUL ST0                            ; 005b024d
    MOV dword ptr [ESP + 0x21c],EAX     ; 005b024f
    MOV EAX,dword ptr [ESP + 0x24]      ; 005b0256
    FADDP                               ; 005b025a
    MOV dword ptr [ESP + 0x220],EAX     ; 005b025c
    FSQRT                               ; 005b0263
    FLDZ                                ; 005b0265
    FXCH                                ; 005b0267
    FSTP float ptr [ESP + 0x254]        ; 005b0269
    FCOMP float ptr [ESP + 0x254]       ; 005b0270
    FNSTSW AX                           ; 005b0277
    SAHF                                ; 005b0279
    JNC 0x005b0943                      ; 005b027a
        ;   XREF to: 005b0943 (CONDITIONAL_JUMP)  ; LAB_005b0943
    FLD1                                ; 005b0280
    FLD float ptr [ESP + 0x200]         ; 005b0282
    FXCH                                ; 005b0289
    FDIV float ptr [ESP + 0x254]        ; 005b028b
    FXCH                                ; 005b0292
    FMUL ST1                            ; 005b0294
    FLD float ptr [ESP + 0x204]         ; 005b0296
    FMUL ST2                            ; 005b029d
    FLD float ptr [ESP + 0x208]         ; 005b029f
    FMULP ST3                           ; 005b02a6
    FXCH                                ; 005b02a8
    FSTP float ptr [ESP + 0x200]        ; 005b02aa
    FSTP float ptr [ESP + 0x204]        ; 005b02b1
    FSTP float ptr [ESP + 0x208]        ; 005b02b8
    FLD float ptr [ESP + 0x204]         ; 005b02bf
        ;   Label: LAB_005b02bf
    FMUL float ptr [ESP + 0x21c]        ; 005b02c6
    FLD float ptr [ESP + 0x200]         ; 005b02cd
    FMUL float ptr [ESP + 0x218]        ; 005b02d4
    FADDP                               ; 005b02db
    FLD float ptr [ESP + 0x208]         ; 005b02dd
    FMUL float ptr [ESP + 0x220]        ; 005b02e4
    FADDP                               ; 005b02eb
    FST float ptr [ESP + 0x25c]         ; 005b02ed
    MOV EAX,dword ptr [ESP + 0x25c]     ; 005b02f4
    FLDZ                                ; 005b02fb
    MOV dword ptr [ESP],EAX             ; 005b02fd
    FCOMPP                              ; 005b0300
    FNSTSW AX                           ; 005b0302
    SAHF                                ; 005b0304
    JNC 0x005b030c                      ; 005b0305
        ;   XREF to: 005b030c (CONDITIONAL_JUMP)  ; LAB_005b030c
    XOR EAX,EAX                         ; 005b0307
    MOV dword ptr [ESP],EAX             ; 005b0309
    FLD float ptr [ESP]                 ; 005b030c
        ;   Label: LAB_005b030c
    MOV EAX,[0x0061b5a8]                ; 005b030f | g_CDemonSetPtr
    FMUL double ptr [0x005f10fb]        ; 005b0314 | DAT_005f10fb
    FLD float ptr [EAX + 0x15ac70]      ; 005b031a | g_CDemonSetInstance.active_fog.scroll.x
    FXCH                                ; 005b0320
    FSTP float ptr [ESP]                ; 005b0322
    FMUL float ptr [ESP]                ; 005b0325
    FSTP float ptr [ESP + 0xa4]         ; 005b0328
    FLD float ptr [EAX + 0x15ac74]      ; 005b032f | g_CDemonSetInstance.active_fog.scroll.y
    FMUL float ptr [ESP]                ; 005b0335
    FSTP float ptr [ESP + 0xa8]         ; 005b0338
    FLD float ptr [EAX + 0x15ac78]      ; 005b033f | g_CDemonSetInstance.active_fog.scroll.z
    FMUL float ptr [ESP]                ; 005b0345
    LEA EDI,[ESP + 0x230]               ; 005b0348
    LEA ESI,[ESP + 0xa4]                ; 005b034f
    LEA EAX,[ESP + 0x230]               ; 005b0356
    FSTP float ptr [ESP + 0xac]         ; 005b035d
    PUSH EAX                            ; 005b0364
    LEA EAX,[ESP + 0x8]                 ; 005b0365
    MOVSD ES:EDI,ESI                    ; 005b0369
    MOVSD ES:EDI,ESI                    ; 005b036a
    MOVSD ES:EDI,ESI                    ; 005b036b
    PUSH EAX                            ; 005b036c
    LEA ESI,[ESP + 0x184]               ; 005b036d
    LEA EDI,[ESP + 0x64]                ; 005b0374
    CALL core_dirmat.cpp_FUN_004495a0   ; 005b0378
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0x184]               ; 005b037d
    MOV EBX,dword ptr [EBP + 0x14]      ; 005b0384
    ADD ESP,0x8                         ; 005b0387
    MOVSD ES:EDI,ESI                    ; 005b038a
    MOVSD ES:EDI,ESI                    ; 005b038b
    MOVSD ES:EDI,ESI                    ; 005b038c
    FLD float ptr [ESP + 0x60]          ; 005b038d
    FLD float ptr [ESP + 0x5c]          ; 005b0391
    FADD float ptr [EBX + 0x3ab24]      ; 005b0395
    FLD float ptr [ESP + 0x64]          ; 005b039b
    FXCH                                ; 005b039f
    FSTP float ptr [ESP + 0x1d0]        ; 005b03a1
    FXCH                                ; 005b03a8
    FADD float ptr [EBX + 0x3ab28]      ; 005b03aa
    LEA EDI,[ESP + 0x158]               ; 005b03b0
    FSTP float ptr [ESP + 0x1d4]        ; 005b03b7
    FADD float ptr [EBX + 0x3ab2c]      ; 005b03be
    LEA ESI,[ESP + 0x1d0]               ; 005b03c4
    FSTP float ptr [ESP + 0x1d8]        ; 005b03cb
    MOVSD ES:EDI,ESI                    ; 005b03d2
    MOVSD ES:EDI,ESI                    ; 005b03d3
    MOVSD ES:EDI,ESI                    ; 005b03d4
    LEA EAX,[EBX + 0x3ab08]             ; 005b03d5
    MOV dword ptr [EBX + 0x3ab2c],0x0   ; 005b03db
    MOV EDX,dword ptr [EBP + 0x18]      ; 005b03e5
    MOV ECX,dword ptr [EBX + 0x3ab2c]   ; 005b03e8
    MOV dword ptr [EBX + 0x3ab28],ECX   ; 005b03ee
    MOV ECX,dword ptr [EBX + 0x3ab28]   ; 005b03f4
    MOV dword ptr [EBX + 0x3ab24],ECX   ; 005b03fa
    FLD float ptr [EDX]                 ; 005b0400
    FSUB float ptr [EAX]                ; 005b0402
    FSTP float ptr [ESP + 0x104]        ; 005b0404
    FLD float ptr [EDX + 0x4]           ; 005b040b
    FSUB float ptr [EAX + 0x4]          ; 005b040e
    LEA EDI,[ESP + 0x44]                ; 005b0411
    FSTP float ptr [ESP + 0x108]        ; 005b0415
    FLD float ptr [EDX + 0x8]           ; 005b041c
    FSUB float ptr [EAX + 0x8]          ; 005b041f
    LEA ESI,[ESP + 0x104]               ; 005b0422
    FSTP float ptr [ESP + 0x10c]        ; 005b0429
    MOVSD ES:EDI,ESI                    ; 005b0430
    MOVSD ES:EDI,ESI                    ; 005b0431
    MOVSD ES:EDI,ESI                    ; 005b0432
    CMP EAX,EDX                         ; 005b0433
    JZ 0x005b0447                       ; 005b0435
        ;   XREF to: 005b0447 (CONDITIONAL_JUMP)  ; LAB_005b0447
    MOV ECX,dword ptr [EDX]             ; 005b0437
    MOV dword ptr [EAX],ECX             ; 005b0439
    MOV ECX,dword ptr [EDX + 0x4]       ; 005b043b
    MOV dword ptr [EAX + 0x4],ECX       ; 005b043e
    MOV ECX,dword ptr [EDX + 0x8]       ; 005b0441
    MOV dword ptr [EAX + 0x8],ECX       ; 005b0444
    LEA EAX,[ESP + 0x44]                ; 005b0447
        ;   Label: LAB_005b0447
    PUSH EAX                            ; 005b044b
    LEA EAX,[ESP + 0x8]                 ; 005b044c
    PUSH EAX                            ; 005b0450
    LEA ESI,[ESP + 0x1f0]               ; 005b0451
    LEA EDI,[ESP + 0x70]                ; 005b0458
    CALL core_dirmat.cpp_FUN_004495a0   ; 005b045c
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0x1f0]               ; 005b0461
    ADD ESP,0x8                         ; 005b0468
    MOVSD ES:EDI,ESI                    ; 005b046b
    MOVSD ES:EDI,ESI                    ; 005b046c
    MOVSD ES:EDI,ESI                    ; 005b046d
    FLD1                                ; 005b046e
    FLD float ptr [ESP + 0x68]          ; 005b0470
    FXCH                                ; 005b0474
    FDIV float ptr [EBP + 0x20]         ; 005b0476
    FXCH                                ; 005b0479
    FMUL ST1                            ; 005b047b
    FLD float ptr [ESP + 0x6c]          ; 005b047d
    FMUL ST2                            ; 005b0481
    FLD float ptr [ESP + 0x70]          ; 005b0483
    FMUL ST3                            ; 005b0487
    LEA EDI,[ESP + 0xd4]                ; 005b0489
    LEA ESI,[ESP + 0x140]               ; 005b0490
    FXCH ST2                            ; 005b0497
    FSTP float ptr [ESP + 0x140]        ; 005b0499
    FSTP float ptr [ESP + 0x144]        ; 005b04a0
    FSTP float ptr [ESP + 0x148]        ; 005b04a7
    MOVSD ES:EDI,ESI                    ; 005b04ae
    MOVSD ES:EDI,ESI                    ; 005b04af
    MOVSD ES:EDI,ESI                    ; 005b04b0
    FLD float ptr [ESP + 0xd4]          ; 005b04b1
    FLD float ptr [ESP + 0xd8]          ; 005b04b8
    FLD float ptr [ESP + 0xdc]          ; 005b04bf
    LEA EDI,[ESP + 0xb0]                ; 005b04c6
    LEA ESI,[ESP + 0x50]                ; 005b04cd
    FXCH ST2                            ; 005b04d1
    FSUB float ptr [ESP + 0x158]        ; 005b04d3
    FXCH                                ; 005b04da
    FSUB float ptr [ESP + 0x15c]        ; 005b04dc
    FXCH ST2                            ; 005b04e3
    FSUB float ptr [ESP + 0x160]        ; 005b04e5
    FXCH                                ; 005b04ec
    FSTP float ptr [ESP + 0x50]         ; 005b04ee
    FXCH                                ; 005b04f2
    FSTP float ptr [ESP + 0x54]         ; 005b04f4
    FSTP float ptr [ESP + 0x58]         ; 005b04f8
    MOVSD ES:EDI,ESI                    ; 005b04fc
    MOVSD ES:EDI,ESI                    ; 005b04fd
    MOVSD ES:EDI,ESI                    ; 005b04fe
    FLD float ptr [ESP + 0xb0]          ; 005b04ff
    FMUL ST1                            ; 005b0506
    FLD float ptr [ESP + 0xb4]          ; 005b0508
    FMUL ST2                            ; 005b050f
    FLD float ptr [ESP + 0xb8]          ; 005b0511
    FMULP ST3                           ; 005b0518
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005b051a
    LEA EDI,[ESP + 0x1b8]               ; 005b051d
    LEA ESI,[ESP + 0x1c4]               ; 005b0524
    FXCH                                ; 005b052b
    FSTP float ptr [ESP + 0x1c4]        ; 005b052d
    FSTP float ptr [ESP + 0x1c8]        ; 005b0534
    FSTP float ptr [ESP + 0x1cc]        ; 005b053b
    MOVSD ES:EDI,ESI                    ; 005b0542
    MOVSD ES:EDI,ESI                    ; 005b0543
    MOVSD ES:EDI,ESI                    ; 005b0544
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b0545
    FLD float ptr [EDX]                 ; 005b0548
    FSUB float ptr [EAX + 0x3ab14]      ; 005b054a
    ADD EAX,0x3ab14                     ; 005b0550
    FSTP float ptr [ESP + 0x164]        ; 005b0555
    FLD float ptr [EDX + 0x4]           ; 005b055c
    FSUB float ptr [EAX + 0x4]          ; 005b055f
    LEA EDI,[ESP + 0x1a0]               ; 005b0562
    FSTP float ptr [ESP + 0x168]        ; 005b0569
    FLD float ptr [EDX + 0x8]           ; 005b0570
    FSUB float ptr [EAX + 0x8]          ; 005b0573
    LEA ESI,[ESP + 0x164]               ; 005b0576
    FSTP float ptr [ESP + 0x16c]        ; 005b057d
    MOVSD ES:EDI,ESI                    ; 005b0584
    MOVSD ES:EDI,ESI                    ; 005b0585
    MOVSD ES:EDI,ESI                    ; 005b0586
    CMP EAX,EDX                         ; 005b0587
    JZ 0x005b059b                       ; 005b0589
        ;   XREF to: 005b059b (CONDITIONAL_JUMP)  ; LAB_005b059b
    MOV ECX,dword ptr [EDX]             ; 005b058b
    MOV dword ptr [EAX],ECX             ; 005b058d
    MOV ECX,dword ptr [EDX + 0x4]       ; 005b058f
    MOV dword ptr [EAX + 0x4],ECX       ; 005b0592
    MOV ECX,dword ptr [EDX + 0x8]       ; 005b0595
    MOV dword ptr [EAX + 0x8],ECX       ; 005b0598
    PUSH dword ptr [ESP + 0x1a4]        ; 005b059b
        ;   Label: LAB_005b059b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 005b05a2
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0()
    MOV dword ptr [ESP + 0x2cc],EAX     ; 005b05a7
    FLD float ptr [ESP + 0x2cc]         ; 005b05ae
    ADD ESP,0x4                         ; 005b05b5
    FLD1                                ; 005b05b8
    FDIV float ptr [EBP + 0x20]         ; 005b05ba
    FXCH                                ; 005b05bd
    FMUL ST1                            ; 005b05bf
    FMULP                               ; 005b05c1
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b05c3
    XOR EDI,EDI                         ; 005b05c6
    MOV EBX,dword ptr [EAX + 0x104]     ; 005b05c8
    FSTP float ptr [ESP + 0x2b0]        ; 005b05ce
    TEST EBX,EBX                        ; 005b05d5
    JLE 0x005b066b                      ; 005b05d7
        ;   XREF to: 005b066b (CONDITIONAL_JUMP)  ; LAB_005b066b
    MOV EBX,dword ptr [EBP + 0x14]      ; 005b05dd
    ADD EAX,0x398                       ; 005b05e0
    MOV EDX,dword ptr [EBP + 0x14]      ; 005b05e5
    MOV dword ptr [ESP + 0x2ac],EAX     ; 005b05e8
    ADD EBX,0x464                       ; 005b05ef
    LEA ESI,[EDX + 0x3a4]               ; 005b05f5
    IMUL EAX,EDI,0x11c                  ; 005b05fb
        ;   Label: LAB_005b05fb
    MOV dword ptr [ESI + 0x8],0x0       ; 005b0601
    MOV ECX,dword ptr [ESP + 0x2ac]     ; 005b0608
    FLD float ptr [ESI + 0x8]           ; 005b060f
    FST float ptr [ESI + 0x4]           ; 005b0612
    FSTP float ptr [ESI]                ; 005b0615
    MOV dword ptr [EDX + 0x450],0x0     ; 005b0617
    ADD EAX,ECX                         ; 005b0621
    MOV dword ptr [EDX + 0x454],0x0     ; 005b0623
    CMP EBX,EAX                         ; 005b062d
    JZ 0x005b064b                       ; 005b062f
        ;   XREF to: 005b064b (CONDITIONAL_JUMP)  ; LAB_005b064b
    MOV ECX,dword ptr [EAX]             ; 005b0631
    MOV dword ptr [ESI + 0xc0],ECX      ; 005b0633
    MOV ECX,dword ptr [EAX + 0x4]       ; 005b0639
    MOV dword ptr [ESI + 0xc4],ECX      ; 005b063c
    MOV ECX,dword ptr [EAX + 0x8]       ; 005b0642
    MOV dword ptr [ESI + 0xc8],ECX      ; 005b0645
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b064b
        ;   Label: LAB_005b064b
    ADD EBX,0x11c                       ; 005b064e
    ADD EDX,0x11c                       ; 005b0654
    INC EDI                             ; 005b065a
    MOV ECX,dword ptr [EAX + 0x104]     ; 005b065b
    ADD ESI,0x11c                       ; 005b0661
    CMP EDI,ECX                         ; 005b0667
    JL 0x005b05fb                       ; 005b0669
        ;   XREF to: 005b05fb (CONDITIONAL_JUMP)  ; LAB_005b05fb
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b066b
        ;   Label: LAB_005b066b
    FLD float ptr [EAX + 0x37b18]       ; 005b066e
    FCHS                                ; 005b0674
    FSTP float ptr [ESP + 0x2c8]        ; 005b0676
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005b067d
    LEA ESI,[ESP + 0x170]               ; 005b0684
    MOV dword ptr [ESP + 0xe4],EAX      ; 005b068b
    LEA EAX,[ESP + 0xe0]                ; 005b0692
    LEA EDI,[ESP + 0x8c]                ; 005b0699
    PUSH EAX                            ; 005b06a0
    LEA EAX,[ESP + 0x8]                 ; 005b06a1
    XOR EBX,EBX                         ; 005b06a5
    PUSH EAX                            ; 005b06a7
    MOV dword ptr [ESP + 0xe8],EBX      ; 005b06a8
    MOV dword ptr [ESP + 0xf0],EBX      ; 005b06af
    CALL core_dirmat.cpp_FUN_004495a0   ; 005b06b6
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    ADD ESP,0x8                         ; 005b06bb
    LEA ESI,[ESP + 0x170]               ; 005b06be
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b06c5
    MOVSD ES:EDI,ESI                    ; 005b06c8
    MOVSD ES:EDI,ESI                    ; 005b06c9
    MOVSD ES:EDI,ESI                    ; 005b06ca
    FLD float ptr [EAX + 0x37b18]       ; 005b06cb
    FDIV float ptr [EAX + 0x37b1c]      ; 005b06d1
    MOV dword ptr [ESP + 0x2a8],EBX     ; 005b06d7
    MOV EDX,dword ptr [EAX + 0x104]     ; 005b06de
    FSTP float ptr [ESP + 0x2b8]        ; 005b06e4
    TEST EDX,EDX                        ; 005b06eb
    JLE 0x005b07c3                      ; 005b06ed
        ;   XREF to: 005b07c3 (CONDITIONAL_JUMP)  ; LAB_005b07c3
    FLD float ptr [ESP + 0x2b8]         ; 005b06f3
    FLD float ptr [ESP + 0x1b8]         ; 005b06fa
    FMUL ST1                            ; 005b0701
    FLD float ptr [ESP + 0x1bc]         ; 005b0703
    FMUL ST2                            ; 005b070a
    FLD float ptr [ESP + 0x1c0]         ; 005b070c
    FMUL ST3                            ; 005b0713
    FLD float ptr [ESP + 0x2b0]         ; 005b0715
    FMULP ST4                           ; 005b071c
    ADD EAX,0x37b20                     ; 005b071e
    MOV dword ptr [ESP + 0x2a4],EBX     ; 005b0723
    MOV dword ptr [ESP + 0x270],EAX     ; 005b072a
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b0731
    FXCH ST2                            ; 005b0734
    FSTP float ptr [ESP + 0x284]        ; 005b0736
    ADD EAX,0x37b30                     ; 005b073d
    FSTP float ptr [ESP + 0x288]        ; 005b0742
    MOV dword ptr [ESP + 0x2b4],EAX     ; 005b0749
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b0750
    FSTP float ptr [ESP + 0x28c]        ; 005b0753
    ADD EAX,0x398                       ; 005b075a
    FSTP float ptr [ESP + 0x274]        ; 005b075f
    MOV dword ptr [ESP + 0x26c],EAX     ; 005b0766
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b076d
        ;   Label: LAB_005b076d
    MOV ECX,dword ptr [ESP + 0x2a4]     ; 005b0770
    MOV EAX,dword ptr [EAX + 0x3aafc]   ; 005b0777
    ADD EAX,ECX                         ; 005b077d
    IMUL EBX,dword ptr [EAX],0x11c      ; 005b077f
    ADD EBX,dword ptr [ESP + 0x26c]     ; 005b0785
    CMP dword ptr [EBX + 0x74],0x0      ; 005b078c
    JZ 0x005b095f                       ; 005b0790
        ;   XREF to: 005b095f (CONDITIONAL_JUMP)  ; LAB_005b095f
    MOV EBX,dword ptr [ESP + 0x2a4]     ; 005b0796
        ;   Label: LAB_005b0796
    MOV ESI,dword ptr [ESP + 0x2a8]     ; 005b079d
    MOV EDX,dword ptr [EBP + 0x14]      ; 005b07a4
    ADD EBX,0x4                         ; 005b07a7
    INC ESI                             ; 005b07aa
    MOV EDI,dword ptr [EDX + 0x104]     ; 005b07ab
    MOV dword ptr [ESP + 0x2a4],EBX     ; 005b07b1
    MOV dword ptr [ESP + 0x2a8],ESI     ; 005b07b8
    CMP ESI,EDI                         ; 005b07bf
    JL 0x005b076d                       ; 005b07c1
        ;   XREF to: 005b076d (CONDITIONAL_JUMP)  ; LAB_005b076d
    XOR EAX,EAX                         ; 005b07c3
        ;   Label: LAB_005b07c3
    MOV dword ptr [ESP + 0x2bc],EAX     ; 005b07c5
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b07cc
    ADD EAX,0x398                       ; 005b07cf
    MOV dword ptr [ESP + 0x27c],EAX     ; 005b07d4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b07db
        ;   Label: LAB_005b07db
    MOV ESI,dword ptr [EAX + 0x104]     ; 005b07de
    XOR EDI,EDI                         ; 005b07e4
    TEST ESI,ESI                        ; 005b07e6
    JLE 0x005b081e                      ; 005b07e8
        ;   XREF to: 005b081e (CONDITIONAL_JUMP)  ; LAB_005b081e
    XOR ESI,ESI                         ; 005b07ea
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b07ec
        ;   Label: LAB_005b07ec
    MOV EAX,dword ptr [EAX + 0x3aafc]   ; 005b07ef
    IMUL EBX,dword ptr [ESI + EAX*0x1],0x11c ; 005b07f5
    ADD EBX,dword ptr [ESP + 0x27c]     ; 005b07fc
    CMP dword ptr [EBX + 0x74],0x0      ; 005b0803
    JZ 0x005b0c44                       ; 005b0807
        ;   XREF to: 005b0c44 (CONDITIONAL_JUMP)  ; LAB_005b0c44
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b080d
        ;   Label: LAB_005b080d
    INC EDI                             ; 005b0810
    MOV EDX,dword ptr [EAX + 0x104]     ; 005b0811
    ADD ESI,0x4                         ; 005b0817
    CMP EDI,EDX                         ; 005b081a
    JL 0x005b07ec                       ; 005b081c
        ;   XREF to: 005b07ec (CONDITIONAL_JUMP)  ; LAB_005b07ec
    MOV ECX,dword ptr [ESP + 0x2bc]     ; 005b081e
        ;   Label: LAB_005b081e
    INC ECX                             ; 005b0825
    MOV dword ptr [ESP + 0x2bc],ECX     ; 005b0826
    CMP ECX,0x5                         ; 005b082d
    JL 0x005b07db                       ; 005b0830
        ;   XREF to: 005b07db (CONDITIONAL_JUMP)  ; LAB_005b07db
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b0832
    MOV ESI,dword ptr [EAX + 0x104]     ; 005b0835
    XOR EBX,EBX                         ; 005b083b
    TEST ESI,ESI                        ; 005b083d
    JLE 0x005b08cd                      ; 005b083f
        ;   XREF to: 005b08cd (CONDITIONAL_JUMP)  ; LAB_005b08cd
    LEA ECX,[EAX + 0x37b2c]             ; 005b0845
    LEA EDI,[EAX + 0x37b28]             ; 005b084b
    ADD EAX,0x398                       ; 005b0851
    XOR ESI,ESI                         ; 005b0856
    MOV dword ptr [ESP + 0x280],EAX     ; 005b0858
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b085f
        ;   Label: LAB_005b085f
    MOV EAX,dword ptr [EAX + 0x3aafc]   ; 005b0862
    IMUL EAX,dword ptr [ESI + EAX*0x1],0x11c ; 005b0868
    MOV EDX,dword ptr [ESP + 0x280]     ; 005b086f
    ADD EDX,EAX                         ; 005b0876
    CMP dword ptr [EDX + 0xb8],0x0      ; 005b0878
    JZ 0x005b089a                       ; 005b087f
        ;   XREF to: 005b089a (CONDITIONAL_JUMP)  ; LAB_005b089a
    LEA EAX,[EDX + 0x24]                ; 005b0881
    FLD float ptr [EDI]                 ; 005b0884
    FMUL float ptr [EAX]                ; 005b0886
    FSTP float ptr [EAX]                ; 005b0888
    FLD float ptr [EDI]                 ; 005b088a
    FMUL float ptr [EAX + 0x4]          ; 005b088c
    FSTP float ptr [EAX + 0x4]          ; 005b088f
    FLD float ptr [EDI]                 ; 005b0892
    FMUL float ptr [EAX + 0x8]          ; 005b0894
    FSTP float ptr [EAX + 0x8]          ; 005b0897
    CMP dword ptr [EDX + 0xbc],0x0      ; 005b089a
        ;   Label: LAB_005b089a
    JZ 0x005b08bc                       ; 005b08a1
        ;   XREF to: 005b08bc (CONDITIONAL_JUMP)  ; LAB_005b08bc
    LEA EAX,[EDX + 0x24]                ; 005b08a3
    FLD float ptr [ECX]                 ; 005b08a6
    FMUL float ptr [EAX]                ; 005b08a8
    FSTP float ptr [EAX]                ; 005b08aa
    FLD float ptr [ECX]                 ; 005b08ac
    FMUL float ptr [EAX + 0x4]          ; 005b08ae
    FSTP float ptr [EAX + 0x4]          ; 005b08b1
    FLD float ptr [ECX]                 ; 005b08b4
    FMUL float ptr [EAX + 0x8]          ; 005b08b6
    FSTP float ptr [EAX + 0x8]          ; 005b08b9
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b08bc
        ;   Label: LAB_005b08bc
    INC EBX                             ; 005b08bf
    MOV EDX,dword ptr [EAX + 0x104]     ; 005b08c0
    ADD ESI,0x4                         ; 005b08c6
    CMP EBX,EDX                         ; 005b08c9
    JL 0x005b085f                       ; 005b08cb
        ;   XREF to: 005b085f (CONDITIONAL_JUMP)  ; LAB_005b085f
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b08cd
        ;   Label: LAB_005b08cd
    MOV ECX,dword ptr [EAX + 0x104]     ; 005b08d0
    XOR ESI,ESI                         ; 005b08d6
    TEST ECX,ECX                        ; 005b08d8
    JLE 0x005b0930                      ; 005b08da
        ;   XREF to: 005b0930 (CONDITIONAL_JUMP)  ; LAB_005b0930
    LEA EDX,[EAX + 0x398]               ; 005b08dc
    XOR ECX,ECX                         ; 005b08e2
    MOV EBX,dword ptr [EBP + 0x14]      ; 005b08e4
        ;   Label: LAB_005b08e4
    MOV EBX,dword ptr [EBX + 0x10c]     ; 005b08e7
    MOV EAX,EDX                         ; 005b08ed
    ADD EBX,ECX                         ; 005b08ef
    FLD float ptr [EAX]                 ; 005b08f1
    FMUL float ptr [0x006011a0]         ; 005b08f3 | DAT_006011a0
    FISTP dword ptr [EBX]               ; 005b08f9
    FLD float ptr [EAX + 0x4]           ; 005b08fb
    FMUL float ptr [0x006011a0]         ; 005b08fe | DAT_006011a0
    FISTP dword ptr [EBX + 0x4]         ; 005b0904
    FLD float ptr [EAX + 0x8]           ; 005b0907
    FMUL float ptr [0x006011a0]         ; 005b090a | DAT_006011a0
    FISTP dword ptr [EBX + 0x8]         ; 005b0910
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b0913
    INC ESI                             ; 005b0916
    ADD EDX,0x11c                       ; 005b0917
    MOV EBX,dword ptr [EAX + 0x104]     ; 005b091d
    ADD ECX,0xc                         ; 005b0923
    CMP ESI,EBX                         ; 005b0926
    JL 0x005b08e4                       ; 005b0928
        ;   XREF to: 005b08e4 (CONDITIONAL_JUMP)  ; LAB_005b08e4
    LEA EAX,[EAX]                       ; 005b092a
    MOV ESP,EBP                         ; 005b0930
        ;   Label: LAB_005b0930
    POP EBP                             ; 005b0932
    POP EDI                             ; 005b0933
    POP ESI                             ; 005b0934
    POP EBX                             ; 005b0935
    RET                                 ; 005b0936
    MOV dword ptr [EBP + 0x24],0xc61c3c00 ; 005b0937
        ;   Label: LAB_005b0937
    JMP 0x005afe4a                      ; 005b093e
        ;   XREF to: 005afe4a (UNCONDITIONAL_JUMP)  ; LAB_005afe4a
    XOR EBX,EBX                         ; 005b0943
        ;   Label: LAB_005b0943
    MOV dword ptr [ESP + 0x204],EBX     ; 005b0945
    MOV dword ptr [ESP + 0x200],EBX     ; 005b094c
    MOV dword ptr [ESP + 0x208],EBX     ; 005b0953
    JMP 0x005b02bf                      ; 005b095a
        ;   XREF to: 005b02bf (UNCONDITIONAL_JUMP)  ; LAB_005b02bf
    MOV EAX,dword ptr [ESP + 0x270]     ; 005b095f
        ;   Label: LAB_005b095f
    LEA EDX,[EBX + 0x24]                ; 005b0966
    FLD float ptr [EAX]                 ; 005b0969
    FMUL float ptr [EDX]                ; 005b096b
    FSTP float ptr [EDX]                ; 005b096d
    FLD float ptr [EAX]                 ; 005b096f
    FMUL float ptr [EDX + 0x4]          ; 005b0971
    FSTP float ptr [EDX + 0x4]          ; 005b0974
    FLD float ptr [EAX]                 ; 005b0977
    FMUL float ptr [EDX + 0x8]          ; 005b0979
    MOV EAX,dword ptr [ESP + 0x284]     ; 005b097c
    FSTP float ptr [EDX + 0x8]          ; 005b0983
    MOV dword ptr [ESP + 0x1ac],EAX     ; 005b0986
    MOV EAX,dword ptr [ESP + 0x288]     ; 005b098d
    LEA EDI,[ESP + 0x134]               ; 005b0994
    MOV dword ptr [ESP + 0x1b0],EAX     ; 005b099b
    MOV EAX,dword ptr [ESP + 0x28c]     ; 005b09a2
    LEA ESI,[ESP + 0x1ac]               ; 005b09a9
    MOV dword ptr [ESP + 0x1b4],EAX     ; 005b09b0
    MOVSD ES:EDI,ESI                    ; 005b09b7
    MOVSD ES:EDI,ESI                    ; 005b09b8
    MOVSD ES:EDI,ESI                    ; 005b09b9
    MOV EAX,dword ptr [ESP + 0x2b4]     ; 005b09ba
    FLD float ptr [ESP + 0x134]         ; 005b09c1
    FMUL float ptr [EAX]                ; 005b09c8
    FLD float ptr [ESP + 0x138]         ; 005b09ca
    FXCH                                ; 005b09d1
    FSTP float ptr [ESP + 0x1dc]        ; 005b09d3
    FMUL float ptr [EAX]                ; 005b09da
    FLD float ptr [ESP + 0x13c]         ; 005b09dc
    FXCH                                ; 005b09e3
    FSTP float ptr [ESP + 0x1e0]        ; 005b09e5
    FMUL float ptr [EAX]                ; 005b09ec
    LEA EDI,[ESP + 0x20c]               ; 005b09ee
    LEA ESI,[ESP + 0x1dc]               ; 005b09f5
    FSTP float ptr [ESP + 0x1e4]        ; 005b09fc
    LEA EAX,[EBX + 0xc]                 ; 005b0a03
    MOVSD ES:EDI,ESI                    ; 005b0a06
    MOVSD ES:EDI,ESI                    ; 005b0a07
    MOVSD ES:EDI,ESI                    ; 005b0a08
    FLD float ptr [ESP + 0x274]         ; 005b0a09
    FLD float ptr [EAX]                 ; 005b0a10
    FSUB float ptr [ESP + 0x20c]        ; 005b0a12
    FLD float ptr [EAX + 0x4]           ; 005b0a19
    FXCH                                ; 005b0a1c
    FSTP float ptr [EAX]                ; 005b0a1e
    FSUB float ptr [ESP + 0x210]        ; 005b0a20
    FLD float ptr [EAX + 0x8]           ; 005b0a27
    FXCH                                ; 005b0a2a
    FSTP float ptr [EAX + 0x4]          ; 005b0a2c
    FSUB float ptr [ESP + 0x214]        ; 005b0a2f
    FLD float ptr [EAX]                 ; 005b0a36
    FXCH                                ; 005b0a38
    FSTP float ptr [EAX + 0x8]          ; 005b0a3a
    FADD float ptr [ESP + 0x8c]         ; 005b0a3d
    FLD float ptr [EAX + 0x4]           ; 005b0a44
    FXCH                                ; 005b0a47
    FSTP float ptr [EAX]                ; 005b0a49
    FADD float ptr [ESP + 0x90]         ; 005b0a4b
    FLD float ptr [EAX + 0x8]           ; 005b0a52
    FXCH                                ; 005b0a55
    FSTP float ptr [EAX + 0x4]          ; 005b0a57
    FADD float ptr [ESP + 0x94]         ; 005b0a5a
    MOV ECX,dword ptr [EBP + 0x14]      ; 005b0a61
    FSTP float ptr [EAX + 0x8]          ; 005b0a64
    FMUL float ptr [ECX + 0x37b34]      ; 005b0a67
    FLD float ptr [EBX + 0x8]           ; 005b0a6d
    FMUL ST1                            ; 005b0a70
    FLDZ                                ; 005b0a72
    FMUL float ptr [EBX + 0x4]          ; 005b0a74
    FXCH                                ; 005b0a77
    FSUBR ST0,ST1                       ; 005b0a79
    FLDZ                                ; 005b0a7b
    FXCH                                ; 005b0a7d
    FSTP float ptr [ESP + 0x194]        ; 005b0a7f
    FMUL float ptr [EBX + 0x8]          ; 005b0a86
    FLDZ                                ; 005b0a89
    FMUL float ptr [EBX]                ; 005b0a8b
    FSUBP                               ; 005b0a8d
    FSTP float ptr [ESP + 0x198]        ; 005b0a8f
    FLD float ptr [EBX]                 ; 005b0a96
    FMULP ST2                           ; 005b0a98
    LEA EDI,[ESP + 0x80]                ; 005b0a9a
    FSUBP                               ; 005b0aa1
    LEA ESI,[ESP + 0x194]               ; 005b0aa3
    FSTP float ptr [ESP + 0x19c]        ; 005b0aaa
    MOVSD ES:EDI,ESI                    ; 005b0ab1
    MOVSD ES:EDI,ESI                    ; 005b0ab2
    MOVSD ES:EDI,ESI                    ; 005b0ab3
    FLD float ptr [EAX]                 ; 005b0ab4
    FADD float ptr [ESP + 0x80]         ; 005b0ab6
    FLD float ptr [EAX + 0x4]           ; 005b0abd
    FXCH                                ; 005b0ac0
    FSTP float ptr [EAX]                ; 005b0ac2
    FADD float ptr [ESP + 0x84]         ; 005b0ac4
    FLD float ptr [EAX + 0x8]           ; 005b0acb
    FXCH                                ; 005b0ace
    FSTP float ptr [EAX + 0x4]          ; 005b0ad0
    FADD float ptr [ESP + 0x88]         ; 005b0ad3
    MOV ECX,dword ptr [ESP + 0x23c]     ; 005b0ada
    FSTP float ptr [EAX + 0x8]          ; 005b0ae1
    TEST ECX,ECX                        ; 005b0ae4
    JZ 0x005b0b0b                       ; 005b0ae6
        ;   XREF to: 005b0b0b (CONDITIONAL_JUMP)  ; LAB_005b0b0b
    FLD float ptr [EDX + 0x4]           ; 005b0ae8
    FMUL ST0                            ; 005b0aeb
    FLD float ptr [EDX]                 ; 005b0aed
    FMUL ST0                            ; 005b0aef
    FADDP                               ; 005b0af1
    FLD float ptr [EDX + 0x8]           ; 005b0af3
    FMUL ST0                            ; 005b0af6
    FADDP                               ; 005b0af8
    FSQRT                               ; 005b0afa
    FCOMP float ptr [0x005f1103]        ; 005b0afc | DAT_005f1103
    FNSTSW AX                           ; 005b0b02
    SAHF                                ; 005b0b04
    JC 0x005b0c32                       ; 005b0b05
        ;   XREF to: 005b0c32 (CONDITIONAL_JUMP)  ; LAB_005b0c32
    LEA EAX,[EBX + 0xc]                 ; 005b0b0b
        ;   Label: LAB_005b0b0b
    FLD1                                ; 005b0b0e
    FLD float ptr [EAX]                 ; 005b0b10
    FXCH                                ; 005b0b12
    FDIV float ptr [ESP + 0x2b8]        ; 005b0b14
    FXCH                                ; 005b0b1b
    FMUL ST1                            ; 005b0b1d
    FSTP float ptr [ESP + 0xbc]         ; 005b0b1f
    FLD float ptr [EAX + 0x4]           ; 005b0b26
    FMUL ST1                            ; 005b0b29
    FSTP float ptr [ESP + 0xc0]         ; 005b0b2b
    FMUL float ptr [EAX + 0x8]          ; 005b0b32
    LEA EDI,[ESP + 0x2c]                ; 005b0b35
    LEA ESI,[ESP + 0xbc]                ; 005b0b39
    LEA EDX,[EBX + 0x18]                ; 005b0b40
    LEA EAX,[ESP + 0x2c]                ; 005b0b43
    FSTP float ptr [ESP + 0xc4]         ; 005b0b47
    MOVSD ES:EDI,ESI                    ; 005b0b4e
    MOVSD ES:EDI,ESI                    ; 005b0b4f
    MOVSD ES:EDI,ESI                    ; 005b0b50
    CMP EDX,EAX                         ; 005b0b51
    JZ 0x005b0b69                       ; 005b0b53
        ;   XREF to: 005b0b69 (CONDITIONAL_JUMP)  ; LAB_005b0b69
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005b0b55
    MOV dword ptr [EDX],EAX             ; 005b0b59
    MOV EAX,dword ptr [ESP + 0x30]      ; 005b0b5b
    MOV dword ptr [EDX + 0x4],EAX       ; 005b0b5f
    MOV EAX,dword ptr [ESP + 0x34]      ; 005b0b62
    MOV dword ptr [EDX + 0x8],EAX       ; 005b0b66
    LEA EAX,[EBX + 0x18]                ; 005b0b69
        ;   Label: LAB_005b0b69
    FLD float ptr [EBP + 0x20]          ; 005b0b6c
    FLD float ptr [EAX]                 ; 005b0b6f
    FMUL ST1                            ; 005b0b71
    FSTP float ptr [ESP + 0xec]         ; 005b0b73
    FLD float ptr [EAX + 0x4]           ; 005b0b7a
    FMUL ST1                            ; 005b0b7d
    FSTP float ptr [ESP + 0xf0]         ; 005b0b7f
    FLD float ptr [EAX + 0x8]           ; 005b0b86
    FMUL ST1                            ; 005b0b89
    LEA EDI,[ESP + 0x110]               ; 005b0b8b
    LEA ESI,[ESP + 0xec]                ; 005b0b92
    LEA EAX,[EBX + 0x24]                ; 005b0b99
    FSTP float ptr [ESP + 0xf4]         ; 005b0b9c
    MOVSD ES:EDI,ESI                    ; 005b0ba3
    MOVSD ES:EDI,ESI                    ; 005b0ba4
    MOVSD ES:EDI,ESI                    ; 005b0ba5
    FLD float ptr [EAX + 0x4]           ; 005b0ba6
    FLD float ptr [EAX]                 ; 005b0ba9
    FADD float ptr [ESP + 0x110]        ; 005b0bab
    FLD float ptr [EAX + 0x8]           ; 005b0bb2
    FXCH                                ; 005b0bb5
    FSTP float ptr [EAX]                ; 005b0bb7
    FXCH                                ; 005b0bb9
    FADD float ptr [ESP + 0x114]        ; 005b0bbb
    FLD float ptr [EAX]                 ; 005b0bc2
    FXCH                                ; 005b0bc4
    FSTP float ptr [EAX + 0x4]          ; 005b0bc6
    FXCH                                ; 005b0bc9
    FADD float ptr [ESP + 0x118]        ; 005b0bcb
    FXCH                                ; 005b0bd2
    FMUL ST2                            ; 005b0bd4
    FXCH                                ; 005b0bd6
    FSTP float ptr [EAX + 0x8]          ; 005b0bd8
    FSTP float ptr [ESP + 0x128]        ; 005b0bdb
    FLD float ptr [EAX + 0x4]           ; 005b0be2
    FMUL ST1                            ; 005b0be5
    FSTP float ptr [ESP + 0x12c]        ; 005b0be7
    FMUL float ptr [EAX + 0x8]          ; 005b0bee
    LEA EDI,[ESP + 0x11c]               ; 005b0bf1
    LEA ESI,[ESP + 0x128]               ; 005b0bf8
    FSTP float ptr [ESP + 0x130]        ; 005b0bff
    MOVSD ES:EDI,ESI                    ; 005b0c06
    MOVSD ES:EDI,ESI                    ; 005b0c07
    MOVSD ES:EDI,ESI                    ; 005b0c08
    FLD float ptr [EBX]                 ; 005b0c09
    FADD float ptr [ESP + 0x11c]        ; 005b0c0b
    FLD float ptr [EBX + 0x4]           ; 005b0c12
    FXCH                                ; 005b0c15
    FSTP float ptr [EBX]                ; 005b0c17
    FADD float ptr [ESP + 0x120]        ; 005b0c19
    FLD float ptr [EBX + 0x8]           ; 005b0c20
    FXCH                                ; 005b0c23
    FSTP float ptr [EBX + 0x4]          ; 005b0c25
    FADD float ptr [ESP + 0x124]        ; 005b0c28
    FSTP float ptr [EBX + 0x8]          ; 005b0c2f
    PUSH EBX                            ; 005b0c32
        ;   Label: LAB_005b0c32
    MOV EBX,dword ptr [EBP + 0x14]      ; 005b0c33
    PUSH EBX                            ; 005b0c36
    CALL core_cloth.cpp_CCloth_applyConstraints_FUN_005af530 ; 005b0c37
        ;   XREF to: 005af530 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_applyConstraints_FUN_005af530(CCloth * this_ptr, SClothVertex * vertex)
    ADD ESP,0x8                         ; 005b0c3c
    JMP 0x005b0796                      ; 005b0c3f
        ;   XREF to: 005b0796 (UNCONDITIONAL_JUMP)  ; LAB_005b0796
    CMP dword ptr [ESP + 0x23c],0x0     ; 005b0c44
        ;   Label: LAB_005b0c44
    JZ 0x005b0c74                       ; 005b0c4c
        ;   XREF to: 005b0c74 (CONDITIONAL_JUMP)  ; LAB_005b0c74
    LEA EAX,[EBX + 0x24]                ; 005b0c4e
    FLD float ptr [EAX + 0x4]           ; 005b0c51
    FMUL ST0                            ; 005b0c54
    FLD float ptr [EAX]                 ; 005b0c56
    FMUL ST0                            ; 005b0c58
    FADDP                               ; 005b0c5a
    FLD float ptr [EAX + 0x8]           ; 005b0c5c
    FMUL ST0                            ; 005b0c5f
    FADDP                               ; 005b0c61
    FSQRT                               ; 005b0c63
    FCOMP float ptr [0x005f1103]        ; 005b0c65 | DAT_005f1103
    FNSTSW AX                           ; 005b0c6b
    SAHF                                ; 005b0c6d
    JC 0x005b080d                       ; 005b0c6e
        ;   XREF to: 005b080d (CONDITIONAL_JUMP)  ; LAB_005b080d
    PUSH EBX                            ; 005b0c74
        ;   Label: LAB_005b0c74
    MOV ECX,dword ptr [EBP + 0x14]      ; 005b0c75
    PUSH ECX                            ; 005b0c78
    CALL core_cloth.cpp_CCloth_applyConstraints_FUN_005af530 ; 005b0c79
        ;   XREF to: 005af530 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_applyConstraints_FUN_005af530(CCloth * this_ptr, SClothVertex * vertex)
    ADD ESP,0x8                         ; 005b0c7e
    JMP 0x005b080d                      ; 005b0c81
        ;   XREF to: 005b080d (UNCONDITIONAL_JUMP)  ; LAB_005b080d

