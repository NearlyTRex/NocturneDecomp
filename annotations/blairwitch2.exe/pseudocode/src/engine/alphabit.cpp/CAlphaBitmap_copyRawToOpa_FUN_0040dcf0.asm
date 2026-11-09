; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_alphabit_cpp_CAlphaBitmap_copyRawToOpa_FUN_0040dcf0(CAlphaBitmap *this_ptr)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040dcf0
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_copyRawToOpa_FUN_0040dcf0
    PUSH EDI                            ; 0040dcf1
    MOV EDI,dword ptr [ESP + 0xc]       ; 0040dcf2
    MOV ECX,dword ptr [EDI + 0xc]       ; 0040dcf6
    IMUL ECX,dword ptr [EDI + 0x10]     ; 0040dcf9
    MOV ESI,dword ptr [EDI]             ; 0040dcfd
    MOV EDI,dword ptr [EDI + 0x4]       ; 0040dcff
    PUSH EDI                            ; 0040dd02
    MOV EAX,ECX                         ; 0040dd03
    SHR ECX,0x2                         ; 0040dd05
    MOVSD.REP ES:EDI,ESI                ; 0040dd08
    MOV CL,AL                           ; 0040dd0a
    AND CL,0x3                          ; 0040dd0c
    MOVSB.REP ES:EDI,ESI                ; 0040dd0f
    POP EDI                             ; 0040dd11
    POP EDI                             ; 0040dd12
    POP ESI                             ; 0040dd13
    RET                                 ; 0040dd14

