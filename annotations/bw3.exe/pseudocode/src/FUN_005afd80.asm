; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_005afd80(undefined4 *param_1,undefined4 *param_2,uint param_3)
;
;
; XREF[2]:
;   FUN_005aded0 at 005adefd
;   FUN_005b1bd4 at 005b1ce5
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005afd80
        ;   Label: FUN_005afd80
    PUSH EDI                            ; 005afd81
    MOV ECX,dword ptr [ESP + 0x14]      ; 005afd82
    MOV ESI,dword ptr [ESP + 0x10]      ; 005afd86
    MOV EDI,dword ptr [ESP + 0xc]       ; 005afd8a
    PUSH ES                             ; 005afd8e
    MOV AX,DS                           ; 005afd8f
    MOV ES,AX                           ; 005afd91
    PUSH EDI                            ; 005afd93
    MOV EAX,ECX                         ; 005afd94
    SHR ECX,0x2                         ; 005afd96
    MOVSD.REP ES:EDI,ESI                ; 005afd99
    MOV CL,AL                           ; 005afd9b
    AND CL,0x3                          ; 005afd9d
    MOVSB.REP ES:EDI,ESI                ; 005afda0
    POP EDI                             ; 005afda2
    POP ES                              ; 005afda3
    MOV EAX,EDI                         ; 005afda4
    POP EDI                             ; 005afda6
    POP ESI                             ; 005afda7
    RET                                 ; 005afda8

