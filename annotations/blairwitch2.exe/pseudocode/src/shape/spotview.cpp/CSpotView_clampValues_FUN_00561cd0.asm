; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_spotview_cpp_CSpotView_clampValues_FUN_00561cd0(CSpotView *this_ptr)
;
; Parameters:
; CSpotView *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_spotview.cpp_FUN_005619f0 at 00561c82
;
; Referenced Globals:
;   undefined4 DAT_005eb108
;   undefined4 DAT_005eb10c
;   undefined4 DAT_005eb110
;   undefined4 DAT_005eb118
;   undefined4 DAT_005eb120
;   undefined4 DAT_005eb128
;   undefined4 DAT_005eb130
;   undefined4 DAT_005eb138
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00561cd0
        ;   Label: shape_spotview.cpp_CSpotView_clampValues_FUN_00561cd0
    CMP dword ptr [EDX + 0x28],0x40490fdb ; 00561cd4
    JL 0x00561d6e                       ; 00561cdb
        ;   XREF to: 00561d6e (CONDITIONAL_JUMP)  ; LAB_00561d6e
    CMP dword ptr [EDX + 0x28],0x40490fdb ; 00561ce1
        ;   Label: LAB_00561ce1
    JLE 0x00561cf6                      ; 00561ce8
        ;   XREF to: 00561cf6 (CONDITIONAL_JUMP)  ; LAB_00561cf6
    FLD float ptr [EDX + 0x28]          ; 00561cea
    FADD float ptr [0x005eb10c]         ; 00561ced | DAT_005eb10c
    FSTP float ptr [EDX + 0x28]         ; 00561cf3
    FLD float ptr [EDX + 0x24]          ; 00561cf6
        ;   Label: LAB_00561cf6
    FCOMP double ptr [0x005eb110]       ; 00561cf9 | DAT_005eb110
    FNSTSW AX                           ; 00561cff
    SAHF                                ; 00561d01
    JNC 0x00561d0b                      ; 00561d02
        ;   XREF to: 00561d0b (CONDITIONAL_JUMP)  ; LAB_00561d0b
    MOV dword ptr [EDX + 0x24],0xbfc90fdb ; 00561d04
    FLD float ptr [EDX + 0x24]          ; 00561d0b
        ;   Label: LAB_00561d0b
    FCOMP double ptr [0x005eb118]       ; 00561d0e | DAT_005eb118
    FNSTSW AX                           ; 00561d14
    SAHF                                ; 00561d16
    JBE 0x00561d20                      ; 00561d17
        ;   XREF to: 00561d20 (CONDITIONAL_JUMP)  ; LAB_00561d20
    MOV dword ptr [EDX + 0x24],0x3fc90fdb ; 00561d19
    FLD float ptr [EDX + 0x2c]          ; 00561d20
        ;   Label: LAB_00561d20
    FCOMP double ptr [0x005eb120]       ; 00561d23 | DAT_005eb120
    FNSTSW AX                           ; 00561d29
    SAHF                                ; 00561d2b
    JNC 0x00561d35                      ; 00561d2c
        ;   XREF to: 00561d35 (CONDITIONAL_JUMP)  ; LAB_00561d35
    MOV dword ptr [EDX + 0x2c],0x3dcccccd ; 00561d2e
    FLD float ptr [EDX + 0x2c]          ; 00561d35
        ;   Label: LAB_00561d35
    FCOMP double ptr [0x005eb128]       ; 00561d38 | DAT_005eb128
    FNSTSW AX                           ; 00561d3e
    SAHF                                ; 00561d40
    JBE 0x00561d4a                      ; 00561d41
        ;   XREF to: 00561d4a (CONDITIONAL_JUMP)  ; LAB_00561d4a
    MOV dword ptr [EDX + 0x2c],0x461c4000 ; 00561d43
    FLD float ptr [EDX + 0x38]          ; 00561d4a
        ;   Label: LAB_00561d4a
    FCOMP double ptr [0x005eb130]       ; 00561d4d | DAT_005eb130
    FNSTSW AX                           ; 00561d53
    SAHF                                ; 00561d55
    JNC 0x00561d5f                      ; 00561d56
        ;   XREF to: 00561d5f (CONDITIONAL_JUMP)  ; LAB_00561d5f
    MOV dword ptr [EDX + 0x38],0x3c23d70a ; 00561d58
    FLD float ptr [EDX + 0x38]          ; 00561d5f
        ;   Label: LAB_00561d5f
    FCOMP double ptr [0x005eb138]       ; 00561d62 | DAT_005eb138
    FNSTSW AX                           ; 00561d68
    SAHF                                ; 00561d6a
    JA 0x00561d7f                       ; 00561d6b
        ;   XREF to: 00561d7f (CONDITIONAL_JUMP)  ; LAB_00561d7f
    RET                                 ; 00561d6d
    FLD float ptr [EDX + 0x28]          ; 00561d6e
        ;   Label: LAB_00561d6e
    FADD float ptr [0x005eb108]         ; 00561d71 | DAT_005eb108
    FSTP float ptr [EDX + 0x28]         ; 00561d77
    JMP 0x00561ce1                      ; 00561d7a
        ;   XREF to: 00561ce1 (UNCONDITIONAL_JUMP)  ; LAB_00561ce1
    MOV dword ptr [EDX + 0x38],0x42c80000 ; 00561d7f
        ;   Label: LAB_00561d7f
    RET                                 ; 00561d86

