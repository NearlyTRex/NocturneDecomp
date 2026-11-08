; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053f060(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01cb3954
;   undefined4 DAT_01cb3958
;   undefined4 DAT_01cb395c
;   undefined4 DAT_01cb3988
;   undefined4 DAT_01cb3a90
;   undefined4 DAT_01cb5604
;   undefined4 DAT_01cb560c
;   undefined4 DAT_01cb5620
;
; Called Functions:
;   FUN_00408d70
;   FUN_00449280
;   FUN_0044d570
;   FUN_00530630
;   FUN_00589c80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053f060
        ;   Label: FUN_0053f060
    PUSH EBP                            ; 0053f061
    SUB ESP,0x30                        ; 0053f062
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0053f065
    CMP dword ptr [EBX + 0x6d8],0x0     ; 0053f069
    JNZ 0x0053f08f                      ; 0053f070
        ;   XREF to: 0053f08f (CONDITIONAL_JUMP)  ; LAB_0053f08f
    PUSH dword ptr [ESP + 0x40]         ; 0053f072
        ;   Label: LAB_0053f072
    PUSH EBX                            ; 0053f076
    MOV dword ptr [EBX + 0x6d8],0x0     ; 0053f077
    CALL FUN_00589c80                   ; 0053f081
        ;   XREF to: 00589c80 (UNCONDITIONAL_CALL)  ; undefined FUN_00589c80()
    ADD ESP,0x8                         ; 0053f086
    ADD ESP,0x30                        ; 0053f089
    POP EBP                             ; 0053f08c
    POP EBX                             ; 0053f08d
    RET                                 ; 0053f08e
    PUSH EDI                            ; 0053f08f
        ;   Label: LAB_0053f08f
    PUSH ESI                            ; 0053f090
    MOV ECX,0x1                         ; 0053f091
    LEA ESI,[ESP + 0x20]                ; 0053f096
    PUSH EBX                            ; 0053f09a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0053f09b
    LEA EDI,[ESP + 0xc]                 ; 0053f0a1
    MOV dword ptr [0x01cb5604],ECX      ; 0053f0a5 | DAT_01cb5604
    CALL dword ptr [EAX + 0xe8]         ; 0053f0ab
    ADD ESP,0x4                         ; 0053f0b1
    LEA EAX,[ESP + 0x8]                 ; 0053f0b4
    LEA ESI,[ESP + 0x20]                ; 0053f0b8
    PUSH EAX                            ; 0053f0bc
    MOVSD ES:EDI,ESI                    ; 0053f0bd
    MOVSD ES:EDI,ESI                    ; 0053f0be
    MOVSD ES:EDI,ESI                    ; 0053f0bf
    PUSH EBX                            ; 0053f0c0
    LEA ESI,[ESP + 0x34]                ; 0053f0c1
    LEA EDI,[ESP + 0x1c]                ; 0053f0c5
    CALL FUN_00408d70                   ; 0053f0c9
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[ESP + 0x34]                ; 0053f0ce
    ADD ESP,0x8                         ; 0053f0d2
    MOVSD ES:EDI,ESI                    ; 0053f0d5
    MOVSD ES:EDI,ESI                    ; 0053f0d6
    MOVSD ES:EDI,ESI                    ; 0053f0d7
    XOR ESI,ESI                         ; 0053f0d8
    LEA EAX,[ESP + 0x14]                ; 0053f0da
    MOV dword ptr [0x01cb560c],ESI      ; 0053f0de | DAT_01cb560c
    CMP EAX,0x1cb3954                   ; 0053f0e4
    JZ 0x0053f106                       ; 0053f0e9
        ;   XREF to: 0053f106 (CONDITIONAL_JUMP)  ; LAB_0053f106
    MOV EAX,dword ptr [ESP + 0x14]      ; 0053f0eb
    MOV [0x01cb3954],EAX                ; 0053f0ef | DAT_01cb3954
    MOV EAX,dword ptr [ESP + 0x18]      ; 0053f0f4
    MOV [0x01cb3958],EAX                ; 0053f0f8 | DAT_01cb3958
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0053f0fd
    MOV [0x01cb395c],EAX                ; 0053f101 | DAT_01cb395c
    LEA EAX,[EBX + 0x30]                ; 0053f106
        ;   Label: LAB_0053f106
    PUSH EAX                            ; 0053f109
    PUSH 0x1cb3960                      ; 0053f10a
    CALL FUN_00449280                   ; 0053f10f
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    ADD ESP,0x8                         ; 0053f114
    MOV EDI,0x42e00000                  ; 0053f117
    PUSH 0x3f800000                     ; 0053f11c
    FLD float ptr [EBX + 0x6dc]         ; 0053f121
    PUSH 0x1cb3950                      ; 0053f127
    FSTP float ptr [0x01cb3a90]         ; 0053f12c | DAT_01cb3a90
    MOV dword ptr [0x01cb3988],EDI      ; 0053f132 | DAT_01cb3988
    CALL FUN_0044d570                   ; 0053f138
        ;   XREF to: 0044d570 (UNCONDITIONAL_CALL)  ; undefined FUN_0044d570()
    ADD ESP,0x8                         ; 0053f13d
    PUSH 0x1cb3950                      ; 0053f140
    MOV EAX,[0x0061b5a8]                ; 0053f145 | DAT_0061b5a8
    XOR EBP,EBP                         ; 0053f14a
    PUSH EAX                            ; 0053f14c
    MOV dword ptr [0x01cb5620],EBP      ; 0053f14d | DAT_01cb5620
    CALL FUN_00530630                   ; 0053f153
        ;   XREF to: 00530630 (UNCONDITIONAL_CALL)  ; undefined FUN_00530630()
    ADD ESP,0x8                         ; 0053f158
    POP ESI                             ; 0053f15b
    POP EDI                             ; 0053f15c
    JMP 0x0053f072                      ; 0053f15d
        ;   XREF to: 0053f072 (UNCONDITIONAL_JUMP)  ; LAB_0053f072

