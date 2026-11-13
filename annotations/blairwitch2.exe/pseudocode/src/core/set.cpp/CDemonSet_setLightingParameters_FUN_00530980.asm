; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setLightingParameters_FUN_00530980(CDemonSet *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; UOrientationVector * Stack[0xc]:4   orientation
; CVector3f *      Stack[0x10]:4   aabb_min
; CVector3f *      Stack[0x14]:4   aabb_max
; CMatrix3x3f *    Stack[0x18]:4   rotation_matrix
;
; XREF[13]:
;   core_fire.cpp_CFireEffect_render_FUN_0049c780 at 0049c8a3
;   core_fire.cpp_CFireball_render_FUN_00495ca0 at 00495d65
;   core_fire.cpp_CLeaf_render_FUN_004968d0 at 00496956
;   core_fire.cpp_CRock_render_FUN_004966a0 at 00496727
;   core_fire.cpp_CShell_render_FUN_0049b6f0 at 0049b79a
;   core_fire.cpp_CStake_render_FUN_004944c0 at 00494558
;   core_gore.cpp_CGore_renderParticles_FUN_004c9440 at 004c9478
;   core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10 at 0052dcb3
;   core_set.cpp_FUN_0052fad0 at 0052fd41
;   core_set.cpp_FUN_0052fea0 at 00530102
;   ... and 3 more
;
; Referenced Globals:
;   undefined4 DAT_0200e88c
;   undefined4 DAT_0200e890
;   undefined4 DAT_0200e894
;   undefined4 DAT_0200e898
;   undefined4 DAT_0200e89c
;   undefined4 DAT_0200e8a0
;   undefined4 DAT_0200e8a4
;   undefined4 DAT_0200e8a8
;   undefined4 DAT_0200e8ac
;   undefined4 DAT_0200e8b0
;   undefined4 DAT_0200e8b4
;   undefined4 DAT_0200e8b8
;   undefined4 DAT_0200e8bc
;   undefined4 DAT_0200e8c0
;   undefined4 DAT_0200e8c4
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00530980
        ;   Label: core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980
    PUSH ESI                            ; 00530981
    MOV EAX,dword ptr [ESP + 0x10]      ; 00530982
    MOV ECX,dword ptr [ESP + 0x14]      ; 00530986
    MOV EDX,dword ptr [ESP + 0x18]      ; 0053098a
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0053098e
    MOV ESI,dword ptr [ESP + 0x20]      ; 00530992
    TEST EAX,EAX                        ; 00530996
    JZ 0x00530a2c                       ; 00530998
        ;   XREF to: 00530a2c (CONDITIONAL_JUMP)  ; LAB_00530a2c
    PUSH EDI                            ; 0053099e
    CMP EAX,0x200e890                   ; 0053099f
    JNZ 0x00530a33                      ; 005309a4
        ;   XREF to: 00530a33 (CONDITIONAL_JUMP)  ; LAB_00530a33
    CMP ECX,0x200e89c                   ; 005309aa
        ;   Label: LAB_005309aa
    JZ 0x005309cb                       ; 005309b0
        ;   XREF to: 005309cb (CONDITIONAL_JUMP)  ; LAB_005309cb
    FLD float ptr [ECX]                 ; 005309b2
    FLD float ptr [ECX + 0x8]           ; 005309b4
    MOV EAX,dword ptr [ECX + 0x4]       ; 005309b7
    MOV [0x0200e8a0],EAX                ; 005309ba | DAT_0200e8a0
    FSTP float ptr [0x0200e8a4]         ; 005309bf | DAT_0200e8a4
    FSTP float ptr [0x0200e89c]         ; 005309c5 | DAT_0200e89c
    CMP EDX,0x200e8a8                   ; 005309cb
        ;   Label: LAB_005309cb
    JZ 0x005309ec                       ; 005309d1
        ;   XREF to: 005309ec (CONDITIONAL_JUMP)  ; LAB_005309ec
    FLD float ptr [EDX]                 ; 005309d3
    FLD float ptr [EDX + 0x8]           ; 005309d5
    MOV EAX,dword ptr [EDX + 0x4]       ; 005309d8
    MOV [0x0200e8ac],EAX                ; 005309db | DAT_0200e8ac
    FSTP float ptr [0x0200e8b0]         ; 005309e0 | DAT_0200e8b0
    FSTP float ptr [0x0200e8a8]         ; 005309e6 | DAT_0200e8a8
    CMP EBX,0x200e8b4                   ; 005309ec
        ;   Label: LAB_005309ec
    JZ 0x00530a0d                       ; 005309f2
        ;   XREF to: 00530a0d (CONDITIONAL_JUMP)  ; LAB_00530a0d
    FLD float ptr [EBX]                 ; 005309f4
    FLD float ptr [EBX + 0x8]           ; 005309f6
    MOV EAX,dword ptr [EBX + 0x4]       ; 005309f9
    MOV [0x0200e8b8],EAX                ; 005309fc | DAT_0200e8b8
    FSTP float ptr [0x0200e8bc]         ; 00530a01 | DAT_0200e8bc
    FSTP float ptr [0x0200e8b4]         ; 00530a07 | DAT_0200e8b4
    TEST ESI,ESI                        ; 00530a0d
        ;   Label: LAB_00530a0d
    JZ 0x00530a52                       ; 00530a0f
        ;   XREF to: 00530a52 (CONDITIONAL_JUMP)  ; LAB_00530a52
    MOV ECX,0xa                         ; 00530a11
    MOV EDI,0x200e8c0                   ; 00530a16
    MOVSD.REP ES:EDI,ESI                ; 00530a1b | DAT_0200e8c0 | DAT_0200e8c4
    MOV EDX,0x2                         ; 00530a1d
    POP EDI                             ; 00530a22
    MOV dword ptr [0x0200e88c],EDX      ; 00530a23 | DAT_0200e88c
        ;   Label: LAB_00530a23
    POP ESI                             ; 00530a29
    POP EBX                             ; 00530a2a
    RET                                 ; 00530a2b
    MOV EDX,0x1                         ; 00530a2c
        ;   Label: LAB_00530a2c
    JMP 0x00530a23                      ; 00530a31
        ;   XREF to: 00530a23 (UNCONDITIONAL_JUMP)  ; LAB_00530a23
    FLD float ptr [EAX]                 ; 00530a33
        ;   Label: LAB_00530a33
    FLD float ptr [EAX + 0x8]           ; 00530a35
    MOV EDI,dword ptr [EAX + 0x4]       ; 00530a38
    MOV dword ptr [0x0200e894],EDI      ; 00530a3b | DAT_0200e894
    FSTP float ptr [0x0200e898]         ; 00530a41 | DAT_0200e898
    FSTP float ptr [0x0200e890]         ; 00530a47 | DAT_0200e890
    JMP 0x005309aa                      ; 00530a4d
        ;   XREF to: 005309aa (UNCONDITIONAL_JUMP)  ; LAB_005309aa
    MOV EDX,0x3f800000                  ; 00530a52
        ;   Label: LAB_00530a52
    MOV dword ptr [0x0200e8c4],ESI      ; 00530a57 | DAT_0200e8c4
    MOV dword ptr [0x0200e8c8],ESI      ; 00530a5d | DAT_0200e8c8
    MOV dword ptr [0x0200e8cc],ESI      ; 00530a63 | DAT_0200e8cc
    MOV dword ptr [0x0200e8d4],ESI      ; 00530a69 | DAT_0200e8d4
    MOV dword ptr [0x0200e8d8],ESI      ; 00530a6f | DAT_0200e8d8
    MOV dword ptr [0x0200e8dc],ESI      ; 00530a75 | DAT_0200e8dc
    MOV dword ptr [0x0200e8d0],EDX      ; 00530a7b | DAT_0200e8d0
    MOV dword ptr [0x0200e8e0],EDX      ; 00530a81 | DAT_0200e8e0
    MOV dword ptr [0x0200e8c0],EDX      ; 00530a87 | DAT_0200e8c0
    MOV EDX,0x2                         ; 00530a8d
    POP EDI                             ; 00530a92
    MOV dword ptr [0x0200e88c],EDX      ; 00530a93 | DAT_0200e88c
    POP ESI                             ; 00530a99
    POP EBX                             ; 00530a9a
    RET                                 ; 00530a9b

