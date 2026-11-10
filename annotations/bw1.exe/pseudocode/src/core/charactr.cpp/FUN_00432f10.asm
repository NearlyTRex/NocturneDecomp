; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00432f10(CCharacter *param_1,float param_2,int param_3)
;
;
; XREF[7]:
;   core_bird.cpp_CBird_process_FUN_00415340 at 004155c2
;   core_doc.cpp_CDoc_process_FUN_004693e0 at 0046942b
;   core_dog.cpp_CZombieDog_process_FUN_004768a0 at 004768e8
;   core_hostage.cpp_CHostage_process_FUN_004ed890 at 004edf4e
;   core_moocow.cpp_CMooCow_process_FUN_00521480 at 005214ac
;   core_npc.cpp_CNPC_process_FUN_005317c0 at 00531a52
;   core_shadowsc.cpp_CShadowsc_process_FUN_00560630 at 005606ae
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_005d5cff
;   TerminatedCString s_Bip01_head_005d5d0a
;   TerminatedCString s_heroCanSee_005d5d15
;   TerminatedCString s_Bip01_head_005d5d20
;   TerminatedCString s_CHero_005d5d2b
;   TerminatedCString s_Bip01_head_005d5d31
;   TerminatedCString s_Bip01_head_005d5d3c
;   undefined4 DAT_005d5d47
;   undefined4 DAT_005d5d4f
;   undefined4 DAT_005d5d57
;   undefined4 DAT_005d5d5f
;   undefined4 DAT_005d5d67
;   undefined4 DAT_005d5d6f
;   undefined4 DAT_005d5d77
;   undefined4 DAT_005d5d7f
;   ... and 10 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00557230
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;   core_skeleton.cpp_FUN_00569130
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432f10
        ;   Label: core_charactr.cpp_FUN_00432f10
    PUSH ESI                            ; 00432f11
    PUSH EDI                            ; 00432f12
    PUSH EBP                            ; 00432f13
    MOV EBP,ESP                         ; 00432f14
    SUB ESP,0x234                       ; 00432f16
    AND ESP,0xfffffff8                  ; 00432f1c
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00432f1f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00432f22
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432f25
    PUSH EDX                            ; 00432f28
    MOV EAX,dword ptr [EAX + 0x154]     ; 00432f29
    CALL dword ptr [EAX + 0x10c]        ; 00432f2f
    ADD ESP,0x4                         ; 00432f35
    TEST EAX,EAX                        ; 00432f38
    JZ 0x00432f41                       ; 00432f3a
        ;   XREF to: 00432f41 (CONDITIONAL_JUMP)  ; LAB_00432f41
    MOV EBX,0x1                         ; 00432f3c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432f41
        ;   Label: LAB_00432f41
    ADD EAX,0x158                       ; 00432f44
    PUSH EAX                            ; 00432f49
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 00432f4a
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00432f4f
    PUSH 0x0                            ; 00432f52
    PUSH 0x5d5cff                       ; 00432f54 | = "Bip01 head"
    PUSH EAX                            ; 00432f59
    MOV dword ptr [ESP + 0x220],EAX     ; 00432f5a
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00432f61
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00432f66
    CMP EAX,-0x1                        ; 00432f69
    JNZ 0x00432f73                      ; 00432f6c
        ;   XREF to: 00432f73 (CONDITIONAL_JUMP)  ; LAB_00432f73
    MOV EBX,0x1                         ; 00432f6e
    XOR ECX,ECX                         ; 00432f73
        ;   Label: LAB_00432f73
    MOV dword ptr [ESP + 0x220],ECX     ; 00432f75
    TEST EBX,EBX                        ; 00432f7c
    JZ 0x00432fdd                       ; 00432f7e
        ;   XREF to: 00432fdd (CONDITIONAL_JUMP)  ; LAB_00432fdd
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432f80
    MOV dword ptr [EAX + 0x2778],ECX    ; 00432f83
        ;   Label: LAB_00432f83
    MOV EDX,dword ptr [EBP + 0x14]      ; 00432f89
        ;   Label: LAB_00432f89
    MOV EAX,dword ptr [ESP + 0x220]     ; 00432f8c
    MOV dword ptr [EDX + 0x2760],EAX    ; 00432f93
    TEST EAX,EAX                        ; 00432f99
    JNZ 0x00433605                      ; 00432f9b
        ;   XREF to: 00433605 (CONDITIONAL_JUMP)  ; LAB_00433605
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432fa1
        ;   Label: LAB_00432fa1
    CMP dword ptr [EAX + 0x2760],0x0    ; 00432fa4
    JNZ 0x00433a77                      ; 00432fab
        ;   XREF to: 00433a77 (CONDITIONAL_JUMP)  ; LAB_00433a77
    FLD float ptr [EBP + 0x18]          ; 00432fb1
        ;   Label: LAB_00432fb1
    FDIV float ptr [0x005d5d67]         ; 00432fb4 | DAT_005d5d67
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432fba
    FSUBR float ptr [EAX + 0x2770]      ; 00432fbd
    FST float ptr [EAX + 0x2770]        ; 00432fc3
    FLDZ                                ; 00432fc9
    FCOMPP                              ; 00432fcb
    FNSTSW AX                           ; 00432fcd
    SAHF                                ; 00432fcf
    JA 0x00433a4f                       ; 00432fd0
        ;   XREF to: 00433a4f (CONDITIONAL_JUMP)  ; LAB_00433a4f
    MOV ESP,EBP                         ; 00432fd6
    POP EBP                             ; 00432fd8
    POP EDI                             ; 00432fd9
    POP ESI                             ; 00432fda
    POP EBX                             ; 00432fdb
    RET                                 ; 00432fdc
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432fdd
        ;   Label: LAB_00432fdd
    MOV EBX,dword ptr [EAX + 0x2764]    ; 00432fe0
    TEST EBX,EBX                        ; 00432fe6
    JZ 0x00432ff3                       ; 00432fe8
        ;   XREF to: 00432ff3 (CONDITIONAL_JUMP)  ; LAB_00432ff3
    MOV dword ptr [ESP + 0x220],EBX     ; 00432fea
    JMP 0x00432f83                      ; 00432ff1
        ;   XREF to: 00432f83 (UNCONDITIONAL_JUMP)  ; LAB_00432f83
    FLD float ptr [EAX + 0x2778]        ; 00432ff3
        ;   Label: LAB_00432ff3
    FLDZ                                ; 00432ff9
    FCOMPP                              ; 00432ffb
    FNSTSW AX                           ; 00432ffd
    SAHF                                ; 00432fff
    JNC 0x00433029                      ; 00433000
        ;   XREF to: 00433029 (CONDITIONAL_JUMP)  ; LAB_00433029
    MOV EAX,dword ptr [EBP + 0x14]      ; 00433002
    MOV EAX,dword ptr [EAX + 0x2760]    ; 00433005
    MOV dword ptr [ESP + 0x220],EAX     ; 0043300b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00433012
    FLD float ptr [EAX + 0x2778]        ; 00433015
    FSUB float ptr [EBP + 0x18]         ; 0043301b
    FSTP float ptr [EAX + 0x2778]       ; 0043301e
    JMP 0x00432f89                      ; 00433024
        ;   XREF to: 00432f89 (UNCONDITIONAL_JUMP)  ; LAB_00432f89
    PUSH ECX                            ; 00433029
        ;   Label: LAB_00433029
    PUSH 0x5d5d0a                       ; 0043302a | = "Bip01 head"
    MOV ESI,dword ptr [ESP + 0x21c]     ; 0043302f
    PUSH ESI                            ; 00433036
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00433037
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0043303c
    CMP EAX,-0x1                        ; 0043303f
    JZ 0x00433155                       ; 00433042
        ;   XREF to: 00433155 (CONDITIONAL_JUMP)  ; LAB_00433155
    PUSH EAX                            ; 00433048
    MOV EAX,dword ptr [EBP + 0x14]      ; 00433049
    ADD EAX,0x158                       ; 0043304c
    PUSH EAX                            ; 00433051
    LEA ESI,[ESP + 0x178]               ; 00433052
    LEA EDI,[ESP + 0xac]                ; 00433059
    CALL core_skeleton.cpp_FUN_00569130 ; 00433060
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x178]               ; 00433065
    ADD ESP,0x8                         ; 0043306c
    LEA EAX,[ESP + 0xa4]                ; 0043306f
    MOV EBX,dword ptr [EBP + 0x14]      ; 00433076
    PUSH EAX                            ; 00433079
    MOVSD ES:EDI,ESI                    ; 0043307a
    MOVSD ES:EDI,ESI                    ; 0043307b
    MOVSD ES:EDI,ESI                    ; 0043307c
    PUSH EBX                            ; 0043307d
    LEA ESI,[ESP + 0x184]               ; 0043307e
    LEA EDI,[ESP + 0xb8]                ; 00433085
    CALL core_actor.cpp_FUN_00408b40    ; 0043308c
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x184]               ; 00433091
    LEA EAX,[ESP + 0xb8]                ; 00433098
    ADD ESP,0x8                         ; 0043309f
    LEA EDX,[ESP + 0x11c]               ; 004330a2
    MOVSD ES:EDI,ESI                    ; 004330a9
    MOVSD ES:EDI,ESI                    ; 004330aa
    MOVSD ES:EDI,ESI                    ; 004330ab
    CMP EDX,EAX                         ; 004330ac
    JNZ 0x00433126                      ; 004330ae
        ;   XREF to: 00433126 (CONDITIONAL_JUMP)  ; LAB_00433126
    PUSH 0x5d5d15                       ; 004330b0 | = "heroCanSee"
        ;   Label: LAB_004330b0
    MOV ESI,dword ptr [0x0061b4d0]      ; 004330b5 | DAT_0061b4d0
    PUSH ESI                            ; 004330bb
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 004330bc
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004330c1
    XOR EDI,EDI                         ; 004330c4
    MOV dword ptr [ESP + 0x21c],EAX     ; 004330c6
    MOV dword ptr [ESP + 0x228],EDI     ; 004330cd
    MOV dword ptr [ESP + 0x224],EDI     ; 004330d4
        ;   Label: LAB_004330d4
    MOV EAX,[0x00622c18]                ; 004330db | g_CDemonSetPtr
    MOV EDX,dword ptr [ESP + 0x228]     ; 004330e0
    CMP EDX,dword ptr [EAX + 0x14f0a8]  ; 004330e7 | g_CDemonSetInstance.character_count
    JGE 0x004335ce                      ; 004330ed
        ;   XREF to: 004335ce (CONDITIONAL_JUMP)  ; LAB_004335ce
    ADD EAX,dword ptr [ESP + 0x224]     ; 004330f3
    MOV ESI,dword ptr [EBP + 0x14]      ; 004330fa
    MOV EBX,dword ptr [EAX + 0x14f0ac]  ; 004330fd
    CMP EBX,ESI                         ; 00433103
    JNZ 0x004331e2                      ; 00433105
        ;   XREF to: 004331e2 (CONDITIONAL_JUMP)  ; LAB_004331e2
    MOV EAX,dword ptr [ESP + 0x228]     ; 0043310b
        ;   Label: LAB_0043310b
    MOV EDI,dword ptr [ESP + 0x224]     ; 00433112
    INC EAX                             ; 00433119
    ADD EDI,0x4                         ; 0043311a
    MOV dword ptr [ESP + 0x228],EAX     ; 0043311d
    JMP 0x004330d4                      ; 00433124
        ;   XREF to: 004330d4 (UNCONDITIONAL_JUMP)  ; LAB_004330d4
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00433126
        ;   Label: LAB_00433126
    MOV dword ptr [ESP + 0x11c],EAX     ; 0043312d
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00433134
    MOV dword ptr [ESP + 0x120],EAX     ; 0043313b
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00433142
    MOV dword ptr [ESP + 0x124],EAX     ; 00433149
    JMP 0x004330b0                      ; 00433150
        ;   XREF to: 004330b0 (UNCONDITIONAL_JUMP)  ; LAB_004330b0
    MOV EAX,0x40b00000                  ; 00433155
        ;   Label: LAB_00433155
    MOV ECX,dword ptr [EBP + 0x14]      ; 0043315a
    MOV dword ptr [ESP + 0x150],EAX     ; 0043315d
    LEA EAX,[ESP + 0x14c]               ; 00433164
    XOR EDI,EDI                         ; 0043316b
    PUSH EAX                            ; 0043316d
    LEA ESI,[ESP + 0x1d4]               ; 0043316e
    MOV dword ptr [ESP + 0x150],EDI     ; 00433175
    PUSH ECX                            ; 0043317c
    MOV dword ptr [ESP + 0x15c],EDI     ; 0043317d
    LEA EDI,[ESP + 0xc4]                ; 00433184
    CALL core_actor.cpp_FUN_00408b40    ; 0043318b
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x1d8]               ; 00433190
    LEA EAX,[ESP + 0xc4]                ; 00433197
    ADD ESP,0x8                         ; 0043319e
    LEA EDX,[ESP + 0x11c]               ; 004331a1
    MOVSD ES:EDI,ESI                    ; 004331a8
    MOVSD ES:EDI,ESI                    ; 004331a9
    MOVSD ES:EDI,ESI                    ; 004331aa
    CMP EDX,EAX                         ; 004331ab
    JZ 0x004330b0                       ; 004331ad
        ;   XREF to: 004330b0 (CONDITIONAL_JUMP)  ; LAB_004330b0
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004331b3
    MOV dword ptr [ESP + 0x11c],EAX     ; 004331ba
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004331c1
    MOV dword ptr [ESP + 0x120],EAX     ; 004331c8
    MOV EAX,dword ptr [ESP + 0xc4]      ; 004331cf
    MOV dword ptr [ESP + 0x124],EAX     ; 004331d6
    JMP 0x004330b0                      ; 004331dd
        ;   XREF to: 004330b0 (UNCONDITIONAL_JUMP)  ; LAB_004330b0
    MOV EDI,dword ptr [0x02c8aee8]      ; 004331e2 | g_CTVBatClassInfo.name_hash
        ;   Label: LAB_004331e2
    PUSH EDI                            ; 004331e8
    PUSH EBX                            ; 004331e9
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004331ea
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004331ef
    TEST EAX,EAX                        ; 004331f2
    JNZ 0x0043310b                      ; 004331f4
        ;   XREF to: 0043310b (CONDITIONAL_JUMP)  ; LAB_0043310b
    CMP dword ptr [EBX + 0x27a8],0x0    ; 004331fa
    JZ 0x00433211                       ; 00433201
        ;   XREF to: 00433211 (CONDITIONAL_JUMP)  ; LAB_00433211
    CMP dword ptr [ESP + 0x21c],0x0     ; 00433203
    JZ 0x0043310b                       ; 0043320b
        ;   XREF to: 0043310b (CONDITIONAL_JUMP)  ; LAB_0043310b
    PUSH EBX                            ; 00433211
        ;   Label: LAB_00433211
    MOV EAX,dword ptr [EBX + 0x154]     ; 00433212
    CALL dword ptr [EAX + 0x70]         ; 00433218
    ADD ESP,0x4                         ; 0043321b
    TEST EAX,EAX                        ; 0043321e
    JNZ 0x0043310b                      ; 00433220
        ;   XREF to: 0043310b (CONDITIONAL_JUMP)  ; LAB_0043310b
    PUSH EBX                            ; 00433226
    MOV EAX,dword ptr [EBX + 0x154]     ; 00433227
    CALL dword ptr [EAX + 0x10c]        ; 0043322d
    ADD ESP,0x4                         ; 00433233
    TEST EAX,EAX                        ; 00433236
    JNZ 0x0043310b                      ; 00433238
        ;   XREF to: 0043310b (CONDITIONAL_JUMP)  ; LAB_0043310b
    LEA EDX,[EBX + 0x158]               ; 0043323e
    LEA ESI,[EBX + 0x24a8]              ; 00433244
    MOV CL,byte ptr [ESI]               ; 0043324a
    MOV EAX,0xffffffff                  ; 0043324c
    TEST CL,CL                          ; 00433251
    JZ 0x0043326e                       ; 00433253
        ;   XREF to: 0043326e (CONDITIONAL_JUMP)  ; LAB_0043326e
    PUSH 0x0                            ; 00433255
    PUSH 0x5d5d20                       ; 00433257 | = "Bip01 head"
    PUSH EDX                            ; 0043325c
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0043325d
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00433262
    PUSH EAX                            ; 00433265
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00433266
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0043326b
    TEST EAX,EAX                        ; 0043326e
        ;   Label: LAB_0043326e
    JL 0x00433573                       ; 00433270
        ;   XREF to: 00433573 (CONDITIONAL_JUMP)  ; LAB_00433573
    PUSH EAX                            ; 00433276
    LEA EAX,[EBX + 0x158]               ; 00433277
    PUSH EAX                            ; 0043327d
    LEA ESI,[ESP + 0x13c]               ; 0043327e
    LEA EDI,[ESP + 0x64]                ; 00433285
    CALL core_skeleton.cpp_FUN_00569130 ; 00433289
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    ADD ESP,0x8                         ; 0043328e
    LEA EAX,[ESP + 0x5c]                ; 00433291
    LEA ESI,[ESP + 0x134]               ; 00433295
    PUSH EAX                            ; 0043329c
    MOVSD ES:EDI,ESI                    ; 0043329d
    MOVSD ES:EDI,ESI                    ; 0043329e
    MOVSD ES:EDI,ESI                    ; 0043329f
    PUSH EBX                            ; 004332a0
    LEA ESI,[ESP + 0x148]               ; 004332a1
    LEA EDI,[ESP + 0x118]               ; 004332a8
    CALL core_actor.cpp_FUN_00408b40    ; 004332af
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x148]               ; 004332b4
    LEA EDX,[ESP + 0x118]               ; 004332bb
    ADD ESP,0x8                         ; 004332c2
    LEA EAX,[ESP + 0x104]               ; 004332c5
    MOVSD ES:EDI,ESI                    ; 004332cc
    MOVSD ES:EDI,ESI                    ; 004332cd
    MOVSD ES:EDI,ESI                    ; 004332ce
    CMP EAX,EDX                         ; 004332cf
    JZ 0x004332fd                       ; 004332d1
        ;   XREF to: 004332fd (CONDITIONAL_JUMP)  ; LAB_004332fd
    MOV EAX,dword ptr [ESP + 0x110]     ; 004332d3
    MOV dword ptr [ESP + 0x104],EAX     ; 004332da
    MOV EAX,dword ptr [ESP + 0x114]     ; 004332e1
    MOV dword ptr [ESP + 0x108],EAX     ; 004332e8
    MOV EAX,dword ptr [ESP + 0x118]     ; 004332ef
    MOV dword ptr [ESP + 0x10c],EAX     ; 004332f6
    FLD float ptr [ESP + 0x104]         ; 004332fd
        ;   Label: LAB_004332fd
    FLD float ptr [ESP + 0x108]         ; 00433304
    FLD float ptr [ESP + 0x10c]         ; 0043330b
    LEA EDI,[ESP + 0x158]               ; 00433312
    LEA ESI,[ESP + 0x2c]                ; 00433319
    LEA EAX,[ESP + 0x158]               ; 0043331d
    MOV ECX,dword ptr [EBP + 0x14]      ; 00433324
    FXCH ST2                            ; 00433327
    FSUB float ptr [ESP + 0x11c]        ; 00433329
    FXCH                                ; 00433330
    FSUB float ptr [ESP + 0x120]        ; 00433332
    FXCH ST2                            ; 00433339
    FSUB float ptr [ESP + 0x124]        ; 0043333b
    PUSH EAX                            ; 00433342
    FXCH                                ; 00433343
    FSTP float ptr [ESP + 0x30]         ; 00433345
    FXCH                                ; 00433349
    FSTP float ptr [ESP + 0x34]         ; 0043334b
    FSTP float ptr [ESP + 0x38]         ; 0043334f
    MOVSD ES:EDI,ESI                    ; 00433353
    MOVSD ES:EDI,ESI                    ; 00433354
    MOVSD ES:EDI,ESI                    ; 00433355
    PUSH ECX                            ; 00433356
    LEA ESI,[ESP + 0xd0]                ; 00433357
    LEA EDI,[ESP + 0x1c]                ; 0043335e
    CALL core_actor.cpp_FUN_00408b00    ; 00433362
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0xd0]                ; 00433367
    ADD ESP,0x8                         ; 0043336e
    MOVSD ES:EDI,ESI                    ; 00433371
    MOVSD ES:EDI,ESI                    ; 00433372
    MOVSD ES:EDI,ESI                    ; 00433373
    FLD float ptr [ESP + 0x1c]          ; 00433374
    FLDZ                                ; 00433378
    FCOMPP                              ; 0043337a
    FNSTSW AX                           ; 0043337c
    SAHF                                ; 0043337e
    JA 0x0043310b                       ; 0043337f
        ;   XREF to: 0043310b (CONDITIONAL_JUMP)  ; LAB_0043310b
    FLD float ptr [ESP + 0x18]          ; 00433385
    FMUL ST0                            ; 00433389
    FLD float ptr [ESP + 0x14]          ; 0043338b
    FMUL ST0                            ; 0043338f
    FADDP                               ; 00433391
    FLD float ptr [ESP + 0x1c]          ; 00433393
    FMUL ST0                            ; 00433397
    FADDP                               ; 00433399
    FSTP float ptr [ESP + 0x22c]        ; 0043339b
    MOV EAX,dword ptr [ESP + 0x22c]     ; 004333a2
    MOV dword ptr [ESP + 0x4],EAX       ; 004333a9
    CMP EAX,0x44610000                  ; 004333ad
    JG 0x0043310b                       ; 004333b2
        ;   XREF to: 0043310b (CONDITIONAL_JUMP)  ; LAB_0043310b
    LEA EAX,[ESP + 0x14]                ; 004333b8
    PUSH EAX                            ; 004333bc
    LEA ESI,[ESP + 0x90]                ; 004333bd
    LEA EDI,[ESP + 0x198]               ; 004333c4
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004333cb
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x90]                ; 004333d0
    ADD ESP,0x4                         ; 004333d7
    MOVSD ES:EDI,ESI                    ; 004333da
    MOVSD ES:EDI,ESI                    ; 004333db
    MOVSD ES:EDI,ESI                    ; 004333dc
    FLD float ptr [ESP + 0x198]         ; 004333dd
    FABS                                ; 004333e4
    FCOMP double ptr [0x005d5d77]       ; 004333e6 | DAT_005d5d77
    FNSTSW AX                           ; 004333ec
    SAHF                                ; 004333ee
    JA 0x0043310b                       ; 004333ef
        ;   XREF to: 0043310b (CONDITIONAL_JUMP)  ; LAB_0043310b
    FLD float ptr [ESP + 0x194]         ; 004333f5
    FABS                                ; 004333fc
    FCOMP double ptr [0x005d5d7f]       ; 004333fe | DAT_005d5d7f
    FNSTSW AX                           ; 00433404
    SAHF                                ; 00433406
    JA 0x0043310b                       ; 00433407
        ;   XREF to: 0043310b (CONDITIONAL_JUMP)  ; LAB_0043310b
    MOV EAX,[0x01c3f6a0]                ; 0043340d | g_CEnemyClassInfo.name_hash
    PUSH EAX                            ; 00433412
    MOV EDI,0x41200000                  ; 00433413
    PUSH EBX                            ; 00433418
    MOV dword ptr [ESP + 0x8],EDI       ; 00433419
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0043341d
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 00433422
    MOV ESI,EAX                         ; 00433425
    TEST EAX,EAX                        ; 00433427
    JZ 0x00433447                       ; 00433429
        ;   XREF to: 00433447 (CONDITIONAL_JUMP)  ; LAB_00433447
    MOV EDX,0x41f00000                  ; 0043342b
    MOV ECX,dword ptr [EBP + 0x14]      ; 00433430
    MOV EAX,dword ptr [EAX + 0xc1e8]    ; 00433433
    MOV dword ptr [ESP],EDX             ; 00433439
    CMP EAX,ECX                         ; 0043343c
    JNZ 0x00433447                      ; 0043343e
        ;   XREF to: 00433447 (CONDITIONAL_JUMP)  ; LAB_00433447
    MOV dword ptr [ESP],0x42200000      ; 00433440
    FLD float ptr [ESP]                 ; 00433447
        ;   Label: LAB_00433447
    FCOMP double ptr [0x005d5d87]       ; 0043344a | DAT_005d5d87
    FNSTSW AX                           ; 00433450
    SAHF                                ; 00433452
    JNC 0x0043346e                      ; 00433453
        ;   XREF to: 0043346e (CONDITIONAL_JUMP)  ; LAB_0043346e
    PUSH 0x5d5d2b                       ; 00433455 | = "CHero"
    PUSH EBX                            ; 0043345a
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 0043345b
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00433460
    TEST EAX,EAX                        ; 00433463
    JZ 0x0043346e                       ; 00433465
        ;   XREF to: 0043346e (CONDITIONAL_JUMP)  ; LAB_0043346e
    MOV dword ptr [ESP],0x41700000      ; 00433467
    FLD float ptr [ESP + 0x4]           ; 0043346e
        ;   Label: LAB_0043346e
    FSQRT                               ; 00433472
    FLD double ptr [0x005d5d8f]         ; 00433474 | DAT_005d5d8f
    FXCH                                ; 0043347a
    FADD ST0,ST1                        ; 0043347c
    FDIVP                               ; 0043347e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00433480
    FLD float ptr [ESP]                 ; 00433483
    FXCH                                ; 00433486
    FMUL ST1                            ; 00433488
    MOV EDX,dword ptr [EAX + 0x2760]    ; 0043348a
    FSTP ST1                            ; 00433490
    FSTP float ptr [ESP]                ; 00433492
    CMP EBX,EDX                         ; 00433495
    JNZ 0x004334a9                      ; 00433497
        ;   XREF to: 004334a9 (CONDITIONAL_JUMP)  ; LAB_004334a9
    FLD float ptr [ESP]                 ; 00433499
    FLD ST0                             ; 0043349c
    FMUL double ptr [0x005d5d47]        ; 0043349e | DAT_005d5d47
    FSTP ST1                            ; 004334a4
    FSTP float ptr [ESP]                ; 004334a6
    TEST ESI,ESI                        ; 004334a9
        ;   Label: LAB_004334a9
    JZ 0x004335b7                       ; 004334ab
        ;   XREF to: 004335b7 (CONDITIONAL_JUMP)  ; LAB_004335b7
    CMP dword ptr [ESI + 0xc1d4],0x1    ; 004334b1
    JNZ 0x004335b7                      ; 004334b8
        ;   XREF to: 004335b7 (CONDITIONAL_JUMP)  ; LAB_004335b7
    MOV ESI,dword ptr [0x00622c18]      ; 004334be | g_CDemonSetPtr
        ;   Label: LAB_004334be
    PUSH ESI                            ; 004334c4 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 004334c5
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004334ca
    MOV EDI,dword ptr [EBP + 0x14]      ; 004334cd
    PUSH EDI                            ; 004334d0
    MOV EAX,[0x00622c18]                ; 004334d1 | g_CDemonSetPtr
    PUSH EAX                            ; 004334d6 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 004334d7
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004334dc
    PUSH EBX                            ; 004334df
    MOV EDX,dword ptr [0x00622c18]      ; 004334e0 | g_CDemonSetPtr
    PUSH EDX                            ; 004334e6 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 004334e7
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004334ec
    PUSH 0x2                            ; 004334ef
    MOV ECX,dword ptr [0x00622c18]      ; 004334f1 | g_CDemonSetPtr
    PUSH ECX                            ; 004334f7 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0 ; 004334f8
        ;   XREF to: 005592d0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 004334fd
    LEA EAX,[ESP + 0x104]               ; 00433500
    PUSH EAX                            ; 00433507
    LEA EAX,[ESP + 0x120]               ; 00433508
    PUSH EAX                            ; 0043350f
    MOV ESI,dword ptr [0x00622c18]      ; 00433510 | g_CDemonSetPtr
    PUSH ESI                            ; 00433516 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00557230 ; 00433517
        ;   XREF to: 00557230 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00557230(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 0043351c
    TEST EAX,EAX                        ; 0043351f
    JNZ 0x0043310b                      ; 00433521
        ;   XREF to: 0043310b (CONDITIONAL_JUMP)  ; LAB_0043310b
    LEA EAX,[ESP + 0x194]               ; 00433527
    LEA EDX,[ESP + 0x80]                ; 0043352e
    MOV dword ptr [ESP + 0x220],EBX     ; 00433535
    CMP EDX,EAX                         ; 0043353c
    JZ 0x0043310b                       ; 0043353e
        ;   XREF to: 0043310b (CONDITIONAL_JUMP)  ; LAB_0043310b
    MOV EAX,dword ptr [ESP + 0x194]     ; 00433544
    MOV dword ptr [ESP + 0x80],EAX      ; 0043354b
    MOV EAX,dword ptr [ESP + 0x198]     ; 00433552
    MOV dword ptr [ESP + 0x84],EAX      ; 00433559
    MOV EAX,dword ptr [ESP + 0x19c]     ; 00433560
    MOV dword ptr [ESP + 0x88],EAX      ; 00433567
    JMP 0x0043310b                      ; 0043356e
        ;   XREF to: 0043310b (UNCONDITIONAL_JUMP)  ; LAB_0043310b
    LEA EAX,[ESP + 0x104]               ; 00433573
        ;   Label: LAB_00433573
    LEA EDX,[EBX + 0x20]                ; 0043357a
    CMP EAX,EDX                         ; 0043357d
    JZ 0x0043359e                       ; 0043357f
        ;   XREF to: 0043359e (CONDITIONAL_JUMP)  ; LAB_0043359e
    MOV EAX,dword ptr [EDX]             ; 00433581
    MOV dword ptr [ESP + 0x104],EAX     ; 00433583
    MOV EAX,dword ptr [EDX + 0x4]       ; 0043358a
    MOV dword ptr [ESP + 0x108],EAX     ; 0043358d
    MOV EAX,dword ptr [EDX + 0x8]       ; 00433594
    MOV dword ptr [ESP + 0x10c],EAX     ; 00433597
    FLD float ptr [ESP + 0x108]         ; 0043359e
        ;   Label: LAB_0043359e
    FADD float ptr [0x005d5d4f]         ; 004335a5 | DAT_005d5d4f
    FSTP float ptr [ESP + 0x108]        ; 004335ab
    JMP 0x004332fd                      ; 004335b2
        ;   XREF to: 004332fd (UNCONDITIONAL_JUMP)  ; LAB_004332fd
    FLD float ptr [ESP]                 ; 004335b7
        ;   Label: LAB_004335b7
    FCOMP float ptr [0x005d5d97]        ; 004335ba | DAT_005d5d97
    FNSTSW AX                           ; 004335c0
    SAHF                                ; 004335c2
    JC 0x0043310b                       ; 004335c3
        ;   XREF to: 0043310b (CONDITIONAL_JUMP)  ; LAB_0043310b
    JMP 0x004334be                      ; 004335c9
        ;   XREF to: 004334be (UNCONDITIONAL_JUMP)  ; LAB_004334be
    PUSH EAX                            ; 004335ce | g_CDemonSetInstance
        ;   Label: LAB_004335ce
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 004335cf
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004335d4
    PUSH 0x40000000                     ; 004335d7
    PUSH 0x3f800000                     ; 004335dc
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004335e1
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x238],EAX     ; 004335e6
    FLD float ptr [ESP + 0x238]         ; 004335ed
    ADD ESP,0x8                         ; 004335f4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004335f7
    FSTP float ptr [EAX + 0x2778]       ; 004335fa
    JMP 0x00432f89                      ; 00433600
        ;   XREF to: 00432f89 (UNCONDITIONAL_JUMP)  ; LAB_00432f89
    PUSH 0x0                            ; 00433605
        ;   Label: LAB_00433605
    PUSH 0x5d5d31                       ; 00433607 | = "Bip01 head"
    MOV ECX,dword ptr [ESP + 0x21c]     ; 0043360c
    PUSH ECX                            ; 00433613
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00433614
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00433619
    CMP EAX,-0x1                        ; 0043361c
    JZ 0x0043382f                       ; 0043361f
        ;   XREF to: 0043382f (CONDITIONAL_JUMP)  ; LAB_0043382f
    PUSH EAX                            ; 00433625
    MOV EAX,dword ptr [EBP + 0x14]      ; 00433626
    ADD EAX,0x158                       ; 00433629
    PUSH EAX                            ; 0043362e
    LEA ESI,[ESP + 0x1c0]               ; 0043362f
    LEA EDI,[ESP + 0xdc]                ; 00433636
    CALL core_skeleton.cpp_FUN_00569130 ; 0043363d
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x1c0]               ; 00433642
    ADD ESP,0x8                         ; 00433649
    LEA EAX,[ESP + 0xd4]                ; 0043364c
    MOV EDX,dword ptr [EBP + 0x14]      ; 00433653
    PUSH EAX                            ; 00433656
    MOVSD ES:EDI,ESI                    ; 00433657
    MOVSD ES:EDI,ESI                    ; 00433658
    MOVSD ES:EDI,ESI                    ; 00433659
    PUSH EDX                            ; 0043365a
    LEA ESI,[ESP + 0x1cc]               ; 0043365b
    LEA EDI,[ESP + 0xe8]                ; 00433662
    CALL core_actor.cpp_FUN_00408b40    ; 00433669
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x1cc]               ; 0043366e
    LEA EAX,[ESP + 0xe8]                ; 00433675
    ADD ESP,0x8                         ; 0043367c
    LEA EDX,[ESP + 0x1ac]               ; 0043367f
    MOVSD ES:EDI,ESI                    ; 00433686
    MOVSD ES:EDI,ESI                    ; 00433687
    MOVSD ES:EDI,ESI                    ; 00433688
    CMP EDX,EAX                         ; 00433689
    JZ 0x004336b7                       ; 0043368b
        ;   XREF to: 004336b7 (CONDITIONAL_JUMP)  ; LAB_004336b7
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0043368d
    MOV dword ptr [ESP + 0x1ac],EAX     ; 00433694
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0043369b
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004336a2
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004336a9
    MOV dword ptr [ESP + 0x1b4],EAX     ; 004336b0
        ;   Label: LAB_004336b0
    MOV ECX,dword ptr [0x007c637c]      ; 004336b7 | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_004336b7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004336bd
    PUSH ECX                            ; 004336c0
    MOV EBX,dword ptr [EAX + 0x2760]    ; 004336c1
    PUSH EBX                            ; 004336c7
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004336c8
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004336cd
    MOV EBX,EAX                         ; 004336d0
    MOV dword ptr [ESP + 0x218],EAX     ; 004336d2
    TEST EAX,EAX                        ; 004336d9
    JNZ 0x004338af                      ; 004336db
        ;   XREF to: 004338af (CONDITIONAL_JUMP)  ; LAB_004338af
    MOV EDX,dword ptr [EBP + 0x14]      ; 004336e1
    MOV EDX,dword ptr [EDX + 0x2760]    ; 004336e4
    LEA EAX,[ESP + 0x1dc]               ; 004336ea
    ADD EDX,0x20                        ; 004336f1
    CMP EAX,EDX                         ; 004336f4
    JZ 0x00433715                       ; 004336f6
        ;   XREF to: 00433715 (CONDITIONAL_JUMP)  ; LAB_00433715
    MOV EAX,dword ptr [EDX]             ; 004336f8
    MOV dword ptr [ESP + 0x1dc],EAX     ; 004336fa
    MOV EAX,dword ptr [EDX + 0x4]       ; 00433701
    MOV dword ptr [ESP + 0x1e0],EAX     ; 00433704
    MOV EAX,dword ptr [EDX + 0x8]       ; 0043370b
    MOV dword ptr [ESP + 0x1e4],EAX     ; 0043370e
        ;   Label: LAB_0043370e
    FLD float ptr [ESP + 0x1dc]         ; 00433715
        ;   Label: LAB_00433715
    FLD float ptr [ESP + 0x1e0]         ; 0043371c
    FLD float ptr [ESP + 0x1e4]         ; 00433723
    LEA EDI,[ESP + 0x98]                ; 0043372a
    LEA ESI,[ESP + 0x50]                ; 00433731
    LEA EAX,[ESP + 0x98]                ; 00433735
    FXCH ST2                            ; 0043373c
    FSUB float ptr [ESP + 0x1ac]        ; 0043373e
    FXCH                                ; 00433745
    FSUB float ptr [ESP + 0x1b0]        ; 00433747
    FXCH ST2                            ; 0043374e
    FSUB float ptr [ESP + 0x1b4]        ; 00433750
    FXCH                                ; 00433757
    FSTP float ptr [ESP + 0x50]         ; 00433759
    FXCH                                ; 0043375d
    FSTP float ptr [ESP + 0x54]         ; 0043375f
    FSTP float ptr [ESP + 0x58]         ; 00433763
    MOVSD ES:EDI,ESI                    ; 00433767
    MOVSD ES:EDI,ESI                    ; 00433768
    MOVSD ES:EDI,ESI                    ; 00433769
    PUSH EAX                            ; 0043376a
    MOV EDI,dword ptr [EBP + 0x14]      ; 0043376b
    PUSH EDI                            ; 0043376e
    LEA ESI,[ESP + 0x190]               ; 0043376f
    CALL core_actor.cpp_FUN_00408b00    ; 00433776
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA EDI,[ESP + 0x1a8]               ; 0043377b
    LEA ESI,[ESP + 0x190]               ; 00433782
    ADD ESP,0x8                         ; 00433789
    LEA EAX,[ESP + 0x1a0]               ; 0043378c
    MOVSD ES:EDI,ESI                    ; 00433793
    MOVSD ES:EDI,ESI                    ; 00433794
    MOVSD ES:EDI,ESI                    ; 00433795
    PUSH EAX                            ; 00433796
    LEA ESI,[ESP + 0xfc]                ; 00433797
    LEA EDI,[ESP + 0x78]                ; 0043379e
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004337a2
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0xfc]                ; 004337a7
    LEA EAX,[ESP + 0x78]                ; 004337ae
    ADD ESP,0x4                         ; 004337b2
    LEA EDX,[ESP + 0x80]                ; 004337b5
    MOVSD ES:EDI,ESI                    ; 004337bc
    MOVSD ES:EDI,ESI                    ; 004337bd
    MOVSD ES:EDI,ESI                    ; 004337be
    CMP EDX,EAX                         ; 004337bf
    JZ 0x004337e4                       ; 004337c1
        ;   XREF to: 004337e4 (CONDITIONAL_JUMP)  ; LAB_004337e4
    MOV EAX,dword ptr [ESP + 0x74]      ; 004337c3
    MOV dword ptr [ESP + 0x80],EAX      ; 004337c7
    MOV EAX,dword ptr [ESP + 0x78]      ; 004337ce
    MOV dword ptr [ESP + 0x84],EAX      ; 004337d2
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004337d9
    MOV dword ptr [ESP + 0x88],EAX      ; 004337dd
    FLD float ptr [ESP + 0x84]          ; 004337e4
        ;   Label: LAB_004337e4
    FABS                                ; 004337eb
    FCOMP double ptr [0x005d5d57]       ; 004337ed | DAT_005d5d57
    FNSTSW AX                           ; 004337f3
    SAHF                                ; 004337f5
    JBE 0x00433805                      ; 004337f6
        ;   XREF to: 00433805 (CONDITIONAL_JUMP)  ; LAB_00433805
    MOV EAX,dword ptr [EBP + 0x14]      ; 004337f8
    MOV dword ptr [EAX + 0x2760],0x0    ; 004337fb
    FLD float ptr [ESP + 0x80]          ; 00433805
        ;   Label: LAB_00433805
    FABS                                ; 0043380c
    FCOMP double ptr [0x005d5d5f]       ; 0043380e | DAT_005d5d5f
    FNSTSW AX                           ; 00433814
    SAHF                                ; 00433816
    JBE 0x00432fa1                      ; 00433817
        ;   XREF to: 00432fa1 (CONDITIONAL_JUMP)  ; LAB_00432fa1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043381d
    MOV dword ptr [EAX + 0x2760],0x0    ; 00433820
    JMP 0x00432fb1                      ; 0043382a
        ;   XREF to: 00432fb1 (UNCONDITIONAL_JUMP)  ; LAB_00432fb1
    MOV ESI,0x40b00000                  ; 0043382f
        ;   Label: LAB_0043382f
    LEA EAX,[ESP + 0x200]               ; 00433834
    XOR EBX,EBX                         ; 0043383b
    LEA EDI,[ESP + 0x164]               ; 0043383d
    MOV dword ptr [ESP + 0x200],EBX     ; 00433844
    PUSH EAX                            ; 0043384b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043384c
    MOV dword ptr [ESP + 0x208],ESI     ; 0043384f
    PUSH EAX                            ; 00433856
    LEA ESI,[ESP + 0x10]                ; 00433857
    MOV dword ptr [ESP + 0x210],EBX     ; 0043385b
    CALL core_actor.cpp_FUN_00408b40    ; 00433862
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x10]                ; 00433867
    LEA EDX,[ESP + 0x16c]               ; 0043386b
    ADD ESP,0x8                         ; 00433872
    LEA EAX,[ESP + 0x1ac]               ; 00433875
    MOVSD ES:EDI,ESI                    ; 0043387c
    MOVSD ES:EDI,ESI                    ; 0043387d
    MOVSD ES:EDI,ESI                    ; 0043387e
    CMP EAX,EDX                         ; 0043387f
    JZ 0x004336b7                       ; 00433881
        ;   XREF to: 004336b7 (CONDITIONAL_JUMP)  ; LAB_004336b7
    MOV EAX,dword ptr [ESP + 0x164]     ; 00433887
    MOV dword ptr [ESP + 0x1ac],EAX     ; 0043388e
    MOV EAX,dword ptr [ESP + 0x168]     ; 00433895
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0043389c
    MOV EAX,dword ptr [ESP + 0x16c]     ; 004338a3
    JMP 0x004336b0                      ; 004338aa
        ;   XREF to: 004336b0 (UNCONDITIONAL_JUMP)  ; LAB_004336b0
    PUSH EBX                            ; 004338af
        ;   Label: LAB_004338af
    MOV EAX,dword ptr [EAX + 0x154]     ; 004338b0
    CALL dword ptr [EAX + 0x10c]        ; 004338b6
    ADD ESP,0x4                         ; 004338bc
    TEST EAX,EAX                        ; 004338bf
    JNZ 0x00433941                      ; 004338c1
        ;   XREF to: 00433941 (CONDITIONAL_JUMP)  ; LAB_00433941
    PUSH 0x0                            ; 004338c7
        ;   Label: LAB_004338c7
    MOV EBX,dword ptr [ESP + 0x21c]     ; 004338c9
    PUSH 0x5d5d3c                       ; 004338d0 | = "Bip01 head"
    ADD EBX,0x158                       ; 004338d5
    PUSH EBX                            ; 004338db
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 004338dc
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004338e1
    PUSH EAX                            ; 004338e4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004338e5
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004338ea
    CMP EAX,-0x1                        ; 004338ed
    JNZ 0x004339cb                      ; 004338f0
        ;   XREF to: 004339cb (CONDITIONAL_JUMP)  ; LAB_004339cb
    MOV EDX,dword ptr [ESP + 0x218]     ; 004338f6
    LEA EAX,[ESP + 0x1dc]               ; 004338fd
    ADD EDX,0x20                        ; 00433904
    CMP EAX,EDX                         ; 00433907
    JZ 0x00433928                       ; 00433909
        ;   XREF to: 00433928 (CONDITIONAL_JUMP)  ; LAB_00433928
    MOV EAX,dword ptr [EDX]             ; 0043390b
    MOV dword ptr [ESP + 0x1dc],EAX     ; 0043390d
    MOV EAX,dword ptr [EDX + 0x4]       ; 00433914
    MOV dword ptr [ESP + 0x1e0],EAX     ; 00433917
    MOV EAX,dword ptr [EDX + 0x8]       ; 0043391e
    MOV dword ptr [ESP + 0x1e4],EAX     ; 00433921
    FLD float ptr [ESP + 0x1e0]         ; 00433928
        ;   Label: LAB_00433928
    FADD float ptr [0x005d5d4f]         ; 0043392f | DAT_005d5d4f
    FSTP float ptr [ESP + 0x1e0]        ; 00433935
    JMP 0x00433715                      ; 0043393c
        ;   XREF to: 00433715 (UNCONDITIONAL_JUMP)  ; LAB_00433715
    LEA EDX,[EBX + 0x158]               ; 00433941
        ;   Label: LAB_00433941
    LEA EAX,[EBX + 0x24a8]              ; 00433947
    CMP byte ptr [EAX],0x0              ; 0043394d
    JZ 0x004338c7                       ; 00433950
        ;   XREF to: 004338c7 (CONDITIONAL_JUMP)  ; LAB_004338c7
    PUSH 0x0                            ; 00433956
    PUSH EDX                            ; 00433958
    LEA ESI,[ESP + 0x1fc]               ; 00433959
    LEA EDI,[ESP + 0x70]                ; 00433960
    CALL core_skeleton.cpp_FUN_00569130 ; 00433964
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    ADD ESP,0x8                         ; 00433969
    LEA EAX,[ESP + 0x68]                ; 0043396c
    LEA ESI,[ESP + 0x1f4]               ; 00433970
    PUSH EAX                            ; 00433977
    MOVSD ES:EDI,ESI                    ; 00433978
    MOVSD ES:EDI,ESI                    ; 00433979
    MOVSD ES:EDI,ESI                    ; 0043397a
    PUSH EBX                            ; 0043397b
    LEA ESI,[ESP + 0x1f0]               ; 0043397c
    LEA EDI,[ESP + 0x40]                ; 00433983
    CALL core_actor.cpp_FUN_00408b40    ; 00433987
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x1f0]               ; 0043398c
    LEA EAX,[ESP + 0x40]                ; 00433993
    ADD ESP,0x8                         ; 00433997
    LEA EDX,[ESP + 0x1dc]               ; 0043399a
    MOVSD ES:EDI,ESI                    ; 004339a1
    MOVSD ES:EDI,ESI                    ; 004339a2
    MOVSD ES:EDI,ESI                    ; 004339a3
    CMP EDX,EAX                         ; 004339a4
    JZ 0x00433715                       ; 004339a6
        ;   XREF to: 00433715 (CONDITIONAL_JUMP)  ; LAB_00433715
    MOV EAX,dword ptr [ESP + 0x38]      ; 004339ac
    MOV dword ptr [ESP + 0x1dc],EAX     ; 004339b0
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004339b7
    MOV dword ptr [ESP + 0x1e0],EAX     ; 004339bb
    MOV EAX,dword ptr [ESP + 0x40]      ; 004339c2
    JMP 0x0043370e                      ; 004339c6
        ;   XREF to: 0043370e (UNCONDITIONAL_JUMP)  ; LAB_0043370e
    PUSH EAX                            ; 004339cb
        ;   Label: LAB_004339cb
    PUSH EBX                            ; 004339cc
    LEA ESI,[ESP + 0x28]                ; 004339cd
    LEA EDI,[ESP + 0x4c]                ; 004339d1
    CALL core_skeleton.cpp_FUN_00569130 ; 004339d5
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x28]                ; 004339da
    ADD ESP,0x8                         ; 004339de
    LEA EAX,[ESP + 0x44]                ; 004339e1
    MOVSD ES:EDI,ESI                    ; 004339e5
    MOVSD ES:EDI,ESI                    ; 004339e6
    MOVSD ES:EDI,ESI                    ; 004339e7
    PUSH EAX                            ; 004339e8
    MOV ESI,dword ptr [ESP + 0x21c]     ; 004339e9
    PUSH ESI                            ; 004339f0
    LEA ESI,[ESP + 0x130]               ; 004339f1
    LEA EDI,[ESP + 0xf4]                ; 004339f8
    CALL core_actor.cpp_FUN_00408b40    ; 004339ff
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x130]               ; 00433a04
    LEA EAX,[ESP + 0xf4]                ; 00433a0b
    ADD ESP,0x8                         ; 00433a12
    LEA EDX,[ESP + 0x1dc]               ; 00433a15
    MOVSD ES:EDI,ESI                    ; 00433a1c
    MOVSD ES:EDI,ESI                    ; 00433a1d
    MOVSD ES:EDI,ESI                    ; 00433a1e
    CMP EDX,EAX                         ; 00433a1f
    JZ 0x00433715                       ; 00433a21
        ;   XREF to: 00433715 (CONDITIONAL_JUMP)  ; LAB_00433715
    MOV EAX,dword ptr [ESP + 0xec]      ; 00433a27
    MOV dword ptr [ESP + 0x1dc],EAX     ; 00433a2e
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00433a35
    MOV dword ptr [ESP + 0x1e0],EAX     ; 00433a3c
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00433a43
    JMP 0x0043370e                      ; 00433a4a
        ;   XREF to: 0043370e (UNCONDITIONAL_JUMP)  ; LAB_0043370e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00433a4f
        ;   Label: LAB_00433a4f
    MOV dword ptr [EAX + 0x276c],0x0    ; 00433a52
    MOV dword ptr [EAX + 0x2770],0x0    ; 00433a5c
    MOV dword ptr [EAX + 0x2768],0x0    ; 00433a66
    MOV ESP,EBP                         ; 00433a70
    POP EBP                             ; 00433a72
    POP EDI                             ; 00433a73
    POP ESI                             ; 00433a74
    POP EBX                             ; 00433a75
    RET                                 ; 00433a76
    FLD float ptr [EBP + 0x18]          ; 00433a77
        ;   Label: LAB_00433a77
    FDIV float ptr [0x005d5d67]         ; 00433a7a | DAT_005d5d67
    FADD float ptr [EAX + 0x2770]       ; 00433a80
    FST float ptr [EAX + 0x2770]        ; 00433a86
    FLD1                                ; 00433a8c
    FCOMPP                              ; 00433a8e
    FNSTSW AX                           ; 00433a90
    SAHF                                ; 00433a92
    JNC 0x00433aa2                      ; 00433a93
        ;   XREF to: 00433aa2 (CONDITIONAL_JUMP)  ; LAB_00433aa2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00433a95
    MOV dword ptr [EAX + 0x2770],0x3f800000 ; 00433a98
    MOV EAX,dword ptr [EBP + 0x14]      ; 00433aa2
        ;   Label: LAB_00433aa2
    FLD float ptr [ESP + 0x84]          ; 00433aa5
    FSUB float ptr [EAX + 0x2768]       ; 00433aac
    SUB ESP,0x4                         ; 00433ab2
    FSTP float ptr [ESP]                ; 00433ab5
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00433ab8
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0x234],EAX     ; 00433abd
    FLD float ptr [ESP + 0x234]         ; 00433ac4
    ADD ESP,0x4                         ; 00433acb
    FMUL double ptr [0x005d5d6f]        ; 00433ace | DAT_005d5d6f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00433ad4
    FADD float ptr [EAX + 0x2768]       ; 00433ad7
    FSTP float ptr [EAX + 0x2768]       ; 00433add
    FLD float ptr [ESP + 0x80]          ; 00433ae3
    FSUB float ptr [EAX + 0x276c]       ; 00433aea
    SUB ESP,0x4                         ; 00433af0
    FSTP float ptr [ESP]                ; 00433af3
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00433af6
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0x234],EAX     ; 00433afb
    FLD float ptr [ESP + 0x234]         ; 00433b02
    ADD ESP,0x4                         ; 00433b09
    FMUL double ptr [0x005d5d6f]        ; 00433b0c | DAT_005d5d6f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00433b12
    FADD float ptr [EAX + 0x276c]       ; 00433b15
    FSTP float ptr [EAX + 0x276c]       ; 00433b1b
    MOV ESP,EBP                         ; 00433b21
    POP EBP                             ; 00433b23
    POP EDI                             ; 00433b24
    POP ESI                             ; 00433b25
    POP EBX                             ; 00433b26
    RET                                 ; 00433b27

