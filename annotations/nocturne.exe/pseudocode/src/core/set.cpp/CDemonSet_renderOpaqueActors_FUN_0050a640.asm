; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderOpaqueActors_FUN_0050a640(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_set.cpp_FUN_00509a80 at 00509d4a
;   core_set.cpp_FUN_0050aba0 at 0050accd
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190
;   core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0
;   core_set.cpp_FUN_0050e080
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050a640
        ;   Label: core_set.cpp_CDemonSet_renderOpaqueActors_FUN_0050a640
    PUSH ESI                            ; 0050a641
    PUSH EDI                            ; 0050a642
    PUSH EBP                            ; 0050a643
    SUB ESP,0x34                        ; 0050a644
    MOV EDI,dword ptr [ESP + 0x48]      ; 0050a647
    MOV EBP,dword ptr [EDI + 0x15f2fc]  ; 0050a64b
    DEC EBP                             ; 0050a651
    TEST EBP,EBP                        ; 0050a652
    JL 0x0050a68d                       ; 0050a654
        ;   XREF to: 0050a68d (CONDITIONAL_JUMP)  ; LAB_0050a68d
    LEA EAX,[EBP*0x4 + 0x0]             ; 0050a656
    ADD EAX,EDI                         ; 0050a65d
    MOV dword ptr [ESP + 0x30],EAX      ; 0050a65f
    MOV EBX,dword ptr [ESP + 0x30]      ; 0050a663
        ;   Label: LAB_0050a663
    MOV EBX,dword ptr [EBX + 0x15f300]  ; 0050a667
    CMP dword ptr [EBX + 0xf8],0x0      ; 0050a66d
    JNZ 0x0050a695                      ; 0050a674
        ;   XREF to: 0050a695 (CONDITIONAL_JUMP)  ; LAB_0050a695
    AND byte ptr [EBX + 0x140],0xfb     ; 0050a676
    MOV EDX,dword ptr [ESP + 0x30]      ; 0050a67d
        ;   Label: LAB_0050a67d
    SUB EDX,0x4                         ; 0050a681
    DEC EBP                             ; 0050a684
    MOV dword ptr [ESP + 0x30],EDX      ; 0050a685
    TEST EBP,EBP                        ; 0050a689
    JGE 0x0050a663                      ; 0050a68b
        ;   XREF to: 0050a663 (CONDITIONAL_JUMP)  ; LAB_0050a663
    ADD ESP,0x34                        ; 0050a68d
        ;   Label: LAB_0050a68d
    POP EBP                             ; 0050a690
    POP EDI                             ; 0050a691
    POP ESI                             ; 0050a692
    POP EBX                             ; 0050a693
    RET                                 ; 0050a694
    MOV ESI,ESP                         ; 0050a695
        ;   Label: LAB_0050a695
    PUSH ESI                            ; 0050a697
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0050a698
    PUSH EBX                            ; 0050a69e
    CALL dword ptr [EAX + 0x14]         ; 0050a69f
    MOV ESI,EAX                         ; 0050a6a2
    MOV EDX,EAX                         ; 0050a6a4
    LEA EAX,[ESP + 0x20]                ; 0050a6a6
    ADD ESP,0x8                         ; 0050a6aa
    CMP EAX,ESI                         ; 0050a6ad
    JZ 0x0050a6c5                       ; 0050a6af
        ;   XREF to: 0050a6c5 (CONDITIONAL_JUMP)  ; LAB_0050a6c5
    MOV EAX,dword ptr [ESI]             ; 0050a6b1
    MOV dword ptr [ESP + 0x18],EAX      ; 0050a6b3
    MOV EAX,dword ptr [ESI + 0x4]       ; 0050a6b7
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050a6ba
    MOV EAX,dword ptr [ESI + 0x8]       ; 0050a6be
    MOV dword ptr [ESP + 0x20],EAX      ; 0050a6c1
    LEA EAX,[ESP + 0x24]                ; 0050a6c5
        ;   Label: LAB_0050a6c5
    LEA ESI,[EDX + 0xc]                 ; 0050a6c9
    CMP EAX,ESI                         ; 0050a6cc
    JZ 0x0050a6e4                       ; 0050a6ce
        ;   XREF to: 0050a6e4 (CONDITIONAL_JUMP)  ; LAB_0050a6e4
    MOV EAX,dword ptr [ESI]             ; 0050a6d0
    MOV dword ptr [ESP + 0x24],EAX      ; 0050a6d2
    MOV EAX,dword ptr [ESI + 0x4]       ; 0050a6d6
    MOV dword ptr [ESP + 0x28],EAX      ; 0050a6d9
    MOV EAX,dword ptr [ESI + 0x8]       ; 0050a6dd
    MOV dword ptr [ESP + 0x2c],EAX      ; 0050a6e0
    LEA EAX,[EBX + 0x3c]                ; 0050a6e4
        ;   Label: LAB_0050a6e4
    PUSH EAX                            ; 0050a6e7
    LEA EAX,[ESP + 0x28]                ; 0050a6e8
    PUSH EAX                            ; 0050a6ec
    LEA EAX,[ESP + 0x20]                ; 0050a6ed
    PUSH EAX                            ; 0050a6f1
    LEA EAX,[EBX + 0x30]                ; 0050a6f2
    PUSH EAX                            ; 0050a6f5
    LEA EAX,[EBX + 0x20]                ; 0050a6f6
    PUSH EAX                            ; 0050a6f9
    PUSH EDI                            ; 0050a6fa
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0 ; 0050a6fb
        ;   XREF to: 0050adc0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 0050a700
    MOV ESI,dword ptr [EBX + 0x110]     ; 0050a703
    PUSH ESI                            ; 0050a709
    MOV EAX,dword ptr [EBX + 0x10c]     ; 0050a70a
    PUSH EAX                            ; 0050a710
    MOV EDX,dword ptr [EBX + 0x108]     ; 0050a711
    PUSH EDX                            ; 0050a717
    PUSH EDI                            ; 0050a718
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340 ; 0050a719
        ;   XREF to: 0050e340 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 0050a71e
    PUSH 0xffff                         ; 0050a721
    MOV ECX,dword ptr [0x005ae704]      ; 0050a726 | DAT_005ae704
    PUSH ECX                            ; 0050a72c | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 0050a72d
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0050a732
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0050a735
    PUSH EBX                            ; 0050a73b
    CALL dword ptr [EAX + 0x8]          ; 0050a73c
    ADD ESP,0x4                         ; 0050a73f
    TEST EAX,EAX                        ; 0050a742
    JZ 0x0050a7d4                       ; 0050a744
        ;   XREF to: 0050a7d4 (CONDITIONAL_JUMP)  ; LAB_0050a7d4
    OR byte ptr [EBX + 0x140],0x4       ; 0050a74a
    PUSH 0x1                            ; 0050a751
        ;   Label: LAB_0050a751
    MOV ESI,dword ptr [0x005ae704]      ; 0050a753 | DAT_005ae704
    PUSH ESI                            ; 0050a759 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 0050a75a
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0050a75f
    MOV EAX,dword ptr [EDI + 0x15a8cc]  ; 0050a762
    XOR ESI,ESI                         ; 0050a768
    TEST EAX,EAX                        ; 0050a76a
    JLE 0x0050a7b7                      ; 0050a76c
        ;   XREF to: 0050a7b7 (CONDITIONAL_JUMP)  ; LAB_0050a7b7
    PUSH 0x0                            ; 0050a76e
        ;   Label: LAB_0050a76e
    PUSH ESI                            ; 0050a770
    PUSH EDI                            ; 0050a771
    CALL core_set.cpp_FUN_0050e080      ; 0050a772
        ;   XREF to: 0050e080 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0050e080(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 0050a777
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0050a77a
    PUSH EBX                            ; 0050a780
    CALL dword ptr [EAX + 0x8]          ; 0050a781
    ADD ESP,0x4                         ; 0050a784
    TEST EAX,EAX                        ; 0050a787
    JZ 0x0050a792                       ; 0050a789
        ;   XREF to: 0050a792 (CONDITIONAL_JUMP)  ; LAB_0050a792
    OR byte ptr [EBX + 0x140],0x4       ; 0050a78b
    PUSH 0x1                            ; 0050a792
        ;   Label: LAB_0050a792
    MOV EDX,dword ptr [0x005ae704]      ; 0050a794 | DAT_005ae704
    PUSH EDX                            ; 0050a79a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 0050a79b
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0050a7a0
    PUSH EDI                            ; 0050a7a3
    INC ESI                             ; 0050a7a4
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190 ; 0050a7a5
        ;   XREF to: 0050e190 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190()
    MOV ECX,dword ptr [EDI + 0x15a8cc]  ; 0050a7aa
    ADD ESP,0x4                         ; 0050a7b0
    CMP ESI,ECX                         ; 0050a7b3
    JL 0x0050a76e                       ; 0050a7b5
        ;   XREF to: 0050a76e (CONDITIONAL_JUMP)  ; LAB_0050a76e
    PUSH 0x10000                        ; 0050a7b7
        ;   Label: LAB_0050a7b7
    PUSH 0x10000                        ; 0050a7bc
    PUSH 0x10000                        ; 0050a7c1
    PUSH EDI                            ; 0050a7c6
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340 ; 0050a7c7
        ;   XREF to: 0050e340 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 0050a7cc
    JMP 0x0050a67d                      ; 0050a7cf
        ;   XREF to: 0050a67d (UNCONDITIONAL_JUMP)  ; LAB_0050a67d
    AND byte ptr [EBX + 0x140],0xfb     ; 0050a7d4
        ;   Label: LAB_0050a7d4
    JMP 0x0050a751                      ; 0050a7db
        ;   XREF to: 0050a751 (UNCONDITIONAL_JUMP)  ; LAB_0050a751

