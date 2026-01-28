; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0(CEdCheck *this_ptr)
;
; Parameters:
; CEdCheck *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70 at 004a6b76
;   shape_edittool.cpp_CEdCheck_render_FUN_004a6c00 at 004a6c17
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a6bb0
        ;   Label: shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0
    MOV ECX,dword ptr [EDX + 0x14]      ; 004a6bb4
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004a6bb7
    SUB EAX,ECX                         ; 004a6bba
    MOV EDX,EAX                         ; 004a6bbc
    SHL EAX,0x3                         ; 004a6bbe
    SUB EAX,EDX                         ; 004a6bc1
    MOV EDX,EAX                         ; 004a6bc3
    SAR EDX,0x1f                        ; 004a6bc5
    SHL EDX,0x3                         ; 004a6bc8
    SBB EAX,EDX                         ; 004a6bcb
    SAR EAX,0x3                         ; 004a6bcd
    RET                                 ; 004a6bd0

