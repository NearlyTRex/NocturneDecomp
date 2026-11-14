; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDoc * __cdecl core_doc_cpp_CDoc_ctor_FUN_004500d0(CDoc *this_ptr)
;
; Parameters:
; CDoc *           Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_doc.cpp_factoryFuncDoc_FUN_004500a0 at 004500b3
;
; Referenced Globals:
;   undefined4 DAT_005f5134
;
; Called Functions:
;   core_boxactor.cpp_CBoxActor_ctor_FUN_0041bd30
;   core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330
;   core_cloth.cpp_CClothList_add_FUN_005b15c0
;   core_hero.cpp_FUN_004ce240
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004500d0
        ;   Label: core_doc.cpp_CDoc_ctor_FUN_004500d0
    PUSH ESI                            ; 004500d1
    PUSH EDI                            ; 004500d2
    PUSH EBP                            ; 004500d3
    SUB ESP,0x24                        ; 004500d4
    MOV EBX,dword ptr [ESP + 0x38]      ; 004500d7
    PUSH EBX                            ; 004500db
    CALL core_hero.cpp_FUN_004ce240     ; 004500dc
        ;   XREF to: 004ce240 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ce240()
    ADD ESP,0x4                         ; 004500e1
    ADD EAX,0x259b4                     ; 004500e4
    PUSH EAX                            ; 004500e9
    CALL core_boxactor.cpp_CBoxActor_ctor_FUN_0041bd30 ; 004500ea
        ;   XREF to: 0041bd30 (UNCONDITIONAL_CALL)  ; CBoxActor * core_boxactor.cpp_CBoxActor_ctor_FUN_0041bd30(CBoxActor * this_ptr)
    LEA EBX,[EAX + 0xfffda64c]          ; 004500ef
    MOV dword ptr [EBX + 0x2b0],0x5f5174 ; 004500f5
    MOV dword ptr [EBX + 0x257ac],0x0   ; 004500ff
    MOV dword ptr [EBX + 0x25640],0x0   ; 00450109
    MOV dword ptr [EBX + 0x25644],0x0   ; 00450113
    MOV dword ptr [EBX + 0x25648],0x0   ; 0045011d
    MOV dword ptr [EBX + 0x2564c],0xbf060a92 ; 00450127
    MOV dword ptr [EBX + 0x2566c],0x0   ; 00450131
    MOV dword ptr [EBX + 0x25664],0x0   ; 0045013b
    MOV dword ptr [EBX + 0x2565c],0x0   ; 00450145
    MOV dword ptr [EBX + 0x25654],0x0   ; 0045014f
    MOV dword ptr [EBX + 0x25668],0x0   ; 00450159
    MOV dword ptr [EBX + 0x25670],0x0   ; 00450163
    MOV dword ptr [EBX + 0x2568c],0x0   ; 0045016d
    MOV dword ptr [EBX + 0x25684],0x0   ; 00450177
    MOV dword ptr [EBX + 0x2567c],0x0   ; 00450181
    MOV dword ptr [EBX + 0x25674],0x0   ; 0045018b
    MOV dword ptr [EBX + 0x25688],0x0   ; 00450195
    MOV dword ptr [EBX + 0x25690],0x0   ; 0045019f
    MOV dword ptr [EBX + 0x256f4],0x0   ; 004501a9
    MOV dword ptr [EBX + 0x25694],0x0   ; 004501b3
    MOV dword ptr [EBX + 0x2569c],0x0   ; 004501bd
    MOV dword ptr [EBX + 0x256a8],0x0   ; 004501c7
    MOV dword ptr [EBX + 0x256ac],0x0   ; 004501d1
    FLD float ptr [0x005f5134]          ; 004501db | DAT_005f5134
    MOV dword ptr [EBX + 0x25718],0xf149f2ca ; 004501e1
    ADD ESP,0x4                         ; 004501eb
    FSTP float ptr [EBX + 0x25650]      ; 004501ee
    MOV dword ptr [EBX + 0x25700],0xf149f2ca ; 004501f4
    PUSH 0x5cfb87                       ; 004501fe
    MOV dword ptr [EBX + 0x259b0],0x0   ; 00450203
    LEA ESI,[EBX + 0x2b4]               ; 0045020d
    FLD float ptr [EBX + 0x2565c]       ; 00450213
    FLD float ptr [EBX + 0x25654]       ; 00450219
    FLD float ptr [EBX + 0x2567c]       ; 0045021f
    FLD float ptr [EBX + 0x25674]       ; 00450225
    PUSH ESI                            ; 0045022b
    FXCH ST3                            ; 0045022c
    FSTP float ptr [EBX + 0x25660]      ; 0045022e
    FXCH                                ; 00450234
    FSTP float ptr [EBX + 0x25658]      ; 00450236
    FSTP float ptr [EBX + 0x25680]      ; 0045023c
    FSTP float ptr [EBX + 0x25678]      ; 00450242
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 00450248
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 0045024d
    PUSH ESI                            ; 00450250
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 00450251
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    MOV dword ptr [EBX + 0x2d04],0x0    ; 00450256
    MOV dword ptr [EBX + 0x25698],0x0   ; 00450260
    MOV dword ptr [EBX + 0x256b8],0x0   ; 0045026a
    LEA EAX,[EBX + 0x256e0]             ; 00450274
    MOV dword ptr [EBX + 0x256bc],0x0   ; 0045027a
    MOV dword ptr [EAX + 0x8],0x0       ; 00450284
    ADD ESP,0x4                         ; 0045028b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0045028e
    MOV dword ptr [EAX + 0x4],EDX       ; 00450291
    MOV EDX,dword ptr [EAX + 0x4]       ; 00450294
    MOV dword ptr [EAX],EDX             ; 00450297
    MOV dword ptr [EBX + 0x256ec],0xffffffff ; 00450299
    MOV dword ptr [EBX + 0x256a0],0x0   ; 004502a3
    PUSH 0x0                            ; 004502ad
    MOV dword ptr [EBX + 0x256c0],0x0   ; 004502af
    PUSH 0x5cfb91                       ; 004502b9
    MOV dword ptr [EBX + 0x256c4],0x0   ; 004502be
    PUSH 0x1                            ; 004502c8
    MOV dword ptr [EBX + 0x256a4],0x0   ; 004502ca
    PUSH 0x0                            ; 004502d4
    MOV dword ptr [EBX + 0x256f0],0x0   ; 004502d6
    PUSH EBX                            ; 004502e0
    MOV dword ptr [EBX + 0x256f8],0x0   ; 004502e1
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330 ; 004502eb
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 004502f0
    PUSH 0x0                            ; 004502f3
    PUSH 0x5cfba5                       ; 004502f5
    PUSH 0x2                            ; 004502fa
    PUSH 0x1                            ; 004502fc
    PUSH EBX                            ; 004502fe
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330 ; 004502ff
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00450304
    PUSH 0x0                            ; 00450307
    PUSH 0x5cfbb7                       ; 00450309
    PUSH 0x5                            ; 0045030e
    PUSH 0x0                            ; 00450310
    PUSH EBX                            ; 00450312
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330 ; 00450313
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00450318
    PUSH 0x0                            ; 0045031b
    PUSH 0x5cfbcc                       ; 0045031d
    PUSH 0x6                            ; 00450322
    PUSH 0x5                            ; 00450324
    PUSH EBX                            ; 00450326
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330 ; 00450327
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 0045032c
    PUSH 0x1                            ; 0045032f
    PUSH 0x5cfbe1                       ; 00450331
    PUSH 0x6                            ; 00450336
    PUSH 0xd                            ; 00450338
    PUSH EBX                            ; 0045033a
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330 ; 0045033b
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00450340
    PUSH 0x1                            ; 00450343
    PUSH 0x5cfbf5                       ; 00450345
    PUSH 0x6                            ; 0045034a
    PUSH 0xd                            ; 0045034c
    PUSH EBX                            ; 0045034e
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330 ; 0045034f
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00450354
    PUSH 0x1                            ; 00450357
    PUSH 0x5cfc09                       ; 00450359
    PUSH 0x6                            ; 0045035e
    PUSH 0xd                            ; 00450360
    PUSH EBX                            ; 00450362
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330 ; 00450363
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00450368
    PUSH 0x1                            ; 0045036b
    PUSH 0x5cfc1d                       ; 0045036d
    PUSH 0x6                            ; 00450372
    PUSH 0xd                            ; 00450374
    PUSH EBX                            ; 00450376
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330 ; 00450377
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 0045037c
    PUSH 0x1                            ; 0045037f
    PUSH 0x5cfc32                       ; 00450381
    PUSH 0x6                            ; 00450386
    PUSH 0xd                            ; 00450388
    PUSH EBX                            ; 0045038a
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330 ; 0045038b
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00450390
    PUSH 0x0                            ; 00450393
    PUSH 0x5cfc46                       ; 00450395
    PUSH 0x7                            ; 0045039a
    PUSH 0x7                            ; 0045039c
    PUSH EBX                            ; 0045039e
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330 ; 0045039f
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 004503a4
    PUSH 0x0                            ; 004503a7
    PUSH 0x5cfc55                       ; 004503a9
    PUSH 0x3                            ; 004503ae
    PUSH 0x0                            ; 004503b0
    PUSH EBX                            ; 004503b2
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330 ; 004503b3
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 004503b8
    PUSH 0x0                            ; 004503bb
    PUSH 0x5cfc6b                       ; 004503bd
    PUSH 0x3                            ; 004503c2
    PUSH 0x1                            ; 004503c4
    PUSH EBX                            ; 004503c6
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330 ; 004503c7
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 004503cc
    PUSH 0x1                            ; 004503cf
    PUSH 0x5cfc84                       ; 004503d1
    PUSH 0x4                            ; 004503d6
    PUSH 0x0                            ; 004503d8
    PUSH EBX                            ; 004503da
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330 ; 004503db
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 004503e0
    PUSH 0x1                            ; 004503e3
    PUSH 0x5cfc97                       ; 004503e5
    PUSH 0x0                            ; 004503ea
    PUSH 0x4                            ; 004503ec
    PUSH EBX                            ; 004503ee
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330 ; 004503ef
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 004503f4
    PUSH 0x0                            ; 004503f7
    PUSH 0x5cfcaa                       ; 004503f9
    PUSH 0x10                           ; 004503fe
    PUSH 0x1                            ; 00450400
    PUSH EBX                            ; 00450402
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330 ; 00450403
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00450408
    PUSH 0x1                            ; 0045040b
    PUSH 0x5cfcc6                       ; 0045040d
    PUSH 0x2                            ; 00450412
    PUSH 0x12                           ; 00450414
    PUSH EBX                            ; 00450416
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330 ; 00450417
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 0045041c
    PUSH 0x5cfcd4                       ; 0045041f
    LEA EAX,[EBX + 0x2d0c]              ; 00450424
    PUSH EAX                            ; 0045042a
    CALL core_cloth.cpp_CClothList_add_FUN_005b15c0 ; 0045042b
        ;   XREF to: 005b15c0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_add_FUN_005b15c0(CClothList * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x257a8],0x0   ; 00450430
    MOV dword ptr [EBX + 0x25758],0x0   ; 0045043a
    MOV dword ptr [EBX + 0x2578c],0x0   ; 00450444
    ADD ESP,0x8                         ; 0045044e
    MOV dword ptr [EBX + 0x259b0],0x0   ; 00450451
    LEA ESI,[EBX + 0x2514]              ; 0045045b
    LEA EDI,[EBX + 0x257b0]             ; 00450461
    PUSH EDI                            ; 00450467
    MOV AL,byte ptr [ESI]               ; 00450468
        ;   Label: LAB_00450468
    MOV byte ptr [EDI],AL               ; 0045046a
    CMP AL,0x0                          ; 0045046c
    JZ 0x00450480                       ; 0045046e
        ;   XREF to: 00450480 (CONDITIONAL_JUMP)  ; LAB_00450480
    MOV AL,byte ptr [ESI + 0x1]         ; 00450470
    ADD ESI,0x2                         ; 00450473
    MOV byte ptr [EDI + 0x1],AL         ; 00450476
    ADD EDI,0x2                         ; 00450479
    CMP AL,0x0                          ; 0045047c
    JNZ 0x00450468                      ; 0045047e
        ;   XREF to: 00450468 (CONDITIONAL_JUMP)  ; LAB_00450468
    POP EDI                             ; 00450480
        ;   Label: LAB_00450480
    LEA ESI,[EBX + 0x2d10]              ; 00450481
    MOV EDX,0xbde76c8b                  ; 00450487
    LEA EDI,[EBX + 0x258b0]             ; 0045048c
    MOV ECX,0x3ec3126f                  ; 00450492
    PUSH EDI                            ; 00450497
    MOV AL,byte ptr [ESI]               ; 00450498
        ;   Label: LAB_00450498
    MOV byte ptr [EDI],AL               ; 0045049a
    CMP AL,0x0                          ; 0045049c
    JZ 0x004504b0                       ; 0045049e
        ;   XREF to: 004504b0 (CONDITIONAL_JUMP)  ; LAB_004504b0
    MOV AL,byte ptr [ESI + 0x1]         ; 004504a0
    ADD ESI,0x2                         ; 004504a3
    MOV byte ptr [EDI + 0x1],AL         ; 004504a6
    ADD EDI,0x2                         ; 004504a9
    CMP AL,0x0                          ; 004504ac
    JNZ 0x00450498                      ; 004504ae
        ;   XREF to: 00450498 (CONDITIONAL_JUMP)  ; LAB_00450498
    POP EDI                             ; 004504b0
        ;   Label: LAB_004504b0
    MOV dword ptr [EBX + 0xfc],0x1      ; 004504b1
    MOV ESI,0x3e79db23                  ; 004504bb
    MOV dword ptr [EBX + 0x10a28],0x0   ; 004504c0
    MOV EAX,ESP                         ; 004504ca
    MOV dword ptr [ESP],EDX             ; 004504cc
    MOV dword ptr [ESP + 0x4],ECX       ; 004504cf
    LEA EDX,[EBX + 0x10a0c]             ; 004504d3
    MOV dword ptr [ESP + 0x8],ESI       ; 004504d9
    CMP EDX,EAX                         ; 004504dd
    JNZ 0x00450545                      ; 004504df
        ;   XREF to: 00450545 (CONDITIONAL_JUMP)  ; LAB_00450545
    MOV EBP,0x3ec3126f                  ; 004504e1
        ;   Label: LAB_004504e1
    MOV EAX,0x3e79db23                  ; 004504e6
    MOV EDI,0x3de76c8b                  ; 004504eb
    LEA EDX,[EBX + 0x10a18]             ; 004504f0
    MOV dword ptr [ESP + 0x1c],EBP      ; 004504f6
    MOV dword ptr [ESP + 0x20],EAX      ; 004504fa
    LEA EAX,[ESP + 0x18]                ; 004504fe
    MOV dword ptr [ESP + 0x18],EDI      ; 00450502
    CMP EDX,EAX                         ; 00450506
    JZ 0x0045051a                       ; 00450508
        ;   XREF to: 0045051a (CONDITIONAL_JUMP)  ; LAB_0045051a
    MOV dword ptr [EDX],EDI             ; 0045050a
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045050c
    MOV dword ptr [EDX + 0x4],EAX       ; 00450510
    MOV EAX,dword ptr [ESP + 0x20]      ; 00450513
    MOV dword ptr [EDX + 0x8],EAX       ; 00450517
    MOV EDX,0x3f000000                  ; 0045051a
        ;   Label: LAB_0045051a
    LEA EAX,[ESP + 0xc]                 ; 0045051f
    XOR ECX,ECX                         ; 00450523
    MOV dword ptr [ESP + 0xc],EDX       ; 00450525
    MOV dword ptr [ESP + 0x10],ECX      ; 00450529
    LEA EDX,[EBX + 0x10a3c]             ; 0045052d
    MOV dword ptr [ESP + 0x14],ECX      ; 00450533
    CMP EDX,EAX                         ; 00450537
    JNZ 0x0045055b                      ; 00450539
        ;   XREF to: 0045055b (CONDITIONAL_JUMP)  ; LAB_0045055b
    MOV EAX,EBX                         ; 0045053b
    ADD ESP,0x24                        ; 0045053d
    POP EBP                             ; 00450540
    POP EDI                             ; 00450541
    POP ESI                             ; 00450542
    POP EBX                             ; 00450543
    RET                                 ; 00450544
    MOV dword ptr [EDX],0xbde76c8b      ; 00450545
        ;   Label: LAB_00450545
    MOV EAX,dword ptr [ESP + 0x4]       ; 0045054b
    MOV dword ptr [EDX + 0x4],EAX       ; 0045054f
    MOV EAX,dword ptr [ESP + 0x8]       ; 00450552
    MOV dword ptr [EDX + 0x8],EAX       ; 00450556
    JMP 0x004504e1                      ; 00450559
        ;   XREF to: 004504e1 (UNCONDITIONAL_JUMP)  ; LAB_004504e1
    MOV dword ptr [EDX],0x3f000000      ; 0045055b
        ;   Label: LAB_0045055b
    MOV EAX,dword ptr [ESP + 0x10]      ; 00450561
    MOV dword ptr [EDX + 0x4],EAX       ; 00450565
    MOV EAX,dword ptr [ESP + 0x14]      ; 00450568
    MOV dword ptr [EDX + 0x8],EAX       ; 0045056c
    MOV EAX,EBX                         ; 0045056f
    ADD ESP,0x24                        ; 00450571
    POP EBP                             ; 00450574
    POP EDI                             ; 00450575
    POP ESI                             ; 00450576
    POP EBX                             ; 00450577
    RET                                 ; 00450578

