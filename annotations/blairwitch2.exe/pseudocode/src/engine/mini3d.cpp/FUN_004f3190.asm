; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f3190(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d09918
;   undefined4 DAT_01d0991c
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004f3190
        ;   Label: FUN_004f3190
    PUSH EDI                            ; 004f3191
    MOV EDX,dword ptr [0x01d0991c]      ; 004f3192 | DAT_01d0991c
    INC EDX                             ; 004f3198
    MOV dword ptr [0x01d0991c],EDX      ; 004f3199 | DAT_01d0991c
    CMP EDX,0x9                         ; 004f319f
    JG 0x004f31cf                       ; 004f31a2
        ;   XREF to: 004f31cf (CONDITIONAL_JUMP)  ; LAB_004f31cf
    MOV EAX,[0x01d0991c]                ; 004f31a4 | DAT_01d0991c
        ;   Label: LAB_004f31a4
    SHL EAX,0x2                         ; 004f31a9
    MOV EDX,EAX                         ; 004f31ac
    SHL EAX,0x4                         ; 004f31ae
    SUB EAX,EDX                         ; 004f31b1
    MOV ECX,0xf                         ; 004f31b3
    ADD EAX,0x1d09920                   ; 004f31b8
    MOV ESI,dword ptr [0x01d09918]      ; 004f31bd | DAT_01d09918
    MOV EDI,EAX                         ; 004f31c3
    MOV [0x01d09918],EAX                ; 004f31c5 | DAT_01d09918
    MOVSD.REP ES:EDI,ESI                ; 004f31ca
    POP EDI                             ; 004f31cc
    POP ESI                             ; 004f31cd
    RET                                 ; 004f31ce
    PUSH EBX                            ; 004f31cf
        ;   Label: LAB_004f31cf
    MOV EBX,0x5ddb62                    ; 004f31d0
    MOV ESI,0x4a7                       ; 004f31d5
    PUSH 0x5ddb77                       ; 004f31da
    MOV dword ptr [0x01d046a0],EBX      ; 004f31df | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004f31e5 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004f31eb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004f31f0
    POP EBX                             ; 004f31f3
    JMP 0x004f31a4                      ; 004f31f4
        ;   XREF to: 004f31a4 (UNCONDITIONAL_JUMP)  ; LAB_004f31a4

