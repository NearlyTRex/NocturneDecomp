; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00431490(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_004764c0 at 004764dd
;   FUN_00591de0 at 00591dfd
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431490
        ;   Label: FUN_00431490
    PUSH ESI                            ; 00431491
    PUSH EDI                            ; 00431492
    PUSH EBP                            ; 00431493
    MOV EDI,dword ptr [ESP + 0x18]      ; 00431494
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00431498
    MOV ESI,dword ptr [ESP + 0x14]      ; 0043149c
    ADD ESI,0x25a8                      ; 004314a0
    MOV EBX,ESI                         ; 004314a6
    ADD ESI,0xf0                        ; 004314a8
    MOV EDX,dword ptr [EBX + 0x8]       ; 004314ae
        ;   Label: LAB_004314ae
    CMP EDI,EDX                         ; 004314b1
    JZ 0x004314c1                       ; 004314b3
        ;   XREF to: 004314c1 (CONDITIONAL_JUMP)  ; LAB_004314c1
    ADD EBX,0x78                        ; 004314b5
    CMP EBX,ESI                         ; 004314b8
    JNZ 0x004314ae                      ; 004314ba
        ;   XREF to: 004314ae (CONDITIONAL_JUMP)  ; LAB_004314ae
    POP EBP                             ; 004314bc
    POP EDI                             ; 004314bd
    POP ESI                             ; 004314be
    POP EBX                             ; 004314bf
    RET                                 ; 004314c0
    PUSH EBP                            ; 004314c1
        ;   Label: LAB_004314c1
    MOV EDX,dword ptr [EDX + 0x154]     ; 004314c2
    PUSH EDI                            ; 004314c8
    CALL dword ptr [EDX + 0x8c]         ; 004314c9
    ADD ESP,0x8                         ; 004314cf
    MOV dword ptr [EBX + 0x8],0x0       ; 004314d2
    ADD EBX,0x78                        ; 004314d9
    CMP EBX,ESI                         ; 004314dc
    JNZ 0x004314ae                      ; 004314de
        ;   XREF to: 004314ae (CONDITIONAL_JUMP)  ; LAB_004314ae
    POP EBP                             ; 004314e0
    POP EDI                             ; 004314e1
    POP ESI                             ; 004314e2
    POP EBX                             ; 004314e3
    RET                                 ; 004314e4

