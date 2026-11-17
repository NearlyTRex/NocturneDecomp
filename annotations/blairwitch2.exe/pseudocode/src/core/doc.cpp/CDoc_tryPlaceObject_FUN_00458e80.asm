; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_doc_cpp_CDoc_tryPlaceObject_FUN_00458e80(CDoc *this_ptr)
;
; Parameters:
; CDoc *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   double g_DOUBLE_005d0407 = 0.990000000000000
;   double g_DOUBLE_005d040f = 3
;   double g_DOUBLE_005d0417 = 2
;   double g_DOUBLE_005d041f = 4
;   CConsole* g_CConsolePtr = 007c158c
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CCrateClassInfo.name_hash
;   undefined4 g_CActorDestinationClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408cf0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
;   core_dest.cpp_CActorDestination_acceptsActor_FUN_004473f0
;   core_doc.cpp_getCarriedObjectVerticalOffset_FUN_0044ffd0
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_005038a0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_00534ea0
;   core_setcolid.cpp_CDemonSet_testCylinderCollision_FUN_00537030
;   engine_console.cpp_CConsole_printf_FUN_00436710
;   shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00458e80
        ;   Label: core_doc.cpp_CDoc_tryPlaceObject_FUN_00458e80
    PUSH ESI                            ; 00458e81
    PUSH EDI                            ; 00458e82
    PUSH EBP                            ; 00458e83
    MOV EBP,ESP                         ; 00458e84
    SUB ESP,0x188                       ; 00458e86
    AND ESP,0xfffffff8                  ; 00458e8c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00458e8f
    MOV EDX,dword ptr [EBX + 0x25608]   ; 00458e92
    TEST EDX,EDX                        ; 00458e98
    JNZ 0x00459767                      ; 00458e9a
        ;   XREF to: 00459767 (CONDITIONAL_JUMP)  ; LAB_00459767
    CMP dword ptr [EBX + 0x2698],0x0    ; 00458ea0
    JZ 0x00459767                       ; 00458ea7
        ;   XREF to: 00459767 (CONDITIONAL_JUMP)  ; LAB_00459767
    CMP dword ptr [EBX + 0x2d04],0x9    ; 00458ead
    JZ 0x00458edd                       ; 00458eb4
        ;   XREF to: 00458edd (CONDITIONAL_JUMP)  ; LAB_00458edd
    PUSH EDX                            ; 00458eb6
    PUSH EBX                            ; 00458eb7
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0 ; 00458eb8
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0x18c],EAX     ; 00458ebd
    FLD float ptr [ESP + 0x18c]         ; 00458ec4
    ADD ESP,0x8                         ; 00458ecb
    FCOMP double ptr [0x005d0407]       ; 00458ece | g_DOUBLE_005d0407
    FNSTSW AX                           ; 00458ed4
    SAHF                                ; 00458ed6
    JC 0x00459767                       ; 00458ed7
        ;   XREF to: 00459767 (CONDITIONAL_JUMP)  ; LAB_00459767
    PUSH 0x0                            ; 00458edd
        ;   Label: LAB_00458edd
    LEA EAX,[EBX + 0x2b4]               ; 00458edf
    PUSH EAX                            ; 00458ee5
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_005038a0 ; 00458ee6
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_005038a0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x18c],EAX     ; 00458eeb
    FLD float ptr [ESP + 0x18c]         ; 00458ef2
    FLD1                                ; 00458ef9
    ADD ESP,0x8                         ; 00458efb
    FCOMPP                              ; 00458efe
    FNSTSW AX                           ; 00458f00
    SAHF                                ; 00458f02
    JA 0x00459767                       ; 00458f03
        ;   XREF to: 00459767 (CONDITIONAL_JUMP)  ; LAB_00459767
    MOV EAX,dword ptr [EBX + 0x2698]    ; 00458f09
    TEST EAX,EAX                        ; 00458f0f
    JNZ 0x00458f96                      ; 00458f11
        ;   XREF to: 00458f96 (CONDITIONAL_JUMP)  ; LAB_00458f96
    XOR EDX,EDX                         ; 00458f17
        ;   Label: LAB_00458f17
    MOV dword ptr [ESP + 0x17c],EDX     ; 00458f19
    MOV dword ptr [ESP + 0x180],EDX     ; 00458f20
    MOV EAX,[0x0061b5a8]                ; 00458f27 | g_CDemonSetPtr
        ;   Label: LAB_00458f27
    MOV ESI,dword ptr [ESP + 0x17c]     ; 00458f2c
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 00458f33
    JGE 0x00459459                      ; 00458f39
        ;   XREF to: 00459459 (CONDITIONAL_JUMP)  ; LAB_00459459
    MOV ESI,dword ptr [ESP + 0x180]     ; 00458f3f
    MOV ECX,dword ptr [0x01510e14]      ; 00458f46 | g_CActorDestinationClassInfo.name_hash
    ADD EAX,ESI                         ; 00458f4c
    PUSH ECX                            ; 00458f4e
    MOV EDI,dword ptr [EAX + 0x14d168]  ; 00458f4f
    PUSH EDI                            ; 00458f55
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00458f56
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x17c],EAX     ; 00458f5b
    ADD ESP,0x8                         ; 00458f62
    MOV dword ptr [ESP + 0x154],EAX     ; 00458f65
    TEST EAX,EAX                        ; 00458f6c
    JNZ 0x00459274                      ; 00458f6e
        ;   XREF to: 00459274 (CONDITIONAL_JUMP)  ; LAB_00459274
    MOV ESI,dword ptr [ESP + 0x17c]     ; 00458f74
        ;   Label: LAB_00458f74
    MOV ECX,dword ptr [ESP + 0x180]     ; 00458f7b
    INC ESI                             ; 00458f82
    ADD ECX,0x4                         ; 00458f83
    MOV dword ptr [ESP + 0x17c],ESI     ; 00458f86
    MOV dword ptr [ESP + 0x180],ECX     ; 00458f8d
    JMP 0x00458f27                      ; 00458f94
        ;   XREF to: 00458f27 (UNCONDITIONAL_JUMP)  ; LAB_00458f27
    PUSH EBX                            ; 00458f96
        ;   Label: LAB_00458f96
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 00458f97
    PUSH EAX                            ; 00458f9d
    CALL dword ptr [ESI + 0x8c]         ; 00458f9e
    ADD ESP,0x8                         ; 00458fa4
    CMP EAX,0x4                         ; 00458fa7
    SETZ AL                             ; 00458faa
    AND EAX,0xff                        ; 00458fad
    JZ 0x00458f17                       ; 00458fb2
        ;   XREF to: 00458f17 (CONDITIONAL_JUMP)  ; LAB_00458f17
    XOR EDI,EDI                         ; 00458fb8
    MOV dword ptr [ESP + 0x168],EDI     ; 00458fba
    MOV dword ptr [ESP + 0x164],EDI     ; 00458fc1
    MOV EAX,[0x0061b5a8]                ; 00458fc8 | g_CDemonSetPtr
        ;   Label: LAB_00458fc8
    MOV ESI,dword ptr [ESP + 0x168]     ; 00458fcd
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 00458fd4
    JGE 0x00459459                      ; 00458fda
        ;   XREF to: 00459459 (CONDITIONAL_JUMP)  ; LAB_00459459
    MOV ECX,dword ptr [ESP + 0x164]     ; 00458fe0
    MOV EDX,dword ptr [0x01510e14]      ; 00458fe7 | g_CActorDestinationClassInfo.name_hash
    ADD EAX,ECX                         ; 00458fed
    PUSH EDX                            ; 00458fef
    MOV ESI,dword ptr [EAX + 0x14d168]  ; 00458ff0
    PUSH ESI                            ; 00458ff6
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00458ff7
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x178],EAX     ; 00458ffc
    ADD ESP,0x8                         ; 00459003
    MOV dword ptr [ESP + 0x158],EAX     ; 00459006
    TEST EAX,EAX                        ; 0045900d
    JNZ 0x00459033                      ; 0045900f
        ;   XREF to: 00459033 (CONDITIONAL_JUMP)  ; LAB_00459033
    MOV EDI,dword ptr [ESP + 0x168]     ; 00459011
        ;   Label: LAB_00459011
    MOV ESI,dword ptr [ESP + 0x164]     ; 00459018
    INC EDI                             ; 0045901f
    ADD ESI,0x4                         ; 00459020
    MOV dword ptr [ESP + 0x168],EDI     ; 00459023
    MOV dword ptr [ESP + 0x164],ESI     ; 0045902a
    JMP 0x00458fc8                      ; 00459031
        ;   XREF to: 00458fc8 (UNCONDITIONAL_JUMP)  ; LAB_00458fc8
    MOV EAX,dword ptr [EBX + 0x2698]    ; 00459033
        ;   Label: LAB_00459033
    PUSH EAX                            ; 00459039
    MOV EDX,dword ptr [ESP + 0x174]     ; 0045903a
    PUSH EDX                            ; 00459041
    CALL core_dest.cpp_CActorDestination_acceptsActor_FUN_004473f0 ; 00459042
        ;   XREF to: 004473f0 (UNCONDITIONAL_CALL)  ; int core_dest.cpp_CActorDestination_acceptsActor_FUN_004473f0(CActorDestination * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00459047
    TEST EAX,EAX                        ; 0045904a
    JZ 0x00459011                       ; 0045904c
        ;   XREF to: 00459011 (CONDITIONAL_JUMP)  ; LAB_00459011
    MOV EAX,dword ptr [EBX + 0x2698]    ; 0045904e
    ADD EAX,0x20                        ; 00459054
    PUSH EAX                            ; 00459057
    PUSH EBX                            ; 00459058
    LEA ESI,[ESP + 0x130]               ; 00459059
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408de0 ; 00459060
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408de0(CDemonActor * this_ptr, CVector3f * input_world_point, CVector3f * output_local_point)
    ADD ESP,0x8                         ; 00459065
    LEA EDI,[ESP + 0x110]               ; 00459068
    MOV EAX,dword ptr [ESP + 0x170]     ; 0045906f
    LEA ESI,[ESP + 0x128]               ; 00459076
    ADD EAX,0x20                        ; 0045907d
    MOVSD ES:EDI,ESI                    ; 00459080
    MOVSD ES:EDI,ESI                    ; 00459081
    MOVSD ES:EDI,ESI                    ; 00459082
    PUSH EAX                            ; 00459083
    LEA ESI,[ESP + 0x108]               ; 00459084
    PUSH EBX                            ; 0045908b
    LEA EDI,[ESP + 0x88]                ; 0045908c
    MOV dword ptr [ESP + 0x164],EAX     ; 00459093
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408de0 ; 0045909a
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408de0(CDemonActor * this_ptr, CVector3f * input_world_point, CVector3f * output_local_point)
    LEA ESI,[ESP + 0x10c]               ; 0045909f
    ADD ESP,0x8                         ; 004590a6
    MOVSD ES:EDI,ESI                    ; 004590a9
    MOVSD ES:EDI,ESI                    ; 004590aa
    MOVSD ES:EDI,ESI                    ; 004590ab
    FLD float ptr [ESP + 0x80]          ; 004590ac
    FLD float ptr [ESP + 0x84]          ; 004590b3
    FLD float ptr [ESP + 0x88]          ; 004590ba
    LEA EDI,[ESP + 0x2c]                ; 004590c1
    LEA ESI,[ESP + 0x20]                ; 004590c5
    FXCH ST2                            ; 004590c9
    FSUB float ptr [ESP + 0x110]        ; 004590cb
    FXCH                                ; 004590d2
    FSUB float ptr [ESP + 0x114]        ; 004590d4
    FXCH ST2                            ; 004590db
    FSUB float ptr [ESP + 0x118]        ; 004590dd
    FXCH                                ; 004590e4
    FSTP float ptr [ESP + 0x20]         ; 004590e6
    FXCH                                ; 004590ea
    FSTP float ptr [ESP + 0x24]         ; 004590ec
    FSTP float ptr [ESP + 0x28]         ; 004590f0
    MOVSD ES:EDI,ESI                    ; 004590f4
    MOVSD ES:EDI,ESI                    ; 004590f5
    MOVSD ES:EDI,ESI                    ; 004590f6
    FLDZ                                ; 004590f7
    FCOMP float ptr [ESP + 0x34]        ; 004590f9
    FNSTSW AX                           ; 004590fd
    SAHF                                ; 004590ff
    JNC 0x00459011                      ; 00459100
        ;   XREF to: 00459011 (CONDITIONAL_JUMP)  ; LAB_00459011
    FLD float ptr [ESP + 0x34]          ; 00459106
    FCOMP double ptr [0x005d040f]       ; 0045910a | g_DOUBLE_005d040f
    FNSTSW AX                           ; 00459110
    SAHF                                ; 00459112
    JNC 0x00459011                      ; 00459113
        ;   XREF to: 00459011 (CONDITIONAL_JUMP)  ; LAB_00459011
    FLD float ptr [ESP + 0x2c]          ; 00459119
    FABS                                ; 0045911d
    FCOMP double ptr [0x005d0417]       ; 0045911f | g_DOUBLE_005d0417
    FNSTSW AX                           ; 00459125
    SAHF                                ; 00459127
    JNC 0x00459011                      ; 00459128
        ;   XREF to: 00459011 (CONDITIONAL_JUMP)  ; LAB_00459011
    FLD float ptr [ESP + 0x30]          ; 0045912e
    FLDZ                                ; 00459132
    FXCH                                ; 00459134
    FSTP double ptr [ESP + 0x8]         ; 00459136
    FCOMP double ptr [ESP + 0x8]        ; 0045913a
    FNSTSW AX                           ; 0045913e
    SAHF                                ; 00459140
    JNC 0x00459011                      ; 00459141
        ;   XREF to: 00459011 (CONDITIONAL_JUMP)  ; LAB_00459011
    FLD double ptr [ESP + 0x8]          ; 00459147
    FCOMP double ptr [0x005d041f]       ; 0045914b | g_DOUBLE_005d041f
    FNSTSW AX                           ; 00459151
    SAHF                                ; 00459153
    JNC 0x00459011                      ; 00459154
        ;   XREF to: 00459011 (CONDITIONAL_JUMP)  ; LAB_00459011
    PUSH 0x1                            ; 0045915a
    PUSH 0x1a                           ; 0045915c
    LEA EAX,[EBX + 0x2b4]               ; 0045915e
    PUSH EAX                            ; 00459164
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00459165
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045916a
    MOV ESI,dword ptr [ESP + 0x15c]     ; 0045916d
    PUSH ESI                            ; 00459174
    PUSH EBX                            ; 00459175
    LEA ESI,[ESP + 0x4c]                ; 00459176
    LEA EDI,[ESP + 0x40]                ; 0045917a
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408de0 ; 0045917e
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408de0(CDemonActor * this_ptr, CVector3f * input_world_point, CVector3f * output_local_point)
    LEA ESI,[ESP + 0x4c]                ; 00459183
    ADD ESP,0x8                         ; 00459187
    MOVSD ES:EDI,ESI                    ; 0045918a
    MOVSD ES:EDI,ESI                    ; 0045918b
    MOVSD ES:EDI,ESI                    ; 0045918c
    LEA EAX,[ESP + 0x38]                ; 0045918d
    LEA ESI,[EBX + 0x25700]             ; 00459191
    CMP ESI,EAX                         ; 00459197
    JZ 0x004591af                       ; 00459199
        ;   XREF to: 004591af (CONDITIONAL_JUMP)  ; LAB_004591af
    MOV EAX,dword ptr [ESP + 0x38]      ; 0045919b
    MOV dword ptr [ESI],EAX             ; 0045919f
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004591a1
    MOV dword ptr [ESI + 0x4],EAX       ; 004591a5
    MOV EAX,dword ptr [ESP + 0x40]      ; 004591a8
    MOV dword ptr [ESI + 0x8],EAX       ; 004591ac
    FLD float ptr [EBX + 0x2571c]       ; 004591af
        ;   Label: LAB_004591af
    MOV EDI,dword ptr [EBX + 0x2698]    ; 004591b5
    FSUB float ptr [EBX + 0x25710]      ; 004591bb
    PUSH EDI                            ; 004591c1
    FSTP float ptr [ESP + 0x150]        ; 004591c2
    CALL core_doc.cpp_getCarriedObjectVerticalOffset_FUN_0044ffd0 ; 004591c9
        ;   XREF to: 0044ffd0 (UNCONDITIONAL_CALL)  ; float core_doc.cpp_getCarriedObjectVerticalOffset_FUN_0044ffd0(CDemonActor * object)
    MOV dword ptr [ESP + 0x188],EAX     ; 004591ce
    FLD float ptr [ESP + 0x188]         ; 004591d5
    ADD ESP,0x4                         ; 004591dc
    FSUBR float ptr [ESP + 0x14c]       ; 004591df
    FADD float ptr [EBX + 0x25704]      ; 004591e6
    MOV EAX,dword ptr [EBX + 0x256a4]   ; 004591ec
    FSTP float ptr [EBX + 0x25704]      ; 004591f2
    TEST EAX,EAX                        ; 004591f8
    JZ 0x00459216                       ; 004591fa
        ;   XREF to: 00459216 (CONDITIONAL_JUMP)  ; LAB_00459216
    PUSH 0x100f                         ; 004591fc
    PUSH EAX                            ; 00459201
    PUSH 0x5d03bf                       ; 00459202
    MOV ECX,dword ptr [0x006138e0]      ; 00459207 | g_CEditorToolsPtr
    PUSH ECX                            ; 0045920d
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0 ; 0045920e
        ;   XREF to: 0047bdf0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 00459213
    MOV ESI,dword ptr [ESP + 0x158]     ; 00459216
        ;   Label: LAB_00459216
    LEA EAX,[EBX + 0x25620]             ; 0045921d
    ADD ESI,0x20                        ; 00459223
    MOV dword ptr [EBX + 0x256a4],0x2   ; 00459226
    CMP EAX,ESI                         ; 00459230
    JZ 0x00459244                       ; 00459232
        ;   XREF to: 00459244 (CONDITIONAL_JUMP)  ; LAB_00459244
    MOV EDX,dword ptr [ESI]             ; 00459234
    MOV dword ptr [EAX],EDX             ; 00459236
    MOV EDX,dword ptr [ESI + 0x4]       ; 00459238
    MOV dword ptr [EAX + 0x4],EDX       ; 0045923b
    MOV EDX,dword ptr [ESI + 0x8]       ; 0045923e
    MOV dword ptr [EAX + 0x8],EDX       ; 00459241
    MOV EAX,dword ptr [ESP + 0x158]     ; 00459244
        ;   Label: LAB_00459244
    ADD EBX,0x2562c                     ; 0045924b
    ADD EAX,0x30                        ; 00459251
    CMP EBX,EAX                         ; 00459254
    JZ 0x00459268                       ; 00459256
        ;   XREF to: 00459268 (CONDITIONAL_JUMP)  ; LAB_00459268
    MOV EDX,dword ptr [EAX]             ; 00459258
    MOV dword ptr [EBX],EDX             ; 0045925a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045925c
    MOV dword ptr [EBX + 0x4],EDX       ; 0045925f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00459262
    MOV dword ptr [EBX + 0x8],EDX       ; 00459265
    MOV EAX,0x1                         ; 00459268
        ;   Label: LAB_00459268
    MOV ESP,EBP                         ; 0045926d
    POP EBP                             ; 0045926f
    POP EDI                             ; 00459270
    POP ESI                             ; 00459271
    POP EBX                             ; 00459272
    RET                                 ; 00459273
    MOV EDX,dword ptr [EBX + 0x2698]    ; 00459274
        ;   Label: LAB_00459274
    PUSH EDX                            ; 0045927a
    PUSH EAX                            ; 0045927b
    CALL core_dest.cpp_CActorDestination_acceptsActor_FUN_004473f0 ; 0045927c
        ;   XREF to: 004473f0 (UNCONDITIONAL_CALL)  ; int core_dest.cpp_CActorDestination_acceptsActor_FUN_004473f0(CActorDestination * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00459281
    TEST EAX,EAX                        ; 00459284
    JZ 0x00458f74                       ; 00459286
        ;   XREF to: 00458f74 (CONDITIONAL_JUMP)  ; LAB_00458f74
    MOV EAX,dword ptr [EBX + 0x2698]    ; 0045928c
    ADD EAX,0x20                        ; 00459292
    PUSH EAX                            ; 00459295
    PUSH EBX                            ; 00459296
    LEA ESI,[ESP + 0x70]                ; 00459297
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408de0 ; 0045929b
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408de0(CDemonActor * this_ptr, CVector3f * input_world_point, CVector3f * output_local_point)
    ADD ESP,0x8                         ; 004592a0
    LEA EDI,[ESP + 0xd4]                ; 004592a3
    MOV EAX,dword ptr [ESP + 0x174]     ; 004592aa
    LEA ESI,[ESP + 0x68]                ; 004592b1
    ADD EAX,0x20                        ; 004592b5
    MOVSD ES:EDI,ESI                    ; 004592b8
    MOVSD ES:EDI,ESI                    ; 004592b9
    MOVSD ES:EDI,ESI                    ; 004592ba
    PUSH EAX                            ; 004592bb
    LEA ESI,[ESP + 0x138]               ; 004592bc
    PUSH EBX                            ; 004592c3
    LEA EDI,[ESP + 0xc4]                ; 004592c4
    MOV dword ptr [ESP + 0x168],EAX     ; 004592cb
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408de0 ; 004592d2
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408de0(CDemonActor * this_ptr, CVector3f * input_world_point, CVector3f * output_local_point)
    LEA ESI,[ESP + 0x13c]               ; 004592d7
    ADD ESP,0x8                         ; 004592de
    MOVSD ES:EDI,ESI                    ; 004592e1
    MOVSD ES:EDI,ESI                    ; 004592e2
    MOVSD ES:EDI,ESI                    ; 004592e3
    FLD float ptr [ESP + 0xbc]          ; 004592e4
    FLD float ptr [ESP + 0xc0]          ; 004592eb
    FLD float ptr [ESP + 0xc4]          ; 004592f2
    LEA EDI,[ESP + 0x8c]                ; 004592f9
    LEA ESI,[ESP + 0x140]               ; 00459300
    FXCH ST2                            ; 00459307
    FSUB float ptr [ESP + 0xd4]         ; 00459309
    FXCH                                ; 00459310
    FSUB float ptr [ESP + 0xd8]         ; 00459312
    FXCH ST2                            ; 00459319
    FSUB float ptr [ESP + 0xdc]         ; 0045931b
    FXCH                                ; 00459322
    FSTP float ptr [ESP + 0x140]        ; 00459324
    FXCH                                ; 0045932b
    FSTP float ptr [ESP + 0x144]        ; 0045932d
    FSTP float ptr [ESP + 0x148]        ; 00459334
    MOVSD ES:EDI,ESI                    ; 0045933b
    MOVSD ES:EDI,ESI                    ; 0045933c
    MOVSD ES:EDI,ESI                    ; 0045933d
    FLD float ptr [ESP + 0x90]          ; 0045933e
    FLD float ptr [ESP + 0x94]          ; 00459345
    FSTP double ptr [ESP]               ; 0045934c
    MOV EDI,dword ptr [ESP + 0x4]       ; 0045934f
    MOV EAX,dword ptr [ESP]             ; 00459353
    PUSH EDI                            ; 00459356
    FSTP double ptr [ESP + 0x1c]        ; 00459357
    PUSH EAX                            ; 0045935b
    MOV EDX,dword ptr [ESP + 0x24]      ; 0045935c
    MOV ECX,dword ptr [ESP + 0x20]      ; 00459360
    PUSH EDX                            ; 00459364
    FLD float ptr [ESP + 0x98]          ; 00459365
    PUSH ECX                            ; 0045936c
    FSTP double ptr [ESP + 0x20]        ; 0045936d
    MOV ESI,dword ptr [ESP + 0x24]      ; 00459371
    PUSH ESI                            ; 00459375
    MOV EDI,dword ptr [ESP + 0x24]      ; 00459376
    PUSH EDI                            ; 0045937a
    PUSH 0x5d03e2                       ; 0045937b
    MOV EAX,[0x00609ed0]                ; 00459380 | g_CConsolePtr
    PUSH EAX                            ; 00459385
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 00459386
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0x20                        ; 0045938b
    FLDZ                                ; 0045938e
    FCOMP float ptr [ESP + 0x94]        ; 00459390
    FNSTSW AX                           ; 00459397
    SAHF                                ; 00459399
    JNC 0x00458f74                      ; 0045939a
        ;   XREF to: 00458f74 (CONDITIONAL_JUMP)  ; LAB_00458f74
    FLD double ptr [ESP]                ; 004593a0
    FCOMP double ptr [0x005d040f]       ; 004593a3 | g_DOUBLE_005d040f
    FNSTSW AX                           ; 004593a9
    SAHF                                ; 004593ab
    JNC 0x00458f74                      ; 004593ac
        ;   XREF to: 00458f74 (CONDITIONAL_JUMP)  ; LAB_00458f74
    FLD double ptr [ESP + 0x10]         ; 004593b2
    FABS                                ; 004593b6
    FCOMP double ptr [0x005d0417]       ; 004593b8 | g_DOUBLE_005d0417
    FNSTSW AX                           ; 004593be
    SAHF                                ; 004593c0
    JNC 0x00458f74                      ; 004593c1
        ;   XREF to: 00458f74 (CONDITIONAL_JUMP)  ; LAB_00458f74
    FLDZ                                ; 004593c7
    FCOMP double ptr [ESP + 0x18]       ; 004593c9
    FNSTSW AX                           ; 004593cd
    SAHF                                ; 004593cf
    JNC 0x00458f74                      ; 004593d0
        ;   XREF to: 00458f74 (CONDITIONAL_JUMP)  ; LAB_00458f74
    FLD double ptr [ESP + 0x18]         ; 004593d6
    FCOMP double ptr [0x005d041f]       ; 004593da | g_DOUBLE_005d041f
    FNSTSW AX                           ; 004593e0
    SAHF                                ; 004593e2
    JNC 0x00458f74                      ; 004593e3
        ;   XREF to: 00458f74 (CONDITIONAL_JUMP)  ; LAB_00458f74
    MOV EDX,dword ptr [ESP + 0x160]     ; 004593e9
    LEA EAX,[EBX + 0x25620]             ; 004593f0
    MOV dword ptr [EBX + 0x256a4],0x2   ; 004593f6
    CMP EAX,EDX                         ; 00459400
    JZ 0x00459416                       ; 00459402
        ;   XREF to: 00459416 (CONDITIONAL_JUMP)  ; LAB_00459416
    MOV ESI,EDX                         ; 00459404
    MOV EDX,dword ptr [ESI]             ; 00459406
    MOV dword ptr [EAX],EDX             ; 00459408
    MOV EDX,dword ptr [ESI + 0x4]       ; 0045940a
    MOV dword ptr [EAX + 0x4],EDX       ; 0045940d
    MOV EDX,dword ptr [ESI + 0x8]       ; 00459410
    MOV dword ptr [EAX + 0x8],EDX       ; 00459413
    MOV ESI,dword ptr [ESP + 0x154]     ; 00459416
        ;   Label: LAB_00459416
    LEA EAX,[EBX + 0x2562c]             ; 0045941d
    ADD ESI,0x30                        ; 00459423
    CMP EAX,ESI                         ; 00459426
    JZ 0x0045943a                       ; 00459428
        ;   XREF to: 0045943a (CONDITIONAL_JUMP)  ; LAB_0045943a
    MOV EDX,dword ptr [ESI]             ; 0045942a
    MOV dword ptr [EAX],EDX             ; 0045942c
    MOV EDX,dword ptr [ESI + 0x4]       ; 0045942e
    MOV dword ptr [EAX + 0x4],EDX       ; 00459431
    MOV EDX,dword ptr [ESI + 0x8]       ; 00459434
    MOV dword ptr [EAX + 0x8],EDX       ; 00459437
    PUSH 0x1                            ; 0045943a
        ;   Label: LAB_0045943a
    PUSH 0x16                           ; 0045943c
    ADD EBX,0x2b4                       ; 0045943e
    PUSH EBX                            ; 00459444
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00459445
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 0045944a
    ADD ESP,0xc                         ; 0045944f
    MOV ESP,EBP                         ; 00459452
    POP EBP                             ; 00459454
    POP EDI                             ; 00459455
    POP ESI                             ; 00459456
    POP EBX                             ; 00459457
    RET                                 ; 00459458
    PUSH EBX                            ; 00459459
        ;   Label: LAB_00459459
    MOV EDI,dword ptr [0x0061b5a8]      ; 0045945a | g_CDemonSetPtr
    PUSH EDI                            ; 00459460
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 00459461
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00459466
    MOV EAX,dword ptr [EBX + 0x2698]    ; 00459469
    PUSH EAX                            ; 0045946f
    MOV EDX,dword ptr [0x0061b5a8]      ; 00459470 | g_CDemonSetPtr
    PUSH EDX                            ; 00459476
    LEA EDI,[ESP + 0x64]                ; 00459477
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0045947b
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    MOV ESI,dword ptr [EBX + 0x2698]    ; 00459480
    LEA EAX,[ESP + 0xac]                ; 00459486
    ADD ESP,0x8                         ; 0045948d
    LEA ESI,[ESI + 0x20]                ; 00459490
    XOR ECX,ECX                         ; 00459493
    PUSH EAX                            ; 00459495
    MOVSD ES:EDI,ESI                    ; 00459496
    MOVSD ES:EDI,ESI                    ; 00459497
    MOVSD ES:EDI,ESI                    ; 00459498
    PUSH EBX                            ; 00459499
    MOV EDI,0x3f800000                  ; 0045949a
    LEA ESI,[ESP + 0x58]                ; 0045949f
    MOV dword ptr [ESP + 0xac],ECX      ; 004594a3
    MOV dword ptr [ESP + 0xb0],ECX      ; 004594aa
    MOV dword ptr [ESP + 0xb4],EDI      ; 004594b1
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408cf0 ; 004594b8
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408cf0(CDemonActor * this_ptr, CVector3f * input, CVector3f * output)
    LEA EDI,[ESP + 0xa0]                ; 004594bd
    LEA ESI,[ESP + 0x58]                ; 004594c4
    ADD ESP,0x8                         ; 004594c8
    MOV ECX,0x3fc00000                  ; 004594cb
    FLD float ptr [ESP + 0x5c]          ; 004594d0
    FLD float ptr [ESP + 0x60]          ; 004594d4
    MOVSD ES:EDI,ESI                    ; 004594d8
    MOVSD ES:EDI,ESI                    ; 004594d9
    MOVSD ES:EDI,ESI                    ; 004594da
    FLD float ptr [ESP + 0x64]          ; 004594db
    LEA ESI,[ESP + 0x11c]               ; 004594df
    FXCH                                ; 004594e6
    FADD float ptr [ESP + 0x9c]         ; 004594e8
    MOV EAX,dword ptr [EBX + 0x24]      ; 004594ef
    FSTP float ptr [ESP + 0x60]         ; 004594f2
    MOV dword ptr [ESP + 0x60],EAX      ; 004594f6
    XOR EAX,EAX                         ; 004594fa
    FXCH                                ; 004594fc
    FADD float ptr [ESP + 0x98]         ; 004594fe
    MOV dword ptr [ESP + 0xe0],EAX      ; 00459505
    MOV dword ptr [ESP + 0xe4],EAX      ; 0045950c
    LEA EAX,[ESP + 0xe0]                ; 00459513
    FXCH                                ; 0045951a
    FADD float ptr [ESP + 0xa0]         ; 0045951c
    PUSH EAX                            ; 00459523
    FXCH                                ; 00459524
    FSTP float ptr [ESP + 0x60]         ; 00459526
    PUSH EBX                            ; 0045952a
    FSTP float ptr [ESP + 0x6c]         ; 0045952b
    MOV dword ptr [ESP + 0xf0],ECX      ; 0045952f
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408cf0 ; 00459536
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408cf0(CDemonActor * this_ptr, CVector3f * input, CVector3f * output)
    ADD ESP,0x8                         ; 0045953b
    LEA EDI,[ESP + 0xf8]                ; 0045953e
    PUSH 0x40400000                     ; 00459545
    LEA ESI,[ESP + 0x120]               ; 0045954a
    PUSH 0x3dcccccd                     ; 00459551
    MOVSD ES:EDI,ESI                    ; 00459556
    MOVSD ES:EDI,ESI                    ; 00459557
    MOVSD ES:EDI,ESI                    ; 00459558
    PUSH 0x3f800000                     ; 00459559
    PUSH dword ptr [ESP + 0x10c]        ; 0045955e
    PUSH dword ptr [ESP + 0x108]        ; 00459565
    PUSH dword ptr [ESP + 0x78]         ; 0045956c
    MOV ESI,dword ptr [0x0061b5a8]      ; 00459570 | g_CDemonSetPtr
    PUSH dword ptr [ESP + 0x74]         ; 00459576
    PUSH ESI                            ; 0045957a
    CALL core_setcolid.cpp_CDemonSet_testCylinderCollision_FUN_00537030 ; 0045957b
        ;   XREF to: 00537030 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_testCylinderCollision_FUN_00537030(CDemonSet * this_ptr, float start_x, float start_z, float dir_x, ...)
    MOV dword ptr [ESP + 0x1a4],EAX     ; 00459580
    FLD float ptr [ESP + 0x1a4]         ; 00459587
    FLD1                                ; 0045958e
    ADD ESP,0x20                        ; 00459590
    FCOMPP                              ; 00459593
    FNSTSW AX                           ; 00459595
    SAHF                                ; 00459597
    JA 0x004596a2                       ; 00459598
        ;   XREF to: 004596a2 (CONDITIONAL_JUMP)  ; LAB_004596a2
    FLD float ptr [ESP + 0x5c]          ; 0045959e
    FLD float ptr [ESP + 0x60]          ; 004595a2
    FLD float ptr [ESP + 0x64]          ; 004595a6
    PUSH 0x3f000000                     ; 004595aa
    LEA EDI,[ESP + 0xf0]                ; 004595af
    LEA ESI,[ESP + 0xb4]                ; 004595b6
    LEA EAX,[ESP + 0xf0]                ; 004595bd
    FXCH ST2                            ; 004595c4
    FADD float ptr [ESP + 0xfc]         ; 004595c6
    FXCH                                ; 004595cd
    FADD float ptr [ESP + 0x100]        ; 004595cf
    FXCH ST2                            ; 004595d6
    FADD float ptr [ESP + 0x104]        ; 004595d8
    FXCH                                ; 004595df
    FSTP float ptr [ESP + 0xb4]         ; 004595e1
    FXCH                                ; 004595e8
    FSTP float ptr [ESP + 0xb8]         ; 004595ea
    FSTP float ptr [ESP + 0xbc]         ; 004595f1
    MOVSD ES:EDI,ESI                    ; 004595f8
    MOVSD ES:EDI,ESI                    ; 004595f9
    MOVSD ES:EDI,ESI                    ; 004595fa
    PUSH EAX                            ; 004595fb
    MOV EDI,dword ptr [0x0061b5a8]      ; 004595fc | g_CDemonSetPtr
    PUSH EDI                            ; 00459602
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_00534ea0 ; 00459603
        ;   XREF to: 00534ea0 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_00534ea0(CDemonSet * this_ptr, CVector3f * position, float radius)
    MOV dword ptr [ESP + 0x190],EAX     ; 00459608
    FLD float ptr [ESP + 0x190]         ; 0045960f
    ADD ESP,0xc                         ; 00459616
    MOV EAX,[0x0061b5a8]                ; 00459619 | g_CDemonSetPtr
    PUSH EAX                            ; 0045961e
    FSTP float ptr [ESP + 0x154]        ; 0045961f
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 00459626
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0045962b
    FLD float ptr [ESP + 0x150]         ; 0045962e
    FSUB float ptr [EBX + 0x24]         ; 00459635
    FABS                                ; 00459638
    FLD1                                ; 0045963a
    FCOMPP                              ; 0045963c
    FNSTSW AX                           ; 0045963e
    SAHF                                ; 00459640
    JC 0x00459767                       ; 00459641
        ;   XREF to: 00459767 (CONDITIONAL_JUMP)  ; LAB_00459767
    XOR EDX,EDX                         ; 00459647
    MOV dword ptr [ESP + 0x16c],EDX     ; 00459649
    MOV dword ptr [ESP + 0x178],EDX     ; 00459650
    MOV EAX,[0x0061b5a8]                ; 00459657 | g_CDemonSetPtr
        ;   Label: LAB_00459657
    MOV ESI,dword ptr [ESP + 0x16c]     ; 0045965c
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 00459663
    JL 0x004596db                       ; 00459669
        ;   XREF to: 004596db (CONDITIONAL_JUMP)  ; LAB_004596db
    MOV EAX,dword ptr [EBX + 0x2698]    ; 0045966b
    MOV dword ptr [EBX + 0x256a4],0x6   ; 00459671
    TEST EAX,EAX                        ; 0045967b
    JNZ 0x00459770                      ; 0045967d
        ;   XREF to: 00459770 (CONDITIONAL_JUMP)  ; LAB_00459770
    PUSH 0x1                            ; 00459683
        ;   Label: LAB_00459683
    PUSH 0x14                           ; 00459685
    ADD EBX,0x2b4                       ; 00459687
        ;   Label: LAB_00459687
    PUSH EBX                            ; 0045968d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0045968e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00459693
    MOV EAX,0x1                         ; 00459696
    MOV ESP,EBP                         ; 0045969b
    POP EBP                             ; 0045969d
    POP EDI                             ; 0045969e
    POP ESI                             ; 0045969f
    POP EBX                             ; 004596a0
    RET                                 ; 004596a1
    MOV EBX,dword ptr [0x0061b5a8]      ; 004596a2 | g_CDemonSetPtr
        ;   Label: LAB_004596a2
    PUSH EBX                            ; 004596a8
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 004596a9
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004596ae
    JMP 0x00459767                      ; 004596b1
        ;   XREF to: 00459767 (UNCONDITIONAL_JUMP)  ; LAB_00459767
    MOV EAX,dword ptr [ESP + 0x16c]     ; 004596b6
        ;   Label: LAB_004596b6
    MOV EDI,dword ptr [ESP + 0x178]     ; 004596bd
    INC EAX                             ; 004596c4
    ADD EDI,0x4                         ; 004596c5
    MOV dword ptr [ESP + 0x16c],EAX     ; 004596c8
    MOV dword ptr [ESP + 0x178],EDI     ; 004596cf
    JMP 0x00459657                      ; 004596d6
        ;   XREF to: 00459657 (UNCONDITIONAL_JUMP)  ; LAB_00459657
    MOV ECX,dword ptr [ESP + 0x178]     ; 004596db
        ;   Label: LAB_004596db
    MOV EDX,dword ptr [0x007c2670]      ; 004596e2 | g_CCrateClassInfo.name_hash
    ADD EAX,ECX                         ; 004596e8
    PUSH EDX                            ; 004596ea
    MOV ESI,dword ptr [EAX + 0x14d168]  ; 004596eb
    PUSH ESI                            ; 004596f1
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004596f2
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004596f7
    TEST EAX,EAX                        ; 004596fa
    JZ 0x004596b6                       ; 004596fc
        ;   XREF to: 004596b6 (CONDITIONAL_JUMP)  ; LAB_004596b6
    FLD float ptr [EAX + 0x20]          ; 004596fe
    FLD float ptr [EAX + 0x24]          ; 00459701
    FLD float ptr [EAX + 0x28]          ; 00459704
    LEA EDI,[ESP + 0x74]                ; 00459707
    LEA ESI,[ESP + 0xc8]                ; 0045970b
    FXCH ST2                            ; 00459712
    FSUB float ptr [ESP + 0x5c]         ; 00459714
    FXCH                                ; 00459718
    FSUB float ptr [ESP + 0x60]         ; 0045971a
    FXCH ST2                            ; 0045971e
    FSUB float ptr [ESP + 0x64]         ; 00459720
    FXCH                                ; 00459724
    FSTP float ptr [ESP + 0xc8]         ; 00459726
    FXCH                                ; 0045972d
    FSTP float ptr [ESP + 0xcc]         ; 0045972f
    FSTP float ptr [ESP + 0xd0]         ; 00459736
    MOVSD ES:EDI,ESI                    ; 0045973d
    MOVSD ES:EDI,ESI                    ; 0045973e
    MOVSD ES:EDI,ESI                    ; 0045973f
    FLD float ptr [ESP + 0x78]          ; 00459740
    FMUL ST0                            ; 00459744
    FLD float ptr [ESP + 0x74]          ; 00459746
    FMUL ST0                            ; 0045974a
    FADDP                               ; 0045974c
    FLD float ptr [ESP + 0x7c]          ; 0045974e
    FMUL ST0                            ; 00459752
    FADDP                               ; 00459754
    FSQRT                               ; 00459756
    FCOMP double ptr [0x005d0417]       ; 00459758 | g_DOUBLE_005d0417
    FNSTSW AX                           ; 0045975e
    SAHF                                ; 00459760
    JNC 0x004596b6                      ; 00459761
        ;   XREF to: 004596b6 (CONDITIONAL_JUMP)  ; LAB_004596b6
    XOR EAX,EAX                         ; 00459767
        ;   Label: LAB_00459767
    MOV ESP,EBP                         ; 00459769
    POP EBP                             ; 0045976b
    POP EDI                             ; 0045976c
    POP ESI                             ; 0045976d
    POP EBX                             ; 0045976e
    RET                                 ; 0045976f
    PUSH EBX                            ; 00459770
        ;   Label: LAB_00459770
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 00459771
    PUSH EAX                            ; 00459777
    CALL dword ptr [ESI + 0x8c]         ; 00459778
    ADD ESP,0x8                         ; 0045977e
    CMP EAX,0x4                         ; 00459781
    SETZ AL                             ; 00459784
    AND EAX,0xff                        ; 00459787
    JZ 0x00459683                       ; 0045978c
        ;   XREF to: 00459683 (CONDITIONAL_JUMP)  ; LAB_00459683
    PUSH 0x1                            ; 00459792
    PUSH 0x19                           ; 00459794
    JMP 0x00459687                      ; 00459796
        ;   XREF to: 00459687 (UNCONDITIONAL_JUMP)  ; LAB_00459687

