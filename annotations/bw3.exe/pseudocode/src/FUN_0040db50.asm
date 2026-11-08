; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040db50(int param_1)
;
;
; XREF[3]:
;   FUN_0040d6f0 at 0040d730
;   FUN_0040d8a0 at 0040d94a
;   FUN_0040dbe0 at 0040dbec
;
; Referenced Globals:
;   undefined4 DAT_01c6a974
;   undefined4 DAT_01c6a978
;   undefined4 DAT_01c6a979
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040db50
        ;   Label: FUN_0040db50
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

