; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setLightingParameters_FUN_005375c0(CDemonSet *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)
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
;   core_fire.cpp_CFireEffect_render_FUN_004a1ad0 at 004a1bf3
;   core_fire.cpp_CShell_render_FUN_004a09f0 at 004a0a9a
;   core_fire.cpp_CStake_render_FUN_00497dc0 at 00497e58
;   core_fire.cpp_FUN_00499690 at 00499755
;   core_fire.cpp_FUN_0049a090 at 0049a117
;   core_fire.cpp_FUN_0049a2c0 at 0049a346
;   core_gore.cpp_CGore_renderParticles_FUN_004ce5b0 at 004ce5e8
;   core_set.cpp_CDemonSet_renderBackgroundActors_FUN_005346b0 at 00534753
;   core_set.cpp_FUN_005365c0 at 00536831
;   core_set.cpp_FUN_00536990 at 00536bf4
;   ... and 3 more
;
; Referenced Globals:
;   undefined4 DAT_0207ffa8
;   undefined4 DAT_0207ffac
;   undefined4 DAT_0207ffb0
;   undefined4 DAT_0207ffb4
;   undefined4 DAT_0207ffb8
;   undefined4 DAT_0207ffbc
;   undefined4 DAT_0207ffc0
;   undefined4 DAT_0207ffc4
;   undefined4 DAT_0207ffc8
;   undefined4 DAT_0207ffcc
;   undefined4 DAT_0207ffd0
;   undefined4 DAT_0207ffd4
;   undefined4 DAT_0207ffd8
;   undefined4 DAT_0207ffdc
;   undefined4 DAT_0207ffe0
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005375c0
        ;   Label: core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0
    PUSH ESI                            ; 005375c1
    MOV EAX,dword ptr [ESP + 0x10]      ; 005375c2
    MOV ECX,dword ptr [ESP + 0x14]      ; 005375c6
    MOV EDX,dword ptr [ESP + 0x18]      ; 005375ca
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005375ce
    MOV ESI,dword ptr [ESP + 0x20]      ; 005375d2
    TEST EAX,EAX                        ; 005375d6
    JZ 0x0053766c                       ; 005375d8
        ;   XREF to: 0053766c (CONDITIONAL_JUMP)  ; LAB_0053766c
    PUSH EDI                            ; 005375de
    CMP EAX,0x207ffac                   ; 005375df
    JNZ 0x00537673                      ; 005375e4
        ;   XREF to: 00537673 (CONDITIONAL_JUMP)  ; LAB_00537673
    CMP ECX,0x207ffb8                   ; 005375ea
        ;   Label: LAB_005375ea
    JZ 0x0053760b                       ; 005375f0
        ;   XREF to: 0053760b (CONDITIONAL_JUMP)  ; LAB_0053760b
    FLD float ptr [ECX]                 ; 005375f2
    FLD float ptr [ECX + 0x8]           ; 005375f4
    MOV EAX,dword ptr [ECX + 0x4]       ; 005375f7
    MOV [0x0207ffbc],EAX                ; 005375fa | DAT_0207ffbc
    FSTP float ptr [0x0207ffc0]         ; 005375ff | DAT_0207ffc0
    FSTP float ptr [0x0207ffb8]         ; 00537605 | DAT_0207ffb8
    CMP EDX,0x207ffc4                   ; 0053760b
        ;   Label: LAB_0053760b
    JZ 0x0053762c                       ; 00537611
        ;   XREF to: 0053762c (CONDITIONAL_JUMP)  ; LAB_0053762c
    FLD float ptr [EDX]                 ; 00537613
    FLD float ptr [EDX + 0x8]           ; 00537615
    MOV EAX,dword ptr [EDX + 0x4]       ; 00537618
    MOV [0x0207ffc8],EAX                ; 0053761b | DAT_0207ffc8
    FSTP float ptr [0x0207ffcc]         ; 00537620 | DAT_0207ffcc
    FSTP float ptr [0x0207ffc4]         ; 00537626 | DAT_0207ffc4
    CMP EBX,0x207ffd0                   ; 0053762c
        ;   Label: LAB_0053762c
    JZ 0x0053764d                       ; 00537632
        ;   XREF to: 0053764d (CONDITIONAL_JUMP)  ; LAB_0053764d
    FLD float ptr [EBX]                 ; 00537634
    FLD float ptr [EBX + 0x8]           ; 00537636
    MOV EAX,dword ptr [EBX + 0x4]       ; 00537639
    MOV [0x0207ffd4],EAX                ; 0053763c | DAT_0207ffd4
    FSTP float ptr [0x0207ffd8]         ; 00537641 | DAT_0207ffd8
    FSTP float ptr [0x0207ffd0]         ; 00537647 | DAT_0207ffd0
    TEST ESI,ESI                        ; 0053764d
        ;   Label: LAB_0053764d
    JZ 0x00537692                       ; 0053764f
        ;   XREF to: 00537692 (CONDITIONAL_JUMP)  ; LAB_00537692
    MOV ECX,0xa                         ; 00537651
    MOV EDI,0x207ffdc                   ; 00537656
    MOVSD.REP ES:EDI,ESI                ; 0053765b | DAT_0207ffdc | DAT_0207ffe0
    MOV EDX,0x2                         ; 0053765d
    POP EDI                             ; 00537662
    MOV dword ptr [0x0207ffa8],EDX      ; 00537663 | DAT_0207ffa8
        ;   Label: LAB_00537663
    POP ESI                             ; 00537669
    POP EBX                             ; 0053766a
    RET                                 ; 0053766b
    MOV EDX,0x1                         ; 0053766c
        ;   Label: LAB_0053766c
    JMP 0x00537663                      ; 00537671
        ;   XREF to: 00537663 (UNCONDITIONAL_JUMP)  ; LAB_00537663
    FLD float ptr [EAX]                 ; 00537673
        ;   Label: LAB_00537673
    FLD float ptr [EAX + 0x8]           ; 00537675
    MOV EDI,dword ptr [EAX + 0x4]       ; 00537678
    MOV dword ptr [0x0207ffb0],EDI      ; 0053767b | DAT_0207ffb0
    FSTP float ptr [0x0207ffb4]         ; 00537681 | DAT_0207ffb4
    FSTP float ptr [0x0207ffac]         ; 00537687 | DAT_0207ffac
    JMP 0x005375ea                      ; 0053768d
        ;   XREF to: 005375ea (UNCONDITIONAL_JUMP)  ; LAB_005375ea
    MOV EDX,0x3f800000                  ; 00537692
        ;   Label: LAB_00537692
    MOV dword ptr [0x0207ffe0],ESI      ; 00537697 | DAT_0207ffe0
    MOV dword ptr [0x0207ffe4],ESI      ; 0053769d | DAT_0207ffe4
    MOV dword ptr [0x0207ffe8],ESI      ; 005376a3 | DAT_0207ffe8
    MOV dword ptr [0x0207fff0],ESI      ; 005376a9 | DAT_0207fff0
    MOV dword ptr [0x0207fff4],ESI      ; 005376af | DAT_0207fff4
    MOV dword ptr [0x0207fff8],ESI      ; 005376b5 | DAT_0207fff8
    MOV dword ptr [0x0207ffec],EDX      ; 005376bb | DAT_0207ffec
    MOV dword ptr [0x0207fffc],EDX      ; 005376c1 | DAT_0207fffc
    MOV dword ptr [0x0207ffdc],EDX      ; 005376c7 | DAT_0207ffdc
    MOV EDX,0x2                         ; 005376cd
    POP EDI                             ; 005376d2
    MOV dword ptr [0x0207ffa8],EDX      ; 005376d3 | DAT_0207ffa8
    POP ESI                             ; 005376d9
    POP EBX                             ; 005376da
    RET                                 ; 005376db

