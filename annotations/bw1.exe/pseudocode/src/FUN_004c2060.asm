; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c2060(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[6]:
;   FUN_00480480 at 0048054b
;   FUN_004c20e0 at 004c2132
;   FUN_004c2150 at 004c217f
;   FUN_004c2250 at 004c2285
;   FUN_004c2350 at 004c238f
;   FUN_004c2460 at 004c24a4
;
; Called Functions:
;   FUN_004c1dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c2060
        ;   Label: FUN_004c2060
    PUSH ESI                            ; 004c2061
    PUSH EDI                            ; 004c2062
    PUSH EBP                            ; 004c2063
    MOV EDX,dword ptr [ESP + 0x24]      ; 004c2064
    PUSH EDX                            ; 004c2068
    MOV ECX,dword ptr [ESP + 0x24]      ; 004c2069
    PUSH ECX                            ; 004c206d
    MOV EBX,dword ptr [ESP + 0x24]      ; 004c206e
    PUSH EBX                            ; 004c2072
    MOV ESI,dword ptr [ESP + 0x24]      ; 004c2073
    PUSH ESI                            ; 004c2077
    MOV EDI,dword ptr [ESP + 0x38]      ; 004c2078
    PUSH EDI                            ; 004c207c
    MOV EBP,dword ptr [ESP + 0x28]      ; 004c207d
    PUSH EBP                            ; 004c2081
    CALL FUN_004c1dd0                   ; 004c2082
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    ADD ESP,0x18                        ; 004c2087
    POP EBP                             ; 004c208a
    POP EDI                             ; 004c208b
    POP ESI                             ; 004c208c
    POP EBX                             ; 004c208d
    RET                                 ; 004c208e

