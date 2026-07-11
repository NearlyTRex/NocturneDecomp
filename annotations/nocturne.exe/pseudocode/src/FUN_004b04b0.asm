; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b04b0(void)
;
;
; XREF[1]:
;   FUN_004a3660 at 004a3686
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b96d4
;   undefined4 DAT_005b96ec
;   undefined4 DAT_005b9704
;   undefined4 DAT_005b974c
;   undefined4 DAT_005b9764
;   undefined4 DAT_005b98cc
;   undefined4 DAT_005b9d4c
;   undefined4 DAT_005b9d64
;   undefined4 DAT_005ba004
;   undefined4 DAT_005ba84c
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   FUN_00461eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b04b0
        ;   Label: FUN_004b04b0
    PUSH ESI                            ; 004b04b1
    PUSH EDI                            ; 004b04b2
    PUSH EBP                            ; 004b04b3
    PUSH 0x5b96d4                       ; 004b04b4 | DAT_005b96d4
    MOV EDX,dword ptr [0x005ae704]      ; 004b04b9 | DAT_005ae704
    PUSH EDX                            ; 004b04bf | DAT_01b4d738
    MOV EBX,0x5b96ec                    ; 004b04c0 | DAT_005b96ec
    CALL FUN_00461eb0                   ; 004b04c5
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00461eb0()
    LEA ESI,[EBX + 0x60]                ; 004b04ca | DAT_005b974c
    ADD ESP,0x8                         ; 004b04cd
    PUSH EBX                            ; 004b04d0 | DAT_005b96ec | DAT_005b9704
        ;   Label: LAB_004b04d0
    MOV ECX,dword ptr [0x005ae704]      ; 004b04d1 | DAT_005ae704
    PUSH ECX                            ; 004b04d7 | DAT_01b4d738
    CALL FUN_00461eb0                   ; 004b04d8
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00461eb0()
    ADD EBX,0x18                        ; 004b04dd
    ADD ESP,0x8                         ; 004b04e0
    CMP EBX,ESI                         ; 004b04e3
    JNZ 0x004b04d0                      ; 004b04e5
        ;   XREF to: 004b04d0 (CONDITIONAL_JUMP)  ; LAB_004b04d0
    MOV EBP,0x5b974c                    ; 004b04e7 | DAT_005b974c
    XOR EDI,EDI                         ; 004b04ec
    ADD EBP,0x180                       ; 004b04ee
    IMUL EBX,EDI,0x180                  ; 004b04f4
        ;   Label: LAB_004b04f4
    MOV ESI,EBP                         ; 004b04fa
    ADD EBX,0x5b974c                    ; 004b04fc | DAT_005b974c
    PUSH EBX                            ; 004b0502 | DAT_005b974c | DAT_005b9764 | DAT_005b98cc
        ;   Label: LAB_004b0502
    MOV EAX,[0x005ae704]                ; 004b0503 | DAT_005ae704
    PUSH EAX                            ; 004b0508 | DAT_01b4d738
    CALL FUN_00461eb0                   ; 004b0509
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00461eb0()
    ADD EBX,0x18                        ; 004b050e
    ADD ESP,0x8                         ; 004b0511
    CMP EBX,ESI                         ; 004b0514
    JNZ 0x004b0502                      ; 004b0516
        ;   XREF to: 004b0502 (CONDITIONAL_JUMP)  ; LAB_004b0502
    INC EDI                             ; 004b0518
    ADD EBP,0x180                       ; 004b0519
    CMP EDI,0x4                         ; 004b051f
    JL 0x004b04f4                       ; 004b0522
        ;   XREF to: 004b04f4 (CONDITIONAL_JUMP)  ; LAB_004b04f4
    MOV EBP,0x5b9d4c                    ; 004b0524 | DAT_005b9d4c
    XOR EDI,EDI                         ; 004b0529
    ADD EBP,0x2b8                       ; 004b052b
    IMUL EBX,EDI,0x2b8                  ; 004b0531
        ;   Label: LAB_004b0531
    MOV ESI,EBP                         ; 004b0537
    ADD EBX,0x5b9d4c                    ; 004b0539 | DAT_005b9d4c
    PUSH EBX                            ; 004b053f | DAT_005b9d4c | DAT_005b9d64 | DAT_005ba004
        ;   Label: LAB_004b053f
    MOV EDX,dword ptr [0x005ae704]      ; 004b0540 | DAT_005ae704
    PUSH EDX                            ; 004b0546 | DAT_01b4d738
    CALL FUN_00461eb0                   ; 004b0547
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00461eb0()
    ADD EBX,0x18                        ; 004b054c
    ADD ESP,0x8                         ; 004b054f
    CMP EBX,ESI                         ; 004b0552
    JNZ 0x004b053f                      ; 004b0554
        ;   XREF to: 004b053f (CONDITIONAL_JUMP)  ; LAB_004b053f
    INC EDI                             ; 004b0556
    ADD EBP,0x2b8                       ; 004b0557
    CMP EDI,0x4                         ; 004b055d
    JL 0x004b0531                       ; 004b0560
        ;   XREF to: 004b0531 (CONDITIONAL_JUMP)  ; LAB_004b0531
    PUSH 0x5ba84c                       ; 004b0562 | DAT_005ba84c
    MOV ECX,dword ptr [0x005ae704]      ; 004b0567 | DAT_005ae704
    PUSH ECX                            ; 004b056d | DAT_01b4d738
    CALL FUN_00461eb0                   ; 004b056e
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00461eb0()
    ADD ESP,0x8                         ; 004b0573
    POP EBP                             ; 004b0576
    POP EDI                             ; 004b0577
    POP ESI                             ; 004b0578
    POP EBX                             ; 004b0579
    RET                                 ; 004b057a

