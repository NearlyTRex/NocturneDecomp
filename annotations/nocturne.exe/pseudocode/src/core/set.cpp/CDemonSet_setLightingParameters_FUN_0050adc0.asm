; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0(CDemonSet *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; UOrientationVector * Stack[0xc]:4   orientation
; CVector3f *      Stack[0x10]:4   aabb_min
; CVector3f *      Stack[0x14]:4   aabb_max
; CMatrix3x3f *    Stack[0x18]:4   rotation_matrix
;
; XREF[11]:
;   core_fire.cpp_CFireEffect_render_FUN_0048a650 at 0048a723
;   core_fire.cpp_CFireball_render_FUN_00484390 at 0048446f
;   core_fire.cpp_CRock_render_FUN_00484d40 at 00484ded
;   core_fire.cpp_CShell_render_FUN_004896d0 at 00489779
;   core_fire.cpp_CStake_render_FUN_004835d0 at 00483688
;   core_gore.cpp_CGore_renderParticles_FUN_004afe00 at 004afe38
;   core_set.cpp_CDemonSet_renderBackgroundActors_FUN_00508750 at 005087d8
;   core_set.cpp_CDemonSet_renderGogglesView_FUN_0050a260 at 0050a4af
;   core_set.cpp_CDemonSet_renderOpaqueActors_FUN_0050a640 at 0050a6fb
;   core_set.cpp_CDemonSet_renderTransparentActors_FUN_0050a7e0 at 0050a89b
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 DAT_01fff548
;   undefined4 DAT_01fff54c
;   undefined4 DAT_01fff550
;   undefined4 DAT_01fff554
;   undefined4 DAT_01fff558
;   undefined4 DAT_01fff55c
;   undefined4 DAT_01fff560
;   undefined4 DAT_01fff564
;   undefined4 DAT_01fff568
;   undefined4 DAT_01fff56c
;   undefined4 DAT_01fff570
;   undefined4 DAT_01fff574
;   undefined4 DAT_01fff578
;   undefined4 DAT_01fff57c
;   undefined4 DAT_01fff580
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050adc0
        ;   Label: core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0
    PUSH ESI                            ; 0050adc1
    MOV EAX,dword ptr [ESP + 0x10]      ; 0050adc2
    MOV ECX,dword ptr [ESP + 0x14]      ; 0050adc6
    MOV EDX,dword ptr [ESP + 0x18]      ; 0050adca
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0050adce
    MOV ESI,dword ptr [ESP + 0x20]      ; 0050add2
    TEST EAX,EAX                        ; 0050add6
    JZ 0x0050ae6c                       ; 0050add8
        ;   XREF to: 0050ae6c (CONDITIONAL_JUMP)  ; LAB_0050ae6c
    PUSH EDI                            ; 0050adde
    CMP EAX,0x1fff54c                   ; 0050addf
    JNZ 0x0050ae73                      ; 0050ade4
        ;   XREF to: 0050ae73 (CONDITIONAL_JUMP)  ; LAB_0050ae73
    CMP ECX,0x1fff558                   ; 0050adea
        ;   Label: LAB_0050adea
    JZ 0x0050ae0b                       ; 0050adf0
        ;   XREF to: 0050ae0b (CONDITIONAL_JUMP)  ; LAB_0050ae0b
    FLD float ptr [ECX]                 ; 0050adf2
    FLD float ptr [ECX + 0x8]           ; 0050adf4
    MOV EAX,dword ptr [ECX + 0x4]       ; 0050adf7
    MOV [0x01fff55c],EAX                ; 0050adfa | DAT_01fff55c
    FSTP float ptr [0x01fff560]         ; 0050adff | DAT_01fff560
    FSTP float ptr [0x01fff558]         ; 0050ae05 | DAT_01fff558
    CMP EDX,0x1fff564                   ; 0050ae0b
        ;   Label: LAB_0050ae0b
    JZ 0x0050ae2c                       ; 0050ae11
        ;   XREF to: 0050ae2c (CONDITIONAL_JUMP)  ; LAB_0050ae2c
    FLD float ptr [EDX]                 ; 0050ae13
    FLD float ptr [EDX + 0x8]           ; 0050ae15
    MOV EAX,dword ptr [EDX + 0x4]       ; 0050ae18
    MOV [0x01fff568],EAX                ; 0050ae1b | DAT_01fff568
    FSTP float ptr [0x01fff56c]         ; 0050ae20 | DAT_01fff56c
    FSTP float ptr [0x01fff564]         ; 0050ae26 | DAT_01fff564
    CMP EBX,0x1fff570                   ; 0050ae2c
        ;   Label: LAB_0050ae2c
    JZ 0x0050ae4d                       ; 0050ae32
        ;   XREF to: 0050ae4d (CONDITIONAL_JUMP)  ; LAB_0050ae4d
    FLD float ptr [EBX]                 ; 0050ae34
    FLD float ptr [EBX + 0x8]           ; 0050ae36
    MOV EAX,dword ptr [EBX + 0x4]       ; 0050ae39
    MOV [0x01fff574],EAX                ; 0050ae3c | DAT_01fff574
    FSTP float ptr [0x01fff578]         ; 0050ae41 | DAT_01fff578
    FSTP float ptr [0x01fff570]         ; 0050ae47 | DAT_01fff570
    TEST ESI,ESI                        ; 0050ae4d
        ;   Label: LAB_0050ae4d
    JZ 0x0050ae92                       ; 0050ae4f
        ;   XREF to: 0050ae92 (CONDITIONAL_JUMP)  ; LAB_0050ae92
    MOV ECX,0xa                         ; 0050ae51
    MOV EDI,0x1fff57c                   ; 0050ae56
    MOVSD.REP ES:EDI,ESI                ; 0050ae5b | DAT_01fff57c | DAT_01fff580
    MOV EDX,0x2                         ; 0050ae5d
    POP EDI                             ; 0050ae62
    MOV dword ptr [0x01fff548],EDX      ; 0050ae63 | DAT_01fff548
        ;   Label: LAB_0050ae63
    POP ESI                             ; 0050ae69
    POP EBX                             ; 0050ae6a
    RET                                 ; 0050ae6b
    MOV EDX,0x1                         ; 0050ae6c
        ;   Label: LAB_0050ae6c
    JMP 0x0050ae63                      ; 0050ae71
        ;   XREF to: 0050ae63 (UNCONDITIONAL_JUMP)  ; LAB_0050ae63
    FLD float ptr [EAX]                 ; 0050ae73
        ;   Label: LAB_0050ae73
    FLD float ptr [EAX + 0x8]           ; 0050ae75
    MOV EDI,dword ptr [EAX + 0x4]       ; 0050ae78
    MOV dword ptr [0x01fff550],EDI      ; 0050ae7b | DAT_01fff550
    FSTP float ptr [0x01fff554]         ; 0050ae81 | DAT_01fff554
    FSTP float ptr [0x01fff54c]         ; 0050ae87 | DAT_01fff54c
    JMP 0x0050adea                      ; 0050ae8d
        ;   XREF to: 0050adea (UNCONDITIONAL_JUMP)  ; LAB_0050adea
    MOV EDX,0x3f800000                  ; 0050ae92
        ;   Label: LAB_0050ae92
    MOV dword ptr [0x01fff580],ESI      ; 0050ae97 | DAT_01fff580
    MOV dword ptr [0x01fff584],ESI      ; 0050ae9d | DAT_01fff584
    MOV dword ptr [0x01fff588],ESI      ; 0050aea3 | DAT_01fff588
    MOV dword ptr [0x01fff590],ESI      ; 0050aea9 | DAT_01fff590
    MOV dword ptr [0x01fff594],ESI      ; 0050aeaf | DAT_01fff594
    MOV dword ptr [0x01fff598],ESI      ; 0050aeb5 | DAT_01fff598
    MOV dword ptr [0x01fff58c],EDX      ; 0050aebb | DAT_01fff58c
    MOV dword ptr [0x01fff59c],EDX      ; 0050aec1 | DAT_01fff59c
    MOV dword ptr [0x01fff57c],EDX      ; 0050aec7 | DAT_01fff57c
    MOV EDX,0x2                         ; 0050aecd
    POP EDI                             ; 0050aed2
    MOV dword ptr [0x01fff548],EDX      ; 0050aed3 | DAT_01fff548
    POP ESI                             ; 0050aed9
    POP EBX                             ; 0050aeda
    RET                                 ; 0050aedb

