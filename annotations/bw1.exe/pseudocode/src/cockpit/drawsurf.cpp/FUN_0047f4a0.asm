; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0047f4a0(int param_1,int param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   FUN_0047f860 at 0047f87c
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_005db11e
;   TerminatedCString s_Invalid_bitsPerPixel_005db136
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01bc11e4
;   undefined4 DAT_01bc11f0
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_0047e9d0
;   FUN_005030e0
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047f4a0
        ;   Label: FUN_0047f4a0
    PUSH ESI                            ; 0047f4a1
    PUSH EDI                            ; 0047f4a2
    PUSH EBP                            ; 0047f4a3
    MOV EDX,dword ptr [ESP + 0x14]      ; 0047f4a4
    MOV EAX,dword ptr [ESP + 0x18]      ; 0047f4a8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0047f4ac
    MOV ECX,dword ptr [ESP + 0x20]      ; 0047f4b0
    MOV ESI,dword ptr [EDX + 0x8]       ; 0047f4b4
    MOV EDI,dword ptr [EDX + 0xc]       ; 0047f4b7
    ADD ECX,ESI                         ; 0047f4ba
    ADD EAX,ESI                         ; 0047f4bc
    ADD EBX,EDI                         ; 0047f4be
    CMP EBX,dword ptr [EDX + 0x14]      ; 0047f4c0
    JL 0x0047f530                       ; 0047f4c3
        ;   XREF to: 0047f530 (CONDITIONAL_JUMP)  ; LAB_0047f530
    CMP EBX,dword ptr [EDX + 0x1c]      ; 0047f4c9
    JG 0x0047f530                       ; 0047f4cc
        ;   XREF to: 0047f530 (CONDITIONAL_JUMP)  ; LAB_0047f530
    MOV EBP,dword ptr [EDX + 0x10]      ; 0047f4ce
    CMP EAX,EBP                         ; 0047f4d1
    JGE 0x0047f4d7                      ; 0047f4d3
        ;   XREF to: 0047f4d7 (CONDITIONAL_JUMP)  ; LAB_0047f4d7
    MOV EAX,EBP                         ; 0047f4d5
    MOV ESI,dword ptr [EDX + 0x18]      ; 0047f4d7
        ;   Label: LAB_0047f4d7
    CMP ECX,ESI                         ; 0047f4da
    JLE 0x0047f4e0                      ; 0047f4dc
        ;   XREF to: 0047f4e0 (CONDITIONAL_JUMP)  ; LAB_0047f4e0
    MOV ECX,ESI                         ; 0047f4de
    CMP EAX,ECX                         ; 0047f4e0
        ;   Label: LAB_0047f4e0
    JG 0x0047f530                       ; 0047f4e2
        ;   XREF to: 0047f530 (CONDITIONAL_JUMP)  ; LAB_0047f530
    CMP dword ptr [0x01bc11f0],0x0      ; 0047f4e4 | DAT_01bc11f0
    JNZ 0x0047f535                      ; 0047f4eb
        ;   XREF to: 0047f535 (CONDITIONAL_JUMP)  ; LAB_0047f535
    MOV EDX,dword ptr [0x0061b4a0]      ; 0047f4ed | DAT_0061b4a0
    SHL EBX,0x2                         ; 0047f4f3
    CMP EDX,0x10                        ; 0047f4f6
    JNC 0x0047f58d                      ; 0047f4f9
        ;   XREF to: 0047f58d (CONDITIONAL_JUMP)  ; LAB_0047f58d
    CMP EDX,0x8                         ; 0047f4ff
    JNZ 0x0047f594                      ; 0047f502
        ;   XREF to: 0047f594 (CONDITIONAL_JUMP)  ; LAB_0047f594
    SUB ECX,EAX                         ; 0047f508
    INC ECX                             ; 0047f50a
    PUSH ECX                            ; 0047f50b
    MOV ECX,dword ptr [0x01bc11e4]      ; 0047f50c | DAT_01bc11e4
    MOV EDX,dword ptr [EBX + 0x1c4354c] ; 0047f512 | DAT_01c4354c
    PUSH ECX                            ; 0047f518
    ADD EDX,EAX                         ; 0047f519
    PUSH EDX                            ; 0047f51b
    CALL FUN_005bfb70                   ; 0047f51c
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 0047f521
    LEA EAX,[EAX]                       ; 0047f524
    LEA EDX,[EDX]                       ; 0047f52a
    POP EBP                             ; 0047f530
        ;   Label: LAB_0047f530
    POP EDI                             ; 0047f531
    POP ESI                             ; 0047f532
    POP EBX                             ; 0047f533
    RET                                 ; 0047f534
    PUSH EBX                            ; 0047f535
        ;   Label: LAB_0047f535
    PUSH ECX                            ; 0047f536
    PUSH EAX                            ; 0047f537
    CALL FUN_0047e9d0                   ; 0047f538
        ;   XREF to: 0047e9d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047e9d0()
    ADD ESP,0xc                         ; 0047f53d
    POP EBP                             ; 0047f540
    POP EDI                             ; 0047f541
    POP ESI                             ; 0047f542
    POP EBX                             ; 0047f543
    RET                                 ; 0047f544
    LEA EDX,[EAX + EAX*0x1]             ; 0047f545
        ;   Label: LAB_0047f545
    MOV EBX,dword ptr [EBX + 0x1c4354c] ; 0047f548 | DAT_01c4354c
    ADD EDX,EBX                         ; 0047f54e
    ADD EDX,0x2                         ; 0047f550
        ;   Label: LAB_0047f550
    MOV BX,word ptr [0x01bc11e4]        ; 0047f553 | DAT_01bc11e4
    INC EAX                             ; 0047f55a
    MOV word ptr [EDX + -0x2],BX        ; 0047f55b
    CMP EAX,ECX                         ; 0047f55f
    JLE 0x0047f550                      ; 0047f561
        ;   XREF to: 0047f550 (CONDITIONAL_JUMP)  ; LAB_0047f550
    POP EBP                             ; 0047f563
    POP EDI                             ; 0047f564
    POP ESI                             ; 0047f565
    POP EBX                             ; 0047f566
    RET                                 ; 0047f567
    LEA EDX,[EAX*0x4 + 0x0]             ; 0047f568
        ;   Label: LAB_0047f568
    MOV EBX,dword ptr [EBX + 0x1c4354c] ; 0047f56f | DAT_01c4354c
    ADD EDX,EBX                         ; 0047f575
    ADD EDX,0x4                         ; 0047f577
        ;   Label: LAB_0047f577
    MOV EBX,dword ptr [0x01bc11e4]      ; 0047f57a | DAT_01bc11e4
    INC EAX                             ; 0047f580
    MOV dword ptr [EDX + -0x4],EBX      ; 0047f581
    CMP EAX,ECX                         ; 0047f584
    JLE 0x0047f577                      ; 0047f586
        ;   XREF to: 0047f577 (CONDITIONAL_JUMP)  ; LAB_0047f577
    POP EBP                             ; 0047f588
    POP EDI                             ; 0047f589
    POP ESI                             ; 0047f58a
    POP EBX                             ; 0047f58b
    RET                                 ; 0047f58c
    JBE 0x0047f545                      ; 0047f58d
        ;   XREF to: 0047f545 (CONDITIONAL_JUMP)  ; LAB_0047f545
        ;   Label: LAB_0047f58d
    CMP EDX,0x20                        ; 0047f58f
    JZ 0x0047f568                       ; 0047f592
        ;   XREF to: 0047f568 (CONDITIONAL_JUMP)  ; LAB_0047f568
    MOV EBP,0x5db11e                    ; 0047f594 | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_0047f594
    MOV EAX,0x3a6                       ; 0047f599
    PUSH 0x5db136                       ; 0047f59e | = "Invalid bitsPerPixel!"
    MOV dword ptr [0x01d1d400],EBP      ; 0047f5a3 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0047f5a9 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0047f5ae
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0047f5b3
    POP EBP                             ; 0047f5b6
    POP EDI                             ; 0047f5b7
    POP ESI                             ; 0047f5b8
    POP EBX                             ; 0047f5b9
    RET                                 ; 0047f5ba

