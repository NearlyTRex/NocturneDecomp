; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_emitter_cpp_CEmitter_renderOpaque_FUN_00478f80(CDemonActor *param_1)
;
; Local Variables:
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
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
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined        Stack[-0xc]:1  local_c
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b80f0
;   undefined4 DAT_005be368
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_fire.cpp_FUN_0048b6f0
;   core_fire.cpp_SLaserInfo_ctor_FUN_0048b6b0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
;   core_setcolid.cpp_CDemonSet_init_FUN_00511750
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478f80
        ;   Label: core_emitter.cpp_CEmitter_renderOpaque_FUN_00478f80
    PUSH EDI                            ; 00478f81
    PUSH EBP                            ; 00478f82
    MOV EBP,ESP                         ; 00478f83
    SUB ESP,0xc0                        ; 00478f85
    SUB EBP,0x7e                        ; 00478f8b
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00478f8e
    MOV EDX,dword ptr [0x005ae704]      ; 00478f94 | DAT_005ae704
    PUSH EDX                            ; 00478f9a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 00478f9b
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00478fa0
    TEST EAX,EAX                        ; 00478fa3
    JNZ 0x00478fb9                      ; 00478fa5
        ;   XREF to: 00478fb9 (CONDITIONAL_JUMP)  ; LAB_00478fb9
    CMP dword ptr [EBX + 0x150],0x3     ; 00478fa7
    JNZ 0x00478fb9                      ; 00478fae
        ;   XREF to: 00478fb9 (CONDITIONAL_JUMP)  ; LAB_00478fb9
    CMP dword ptr [EBX + 0x160],0x0     ; 00478fb0
    JNZ 0x00478fc2                      ; 00478fb7
        ;   XREF to: 00478fc2 (CONDITIONAL_JUMP)  ; LAB_00478fc2
    XOR EAX,EAX                         ; 00478fb9
        ;   Label: LAB_00478fb9
    LEA ESP,[EBP + 0x7e]                ; 00478fbb
    POP EBP                             ; 00478fbe
    POP EDI                             ; 00478fbf
    POP EBX                             ; 00478fc0
    RET                                 ; 00478fc1
    MOV EDI,dword ptr [0x005be368]      ; 00478fc2 | DAT_005be368
        ;   Label: LAB_00478fc2
    PUSH EDI                            ; 00478fc8 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 00478fc9
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00511750(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00478fce
    PUSH EBX                            ; 00478fd1
    MOV EAX,[0x005be368]                ; 00478fd2 | DAT_005be368
    PUSH EAX                            ; 00478fd7 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 00478fd8
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00478fdd
    LEA EAX,[EBP + -0x42]               ; 00478fe0
    PUSH EAX                            ; 00478fe3
    CALL core_fire.cpp_SLaserInfo_ctor_FUN_0048b6b0 ; 00478fe4
        ;   XREF to: 0048b6b0 (UNCONDITIONAL_CALL)  ; SLaserInfo * core_fire.cpp_SLaserInfo_ctor_FUN_0048b6b0(SLaserInfo * this_ptr)
    MOV EAX,dword ptr [EBX + 0x230]     ; 00478fe9
    MOV dword ptr [EBP + -0x3a],EAX     ; 00478fef
    MOV EAX,dword ptr [EBX + 0x234]     ; 00478ff2
    MOV dword ptr [EBP + -0x36],EAX     ; 00478ff8
    MOV EAX,dword ptr [EBX + 0x238]     ; 00478ffb
    MOV dword ptr [EBP + -0x32],EAX     ; 00479001
    MOV EAX,dword ptr [EBX + 0x23c]     ; 00479004
    MOV dword ptr [EBP + -0x2e],EAX     ; 0047900a
    MOV EAX,dword ptr [EBP + -0x3e]     ; 0047900d
    MOV dword ptr [EBP + 0x16],EAX      ; 00479010
    MOV EAX,dword ptr [EBP + -0x3a]     ; 00479013
    MOV dword ptr [EBP + 0x1a],EAX      ; 00479016
    MOV EAX,dword ptr [EBP + -0x36]     ; 00479019
    MOV dword ptr [EBP + 0x1e],EAX      ; 0047901c
    MOV EAX,dword ptr [EBP + -0x32]     ; 0047901f
    MOV dword ptr [EBP + 0x22],EAX      ; 00479022
    MOV EAX,dword ptr [EBP + -0x2e]     ; 00479025
    MOV dword ptr [EBP + 0x26],EAX      ; 00479028
    MOV EAX,dword ptr [EBP + -0x22]     ; 0047902b
    MOV dword ptr [EBP + 0x32],EAX      ; 0047902e
    MOV EAX,dword ptr [EBP + -0x1e]     ; 00479031
    MOV dword ptr [EBP + 0x36],EAX      ; 00479034
    MOV EAX,dword ptr [EBP + -0x1a]     ; 00479037
    MOV dword ptr [EBP + 0x3a],EAX      ; 0047903a
    MOV EAX,dword ptr [EBP + -0x16]     ; 0047903d
    MOV dword ptr [EBP + 0x3e],EAX      ; 00479040
    MOV EAX,dword ptr [EBP + -0x12]     ; 00479043
    MOV dword ptr [EBP + 0x42],EAX      ; 00479046
    MOV EAX,dword ptr [EBP + -0xe]      ; 00479049
    MOV dword ptr [EBP + 0x46],EAX      ; 0047904c
    MOV EAX,dword ptr [EBP + -0xa]      ; 0047904f
    MOV EDI,0x42c80000                  ; 00479052
    MOV dword ptr [EBP + 0x4a],EAX      ; 00479057
    MOV EAX,dword ptr [EBP + -0x6]      ; 0047905a
    MOV EDX,0x3f800000                  ; 0047905d
    MOV dword ptr [EBP + 0x4e],EAX      ; 00479062
    MOV EAX,dword ptr [EBP + -0x2]      ; 00479065
    ADD ESP,0x4                         ; 00479068
    MOV dword ptr [EBP + 0x52],EAX      ; 0047906b
    MOV EAX,dword ptr [EBP + 0x2]       ; 0047906e
    XOR ECX,ECX                         ; 00479071
    MOV dword ptr [EBP + 0x56],EAX      ; 00479073
    MOV EAX,dword ptr [EBP + 0x6]       ; 00479076
    PUSH ECX                            ; 00479079
    MOV dword ptr [EBP + 0x5a],EAX      ; 0047907a
    MOV EAX,dword ptr [EBP + 0xa]       ; 0047907d
    MOV dword ptr [EBP + -0x42],EDX     ; 00479080
    MOV dword ptr [EBP + 0x5e],EAX      ; 00479083
    MOV EAX,dword ptr [EBP + 0xe]       ; 00479086
    MOV dword ptr [EBP + -0x2a],ECX     ; 00479089
    MOV dword ptr [EBP + 0x62],EAX      ; 0047908c
    LEA EAX,[EBP + 0x12]                ; 0047908f
    MOV dword ptr [EBP + -0x26],ECX     ; 00479092
    PUSH EAX                            ; 00479095
    LEA EAX,[EBP + 0x72]                ; 00479096
    MOV dword ptr [EBP + 0x12],EDX      ; 00479099
    PUSH EAX                            ; 0047909c
    LEA EAX,[EBP + 0x66]                ; 0047909d
    MOV dword ptr [EBP + 0x2a],ECX      ; 004790a0
    PUSH EAX                            ; 004790a3
    MOV dword ptr [EBP + 0x2e],ECX      ; 004790a4
    MOV dword ptr [EBP + 0x72],ECX      ; 004790a7
    PUSH EBX                            ; 004790aa
    MOV dword ptr [EBP + 0x76],ECX      ; 004790ab
    MOV dword ptr [EBP + 0x7a],EDI      ; 004790ae
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 004790b1
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 004790b6
    PUSH EAX                            ; 004790b9
    ADD EBX,0x20                        ; 004790ba
    PUSH EBX                            ; 004790bd
    MOV EAX,[0x005b80f0]                ; 004790be | DAT_005b80f0
    PUSH EAX                            ; 004790c3
    CALL core_fire.cpp_FUN_0048b6f0     ; 004790c4
        ;   XREF to: 0048b6f0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_0048b6f0(CFireEffect * this_ptr, CVector3f * origin, CVector3f * direction, SLaserInfo * laser_info, ...)
    ADD ESP,0x14                        ; 004790c9
    MOV EDX,dword ptr [0x005be368]      ; 004790cc | DAT_005be368
    PUSH EDX                            ; 004790d2 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 004790d3
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00511750(CDemonSet * this_ptr)
    MOV EAX,0x1                         ; 004790d8
    ADD ESP,0x4                         ; 004790dd
    LEA ESP,[EBP + 0x7e]                ; 004790e0
    POP EBP                             ; 004790e3
    POP EDI                             ; 004790e4
    POP EBX                             ; 004790e5
    RET                                 ; 004790e6

