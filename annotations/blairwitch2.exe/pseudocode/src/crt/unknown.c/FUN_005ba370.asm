; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005ba370(char *param_1,int param_2)
;
;
; XREF[1]:
;   crt_time.c__strftime_FUN_005ba3a4 at 005ba59b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ba370
        ;   Label: crt_unknown.c_FUN_005ba370
    PUSH ESI                            ; 005ba371
    MOV ESI,dword ptr [ESP + 0xc]       ; 005ba372
    MOV EBX,dword ptr [ESP + 0x10]      ; 005ba376
    MOV ECX,0xa                         ; 005ba37a
    MOV EDX,EBX                         ; 005ba37f
    MOV EAX,EBX                         ; 005ba381
    SAR EDX,0x1f                        ; 005ba383
    IDIV ECX                            ; 005ba386
    MOV EDX,EBX                         ; 005ba388
    ADD EAX,0x30                        ; 005ba38a
    SAR EDX,0x1f                        ; 005ba38d
    MOV byte ptr [ESI],AL               ; 005ba390
    MOV EAX,EBX                         ; 005ba392
    IDIV ECX                            ; 005ba394
    MOV byte ptr [ESI + 0x2],0x0        ; 005ba396
    ADD EDX,0x30                        ; 005ba39a
    MOV byte ptr [ESI + 0x1],DL         ; 005ba39d
    POP ESI                             ; 005ba3a0
    POP EBX                             ; 005ba3a1
    RET                                 ; 005ba3a2

