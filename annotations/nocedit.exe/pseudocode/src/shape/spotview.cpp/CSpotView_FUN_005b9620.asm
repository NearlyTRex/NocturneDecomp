; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_spotview_cpp_CSpotView_FUN_005b9620(CSpotView *this_ptr)
;
; Parameters:
; CSpotView *      Stack[0x4]:4   this_ptr
;
; XREF[8]:
;   core_cloth.cpp_CCloth_boneEditor_FUN_0043c880 at 0043c8f5
;   core_cloth.cpp_CCloth_lockedVertexEditor_FUN_0043d590 at 0043d5c8
;   core_morph.cpp_CMorph_FUN_0052ca90 at 0052caae
;   core_morph.cpp_FUN_0052bcb0 at 0052bdf3
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 00596a02
;   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 at 0051da03
;   shape_spotview.cpp_CSpotView_FUN_005b9670 at 005b9937
;   shape_spotview.cpp_CSpotView_ctor_FUN_005b95c0 at 005b9612
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b9620
        ;   Label: shape_spotview.cpp_CSpotView_FUN_005b9620
    MOV EDX,dword ptr [ESP + 0x8]       ; 005b9624
    TEST DL,0x1                         ; 005b9628
    JNZ 0x005b9659                      ; 005b962b
        ;   XREF to: 005b9659 (CONDITIONAL_JUMP)  ; LAB_005b9659
    TEST DL,0x2                         ; 005b962d
        ;   Label: LAB_005b962d
    JZ 0x005b9638                       ; 005b9630
        ;   XREF to: 005b9638 (CONDITIONAL_JUMP)  ; LAB_005b9638
    MOV ECX,dword ptr [EAX + 0xc]       ; 005b9632
    MOV dword ptr [EAX + 0x28],ECX      ; 005b9635
    TEST DL,0x8                         ; 005b9638
        ;   Label: LAB_005b9638
    JZ 0x005b9649                       ; 005b963b
        ;   XREF to: 005b9649 (CONDITIONAL_JUMP)  ; LAB_005b9649
    FLD float ptr [EAX + 0x10]          ; 005b963d
    MOV ECX,dword ptr [EAX + 0x14]      ; 005b9640
    MOV dword ptr [EAX + 0x34],ECX      ; 005b9643
    FSTP float ptr [EAX + 0x30]         ; 005b9646
    TEST DL,0x4                         ; 005b9649
        ;   Label: LAB_005b9649
    JZ 0x005b9653                       ; 005b964c
        ;   XREF to: 005b9653 (CONDITIONAL_JUMP)  ; LAB_005b9653
    MOV ECX,dword ptr [EAX]             ; 005b964e
    MOV dword ptr [EAX + 0x2c],ECX      ; 005b9650
    TEST DL,0x10                        ; 005b9653
        ;   Label: LAB_005b9653
    JNZ 0x005b9661                      ; 005b9656
        ;   XREF to: 005b9661 (CONDITIONAL_JUMP)  ; LAB_005b9661
    RET                                 ; 005b9658
    MOV ECX,dword ptr [EAX + 0x8]       ; 005b9659
        ;   Label: LAB_005b9659
    MOV dword ptr [EAX + 0x24],ECX      ; 005b965c
    JMP 0x005b962d                      ; 005b965f
        ;   XREF to: 005b962d (UNCONDITIONAL_JUMP)  ; LAB_005b962d
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b9661
        ;   Label: LAB_005b9661
    MOV dword ptr [EAX + 0x38],EDX      ; 005b9664
    RET                                 ; 005b9667

