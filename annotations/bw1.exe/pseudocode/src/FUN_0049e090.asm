; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049e090(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00622c18
;   undefined4 DAT_01ccc3e8
;   undefined4 DAT_01ccc3ec
;   undefined4 DAT_01ccc3f0
;   undefined4 DAT_01ccc41c
;   undefined4 DAT_01ccc524
;   undefined4 DAT_01cce098
;   undefined4 DAT_01cce0a0
;   undefined4 DAT_01cce0b4
;
; Called Functions:
;   FUN_00408b40
;   FUN_0045f3e0
;   FUN_00465da0
;   FUN_005518e0
;   FUN_005ad770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e090
        ;   Label: FUN_0049e090
    PUSH EBP                            ; 0049e091
    SUB ESP,0x30                        ; 0049e092
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0049e095
    CMP dword ptr [EBX + 0x57c],0x0     ; 0049e099
    JNZ 0x0049e0bf                      ; 0049e0a0
        ;   XREF to: 0049e0bf (CONDITIONAL_JUMP)  ; LAB_0049e0bf
    PUSH dword ptr [ESP + 0x40]         ; 0049e0a2
        ;   Label: LAB_0049e0a2
    PUSH EBX                            ; 0049e0a6
    MOV dword ptr [EBX + 0x57c],0x0     ; 0049e0a7
    CALL FUN_005ad770                   ; 0049e0b1
        ;   XREF to: 005ad770 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad770()
    ADD ESP,0x8                         ; 0049e0b6
    ADD ESP,0x30                        ; 0049e0b9
    POP EBP                             ; 0049e0bc
    POP EBX                             ; 0049e0bd
    RET                                 ; 0049e0be
    PUSH EDI                            ; 0049e0bf
        ;   Label: LAB_0049e0bf
    PUSH ESI                            ; 0049e0c0
    MOV ECX,0x1                         ; 0049e0c1
    LEA ESI,[ESP + 0x20]                ; 0049e0c6
    PUSH EBX                            ; 0049e0ca
    MOV EAX,dword ptr [EBX + 0x154]     ; 0049e0cb
    LEA EDI,[ESP + 0xc]                 ; 0049e0d1
    MOV dword ptr [0x01cce098],ECX      ; 0049e0d5 | DAT_01cce098
    CALL dword ptr [EAX + 0xe0]         ; 0049e0db
    ADD ESP,0x4                         ; 0049e0e1
    LEA EAX,[ESP + 0x8]                 ; 0049e0e4
    LEA ESI,[ESP + 0x20]                ; 0049e0e8
    PUSH EAX                            ; 0049e0ec
    MOVSD ES:EDI,ESI                    ; 0049e0ed
    MOVSD ES:EDI,ESI                    ; 0049e0ee
    MOVSD ES:EDI,ESI                    ; 0049e0ef
    PUSH EBX                            ; 0049e0f0
    LEA ESI,[ESP + 0x34]                ; 0049e0f1
    LEA EDI,[ESP + 0x1c]                ; 0049e0f5
    CALL FUN_00408b40                   ; 0049e0f9
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x34]                ; 0049e0fe
    ADD ESP,0x8                         ; 0049e102
    MOVSD ES:EDI,ESI                    ; 0049e105
    MOVSD ES:EDI,ESI                    ; 0049e106
    MOVSD ES:EDI,ESI                    ; 0049e107
    XOR ESI,ESI                         ; 0049e108
    LEA EAX,[ESP + 0x14]                ; 0049e10a
    MOV dword ptr [0x01cce0a0],ESI      ; 0049e10e | DAT_01cce0a0
    CMP EAX,0x1ccc3e8                   ; 0049e114
    JZ 0x0049e136                       ; 0049e119
        ;   XREF to: 0049e136 (CONDITIONAL_JUMP)  ; LAB_0049e136
    MOV EAX,dword ptr [ESP + 0x14]      ; 0049e11b
    MOV [0x01ccc3e8],EAX                ; 0049e11f | DAT_01ccc3e8
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049e124
    MOV [0x01ccc3ec],EAX                ; 0049e128 | DAT_01ccc3ec
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049e12d
    MOV [0x01ccc3f0],EAX                ; 0049e131 | DAT_01ccc3f0
    LEA EAX,[EBX + 0x30]                ; 0049e136
        ;   Label: LAB_0049e136
    PUSH EAX                            ; 0049e139
    PUSH 0x1ccc3f4                      ; 0049e13a
    CALL FUN_0045f3e0                   ; 0049e13f
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f3e0()
    ADD ESP,0x8                         ; 0049e144
    MOV EDI,0x42e00000                  ; 0049e147
    PUSH 0x3f800000                     ; 0049e14c
    FLD float ptr [EBX + 0x580]         ; 0049e151
    PUSH 0x1ccc3e4                      ; 0049e157
    FSTP float ptr [0x01ccc524]         ; 0049e15c | DAT_01ccc524
    MOV dword ptr [0x01ccc41c],EDI      ; 0049e162 | DAT_01ccc41c
    CALL FUN_00465da0                   ; 0049e168
        ;   XREF to: 00465da0 (UNCONDITIONAL_CALL)  ; undefined FUN_00465da0()
    ADD ESP,0x8                         ; 0049e16d
    PUSH 0x1ccc3e4                      ; 0049e170
    MOV EAX,[0x00622c18]                ; 0049e175 | DAT_00622c18
    XOR EBP,EBP                         ; 0049e17a
    PUSH EAX                            ; 0049e17c
    MOV dword ptr [0x01cce0b4],EBP      ; 0049e17d | DAT_01cce0b4
    CALL FUN_005518e0                   ; 0049e183
        ;   XREF to: 005518e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005518e0()
    ADD ESP,0x8                         ; 0049e188
    POP ESI                             ; 0049e18b
    POP EDI                             ; 0049e18c
    JMP 0x0049e0a2                      ; 0049e18d
        ;   XREF to: 0049e0a2 (UNCONDITIONAL_JUMP)  ; LAB_0049e0a2

