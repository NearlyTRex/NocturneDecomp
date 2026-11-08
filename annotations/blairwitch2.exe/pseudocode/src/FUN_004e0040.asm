; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e0040(int param_1)
;
;
; Called Functions:
;   FUN_004089d0
;   FUN_00408a10
;   FUN_0041a840
;   FUN_0044fcc0
;   FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0040
        ;   Label: FUN_004e0040
    SUB ESP,0x30                        ; 004e0041
    MOV EBX,dword ptr [ESP + 0x38]      ; 004e0044
    LEA EAX,[EBX + 0x2b4]               ; 004e0048
    PUSH EAX                            ; 004e004e
    CALL FUN_0044fd20                   ; 004e004f
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    MOV EDX,dword ptr [EAX + 0x110]     ; 004e0054
    ADD ESP,0x4                         ; 004e005a
    CMP EDX,0x1                         ; 004e005d
    JGE 0x004e0069                      ; 004e0060
        ;   XREF to: 004e0069 (CONDITIONAL_JUMP)  ; LAB_004e0069
    XOR EAX,EAX                         ; 004e0062
    ADD ESP,0x30                        ; 004e0064
    POP EBX                             ; 004e0067
    RET                                 ; 004e0068
    PUSH EDI                            ; 004e0069
        ;   Label: LAB_004e0069
    PUSH ESI                            ; 004e006a
    PUSH EBX                            ; 004e006b
    CALL FUN_004089d0                   ; 004e006c
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004089d0()
    ADD ESP,0x4                         ; 004e0071
    PUSH 0x0                            ; 004e0074
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004e0076
    PUSH EBX                            ; 004e007c
    LEA ESI,[ESP + 0x28]                ; 004e007d
    LEA EDI,[ESP + 0x10]                ; 004e0081
    CALL dword ptr [EAX + 0x24]         ; 004e0085
    MOV ECX,0x6                         ; 004e0088
    ADD ESP,0x4                         ; 004e008d
    LEA EAX,[ESP + 0xc]                 ; 004e0090
    LEA ESI,[ESP + 0x24]                ; 004e0094
    PUSH EAX                            ; 004e0098
    MOVSD.REP ES:EDI,ESI                ; 004e0099
    CALL FUN_0041a840                   ; 004e009b
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 004e00a0
    MOV ESI,EAX                         ; 004e00a3
    TEST EAX,EAX                        ; 004e00a5
    JZ 0x004e00bc                       ; 004e00a7
        ;   XREF to: 004e00bc (CONDITIONAL_JUMP)  ; LAB_004e00bc
    PUSH -0x1                           ; 004e00a9
    LEA EAX,[EBX + 0x2b4]               ; 004e00ab
    PUSH 0x0                            ; 004e00b1
    PUSH EAX                            ; 004e00b3
    CALL FUN_0044fcc0                   ; 004e00b4
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fcc0()
    ADD ESP,0xc                         ; 004e00b9
    PUSH EBX                            ; 004e00bc
        ;   Label: LAB_004e00bc
    CALL FUN_00408a10                   ; 004e00bd
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 004e00c2
    MOV EAX,ESI                         ; 004e00c5
    POP ESI                             ; 004e00c7
    POP EDI                             ; 004e00c8
    ADD ESP,0x30                        ; 004e00c9
    POP EBX                             ; 004e00cc
    RET                                 ; 004e00cd

