; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_clipper_c_clipPolygonRightPlaneGlobal_FUN_004322e0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007bfcfc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004322e0
        ;   Label: engine_clipper.c_clipPolygonRightPlaneGlobal_FUN_004322e0
    PUSH ESI                            ; 004322e1
    PUSH EDI                            ; 004322e2
    PUSH EBP                            ; 004322e3
    SUB ESP,0x4                         ; 004322e4
    XOR EDX,EDX                         ; 004322e7
    MOV ECX,dword ptr [0x007bfcfc]      ; 004322e9 | DAT_007bfcfc
    MOV dword ptr [ESP],EDX             ; 004322ef
    TEST ECX,ECX                        ; 004322f2
    JLE 0x0043237f                      ; 004322f4
        ;   XREF to: 0043237f (CONDITIONAL_JUMP)  ; LAB_0043237f
    MOV EBX,0x7c030c                    ; 004322fa
    MOV EAX,dword ptr [ESP]             ; 004322ff
        ;   Label: LAB_004322ff
    MOV EBP,dword ptr [0x007bfcfc]      ; 00432302 | DAT_007bfcfc
    INC EAX                             ; 00432308
    CMP EAX,EBP                         ; 00432309
    JNZ 0x0043230f                      ; 0043230b
        ;   XREF to: 0043230f (CONDITIONAL_JUMP)  ; LAB_0043230f
    XOR EAX,EBP                         ; 0043230d
    IMUL EAX,EAX,0x30                   ; 0043230f
        ;   Label: LAB_0043230f
    MOV EBP,0x7c030c                    ; 00432312
    MOV EDX,EBX                         ; 00432317
    MOV EDI,dword ptr [EBX]             ; 00432319
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043231b
    ADD EBP,EAX                         ; 0043231e
    XOR EAX,EAX                         ; 00432320
    CMP EDI,ECX                         ; 00432322
    JL 0x0043232b                       ; 00432324
        ;   XREF to: 0043232b (CONDITIONAL_JUMP)  ; LAB_0043232b
    MOV EAX,0x1                         ; 00432326
    MOV ESI,dword ptr [EBP + 0x8]       ; 0043232b
        ;   Label: LAB_0043232b
    CMP ESI,dword ptr [EBP]             ; 0043232e
    JG 0x00432335                       ; 00432331
        ;   XREF to: 00432335 (CONDITIONAL_JUMP)  ; LAB_00432335
    OR AL,0x2                           ; 00432333
    CMP EAX,0x3                         ; 00432335
        ;   Label: LAB_00432335
    JA 0x0043236b                       ; 00432338
        ;   XREF to: 0043236b (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4322c8]  ; 0043233a
        ;   Label: switchD
    MOV ESI,dword ptr [ESP]             ; 0043236b
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x007bfcfc]      ; 0043236e | DAT_007bfcfc
    INC ESI                             ; 00432374
    ADD EBX,0x30                        ; 00432375
    MOV dword ptr [ESP],ESI             ; 00432378
    CMP ESI,EDI                         ; 0043237b
    JL 0x004322ff                       ; 0043237d
        ;   XREF to: 004322ff (CONDITIONAL_JUMP)  ; LAB_004322ff
    ADD ESP,0x4                         ; 0043237f
        ;   Label: LAB_0043237f
    POP EBP                             ; 00432382
    POP EDI                             ; 00432383
    POP ESI                             ; 00432384
    POP EBX                             ; 00432385
    RET                                 ; 00432386

