; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * FUN_0048a0e0(void)
;
;
; XREF[1]:
;   FUN_0048ab60 at 0048ad12
;
; Referenced Globals:
;   undefined4 DAT_01c20140
;   undefined4 DAT_01c20144
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048a0e0
        ;   Label: FUN_0048a0e0
    MOV ECX,dword ptr [0x01c20144]      ; 0048a0e1 | DAT_01c20144
    MOV EBX,dword ptr [0x01c20140]      ; 0048a0e7 | DAT_01c20140
    LEA EAX,[ECX*0x4 + 0x0]             ; 0048a0ed
    MOV EDX,EAX                         ; 0048a0f4
    SHL EAX,0x4                         ; 0048a0f6
    SUB EAX,EDX                         ; 0048a0f9
    INC ECX                             ; 0048a0fb
    ADD EAX,0x1c20148                   ; 0048a0fc
    CMP ECX,0x100                       ; 0048a101
    JL 0x0048a10b                       ; 0048a107
        ;   XREF to: 0048a10b (CONDITIONAL_JUMP)  ; LAB_0048a10b
    XOR ECX,ECX                         ; 0048a109
    INC EBX                             ; 0048a10b
        ;   Label: LAB_0048a10b
    CMP EBX,0x100                       ; 0048a10c
    JLE 0x0048a119                      ; 0048a112
        ;   XREF to: 0048a119 (CONDITIONAL_JUMP)  ; LAB_0048a119
    MOV EBX,0x100                       ; 0048a114
    MOV dword ptr [0x01c20140],EBX      ; 0048a119 | DAT_01c20140
        ;   Label: LAB_0048a119
    MOV dword ptr [0x01c20144],ECX      ; 0048a11f | DAT_01c20144
    POP EBX                             ; 0048a125
    RET                                 ; 0048a126

