; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_004867f0(CEdCheck *this_ptr)
;
; Parameters:
; CEdCheck *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_FUN_0048666e at 00486706
;   shape_edittool.cpp_FUN_00486810 at 0048688b
;
; Called Functions:
;   shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00486780
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004867f0
        ;   Label: shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_004867f0
    PUSH EDX                            ; 004867f4
    CALL shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00486780 ; 004867f5
        ;   XREF to: 00486780 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00486780(CEdCheck * this_ptr)
    MOV EDX,EAX                         ; 004867fa
    SAR EDX,0x1f                        ; 004867fc
    ADD ESP,0x4                         ; 004867ff
    SUB EAX,EDX                         ; 00486802
    SAR EAX,0x1                         ; 00486804
    RET                                 ; 00486806

