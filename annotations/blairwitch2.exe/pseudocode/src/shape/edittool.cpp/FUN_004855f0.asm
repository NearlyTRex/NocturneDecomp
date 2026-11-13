; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int shape_edittool_cpp_FUN_004855f0(CEdCheck *param_1)
;
;
; XREF[2]:
;   shape_edittool.cpp_FUN_00485470 at 00485506
;   shape_edittool.cpp_FUN_00485610 at 0048568b
;
; Called Functions:
;   shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00485580
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004855f0
        ;   Label: shape_edittool.cpp_FUN_004855f0
    PUSH EDX                            ; 004855f4
    CALL shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00485580 ; 004855f5
        ;   XREF to: 00485580 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00485580(CEdCheck * this_ptr)
    MOV EDX,EAX                         ; 004855fa
    SAR EDX,0x1f                        ; 004855fc
    ADD ESP,0x4                         ; 004855ff
    SUB EAX,EDX                         ; 00485602
    SAR EAX,0x1                         ; 00485604
    RET                                 ; 00485606

