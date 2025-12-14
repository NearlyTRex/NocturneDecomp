; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_tbplayer.cpp_FUN_005da510()
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005da510
        ;   Label: core_tbplayer.cpp_FUN_005da510
    MOV EAX,dword ptr [ESP + 0x8]       ; 005da514
    FLD float ptr [EAX + 0x4]           ; 005da518
    FSUBR float ptr [EDX + 0x243c]      ; 005da51b
    FST float ptr [EDX + 0x243c]        ; 005da521
    FLDZ                                ; 005da527
    FCOMPP                              ; 005da529
    FNSTSW AX                           ; 005da52b
    SAHF                                ; 005da52d
    JNC 0x005da261                      ; 005da52e
        ;   XREF to: 005da261 (CONDITIONAL_JUMP)  ; LAB_005da261
    RET                                 ; 005da534

