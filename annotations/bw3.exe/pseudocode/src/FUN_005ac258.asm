; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005ac258(int *param_1,int *param_2)
;
;
; XREF[1]:
;   FUN_005abf84 at 005ac127
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac258
        ;   Label: FUN_005ac258
    PUSH ESI                            ; 005ac259
    PUSH EBP                            ; 005ac25a
    MOV EBX,dword ptr [ESP + 0x10]      ; 005ac25b
    MOV EDX,dword ptr [ESP + 0x14]      ; 005ac25f
    MOV ECX,dword ptr [EBX + 0x8]       ; 005ac263
    MOV ESI,dword ptr [EDX + 0x8]       ; 005ac266
    XOR EAX,EAX                         ; 005ac269
    CMP ECX,ESI                         ; 005ac26b
    JL 0x005ac283                       ; 005ac26d
        ;   XREF to: 005ac283 (CONDITIONAL_JUMP)  ; LAB_005ac283
    JNZ 0x005ac288                      ; 005ac26f
        ;   XREF to: 005ac288 (CONDITIONAL_JUMP)  ; LAB_005ac288
    MOV ECX,dword ptr [EBX + 0x4]       ; 005ac271
    MOV EBP,dword ptr [EDX + 0x4]       ; 005ac274
    CMP ECX,EBP                         ; 005ac277
    JL 0x005ac283                       ; 005ac279
        ;   XREF to: 005ac283 (CONDITIONAL_JUMP)  ; LAB_005ac283
    JNZ 0x005ac288                      ; 005ac27b
        ;   XREF to: 005ac288 (CONDITIONAL_JUMP)  ; LAB_005ac288
    MOV EBX,dword ptr [EBX]             ; 005ac27d
    CMP EBX,dword ptr [EDX]             ; 005ac27f
    JGE 0x005ac288                      ; 005ac281
        ;   XREF to: 005ac288 (CONDITIONAL_JUMP)  ; LAB_005ac288
    MOV EAX,0x1                         ; 005ac283
        ;   Label: LAB_005ac283
    POP EBP                             ; 005ac288
        ;   Label: LAB_005ac288
    POP ESI                             ; 005ac289
    POP EBX                             ; 005ac28a
    RET                                 ; 005ac28b

