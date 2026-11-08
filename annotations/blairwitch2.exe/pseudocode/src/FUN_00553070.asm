; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00553070(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061bcd0
;   undefined4 DAT_0061bcd4
;   undefined4 DAT_0061bcd8
;   undefined4 DAT_02649868
;   undefined4 DAT_0264986c
;   undefined4 DAT_02649870
;
; Called Functions:
;   FUN_00551440
;   FUN_00552f50
;   FUN_00552f60
;   FUN_00552f80
;   FUN_005532f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553070
        ;   Label: FUN_00553070
    PUSH ESI                            ; 00553071
    CALL FUN_00552f50                   ; 00553072
        ;   XREF to: 00552f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00552f50()
    TEST EAX,EAX                        ; 00553077
    JNZ 0x0055307e                      ; 00553079
        ;   XREF to: 0055307e (CONDITIONAL_JUMP)  ; LAB_0055307e
    POP ESI                             ; 0055307b
    POP EBX                             ; 0055307c
    RET                                 ; 0055307d
    CALL FUN_00552f60                   ; 0055307e
        ;   XREF to: 00552f60 (UNCONDITIONAL_CALL)  ; undefined FUN_00552f60()
        ;   Label: LAB_0055307e
    TEST EAX,EAX                        ; 00553083
    JZ 0x0055308f                       ; 00553085
        ;   XREF to: 0055308f (CONDITIONAL_JUMP)  ; LAB_0055308f
    MOV EAX,0x1                         ; 00553087
    POP ESI                             ; 0055308c
    POP EBX                             ; 0055308d
    RET                                 ; 0055308e
    CALL FUN_005532f0                   ; 0055308f
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005532f0()
        ;   Label: LAB_0055308f
    MOV EDX,dword ptr [0x02649870]      ; 00553094 | DAT_02649870
    PUSH EDX                            ; 0055309a
    MOV ECX,dword ptr [0x0061bcd8]      ; 0055309b | DAT_0061bcd8
    PUSH ECX                            ; 005530a1
    MOV EBX,dword ptr [0x0061bcd4]      ; 005530a2 | DAT_0061bcd4
    PUSH EBX                            ; 005530a8
    MOV ESI,dword ptr [0x0061bcd0]      ; 005530a9 | DAT_0061bcd0
    PUSH ESI                            ; 005530af
    CALL FUN_00552f80                   ; 005530b0
        ;   XREF to: 00552f80 (UNCONDITIONAL_CALL)  ; undefined FUN_00552f80()
    ADD ESP,0x10                        ; 005530b5
    TEST EAX,EAX                        ; 005530b8
    JZ 0x005530e5                       ; 005530ba
        ;   XREF to: 005530e5 (CONDITIONAL_JUMP)  ; LAB_005530e5
    MOV EAX,[0x02649868]                ; 005530bc | DAT_02649868
    PUSH EAX                            ; 005530c1
    MOV EDX,dword ptr [EAX]             ; 005530c2
    CALL dword ptr [EDX + 0x4]          ; 005530c4
    ADD ESP,0x4                         ; 005530c7
    TEST EAX,EAX                        ; 005530ca
    JZ 0x005530e5                       ; 005530cc
        ;   XREF to: 005530e5 (CONDITIONAL_JUMP)  ; LAB_005530e5
    PUSH EDI                            ; 005530ce
    MOV EDI,0x1                         ; 005530cf
    MOV dword ptr [0x0264986c],EDI      ; 005530d4 | DAT_0264986c
    CALL FUN_00551440                   ; 005530da
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined FUN_00551440()
    MOV EAX,EDI                         ; 005530df
    POP EDI                             ; 005530e1
    POP ESI                             ; 005530e2
    POP EBX                             ; 005530e3
    RET                                 ; 005530e4
    CALL FUN_00551440                   ; 005530e5
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined FUN_00551440()
        ;   Label: LAB_005530e5
    XOR EAX,EAX                         ; 005530ea
    POP ESI                             ; 005530ec
    POP EBX                             ; 005530ed
    RET                                 ; 005530ee

