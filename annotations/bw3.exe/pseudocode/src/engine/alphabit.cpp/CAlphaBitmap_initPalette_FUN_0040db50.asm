; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040db50(CAlphaBitmap *this_ptr)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 at 0040d730
;   engine_alphabit.cpp_FUN_0040d8a0 at 0040d94a
;   engine_alphabit.cpp_FUN_0040dbe0 at 0040dbec
;
; Referenced Globals:
;   undefined4 DAT_01c6a974
;   undefined4 DAT_01c6a978
;   undefined4 DAT_01c6a979
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040db50
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040db50
    PUSH EDI                            ; 0040db51
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040db52
    MOV ECX,0x400                       ; 0040db56
    MOV EDI,0x1c6a974                   ; 0040db5b
    MOV ESI,dword ptr [ESI + 0x8]       ; 0040db60
    PUSH EDI                            ; 0040db63
    MOV EAX,ECX                         ; 0040db64
    SHR ECX,0x2                         ; 0040db66
    MOVSD.REP ES:EDI,ESI                ; 0040db69 | DAT_01c6a974 | DAT_01c6a978
    MOV CL,AL                           ; 0040db6b
    AND CL,0x3                          ; 0040db6d
    MOVSB.REP ES:EDI,ESI                ; 0040db70 | DAT_01c6a978 | DAT_01c6a979
    POP EDI                             ; 0040db72
    POP EDI                             ; 0040db73
    POP ESI                             ; 0040db74
    RET                                 ; 0040db75

