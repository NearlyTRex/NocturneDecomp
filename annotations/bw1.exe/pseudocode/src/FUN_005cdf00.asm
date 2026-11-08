; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005cdf00(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005cc9f0 at 005cca43
;
; Called Functions:
;   FUN_005c9080
;   FUN_005c90c0
;   FUN_005c90f0
;   FUN_005c9110
;   FUN_005cc560
;   FUN_005cdec0
;   FUN_005ce990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cdf00
        ;   Label: FUN_005cdf00
    PUSH ESI                            ; 005cdf01
    SUB ESP,0x4                         ; 005cdf02
    MOV ESI,dword ptr [ESP + 0x10]      ; 005cdf05
    MOV EBX,ESI                         ; 005cdf09
    PUSH EBX                            ; 005cdf0b
        ;   Label: LAB_005cdf0b
    CALL FUN_005cc560                   ; 005cdf0c
        ;   XREF to: 005cc560 (UNCONDITIONAL_CALL)  ; undefined FUN_005cc560()
    ADD ESP,0x4                         ; 005cdf11
    TEST EAX,EAX                        ; 005cdf14
    JNZ 0x005cdf5f                      ; 005cdf16
        ;   XREF to: 005cdf5f (CONDITIONAL_JUMP)  ; LAB_005cdf5f
    PUSH EBX                            ; 005cdf18
    CALL FUN_005c9080                   ; 005cdf19
        ;   XREF to: 005c9080 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9080()
    ADD ESP,0x4                         ; 005cdf1e
    PUSH EAX                            ; 005cdf21
    CALL FUN_005ce990                   ; 005cdf22
        ;   XREF to: 005ce990 (UNCONDITIONAL_CALL)  ; undefined FUN_005ce990()
    ADD ESP,0x4                         ; 005cdf27
    MOV EDX,ESP                         ; 005cdf2a
    PUSH EDX                            ; 005cdf2c
    PUSH EAX                            ; 005cdf2d
    CALL FUN_005c90f0                   ; 005cdf2e
        ;   XREF to: 005c90f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c90f0()
    ADD ESP,0x8                         ; 005cdf33
    MOV EAX,ESP                         ; 005cdf36
    PUSH EAX                            ; 005cdf38
    CALL FUN_005c9110                   ; 005cdf39
        ;   XREF to: 005c9110 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9110()
    ADD ESP,0x4                         ; 005cdf3e
    XOR DL,DL                           ; 005cdf41
    MOV byte ptr [ESP + EAX*0x1],DL     ; 005cdf43
    MOV EAX,ESP                         ; 005cdf46
    PUSH EAX                            ; 005cdf48
    PUSH EBX                            ; 005cdf49
    CALL FUN_005cdec0                   ; 005cdf4a
        ;   XREF to: 005cdec0 (UNCONDITIONAL_CALL)  ; undefined FUN_005cdec0()
    ADD ESP,0x8                         ; 005cdf4f
    PUSH EBX                            ; 005cdf52
    CALL FUN_005c90c0                   ; 005cdf53
        ;   XREF to: 005c90c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c90c0()
    MOV EBX,EAX                         ; 005cdf58
    ADD ESP,0x4                         ; 005cdf5a
    JMP 0x005cdf0b                      ; 005cdf5d
        ;   XREF to: 005cdf0b (UNCONDITIONAL_JUMP)  ; LAB_005cdf0b
    MOV EAX,ESI                         ; 005cdf5f
        ;   Label: LAB_005cdf5f
    ADD ESP,0x4                         ; 005cdf61
    POP ESI                             ; 005cdf64
    POP EBX                             ; 005cdf65
    RET                                 ; 005cdf66

