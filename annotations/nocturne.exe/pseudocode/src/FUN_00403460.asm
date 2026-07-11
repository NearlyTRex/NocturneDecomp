; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00403460(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00401010 at 00401069
;
; Referenced Globals:
;   undefined4 DAT_005771fc
;   undefined4 DAT_00577200
;   undefined4 DAT_00577203
;
; Called Functions:
;   FUN_004031a0
;   FUN_00403500
;   FUN_004568c0
;   FUN_00456a60
;   FUN_00563380
;   FUN_005636d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00403460
        ;   Label: FUN_00403460
    MOV ESI,dword ptr [ESP + 0x8]       ; 00403461
    PUSH EBX                            ; 00403465
    PUSH ESI                            ; 00403466
    PUSH 0x5771fc                       ; 00403467 | DAT_005771fc
    CALL FUN_004568c0                   ; 0040346c
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004568c0()
    ADD ESP,0x8                         ; 00403471
    CMP EAX,0x1000                      ; 00403474
    JZ 0x004034cb                       ; 00403479
        ;   XREF to: 004034cb (CONDITIONAL_JUMP)  ; LAB_004034cb
    PUSH 0x577200                       ; 0040347b | DAT_00577200
    PUSH ESI                            ; 00403480
    PUSH 0x577203                       ; 00403481 | DAT_00577203
    CALL FUN_00456a60                   ; 00403486
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00456a60()
    MOV EBX,EAX                         ; 0040348b
    ADD ESP,0xc                         ; 0040348d
    TEST EAX,EAX                        ; 00403490
    JNZ 0x004034d4                      ; 00403492
        ;   XREF to: 004034d4 (CONDITIONAL_JUMP)  ; LAB_004034d4
    PUSH EAX                            ; 00403494
    CALL FUN_004031a0                   ; 00403495
        ;   XREF to: 004031a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004031a0()
    ADD ESP,0x4                         ; 0040349a
    PUSH ESI                            ; 0040349d
    CALL FUN_00403500                   ; 0040349e
        ;   XREF to: 00403500 (UNCONDITIONAL_CALL)  ; undefined FUN_00403500()
    ADD ESP,0x4                         ; 004034a3
        ;   Label: LAB_004034a3
    XOR EAX,EAX                         ; 004034a6
    POP EBX                             ; 004034a8
    INC EAX                             ; 004034a9
        ;   Label: LAB_004034a9
    MOV DL,byte ptr [EAX + 0x1bf561f]   ; 004034aa
    MOV byte ptr [EAX + 0x1bf551f],DL   ; 004034b0
    MOV DL,byte ptr [EAX + 0x1bf751f]   ; 004034b6
    MOV byte ptr [EAX + 0x1bf761f],DL   ; 004034bc
    CMP EAX,0x100                       ; 004034c2
    JL 0x004034a9                       ; 004034c7
        ;   XREF to: 004034a9 (CONDITIONAL_JUMP)  ; LAB_004034a9
    POP ESI                             ; 004034c9
    RET                                 ; 004034ca
    PUSH 0x0                            ; 004034cb
        ;   Label: LAB_004034cb
    CALL FUN_004031a0                   ; 004034cd
        ;   XREF to: 004031a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004031a0()
    JMP 0x004034a3                      ; 004034d2
        ;   XREF to: 004034a3 (UNCONDITIONAL_JUMP)  ; LAB_004034a3
    PUSH EAX                            ; 004034d4
        ;   Label: LAB_004034d4
    PUSH 0x20                           ; 004034d5
    PUSH 0x100                          ; 004034d7
    PUSH 0x1bf5620                      ; 004034dc
    CALL FUN_005636d0                   ; 004034e1
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005636d0()
    ADD ESP,0x10                        ; 004034e6
    PUSH EBX                            ; 004034e9
    CALL FUN_00563380                   ; 004034ea
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined FUN_00563380()
    JMP 0x004034a3                      ; 004034ef
        ;   XREF to: 004034a3 (UNCONDITIONAL_JUMP)  ; LAB_004034a3

