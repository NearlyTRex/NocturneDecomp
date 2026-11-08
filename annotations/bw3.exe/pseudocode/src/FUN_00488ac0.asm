; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00488ac0(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_004087f0
;   FUN_00408830
;   FUN_0041daf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488ac0
        ;   Label: FUN_00488ac0
    SUB ESP,0x30                        ; 00488ac1
    MOV EBX,dword ptr [ESP + 0x38]      ; 00488ac4
    CMP dword ptr [ESP + 0x3c],0x0      ; 00488ac8
    JNZ 0x00488ad4                      ; 00488acd
        ;   XREF to: 00488ad4 (CONDITIONAL_JUMP)  ; LAB_00488ad4
    ADD ESP,0x30                        ; 00488acf
    POP EBX                             ; 00488ad2
    RET                                 ; 00488ad3
    PUSH EDI                            ; 00488ad4
        ;   Label: LAB_00488ad4
    PUSH ESI                            ; 00488ad5
    PUSH EBX                            ; 00488ad6
    CALL FUN_004087f0                   ; 00488ad7
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 00488adc
    PUSH 0x0                            ; 00488adf
    MOV EAX,dword ptr [EBX + 0x154]     ; 00488ae1
    PUSH EBX                            ; 00488ae7
    LEA ESI,[ESP + 0x10]                ; 00488ae8
    LEA EDI,[ESP + 0x28]                ; 00488aec
    CALL dword ptr [EAX + 0x1c]         ; 00488af0
    MOV ECX,0x6                         ; 00488af3
    ADD ESP,0x4                         ; 00488af8
    LEA EAX,[ESP + 0x24]                ; 00488afb
    LEA ESI,[ESP + 0xc]                 ; 00488aff
    PUSH EAX                            ; 00488b03
    MOVSD.REP ES:EDI,ESI                ; 00488b04
    CALL FUN_0041daf0                   ; 00488b06
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    ADD ESP,0x8                         ; 00488b0b
    PUSH EBX                            ; 00488b0e
    MOV dword ptr [EBX + 0x4b0],EAX     ; 00488b0f
    CALL FUN_00408830                   ; 00488b15
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 00488b1a
    POP ESI                             ; 00488b1d
    POP EDI                             ; 00488b1e
    ADD ESP,0x30                        ; 00488b1f
    POP EBX                             ; 00488b22
    RET                                 ; 00488b23

