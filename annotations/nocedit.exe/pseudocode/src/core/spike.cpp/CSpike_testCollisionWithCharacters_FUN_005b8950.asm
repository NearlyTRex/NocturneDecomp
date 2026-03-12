; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_spike_cpp_CSpike_testCollisionWithCharacters_FUN_005b8950(CSpike *this_ptr)
;
; Parameters:
; CSpike *         Stack[0x4]:4   this_ptr
; Local Variables:
; CVector3f[8]     Stack[-0x1cc]:96  aCStack_1cc
; SDamageInfo      Stack[-0x16c]:60  SStack_16c
; SCollisionInfo   Stack[-0x130]:40  SStack_130
; CVector3f[2]     Stack[-0x108]:24  aCStack_108
; CBoundingBox3D   Stack[-0xec]:24  local_ec
; CBoundingBox3D   Stack[-0xd4]:24  CStack_d4
; CVector3f        Stack[-0xbc]:12  CStack_bc
; CVector3f        Stack[-0xb0]:12  CStack_b0
; CVector3f        Stack[-0xa4]:12  CStack_a4
; CVector3f        Stack[-0x98]:12  CStack_98
; CVector3f        Stack[-0x80]:12  CStack_80
; CVector3f        Stack[-0x74]:12  CStack_74
; CVector3f        Stack[-0x68]:12  CStack_68
; float            Stack[-0x5c]:4  fStack_5c
; float            Stack[-0x58]:4  fStack_58
; float            Stack[-0x54]:4  fStack_54
; CVector3f        Stack[-0x50]:12  CStack_50
; float            Stack[-0x44]:4  fStack_44
; float            Stack[-0x34]:4  fStack_34
; float            Stack[-0x30]:4  fStack_30
; float            Stack[-0x2c]:4  fStack_2c
; ECollisionType   Stack[-0x28]:4  EStack_28
; int              Stack[-0x24]:4  iStack_24
; CLocation *      Stack[-0x20]:4  pCStack_20
; int              Stack[-0x1c]:4  iStack_1c
; float            Stack[-0x18]:4  fStack_18
;
; XREF[1]:
;   core_spike.cpp_CSpike_process_FUN_005b8410 at 005b8717
;
; Referenced Globals:
;   float FLOAT_00652ebc = -0.1000000
;   float FLOAT_00652ec0 = 0.1000000
;   float FLOAT_00652ec4 = 2
;   float FLOAT_00652ec8 = 10
;   WatcomTypeInfo g_CVectorTypeInfo
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.character_count
;   undefined4 g_CDemonSetInstance.characters[0]
;   undefined4 DAT_03263318
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
;   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
;   core_box.cpp_CBoundingBox3D_reset_FUN_00420fb0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
;   crt_memory.c___arrinit_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8950
        ;   Label: core_spike.cpp_CSpike_testCollisionWithCharacters_FUN_005b8950
    PUSH ESI                            ; 005b8951
    PUSH EDI                            ; 005b8952
    PUSH EBP                            ; 005b8953
    MOV EBP,ESP                         ; 005b8954
    SUB ESP,0x1c4                       ; 005b8956
    AND ESP,0xfffffff8                  ; 005b895c
    MOV ESI,dword ptr [EBP + 0x14]      ; 005b895f
    LEA EAX,[ESP + 0xec]                ; 005b8962
    PUSH EAX                            ; 005b8969
    MOV EDX,dword ptr [ESI + 0x154]     ; 005b896a
    PUSH ESI                            ; 005b8970
    XOR EBX,EBX                         ; 005b8971
    CALL dword ptr [EDX + 0x14]         ; 005b8973
    MOV EDX,0x3dcccccd                  ; 005b8976
    ADD ESP,0x8                         ; 005b897b
    LEA EAX,[ESP + 0x104]               ; 005b897e
    FLD float ptr [ESP + 0xec]          ; 005b8985
    FLD float ptr [ESP + 0xf0]          ; 005b898c
    FLD float ptr [ESP + 0xf8]          ; 005b8993
    FLD float ptr [ESP + 0xfc]          ; 005b899a
    MOV dword ptr [ESP + 0x14c],EDX     ; 005b89a1
    MOV dword ptr [ESP + 0x150],EDX     ; 005b89a8
    MOV dword ptr [ESP + 0x154],EBX     ; 005b89af
    PUSH EAX                            ; 005b89b6
    FXCH ST3                            ; 005b89b7
    FLD float ptr [0x00652ebc]          ; 005b89b9 | FLOAT_00652ebc
    FXCH                                ; 005b89bf
    FADD ST0,ST1                        ; 005b89c1
    FXCH ST3                            ; 005b89c3
    FADDP                               ; 005b89c5
    FXCH                                ; 005b89c7
    FLD float ptr [0x00652ec0]          ; 005b89c9 | FLOAT_00652ec0
    FXCH                                ; 005b89cf
    FADD ST0,ST1                        ; 005b89d1
    FXCH ST4                            ; 005b89d3
    FADDP                               ; 005b89d5
    FXCH ST2                            ; 005b89d7
    FSTP float ptr [ESP + 0xf0]         ; 005b89d9
    FSTP float ptr [ESP + 0xf4]         ; 005b89e0
    FXCH                                ; 005b89e7
    FSTP float ptr [ESP + 0xfc]         ; 005b89e9
    FSTP float ptr [ESP + 0x100]        ; 005b89f0
    CALL core_box.cpp_CBoundingBox3D_reset_FUN_00420fb0 ; 005b89f7
        ;   XREF to: 00420fb0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_reset_FUN_00420fb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 005b89fc
    PUSH 0x6598c0                       ; 005b89ff | g_CVectorTypeInfo
    PUSH 0x8                            ; 005b8a04
    LEA EAX,[ESP + 0x14]                ; 005b8a06
    PUSH EAX                            ; 005b8a0a
    XOR EDI,EDI                         ; 005b8a0b
    LEA EBX,[ESP + 0x18]                ; 005b8a0d
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 005b8a11
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005b8a16
    PUSH EDI                            ; 005b8a19
        ;   Label: LAB_005b8a19
    LEA EAX,[ESP + 0x18c]               ; 005b8a1a
    PUSH EAX                            ; 005b8a21
    LEA EAX,[ESP + 0xf4]                ; 005b8a22
    PUSH EAX                            ; 005b8a29
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0 ; 005b8a2a
        ;   XREF to: 004202b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    ADD ESP,0xc                         ; 005b8a2f
    PUSH EAX                            ; 005b8a32
    LEA EAX,[ESP + 0x168]               ; 005b8a33
    PUSH EAX                            ; 005b8a3a
    PUSH ESI                            ; 005b8a3b
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005b8a3c
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005b8a41
    CMP EBX,EAX                         ; 005b8a44
    JZ 0x005b8a58                       ; 005b8a46
        ;   XREF to: 005b8a58 (CONDITIONAL_JUMP)  ; LAB_005b8a58
    MOV EDX,dword ptr [EAX]             ; 005b8a48
    MOV dword ptr [EBX],EDX             ; 005b8a4a
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b8a4c
    MOV dword ptr [EBX + 0x4],EDX       ; 005b8a4f
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b8a52
    MOV dword ptr [EBX + 0x8],EDX       ; 005b8a55
    PUSH EBX                            ; 005b8a58
        ;   Label: LAB_005b8a58
    LEA EAX,[ESP + 0x108]               ; 005b8a59
    PUSH EAX                            ; 005b8a60
    INC EDI                             ; 005b8a61
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 005b8a62
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD EBX,0xc                         ; 005b8a67
    ADD ESP,0x8                         ; 005b8a6a
    CMP EDI,0x8                         ; 005b8a6d
    JL 0x005b8a19                       ; 005b8a70
        ;   XREF to: 005b8a19 (CONDITIONAL_JUMP)  ; LAB_005b8a19
    FLD float ptr [ESP + 0xf0]          ; 005b8a72
    FMUL ST0                            ; 005b8a79
    FLD float ptr [ESP + 0xec]          ; 005b8a7b
    FMUL ST0                            ; 005b8a82
    FADDP                               ; 005b8a84
    FLD float ptr [ESP + 0xf4]          ; 005b8a86
    FMUL ST0                            ; 005b8a8d
    FADDP                               ; 005b8a8f
    FSQRT                               ; 005b8a91
    FLD float ptr [ESP + 0xf8]          ; 005b8a93
    FMUL ST0                            ; 005b8a9a
    FLD float ptr [ESP + 0xfc]          ; 005b8a9c
    FMUL ST0                            ; 005b8aa3
    FADDP                               ; 005b8aa5
    FLD float ptr [ESP + 0x100]         ; 005b8aa7
    FMUL ST0                            ; 005b8aae
    FXCH ST2                            ; 005b8ab0
    FSTP float ptr [ESP + 0x194]        ; 005b8ab2
    MOV EAX,dword ptr [ESP + 0x194]     ; 005b8ab9
    FADDP                               ; 005b8ac0
    MOV dword ptr [ESP + 0x1a8],EAX     ; 005b8ac2
    FSQRT                               ; 005b8ac9
    FST float ptr [ESP + 0x1a4]         ; 005b8acb
    FCOMP float ptr [ESP + 0x194]       ; 005b8ad2
    FNSTSW AX                           ; 005b8ad9
    SAHF                                ; 005b8adb
    JA 0x005b8beb                       ; 005b8adc
        ;   XREF to: 005b8beb (CONDITIONAL_JUMP)  ; LAB_005b8beb
    FLD float ptr [ESP + 0x1a8]         ; 005b8ae2
        ;   Label: LAB_005b8ae2
    FLD float ptr [ESP + 0x100]         ; 005b8ae9
    FSUB float ptr [ESP + 0xf4]         ; 005b8af0
    FXCH                                ; 005b8af7
    FMUL float ptr [0x00652ec4]         ; 005b8af9 | FLOAT_00652ec4
    FXCH                                ; 005b8aff
    FSTP float ptr [ESP + 0x1c0]        ; 005b8b01
    FADD float ptr [0x00652ec8]         ; 005b8b08 | FLOAT_00652ec8
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 005b8b0e
    FST float ptr [ESP + 0x1a8]         ; 005b8b15
    MOV dword ptr [ESP + 0x124],EAX     ; 005b8b1c
    LEA EAX,[ESP + 0x11c]               ; 005b8b23
    FMUL float ptr [ESP + 0x1a8]        ; 005b8b2a
    PUSH EAX                            ; 005b8b31
    LEA EAX,[ESP + 0x144]               ; 005b8b32
    XOR EDI,EDI                         ; 005b8b39
    PUSH EAX                            ; 005b8b3b
    MOV dword ptr [ESP + 0x124],EDI     ; 005b8b3c
    MOV dword ptr [ESP + 0x128],EDI     ; 005b8b43
    PUSH ESI                            ; 005b8b4a
    FSTP float ptr [ESP + 0x1b8]        ; 005b8b4b
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 005b8b52
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 005b8b57
    LEA EAX,[ESI + 0x20]                ; 005b8b5a
    MOV dword ptr [ESP + 0x1bc],EDI     ; 005b8b5d
    MOV dword ptr [ESP + 0x1b8],EAX     ; 005b8b64
    MOV dword ptr [ESP + 0x1b4],EDI     ; 005b8b6b
    MOV EAX,[0x006810c8]                ; 005b8b72 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_005b8b72
    MOV EDX,dword ptr [ESP + 0x1bc]     ; 005b8b77
    CMP EDX,dword ptr [EAX + 0x14f098]  ; 005b8b7e | g_CDemonSetInstance.character_count
    JGE 0x005b8e85                      ; 005b8b84
        ;   XREF to: 005b8e85 (CONDITIONAL_JUMP)  ; LAB_005b8e85
    ADD EAX,dword ptr [ESP + 0x1b4]     ; 005b8b8a
    MOV EBX,dword ptr [EAX + 0x14f09c]  ; 005b8b91 | g_CDemonSetInstance.characters[0] | DAT_03263318
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 005b8b97
    LEA EDI,[EBX + 0x20]                ; 005b8b9e
    FLD float ptr [EAX]                 ; 005b8ba1
    FSUB float ptr [EDI]                ; 005b8ba3
    FMUL ST0                            ; 005b8ba5
    FLD float ptr [EAX + 0x4]           ; 005b8ba7
    FSUB float ptr [EDI + 0x4]          ; 005b8baa
    FMUL ST0                            ; 005b8bad
    FLD float ptr [EAX + 0x8]           ; 005b8baf
    FXCH                                ; 005b8bb2
    FADDP ST2,ST0                       ; 005b8bb4
    FSUB float ptr [EDI + 0x8]          ; 005b8bb6
    FMUL ST0                            ; 005b8bb9
    FADDP                               ; 005b8bbb
    FCOMP float ptr [ESP + 0x1ac]       ; 005b8bbd
    FNSTSW AX                           ; 005b8bc4
    SAHF                                ; 005b8bc6
    JBE 0x005b8bfe                      ; 005b8bc7
        ;   XREF to: 005b8bfe (CONDITIONAL_JUMP)  ; LAB_005b8bfe
    MOV ECX,dword ptr [ESP + 0x1bc]     ; 005b8bc9
        ;   Label: LAB_005b8bc9
    MOV EDX,dword ptr [ESP + 0x1b4]     ; 005b8bd0
    INC ECX                             ; 005b8bd7
    ADD EDX,0x4                         ; 005b8bd8
    MOV dword ptr [ESP + 0x1bc],ECX     ; 005b8bdb
    MOV dword ptr [ESP + 0x1b4],EDX     ; 005b8be2
    JMP 0x005b8b72                      ; 005b8be9
        ;   XREF to: 005b8b72 (UNCONDITIONAL_JUMP)  ; LAB_005b8b72
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 005b8beb
        ;   Label: LAB_005b8beb
    MOV dword ptr [ESP + 0x1a8],EAX     ; 005b8bf2
    JMP 0x005b8ae2                      ; 005b8bf9
        ;   XREF to: 005b8ae2 (UNCONDITIONAL_JUMP)  ; LAB_005b8ae2
    LEA EAX,[ESP + 0xa8]                ; 005b8bfe
        ;   Label: LAB_005b8bfe
    PUSH EAX                            ; 005b8c05
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0 ; 005b8c06
        ;   XREF to: 005743c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 005b8c0b
    LEA EDX,[ESP + 0xa8]                ; 005b8c0e
    XOR EAX,EAX                         ; 005b8c15
    PUSH EDX                            ; 005b8c17
    MOV dword ptr [ESP + 0xac],EAX      ; 005b8c18
    PUSH EBX                            ; 005b8c1f
    MOV EAX,dword ptr [EBX + 0x154]     ; 005b8c20
    CALL dword ptr [EAX + 0x34]         ; 005b8c26
    ADD ESP,0x8                         ; 005b8c29
    MOV dword ptr [ESP + 0x1b0],EAX     ; 005b8c2c
    TEST EAX,EAX                        ; 005b8c33
    JZ 0x005b8bc9                       ; 005b8c35
        ;   XREF to: 005b8bc9 (CONDITIONAL_JUMP)  ; LAB_005b8bc9
    PUSH EDI                            ; 005b8c37
    LEA EAX,[ESP + 0x174]               ; 005b8c38
    PUSH EAX                            ; 005b8c3f
    XOR EDX,EDX                         ; 005b8c40
    PUSH ESI                            ; 005b8c42
    MOV dword ptr [ESP + 0xc8],EDX      ; 005b8c43
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005b8c4a
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 005b8c4f
    FLD float ptr [ESP + 0x170]         ; 005b8c52
    FCOMP float ptr [ESP + 0xec]        ; 005b8c59
    FNSTSW AX                           ; 005b8c60
    SAHF                                ; 005b8c62
    JNC 0x005b8c73                      ; 005b8c63
        ;   XREF to: 005b8c73 (CONDITIONAL_JUMP)  ; LAB_005b8c73
    MOV EAX,dword ptr [ESP + 0xec]      ; 005b8c65
    MOV dword ptr [ESP + 0x170],EAX     ; 005b8c6c
    FLD float ptr [ESP + 0x170]         ; 005b8c73
        ;   Label: LAB_005b8c73
    FCOMP float ptr [ESP + 0xf8]        ; 005b8c7a
    FNSTSW AX                           ; 005b8c81
    SAHF                                ; 005b8c83
    JBE 0x005b8c94                      ; 005b8c84
        ;   XREF to: 005b8c94 (CONDITIONAL_JUMP)  ; LAB_005b8c94
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005b8c86
    MOV dword ptr [ESP + 0x170],EAX     ; 005b8c8d
    FLD float ptr [ESP + 0x174]         ; 005b8c94
        ;   Label: LAB_005b8c94
    FCOMP float ptr [ESP + 0xf0]        ; 005b8c9b
    FNSTSW AX                           ; 005b8ca2
    SAHF                                ; 005b8ca4
    JNC 0x005b8cb5                      ; 005b8ca5
        ;   XREF to: 005b8cb5 (CONDITIONAL_JUMP)  ; LAB_005b8cb5
    MOV EAX,dword ptr [ESP + 0xf0]      ; 005b8ca7
    MOV dword ptr [ESP + 0x174],EAX     ; 005b8cae
    FLD float ptr [ESP + 0x174]         ; 005b8cb5
        ;   Label: LAB_005b8cb5
    FCOMP float ptr [ESP + 0xfc]        ; 005b8cbc
    FNSTSW AX                           ; 005b8cc3
    SAHF                                ; 005b8cc5
    JBE 0x005b8cd6                      ; 005b8cc6
        ;   XREF to: 005b8cd6 (CONDITIONAL_JUMP)  ; LAB_005b8cd6
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005b8cc8
    MOV dword ptr [ESP + 0x174],EAX     ; 005b8ccf
    LEA EAX,[ESP + 0x170]               ; 005b8cd6
        ;   Label: LAB_005b8cd6
    PUSH EAX                            ; 005b8cdd
    LEA EAX,[ESP + 0x15c]               ; 005b8cde
    PUSH EAX                            ; 005b8ce5
    XOR ECX,ECX                         ; 005b8ce6
    PUSH ESI                            ; 005b8ce8
    MOV dword ptr [ESP + 0x184],ECX     ; 005b8ce9
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005b8cf0
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005b8cf5
    LEA EAX,[ESP + 0x104]               ; 005b8cf8
    PUSH EAX                            ; 005b8cff
    MOV EDI,dword ptr [ESP + 0x1b4]     ; 005b8d00
    PUSH EDI                            ; 005b8d07
    LEA EAX,[ESP + 0xb0]                ; 005b8d08
    PUSH EAX                            ; 005b8d0f
    LEA EAX,[ESP + 0xdc]                ; 005b8d10
    PUSH EAX                            ; 005b8d17
    LEA EAX,[ESP + 0x150]               ; 005b8d18
    PUSH EAX                            ; 005b8d1f
    LEA EAX,[ESP + 0x16c]               ; 005b8d20
    PUSH EAX                            ; 005b8d27
    PUSH EBX                            ; 005b8d28
    CALL core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 ; 005b8d29
        ;   XREF to: 00409470 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470(CDemonActor * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_hit_normal, ...)
    MOV dword ptr [ESP + 0x1dc],EAX     ; 005b8d2e
    FLD float ptr [ESP + 0x1dc]         ; 005b8d35
    ADD ESP,0x1c                        ; 005b8d3c
    FLDZ                                ; 005b8d3f
    FXCH                                ; 005b8d41
    FST float ptr [ESP + 0x8]           ; 005b8d43
    FSTP double ptr [ESP]               ; 005b8d47
    FCOMP double ptr [ESP]              ; 005b8d4a
    FNSTSW AX                           ; 005b8d4d
    SAHF                                ; 005b8d4f
    JA 0x005b8bc9                       ; 005b8d50
        ;   XREF to: 005b8bc9 (CONDITIONAL_JUMP)  ; LAB_005b8bc9
    FLD1                                ; 005b8d56
    FCOMP double ptr [ESP]              ; 005b8d58
    FNSTSW AX                           ; 005b8d5b
    SAHF                                ; 005b8d5d
    JC 0x005b8bc9                       ; 005b8d5e
        ;   XREF to: 005b8bc9 (CONDITIONAL_JUMP)  ; LAB_005b8bc9
    FLD float ptr [ESP + 0x8]           ; 005b8d64
    FLD float ptr [ESP + 0x140]         ; 005b8d68
    FMUL ST1                            ; 005b8d6f
    FLD float ptr [ESP + 0x144]         ; 005b8d71
    FMUL ST2                            ; 005b8d78
    FLD float ptr [ESP + 0x148]         ; 005b8d7a
    FMULP ST3                           ; 005b8d81
    FLD float ptr [ESP + 0x158]         ; 005b8d83
    FLD float ptr [ESP + 0x15c]         ; 005b8d8a
    LEA EAX,[ESP + 0x128]               ; 005b8d91
    FLD float ptr [ESP + 0x160]         ; 005b8d98
    PUSH EAX                            ; 005b8d9f
    FXCH ST4                            ; 005b8da0
    FSTP float ptr [ESP + 0x180]        ; 005b8da2
    FXCH ST2                            ; 005b8da9
    FSTP float ptr [ESP + 0x184]        ; 005b8dab
    FXCH ST3                            ; 005b8db2
    FSTP float ptr [ESP + 0x188]        ; 005b8db4
    LEA EAX,[ESP + 0x138]               ; 005b8dbb
    FXCH ST2                            ; 005b8dc2
    FADD float ptr [ESP + 0x180]        ; 005b8dc4
    FXCH ST2                            ; 005b8dcb
    FADD float ptr [ESP + 0x184]        ; 005b8dcd
    FXCH                                ; 005b8dd4
    FADD float ptr [ESP + 0x188]        ; 005b8dd6
    PUSH EAX                            ; 005b8ddd
    FXCH ST2                            ; 005b8dde
    FSTP float ptr [ESP + 0x130]        ; 005b8de0
    FSTP float ptr [ESP + 0x134]        ; 005b8de7
    PUSH EBX                            ; 005b8dee
    FSTP float ptr [ESP + 0x13c]        ; 005b8def
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005b8df6
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 005b8dfb
    LEA EAX,[ESP + 0x6c]                ; 005b8dfe
    PUSH EAX                            ; 005b8e02
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 005b8e03
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 005b8e08
    MOV EAX,dword ptr [ESI + 0x558]     ; 005b8e0b
    MOV dword ptr [ESP + 0x70],EAX      ; 005b8e11
    MOV EAX,0x67                        ; 005b8e15
    LEA EDI,[ESP + 0x88]                ; 005b8e1a
    MOV dword ptr [ESP + 0x9c],EAX      ; 005b8e21
    LEA EAX,[ESP + 0x134]               ; 005b8e28
    CMP EDI,EAX                         ; 005b8e2f
    JZ 0x005b8e5d                       ; 005b8e31
        ;   XREF to: 005b8e5d (CONDITIONAL_JUMP)  ; LAB_005b8e5d
    MOV EAX,dword ptr [ESP + 0x134]     ; 005b8e33
    MOV dword ptr [ESP + 0x88],EAX      ; 005b8e3a
    MOV EAX,dword ptr [ESP + 0x138]     ; 005b8e41
    MOV dword ptr [ESP + 0x8c],EAX      ; 005b8e48
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005b8e4f
    MOV dword ptr [ESP + 0x90],EAX      ; 005b8e56
    LEA EDI,[ESP + 0x6c]                ; 005b8e5d
        ;   Label: LAB_005b8e5d
    MOV dword ptr [ESP + 0xa0],ESI      ; 005b8e61
    MOV dword ptr [ESP + 0xa4],ESI      ; 005b8e68
    PUSH EDI                            ; 005b8e6f
    MOV EAX,dword ptr [EBX + 0x154]     ; 005b8e70
    PUSH EBX                            ; 005b8e76
    CALL dword ptr [EAX + 0x11c]        ; 005b8e77
    ADD ESP,0x8                         ; 005b8e7d
    JMP 0x005b8bc9                      ; 005b8e80
        ;   XREF to: 005b8bc9 (UNCONDITIONAL_JUMP)  ; LAB_005b8bc9
    MOV ESP,EBP                         ; 005b8e85
        ;   Label: LAB_005b8e85
    POP EBP                             ; 005b8e87
    POP EDI                             ; 005b8e88
    POP ESI                             ; 005b8e89
    POP EBX                             ; 005b8e8a
    RET                                 ; 005b8e8b

