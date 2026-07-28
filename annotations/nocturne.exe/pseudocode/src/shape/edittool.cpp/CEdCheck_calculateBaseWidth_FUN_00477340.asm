; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_00477340(int param_1)
;
;
; XREF[2]:
;   shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00477300 at 00477306
;   shape_edittool.cpp_CEdCheck_render_FUN_00477390 at 004773a7
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00477340
        ;   Label: shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_00477340
    MOV ECX,dword ptr [EDX + 0x14]      ; 00477344
    MOV EAX,dword ptr [EDX + 0x1c]      ; 00477347
    SUB EAX,ECX                         ; 0047734a
    MOV EDX,EAX                         ; 0047734c
    SHL EAX,0x3                         ; 0047734e
    SUB EAX,EDX                         ; 00477351
    MOV EDX,EAX                         ; 00477353
    SAR EDX,0x1f                        ; 00477355
    SHL EDX,0x3                         ; 00477358
    SBB EAX,EDX                         ; 0047735b
    SAR EAX,0x3                         ; 0047735d
    RET                                 ; 00477360

