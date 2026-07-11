; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004cca60(uint param_1)
;
;
; XREF[3]:
;   FUN_004c0b40 at 004c0c0c
;   FUN_004c59e0 at 004c5adc
;   FUN_004cd380 at 004cd4dc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cca60
        ;   Label: FUN_004cca60
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cca61
    MOV EAX,EBX                         ; 004cca65
    SAR EAX,0x8                         ; 004cca67
    AND EAX,0xff                        ; 004cca6a
    MOV ECX,dword ptr [EAX*0x4 + 0x1cc4910] ; 004cca6f
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc4914] ; 004cca76
    AND EBX,0xff                        ; 004cca7d
    SUB EDX,ECX                         ; 004cca83
    IMUL EDX,EBX                        ; 004cca85
    MOV EAX,EDX                         ; 004cca88
    SAR EDX,0x1f                        ; 004cca8a
    SHL EDX,0x8                         ; 004cca8d
    SBB EAX,EDX                         ; 004cca90
    SAR EAX,0x8                         ; 004cca92
    ADD EAX,ECX                         ; 004cca95
    POP EBX                             ; 004cca97
    RET                                 ; 004cca98

