; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f6690(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_004f6a70 at 004f6b24
;   FUN_004f6be0 at 004f6c65
;   FUN_004f8330 at 004f8416
;
; Referenced Globals:
;   void* PTR_caseD_1_004f667c = 004f673f
;   void* PTR_caseD_3_004f6684 = 004f671d
;   undefined4 DAT_01d09b90
;   undefined4 DAT_01d09b94
;   undefined4 DAT_01d0b398
;   undefined4 DAT_01d0b39c
;   undefined4 DAT_01d0b3a0
;   undefined4 DAT_01d0b3dc
;   undefined4 DAT_01d0b3e0
;   undefined4 DAT_01d0bb98
;   undefined4 DAT_01d0bb9c
;
; Called Functions:
;   FUN_004f6220
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6690
        ;   Label: FUN_004f6690
    PUSH ESI                            ; 004f6691
    PUSH EDI                            ; 004f6692
    PUSH EBP                            ; 004f6693
    SUB ESP,0x8                         ; 004f6694
    MOV EBX,dword ptr [0x01d09b94]      ; 004f6697 | DAT_01d09b94
    XOR EDX,EDX                         ; 004f669d
    MOV ECX,dword ptr [0x01d09b90]      ; 004f669f | DAT_01d09b90
    MOV dword ptr [ESP],EDX             ; 004f66a5
    TEST ECX,ECX                        ; 004f66a8
    JLE 0x004f6731                      ; 004f66aa
        ;   XREF to: 004f6731 (CONDITIONAL_JUMP)  ; LAB_004f6731
    MOV EBP,0x1d0b398                   ; 004f66b0
    MOV ECX,dword ptr [ESP]             ; 004f66b5
        ;   Label: LAB_004f66b5
    MOV EAX,[0x01d09b90]                ; 004f66b8 | DAT_01d09b90
    INC ECX                             ; 004f66bd
    CMP ECX,EAX                         ; 004f66be
    JNZ 0x004f66c4                      ; 004f66c0
        ;   XREF to: 004f66c4 (CONDITIONAL_JUMP)  ; LAB_004f66c4
    XOR ECX,EAX                         ; 004f66c2
    FLD float ptr [EBP + 0x8]           ; 004f66c4 | DAT_01d0b3a0 | DAT_01d0b3e0
        ;   Label: LAB_004f66c4
    MOV ESI,0x1d0b398                   ; 004f66c7
    SHL ECX,0x6                         ; 004f66cc
    MOV EDX,EBP                         ; 004f66cf
    ADD ESI,ECX                         ; 004f66d1
    FCHS                                ; 004f66d3
    MOV dword ptr [ESP + 0x4],ESI       ; 004f66d5
    XOR ECX,ECX                         ; 004f66d9
    FCOMP float ptr [EBP + 0x4]         ; 004f66db | DAT_01d0b39c | DAT_01d0b3dc
    FNSTSW AX                           ; 004f66de
    SAHF                                ; 004f66e0
    JC 0x004f66e8                       ; 004f66e1
        ;   XREF to: 004f66e8 (CONDITIONAL_JUMP)  ; LAB_004f66e8
    MOV ECX,0x1                         ; 004f66e3
    MOV ESI,dword ptr [ESP + 0x4]       ; 004f66e8
        ;   Label: LAB_004f66e8
    FLD float ptr [ESI + 0x8]           ; 004f66ec | DAT_01d0b3a0
    FCHS                                ; 004f66ef
    FCOMP float ptr [ESI + 0x4]         ; 004f66f1 | DAT_01d0b39c
    FNSTSW AX                           ; 004f66f4
    SAHF                                ; 004f66f6
    JC 0x004f66fc                       ; 004f66f7
        ;   XREF to: 004f66fc (CONDITIONAL_JUMP)  ; LAB_004f66fc
    OR CL,0x2                           ; 004f66f9
    CMP ECX,0x3                         ; 004f66fc
        ;   Label: LAB_004f66fc
    JA 0x004f671d                       ; 004f66ff
        ;   XREF to: 004f671d (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4f6678]  ; 004f6701 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESI,EBX                         ; 004f6708
        ;   Label: caseD_0
    SHL ESI,0x6                         ; 004f670a
    MOV ECX,0x10                        ; 004f670d
    LEA EDI,[ESI + 0x1d0bb98]           ; 004f6712
    MOV ESI,EDX                         ; 004f6718
    INC EBX                             ; 004f671a
    MOVSD.REP ES:EDI,ESI                ; 004f671b | DAT_01d0b398 | DAT_01d0bb98 | DAT_01d0b39c
    MOV ESI,dword ptr [ESP]             ; 004f671d
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x01d09b90]      ; 004f6720 | DAT_01d09b90
    INC ESI                             ; 004f6726
    ADD EBP,0x40                        ; 004f6727
    MOV dword ptr [ESP],ESI             ; 004f672a
    CMP ESI,EDI                         ; 004f672d
    JL 0x004f66b5                       ; 004f672f
        ;   XREF to: 004f66b5 (CONDITIONAL_JUMP)  ; LAB_004f66b5
    MOV dword ptr [0x01d09b94],EBX      ; 004f6731 | DAT_01d09b94
        ;   Label: LAB_004f6731
    ADD ESP,0x8                         ; 004f6737
    POP EBP                             ; 004f673a
    POP EDI                             ; 004f673b
    POP ESI                             ; 004f673c
    POP EBX                             ; 004f673d
    RET                                 ; 004f673e
    MOV ECX,EBX                         ; 004f673f
        ;   Label: caseD_1
    SHL ECX,0x6                         ; 004f6741
    ADD ECX,0x1d0bb98                   ; 004f6744
    PUSH ECX                            ; 004f674a
    PUSH EDX                            ; 004f674b | DAT_01d0b398
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f674c
    PUSH ESI                            ; 004f6750
    MOV dword ptr [0x01d09b94],EBX      ; 004f6751 | DAT_01d09b94
    CALL FUN_004f6220                   ; 004f6757
        ;   XREF to: 004f6220 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6220()
    MOV EBX,dword ptr [0x01d09b94]      ; 004f675c | DAT_01d09b94
    ADD ESP,0xc                         ; 004f6762
    INC EBX                             ; 004f6765
    JMP 0x004f671d                      ; 004f6766
        ;   XREF to: 004f671d (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV ESI,EBX                         ; 004f6768
        ;   Label: caseD_2
    SHL ESI,0x6                         ; 004f676a
    MOV ECX,0x10                        ; 004f676d
    LEA EDI,[ESI + 0x1d0bb98]           ; 004f6772
    MOV ESI,EDX                         ; 004f6778
    INC EBX                             ; 004f677a
    MOVSD.REP ES:EDI,ESI                ; 004f677b | DAT_01d0b398 | DAT_01d0bb98 | DAT_01d0b39c
    MOV ECX,EBX                         ; 004f677d
    SHL ECX,0x6                         ; 004f677f
    ADD ECX,0x1d0bb98                   ; 004f6782
    PUSH ECX                            ; 004f6788
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f6789
    PUSH ECX                            ; 004f678d
    PUSH EDX                            ; 004f678e | DAT_01d0b398
    MOV dword ptr [0x01d09b94],EBX      ; 004f678f | DAT_01d09b94
    CALL FUN_004f6220                   ; 004f6795
        ;   XREF to: 004f6220 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6220()
    MOV EBX,dword ptr [0x01d09b94]      ; 004f679a | DAT_01d09b94
    ADD ESP,0xc                         ; 004f67a0
    INC EBX                             ; 004f67a3
    JMP 0x004f671d                      ; 004f67a4
        ;   XREF to: 004f671d (UNCONDITIONAL_JUMP)  ; caseD_3

