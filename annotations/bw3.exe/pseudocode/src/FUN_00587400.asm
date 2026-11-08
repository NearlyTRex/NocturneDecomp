; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00587400(int *param_1,int *param_2,int *param_3)
;
;
; XREF[1]:
;   FUN_00587cd0 at 00588205
;
; Referenced Globals:
;   undefined4 DAT_01c6e2b4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00587400
        ;   Label: FUN_00587400
    PUSH ESI                            ; 00587401
    PUSH EDI                            ; 00587402
    PUSH EBP                            ; 00587403
    MOV ESI,dword ptr [ESP + 0x14]      ; 00587404
    MOV EBP,dword ptr [ESP + 0x18]      ; 00587408
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0058740c
    MOV EDX,dword ptr [ESI]             ; 00587410
    ADD EDX,dword ptr [ESI + 0x8]       ; 00587412
    MOV EAX,dword ptr [EBP]             ; 00587415
    MOV EBX,EDX                         ; 00587418
    MOV ECX,dword ptr [EBP + 0x8]       ; 0058741a
    SUB EBX,EAX                         ; 0058741d
    SUB EBX,ECX                         ; 0058741f
    CMP EDX,EBX                         ; 00587421
    JGE 0x00587437                      ; 00587423
        ;   XREF to: 00587437 (CONDITIONAL_JUMP)  ; LAB_00587437
    NEG EBX                             ; 00587425
    CMP EDX,EBX                         ; 00587427
    JLE 0x0058743e                      ; 00587429
        ;   XREF to: 0058743e (CONDITIONAL_JUMP)  ; LAB_0058743e
    NEG EBX                             ; 0058742b
    XOR EAX,EAX                         ; 0058742d
    SAR EDX,0x1                         ; 0058742f
    RCR EAX,0x1                         ; 00587431
    IDIV EBX                            ; 00587433
    JMP 0x00587445                      ; 00587435
        ;   XREF to: 00587445 (UNCONDITIONAL_JUMP)  ; LAB_00587445
    MOV EAX,0x7fffffff                  ; 00587437
        ;   Label: LAB_00587437
    JMP 0x00587445                      ; 0058743c
        ;   XREF to: 00587445 (UNCONDITIONAL_JUMP)  ; LAB_00587445
    NEG EBX                             ; 0058743e
        ;   Label: LAB_0058743e
    MOV EAX,0x80000000                  ; 00587440
    MOV ECX,EAX                         ; 00587445
        ;   Label: LAB_00587445
    MOV EBX,dword ptr [ESI + 0x8]       ; 00587447
    MOV EAX,dword ptr [EBP + 0x8]       ; 0058744a
    MOV EDX,ECX                         ; 0058744d
    SUB EAX,EBX                         ; 0058744f
    IMUL EDX                            ; 00587451
    ADD EAX,EAX                         ; 00587453
    ADC EDX,EDX                         ; 00587455
    MOV EAX,EDX                         ; 00587457
    MOV EDX,dword ptr [ESI + 0x8]       ; 00587459
    ADD EAX,EDX                         ; 0058745c
    MOV dword ptr [EDI + 0x8],EAX       ; 0058745e
    MOV dword ptr [EDI],EAX             ; 00587461
    NEG EAX                             ; 00587463
    MOV dword ptr [EDI],EAX             ; 00587465
    MOV EAX,dword ptr [EBP + 0x4]       ; 00587467
    SUB EAX,dword ptr [ESI + 0x4]       ; 0058746a
    MOV EDX,ECX                         ; 0058746d
    IMUL EDX                            ; 0058746f
    ADD EAX,EAX                         ; 00587471
    ADC EDX,EDX                         ; 00587473
    MOV EAX,EDX                         ; 00587475
    MOV EDX,dword ptr [ESI + 0x4]       ; 00587477
    ADD EAX,EDX                         ; 0058747a
    MOV dword ptr [EDI + 0x4],EAX       ; 0058747c
    MOV AH,byte ptr [0x01c6e2b4]        ; 0058747f | DAT_01c6e2b4
    MOV dword ptr [EDI + 0x10],0xffffffff ; 00587485
    TEST AH,0x4                         ; 0058748c
    JNZ 0x00587496                      ; 0058748f
        ;   XREF to: 00587496 (CONDITIONAL_JUMP)  ; LAB_00587496
    POP EBP                             ; 00587491
    POP EDI                             ; 00587492
    POP ESI                             ; 00587493
    POP EBX                             ; 00587494
    RET                                 ; 00587495
    MOV EAX,dword ptr [EBP + 0x20]      ; 00587496
        ;   Label: LAB_00587496
    MOV EBX,dword ptr [ESI + 0x20]      ; 00587499
    MOV EDX,ECX                         ; 0058749c
    SUB EAX,EBX                         ; 0058749e
    IMUL EDX                            ; 005874a0
    ADD EAX,EAX                         ; 005874a2
    ADC EDX,EDX                         ; 005874a4
    MOV EAX,EDX                         ; 005874a6
    MOV EDX,dword ptr [ESI + 0x20]      ; 005874a8
    ADD EAX,EDX                         ; 005874ab
    MOV dword ptr [EDI + 0x20],EAX      ; 005874ad
    POP EBP                             ; 005874b0
    POP EDI                             ; 005874b1
    POP ESI                             ; 005874b2
    POP EBX                             ; 005874b3
    RET                                 ; 005874b4

