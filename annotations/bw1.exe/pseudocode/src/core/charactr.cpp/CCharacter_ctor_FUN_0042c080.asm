; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCharacter * core_charactr_cpp_CCharacter_ctor_FUN_0042c080(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
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
;
; XREF[5]:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410 at 004a041b
;   core_hero.cpp_FUN_004ea830 at 004ea836
;   core_moocow.cpp_CMooCow_ctor_FUN_00521300 at 00521306
;   core_npc.cpp_CNPC_ctor_FUN_00531670 at 00531679
;   unkafter_bird.cpp_CBird_ctor_FUN_004151f0 at 004151f9
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;   WatcomTypeInfo g_CFlameTypeInfo
;   undefined4 DAT_005fd618
;   void* g_CCharacterVTable = 0042c510
;   WatcomTypeInfo g_SFireTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   core_cloth.cpp_CClothList_ctor_FUN_00441c60
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00567370
;   core_xform.cpp_setIdentityMatrix3x4_FUN_005b53f0
;   crt_memory.c___arrinit_FUN_005c0357
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042c080
        ;   Label: core_charactr.cpp_CCharacter_ctor_FUN_0042c080
    PUSH ESI                            ; 0042c081
    PUSH EDI                            ; 0042c082
    PUSH EBP                            ; 0042c083
    SUB ESP,0x34                        ; 0042c084
    MOV ESI,dword ptr [ESP + 0x48]      ; 0042c087
    PUSH ESI                            ; 0042c08b
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 0042c08c
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042c091
    ADD EAX,0x158                       ; 0042c094
    PUSH EAX                            ; 0042c099
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00567370 ; 0042c09a
        ;   XREF to: 00567370 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00567370(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042c09f
    ADD EAX,0x2b48                      ; 0042c0a2
    PUSH EAX                            ; 0042c0a7
    CALL core_cloth.cpp_CClothList_ctor_FUN_00441c60 ; 0042c0a8
        ;   XREF to: 00441c60 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_ctor_FUN_00441c60(CClothList * this_ptr)
    ADD ESP,0x4                         ; 0042c0ad
    PUSH 0x5fb430                       ; 0042c0b0 | g_CVectorTypeInfo
    PUSH 0xf                            ; 0042c0b5
    ADD EAX,0x1c8                       ; 0042c0b7
    PUSH EAX                            ; 0042c0bc
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0042c0bd
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 0042c0c2
    PUSH 0x5fb430                       ; 0042c0c5 | g_CVectorTypeInfo
    PUSH 0xf                            ; 0042c0ca
    ADD EAX,0xb4                        ; 0042c0cc
    PUSH EAX                            ; 0042c0d1
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0042c0d2
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 0042c0d7
    PUSH 0x5fd770                       ; 0042c0da | g_SFireTypeInfo
    PUSH 0x32                           ; 0042c0df
    ADD EAX,0x210                       ; 0042c0e1
    PUSH EAX                            ; 0042c0e6
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0042c0e7
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 0042c0ec
    PUSH 0x5fb960                       ; 0042c0ef | g_CFlameTypeInfo
    PUSH 0x32                           ; 0042c0f4
    ADD EAX,0x4b0                       ; 0042c0f6
    PUSH EAX                            ; 0042c0fb
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0042c0fc
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    LEA ESI,[EAX + 0xffffca24]          ; 0042c101
    MOV dword ptr [ESI + 0x154],0x5fd624 ; 0042c107 | g_CCharacterVTable
    LEA EAX,[ESI + 0x2518]              ; 0042c111
    MOV dword ptr [ESI + 0x24fc],0x0    ; 0042c117
    MOV dword ptr [EAX + 0x8],0x0       ; 0042c121
    ADD ESP,0xc                         ; 0042c128
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042c12b
    MOV dword ptr [EAX + 0x4],EDX       ; 0042c12e
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042c131
    MOV dword ptr [EAX],EDX             ; 0042c134
    MOV dword ptr [ESI + 0x253c],0x42c80000 ; 0042c136
    MOV dword ptr [ESI + 0x2fec],0x3f800000 ; 0042c140
    MOV dword ptr [ESI + 0x2ff0],0x40000000 ; 0042c14a
    MOV dword ptr [ESI + 0x2ff4],0x41a00000 ; 0042c154
    MOV dword ptr [ESI + 0x2ff8],0x42480000 ; 0042c15e
    MOV dword ptr [ESI + 0x2ffc],0x40000000 ; 0042c168
    MOV dword ptr [ESI + 0x3000],0xc479c000 ; 0042c172
    MOV dword ptr [ESI + 0x3004],0x0    ; 0042c17c
    MOV dword ptr [ESI + 0x3120],0x0    ; 0042c186
    MOV dword ptr [ESI + 0x3128],0x40000000 ; 0042c190
    MOV dword ptr [ESI + 0x2754],0xffffffff ; 0042c19a
    MOV dword ptr [ESI + 0x275c],0x0    ; 0042c1a4
    MOV dword ptr [ESI + 0x2750],0xffffffff ; 0042c1ae
    MOV dword ptr [ESI + 0x2fe4],0x0    ; 0042c1b8
    MOV dword ptr [ESI + 0x273c],0x0    ; 0042c1c2
    MOV dword ptr [ESI + 0x2704],0x0    ; 0042c1cc
    MOV dword ptr [ESI + 0x2708],0x40400000 ; 0042c1d6
    MOV dword ptr [ESI + 0x270c],0x7149f2ca ; 0042c1e0
    MOV dword ptr [ESI + 0x2710],0xbf800000 ; 0042c1ea
    MOV dword ptr [ESI + 0x2740],0x0    ; 0042c1f4
    MOV EBX,0x40000000                  ; 0042c1fe
    MOV dword ptr [ESI + 0x2538],0x42c80000 ; 0042c203
    XOR EDX,EDX                         ; 0042c20d
    LEA EAX,[ESP + 0x18]                ; 0042c20f
    MOV dword ptr [ESP + 0x18],EDX      ; 0042c213
    MOV dword ptr [ESP + 0x20],EBX      ; 0042c217
    LEA EBX,[ESI + 0x2744]              ; 0042c21b
    MOV dword ptr [ESP + 0x1c],EDX      ; 0042c221
    CMP EBX,EAX                         ; 0042c225
    JZ 0x0042c235                       ; 0042c227
        ;   XREF to: 0042c235 (CONDITIONAL_JUMP)  ; LAB_0042c235
    MOV dword ptr [EBX + 0x4],EDX       ; 0042c229
    MOV dword ptr [EBX],EDX             ; 0042c22c
    MOV EAX,dword ptr [ESP + 0x20]      ; 0042c22e
    MOV dword ptr [EBX + 0x8],EAX       ; 0042c232
    MOV dword ptr [ESI + 0x2774],0xffffffff ; 0042c235
        ;   Label: LAB_0042c235
    MOV dword ptr [ESI + 0x2778],0x0    ; 0042c23f
    PUSH 0xf0                           ; 0042c249
    MOV dword ptr [ESI + 0x277c],0x0    ; 0042c24e
    PUSH 0x0                            ; 0042c258
    LEA EBX,[ESI + 0x25a8]              ; 0042c25a
    MOV dword ptr [ESI + 0x2780],0x0    ; 0042c260
    PUSH EBX                            ; 0042c26a
    MOV dword ptr [ESI + 0x2784],0x0    ; 0042c26b
    LEA EBP,[EBX + 0x48]                ; 0042c275
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0042c278
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    LEA EDI,[EBX + 0xc]                 ; 0042c27d
    ADD ESP,0xc                         ; 0042c280
    MOV EBX,ESI                         ; 0042c283
    LEA EAX,[ESI + 0xf0]                ; 0042c285
    MOV dword ptr [ESP + 0x30],EAX      ; 0042c28b
    MOV dword ptr [EBX + 0x25b0],0x0    ; 0042c28f
        ;   Label: LAB_0042c28f
    MOV dword ptr [EBX + 0x25a8],0xffffffff ; 0042c299
    PUSH EDI                            ; 0042c2a3
    MOV dword ptr [EBX + 0x25ac],0xffffffff ; 0042c2a4
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005b53f0 ; 0042c2ae
        ;   XREF to: 005b53f0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setIdentityMatrix3x4_FUN_005b53f0()
    ADD ESP,0x4                         ; 0042c2b3
    ADD EBX,0x78                        ; 0042c2b6
    PUSH EBP                            ; 0042c2b9
    MOV dword ptr [EBX + 0x2570],0x3f800000 ; 0042c2ba
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005b53f0 ; 0042c2c4
        ;   XREF to: 005b53f0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setIdentityMatrix3x4_FUN_005b53f0()
    ADD ESP,0x4                         ; 0042c2c9
    ADD EDI,0x78                        ; 0042c2cc
    MOV EAX,dword ptr [ESP + 0x30]      ; 0042c2cf
    ADD EBP,0x78                        ; 0042c2d3
    CMP EBX,EAX                         ; 0042c2d6
    JNZ 0x0042c28f                      ; 0042c2d8
        ;   XREF to: 0042c28f (CONDITIONAL_JUMP)  ; LAB_0042c28f
    MOV dword ptr [ESI + 0x2768],0x0    ; 0042c2da
    MOV dword ptr [ESI + 0x276c],0x0    ; 0042c2e4
    MOV dword ptr [ESI + 0x2770],0x0    ; 0042c2ee
    MOV dword ptr [ESI + 0x2760],0x0    ; 0042c2f8
    MOV dword ptr [ESI + 0x2764],0x0    ; 0042c302
    MOV dword ptr [ESI + 0x27a0],0x0    ; 0042c30c
    MOV dword ptr [ESI + 0xb9e8],0x0    ; 0042c316
    MOV dword ptr [ESI + 0x27a4],0x0    ; 0042c320
    MOV dword ptr [ESI + 0x27a8],0x0    ; 0042c32a
    MOV dword ptr [ESI + 0x27ac],0x0    ; 0042c334
    MOV dword ptr [ESI + 0x27b0],0x0    ; 0042c33e
    MOV dword ptr [ESI + 0x26fc],0x0    ; 0042c348
    MOV dword ptr [ESI + 0x2700],0x0    ; 0042c352
    MOV dword ptr [ESI + 0x27b4],0x0    ; 0042c35c
    MOV dword ptr [ESI + 0xb9f0],0x0    ; 0042c366
    MOV dword ptr [ESI + 0x27b8],0x3f800000 ; 0042c370
    MOV dword ptr [ESI + 0x27bc],0x0    ; 0042c37a
    MOV dword ptr [ESI + 0x27c4],0x0    ; 0042c384
    MOV dword ptr [ESI + 0x2c98],0x0    ; 0042c38e
    MOV dword ptr [ESI + 0x2c9c],0x0    ; 0042c398
    MOV dword ptr [ESI + 0x27c0],0x1    ; 0042c3a2
    MOV dword ptr [ESI + 0x2540],0x0    ; 0042c3ac
    MOV byte ptr [ESI + 0x2544],0x0     ; 0042c3b6
    MOV dword ptr [ESI + 0x2e5c],0x0    ; 0042c3bd
    MOV dword ptr [ESI + 0x2e60],0x0    ; 0042c3c7
    MOV dword ptr [ESI + 0x2e64],0x0    ; 0042c3d1
    MOV dword ptr [ESI + 0x2fd0],0x0    ; 0042c3db
    MOV EDX,0x461c1800                  ; 0042c3e5
    MOV dword ptr [ESI + 0x2fe0],0x0    ; 0042c3ea
    LEA EAX,[ESP + 0xc]                 ; 0042c3f4
    MOV dword ptr [ESI + 0x2714],0x0    ; 0042c3f8
    LEA EBX,[ESI + 0x2718]              ; 0042c402
    MOV byte ptr [ESI + 0x2698],0x0     ; 0042c408
    XOR ECX,ECX                         ; 0042c40f
    MOV dword ptr [ESP + 0xc],EDX       ; 0042c411
    MOV dword ptr [ESP + 0x10],ECX      ; 0042c415
    MOV dword ptr [ESP + 0x14],EDX      ; 0042c419
    CMP EBX,EAX                         ; 0042c41d
    JZ 0x0042c431                       ; 0042c41f
        ;   XREF to: 0042c431 (CONDITIONAL_JUMP)  ; LAB_0042c431
    MOV dword ptr [EBX],EDX             ; 0042c421
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042c423
    MOV dword ptr [EBX + 0x4],EAX       ; 0042c427
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042c42a
    MOV dword ptr [EBX + 0x8],EAX       ; 0042c42e
    MOV EDI,0x45f2d000                  ; 0042c431
        ;   Label: LAB_0042c431
    LEA EAX,[ESP + 0x24]                ; 0042c436
    XOR EBP,EBP                         ; 0042c43a
    LEA EBX,[ESI + 0x2724]              ; 0042c43c
    MOV dword ptr [ESP + 0x28],EBP      ; 0042c442
    MOV dword ptr [ESP + 0x2c],EDI      ; 0042c446
    MOV dword ptr [ESP + 0x24],EDI      ; 0042c44a
    CMP EBX,EAX                         ; 0042c44e
    JZ 0x0042c462                       ; 0042c450
        ;   XREF to: 0042c462 (CONDITIONAL_JUMP)  ; LAB_0042c462
    MOV dword ptr [EBX],EDI             ; 0042c452
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042c454
    MOV dword ptr [EBX + 0x4],EAX       ; 0042c458
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042c45b
    MOV dword ptr [EBX + 0x8],EAX       ; 0042c45f
    MOV EDX,0x45ad7000                  ; 0042c462
        ;   Label: LAB_0042c462
    MOV EAX,ESP                         ; 0042c467
    XOR ECX,ECX                         ; 0042c469
    LEA EBX,[ESI + 0x2730]              ; 0042c46b
    MOV dword ptr [ESP + 0x4],ECX       ; 0042c471
    MOV dword ptr [ESP + 0x8],EDX       ; 0042c475
    MOV dword ptr [ESP],EDX             ; 0042c479
    CMP EBX,EAX                         ; 0042c47c
    JNZ 0x0042c4f0                      ; 0042c47e
        ;   XREF to: 0042c4f0 (CONDITIONAL_JUMP)  ; LAB_0042c4f0
    MOV dword ptr [ESI + 0x2530],0x40490fdb ; 0042c480
        ;   Label: LAB_0042c480
    MOV dword ptr [ESI + 0x252c],0x40c90fdb ; 0042c48a
    MOV dword ptr [ESI + 0x2534],0x40490fdb ; 0042c494
    MOV dword ptr [ESI + 0xc184],0x0    ; 0042c49e
    MOV dword ptr [ESI + 0xc188],0x0    ; 0042c4a8
    MOV dword ptr [ESI + 0xc18c],0x0    ; 0042c4b2
    MOV dword ptr [ESI + 0xc198],0x0    ; 0042c4bc
    MOV dword ptr [ESI + 0xc190],0x0    ; 0042c4c6
    FLD float ptr [0x005fd618]          ; 0042c4d0 | DAT_005fd618
    MOV dword ptr [ESI + 0xc19c],0xfffffffe ; 0042c4d6
    MOV EAX,ESI                         ; 0042c4e0
    FSTP float ptr [ESI + 0xc194]       ; 0042c4e2
    ADD ESP,0x34                        ; 0042c4e8
    POP EBP                             ; 0042c4eb
    POP EDI                             ; 0042c4ec
    POP ESI                             ; 0042c4ed
    POP EBX                             ; 0042c4ee
    RET                                 ; 0042c4ef
    MOV dword ptr [EBX],EDX             ; 0042c4f0
        ;   Label: LAB_0042c4f0
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042c4f2
    MOV dword ptr [EBX + 0x4],EAX       ; 0042c4f6
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042c4f9
    MOV dword ptr [EBX + 0x8],EAX       ; 0042c4fd
    JMP 0x0042c480                      ; 0042c500
        ;   XREF to: 0042c480 (UNCONDITIONAL_JUMP)  ; LAB_0042c480

