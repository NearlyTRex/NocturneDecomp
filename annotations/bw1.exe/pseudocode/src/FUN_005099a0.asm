; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005099a0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e7976
;   undefined4 DAT_0061dca4
;
; Called Functions:
;   FUN_00408b40
;   FUN_004e5f40
;   FUN_005ad770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005099a0
        ;   Label: FUN_005099a0
    SUB ESP,0x38                        ; 005099a1
    MOV EBX,dword ptr [ESP + 0x40]      ; 005099a4
    PUSH dword ptr [ESP + 0x44]         ; 005099a8
    PUSH EBX                            ; 005099ac
    CALL FUN_005ad770                   ; 005099ad
        ;   XREF to: 005ad770 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad770()
    MOV EDX,dword ptr [EBX + 0x590]     ; 005099b2
    ADD ESP,0x8                         ; 005099b8
    TEST EDX,EDX                        ; 005099bb
    JLE 0x005099d8                      ; 005099bd
        ;   XREF to: 005099d8 (CONDITIONAL_JUMP)  ; LAB_005099d8
    FLD float ptr [EBX + 0x594]         ; 005099bf
    FSUB float ptr [ESP + 0x44]         ; 005099c5
    FST float ptr [EBX + 0x594]         ; 005099c9
    FLDZ                                ; 005099cf
    FCOMPP                              ; 005099d1
    FNSTSW AX                           ; 005099d3
    SAHF                                ; 005099d5
    JNC 0x005099dd                      ; 005099d6
        ;   XREF to: 005099dd (CONDITIONAL_JUMP)  ; LAB_005099dd
    ADD ESP,0x38                        ; 005099d8
        ;   Label: LAB_005099d8
    POP EBX                             ; 005099db
    RET                                 ; 005099dc
    PUSH EDI                            ; 005099dd
        ;   Label: LAB_005099dd
    PUSH ESI                            ; 005099de
    FLD float ptr [EBX + 0x598]         ; 005099df
    FLD ST0                             ; 005099e5
    FMUL double ptr [0x005e7976]        ; 005099e7 | DAT_005e7976
    LEA ESI,[ESP + 0x8]                 ; 005099ed
    LEA EDI,[ESP + 0x20]                ; 005099f1
    MOV ECX,dword ptr [EBX + 0x590]     ; 005099f5
    PUSH EBX                            ; 005099fb
    DEC ECX                             ; 005099fc
    MOV EAX,dword ptr [EBX + 0x154]     ; 005099fd
    MOV dword ptr [EBX + 0x590],ECX     ; 00509a03
    FSTP ST1                            ; 00509a09
    FST float ptr [EBX + 0x598]         ; 00509a0b
    FSTP float ptr [EBX + 0x594]        ; 00509a11
    CALL dword ptr [EAX + 0xe0]         ; 00509a17
    LEA ESI,[ESP + 0xc]                 ; 00509a1d
    ADD ESP,0x4                         ; 00509a21
    MOVSD ES:EDI,ESI                    ; 00509a24
    MOVSD ES:EDI,ESI                    ; 00509a25
    MOVSD ES:EDI,ESI                    ; 00509a26
    LEA ESI,[ESP + 0x20]                ; 00509a27
    PUSH ESI                            ; 00509a2b
    PUSH EBX                            ; 00509a2c
    LEA ESI,[ESP + 0x34]                ; 00509a2d
    LEA EDI,[ESP + 0x1c]                ; 00509a31
    CALL FUN_00408b40                   ; 00509a35
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x34]                ; 00509a3a
    ADD ESP,0x8                         ; 00509a3e
    MOVSD ES:EDI,ESI                    ; 00509a41
    MOVSD ES:EDI,ESI                    ; 00509a42
    MOVSD ES:EDI,ESI                    ; 00509a43
    MOV ESI,dword ptr [EBX + 0x58c]     ; 00509a44
    PUSH ESI                            ; 00509a4a
    PUSH 0x2c8af28                      ; 00509a4b
    LEA EAX,[ESP + 0x1c]                ; 00509a50
    PUSH EAX                            ; 00509a54
    MOV EDI,dword ptr [0x0061dca4]      ; 00509a55 | DAT_0061dca4
    PUSH EDI                            ; 00509a5b
    CALL FUN_004e5f40                   ; 00509a5c
        ;   XREF to: 004e5f40 (UNCONDITIONAL_CALL)  ; undefined FUN_004e5f40()
    ADD ESP,0x10                        ; 00509a61
    POP ESI                             ; 00509a64
    POP EDI                             ; 00509a65
    ADD ESP,0x38                        ; 00509a66
    POP EBX                             ; 00509a69
    RET                                 ; 00509a6a

