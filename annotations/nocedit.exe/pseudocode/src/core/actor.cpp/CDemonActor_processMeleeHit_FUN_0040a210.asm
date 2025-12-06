; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210(CDemonActor * this_ptr, int hit_type)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hit_type
; Local Variables:
; undefined1       Stack[-0x110]:1  local_110
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0x44]:4  local_44
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_00613a40
;   TerminatedCString s_CHero_00613a52
;   TerminatedCString s_s_causing_5_2f_damage_to_00613a58
;   TerminatedCString s_CHero_00613a77
;   TerminatedCString s_s_causing_5_2f_damage_to_00613a7d
;   double DOUBLE_00613aa0 = 0.5
;   double DOUBLE_00613aa8 = 10
;   CConsole* g_CConsolePtr = 0083b1a4
;   CGore* g_CGorePtr = 02d83364
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CCharacterClassInfo.name_hash
;   CConsole g_ConsolePtr
;   undefined4 g_CCrateClassInfo.name_hash
;   undefined4 g_CFlameCanClassInfo.name_hash
;   undefined4 g_CGlassClassInfo.name_hash
;   ... and 15 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_crate.cpp_FUN_00448a70
;   core_flamecan.cpp_FUN_004cb340
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0
;   core_glass.cpp_CGlass_shatter_FUN_004eaef0
;   core_gore.cpp_FUN_004edbb0
;   core_setcolid.cpp_CDemonSet_FUN_00574170
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a210
        ;   Label: core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210
    PUSH ESI                            ; 0040a211
    PUSH EDI                            ; 0040a212
    PUSH EBP                            ; 0040a213
    MOV EBP,ESP                         ; 0040a214
    SUB ESP,0x28c                       ; 0040a216
    AND ESP,0xfffffff8                  ; 0040a21c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0040a21f
    MOV ESI,dword ptr [EBP + 0x18]      ; 0040a222
    PUSH 0x5ea                          ; 0040a225
    PUSH 0x613a40                       ; 0040a22a | = "..\\core\\actor.cpp" | s_core_actor_cpp_00613a40 = ..\core\actor.cpp
    PUSH EBX                            ; 0040a22f
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 0040a230 | void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0040a235
    XOR EDX,EDX                         ; 0040a238
    MOV dword ptr [ESP + 0x25c],EDX     ; 0040a23a
    CMP ESI,0x1                         ; 0040a241
    JNZ 0x0040a24d                      ; 0040a244 | LAB_0040a24d
        ;   XREF to: 0040a24d (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x25c],ESI     ; 0040a246
    LEA EAX,[ESP + 0x190]               ; 0040a24d
        ;   Label: LAB_0040a24d
    XOR EDI,EDI                         ; 0040a254
    PUSH EAX                            ; 0040a256
    MOV dword ptr [ESP + 0x1d0],EDI     ; 0040a257
    MOV dword ptr [ESP + 0x1d4],EDI     ; 0040a25e
    PUSH EBX                            ; 0040a265
    MOV EDX,dword ptr [EBX + 0x154]     ; 0040a266
    CALL dword ptr [EDX + 0x14]         ; 0040a26c
    ADD ESP,0x8                         ; 0040a26f
    MOV EAX,dword ptr [EAX + 0x14]      ; 0040a272
    MOV dword ptr [ESP + 0x1d4],EAX     ; 0040a275
    LEA EAX,[ESP + 0x1cc]               ; 0040a27c
    PUSH EAX                            ; 0040a283
    LEA EAX,[ESP + 0x1dc]               ; 0040a284
    PUSH EAX                            ; 0040a28b
    PUSH EBX                            ; 0040a28c
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0040a28d | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0040a292
    CMP dword ptr [ESP + 0x25c],0x1     ; 0040a295
    JNZ 0x0040a347                      ; 0040a29d | LAB_0040a347
        ;   XREF to: 0040a347 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x1c8],0xc0400000 ; 0040a2a3
    LEA EAX,[ESP + 0x1c0]               ; 0040a2ae
    PUSH EAX                            ; 0040a2b5
    LEA EAX,[ESP + 0x200]               ; 0040a2b6
    PUSH EAX                            ; 0040a2bd
    PUSH EBX                            ; 0040a2be
    MOV dword ptr [ESP + 0x1cc],EDI     ; 0040a2bf
    MOV dword ptr [ESP + 0x1d0],EDI     ; 0040a2c6
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 0040a2cd | CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0040a2d2
    LEA EDX,[ESP + 0x208]               ; 0040a2d5
    FLD float ptr [ESP + 0x1d8]         ; 0040a2dc
    FADD float ptr [EAX]                ; 0040a2e3
    FLD float ptr [ESP + 0x1dc]         ; 0040a2e5
    FXCH                                ; 0040a2ec
    FSTP float ptr [ESP + 0x208]        ; 0040a2ee
    FADD float ptr [EAX + 0x4]          ; 0040a2f5
    FLD float ptr [ESP + 0x1e0]         ; 0040a2f8
    FXCH                                ; 0040a2ff
    FSTP float ptr [ESP + 0x20c]        ; 0040a301
    FADD float ptr [EAX + 0x8]          ; 0040a308
    LEA EAX,[ESP + 0x1e4]               ; 0040a30b
    FSTP float ptr [ESP + 0x210]        ; 0040a312
    CMP EAX,EDX                         ; 0040a319
    JZ 0x0040a347                       ; 0040a31b | LAB_0040a347
        ;   XREF to: 0040a347 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x208]     ; 0040a31d
    MOV dword ptr [ESP + 0x1e4],EAX     ; 0040a324
    MOV EAX,dword ptr [ESP + 0x20c]     ; 0040a32b
    MOV dword ptr [ESP + 0x1e8],EAX     ; 0040a332
    MOV EAX,dword ptr [ESP + 0x210]     ; 0040a339
    MOV dword ptr [ESP + 0x1ec],EAX     ; 0040a340
    LEA EAX,[ESP + 0x1f0]               ; 0040a347
        ;   Label: LAB_0040a347
    PUSH EAX                            ; 0040a34e
    LEA EAX,[ESP + 0x23c]               ; 0040a34f
    XOR EDX,EDX                         ; 0040a356
    PUSH EAX                            ; 0040a358
    MOV EDI,0x3f800000                  ; 0040a359
    MOV dword ptr [ESP + 0x1f8],EDX     ; 0040a35e
    PUSH EBX                            ; 0040a365
    MOV dword ptr [ESP + 0x200],EDX     ; 0040a366
    MOV dword ptr [ESP + 0x204],EDI     ; 0040a36d
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 0040a374 | CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0040a379
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040a37c
    PUSH EBX                            ; 0040a382
    CALL dword ptr [EAX + 0x8c]         ; 0040a383
    ADD ESP,0x4                         ; 0040a389
    MOV dword ptr [ESP + 0x278],EAX     ; 0040a38c
    MOV EAX,dword ptr [ESP + 0x25c]     ; 0040a393
    TEST EAX,EAX                        ; 0040a39a
    JNZ 0x0040a6d0                      ; 0040a39c | LAB_0040a6d0
        ;   XREF to: 0040a6d0 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x268],EAX     ; 0040a3a2
    MOV dword ptr [ESP + 0x270],EAX     ; 0040a3a9
    MOV EAX,[0x006810c8]                ; 0040a3b0 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
        ;   Label: LAB_0040a3b0
    MOV EDX,dword ptr [ESP + 0x268]     ; 0040a3b5
    CMP EDX,dword ptr [EAX + 0x14d154]  ; 0040a3bc | g_CDemonSetInstance.actor_list_ptr
    JGE 0x0040a6d0                      ; 0040a3c2 | LAB_0040a6d0
        ;   XREF to: 0040a6d0 (CONDITIONAL_JUMP)
    ADD EAX,dword ptr [ESP + 0x270]     ; 0040a3c8
    MOV EAX,dword ptr [EAX + 0x14d158]  ; 0040a3cf | g_CDemonSetInstance.actor_list_data[0]
    MOV dword ptr [ESP + 0x27c],EAX     ; 0040a3d5
    CMP EBX,EAX                         ; 0040a3dc
    JNZ 0x0040a402                      ; 0040a3de | LAB_0040a402
        ;   XREF to: 0040a402 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x268]     ; 0040a3e0
        ;   Label: LAB_0040a3e0
    MOV EDI,dword ptr [ESP + 0x270]     ; 0040a3e7
    INC EAX                             ; 0040a3ee
    ADD EDI,0x4                         ; 0040a3ef
    MOV dword ptr [ESP + 0x268],EAX     ; 0040a3f2
    MOV dword ptr [ESP + 0x270],EDI     ; 0040a3f9
    JMP 0x0040a3b0                      ; 0040a400 | LAB_0040a3b0
        ;   XREF to: 0040a3b0 (UNCONDITIONAL_JUMP)
    CMP EAX,dword ptr [ESP + 0x278]     ; 0040a402
        ;   Label: LAB_0040a402
    JZ 0x0040a3e0                       ; 0040a409 | LAB_0040a3e0
        ;   XREF to: 0040a3e0 (CONDITIONAL_JUMP)
    MOV EAX,[0x00823c4c]                ; 0040a40b | g_CCharacterClassInfo.name_hash
    PUSH EAX                            ; 0040a410
    MOV EDX,dword ptr [ESP + 0x280]     ; 0040a411
    PUSH EDX                            ; 0040a418
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0040a419 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040a41e
    MOV EDI,EAX                         ; 0040a421
    TEST EAX,EAX                        ; 0040a423
    JZ 0x0040a530                       ; 0040a425 | LAB_0040a530
        ;   XREF to: 0040a530 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x278],0x0     ; 0040a42b
    JZ 0x0040a466                       ; 0040a433 | LAB_0040a466
        ;   XREF to: 0040a466 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 0040a435
    MOV EDX,dword ptr [EAX + 0x154]     ; 0040a436
    CALL dword ptr [EDX + 0xf4]         ; 0040a43c
    ADD ESP,0x4                         ; 0040a442
    TEST EAX,EAX                        ; 0040a445
    JZ 0x0040a466                       ; 0040a447 | LAB_0040a466
        ;   XREF to: 0040a466 (CONDITIONAL_JUMP)
    PUSH 0x613a52                       ; 0040a449 | = "CHero" | s_CHero_00613a52 = CHero
    MOV ECX,dword ptr [ESP + 0x27c]     ; 0040a44e
    PUSH ECX                            ; 0040a455
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 0040a456 | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040a45b
    TEST EAX,EAX                        ; 0040a45e
    JNZ 0x0040a3e0                      ; 0040a460 | LAB_0040a3e0
        ;   XREF to: 0040a3e0 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x100]               ; 0040a466
        ;   Label: LAB_0040a466
    PUSH EAX                            ; 0040a46d
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 0040a46e | SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0040a473
    PUSH EDI                            ; 0040a476
    LEA EDX,[ESP + 0x104]               ; 0040a477
    PUSH EDX                            ; 0040a47e
    PUSH ESI                            ; 0040a47f
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040a480
    PUSH EBX                            ; 0040a486
    CALL dword ptr [EAX + 0x74]         ; 0040a487
    ADD ESP,0x10                        ; 0040a48a
    LEA EAX,[ESP + 0x100]               ; 0040a48d
    PUSH EAX                            ; 0040a494
    LEA EAX,[ESP + 0x1dc]               ; 0040a495
    PUSH 0x40000000                     ; 0040a49c
    PUSH EAX                            ; 0040a4a1
    MOV EDX,dword ptr [EDI + 0x154]     ; 0040a4a2
    PUSH EDI                            ; 0040a4a8
    CALL dword ptr [EDX + 0x114]        ; 0040a4a9
    ADD ESP,0x10                        ; 0040a4af
    FLDZ                                ; 0040a4b2
    FLD float ptr [ESP + 0x104]         ; 0040a4b4
    FSTP double ptr [ESP + 0x8]         ; 0040a4bb
    FCOMP double ptr [ESP + 0x8]        ; 0040a4bf
    FNSTSW AX                           ; 0040a4c3
    SAHF                                ; 0040a4c5
    JNC 0x0040a3e0                      ; 0040a4c6 | LAB_0040a3e0
        ;   XREF to: 0040a3e0 (CONDITIONAL_JUMP)
    FLD double ptr [ESP + 0x8]          ; 0040a4cc
    FMUL double ptr [0x00613aa0]        ; 0040a4d0 | double DOUBLE_00613aa0
    MOV EAX,dword ptr [EDI + 0x2610]    ; 0040a4d6
    FLD1                                ; 0040a4dc
    FADDP                               ; 0040a4de
    PUSH EAX                            ; 0040a4e0
    CALL crt_math.c_round_FUN_005fe6b0  ; 0040a4e1 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x28c]       ; 0040a4e6
    MOV EDX,dword ptr [ESP + 0x28c]     ; 0040a4ed
    PUSH EDX                            ; 0040a4f4
    LEA EAX,[ESP + 0x240]               ; 0040a4f5
    PUSH EAX                            ; 0040a4fc
    LEA EAX,[ESP + 0x1e4]               ; 0040a4fd
    PUSH EAX                            ; 0040a504
    MOV ECX,dword ptr [0x0067b9a0]      ; 0040a505 | CGore g_CGoreInstance | CGore * g_CGorePtr
    PUSH ECX                            ; 0040a50b | CGore g_CGoreInstance
    CALL core_gore.cpp_FUN_004edbb0     ; 0040a50c | undefined core_gore.cpp_FUN_004edbb0()
        ;   XREF to: 004edbb0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0040a511
    PUSH EDI                            ; 0040a514
    LEA EAX,[ESP + 0x104]               ; 0040a515
    PUSH EAX                            ; 0040a51c
    PUSH ESI                            ; 0040a51d
    MOV EDX,dword ptr [EBX + 0x154]     ; 0040a51e
    PUSH EBX                            ; 0040a524
    CALL dword ptr [EDX + 0x78]         ; 0040a525
    ADD ESP,0x10                        ; 0040a528
    JMP 0x0040a3e0                      ; 0040a52b | LAB_0040a3e0
        ;   XREF to: 0040a3e0 (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x03f87490]      ; 0040a530 | g_CTriggerClassInfo.name_hash
        ;   Label: LAB_0040a530
    PUSH ECX                            ; 0040a536
    MOV EDI,dword ptr [ESP + 0x280]     ; 0040a537
    PUSH EDI                            ; 0040a53e
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0040a53f | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    MOV EDI,EAX                         ; 0040a544
    ADD ESP,0x8                         ; 0040a546
    TEST EAX,EAX                        ; 0040a549
    JZ 0x0040a60f                       ; 0040a54b | LAB_0040a60f
        ;   XREF to: 0040a60f (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0040a551
    PUSH EAX                            ; 0040a552
    CALL core_trigger.cpp_FUN_005e0ac0  ; 0040a553 | undefined core_trigger.cpp_FUN_005e0ac0()
        ;   XREF to: 005e0ac0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040a558
    TEST EAX,EAX                        ; 0040a55b
    JZ 0x0040a3e0                       ; 0040a55d | LAB_0040a3e0
        ;   XREF to: 0040a3e0 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x1d8]               ; 0040a563
    PUSH 0x40000000                     ; 0040a56a
    PUSH EAX                            ; 0040a56f
    LEA EAX,[ESP + 0x234]               ; 0040a570
    PUSH EAX                            ; 0040a577
    PUSH EDI                            ; 0040a578
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 0040a579 | CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0040a57e
    PUSH EAX                            ; 0040a581
    LEA EAX,[ESP + 0x180]               ; 0040a582
    PUSH EAX                            ; 0040a589
    MOV EDX,dword ptr [EDI + 0x154]     ; 0040a58a
    PUSH EDI                            ; 0040a590
    CALL dword ptr [EDX + 0x14]         ; 0040a591
    ADD ESP,0x8                         ; 0040a594
    PUSH EAX                            ; 0040a597
    CALL core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0 ; 0040a598 | int core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0(CBoundingBox3D * this_ptr, CVector3f * sphere_center, float radius)
        ;   XREF to: 004215f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0040a59d
    TEST EAX,EAX                        ; 0040a5a0
    JZ 0x0040a3e0                       ; 0040a5a2 | LAB_0040a3e0
        ;   XREF to: 0040a3e0 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x10]                ; 0040a5a8
    PUSH EAX                            ; 0040a5ac
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 0040a5ad | SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0040a5b2
    PUSH EDI                            ; 0040a5b5
    LEA EAX,[ESP + 0x14]                ; 0040a5b6
    PUSH EAX                            ; 0040a5ba
    PUSH ESI                            ; 0040a5bb
    MOV EDX,dword ptr [EBX + 0x154]     ; 0040a5bc
    PUSH EBX                            ; 0040a5c2
    CALL dword ptr [EDX + 0x74]         ; 0040a5c3
    ADD ESP,0x10                        ; 0040a5c6
    PUSH EDI                            ; 0040a5c9
    FLD float ptr [ESP + 0x18]          ; 0040a5ca
    SUB ESP,0x8                         ; 0040a5ce
    FSTP double ptr [ESP]               ; 0040a5d1
    PUSH EBX                            ; 0040a5d4
    PUSH 0x613a58                       ; 0040a5d5 | = "%s causing %5.2f damage to %s\n" | s_s_causing_5_2f_damage_to_00613a58 = %s causing %5.2f damage to %s

    MOV ECX,dword ptr [0x0066e8e0]      ; 0040a5da | CConsole g_ConsolePtr | CConsole * g_CConsolePtr
    PUSH ECX                            ; 0040a5e0 | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0040a5e1 | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 0040a5e6
    PUSH dword ptr [ESP + 0x14]         ; 0040a5e9
    PUSH EDI                            ; 0040a5ed
    CALL core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00 ; 0040a5ee | undefined core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00()
        ;   XREF to: 005e0b00 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040a5f3
    PUSH EDI                            ; 0040a5f6
    LEA EAX,[ESP + 0x14]                ; 0040a5f7
    PUSH EAX                            ; 0040a5fb
    PUSH ESI                            ; 0040a5fc
    MOV EDX,dword ptr [EBX + 0x154]     ; 0040a5fd
    PUSH EBX                            ; 0040a603
    CALL dword ptr [EDX + 0x78]         ; 0040a604
    ADD ESP,0x10                        ; 0040a607
    JMP 0x0040a3e0                      ; 0040a60a | LAB_0040a3e0
        ;   XREF to: 0040a3e0 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x02d83360]                ; 0040a60f | g_CGlassClassInfo.name_hash
        ;   Label: LAB_0040a60f
    PUSH EAX                            ; 0040a614
    MOV EDX,dword ptr [ESP + 0x280]     ; 0040a615
    PUSH EDX                            ; 0040a61c
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0040a61d | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    MOV EDI,EAX                         ; 0040a622
    ADD ESP,0x8                         ; 0040a624
    TEST EAX,EAX                        ; 0040a627
    JZ 0x0040a3e0                       ; 0040a629 | LAB_0040a3e0
        ;   XREF to: 0040a3e0 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x1d8]               ; 0040a62f
    PUSH 0x40000000                     ; 0040a636
    PUSH EAX                            ; 0040a63b
    LEA EAX,[ESP + 0x228]               ; 0040a63c
    PUSH EAX                            ; 0040a643
    PUSH EDI                            ; 0040a644
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 0040a645 | CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0040a64a
    PUSH EAX                            ; 0040a64d
    LEA EAX,[ESP + 0x1b0]               ; 0040a64e
    PUSH EAX                            ; 0040a655
    MOV EDX,dword ptr [EDI + 0x154]     ; 0040a656
    PUSH EDI                            ; 0040a65c
    CALL dword ptr [EDX + 0x14]         ; 0040a65d
    ADD ESP,0x8                         ; 0040a660
    PUSH EAX                            ; 0040a663
    CALL core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0 ; 0040a664 | int core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0(CBoundingBox3D * this_ptr, CVector3f * sphere_center, float radius)
        ;   XREF to: 004215f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0040a669
    TEST EAX,EAX                        ; 0040a66c
    JZ 0x0040a3e0                       ; 0040a66e | LAB_0040a3e0
        ;   XREF to: 0040a3e0 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x4c]                ; 0040a674
    PUSH EAX                            ; 0040a678
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 0040a679 | SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0040a67e
    PUSH EDI                            ; 0040a681
    LEA EDX,[ESP + 0x50]                ; 0040a682
    PUSH EDX                            ; 0040a686
    PUSH ESI                            ; 0040a687
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040a688
    PUSH EBX                            ; 0040a68e
    CALL dword ptr [EAX + 0x74]         ; 0040a68f
    ADD ESP,0x10                        ; 0040a692
    PUSH EDI                            ; 0040a695
    LEA EAX,[ESP + 0x50]                ; 0040a696
    PUSH EAX                            ; 0040a69a
    PUSH ESI                            ; 0040a69b
    MOV EDX,dword ptr [EBX + 0x154]     ; 0040a69c
    PUSH EBX                            ; 0040a6a2
    CALL dword ptr [EDX + 0x78]         ; 0040a6a3
    ADD ESP,0x10                        ; 0040a6a6
    PUSH EDI                            ; 0040a6a9
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0 ; 0040a6aa | void core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(CGlass * this_ptr)
        ;   XREF to: 004eb3a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0040a6af
    TEST EAX,EAX                        ; 0040a6b2
    JZ 0x0040a3e0                       ; 0040a6b4 | LAB_0040a3e0
        ;   XREF to: 0040a3e0 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x1d8]               ; 0040a6ba
    PUSH EAX                            ; 0040a6c1
    PUSH EDI                            ; 0040a6c2
    CALL core_glass.cpp_CGlass_shatter_FUN_004eaef0 ; 0040a6c3 | void core_glass.cpp_CGlass_shatter_FUN_004eaef0(CGlass * this_ptr, CVector3f * location)
        ;   XREF to: 004eaef0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040a6c8
    JMP 0x0040a3e0                      ; 0040a6cb | LAB_0040a3e0
        ;   XREF to: 0040a3e0 (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x25c]     ; 0040a6d0
        ;   Label: LAB_0040a6d0
    CMP EDX,0x1                         ; 0040a6d7
    JZ 0x0040a6e5                       ; 0040a6da | LAB_0040a6e5
        ;   XREF to: 0040a6e5 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0040a6dc
        ;   Label: LAB_0040a6dc
    MOV ESP,EBP                         ; 0040a6de
    POP EBP                             ; 0040a6e0
    POP EDI                             ; 0040a6e1
    POP ESI                             ; 0040a6e2
    POP EBX                             ; 0040a6e3
    RET                                 ; 0040a6e4
    PUSH EDX                            ; 0040a6e5
        ;   Label: LAB_0040a6e5
    MOV ECX,dword ptr [0x006810c8]      ; 0040a6e6 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH ECX                            ; 0040a6ec | CDemonSet g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230 ; 0040a6ed | void core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230(CDemonSet * this_ptr, int ray_type)
        ;   XREF to: 00574230 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040a6f2
    PUSH EBX                            ; 0040a6f5
    MOV EDI,dword ptr [0x006810c8]      ; 0040a6f6 | CDemonSet * g_CDemonSetPtr
    PUSH EDI                            ; 0040a6fc | CDemonSet g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 0040a6fd | void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040a702
    MOV EAX,[0x006810c8]                ; 0040a705 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH EAX                            ; 0040a70a | CDemonSet g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_FUN_00574170 ; 0040a70b | void core_setcolid.cpp_CDemonSet_FUN_00574170(CDemonSet * this_ptr)
        ;   XREF to: 00574170 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0040a710
    MOV EDX,dword ptr [ESP + 0x278]     ; 0040a713
    TEST EDX,EDX                        ; 0040a71a
    JNZ 0x0040a897                      ; 0040a71c | LAB_0040a897
        ;   XREF to: 0040a897 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0040a722
        ;   Label: LAB_0040a722
    MOV dword ptr [ESP + 0x26c],EAX     ; 0040a724
    LEA EAX,[ESP + 0x1d8]               ; 0040a72b
        ;   Label: LAB_0040a72b
    PUSH EAX                            ; 0040a732
    LEA EAX,[ESP + 0x1e8]               ; 0040a733
    PUSH EAX                            ; 0040a73a
    MOV EDX,dword ptr [0x006810c8]      ; 0040a73b | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH EDX                            ; 0040a741 | CDemonSet g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530 ; 0040a742 | float core_setcolid.cpp_CDemonSet_raycast_FUN_00572530(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x294],EAX     ; 0040a747
    FLD float ptr [ESP + 0x294]         ; 0040a74e
    ADD ESP,0xc                         ; 0040a755
    FLDZ                                ; 0040a758
    FXCH                                ; 0040a75a
    FSTP double ptr [ESP]               ; 0040a75c
    FCOMP double ptr [ESP]              ; 0040a75f
    FNSTSW AX                           ; 0040a762
    SAHF                                ; 0040a764
    JA 0x0040a6dc                       ; 0040a765 | LAB_0040a6dc
        ;   XREF to: 0040a6dc (CONDITIONAL_JUMP)
    FLD1                                ; 0040a76b
    FCOMP double ptr [ESP]              ; 0040a76d
    FNSTSW AX                           ; 0040a770
    SAHF                                ; 0040a772
    JC 0x0040a6dc                       ; 0040a773 | LAB_0040a6dc
        ;   XREF to: 0040a6dc (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x00823c4c]      ; 0040a779 | g_CCharacterClassInfo.name_hash
    MOV EAX,[0x006810c8]                ; 0040a77f | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH ECX                            ; 0040a784
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 0040a785 | DAT_032613bc
    PUSH EDI                            ; 0040a78b
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0040a78c | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040a791
    MOV EDI,EAX                         ; 0040a794
    TEST EAX,EAX                        ; 0040a796
    JZ 0x0040a7b0                       ; 0040a798 | LAB_0040a7b0
        ;   XREF to: 0040a7b0 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 0040a79a
    MOV EDX,dword ptr [EAX + 0x154]     ; 0040a79b
    CALL dword ptr [EDX + 0x120]        ; 0040a7a1
    ADD ESP,0x4                         ; 0040a7a7
    TEST EAX,EAX                        ; 0040a7aa
    JLE 0x0040a7b0                      ; 0040a7ac | LAB_0040a7b0
        ;   XREF to: 0040a7b0 (CONDITIONAL_JUMP)
    XOR EDI,EDI                         ; 0040a7ae
    MOV EAX,[0x02d83360]                ; 0040a7b0 | g_CGlassClassInfo.name_hash
        ;   Label: LAB_0040a7b0
    PUSH EAX                            ; 0040a7b5
    MOV EAX,[0x006810c8]                ; 0040a7b6 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0040a7bb | DAT_032613bc
    PUSH EDX                            ; 0040a7c1
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0040a7c2 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x28c],EAX     ; 0040a7c7
    ADD ESP,0x8                         ; 0040a7ce
    MOV ECX,dword ptr [0x03f87490]      ; 0040a7d1 | g_CTriggerClassInfo.name_hash
    MOV EAX,[0x006810c8]                ; 0040a7d7 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH ECX                            ; 0040a7dc
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0040a7dd | DAT_032613bc
    PUSH EDX                            ; 0040a7e3
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0040a7e4 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x288],EAX     ; 0040a7e9
    ADD ESP,0x8                         ; 0040a7f0
    MOV ECX,dword ptr [0x0088797c]      ; 0040a7f3 | g_CCrateClassInfo.name_hash
    MOV dword ptr [ESP + 0x260],EAX     ; 0040a7f9
    MOV EAX,[0x006810c8]                ; 0040a800 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH ECX                            ; 0040a805
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0040a806 | DAT_032613bc
    PUSH EDX                            ; 0040a80c
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0040a80d | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x26c],EAX     ; 0040a812
    ADD ESP,0x8                         ; 0040a819
    MOV ECX,dword ptr [0x02d7a738]      ; 0040a81c | g_CFlameCanClassInfo.name_hash
    MOV EAX,[0x006810c8]                ; 0040a822 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH ECX                            ; 0040a827
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0040a828 | DAT_032613bc
    PUSH EDX                            ; 0040a82e
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0040a82f | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040a834
    TEST EDI,EDI                        ; 0040a837
    JZ 0x0040aa5a                       ; 0040a839 | LAB_0040aa5a
        ;   XREF to: 0040aa5a (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x278],0x0     ; 0040a83f
    JZ 0x0040a8ac                       ; 0040a847 | LAB_0040a8ac
        ;   XREF to: 0040a8ac (CONDITIONAL_JUMP)
    PUSH EDI                            ; 0040a849
    MOV EAX,dword ptr [EDI + 0x154]     ; 0040a84a
    CALL dword ptr [EAX + 0xf4]         ; 0040a850
    ADD ESP,0x4                         ; 0040a856
    TEST EAX,EAX                        ; 0040a859
    JZ 0x0040a8ac                       ; 0040a85b | LAB_0040a8ac
        ;   XREF to: 0040a8ac (CONDITIONAL_JUMP)
    PUSH 0x613a77                       ; 0040a85d | = "CHero" | s_CHero_00613a77 = CHero
    MOV EDX,dword ptr [ESP + 0x27c]     ; 0040a862
    PUSH EDX                            ; 0040a869
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 0040a86a | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040a86f
    TEST EAX,EAX                        ; 0040a872
    JZ 0x0040a8ac                       ; 0040a874 | LAB_0040a8ac
        ;   XREF to: 0040a8ac (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x26c]     ; 0040a876
        ;   Label: LAB_0040a876
    INC EDI                             ; 0040a87d
    MOV dword ptr [ESP + 0x26c],EDI     ; 0040a87e
    CMP EDI,0x4                         ; 0040a885
    JL 0x0040a72b                       ; 0040a888 | LAB_0040a72b
        ;   XREF to: 0040a72b (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0040a88e
    MOV ESP,EBP                         ; 0040a890
    POP EBP                             ; 0040a892
    POP EDI                             ; 0040a893
    POP ESI                             ; 0040a894
    POP EBX                             ; 0040a895
    RET                                 ; 0040a896
    PUSH EDX                            ; 0040a897
        ;   Label: LAB_0040a897
    MOV EDI,dword ptr [0x006810c8]      ; 0040a898 | CDemonSet * g_CDemonSetPtr
    PUSH EDI                            ; 0040a89e | CDemonSet g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 0040a89f | void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040a8a4
    JMP 0x0040a722                      ; 0040a8a7 | LAB_0040a722
        ;   XREF to: 0040a722 (UNCONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x88]                ; 0040a8ac
        ;   Label: LAB_0040a8ac
    PUSH EAX                            ; 0040a8b3
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 0040a8b4 | SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x006810c8]                ; 0040a8b9 | CDemonSet * g_CDemonSetPtr
    ADD ESP,0x4                         ; 0040a8be
    MOV EAX,dword ptr [EAX + 0x14d148]  ; 0040a8c1 | DAT_032613c0
    PUSH EDI                            ; 0040a8c7
    MOV dword ptr [ESP + 0x8c],EAX      ; 0040a8c8
    LEA EAX,[ESP + 0x8c]                ; 0040a8cf
    PUSH EAX                            ; 0040a8d6
    PUSH ESI                            ; 0040a8d7
    MOV EDX,dword ptr [EBX + 0x154]     ; 0040a8d8
    PUSH EBX                            ; 0040a8de
    CALL dword ptr [EDX + 0x74]         ; 0040a8df
    MOV EDX,dword ptr [0x006810c8]      ; 0040a8e2 | CDemonSet * g_CDemonSetPtr
    LEA EAX,[EDX + 0x14d11c]            ; 0040a8e8 | DAT_03261394
    FLD float ptr [EAX]                 ; 0040a8ee | DAT_03261394
    FSUB float ptr [EDX + 0x14d110]     ; 0040a8f0 | DAT_03261388
    ADD ESP,0x10                        ; 0040a8f6
    FSTP float ptr [ESP + 0x214]        ; 0040a8f9
    FLD float ptr [EAX + 0x4]           ; 0040a900 | DAT_03261398
    FSUB float ptr [EDX + 0x14d114]     ; 0040a903 | DAT_0326138c
    FST float ptr [ESP + 0x218]         ; 0040a909
    FMUL float ptr [ESP + 0x218]        ; 0040a910
    FLD float ptr [ESP + 0x214]         ; 0040a917
    FMUL ST0                            ; 0040a91e
    FLD float ptr [EAX + 0x8]           ; 0040a920 | DAT_0326139c
    FSUB float ptr [EDX + 0x14d118]     ; 0040a923 | DAT_03261390
    FXCH                                ; 0040a929
    FADDP ST2,ST0                       ; 0040a92b
    FST float ptr [ESP + 0x21c]         ; 0040a92d
    FMUL float ptr [ESP + 0x21c]        ; 0040a934
    FADDP                               ; 0040a93b
    FSQRT                               ; 0040a93d
    FDIVR double ptr [0x00613aa8]       ; 0040a93f | double DOUBLE_00613aa8
    FLD float ptr [ESP + 0x214]         ; 0040a945
    FXCH                                ; 0040a94c
    FSTP float ptr [ESP + 0x274]        ; 0040a94e
    FMUL float ptr [ESP + 0x274]        ; 0040a955
    FLD float ptr [ESP + 0x218]         ; 0040a95c
    FMUL float ptr [ESP + 0x274]        ; 0040a963
    FLD float ptr [ESP + 0x21c]         ; 0040a96a
    FMUL float ptr [ESP + 0x274]        ; 0040a971
    LEA EDX,[ESP + 0x244]               ; 0040a978
    LEA EAX,[ESP + 0x94]                ; 0040a97f
    FXCH ST2                            ; 0040a986
    FSTP float ptr [ESP + 0x244]        ; 0040a988
    FSTP float ptr [ESP + 0x248]        ; 0040a98f
    FSTP float ptr [ESP + 0x24c]        ; 0040a996
    CMP EAX,EDX                         ; 0040a99d
    JZ 0x0040a9cb                       ; 0040a99f | LAB_0040a9cb
        ;   XREF to: 0040a9cb (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x244]     ; 0040a9a1
    MOV dword ptr [ESP + 0x94],EAX      ; 0040a9a8
    MOV EAX,dword ptr [ESP + 0x248]     ; 0040a9af
    MOV dword ptr [ESP + 0x98],EAX      ; 0040a9b6
    MOV EAX,dword ptr [ESP + 0x24c]     ; 0040a9bd
    MOV dword ptr [ESP + 0x9c],EAX      ; 0040a9c4
    MOV EAX,[0x006810c8]                ; 0040a9cb | CDemonSet * g_CDemonSetPtr
        ;   Label: LAB_0040a9cb
    ADD EAX,0x14d138                    ; 0040a9d0
    PUSH EAX                            ; 0040a9d5 | DAT_032613b0
    LEA EAX,[ESP + 0x254]               ; 0040a9d6
    PUSH EAX                            ; 0040a9dd
    PUSH EDI                            ; 0040a9de
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 0040a9df | CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)
    MOV EDX,EAX                         ; 0040a9e4
    LEA EAX,[ESP + 0xb0]                ; 0040a9e6
    ADD ESP,0xc                         ; 0040a9ed
    CMP EAX,EDX                         ; 0040a9f0
    JZ 0x0040aa11                       ; 0040a9f2 | LAB_0040aa11
        ;   XREF to: 0040aa11 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDX]             ; 0040a9f4
    MOV dword ptr [ESP + 0xa4],EAX      ; 0040a9f6
    MOV EAX,dword ptr [EDX + 0x4]       ; 0040a9fd
    MOV dword ptr [ESP + 0xa8],EAX      ; 0040aa00
    MOV EAX,dword ptr [EDX + 0x8]       ; 0040aa07
    MOV dword ptr [ESP + 0xac],EAX      ; 0040aa0a
    LEA EDX,[ESP + 0x88]                ; 0040aa11
        ;   Label: LAB_0040aa11
    PUSH EDX                            ; 0040aa18
    MOV EAX,dword ptr [EDI + 0x154]     ; 0040aa19
    PUSH EDI                            ; 0040aa1f
    CALL dword ptr [EAX + 0x11c]        ; 0040aa20
    ADD ESP,0x8                         ; 0040aa26
    PUSH EDI                            ; 0040aa29
    LEA EDX,[ESP + 0x8c]                ; 0040aa2a
    PUSH EDX                            ; 0040aa31
    PUSH ESI                            ; 0040aa32
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040aa33
    PUSH EBX                            ; 0040aa39
    CALL dword ptr [EAX + 0x78]         ; 0040aa3a
    MOV EAX,[0x006810c8]                ; 0040aa3d | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    ADD ESP,0x10                        ; 0040aa42
    MOV ECX,dword ptr [EAX + 0x14d144]  ; 0040aa45 | DAT_032613bc
    PUSH ECX                            ; 0040aa4b
    PUSH EAX                            ; 0040aa4c | CDemonSet g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 0040aa4d | void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040aa52
    JMP 0x0040a876                      ; 0040aa55 | LAB_0040a876
        ;   XREF to: 0040a876 (UNCONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x284],0x0     ; 0040aa5a
        ;   Label: LAB_0040aa5a
    JNZ 0x0040aa98                      ; 0040aa62 | LAB_0040aa98
        ;   XREF to: 0040aa98 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x280]     ; 0040aa64
    TEST EDI,EDI                        ; 0040aa6b
    JNZ 0x0040ab07                      ; 0040aa6d | LAB_0040ab07
        ;   XREF to: 0040ab07 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x264]     ; 0040aa73
    TEST EDX,EDX                        ; 0040aa7a
    JNZ 0x0040aba9                      ; 0040aa7c | LAB_0040aba9
        ;   XREF to: 0040aba9 (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 0040aa82
    JZ 0x0040a6dc                       ; 0040aa84 | LAB_0040a6dc
        ;   XREF to: 0040a6dc (CONDITIONAL_JUMP)
    PUSH EAX                            ; 0040aa8a
    CALL core_flamecan.cpp_FUN_004cb340 ; 0040aa8b | undefined core_flamecan.cpp_FUN_004cb340()
        ;   XREF to: 004cb340 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0040aa90
    JMP 0x0040a876                      ; 0040aa93 | LAB_0040a876
        ;   XREF to: 0040a876 (UNCONDITIONAL_JUMP)
    LEA EAX,[ESP + 0xc4]                ; 0040aa98
        ;   Label: LAB_0040aa98
    PUSH EAX                            ; 0040aa9f
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 0040aaa0 | SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0040aaa5
    MOV EDI,dword ptr [ESP + 0x284]     ; 0040aaa8
    PUSH EDI                            ; 0040aaaf
    LEA EAX,[ESP + 0xc8]                ; 0040aab0
    PUSH EAX                            ; 0040aab7
    PUSH ESI                            ; 0040aab8
    MOV EDX,dword ptr [EBX + 0x154]     ; 0040aab9
    PUSH EBX                            ; 0040aabf
    CALL dword ptr [EDX + 0x74]         ; 0040aac0
    ADD ESP,0x10                        ; 0040aac3
    PUSH EDI                            ; 0040aac6
    LEA EDX,[ESP + 0xc8]                ; 0040aac7
    PUSH EDX                            ; 0040aace
    PUSH ESI                            ; 0040aacf
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040aad0
    PUSH EBX                            ; 0040aad6
    CALL dword ptr [EAX + 0x78]         ; 0040aad7
    ADD ESP,0x10                        ; 0040aada
    PUSH EDI                            ; 0040aadd
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0 ; 0040aade | void core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(CGlass * this_ptr)
        ;   XREF to: 004eb3a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0040aae3
    TEST EAX,EAX                        ; 0040aae6
    JZ 0x0040a6dc                       ; 0040aae8 | LAB_0040a6dc
        ;   XREF to: 0040a6dc (CONDITIONAL_JUMP)
    MOV EAX,[0x006810c8]                ; 0040aaee | CDemonSet * g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 0040aaf3 | DAT_032613b0
    PUSH EAX                            ; 0040aaf8 | DAT_032613b0
    PUSH EDI                            ; 0040aaf9
    CALL core_glass.cpp_CGlass_shatter_FUN_004eaef0 ; 0040aafa | void core_glass.cpp_CGlass_shatter_FUN_004eaef0(CGlass * this_ptr, CVector3f * location)
        ;   XREF to: 004eaef0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040aaff
    JMP 0x0040a876                      ; 0040ab02 | LAB_0040a876
        ;   XREF to: 0040a876 (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 0040ab07
        ;   Label: LAB_0040ab07
    PUSH EDI                            ; 0040ab08
    CALL core_trigger.cpp_FUN_005e0ac0  ; 0040ab09 | undefined core_trigger.cpp_FUN_005e0ac0()
        ;   XREF to: 005e0ac0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040ab0e
    TEST EAX,EAX                        ; 0040ab11
    JZ 0x0040ab8d                       ; 0040ab13 | LAB_0040ab8d
        ;   XREF to: 0040ab8d (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x13c]               ; 0040ab15
    PUSH EAX                            ; 0040ab1c
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 0040ab1d | SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0040ab22
    PUSH EDI                            ; 0040ab25
    LEA EAX,[ESP + 0x140]               ; 0040ab26
    PUSH EAX                            ; 0040ab2d
    PUSH ESI                            ; 0040ab2e
    MOV EDX,dword ptr [EBX + 0x154]     ; 0040ab2f
    PUSH EBX                            ; 0040ab35
    CALL dword ptr [EDX + 0x74]         ; 0040ab36
    ADD ESP,0x10                        ; 0040ab39
    PUSH EDI                            ; 0040ab3c
    FLD float ptr [ESP + 0x144]         ; 0040ab3d
    SUB ESP,0x8                         ; 0040ab44
    FSTP double ptr [ESP]               ; 0040ab47
    PUSH EBX                            ; 0040ab4a
    PUSH 0x613a7d                       ; 0040ab4b | = "%s causing %5.2f damage to %s\n" | s_s_causing_5_2f_damage_to_00613a7d = %s causing %5.2f damage to %s

    MOV ECX,dword ptr [0x0066e8e0]      ; 0040ab50 | CConsole g_ConsolePtr | CConsole * g_CConsolePtr
    PUSH ECX                            ; 0040ab56 | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0040ab57 | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 0040ab5c
    PUSH dword ptr [ESP + 0x140]        ; 0040ab5f
    PUSH EDI                            ; 0040ab66
    CALL core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00 ; 0040ab67 | undefined core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00()
        ;   XREF to: 005e0b00 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040ab6c
    MOV EAX,dword ptr [ESP + 0x284]     ; 0040ab6f
    PUSH EAX                            ; 0040ab76
    LEA EAX,[ESP + 0x140]               ; 0040ab77
    PUSH EAX                            ; 0040ab7e
    PUSH ESI                            ; 0040ab7f
    MOV EDX,dword ptr [EBX + 0x154]     ; 0040ab80
    PUSH EBX                            ; 0040ab86
    CALL dword ptr [EDX + 0x78]         ; 0040ab87
    ADD ESP,0x10                        ; 0040ab8a
    MOV EDX,dword ptr [ESP + 0x260]     ; 0040ab8d
        ;   Label: LAB_0040ab8d
    PUSH EDX                            ; 0040ab94
    MOV ECX,dword ptr [0x006810c8]      ; 0040ab95 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH ECX                            ; 0040ab9b | CDemonSet g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 0040ab9c | void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040aba1
    JMP 0x0040a876                      ; 0040aba4 | LAB_0040a876
        ;   XREF to: 0040a876 (UNCONDITIONAL_JUMP)
    PUSH EDX                            ; 0040aba9
        ;   Label: LAB_0040aba9
    CALL core_crate.cpp_FUN_00448a70    ; 0040abaa | undefined core_crate.cpp_FUN_00448a70()
        ;   XREF to: 00448a70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0040abaf
    JMP 0x0040a876                      ; 0040abb2 | LAB_0040a876
        ;   XREF to: 0040a876 (UNCONDITIONAL_JUMP)

