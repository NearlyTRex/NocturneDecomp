; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00552890(void)
;
;
; XREF[6]:
;   FUN_004ed260 at 004ed866
;   FUN_00552920 at 00552927
;   FUN_00552980 at 00552988
;   FUN_00552aa0 at 00552ab8
;   FUN_00553680 at 005536ca
;   FUN_00553980 at 005539ae
;
; Referenced Globals:
;   undefined4 DAT_0061bca8
;
; Called Functions:
;   FUN_00551440
;   FUN_005532f0
;   FUN_00557860
;   FUN_00558940
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552890
        ;   Label: FUN_00552890
    MOV EBX,dword ptr [0x0061bca8]      ; 00552891 | DAT_0061bca8
    TEST EBX,EBX                        ; 00552897
    JL 0x005528a5                       ; 00552899
        ;   XREF to: 005528a5 (CONDITIONAL_JUMP)  ; LAB_005528a5
    MOV EAX,EBX                         ; 0055289b
    MOV dword ptr [0x0061bca8],EBX      ; 0055289d | DAT_0061bca8
    POP EBX                             ; 005528a3
    RET                                 ; 005528a4
    PUSH ESI                            ; 005528a5
        ;   Label: LAB_005528a5
    CALL FUN_005532f0                   ; 005528a6
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005532f0()
    CALL FUN_00551440                   ; 005528ab
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined FUN_00551440()
    XOR EBX,EBX                         ; 005528b0
    XOR ESI,ESI                         ; 005528b2
    IMUL EAX,EBX,0x118                  ; 005528b4
        ;   Label: LAB_005528b4
    ADD EAX,0x26485c0                   ; 005528ba
    PUSH EAX                            ; 005528bf
    PUSH ESI                            ; 005528c0
    MOV dword ptr [0x0061bca8],EBX      ; 005528c1 | DAT_0061bca8
    CALL FUN_00558940                   ; 005528c7
        ;   XREF to: 00558940 (UNCONDITIONAL_CALL)  ; undefined FUN_00558940()
    MOV EBX,dword ptr [0x0061bca8]      ; 005528cc | DAT_0061bca8
    ADD ESP,0x8                         ; 005528d2
    TEST EAX,EAX                        ; 005528d5
    JZ 0x005528e0                       ; 005528d7
        ;   XREF to: 005528e0 (CONDITIONAL_JUMP)  ; LAB_005528e0
    INC EBX                             ; 005528d9
    INC ESI                             ; 005528da
    CMP EBX,0x8                         ; 005528db
    JL 0x005528b4                       ; 005528de
        ;   XREF to: 005528b4 (CONDITIONAL_JUMP)  ; LAB_005528b4
    XOR ESI,ESI                         ; 005528e0
        ;   Label: LAB_005528e0
    CMP EBX,0x8                         ; 005528e2
    JGE 0x00552913                      ; 005528e5
        ;   XREF to: 00552913 (CONDITIONAL_JUMP)  ; LAB_00552913
    IMUL EAX,EBX,0x118                  ; 005528e7
        ;   Label: LAB_005528e7
    ADD EAX,0x26485c0                   ; 005528ed
    PUSH EAX                            ; 005528f2
    PUSH ESI                            ; 005528f3
    MOV dword ptr [0x0061bca8],EBX      ; 005528f4 | DAT_0061bca8
    CALL FUN_00557860                   ; 005528fa
        ;   XREF to: 00557860 (UNCONDITIONAL_CALL)  ; undefined FUN_00557860()
    MOV EBX,dword ptr [0x0061bca8]      ; 005528ff | DAT_0061bca8
    ADD ESP,0x8                         ; 00552905
    TEST EAX,EAX                        ; 00552908
    JZ 0x00552913                       ; 0055290a
        ;   XREF to: 00552913 (CONDITIONAL_JUMP)  ; LAB_00552913
    INC EBX                             ; 0055290c
    INC ESI                             ; 0055290d
    CMP EBX,0x8                         ; 0055290e
    JL 0x005528e7                       ; 00552911
        ;   XREF to: 005528e7 (CONDITIONAL_JUMP)  ; LAB_005528e7
    MOV EAX,EBX                         ; 00552913
        ;   Label: LAB_00552913
    POP ESI                             ; 00552915
    MOV dword ptr [0x0061bca8],EBX      ; 00552916 | DAT_0061bca8
    POP EBX                             ; 0055291c
    RET                                 ; 0055291d

