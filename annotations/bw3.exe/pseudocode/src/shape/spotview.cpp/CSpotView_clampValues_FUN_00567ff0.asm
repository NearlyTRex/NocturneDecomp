; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_spotview_cpp_CSpotView_clampValues_FUN_00567ff0(CSpotView *this_ptr)
;
; Parameters:
; CSpotView *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_spotview.cpp_FUN_00567d10 at 00567fa2
;
; Referenced Globals:
;   undefined4 DAT_005d5c26
;   undefined4 DAT_005d5c2a
;   undefined4 DAT_005d5c2e
;   undefined4 DAT_005d5c36
;   undefined4 DAT_005d5c3e
;   undefined4 DAT_005d5c46
;   undefined4 DAT_005d5c4e
;   undefined4 DAT_005d5c56
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00567ff0
        ;   Label: shape_spotview.cpp_CSpotView_clampValues_FUN_00567ff0
    CMP dword ptr [EDX + 0x28],0x40490fdb ; 00567ff4
    JL 0x0056808e                       ; 00567ffb
        ;   XREF to: 0056808e (CONDITIONAL_JUMP)  ; LAB_0056808e
    CMP dword ptr [EDX + 0x28],0x40490fdb ; 00568001
        ;   Label: LAB_00568001
    JLE 0x00568016                      ; 00568008
        ;   XREF to: 00568016 (CONDITIONAL_JUMP)  ; LAB_00568016
    FLD float ptr [EDX + 0x28]          ; 0056800a
    FADD float ptr [0x005d5c2a]         ; 0056800d | DAT_005d5c2a
    FSTP float ptr [EDX + 0x28]         ; 00568013
    FLD float ptr [EDX + 0x24]          ; 00568016
        ;   Label: LAB_00568016
    FCOMP double ptr [0x005d5c2e]       ; 00568019 | DAT_005d5c2e
    FNSTSW AX                           ; 0056801f
    SAHF                                ; 00568021
    JNC 0x0056802b                      ; 00568022
        ;   XREF to: 0056802b (CONDITIONAL_JUMP)  ; LAB_0056802b
    MOV dword ptr [EDX + 0x24],0xbfc90fdb ; 00568024
    FLD float ptr [EDX + 0x24]          ; 0056802b
        ;   Label: LAB_0056802b
    FCOMP double ptr [0x005d5c36]       ; 0056802e | DAT_005d5c36
    FNSTSW AX                           ; 00568034
    SAHF                                ; 00568036
    JBE 0x00568040                      ; 00568037
        ;   XREF to: 00568040 (CONDITIONAL_JUMP)  ; LAB_00568040
    MOV dword ptr [EDX + 0x24],0x3fc90fdb ; 00568039
    FLD float ptr [EDX + 0x2c]          ; 00568040
        ;   Label: LAB_00568040
    FCOMP double ptr [0x005d5c3e]       ; 00568043 | DAT_005d5c3e
    FNSTSW AX                           ; 00568049
    SAHF                                ; 0056804b
    JNC 0x00568055                      ; 0056804c
        ;   XREF to: 00568055 (CONDITIONAL_JUMP)  ; LAB_00568055
    MOV dword ptr [EDX + 0x2c],0x3dcccccd ; 0056804e
    FLD float ptr [EDX + 0x2c]          ; 00568055
        ;   Label: LAB_00568055
    FCOMP double ptr [0x005d5c46]       ; 00568058 | DAT_005d5c46
    FNSTSW AX                           ; 0056805e
    SAHF                                ; 00568060
    JBE 0x0056806a                      ; 00568061
        ;   XREF to: 0056806a (CONDITIONAL_JUMP)  ; LAB_0056806a
    MOV dword ptr [EDX + 0x2c],0x461c4000 ; 00568063
    FLD float ptr [EDX + 0x38]          ; 0056806a
        ;   Label: LAB_0056806a
    FCOMP double ptr [0x005d5c4e]       ; 0056806d | DAT_005d5c4e
    FNSTSW AX                           ; 00568073
    SAHF                                ; 00568075
    JNC 0x0056807f                      ; 00568076
        ;   XREF to: 0056807f (CONDITIONAL_JUMP)  ; LAB_0056807f
    MOV dword ptr [EDX + 0x38],0x3c23d70a ; 00568078
    FLD float ptr [EDX + 0x38]          ; 0056807f
        ;   Label: LAB_0056807f
    FCOMP double ptr [0x005d5c56]       ; 00568082 | DAT_005d5c56
    FNSTSW AX                           ; 00568088
    SAHF                                ; 0056808a
    JA 0x0056809f                       ; 0056808b
        ;   XREF to: 0056809f (CONDITIONAL_JUMP)  ; LAB_0056809f
    RET                                 ; 0056808d
    FLD float ptr [EDX + 0x28]          ; 0056808e
        ;   Label: LAB_0056808e
    FADD float ptr [0x005d5c26]         ; 00568091 | DAT_005d5c26
    FSTP float ptr [EDX + 0x28]         ; 00568097
    JMP 0x00568001                      ; 0056809a
        ;   XREF to: 00568001 (UNCONDITIONAL_JUMP)  ; LAB_00568001
    MOV dword ptr [EDX + 0x38],0x42c80000 ; 0056809f
        ;   Label: LAB_0056809f
    RET                                 ; 005680a6

