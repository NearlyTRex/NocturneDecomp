; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_ctor_FUN_00423f40(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[3]:
;   core_enemy.cpp_CEnemy_ctor_FUN_00479560 at 0047956b
;   core_hero.cpp_FUN_004b46d0 at 004b46d6
;   core_npc.cpp_FUN_004ee950 at 004ee956
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;   WatcomTypeInfo g_CFlameTypeInfo_00599940
;   WatcomTypeInfo g_SFireTypeInfo_00599960
;   void* PTR_core_charactr.cpp_CCharacter_setup_FUN_00424260_0059b0a4 = 00424260
;
; Called Functions:
;   core_actor.cpp_FUN_00409d30
;   core_cloth.cpp_CClothList_ctor_FUN_00438210
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0051b660
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 00423f40
        ;   Label: core_charactr.cpp_CCharacter_ctor_FUN_00423f40
    MOV EDX,dword ptr [ESP + 0x10]      ; 00423f43
    PUSH EDX                            ; 00423f47
    CALL core_actor.cpp_FUN_00409d30    ; 00423f48
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00409d30()
    ADD ESP,0x4                         ; 00423f4d
    ADD EAX,0x150                       ; 00423f50
    PUSH EAX                            ; 00423f55
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0051b660 ; 00423f56
        ;   XREF to: 0051b660 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0051b660()
    ADD ESP,0x4                         ; 00423f5b
    ADD EAX,0x293c                      ; 00423f5e
    PUSH EAX                            ; 00423f63
    CALL core_cloth.cpp_CClothList_ctor_FUN_00438210 ; 00423f64
        ;   XREF to: 00438210 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CClothList_ctor_FUN_00438210()
    ADD ESP,0x4                         ; 00423f69
    PUSH 0x5993b0                       ; 00423f6c | g_CVectorTypeInfo_005993b0
    PUSH 0xf                            ; 00423f71
    ADD EAX,0x1c8                       ; 00423f73
    PUSH EAX                            ; 00423f78
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00423f79
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 00423f7e
    PUSH 0x5993b0                       ; 00423f81 | g_CVectorTypeInfo_005993b0
    PUSH 0xf                            ; 00423f86
    ADD EAX,0xb4                        ; 00423f88
    PUSH EAX                            ; 00423f8d
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00423f8e
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 00423f93
    PUSH 0x599960                       ; 00423f96 | g_SFireTypeInfo_00599960
    PUSH 0x32                           ; 00423f9b
    ADD EAX,0x20c                       ; 00423f9d
    PUSH EAX                            ; 00423fa2
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00423fa3
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 00423fa8
    PUSH 0x599940                       ; 00423fab | g_CFlameTypeInfo_00599940
    PUSH 0x32                           ; 00423fb0
    ADD EAX,0x4b0                       ; 00423fb2
    PUSH EAX                            ; 00423fb7
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00423fb8
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    LEA EDX,[EAX + 0xffffcc3c]          ; 00423fbd
    MOV dword ptr [EDX + 0x14c],0x59b0a4 ; 00423fc3 | PTR_core_charactr.cpp_CCharacter_setup_FUN_00424260_0059b0a4
    LEA EAX,[EDX + 0x2420]              ; 00423fcd
    MOV dword ptr [EDX + 0x2404],0x0    ; 00423fd3
    MOV dword ptr [EAX + 0x8],0x0       ; 00423fdd
    ADD ESP,0xc                         ; 00423fe4
    MOV ECX,dword ptr [EAX + 0x8]       ; 00423fe7
    MOV dword ptr [EAX + 0x4],ECX       ; 00423fea
    MOV ECX,dword ptr [EAX + 0x4]       ; 00423fed
    MOV dword ptr [EAX],ECX             ; 00423ff0
    PUSH ESI                            ; 00423ff2
    MOV dword ptr [EDX + 0x2438],0x42c80000 ; 00423ff3
    MOV dword ptr [EDX + 0x2dd4],0x3f800000 ; 00423ffd
    MOV dword ptr [EDX + 0x2dd8],0x40000000 ; 00424007
    MOV dword ptr [EDX + 0x2ddc],0x41a00000 ; 00424011
    MOV dword ptr [EDX + 0x2de0],0x42480000 ; 0042401b
    MOV dword ptr [EDX + 0x2de4],0x40000000 ; 00424025
    MOV dword ptr [EDX + 0x2de8],0xc479c000 ; 0042402f
    MOV dword ptr [EDX + 0x2dec],0x0    ; 00424039
    MOV dword ptr [EDX + 0x2f08],0x0    ; 00424043
    MOV dword ptr [EDX + 0x2f10],0x40000000 ; 0042404d
    MOV dword ptr [EDX + 0x25c0],0xffffffff ; 00424057
    MOV dword ptr [EDX + 0x25bc],0xffffffff ; 00424061
    MOV dword ptr [EDX + 0x2dd0],0x0    ; 0042406b
    MOV dword ptr [EDX + 0x25a8],0x0    ; 00424075
    MOV dword ptr [EDX + 0x2598],0x0    ; 0042407f
    MOV dword ptr [EDX + 0x259c],0x40400000 ; 00424089
    MOV dword ptr [EDX + 0x25a0],0x7149f2ca ; 00424093
    MOV dword ptr [EDX + 0x25a4],0xbf800000 ; 0042409d
    MOV dword ptr [EDX + 0x25ac],0x0    ; 004240a7
    MOV ESI,0x40000000                  ; 004240b1
    MOV dword ptr [EDX + 0x2434],0x42c80000 ; 004240b6
    XOR ECX,ECX                         ; 004240c0
    LEA EAX,[ESP + 0x4]                 ; 004240c2
    MOV dword ptr [ESP + 0x4],ECX       ; 004240c6
    MOV dword ptr [ESP + 0x8],ECX       ; 004240ca
    LEA ECX,[EDX + 0x25b0]              ; 004240ce
    MOV dword ptr [ESP + 0xc],ESI       ; 004240d4
    CMP ECX,EAX                         ; 004240d8
    JNZ 0x00424244                      ; 004240da
        ;   XREF to: 00424244 (CONDITIONAL_JUMP)  ; LAB_00424244
    MOV dword ptr [EDX + 0x25e0],0x0    ; 004240e0
        ;   Label: LAB_004240e0
    MOV dword ptr [EDX + 0x25e4],0x0    ; 004240ea
    MOV dword ptr [EDX + 0x25e8],0x0    ; 004240f4
    MOV dword ptr [EDX + 0x25ec],0x0    ; 004240fe
    MOV EAX,EDX                         ; 00424108
    MOV dword ptr [EDX + 0x25dc],0xffffffff ; 0042410a
    LEA ECX,[EDX + 0x88]                ; 00424114
    POP ESI                             ; 0042411a
    ADD EAX,0x44                        ; 0042411b
        ;   Label: LAB_0042411b
    MOV dword ptr [EAX + 0x2460],0xffffffff ; 0042411e
    MOV dword ptr [EAX + 0x2464],0xffffffff ; 00424128
    MOV dword ptr [EAX + 0x2468],0x0    ; 00424132
    CMP EAX,ECX                         ; 0042413c
    JNZ 0x0042411b                      ; 0042413e
        ;   XREF to: 0042411b (CONDITIONAL_JUMP)  ; LAB_0042411b
    MOV dword ptr [EDX + 0x25d0],0x0    ; 00424140
    MOV dword ptr [EDX + 0x25d4],0x0    ; 0042414a
    MOV dword ptr [EDX + 0x25d8],0x0    ; 00424154
    MOV dword ptr [EDX + 0x25c8],0x0    ; 0042415e
    MOV dword ptr [EDX + 0x25cc],0x0    ; 00424168
    MOV dword ptr [EDX + 0x2608],0x0    ; 00424172
    MOV dword ptr [EDX + 0xb640],0x0    ; 0042417c
    MOV dword ptr [EDX + 0x260c],0x0    ; 00424186
    MOV dword ptr [EDX + 0x2590],0x0    ; 00424190
    MOV dword ptr [EDX + 0x2594],0x0    ; 0042419a
    MOV dword ptr [EDX + 0x2610],0x0    ; 004241a4
    MOV dword ptr [EDX + 0xb648],0x0    ; 004241ae
    MOV dword ptr [EDX + 0x2614],0x3f800000 ; 004241b8
    MOV dword ptr [EDX + 0x2618],0x0    ; 004241c2
    MOV dword ptr [EDX + 0x2620],0x0    ; 004241cc
    MOV dword ptr [EDX + 0x2a84],0x0    ; 004241d6
    MOV dword ptr [EDX + 0x2a88],0x0    ; 004241e0
    MOV dword ptr [EDX + 0x261c],0x1    ; 004241ea
    MOV dword ptr [EDX + 0x243c],0x0    ; 004241f4
    MOV byte ptr [EDX + 0x2440],0x0     ; 004241fe
    MOV dword ptr [EDX + 0x2c48],0x0    ; 00424205
    MOV dword ptr [EDX + 0x2c4c],0x0    ; 0042420f
    MOV dword ptr [EDX + 0x2c50],0x0    ; 00424219
    MOV dword ptr [EDX + 0x2dbc],0x0    ; 00424223
    MOV dword ptr [EDX + 0x2dcc],0x0    ; 0042422d
    MOV EAX,EDX                         ; 00424237
    MOV byte ptr [EDX + 0x252c],0x0     ; 00424239
    ADD ESP,0xc                         ; 00424240
    RET                                 ; 00424243
    MOV dword ptr [ECX],0x0             ; 00424244
        ;   Label: LAB_00424244
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042424a
    MOV dword ptr [ECX + 0x4],EAX       ; 0042424e
    MOV EAX,dword ptr [ESP + 0xc]       ; 00424251
    MOV dword ptr [ECX + 0x8],EAX       ; 00424255
    JMP 0x004240e0                      ; 00424258
        ;   XREF to: 004240e0 (UNCONDITIONAL_JUMP)  ; LAB_004240e0

