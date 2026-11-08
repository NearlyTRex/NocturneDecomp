; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00492570(int *param_1)
;
;
; XREF[1]:
;   FUN_004925c0 at 004925c5
;
; Referenced Globals:
;   undefined4 DAT_006141f0
;
; Called Functions:
;   FUN_0048e340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00492570
        ;   Label: FUN_00492570
    PUSH ESI                            ; 00492571
    PUSH EDI                            ; 00492572
    PUSH EBP                            ; 00492573
    MOV EDI,dword ptr [ESP + 0x14]      ; 00492574
    MOV EDX,dword ptr [EDI]             ; 00492578
    XOR EBX,EBX                         ; 0049257a
    TEST EDX,EDX                        ; 0049257c
    JLE 0x004925a1                      ; 0049257e
        ;   XREF to: 004925a1 (CONDITIONAL_JUMP)  ; LAB_004925a1
    LEA ESI,[EDI + 0x4]                 ; 00492580
    PUSH ESI                            ; 00492583
        ;   Label: LAB_00492583
    MOV EBP,dword ptr [0x006141f0]      ; 00492584 | DAT_006141f0
    PUSH EBP                            ; 0049258a
    CALL FUN_0048e340                   ; 0049258b
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 00492590
    TEST EAX,EAX                        ; 00492593
    JNZ 0x004925ab                      ; 00492595
        ;   XREF to: 004925ab (CONDITIONAL_JUMP)  ; LAB_004925ab
    INC EBX                             ; 00492597
    MOV ECX,dword ptr [EDI]             ; 00492598
    ADD ESI,0x64                        ; 0049259a
    CMP EBX,ECX                         ; 0049259d
    JL 0x00492583                       ; 0049259f
        ;   XREF to: 00492583 (CONDITIONAL_JUMP)  ; LAB_00492583
    MOV EAX,0xffffffff                  ; 004925a1
        ;   Label: LAB_004925a1
    POP EBP                             ; 004925a6
    POP EDI                             ; 004925a7
    POP ESI                             ; 004925a8
    POP EBX                             ; 004925a9
    RET                                 ; 004925aa
    MOV EAX,EBX                         ; 004925ab
        ;   Label: LAB_004925ab
    POP EBP                             ; 004925ad
    POP EDI                             ; 004925ae
    POP ESI                             ; 004925af
    POP EBX                             ; 004925b0
    RET                                 ; 004925b1

