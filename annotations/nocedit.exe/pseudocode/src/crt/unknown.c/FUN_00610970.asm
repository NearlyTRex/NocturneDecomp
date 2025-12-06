; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_00610970()
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0060fe94 at 0060fec7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00610970
        ;   Label: crt_unknown.c_FUN_00610970
    CMP AX,0x61                         ; 00610974
    JC 0x00610983                       ; 00610978 | LAB_00610983
        ;   XREF to: 00610983 (CONDITIONAL_JUMP)
    CMP AX,0x7a                         ; 0061097a
    JA 0x00610983                       ; 0061097e | LAB_00610983
        ;   XREF to: 00610983 (CONDITIONAL_JUMP)
    SUB EAX,0x20                        ; 00610980
    RET                                 ; 00610983
        ;   Label: LAB_00610983

