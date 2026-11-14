; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004855c0(CEdCheck *this_ptr)
;
; Parameters:
; CEdCheck *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00485580 at 00485586
;   shape_edittool.cpp_FUN_00485610 at 00485627
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004855c0
        ;   Label: shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004855c0
    MOV ECX,dword ptr [EDX + 0x14]      ; 004855c4
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004855c7
    SUB EAX,ECX                         ; 004855ca
    MOV EDX,EAX                         ; 004855cc
    SHL EAX,0x3                         ; 004855ce
    SUB EAX,EDX                         ; 004855d1
    MOV EDX,EAX                         ; 004855d3
    SAR EDX,0x1f                        ; 004855d5
    SHL EDX,0x3                         ; 004855d8
    SBB EAX,EDX                         ; 004855db
    SAR EAX,0x3                         ; 004855dd
    RET                                 ; 004855e0

