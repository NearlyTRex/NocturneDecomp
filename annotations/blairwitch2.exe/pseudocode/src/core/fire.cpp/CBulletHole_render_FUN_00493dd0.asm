; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CBulletHole_render_FUN_00493dd0(CBulletHole *this_ptr)
;
; Parameters:
; CBulletHole *    Stack[0x4]:4   this_ptr
; Local Variables:
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
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_renderDecals_FUN_0049cb50 at 0049cb8f
;   core_fire.cpp_FUN_0049c780 at 0049c8d7
;
; Referenced Globals:
;   undefined4 DAT_005f64e4
;   undefined4 DAT_005f64e8
;   undefined4 DAT_0060b280
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_00622034
;   undefined4 DAT_00622038
;   undefined4 DAT_0062203c
;   undefined4 DAT_0062205c
;   undefined4 DAT_00622060
;   undefined4 DAT_00622064
;   undefined4 DAT_00622068
;   undefined4 DAT_0062206c
;   undefined4 DAT_0062208c
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_actor.cpp_FUN_00408cf0
;   core_set.cpp_CDemonSet_computeLighting_FUN_005317c0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
;   engine_matrix.c_pop_FUN_0046b4a0
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00493dd0
        ;   Label: core_fire.cpp_CBulletHole_render_FUN_00493dd0
    PUSH ESI                            ; 00493dd1
    PUSH EDI                            ; 00493dd2
    PUSH EBP                            ; 00493dd3
    SUB ESP,0x6c                        ; 00493dd4
    MOV EBP,dword ptr [ESP + 0x80]      ; 00493dd7
    MOV EDX,dword ptr [EBP + 0x10]      ; 00493dde
    LEA EBX,[EBP + 0x14]                ; 00493de1
    TEST EDX,EDX                        ; 00493de4
    JZ 0x0049404f                       ; 00493de6
        ;   XREF to: 0049404f (CONDITIONAL_JUMP)  ; LAB_0049404f
    PUSH EDX                            ; 00493dec
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 00493ded
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00493df2
    LEA EAX,[EBP + 0x24]                ; 00493df5
    PUSH EAX                            ; 00493df8
    PUSH EBX                            ; 00493df9
    MOV EBX,dword ptr [0x0060b280]      ; 00493dfa | DAT_0060b280
    PUSH EBX                            ; 00493e00 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 00493e01
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
        ;   Label: LAB_00493e01
    ADD ESP,0xc                         ; 00493e06
    MOV EBX,dword ptr [EBP + 0x20]      ; 00493e09
    MOV EAX,dword ptr [EBP + 0x20]      ; 00493e0c
    XOR ECX,ECX                         ; 00493e0f
    AND EBX,0x1                         ; 00493e11
    AND EAX,0x2                         ; 00493e14
    SHL EBX,0x17                        ; 00493e17
    MOV dword ptr [ESP + 0x20],ECX      ; 00493e1a
    LEA ESI,[EBX + 0x80000]             ; 00493e1e
    SHL EAX,0x16                        ; 00493e24
    MOV dword ptr [0x0062202c],ESI      ; 00493e27 | DAT_0062202c
    ADD EBX,0x780000                    ; 00493e2d | DAT_00780000
    LEA ESI,[EAX + 0x780000]            ; 00493e33 | DAT_00780000
    MOV dword ptr [0x0062205c],EBX      ; 00493e39 | DAT_0062205c
    ADD EAX,0x80000                     ; 00493e3f
    MOV dword ptr [0x0062208c],EBX      ; 00493e44 | DAT_0062208c
    MOV [0x00622090],EAX                ; 00493e4a | DAT_00622090
    MOV EAX,[0x0062202c]                ; 00493e4f | DAT_0062202c
    LEA EBX,[ESP + 0x30]                ; 00493e54
    MOV [0x006220bc],EAX                ; 00493e58 | DAT_006220bc
    MOV EAX,[0x00622090]                ; 00493e5d | DAT_00622090
    MOV dword ptr [0x00622030],ESI      ; 00493e62 | DAT_00622030
    MOV [0x006220c0],EAX                ; 00493e68 | DAT_006220c0
    MOV EAX,0xbe2e147b                  ; 00493e6d
    MOV dword ptr [0x00622060],ESI      ; 00493e72 | DAT_00622060
    MOV dword ptr [ESP + 0x18],EAX      ; 00493e78
    MOV dword ptr [ESP + 0x1c],EAX      ; 00493e7c
    LEA EAX,[ESP + 0x18]                ; 00493e80
    MOV ESI,dword ptr [0x0060b280]      ; 00493e84 | DAT_0060b280
    FLD float ptr [EAX]                 ; 00493e8a
    FMUL float ptr [0x005f64e4]         ; 00493e8c | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00493e92
    FLD float ptr [EAX + 0x4]           ; 00493e94
    FMUL float ptr [0x005f64e4]         ; 00493e97 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00493e9d
    FLD float ptr [EAX + 0x8]           ; 00493ea0
    FMUL float ptr [0x005f64e4]         ; 00493ea3 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00493ea9
    LEA EAX,[ESP + 0x30]                ; 00493eac
    PUSH EAX                            ; 00493eb0
    MOV EAX,dword ptr [ESI]             ; 00493eb1 | DAT_01ba5c50
    PUSH EAX                            ; 00493eb3
    XOR EDI,EDI                         ; 00493eb4
    MOV ESI,0xbe2e147b                  ; 00493eb6
    CALL engine_special.cpp_FUN_0055d723 ; 00493ebb
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EBX,0x3e2e147b                  ; 00493ec0
    ADD ESP,0x8                         ; 00493ec5
    LEA EAX,[ESP + 0x18]                ; 00493ec8
    MOV dword ptr [ESP + 0x18],EBX      ; 00493ecc
    MOV dword ptr [ESP + 0x1c],ESI      ; 00493ed0
    MOV dword ptr [ESP + 0x20],EDI      ; 00493ed4
    MOV EBX,ESP                         ; 00493ed8
    MOV ESI,dword ptr [0x0060b280]      ; 00493eda | DAT_0060b280
    FLD float ptr [EAX]                 ; 00493ee0
    FMUL float ptr [0x005f64e4]         ; 00493ee2 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00493ee8
    FLD float ptr [EAX + 0x4]           ; 00493eea
    FMUL float ptr [0x005f64e4]         ; 00493eed | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00493ef3
    FLD float ptr [EAX + 0x8]           ; 00493ef6
    FMUL float ptr [0x005f64e4]         ; 00493ef9 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00493eff
    MOV EAX,ESP                         ; 00493f02
    PUSH EAX                            ; 00493f04
    MOV EAX,dword ptr [ESI]             ; 00493f05 | DAT_01ba5c50
    ADD EAX,0x30                        ; 00493f07
    PUSH EAX                            ; 00493f0a
    CALL engine_special.cpp_FUN_0055d723 ; 00493f0b
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0x3e2e147b                  ; 00493f10
    LEA EBX,[ESP + 0x68]                ; 00493f15
    ADD ESP,0x8                         ; 00493f19
    MOV ESI,dword ptr [0x0060b280]      ; 00493f1c | DAT_0060b280
    MOV dword ptr [ESP + 0x18],EAX      ; 00493f22
    MOV dword ptr [ESP + 0x1c],EAX      ; 00493f26
    LEA EAX,[ESP + 0x18]                ; 00493f2a
    MOV dword ptr [ESP + 0x20],EDI      ; 00493f2e
    FLD float ptr [EAX]                 ; 00493f32
    FMUL float ptr [0x005f64e4]         ; 00493f34 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00493f3a
    FLD float ptr [EAX + 0x4]           ; 00493f3c
    FMUL float ptr [0x005f64e4]         ; 00493f3f | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00493f45
    FLD float ptr [EAX + 0x8]           ; 00493f48
    FMUL float ptr [0x005f64e4]         ; 00493f4b | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00493f51
    LEA EAX,[ESP + 0x60]                ; 00493f54
    PUSH EAX                            ; 00493f58
    MOV EAX,dword ptr [ESI]             ; 00493f59 | DAT_01ba5c50
    ADD EAX,0x60                        ; 00493f5b
    PUSH EAX                            ; 00493f5e
    MOV ESI,0x3e2e147b                  ; 00493f5f
    CALL engine_special.cpp_FUN_0055d723 ; 00493f64
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EBX,0xbe2e147b                  ; 00493f69
    ADD ESP,0x8                         ; 00493f6e
    LEA EAX,[ESP + 0x18]                ; 00493f71
    MOV dword ptr [ESP + 0x18],EBX      ; 00493f75
    MOV dword ptr [ESP + 0x1c],ESI      ; 00493f79
    MOV dword ptr [ESP + 0x20],EDI      ; 00493f7d
    LEA EBX,[ESP + 0x48]                ; 00493f81
    MOV ESI,dword ptr [0x0060b280]      ; 00493f85 | DAT_0060b280
    FLD float ptr [EAX]                 ; 00493f8b
    FMUL float ptr [0x005f64e4]         ; 00493f8d | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00493f93
    FLD float ptr [EAX + 0x4]           ; 00493f95
    FMUL float ptr [0x005f64e4]         ; 00493f98 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00493f9e
    FLD float ptr [EAX + 0x8]           ; 00493fa1
    FMUL float ptr [0x005f64e4]         ; 00493fa4 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00493faa
    LEA EAX,[ESP + 0x48]                ; 00493fad
    PUSH EAX                            ; 00493fb1
    MOV EAX,dword ptr [ESI]             ; 00493fb2 | DAT_01ba5c50
    ADD EAX,0x90                        ; 00493fb4
    PUSH EAX                            ; 00493fb9
    CALL engine_special.cpp_FUN_0055d723 ; 00493fba
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EAX,dword ptr [EBP + 0x10]      ; 00493fbf
    ADD ESP,0x8                         ; 00493fc2
    TEST EAX,EAX                        ; 00493fc5
    JNZ 0x0049406e                      ; 00493fc7
        ;   XREF to: 0049406e (CONDITIONAL_JUMP)  ; LAB_0049406e
    MOV EBX,0xffff                      ; 00493fcd
    MOV dword ptr [0x00622038],EBX      ; 00493fd2 | DAT_00622038
    MOV dword ptr [0x0062203c],EBX      ; 00493fd8 | DAT_0062203c
    MOV dword ptr [0x00622064],EBX      ; 00493fde | DAT_00622064
    MOV dword ptr [0x00622068],EBX      ; 00493fe4 | DAT_00622068
    MOV dword ptr [0x0062206c],EBX      ; 00493fea | DAT_0062206c
    MOV dword ptr [0x00622094],EBX      ; 00493ff0 | DAT_00622094
    MOV dword ptr [0x00622098],EBX      ; 00493ff6 | DAT_00622098
    MOV dword ptr [0x0062209c],EBX      ; 00493ffc | DAT_0062209c
    MOV dword ptr [0x006220c4],EBX      ; 00494002 | DAT_006220c4
    MOV dword ptr [0x006220c8],EBX      ; 00494008 | DAT_006220c8
    MOV dword ptr [0x006220cc],EBX      ; 0049400e | DAT_006220cc
    MOV dword ptr [0x00622034],EBX      ; 00494014 | DAT_00622034
    PUSH 0x1c3ded0                      ; 0049401a
        ;   Label: LAB_0049401a
    MOV EBX,dword ptr [0x0060b280]      ; 0049401f | DAT_0060b280
    PUSH EBX                            ; 00494025 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50 ; 00494026
        ;   XREF to: 0046ab50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV ESI,dword ptr [EBP + 0x10]      ; 0049402b
    ADD ESP,0x8                         ; 0049402e
    TEST ESI,ESI                        ; 00494031
    JNZ 0x00494101                      ; 00494033
        ;   XREF to: 00494101 (CONDITIONAL_JUMP)  ; LAB_00494101
    MOV EAX,[0x0060b280]                ; 00494039 | DAT_0060b280
    PUSH EAX                            ; 0049403e | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 0049403f
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 00494044
    ADD ESP,0x6c                        ; 00494047
    POP EBP                             ; 0049404a
    POP EDI                             ; 0049404b
    POP ESI                             ; 0049404c
    POP EBX                             ; 0049404d
    RET                                 ; 0049404e
    PUSH EBP                            ; 0049404f
        ;   Label: LAB_0049404f
    MOV ESI,dword ptr [0x0060b280]      ; 00494050 | DAT_0060b280
    PUSH ESI                            ; 00494056 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 00494057
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0049405c
    PUSH 0x0                            ; 0049405f
    PUSH EBX                            ; 00494061
    MOV EDI,dword ptr [0x0060b280]      ; 00494062 | DAT_0060b280
    PUSH EDI                            ; 00494068 | DAT_01ba5c50
    JMP 0x00493e01                      ; 00494069
        ;   XREF to: 00493e01 (UNCONDITIONAL_JUMP)  ; LAB_00493e01
    LEA EAX,[EBP + 0x30]                ; 0049406e
        ;   Label: LAB_0049406e
    PUSH EAX                            ; 00494071
    MOV EDX,dword ptr [EBP + 0x10]      ; 00494072
    LEA ESI,[ESP + 0x58]                ; 00494075
    PUSH EDX                            ; 00494079
    LEA EDI,[ESP + 0x44]                ; 0049407a
    LEA EBX,[ESP + 0x14]                ; 0049407e
    CALL core_actor.cpp_FUN_00408cf0    ; 00494082
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0x5c]                ; 00494087
    ADD ESP,0x8                         ; 0049408b
    MOV EAX,EBP                         ; 0049408e
    MOVSD ES:EDI,ESI                    ; 00494090
    MOVSD ES:EDI,ESI                    ; 00494091
    MOVSD ES:EDI,ESI                    ; 00494092
    FLD float ptr [EAX]                 ; 00494093
    FMUL float ptr [0x005f64e4]         ; 00494095 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049409b
    FLD float ptr [EAX + 0x4]           ; 0049409d
    FMUL float ptr [0x005f64e4]         ; 004940a0 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 004940a6
    FLD float ptr [EAX + 0x8]           ; 004940a9
    FMUL float ptr [0x005f64e4]         ; 004940ac | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 004940b2
    LEA EBX,[ESP + 0x24]                ; 004940b5
    LEA EAX,[ESP + 0x3c]                ; 004940b9
    FLD float ptr [EAX]                 ; 004940bd
    FMUL float ptr [0x005f64e8]         ; 004940bf | DAT_005f64e8
    FISTP dword ptr [EBX]               ; 004940c5
    FLD float ptr [EAX + 0x4]           ; 004940c7
    FMUL float ptr [0x005f64e8]         ; 004940ca | DAT_005f64e8
    FISTP dword ptr [EBX + 0x4]         ; 004940d0
    FLD float ptr [EAX + 0x8]           ; 004940d3
    FMUL float ptr [0x005f64e8]         ; 004940d6 | DAT_005f64e8
    FISTP dword ptr [EBX + 0x8]         ; 004940dc
    PUSH 0x4                            ; 004940df
    PUSH 0x0                            ; 004940e1
    LEA EAX,[ESP + 0x2c]                ; 004940e3
    PUSH EAX                            ; 004940e7
    LEA EAX,[ESP + 0x18]                ; 004940e8
    PUSH EAX                            ; 004940ec
    MOV ECX,dword ptr [0x0061b5a8]      ; 004940ed | g_CDemonSetPtr
    PUSH ECX                            ; 004940f3
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_005317c0 ; 004940f4
        ;   XREF to: 005317c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_005317c0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 004940f9
    JMP 0x0049401a                      ; 004940fc
        ;   XREF to: 0049401a (UNCONDITIONAL_JUMP)  ; LAB_0049401a
    PUSH ESI                            ; 00494101
        ;   Label: LAB_00494101
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 00494102
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00494107
    MOV EBP,dword ptr [0x0060b280]      ; 0049410a | DAT_0060b280
    PUSH EBP                            ; 00494110 | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 00494111
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 00494116
    ADD ESP,0x6c                        ; 00494119
    POP EBP                             ; 0049411c
    POP EDI                             ; 0049411d
    POP ESI                             ; 0049411e
    POP EBX                             ; 0049411f
    RET                                 ; 00494120

