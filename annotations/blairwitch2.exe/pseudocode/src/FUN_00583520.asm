; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00583520(int param_1)
;
;
; XREF[1]:
;   FUN_00581910 at 00582503
;
; Referenced Globals:
;   TerminatedCString s_voicusummon_wav_005edb90
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01bd3844
;   undefined4 DAT_01fb331c
;   undefined4 DAT_01fb3320
;
; Called Functions:
;   FUN_0040c8f0
;   FUN_0040d060
;   FUN_0046d560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00583520
        ;   Label: FUN_00583520
    PUSH ESI                            ; 00583521
    PUSH EDI                            ; 00583522
    PUSH EBP                            ; 00583523
    MOV EBX,dword ptr [ESP + 0x14]      ; 00583524
    PUSH 0x5edb90                       ; 00583528 | = "voicusummon.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0058352d
    PUSH EBX                            ; 00583533
    XOR ESI,ESI                         ; 00583534
    XOR EDI,EDI                         ; 00583536
    CALL dword ptr [EAX + 0x34]         ; 00583538
    ADD ESP,0x8                         ; 0058353b
    MOV EBX,dword ptr [0x0061b5a8]      ; 0058353e | DAT_0061b5a8
        ;   Label: LAB_0058353e
    CMP ESI,dword ptr [EBX + 0x14d164]  ; 00583544 | DAT_01fb331c
    JL 0x00583551                       ; 0058354a
        ;   XREF to: 00583551 (CONDITIONAL_JUMP)  ; LAB_00583551
    POP EBP                             ; 0058354c
    POP EDI                             ; 0058354d
    POP ESI                             ; 0058354e
    POP EBX                             ; 0058354f
    RET                                 ; 00583550
    MOV ECX,dword ptr [0x01bd3844]      ; 00583551 | DAT_01bd3844
        ;   Label: LAB_00583551
    PUSH ECX                            ; 00583557
    MOV EBP,dword ptr [EDI + EBX*0x1 + 0x14d168] ; 00583558 | DAT_01fb3320
    PUSH EBP                            ; 0058355f
    CALL FUN_0040c8f0                   ; 00583560
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    MOV EBX,EAX                         ; 00583565
    ADD ESP,0x8                         ; 00583567
    TEST EAX,EAX                        ; 0058356a
    JZ 0x00583591                       ; 0058356c
        ;   XREF to: 00583591 (CONDITIONAL_JUMP)  ; LAB_00583591
    CMP dword ptr [EAX + 0x430],0x2     ; 0058356e
    JNZ 0x00583591                      ; 00583575
        ;   XREF to: 00583591 (CONDITIONAL_JUMP)  ; LAB_00583591
    PUSH 0x3f000000                     ; 00583577
    CALL FUN_0040d060                   ; 0058357c
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d060()
    ADD ESP,0x4                         ; 00583581
    TEST EAX,EAX                        ; 00583584
    JNZ 0x00583591                      ; 00583586
        ;   XREF to: 00583591 (CONDITIONAL_JUMP)  ; LAB_00583591
    PUSH EBX                            ; 00583588
    CALL FUN_0046d560                   ; 00583589
        ;   XREF to: 0046d560 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d560()
    ADD ESP,0x4                         ; 0058358e
    INC ESI                             ; 00583591
        ;   Label: LAB_00583591
    ADD EDI,0x4                         ; 00583592
    JMP 0x0058353e                      ; 00583595
        ;   XREF to: 0058353e (UNCONDITIONAL_JUMP)  ; LAB_0058353e

