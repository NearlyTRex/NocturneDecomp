; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_spotview_cpp_CSpotView_clampValues_FUN_00584720(CSpotView *this_ptr)
;
; Parameters:
; CSpotView *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_spotview.cpp_FUN_0058443e at 005846d2
;
; Referenced Globals:
;   undefined4 DAT_005f630c
;   undefined4 DAT_005f6310
;   undefined4 DAT_005f6314
;   undefined4 DAT_005f631c
;   undefined4 DAT_005f6324
;   undefined4 DAT_005f632c
;   undefined4 DAT_005f6334
;   undefined4 DAT_005f633c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00584720
        ;   Label: shape_spotview.cpp_CSpotView_clampValues_FUN_00584720
    CMP dword ptr [EDX + 0x28],0x40490fdb ; 00584724
    JL 0x005847be                       ; 0058472b
        ;   XREF to: 005847be (CONDITIONAL_JUMP)  ; LAB_005847be
    CMP dword ptr [EDX + 0x28],0x40490fdb ; 00584731
        ;   Label: LAB_00584731
    JLE 0x00584746                      ; 00584738
        ;   XREF to: 00584746 (CONDITIONAL_JUMP)  ; LAB_00584746
    FLD float ptr [EDX + 0x28]          ; 0058473a
    FADD float ptr [0x005f6310]         ; 0058473d | DAT_005f6310
    FSTP float ptr [EDX + 0x28]         ; 00584743
    FLD float ptr [EDX + 0x24]          ; 00584746
        ;   Label: LAB_00584746
    FCOMP double ptr [0x005f6314]       ; 00584749 | DAT_005f6314
    FNSTSW AX                           ; 0058474f
    SAHF                                ; 00584751
    JNC 0x0058475b                      ; 00584752
        ;   XREF to: 0058475b (CONDITIONAL_JUMP)  ; LAB_0058475b
    MOV dword ptr [EDX + 0x24],0xbfc90fdb ; 00584754
    FLD float ptr [EDX + 0x24]          ; 0058475b
        ;   Label: LAB_0058475b
    FCOMP double ptr [0x005f631c]       ; 0058475e | DAT_005f631c
    FNSTSW AX                           ; 00584764
    SAHF                                ; 00584766
    JBE 0x00584770                      ; 00584767
        ;   XREF to: 00584770 (CONDITIONAL_JUMP)  ; LAB_00584770
    MOV dword ptr [EDX + 0x24],0x3fc90fdb ; 00584769
    FLD float ptr [EDX + 0x2c]          ; 00584770
        ;   Label: LAB_00584770
    FCOMP double ptr [0x005f6324]       ; 00584773 | DAT_005f6324
    FNSTSW AX                           ; 00584779
    SAHF                                ; 0058477b
    JNC 0x00584785                      ; 0058477c
        ;   XREF to: 00584785 (CONDITIONAL_JUMP)  ; LAB_00584785
    MOV dword ptr [EDX + 0x2c],0x3dcccccd ; 0058477e
    FLD float ptr [EDX + 0x2c]          ; 00584785
        ;   Label: LAB_00584785
    FCOMP double ptr [0x005f632c]       ; 00584788 | DAT_005f632c
    FNSTSW AX                           ; 0058478e
    SAHF                                ; 00584790
    JBE 0x0058479a                      ; 00584791
        ;   XREF to: 0058479a (CONDITIONAL_JUMP)  ; LAB_0058479a
    MOV dword ptr [EDX + 0x2c],0x461c4000 ; 00584793
    FLD float ptr [EDX + 0x38]          ; 0058479a
        ;   Label: LAB_0058479a
    FCOMP double ptr [0x005f6334]       ; 0058479d | DAT_005f6334
    FNSTSW AX                           ; 005847a3
    SAHF                                ; 005847a5
    JNC 0x005847af                      ; 005847a6
        ;   XREF to: 005847af (CONDITIONAL_JUMP)  ; LAB_005847af
    MOV dword ptr [EDX + 0x38],0x3c23d70a ; 005847a8
    FLD float ptr [EDX + 0x38]          ; 005847af
        ;   Label: LAB_005847af
    FCOMP double ptr [0x005f633c]       ; 005847b2 | DAT_005f633c
    FNSTSW AX                           ; 005847b8
    SAHF                                ; 005847ba
    JA 0x005847cf                       ; 005847bb
        ;   XREF to: 005847cf (CONDITIONAL_JUMP)  ; LAB_005847cf
    RET                                 ; 005847bd
    FLD float ptr [EDX + 0x28]          ; 005847be
        ;   Label: LAB_005847be
    FADD float ptr [0x005f630c]         ; 005847c1 | DAT_005f630c
    FSTP float ptr [EDX + 0x28]         ; 005847c7
    JMP 0x00584731                      ; 005847ca
        ;   XREF to: 00584731 (UNCONDITIONAL_JUMP)  ; LAB_00584731
    MOV dword ptr [EDX + 0x38],0x42c80000 ; 005847cf
        ;   Label: LAB_005847cf
    RET                                 ; 005847d6

