; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c6390(int param_1,float param_2)
;
;
; XREF[1]:
;   FUN_0047ac50 at 0047cd75
;
; Referenced Globals:
;   undefined4 DAT_005b7650
;   undefined4 DAT_005baf90
;   undefined4 DAT_005be368
;   undefined4 DAT_01cc3660
;   undefined4 DAT_01cc9454
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fa3ff0
;   undefined4 DAT_01fa3ff4
;
; Called Functions:
;   FUN_0040d890
;   FUN_0047ab70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6390
        ;   Label: FUN_004c6390
    PUSH ESI                            ; 004c6391
    PUSH EDI                            ; 004c6392
    PUSH EBP                            ; 004c6393
    MOV EDI,dword ptr [ESP + 0x14]      ; 004c6394
    FLD float ptr [EDI + 0x2d4]         ; 004c6398
    FCOMP float ptr [ESP + 0x18]        ; 004c639e
    FNSTSW AX                           ; 004c63a2
    SAHF                                ; 004c63a4
    JZ 0x004c6415                       ; 004c63a5
        ;   XREF to: 004c6415 (CONDITIONAL_JUMP)  ; LAB_004c6415
    MOV EAX,[0x005baf90]                ; 004c63a7 | DAT_005baf90
    CMP dword ptr [EAX + 0x4],0x0       ; 004c63ac | DAT_01cc9454
    JZ 0x004c641a                       ; 004c63b0
        ;   XREF to: 004c641a (CONDITIONAL_JUMP)  ; LAB_004c641a
    FLDZ                                ; 004c63b2
        ;   Label: LAB_004c63b2
    FCOMP float ptr [ESP + 0x18]        ; 004c63b4
    FNSTSW AX                           ; 004c63b8
    SAHF                                ; 004c63ba
    JNC 0x004c648b                      ; 004c63bb
        ;   XREF to: 004c648b (CONDITIONAL_JUMP)  ; LAB_004c648b
    FLD float ptr [EDI + 0x2d4]         ; 004c63c1
    FLDZ                                ; 004c63c7
    FCOMPP                              ; 004c63c9
    FNSTSW AX                           ; 004c63cb
    SAHF                                ; 004c63cd
    JC 0x004c648b                       ; 004c63ce
        ;   XREF to: 004c648b (CONDITIONAL_JUMP)  ; LAB_004c648b
    LEA EBX,[EDI + 0x3a0]               ; 004c63d4
        ;   Label: LAB_004c63d4
    PUSH EBX                            ; 004c63da
    MOV EAX,dword ptr [EDI + 0x14c]     ; 004c63db
    PUSH EDI                            ; 004c63e1
    CALL dword ptr [EAX + 0x24]         ; 004c63e2
    ADD ESP,0x8                         ; 004c63e5
    MOV EAX,dword ptr [ESP + 0x18]      ; 004c63e8
        ;   Label: LAB_004c63e8
    MOV EBP,dword ptr [EDI + 0x408]     ; 004c63ec
    MOV dword ptr [EDI + 0x2d4],EAX     ; 004c63f2
    TEST EBP,EBP                        ; 004c63f8
    JNZ 0x004c64b1                      ; 004c63fa
        ;   XREF to: 004c64b1 (CONDITIONAL_JUMP)  ; LAB_004c64b1
    XOR EBX,EBX                         ; 004c6400
        ;   Label: LAB_004c6400
    XOR ESI,ESI                         ; 004c6402
    MOV EAX,[0x005be368]                ; 004c6404 | DAT_005be368 | DAT_01e57284
        ;   Label: LAB_004c6404
    CMP ESI,dword ptr [EAX + 0x14cd6c]  ; 004c6409 | DAT_01fa3ff0
    JL 0x004c64c0                       ; 004c640f
        ;   XREF to: 004c64c0 (CONDITIONAL_JUMP)  ; LAB_004c64c0
    POP EBP                             ; 004c6415
        ;   Label: LAB_004c6415
    POP EDI                             ; 004c6416
    POP ESI                             ; 004c6417
    POP EBX                             ; 004c6418
    RET                                 ; 004c6419
    FLD float ptr [ESP + 0x18]          ; 004c641a
        ;   Label: LAB_004c641a
    FLDZ                                ; 004c641e
    FCOMPP                              ; 004c6420
    FNSTSW AX                           ; 004c6422
    SAHF                                ; 004c6424
    JC 0x004c644c                       ; 004c6425
        ;   XREF to: 004c644c (CONDITIONAL_JUMP)  ; LAB_004c644c
    FLD float ptr [EDI + 0x2d4]         ; 004c6427
    FLDZ                                ; 004c642d
    FCOMPP                              ; 004c642f
    FNSTSW AX                           ; 004c6431
    SAHF                                ; 004c6433
    JNC 0x004c644c                      ; 004c6434
        ;   XREF to: 004c644c (CONDITIONAL_JUMP)  ; LAB_004c644c
    LEA EAX,[EDI + 0x33c]               ; 004c6436
    PUSH EAX                            ; 004c643c
    MOV ECX,dword ptr [0x005b7650]      ; 004c643d | DAT_005b7650
    PUSH ECX                            ; 004c6443
    CALL FUN_0047ab70                   ; 004c6444
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; undefined FUN_0047ab70()
    ADD ESP,0x8                         ; 004c6449
    FLD float ptr [ESP + 0x18]          ; 004c644c
        ;   Label: LAB_004c644c
    FLD1                                ; 004c6450
    FCOMPP                              ; 004c6452
    FNSTSW AX                           ; 004c6454
    SAHF                                ; 004c6456
    JA 0x004c63b2                       ; 004c6457
        ;   XREF to: 004c63b2 (CONDITIONAL_JUMP)  ; LAB_004c63b2
    FLD float ptr [EDI + 0x2d4]         ; 004c645d
    FLD1                                ; 004c6463
    FCOMPP                              ; 004c6465
    FNSTSW AX                           ; 004c6467
    SAHF                                ; 004c6469
    JBE 0x004c63b2                      ; 004c646a
        ;   XREF to: 004c63b2 (CONDITIONAL_JUMP)  ; LAB_004c63b2
    LEA EAX,[EDI + 0x2d8]               ; 004c6470
    PUSH EAX                            ; 004c6476
    MOV EBX,dword ptr [0x005b7650]      ; 004c6477 | DAT_005b7650
    PUSH EBX                            ; 004c647d
    CALL FUN_0047ab70                   ; 004c647e
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; undefined FUN_0047ab70()
    ADD ESP,0x8                         ; 004c6483
    JMP 0x004c63b2                      ; 004c6486
        ;   XREF to: 004c63b2 (UNCONDITIONAL_JUMP)  ; LAB_004c63b2
    CMP dword ptr [ESP + 0x18],0x3f800000 ; 004c648b
        ;   Label: LAB_004c648b
    JGE 0x004c63e8                      ; 004c6493
        ;   XREF to: 004c63e8 (CONDITIONAL_JUMP)  ; LAB_004c63e8
    FLD float ptr [EDI + 0x2d4]         ; 004c6499
    FLD1                                ; 004c649f
    FCOMPP                              ; 004c64a1
    FNSTSW AX                           ; 004c64a3
    SAHF                                ; 004c64a5
    JBE 0x004c63d4                      ; 004c64a6
        ;   XREF to: 004c63d4 (CONDITIONAL_JUMP)  ; LAB_004c63d4
    JMP 0x004c63e8                      ; 004c64ac
        ;   XREF to: 004c63e8 (UNCONDITIONAL_JUMP)  ; LAB_004c63e8
    PUSH EAX                            ; 004c64b1
        ;   Label: LAB_004c64b1
    PUSH EBP                            ; 004c64b2
    CALL FUN_004c6390                   ; 004c64b3
        ;   XREF to: 004c6390 (UNCONDITIONAL_CALL)  ; undefined FUN_004c6390()
    ADD ESP,0x8                         ; 004c64b8
    JMP 0x004c6400                      ; 004c64bb
        ;   XREF to: 004c6400 (UNCONDITIONAL_JUMP)  ; LAB_004c6400
    MOV ECX,dword ptr [0x01cc3660]      ; 004c64c0 | DAT_01cc3660
        ;   Label: LAB_004c64c0
    PUSH ECX                            ; 004c64c6
    MOV EBP,dword ptr [EBX + EAX*0x1 + 0x14cd70] ; 004c64c7 | DAT_01fa3ff4
    PUSH EBP                            ; 004c64ce
    CALL FUN_0040d890                   ; 004c64cf
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    ADD ESP,0x8                         ; 004c64d4
    TEST EAX,EAX                        ; 004c64d7
    JZ 0x004c64f0                       ; 004c64d9
        ;   XREF to: 004c64f0 (CONDITIONAL_JUMP)  ; LAB_004c64f0
    CMP EDI,dword ptr [EAX + 0x408]     ; 004c64db
    JNZ 0x004c64f0                      ; 004c64e1
        ;   XREF to: 004c64f0 (CONDITIONAL_JUMP)  ; LAB_004c64f0
    PUSH dword ptr [ESP + 0x18]         ; 004c64e3
    PUSH EAX                            ; 004c64e7
    CALL FUN_004c6390                   ; 004c64e8
        ;   XREF to: 004c6390 (UNCONDITIONAL_CALL)  ; undefined FUN_004c6390()
    ADD ESP,0x8                         ; 004c64ed
    INC ESI                             ; 004c64f0
        ;   Label: LAB_004c64f0
    ADD EBX,0x4                         ; 004c64f1
    JMP 0x004c6404                      ; 004c64f4
        ;   XREF to: 004c6404 (UNCONDITIONAL_JUMP)  ; LAB_004c6404

