; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040dca0(int param_1)
;
;
; XREF[2]:
;   FUN_0040d900 at 0040d940
;   FUN_0040dab0 at 0040dad3
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35214
;   undefined4 DAT_01c35218
;   undefined4 DAT_01c35219
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040dca0
        ;   Label: FUN_0040dca0
    MOV ESI,dword ptr [ESP + 0x8]       ; 0040dca1
    CMP dword ptr [0x006141c0],0x10     ; 0040dca5 | DAT_006141c0
    JNZ 0x0040dccf                      ; 0040dcac
        ;   XREF to: 0040dccf (CONDITIONAL_JUMP)  ; LAB_0040dccf
    XOR EDX,EDX                         ; 0040dcae
    XOR EAX,EAX                         ; 0040dcb0
    MOV ECX,dword ptr [ESI + 0x8]       ; 0040dcb2
        ;   Label: LAB_0040dcb2
    ADD EAX,0x2                         ; 0040dcb5
    MOV CX,word ptr [ECX + EDX*0x1]     ; 0040dcb8
    ADD EDX,0x4                         ; 0040dcbc
    MOV word ptr [EAX + 0x1c35612],CX   ; 0040dcbf
    CMP EAX,0x200                       ; 0040dcc6
    JNZ 0x0040dcb2                      ; 0040dccb
        ;   XREF to: 0040dcb2 (CONDITIONAL_JUMP)  ; LAB_0040dcb2
    POP ESI                             ; 0040dccd
    RET                                 ; 0040dcce
    PUSH EDI                            ; 0040dccf
        ;   Label: LAB_0040dccf
    MOV ECX,0x400                       ; 0040dcd0
    MOV EDI,0x1c35214                   ; 0040dcd5
    MOV ESI,dword ptr [ESI + 0x8]       ; 0040dcda
    PUSH EDI                            ; 0040dcdd
    MOV EAX,ECX                         ; 0040dcde
    SHR ECX,0x2                         ; 0040dce0
    MOVSD.REP ES:EDI,ESI                ; 0040dce3 | DAT_01c35214 | DAT_01c35218
    MOV CL,AL                           ; 0040dce5
    AND CL,0x3                          ; 0040dce7
    MOVSB.REP ES:EDI,ESI                ; 0040dcea | DAT_01c35218 | DAT_01c35219
    POP EDI                             ; 0040dcec
    POP EDI                             ; 0040dced
    POP ESI                             ; 0040dcee
    RET                                 ; 0040dcef

