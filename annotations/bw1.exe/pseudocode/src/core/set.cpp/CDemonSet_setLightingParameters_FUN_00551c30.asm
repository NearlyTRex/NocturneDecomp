; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setLightingParameters_FUN_00551c30(CDemonSet *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)
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
;   core_fire.cpp_CFireEffect_render_FUN_004b5100 at 004b5223
;   core_fire.cpp_CFireball_render_FUN_004ae640 at 004ae705
;   core_fire.cpp_CLeaf_render_FUN_004af270 at 004af2f6
;   core_fire.cpp_CRock_render_FUN_004af040 at 004af0c7
;   core_fire.cpp_CShell_render_FUN_004b4090 at 004b413a
;   core_fire.cpp_CStake_render_FUN_004ace60 at 004acef8
;   core_gore.cpp_CGore_renderParticles_FUN_004e5c50 at 004e5c88
;   core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0054eef0 at 0054ef93
;   core_set.cpp_FUN_00550da0 at 00551011
;   core_set.cpp_FUN_00551170 at 005513e4
;   ... and 3 more
;
; Referenced Globals:
;   undefined4 DAT_0202a840
;   undefined4 DAT_0202a844
;   undefined4 DAT_0202a848
;   undefined4 DAT_0202a84c
;   undefined4 DAT_0202a850
;   undefined4 DAT_0202a854
;   undefined4 DAT_0202a858
;   undefined4 DAT_0202a85c
;   undefined4 DAT_0202a860
;   undefined4 DAT_0202a864
;   undefined4 DAT_0202a868
;   undefined4 DAT_0202a86c
;   undefined4 DAT_0202a870
;   undefined4 DAT_0202a874
;   undefined4 DAT_0202a878
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551c30
        ;   Label: core_set.cpp_CDemonSet_setLightingParameters_FUN_00551c30
    PUSH ESI                            ; 00551c31
    MOV EAX,dword ptr [ESP + 0x10]      ; 00551c32
    MOV ECX,dword ptr [ESP + 0x14]      ; 00551c36
    MOV EDX,dword ptr [ESP + 0x18]      ; 00551c3a
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00551c3e
    MOV ESI,dword ptr [ESP + 0x20]      ; 00551c42
    TEST EAX,EAX                        ; 00551c46
    JZ 0x00551cdc                       ; 00551c48
        ;   XREF to: 00551cdc (CONDITIONAL_JUMP)  ; LAB_00551cdc
    PUSH EDI                            ; 00551c4e
    CMP EAX,0x202a844                   ; 00551c4f
    JNZ 0x00551ce3                      ; 00551c54
        ;   XREF to: 00551ce3 (CONDITIONAL_JUMP)  ; LAB_00551ce3
    CMP ECX,0x202a850                   ; 00551c5a
        ;   Label: LAB_00551c5a
    JZ 0x00551c7b                       ; 00551c60
        ;   XREF to: 00551c7b (CONDITIONAL_JUMP)  ; LAB_00551c7b
    FLD float ptr [ECX]                 ; 00551c62
    FLD float ptr [ECX + 0x8]           ; 00551c64
    MOV EAX,dword ptr [ECX + 0x4]       ; 00551c67
    MOV [0x0202a854],EAX                ; 00551c6a | DAT_0202a854
    FSTP float ptr [0x0202a858]         ; 00551c6f | DAT_0202a858
    FSTP float ptr [0x0202a850]         ; 00551c75 | DAT_0202a850
    CMP EDX,0x202a85c                   ; 00551c7b
        ;   Label: LAB_00551c7b
    JZ 0x00551c9c                       ; 00551c81
        ;   XREF to: 00551c9c (CONDITIONAL_JUMP)  ; LAB_00551c9c
    FLD float ptr [EDX]                 ; 00551c83
    FLD float ptr [EDX + 0x8]           ; 00551c85
    MOV EAX,dword ptr [EDX + 0x4]       ; 00551c88
    MOV [0x0202a860],EAX                ; 00551c8b | DAT_0202a860
    FSTP float ptr [0x0202a864]         ; 00551c90 | DAT_0202a864
    FSTP float ptr [0x0202a85c]         ; 00551c96 | DAT_0202a85c
    CMP EBX,0x202a868                   ; 00551c9c
        ;   Label: LAB_00551c9c
    JZ 0x00551cbd                       ; 00551ca2
        ;   XREF to: 00551cbd (CONDITIONAL_JUMP)  ; LAB_00551cbd
    FLD float ptr [EBX]                 ; 00551ca4
    FLD float ptr [EBX + 0x8]           ; 00551ca6
    MOV EAX,dword ptr [EBX + 0x4]       ; 00551ca9
    MOV [0x0202a86c],EAX                ; 00551cac | DAT_0202a86c
    FSTP float ptr [0x0202a870]         ; 00551cb1 | DAT_0202a870
    FSTP float ptr [0x0202a868]         ; 00551cb7 | DAT_0202a868
    TEST ESI,ESI                        ; 00551cbd
        ;   Label: LAB_00551cbd
    JZ 0x00551d02                       ; 00551cbf
        ;   XREF to: 00551d02 (CONDITIONAL_JUMP)  ; LAB_00551d02
    MOV ECX,0xa                         ; 00551cc1
    MOV EDI,0x202a874                   ; 00551cc6
    MOVSD.REP ES:EDI,ESI                ; 00551ccb | DAT_0202a874 | DAT_0202a878
    MOV EDX,0x2                         ; 00551ccd
    POP EDI                             ; 00551cd2
    MOV dword ptr [0x0202a840],EDX      ; 00551cd3 | DAT_0202a840
        ;   Label: LAB_00551cd3
    POP ESI                             ; 00551cd9
    POP EBX                             ; 00551cda
    RET                                 ; 00551cdb
    MOV EDX,0x1                         ; 00551cdc
        ;   Label: LAB_00551cdc
    JMP 0x00551cd3                      ; 00551ce1
        ;   XREF to: 00551cd3 (UNCONDITIONAL_JUMP)  ; LAB_00551cd3
    FLD float ptr [EAX]                 ; 00551ce3
        ;   Label: LAB_00551ce3
    FLD float ptr [EAX + 0x8]           ; 00551ce5
    MOV EDI,dword ptr [EAX + 0x4]       ; 00551ce8
    MOV dword ptr [0x0202a848],EDI      ; 00551ceb | DAT_0202a848
    FSTP float ptr [0x0202a84c]         ; 00551cf1 | DAT_0202a84c
    FSTP float ptr [0x0202a844]         ; 00551cf7 | DAT_0202a844
    JMP 0x00551c5a                      ; 00551cfd
        ;   XREF to: 00551c5a (UNCONDITIONAL_JUMP)  ; LAB_00551c5a
    MOV EDX,0x3f800000                  ; 00551d02
        ;   Label: LAB_00551d02
    MOV dword ptr [0x0202a878],ESI      ; 00551d07 | DAT_0202a878
    MOV dword ptr [0x0202a87c],ESI      ; 00551d0d | DAT_0202a87c
    MOV dword ptr [0x0202a880],ESI      ; 00551d13 | DAT_0202a880
    MOV dword ptr [0x0202a888],ESI      ; 00551d19 | DAT_0202a888
    MOV dword ptr [0x0202a88c],ESI      ; 00551d1f | DAT_0202a88c
    MOV dword ptr [0x0202a890],ESI      ; 00551d25 | DAT_0202a890
    MOV dword ptr [0x0202a884],EDX      ; 00551d2b | DAT_0202a884
    MOV dword ptr [0x0202a894],EDX      ; 00551d31 | DAT_0202a894
    MOV dword ptr [0x0202a874],EDX      ; 00551d37 | DAT_0202a874
    MOV EDX,0x2                         ; 00551d3d
    POP EDI                             ; 00551d42
    MOV dword ptr [0x0202a840],EDX      ; 00551d43 | DAT_0202a840
    POP ESI                             ; 00551d49
    POP EBX                             ; 00551d4a
    RET                                 ; 00551d4b

