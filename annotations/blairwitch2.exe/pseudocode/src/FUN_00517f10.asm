; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00517f10(int *param_1)
;
;
; Called Functions:
;   FUN_00516250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517f10
        ;   Label: FUN_00517f10
    PUSH EDI                            ; 00517f11
    PUSH EBP                            ; 00517f12
    MOV EBP,dword ptr [ESP + 0x10]      ; 00517f13
    MOV EAX,dword ptr [EBP]             ; 00517f17
    LEA EDI,[EAX*0x8 + 0x0]             ; 00517f1a
    ADD EDI,EAX                         ; 00517f21
    XOR EBX,EBX                         ; 00517f23
    SHL EDI,0x2                         ; 00517f25
    TEST EAX,EAX                        ; 00517f28
    JLE 0x00517f4b                      ; 00517f2a
        ;   XREF to: 00517f4b (CONDITIONAL_JUMP)  ; LAB_00517f4b
    PUSH ESI                            ; 00517f2c
    XOR ESI,ESI                         ; 00517f2d
    MOV EAX,dword ptr [EBP + 0x4]       ; 00517f2f
        ;   Label: LAB_00517f2f
    ADD EAX,ESI                         ; 00517f32
    PUSH EAX                            ; 00517f34
    INC EBX                             ; 00517f35
    CALL FUN_00516250                   ; 00517f36
        ;   XREF to: 00516250 (UNCONDITIONAL_CALL)  ; undefined FUN_00516250()
    ADD ESI,0x24                        ; 00517f3b
    ADD ESP,0x4                         ; 00517f3e
    MOV ECX,dword ptr [EBP]             ; 00517f41
    ADD EDI,EAX                         ; 00517f44
    CMP EBX,ECX                         ; 00517f46
    JL 0x00517f2f                       ; 00517f48
        ;   XREF to: 00517f2f (CONDITIONAL_JUMP)  ; LAB_00517f2f
    POP ESI                             ; 00517f4a
    MOV EAX,EDI                         ; 00517f4b
        ;   Label: LAB_00517f4b
    POP EBP                             ; 00517f4d
    POP EDI                             ; 00517f4e
    POP EBX                             ; 00517f4f
    RET                                 ; 00517f50

