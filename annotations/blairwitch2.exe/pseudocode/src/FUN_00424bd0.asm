; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00424bd0(int param_1)
;
;
; XREF[10]:
;   FUN_00413c70 at 00413d29
;   FUN_00415120 at 00415237
;   FUN_00419b80 at 00419c0f
;   FUN_004254b0 at 00425540
;   FUN_00425a00 at 00425a55
;   FUN_004268b0 at 00426919
;   FUN_00464ac0 at 00464bcd
;   FUN_005020c0 at 005021ee
;   FUN_00511980 at 005119f4
;   FUN_0056fe50 at 0056ffda
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_00616494
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01cb6900
;   undefined4 DAT_01cb6b38
;
; Called Functions:
;   FUN_004247f0
;   FUN_00424c80
;   FUN_00425aa0
;   FUN_004264d0
;   FUN_00426730
;   FUN_0046b960
;   FUN_00547170
;   FUN_005b17d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424bd0
        ;   Label: FUN_00424bd0
    PUSH EDI                            ; 00424bd1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00424bd2
    CMP dword ptr [EBX + 0x10224],0x0   ; 00424bd6
    JZ 0x00424c35                       ; 00424bdd
        ;   XREF to: 00424c35 (CONDITIONAL_JUMP)  ; LAB_00424c35
    MOV ECX,dword ptr [0x0060b280]      ; 00424bdf | DAT_0060b280
        ;   Label: LAB_00424bdf
    PUSH ECX                            ; 00424be5 | DAT_01ba5c50
    CALL FUN_0046b960                   ; 00424be6
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 00424beb
    TEST EAX,EAX                        ; 00424bee
    JNZ 0x00424c1a                      ; 00424bf0
        ;   XREF to: 00424c1a (CONDITIONAL_JUMP)  ; LAB_00424c1a
    CMP dword ptr [EBX + 0x2810],0x0    ; 00424bf2
    JNZ 0x00424c04                      ; 00424bf9
        ;   XREF to: 00424c04 (CONDITIONAL_JUMP)  ; LAB_00424c04
    PUSH EBX                            ; 00424bfb
    CALL FUN_004264d0                   ; 00424bfc
        ;   XREF to: 004264d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004264d0()
    ADD ESP,0x4                         ; 00424c01
    FLDZ                                ; 00424c04
        ;   Label: LAB_00424c04
    FCOMP float ptr [EBX + 0x1022c]     ; 00424c06
    FNSTSW AX                           ; 00424c0c
    SAHF                                ; 00424c0e
    JNC 0x00424c1a                      ; 00424c0f
        ;   XREF to: 00424c1a (CONDITIONAL_JUMP)  ; LAB_00424c1a
    PUSH EBX                            ; 00424c11
    CALL FUN_00426730                   ; 00424c12
        ;   XREF to: 00426730 (UNCONDITIONAL_CALL)  ; undefined FUN_00426730()
    ADD ESP,0x4                         ; 00424c17
    PUSH EBX                            ; 00424c1a
        ;   Label: LAB_00424c1a
    CALL FUN_00425aa0                   ; 00424c1b
        ;   XREF to: 00425aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00425aa0()
    MOV EAX,[0x00616494]                ; 00424c20 | DAT_00616494 | DAT_01cb6900
    MOV EDI,dword ptr [EAX + 0x238]     ; 00424c25 | DAT_01cb6b38
    ADD ESP,0x4                         ; 00424c2b
    TEST EDI,EDI                        ; 00424c2e
    JNZ 0x00424c6c                      ; 00424c30
        ;   XREF to: 00424c6c (CONDITIONAL_JUMP)  ; LAB_00424c6c
    POP EDI                             ; 00424c32
    POP EBX                             ; 00424c33
    RET                                 ; 00424c34
    PUSH ESI                            ; 00424c35
        ;   Label: LAB_00424c35
    PUSH EBX                            ; 00424c36
    CALL FUN_004247f0                   ; 00424c37
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004247f0()
    ADD ESP,0x4                         ; 00424c3c
    PUSH 0x0                            ; 00424c3f
    PUSH 0x1                            ; 00424c41
    PUSH -0x1                           ; 00424c43
    PUSH -0x1                           ; 00424c45
    LEA ESI,[EBX + 0x2b4]               ; 00424c47
    PUSH ESI                            ; 00424c4d
    CALL FUN_00547170                   ; 00424c4e
        ;   XREF to: 00547170 (UNCONDITIONAL_CALL)  ; undefined FUN_00547170()
    ADD ESP,0x14                        ; 00424c53
    PUSH ESI                            ; 00424c56
    LEA EAX,[EBX + 0x2d0c]              ; 00424c57
    PUSH EAX                            ; 00424c5d
    CALL FUN_005b17d0                   ; 00424c5e
        ;   XREF to: 005b17d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b17d0()
    ADD ESP,0x8                         ; 00424c63
    POP ESI                             ; 00424c66
    JMP 0x00424bdf                      ; 00424c67
        ;   XREF to: 00424bdf (UNCONDITIONAL_JUMP)  ; LAB_00424bdf
    PUSH EBX                            ; 00424c6c
        ;   Label: LAB_00424c6c
    CALL FUN_00424c80                   ; 00424c6d
        ;   XREF to: 00424c80 (UNCONDITIONAL_CALL)  ; undefined FUN_00424c80()
    ADD ESP,0x4                         ; 00424c72
    POP EDI                             ; 00424c75
    POP EBX                             ; 00424c76
    RET                                 ; 00424c77

