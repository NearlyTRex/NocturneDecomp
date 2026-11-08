; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00430520(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[10]:
;   FUN_00428810 at 004289cf
;   FUN_004300e0 at 004302bf
;   FUN_00445730 at 0044580d
;   FUN_00458680 at 004587bc
;   FUN_004c5f10 at 004c6041
;   FUN_004c9140 at 004c927c
;   FUN_004d7bd0 at 004d7d11
;   FUN_004f9050 at 004f90fb
;   FUN_0058c330 at 0058c4ef
;   FUN_0058f630 at 0058f852
;
; Called Functions:
;   FUN_00414550
;   FUN_004157c0
;   FUN_00430590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430520
        ;   Label: FUN_00430520
    PUSH ESI                            ; 00430521
    PUSH EBP                            ; 00430522
    MOV EBX,dword ptr [ESP + 0x10]      ; 00430523
    LEA ESI,[EBX + 0x24a8]              ; 00430527
    CMP byte ptr [ESI],0x0              ; 0043052d
    JZ 0x00430540                       ; 00430530
        ;   XREF to: 00430540 (CONDITIONAL_JUMP)  ; LAB_00430540
    MOV ESI,dword ptr [ESP + 0x14]      ; 00430532
    CMP dword ptr [EBX + ESI*0x4 + 0x2298],0x0 ; 00430536
    JNZ 0x00430544                      ; 0043053e
        ;   XREF to: 00430544 (CONDITIONAL_JUMP)  ; LAB_00430544
    POP EBP                             ; 00430540
        ;   Label: LAB_00430540
    POP ESI                             ; 00430541
    POP EBX                             ; 00430542
    RET                                 ; 00430543
    PUSH EDI                            ; 00430544
        ;   Label: LAB_00430544
    MOV ECX,dword ptr [EBX + 0x27a0]    ; 00430545
    PUSH ECX                            ; 0043054b
    PUSH 0x0                            ; 0043054c
    PUSH 0x0                            ; 0043054e
    PUSH EBX                            ; 00430550
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00430551
    PUSH ESI                            ; 00430555
    LEA ESI,[EBX + 0x30]                ; 00430556
    PUSH ESI                            ; 00430559
    LEA ESI,[EBX + 0x20]                ; 0043055a
    PUSH ESI                            ; 0043055d
    CALL FUN_00414550                   ; 0043055e
        ;   XREF to: 00414550 (UNCONDITIONAL_CALL)  ; undefined FUN_00414550()
    ADD ESP,0x1c                        ; 00430563
    MOV EDI,dword ptr [ESP + 0x20]      ; 00430566
    PUSH EDI                            ; 0043056a
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0043056b
    PUSH EBP                            ; 0043056f
    PUSH EAX                            ; 00430570
    PUSH EBX                            ; 00430571
    MOV ESI,EAX                         ; 00430572
    CALL FUN_00430590                   ; 00430574
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; undefined FUN_00430590()
    ADD ESP,0x10                        ; 00430579
    PUSH ESI                            ; 0043057c
    CALL FUN_004157c0                   ; 0043057d
        ;   XREF to: 004157c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004157c0()
    ADD ESP,0x4                         ; 00430582
    POP EDI                             ; 00430585
    POP EBP                             ; 00430586
    POP ESI                             ; 00430587
    POP EBX                             ; 00430588
    RET                                 ; 00430589

