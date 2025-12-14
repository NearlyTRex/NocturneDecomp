; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CCharacter * core_charactr.cpp_CCharacter_ctor_FUN_00427e20(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[3]:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500 at 004a950b
;   core_hero.cpp_FUN_004f2340 at 004f2346
;   core_npc.cpp_FUN_005447e0 at 005447e6
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;   WatcomTypeInfo g_CFlameTypeInfo
;   WatcomTypeInfo g_SFireTypeInfo
;   CDemonActor_vtable g_CCharacterVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_cloth.cpp_FUN_0043bf40
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 00427e20
        ;   Label: core_charactr.cpp_CCharacter_ctor_FUN_00427e20
    MOV EDX,dword ptr [ESP + 0x10]      ; 00427e23
    PUSH EDX                            ; 00427e27
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 00427e28
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00427e2d
    ADD EAX,0x158                       ; 00427e30
    PUSH EAX                            ; 00427e35
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0 ; 00427e36
        ;   XREF to: 0059ddc0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00427e3b
    ADD EAX,0x293c                      ; 00427e3e
    PUSH EAX                            ; 00427e43
    CALL core_cloth.cpp_FUN_0043bf40    ; 00427e44
        ;   XREF to: 0043bf40 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043bf40()
    ADD ESP,0x4                         ; 00427e49
    PUSH 0x6598c0                       ; 00427e4c | g_CVectorTypeInfo
    PUSH 0xf                            ; 00427e51
    ADD EAX,0x1c8                       ; 00427e53
    PUSH EAX                            ; 00427e58
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00427e59
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00427e5e
    PUSH 0x6598c0                       ; 00427e61 | g_CVectorTypeInfo
    PUSH 0xf                            ; 00427e66
    ADD EAX,0xb4                        ; 00427e68
    PUSH EAX                            ; 00427e6d
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00427e6e
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00427e73
    PUSH 0x659f00                       ; 00427e76 | g_SFireTypeInfo
    PUSH 0x32                           ; 00427e7b
    ADD EAX,0x20c                       ; 00427e7d
    PUSH EAX                            ; 00427e82
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00427e83
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00427e88
    PUSH 0x659ee0                       ; 00427e8b | g_CFlameTypeInfo
    PUSH 0x32                           ; 00427e90
    ADD EAX,0x4b0                       ; 00427e92
    PUSH EAX                            ; 00427e97
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00427e98
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    LEA EDX,[EAX + 0xffffcc34]          ; 00427e9d
    MOV dword ptr [EDX + 0x154],0x65b844 ; 00427ea3 | g_CCharacterVTable
    LEA EAX,[EDX + 0x2428]              ; 00427ead
    MOV dword ptr [EDX + 0x240c],0x0    ; 00427eb3
    MOV dword ptr [EAX + 0x8],0x0       ; 00427ebd
    ADD ESP,0xc                         ; 00427ec4
    MOV ECX,dword ptr [EAX + 0x8]       ; 00427ec7
    MOV dword ptr [EAX + 0x4],ECX       ; 00427eca
    MOV ECX,dword ptr [EAX + 0x4]       ; 00427ecd
    MOV dword ptr [EAX],ECX             ; 00427ed0
    PUSH ESI                            ; 00427ed2
    MOV dword ptr [EDX + 0x2440],0x42c80000 ; 00427ed3
    MOV dword ptr [EDX + 0x2ddc],0x3f800000 ; 00427edd
    MOV dword ptr [EDX + 0x2de0],0x40000000 ; 00427ee7
    MOV dword ptr [EDX + 0x2de4],0x41a00000 ; 00427ef1
    MOV dword ptr [EDX + 0x2de8],0x42480000 ; 00427efb
    MOV dword ptr [EDX + 0x2dec],0x40000000 ; 00427f05
    MOV dword ptr [EDX + 0x2df0],0xc479c000 ; 00427f0f
    MOV dword ptr [EDX + 0x2df4],0x0    ; 00427f19
    MOV dword ptr [EDX + 0x2f10],0x0    ; 00427f23
    MOV dword ptr [EDX + 0x2f18],0x40000000 ; 00427f2d
    MOV dword ptr [EDX + 0x25c8],0xffffffff ; 00427f37
    MOV dword ptr [EDX + 0x25c4],0xffffffff ; 00427f41
    MOV dword ptr [EDX + 0x2dd8],0x0    ; 00427f4b
    MOV dword ptr [EDX + 0x25b0],0x0    ; 00427f55
    MOV dword ptr [EDX + 0x25a0],0x0    ; 00427f5f
    MOV dword ptr [EDX + 0x25a4],0x40400000 ; 00427f69
    MOV dword ptr [EDX + 0x25a8],0x7149f2ca ; 00427f73
    MOV dword ptr [EDX + 0x25ac],0xbf800000 ; 00427f7d
    MOV dword ptr [EDX + 0x25b4],0x0    ; 00427f87
    MOV ESI,0x40000000                  ; 00427f91
    MOV dword ptr [EDX + 0x243c],0x42c80000 ; 00427f96
    XOR ECX,ECX                         ; 00427fa0
    LEA EAX,[ESP + 0x4]                 ; 00427fa2
    MOV dword ptr [ESP + 0x4],ECX       ; 00427fa6
    MOV dword ptr [ESP + 0x8],ECX       ; 00427faa
    LEA ECX,[EDX + 0x25b8]              ; 00427fae
    MOV dword ptr [ESP + 0xc],ESI       ; 00427fb4
    CMP ECX,EAX                         ; 00427fb8
    JNZ 0x00428124                      ; 00427fba
        ;   XREF to: 00428124 (CONDITIONAL_JUMP)  ; LAB_00428124
    MOV dword ptr [EDX + 0x25e8],0x0    ; 00427fc0
        ;   Label: LAB_00427fc0
    MOV dword ptr [EDX + 0x25ec],0x0    ; 00427fca
    MOV dword ptr [EDX + 0x25f0],0x0    ; 00427fd4
    MOV dword ptr [EDX + 0x25f4],0x0    ; 00427fde
    MOV EAX,EDX                         ; 00427fe8
    MOV dword ptr [EDX + 0x25e4],0xffffffff ; 00427fea
    LEA ECX,[EDX + 0x88]                ; 00427ff4
    POP ESI                             ; 00427ffa
    ADD EAX,0x44                        ; 00427ffb
        ;   Label: LAB_00427ffb
    MOV dword ptr [EAX + 0x2468],0xffffffff ; 00427ffe
    MOV dword ptr [EAX + 0x246c],0xffffffff ; 00428008
    MOV dword ptr [EAX + 0x2470],0x0    ; 00428012
    CMP EAX,ECX                         ; 0042801c
    JNZ 0x00427ffb                      ; 0042801e
        ;   XREF to: 00427ffb (CONDITIONAL_JUMP)  ; LAB_00427ffb
    MOV dword ptr [EDX + 0x25d8],0x0    ; 00428020
    MOV dword ptr [EDX + 0x25dc],0x0    ; 0042802a
    MOV dword ptr [EDX + 0x25e0],0x0    ; 00428034
    MOV dword ptr [EDX + 0x25d0],0x0    ; 0042803e
    MOV dword ptr [EDX + 0x25d4],0x0    ; 00428048
    MOV dword ptr [EDX + 0x2610],0x0    ; 00428052
    MOV dword ptr [EDX + 0xb7d8],0x0    ; 0042805c
    MOV dword ptr [EDX + 0x2614],0x0    ; 00428066
    MOV dword ptr [EDX + 0x2598],0x0    ; 00428070
    MOV dword ptr [EDX + 0x259c],0x0    ; 0042807a
    MOV dword ptr [EDX + 0x2618],0x0    ; 00428084
    MOV dword ptr [EDX + 0xb7e0],0x0    ; 0042808e
    MOV dword ptr [EDX + 0x261c],0x3f800000 ; 00428098
    MOV dword ptr [EDX + 0x2620],0x0    ; 004280a2
    MOV dword ptr [EDX + 0x2628],0x0    ; 004280ac
    MOV dword ptr [EDX + 0x2a8c],0x0    ; 004280b6
    MOV dword ptr [EDX + 0x2a90],0x0    ; 004280c0
    MOV dword ptr [EDX + 0x2624],0x1    ; 004280ca
    MOV dword ptr [EDX + 0x2444],0x0    ; 004280d4
    MOV byte ptr [EDX + 0x2448],0x0     ; 004280de
    MOV dword ptr [EDX + 0x2c50],0x0    ; 004280e5
    MOV dword ptr [EDX + 0x2c54],0x0    ; 004280ef
    MOV dword ptr [EDX + 0x2c58],0x0    ; 004280f9
    MOV dword ptr [EDX + 0x2dc4],0x0    ; 00428103
    MOV dword ptr [EDX + 0x2dd4],0x0    ; 0042810d
    MOV EAX,EDX                         ; 00428117
    MOV byte ptr [EDX + 0x2534],0x0     ; 00428119
    ADD ESP,0xc                         ; 00428120
    RET                                 ; 00428123
    MOV dword ptr [ECX],0x0             ; 00428124
        ;   Label: LAB_00428124
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042812a
    MOV dword ptr [ECX + 0x4],EAX       ; 0042812e
    MOV EAX,dword ptr [ESP + 0xc]       ; 00428131
    MOV dword ptr [ECX + 0x8],EAX       ; 00428135
    JMP 0x00427fc0                      ; 00428138
        ;   XREF to: 00427fc0 (UNCONDITIONAL_JUMP)  ; LAB_00427fc0

