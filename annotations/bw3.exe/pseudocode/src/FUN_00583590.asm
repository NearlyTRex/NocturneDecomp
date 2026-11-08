; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00583590(undefined4 *param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_005833e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00583590
        ;   Label: FUN_00583590
    PUSH ESI                            ; 00583591
    PUSH EDI                            ; 00583592
    SUB ESP,0x30                        ; 00583593
    MOV EBX,dword ptr [ESP + 0x40]      ; 00583596
    MOV EDX,dword ptr [ESP + 0x44]      ; 0058359a
    PUSH EDX                            ; 0058359e
    PUSH EBX                            ; 0058359f
    LEA ESI,[ESP + 0x8]                 ; 005835a0
    MOV EDI,EBX                         ; 005835a4
    CALL FUN_005833e0                   ; 005835a6
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005833e0()
    MOV ECX,0xc                         ; 005835ab
    LEA ESI,[ESP + 0x8]                 ; 005835b0
    ADD ESP,0x8                         ; 005835b4
    MOV EAX,EBX                         ; 005835b7
    MOVSD.REP ES:EDI,ESI                ; 005835b9
    ADD ESP,0x30                        ; 005835bb
    POP EDI                             ; 005835be
    POP ESI                             ; 005835bf
    POP EBX                             ; 005835c0
    RET                                 ; 005835c1

