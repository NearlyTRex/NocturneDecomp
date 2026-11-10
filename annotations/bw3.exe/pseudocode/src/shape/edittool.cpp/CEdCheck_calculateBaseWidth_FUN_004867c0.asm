; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004867c0(CEdCheck *this_ptr)
;
; Parameters:
; CEdCheck *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00486780 at 00486786
;   shape_edittool.cpp_FUN_00486810 at 00486827
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004867c0
        ;   Label: shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004867c0
    MOV ECX,dword ptr [EDX + 0x14]      ; 004867c4
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004867c7
    SUB EAX,ECX                         ; 004867ca
    MOV EDX,EAX                         ; 004867cc
    SHL EAX,0x3                         ; 004867ce
    SUB EAX,EDX                         ; 004867d1
    MOV EDX,EAX                         ; 004867d3
    SAR EDX,0x1f                        ; 004867d5
    SHL EDX,0x3                         ; 004867d8
    SBB EAX,EDX                         ; 004867db
    SAR EAX,0x3                         ; 004867dd
    RET                                 ; 004867e0

