; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCharacter * core_charactr_cpp_CCharacter_ctor_FUN_0042ac20(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_bird.cpp_CBird_ctor_FUN_0040f9f0 at 0040f9f9
;   core_enemy.cpp_CEnemy_ctor_FUN_00488fd0 at 00488fdb
;   core_hero.cpp_CHero_ctor_FUN_004d24b0 at 004d24b6
;   core_moocow.cpp_CMooCow_ctor_FUN_004f8b40 at 004f8b46
;   core_npc.cpp_CNPC_ctor_FUN_00508f40 at 00508f49
;   core_spireagl.cpp_CSpiritEagle_ctor_FUN_005991d0 at 005991db
;
; Referenced Globals:
;   undefined4 DAT_005dd238
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   core_cloth.cpp_CClothList_ctor_FUN_0043f8c0
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0054bf00
;   core_xform.cpp_setIdentityMatrix3x4_FUN_005835d0
;   crt_memory.c___arrinit_FUN_005a30d7
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042ac20
        ;   Label: core_charactr.cpp_CCharacter_ctor_FUN_0042ac20
    PUSH ESI                            ; 0042ac21
    PUSH EDI                            ; 0042ac22
    PUSH EBP                            ; 0042ac23
    SUB ESP,0x34                        ; 0042ac24
    MOV ESI,dword ptr [ESP + 0x48]      ; 0042ac27
    PUSH ESI                            ; 0042ac2b
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 0042ac2c
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042ac31
    ADD EAX,0x158                       ; 0042ac34
    PUSH EAX                            ; 0042ac39
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0054bf00 ; 0042ac3a
        ;   XREF to: 0054bf00 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0054bf00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042ac3f
    ADD EAX,0x2db0                      ; 0042ac42
    PUSH EAX                            ; 0042ac47
    CALL core_cloth.cpp_CClothList_ctor_FUN_0043f8c0 ; 0042ac48
        ;   XREF to: 0043f8c0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_ctor_FUN_0043f8c0(CClothList * this_ptr)
    ADD ESP,0x4                         ; 0042ac4d
    PUSH 0x5db0f0                       ; 0042ac50
    PUSH 0xf                            ; 0042ac55
    ADD EAX,0x1c8                       ; 0042ac57
    PUSH EAX                            ; 0042ac5c
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0042ac5d
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 0042ac62
    PUSH 0x5db0f0                       ; 0042ac65
    PUSH 0xf                            ; 0042ac6a
    ADD EAX,0xb4                        ; 0042ac6c
    PUSH EAX                            ; 0042ac71
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0042ac72
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 0042ac77
    PUSH 0x5dd390                       ; 0042ac7a
    PUSH 0x32                           ; 0042ac7f
    ADD EAX,0x228                       ; 0042ac81
    PUSH EAX                            ; 0042ac86
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0042ac87
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 0042ac8c
    PUSH 0x5dbca0                       ; 0042ac8f
    PUSH 0x32                           ; 0042ac94
    ADD EAX,0x4b0                       ; 0042ac96
    PUSH EAX                            ; 0042ac9b
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0042ac9c
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    LEA ESI,[EAX + 0xffffc7a4]          ; 0042aca1
    MOV dword ptr [ESI + 0x154],0x5dd244 ; 0042aca7
    LEA EAX,[ESI + 0x2518]              ; 0042acb1
    MOV dword ptr [ESI + 0x24fc],0x0    ; 0042acb7
    MOV dword ptr [EAX + 0x8],0x0       ; 0042acc1
    ADD ESP,0xc                         ; 0042acc8
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042accb
    MOV dword ptr [EAX + 0x4],EDX       ; 0042acce
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042acd1
    MOV dword ptr [EAX],EDX             ; 0042acd4
    MOV dword ptr [ESI + 0x253c],0x42c80000 ; 0042acd6
    MOV dword ptr [ESI + 0x326c],0x3f800000 ; 0042ace0
    MOV dword ptr [ESI + 0x3270],0x40000000 ; 0042acea
    MOV dword ptr [ESI + 0x3274],0x41a00000 ; 0042acf4
    MOV dword ptr [ESI + 0x3278],0x42480000 ; 0042acfe
    MOV dword ptr [ESI + 0x327c],0x40000000 ; 0042ad08
    MOV dword ptr [ESI + 0x3280],0xc479c000 ; 0042ad12
    MOV dword ptr [ESI + 0x3284],0x0    ; 0042ad1c
    MOV dword ptr [ESI + 0x33a0],0x0    ; 0042ad26
    MOV dword ptr [ESI + 0x33a8],0x40000000 ; 0042ad30
    MOV dword ptr [ESI + 0x2754],0xffffffff ; 0042ad3a
    MOV dword ptr [ESI + 0x275c],0x0    ; 0042ad44
    MOV dword ptr [ESI + 0x2750],0xffffffff ; 0042ad4e
    MOV dword ptr [ESI + 0x324c],0x0    ; 0042ad58
    MOV dword ptr [ESI + 0x273c],0x0    ; 0042ad62
    MOV dword ptr [ESI + 0x2704],0x0    ; 0042ad6c
    MOV dword ptr [ESI + 0x2708],0x40400000 ; 0042ad76
    MOV dword ptr [ESI + 0x270c],0x7149f2ca ; 0042ad80
    MOV dword ptr [ESI + 0x2710],0xbf800000 ; 0042ad8a
    MOV dword ptr [ESI + 0x2740],0x0    ; 0042ad94
    MOV EBX,0x40000000                  ; 0042ad9e
    MOV dword ptr [ESI + 0x2538],0x42c80000 ; 0042ada3
    XOR EDX,EDX                         ; 0042adad
    LEA EAX,[ESP + 0x18]                ; 0042adaf
    MOV dword ptr [ESP + 0x18],EDX      ; 0042adb3
    MOV dword ptr [ESP + 0x20],EBX      ; 0042adb7
    LEA EBX,[ESI + 0x2744]              ; 0042adbb
    MOV dword ptr [ESP + 0x1c],EDX      ; 0042adc1
    CMP EBX,EAX                         ; 0042adc5
    JZ 0x0042add5                       ; 0042adc7
        ;   XREF to: 0042add5 (CONDITIONAL_JUMP)  ; LAB_0042add5
    MOV dword ptr [EBX + 0x4],EDX       ; 0042adc9
    MOV dword ptr [EBX],EDX             ; 0042adcc
    MOV EAX,dword ptr [ESP + 0x20]      ; 0042adce
    MOV dword ptr [EBX + 0x8],EAX       ; 0042add2
    MOV dword ptr [ESI + 0x2774],0xffffffff ; 0042add5
        ;   Label: LAB_0042add5
    MOV dword ptr [ESI + 0x2778],0x0    ; 0042addf
    PUSH 0xf0                           ; 0042ade9
    MOV dword ptr [ESI + 0x277c],0x0    ; 0042adee
    PUSH 0x0                            ; 0042adf8
    LEA EBX,[ESI + 0x25a8]              ; 0042adfa
    MOV dword ptr [ESI + 0x2780],0x0    ; 0042ae00
    PUSH EBX                            ; 0042ae0a
    MOV dword ptr [ESI + 0x2784],0x0    ; 0042ae0b
    LEA EBP,[EBX + 0x48]                ; 0042ae15
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0042ae18
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    LEA EDI,[EBX + 0xc]                 ; 0042ae1d
    ADD ESP,0xc                         ; 0042ae20
    MOV EBX,ESI                         ; 0042ae23
    LEA EAX,[ESI + 0xf0]                ; 0042ae25
    MOV dword ptr [ESP + 0x30],EAX      ; 0042ae2b
    MOV dword ptr [EBX + 0x25b0],0x0    ; 0042ae2f
        ;   Label: LAB_0042ae2f
    MOV dword ptr [EBX + 0x25a8],0xffffffff ; 0042ae39
    PUSH EDI                            ; 0042ae43
    MOV dword ptr [EBX + 0x25ac],0xffffffff ; 0042ae44
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005835d0 ; 0042ae4e
        ;   XREF to: 005835d0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setIdentityMatrix3x4_FUN_005835d0()
    ADD ESP,0x4                         ; 0042ae53
    ADD EBX,0x78                        ; 0042ae56
    PUSH EBP                            ; 0042ae59
    MOV dword ptr [EBX + 0x2570],0x3f800000 ; 0042ae5a
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005835d0 ; 0042ae64
        ;   XREF to: 005835d0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setIdentityMatrix3x4_FUN_005835d0()
    ADD ESP,0x4                         ; 0042ae69
    ADD EDI,0x78                        ; 0042ae6c
    MOV EAX,dword ptr [ESP + 0x30]      ; 0042ae6f
    ADD EBP,0x78                        ; 0042ae73
    CMP EBX,EAX                         ; 0042ae76
    JNZ 0x0042ae2f                      ; 0042ae78
        ;   XREF to: 0042ae2f (CONDITIONAL_JUMP)  ; LAB_0042ae2f
    MOV dword ptr [ESI + 0x2768],0x0    ; 0042ae7a
    MOV dword ptr [ESI + 0x276c],0x0    ; 0042ae84
    MOV dword ptr [ESI + 0x2770],0x0    ; 0042ae8e
    MOV dword ptr [ESI + 0x2760],0x0    ; 0042ae98
    MOV dword ptr [ESI + 0x2764],0x0    ; 0042aea2
    MOV dword ptr [ESI + 0x27a0],0x0    ; 0042aeac
    MOV dword ptr [ESI + 0xbc68],0x0    ; 0042aeb6
    MOV dword ptr [ESI + 0x27a4],0x0    ; 0042aec0
    MOV dword ptr [ESI + 0x27a8],0x0    ; 0042aeca
    MOV dword ptr [ESI + 0x27ac],0x0    ; 0042aed4
    MOV dword ptr [ESI + 0x27b0],0x0    ; 0042aede
    MOV dword ptr [ESI + 0x26fc],0x0    ; 0042aee8
    MOV dword ptr [ESI + 0x2700],0x0    ; 0042aef2
    MOV dword ptr [ESI + 0x27b4],0x0    ; 0042aefc
    MOV dword ptr [ESI + 0xbc70],0x0    ; 0042af06
    MOV dword ptr [ESI + 0x27b8],0x3f800000 ; 0042af10
    MOV dword ptr [ESI + 0x27bc],0x0    ; 0042af1a
    MOV dword ptr [ESI + 0x27c4],0x0    ; 0042af24
    MOV dword ptr [ESI + 0x2f00],0x0    ; 0042af2e
    MOV dword ptr [ESI + 0x2f04],0x0    ; 0042af38
    MOV dword ptr [ESI + 0x27c0],0x1    ; 0042af42
    MOV dword ptr [ESI + 0x2540],0x0    ; 0042af4c
    MOV byte ptr [ESI + 0x2544],0x0     ; 0042af56
    MOV dword ptr [ESI + 0x3238],0x0    ; 0042af5d
    MOV EDX,0x461c1800                  ; 0042af67
    MOV dword ptr [ESI + 0x3248],0x0    ; 0042af6c
    LEA EAX,[ESP + 0xc]                 ; 0042af76
    MOV dword ptr [ESI + 0x2714],0x0    ; 0042af7a
    LEA EBX,[ESI + 0x2718]              ; 0042af84
    MOV byte ptr [ESI + 0x2698],0x0     ; 0042af8a
    XOR ECX,ECX                         ; 0042af91
    MOV dword ptr [ESP + 0xc],EDX       ; 0042af93
    MOV dword ptr [ESP + 0x10],ECX      ; 0042af97
    MOV dword ptr [ESP + 0x14],EDX      ; 0042af9b
    CMP EBX,EAX                         ; 0042af9f
    JZ 0x0042afb3                       ; 0042afa1
        ;   XREF to: 0042afb3 (CONDITIONAL_JUMP)  ; LAB_0042afb3
    MOV dword ptr [EBX],EDX             ; 0042afa3
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042afa5
    MOV dword ptr [EBX + 0x4],EAX       ; 0042afa9
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042afac
    MOV dword ptr [EBX + 0x8],EAX       ; 0042afb0
    MOV EDI,0x45f2d000                  ; 0042afb3
        ;   Label: LAB_0042afb3
    LEA EAX,[ESP + 0x24]                ; 0042afb8
    XOR EBP,EBP                         ; 0042afbc
    LEA EBX,[ESI + 0x2724]              ; 0042afbe
    MOV dword ptr [ESP + 0x28],EBP      ; 0042afc4
    MOV dword ptr [ESP + 0x2c],EDI      ; 0042afc8
    MOV dword ptr [ESP + 0x24],EDI      ; 0042afcc
    CMP EBX,EAX                         ; 0042afd0
    JZ 0x0042afe4                       ; 0042afd2
        ;   XREF to: 0042afe4 (CONDITIONAL_JUMP)  ; LAB_0042afe4
    MOV dword ptr [EBX],EDI             ; 0042afd4
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042afd6
    MOV dword ptr [EBX + 0x4],EAX       ; 0042afda
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042afdd
    MOV dword ptr [EBX + 0x8],EAX       ; 0042afe1
    MOV EDX,0x45ad7000                  ; 0042afe4
        ;   Label: LAB_0042afe4
    MOV EAX,ESP                         ; 0042afe9
    XOR ECX,ECX                         ; 0042afeb
    LEA EBX,[ESI + 0x2730]              ; 0042afed
    MOV dword ptr [ESP + 0x4],ECX       ; 0042aff3
    MOV dword ptr [ESP + 0x8],EDX       ; 0042aff7
    MOV dword ptr [ESP],EDX             ; 0042affb
    CMP EBX,EAX                         ; 0042affe
    JNZ 0x0042b0c6                      ; 0042b000
        ;   XREF to: 0042b0c6 (CONDITIONAL_JUMP)  ; LAB_0042b0c6
    MOV dword ptr [ESI + 0x2530],0x40c90fdb ; 0042b006
        ;   Label: LAB_0042b006
    MOV dword ptr [ESI + 0x252c],0x40c90fdb ; 0042b010
    MOV dword ptr [ESI + 0x2534],0x40490fdb ; 0042b01a
    MOV dword ptr [ESI + 0xcd78],0x0    ; 0042b024
    MOV dword ptr [ESI + 0xcd7c],0x0    ; 0042b02e
    MOV dword ptr [ESI + 0xcd80],0x0    ; 0042b038
    MOV dword ptr [ESI + 0xcd8c],0x0    ; 0042b042
    MOV dword ptr [ESI + 0xcd84],0x0    ; 0042b04c
    MOV dword ptr [ESI + 0xcd90],0xfffffffe ; 0042b056
    MOV dword ptr [ESI + 0x3254],0x0    ; 0042b060
    MOV dword ptr [ESI + 0x325c],0x0    ; 0042b06a
    MOV dword ptr [ESI + 0x3258],0x0    ; 0042b074
    MOV dword ptr [ESI + 0x3260],0x0    ; 0042b07e
    MOV dword ptr [ESI + 0xcdc4],0x0    ; 0042b088
    MOV dword ptr [ESI + 0xcdc8],0x0    ; 0042b092
    MOV dword ptr [ESI + 0x3264],0x1    ; 0042b09c
    FLD float ptr [0x005dd238]          ; 0042b0a6 | DAT_005dd238
    MOV dword ptr [ESI + 0x3268],0x0    ; 0042b0ac
    MOV EAX,ESI                         ; 0042b0b6
    FSTP float ptr [ESI + 0xcd88]       ; 0042b0b8
    ADD ESP,0x34                        ; 0042b0be
    POP EBP                             ; 0042b0c1
    POP EDI                             ; 0042b0c2
    POP ESI                             ; 0042b0c3
    POP EBX                             ; 0042b0c4
    RET                                 ; 0042b0c5
    MOV dword ptr [EBX],EDX             ; 0042b0c6
        ;   Label: LAB_0042b0c6
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042b0c8
    MOV dword ptr [EBX + 0x4],EAX       ; 0042b0cc
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042b0cf
    MOV dword ptr [EBX + 0x8],EAX       ; 0042b0d3
    JMP 0x0042b006                      ; 0042b0d6
        ;   XREF to: 0042b006 (UNCONDITIONAL_JUMP)  ; LAB_0042b006

