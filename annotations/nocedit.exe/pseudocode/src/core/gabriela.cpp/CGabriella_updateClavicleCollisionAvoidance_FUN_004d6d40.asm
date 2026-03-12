; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004d6d40(CGabriella *this_ptr,float delta_time,int has_carried_objects)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; int              Stack[0xc]:4   has_carried_objects
; Local Variables:
; CBoundingBox3D   Stack[-0x68]:24  CStack_68
; CBoundingBox3D   Stack[-0x50]:24  local_50
; float            Stack[-0x38]:4  fStack_38
; float            Stack[-0x34]:4  fStack_34
; float            Stack[-0x30]:4  fStack_30
; CVector3f        Stack[-0x2c]:12  local_2c
; float            Stack[-0x20]:4  fStack_20
; float            Stack[-0x1c]:4  fStack_1c
; float            Stack[-0x18]:4  fStack_18
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_process_FUN_004d2ea0 at 004d34e9
;
; Referenced Globals:
;   float FLOAT_0065e7cc = 0.5
;   CDemonSet* g_CDemonSetPtr = 03114278
;   int INT_02d7b84c
;   int INT_02d7b850
;   int INT_02d7b888
;   int INT_02d7b88c
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_gabriela.cpp_CGabriella_binarySearchClavicleBlend_FUN_004d6f80
;   core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_init_FUN_00574180
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6d40
        ;   Label: core_gabriela.cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004d6d40
    PUSH ESI                            ; 004d6d41
    PUSH EDI                            ; 004d6d42
    PUSH EBP                            ; 004d6d43
    SUB ESP,0x58                        ; 004d6d44
    MOV EBX,dword ptr [ESP + 0x6c]      ; 004d6d47
    FLD float ptr [ESP + 0x70]          ; 004d6d4b
    FLD float ptr [EBX + 0x1fbf0]       ; 004d6d4f
    FLD float ptr [EBX + 0x1fbf4]       ; 004d6d55
    FXCH ST2                            ; 004d6d5b
    FDIV float ptr [0x0065e7cc]         ; 004d6d5d | FLOAT_0065e7cc
    FXCH                                ; 004d6d63
    FSUB ST0,ST1                        ; 004d6d65
    FXCH ST2                            ; 004d6d67
    FSUBRP                              ; 004d6d69
    FXCH                                ; 004d6d6b
    FSTP float ptr [EBX + 0x1fbf0]      ; 004d6d6d
    FSTP float ptr [EBX + 0x1fbf4]      ; 004d6d73
    FLD float ptr [EBX + 0x1fbf0]       ; 004d6d79
    FLDZ                                ; 004d6d7f
    FCOMPP                              ; 004d6d81
    FNSTSW AX                           ; 004d6d83
    SAHF                                ; 004d6d85
    JA 0x004d6f04                       ; 004d6d86
        ;   XREF to: 004d6f04 (CONDITIONAL_JUMP)  ; LAB_004d6f04
    FLD float ptr [EBX + 0x1fbf4]       ; 004d6d8c
        ;   Label: LAB_004d6d8c
    FLDZ                                ; 004d6d92
    FCOMPP                              ; 004d6d94
    FNSTSW AX                           ; 004d6d96
    SAHF                                ; 004d6d98
    JBE 0x004d6da5                      ; 004d6d99
        ;   XREF to: 004d6da5 (CONDITIONAL_JUMP)  ; LAB_004d6da5
    MOV dword ptr [EBX + 0x1fbf4],0x0   ; 004d6d9b
    MOV EDX,dword ptr [ESP + 0x74]      ; 004d6da5
        ;   Label: LAB_004d6da5
    TEST EDX,EDX                        ; 004d6da9
    JZ 0x004d6f2a                       ; 004d6dab
        ;   XREF to: 004d6f2a (CONDITIONAL_JUMP)  ; LAB_004d6f2a
    PUSH EBX                            ; 004d6db1
    MOV EBP,dword ptr [0x006810c8]      ; 004d6db2 | g_CDemonSetPtr
    PUSH EBP                            ; 004d6db8 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 004d6db9
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EAX,dword ptr [EBX + 0x24b4]    ; 004d6dbe
    ADD ESP,0x8                         ; 004d6dc4
    TEST EAX,EAX                        ; 004d6dc7
    JZ 0x004d6ddb                       ; 004d6dc9
        ;   XREF to: 004d6ddb (CONDITIONAL_JUMP)  ; LAB_004d6ddb
    PUSH EAX                            ; 004d6dcb
    MOV ECX,dword ptr [0x006810c8]      ; 004d6dcc | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 004d6dd2 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 004d6dd3
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004d6dd8
    MOV ESI,dword ptr [EBX + 0x24f8]    ; 004d6ddb
        ;   Label: LAB_004d6ddb
    TEST ESI,ESI                        ; 004d6de1
    JZ 0x004d6df5                       ; 004d6de3
        ;   XREF to: 004d6df5 (CONDITIONAL_JUMP)  ; LAB_004d6df5
    PUSH ESI                            ; 004d6de5
    MOV EBP,dword ptr [0x006810c8]      ; 004d6de6 | g_CDemonSetPtr
    PUSH EBP                            ; 004d6dec | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 004d6ded
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004d6df2
    MOV EAX,[0x006810c8]                ; 004d6df5 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_004d6df5
    PUSH EAX                            ; 004d6dfa | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210 ; 004d6dfb
        ;   XREF to: 00574210 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004d6e00
    XOR EDX,EDX                         ; 004d6e03
    MOV dword ptr [ESP + 0x44],EDX      ; 004d6e05
    MOV dword ptr [ESP + 0x40],EDX      ; 004d6e09
    MOV dword ptr [ESP + 0x3c],EDX      ; 004d6e0d
    MOV EDI,dword ptr [EBX + 0x24b4]    ; 004d6e11
    TEST EDI,EDI                        ; 004d6e17
    JZ 0x004d6f13                       ; 004d6e19
        ;   XREF to: 004d6f13 (CONDITIONAL_JUMP)  ; LAB_004d6f13
    LEA ESI,[ESP + 0x18]                ; 004d6e1f
    PUSH ESI                            ; 004d6e23
    MOV EDX,dword ptr [EDI + 0x154]     ; 004d6e24
    PUSH EDI                            ; 004d6e2a
    CALL dword ptr [EDX + 0x14]         ; 004d6e2b
    LEA EDX,[EAX + 0xc]                 ; 004d6e2e
    FLD float ptr [EDX]                 ; 004d6e31
    FSUB float ptr [EAX]                ; 004d6e33
    ADD ESP,0x8                         ; 004d6e35
    FSTP float ptr [ESP + 0x30]         ; 004d6e38
    FLD float ptr [EDX + 0x4]           ; 004d6e3c
    FSUB float ptr [EAX + 0x4]          ; 004d6e3f
    FSTP float ptr [ESP + 0x34]         ; 004d6e42
    FLD float ptr [EDX + 0x8]           ; 004d6e46
    FSUB float ptr [EAX + 0x8]          ; 004d6e49
    FST float ptr [ESP + 0x38]          ; 004d6e4c
    FCHS                                ; 004d6e50
    FSTP float ptr [ESP + 0x3c]         ; 004d6e52
    LEA EAX,[ESP + 0x3c]                ; 004d6e56
        ;   Label: LAB_004d6e56
    PUSH EAX                            ; 004d6e5a
    MOV EAX,[0x02d7b84c]                ; 004d6e5b | INT_02d7b84c
    PUSH EAX                            ; 004d6e60
    MOV EDX,dword ptr [0x02d7b888]      ; 004d6e61 | INT_02d7b888
    PUSH EDX                            ; 004d6e67
    LEA EAX,[EBX + 0x1fbf0]             ; 004d6e68
    PUSH EAX                            ; 004d6e6e
    PUSH dword ptr [ESP + 0x80]         ; 004d6e6f
    PUSH EBX                            ; 004d6e76
    CALL core_gabriela.cpp_CGabriella_binarySearchClavicleBlend_FUN_004d6f80 ; 004d6e77
        ;   XREF to: 004d6f80 (UNCONDITIONAL_CALL)  ; void core_gabriela.cpp_CGabriella_binarySearchClavicleBlend_FUN_004d6f80(CGabriella * this_ptr, float delta_time, float * clavicle_blend, int probe_bone_index, ...)
    MOV ECX,dword ptr [EBX + 0x24f8]    ; 004d6e7c
    ADD ESP,0x18                        ; 004d6e82
    TEST ECX,ECX                        ; 004d6e85
    JZ 0x004d6f20                       ; 004d6e87
        ;   XREF to: 004d6f20 (CONDITIONAL_JUMP)  ; LAB_004d6f20
    MOV ESI,ESP                         ; 004d6e8d
    PUSH ESI                            ; 004d6e8f
    MOV EDX,dword ptr [ECX + 0x154]     ; 004d6e90
    PUSH ECX                            ; 004d6e96
    CALL dword ptr [EDX + 0x14]         ; 004d6e97
    LEA EDX,[EAX + 0xc]                 ; 004d6e9a
    FLD float ptr [EDX]                 ; 004d6e9d
    FSUB float ptr [EAX]                ; 004d6e9f
    ADD ESP,0x8                         ; 004d6ea1
    FSTP float ptr [ESP + 0x48]         ; 004d6ea4
    FLD float ptr [EDX + 0x4]           ; 004d6ea8
    FSUB float ptr [EAX + 0x4]          ; 004d6eab
    FSTP float ptr [ESP + 0x4c]         ; 004d6eae
    FLD float ptr [EDX + 0x8]           ; 004d6eb2
    FSUB float ptr [EAX + 0x8]          ; 004d6eb5
    FSTP float ptr [ESP + 0x50]         ; 004d6eb8
    MOV EAX,dword ptr [ESP + 0x50]      ; 004d6ebc
    MOV dword ptr [ESP + 0x3c],EAX      ; 004d6ec0
    LEA EAX,[ESP + 0x3c]                ; 004d6ec4
        ;   Label: LAB_004d6ec4
    PUSH EAX                            ; 004d6ec8
    MOV EDI,dword ptr [0x02d7b850]      ; 004d6ec9 | INT_02d7b850
    PUSH EDI                            ; 004d6ecf
    MOV EBP,dword ptr [0x02d7b88c]      ; 004d6ed0 | INT_02d7b88c
    PUSH EBP                            ; 004d6ed6
    LEA EAX,[EBX + 0x1fbf4]             ; 004d6ed7
    PUSH EAX                            ; 004d6edd
    PUSH dword ptr [ESP + 0x80]         ; 004d6ede
    PUSH EBX                            ; 004d6ee5
    CALL core_gabriela.cpp_CGabriella_binarySearchClavicleBlend_FUN_004d6f80 ; 004d6ee6
        ;   XREF to: 004d6f80 (UNCONDITIONAL_CALL)  ; void core_gabriela.cpp_CGabriella_binarySearchClavicleBlend_FUN_004d6f80(CGabriella * this_ptr, float delta_time, float * clavicle_blend, int probe_bone_index, ...)
    ADD ESP,0x18                        ; 004d6eeb
    MOV EAX,[0x006810c8]                ; 004d6eee | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 004d6ef3 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 004d6ef4
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004d6ef9
    ADD ESP,0x58                        ; 004d6efc
    POP EBP                             ; 004d6eff
    POP EDI                             ; 004d6f00
    POP ESI                             ; 004d6f01
    POP EBX                             ; 004d6f02
    RET                                 ; 004d6f03
    MOV dword ptr [EBX + 0x1fbf0],0x0   ; 004d6f04
        ;   Label: LAB_004d6f04
    JMP 0x004d6d8c                      ; 004d6f0e
        ;   XREF to: 004d6d8c (UNCONDITIONAL_JUMP)  ; LAB_004d6d8c
    MOV dword ptr [ESP + 0x3c],0xbf000000 ; 004d6f13
        ;   Label: LAB_004d6f13
    JMP 0x004d6e56                      ; 004d6f1b
        ;   XREF to: 004d6e56 (UNCONDITIONAL_JUMP)  ; LAB_004d6e56
    MOV dword ptr [ESP + 0x3c],0x3f000000 ; 004d6f20
        ;   Label: LAB_004d6f20
    JMP 0x004d6ec4                      ; 004d6f28
        ;   XREF to: 004d6ec4 (UNCONDITIONAL_JUMP)  ; LAB_004d6ec4
    PUSH 0x59ddb0                       ; 004d6f2a
        ;   Label: LAB_004d6f2a
    MOV ECX,dword ptr [0x02d7b84c]      ; 004d6f2f | INT_02d7b84c
    PUSH ECX                            ; 004d6f35
    PUSH dword ptr [EBX + 0x1fbf0]      ; 004d6f36
    PUSH 0x0                            ; 004d6f3c
    PUSH EDX                            ; 004d6f3e
    LEA ESI,[EBX + 0x158]               ; 004d6f3f
    PUSH ESI                            ; 004d6f45
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 ; 004d6f46
        ;   XREF to: 0059eb50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    ADD ESP,0x18                        ; 004d6f4b
    PUSH 0x59ddb0                       ; 004d6f4e
    MOV EDI,dword ptr [0x02d7b850]      ; 004d6f53 | INT_02d7b850
    PUSH EDI                            ; 004d6f59
    PUSH dword ptr [EBX + 0x1fbf4]      ; 004d6f5a
    PUSH 0x0                            ; 004d6f60
    PUSH 0x0                            ; 004d6f62
    PUSH ESI                            ; 004d6f64
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 ; 004d6f65
        ;   XREF to: 0059eb50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    ADD ESP,0x18                        ; 004d6f6a
    ADD ESP,0x58                        ; 004d6f6d
    POP EBP                             ; 004d6f70
    POP EDI                             ; 004d6f71
    POP ESI                             ; 004d6f72
    POP EBX                             ; 004d6f73
    RET                                 ; 004d6f74

