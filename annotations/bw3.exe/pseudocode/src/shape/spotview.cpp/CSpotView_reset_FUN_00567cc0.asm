; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_spotview_cpp_CSpotView_reset_FUN_00567cc0(CSpotView *this_ptr,uint control_flags)
;
; Parameters:
; CSpotView *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   control_flags
;
; XREF[2]:
;   shape_spotview.cpp_CSpotView_ctor_FUN_00567c60 at 00567cb2
;   shape_spotview.cpp_FUN_00567d0e at 00567fd7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00567cc0
        ;   Label: shape_spotview.cpp_CSpotView_reset_FUN_00567cc0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00567cc4
    TEST DL,0x1                         ; 00567cc8
    JNZ 0x00567cf9                      ; 00567ccb
        ;   XREF to: 00567cf9 (CONDITIONAL_JUMP)  ; LAB_00567cf9
    TEST DL,0x2                         ; 00567ccd
        ;   Label: LAB_00567ccd
    JZ 0x00567cd8                       ; 00567cd0
        ;   XREF to: 00567cd8 (CONDITIONAL_JUMP)  ; LAB_00567cd8
    MOV ECX,dword ptr [EAX + 0xc]       ; 00567cd2
    MOV dword ptr [EAX + 0x28],ECX      ; 00567cd5
    TEST DL,0x8                         ; 00567cd8
        ;   Label: LAB_00567cd8
    JZ 0x00567ce9                       ; 00567cdb
        ;   XREF to: 00567ce9 (CONDITIONAL_JUMP)  ; LAB_00567ce9
    FLD float ptr [EAX + 0x10]          ; 00567cdd
    MOV ECX,dword ptr [EAX + 0x14]      ; 00567ce0
    MOV dword ptr [EAX + 0x34],ECX      ; 00567ce3
    FSTP float ptr [EAX + 0x30]         ; 00567ce6
    TEST DL,0x4                         ; 00567ce9
        ;   Label: LAB_00567ce9
    JZ 0x00567cf3                       ; 00567cec
        ;   XREF to: 00567cf3 (CONDITIONAL_JUMP)  ; LAB_00567cf3
    MOV ECX,dword ptr [EAX]             ; 00567cee
    MOV dword ptr [EAX + 0x2c],ECX      ; 00567cf0
    TEST DL,0x10                        ; 00567cf3
        ;   Label: LAB_00567cf3
    JNZ 0x00567d01                      ; 00567cf6
        ;   XREF to: 00567d01 (CONDITIONAL_JUMP)  ; LAB_00567d01
    RET                                 ; 00567cf8
    MOV ECX,dword ptr [EAX + 0x8]       ; 00567cf9
        ;   Label: LAB_00567cf9
    MOV dword ptr [EAX + 0x24],ECX      ; 00567cfc
    JMP 0x00567ccd                      ; 00567cff
        ;   XREF to: 00567ccd (UNCONDITIONAL_JUMP)  ; LAB_00567ccd
    MOV EDX,dword ptr [EAX + 0x4]       ; 00567d01
        ;   Label: LAB_00567d01
    MOV dword ptr [EAX + 0x38],EDX      ; 00567d04
    RET                                 ; 00567d07

