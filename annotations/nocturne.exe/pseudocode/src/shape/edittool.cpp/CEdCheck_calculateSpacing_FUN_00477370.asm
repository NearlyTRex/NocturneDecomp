; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_00477370(CEdCheck *this_ptr)
;
; Parameters:
; CEdCheck *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_CEdCheck_render_FUN_00477390 at 0047740b
;   shape_edittool.cpp_CEdCheck_setupWithText_FUN_004771f0 at 00477286
;
; Called Functions:
;   shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00477300
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00477370
        ;   Label: shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_00477370
    PUSH EDX                            ; 00477374
    CALL shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00477300 ; 00477375
        ;   XREF to: 00477300 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00477300(CEdCheck * this_ptr)
    MOV EDX,EAX                         ; 0047737a
    SAR EDX,0x1f                        ; 0047737c
    ADD ESP,0x4                         ; 0047737f
    SUB EAX,EDX                         ; 00477382
    SAR EAX,0x1                         ; 00477384
    RET                                 ; 00477386

