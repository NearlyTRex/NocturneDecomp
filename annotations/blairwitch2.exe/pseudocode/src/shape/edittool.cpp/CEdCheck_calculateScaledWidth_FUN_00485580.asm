; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_00485580(CEdCheck *this_ptr)
;
; Parameters:
; CEdCheck *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   shape_edittool.cpp_FUN_00485470 at 004854f8
;   shape_edittool.cpp_FUN_004855f0 at 004855f5
;   shape_edittool.cpp_FUN_00485610 at 0048563f
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;
; Called Functions:
;   shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004855c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485580
        ;   Label: shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00485580
    MOV EDX,dword ptr [ESP + 0x8]       ; 00485581
    PUSH EDX                            ; 00485585
    CALL shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004855c0 ; 00485586
        ;   XREF to: 004855c0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004855c0(CEdCheck * this_ptr)
    IMUL EAX,dword ptr [0x006141b8]     ; 0048558b | DAT_006141b8
    LEA EDX,[EAX*0x4 + 0x0]             ; 00485592
    SUB EDX,EAX                         ; 00485599
    MOV EAX,EDX                         ; 0048559b
    SAR EDX,0x1f                        ; 0048559d
    SHL EDX,0x2                         ; 004855a0
    SBB EAX,EDX                         ; 004855a3
    SAR EAX,0x2                         ; 004855a5
    MOV EDX,EAX                         ; 004855a8
    MOV EBX,dword ptr [0x006141bc]      ; 004855aa | DAT_006141bc
    SAR EDX,0x1f                        ; 004855b0
    ADD ESP,0x4                         ; 004855b3
    IDIV EBX                            ; 004855b6
    POP EBX                             ; 004855b8
    RET                                 ; 004855b9

