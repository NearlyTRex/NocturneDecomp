; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004433f0(int param_1,int param_2,int param_3,int *param_4)
;
;
; XREF[1]:
;   FUN_00443790 at 004437ff
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004433f0
        ;   Label: FUN_004433f0
    PUSH ESI                            ; 004433f1
    PUSH EDI                            ; 004433f2
    PUSH EBP                            ; 004433f3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004433f4
    MOV EDI,dword ptr [ESP + 0x18]      ; 004433f8
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004433fc
    MOV EBP,dword ptr [ESP + 0x20]      ; 00443400
    MOV EAX,EDI                         ; 00443404
    MOV EDX,dword ptr [EBX + 0x10]      ; 00443406
    SHL EAX,0x4                         ; 00443409
    ADD EAX,EDX                         ; 0044340c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044340e
    TEST EDX,EDX                        ; 00443411
    JL 0x0044342e                       ; 00443413
        ;   XREF to: 0044342e (CONDITIONAL_JUMP)  ; LAB_0044342e
    CMP EDI,ECX                         ; 00443415
    JNZ 0x00443456                      ; 00443417
        ;   XREF to: 00443456 (CONDITIONAL_JUMP)  ; LAB_00443456
    MOV EAX,ECX                         ; 00443419
    SHL EAX,0x4                         ; 0044341b
        ;   Label: LAB_0044341b
    MOV EDX,dword ptr [EBX + 0x10]      ; 0044341e
    ADD EAX,EDX                         ; 00443421
    MOV ESI,dword ptr [EAX + 0x4]       ; 00443423
    TEST ESI,ESI                        ; 00443426
    JL 0x0044342e                       ; 00443428
        ;   XREF to: 0044342e (CONDITIONAL_JUMP)  ; LAB_0044342e
    MOV EAX,ESI                         ; 0044342a
    JMP 0x0044341b                      ; 0044342c
        ;   XREF to: 0044341b (UNCONDITIONAL_JUMP)  ; LAB_0044341b
    MOV ESI,dword ptr [EAX]             ; 0044342e
        ;   Label: LAB_0044342e
    MOV EDX,EDI                         ; 00443430
        ;   Label: LAB_00443430
    MOV EAX,dword ptr [EBX + 0x10]      ; 00443432
    SHL EDX,0x4                         ; 00443435
    MOV ECX,dword ptr [EBP]             ; 00443438
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0044343b
    AND EAX,0xff                        ; 0044343e
    PUSH EAX                            ; 00443443
    PUSH EBP                            ; 00443444
    CALL dword ptr [ECX + 0x4]          ; 00443445
    ADD ESP,0x8                         ; 00443448
    TEST EAX,EAX                        ; 0044344b
    JL 0x0044346d                       ; 0044344d
        ;   XREF to: 0044346d (CONDITIONAL_JUMP)  ; LAB_0044346d
    MOV EAX,ESI                         ; 0044344f
    POP EBP                             ; 00443451
    POP EDI                             ; 00443452
    POP ESI                             ; 00443453
    POP EBX                             ; 00443454
    RET                                 ; 00443455
    PUSH EBP                            ; 00443456
        ;   Label: LAB_00443456
    PUSH ECX                            ; 00443457
    PUSH EDX                            ; 00443458
    PUSH EBX                            ; 00443459
    CALL FUN_004433f0                   ; 0044345a
        ;   XREF to: 004433f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004433f0()
    ADD ESP,0x10                        ; 0044345f
    MOV ESI,EAX                         ; 00443462
    TEST EAX,EAX                        ; 00443464
    JGE 0x00443430                      ; 00443466
        ;   XREF to: 00443430 (CONDITIONAL_JUMP)  ; LAB_00443430
    POP EBP                             ; 00443468
    POP EDI                             ; 00443469
    POP ESI                             ; 0044346a
    POP EBX                             ; 0044346b
    RET                                 ; 0044346c
    CMP EAX,-0x1                        ; 0044346d
        ;   Label: LAB_0044346d
    JNZ 0x0044347e                      ; 00443470
        ;   XREF to: 0044347e (CONDITIONAL_JUMP)  ; LAB_0044347e
    MOV EAX,0xfffffffe                  ; 00443472
    SUB EAX,EDI                         ; 00443477
    POP EBP                             ; 00443479
    POP EDI                             ; 0044347a
    POP ESI                             ; 0044347b
    POP EBX                             ; 0044347c
    RET                                 ; 0044347d
    MOV EAX,0xffffffff                  ; 0044347e
        ;   Label: LAB_0044347e
    POP EBP                             ; 00443483
    POP EDI                             ; 00443484
    POP ESI                             ; 00443485
    POP EBX                             ; 00443486
    RET                                 ; 00443487

