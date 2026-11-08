; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c5470(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00600c1c
;   undefined4 DAT_00600c20
;   undefined4 DAT_01cc90b0
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_004c5c60
;   FUN_004c5e10
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004c5470
        ;   Label: FUN_004c5470
    SUB ESP,0xb8                        ; 004c5471
    MOV EBP,dword ptr [ESP + 0xc0]      ; 004c5477
    MOV EAX,dword ptr [EBP + 0x15c]     ; 004c547e
    MOV [0x01cc90b0],EAX                ; 004c5484 | DAT_01cc90b0
    CALL FUN_004c5e10                   ; 004c5489
        ;   XREF to: 004c5e10 (UNCONDITIONAL_CALL)  ; undefined FUN_004c5e10()
    CMP EAX,EBP                         ; 004c548e
    JZ 0x004c5845                       ; 004c5490
        ;   XREF to: 004c5845 (CONDITIONAL_JUMP)  ; LAB_004c5845
    MOV EDX,dword ptr [EAX + 0x15c]     ; 004c5496
    MOV dword ptr [EBP + 0x15c],EDX     ; 004c549c
    FLD float ptr [0x01cc90b0]          ; 004c54a2 | DAT_01cc90b0
        ;   Label: LAB_004c54a2
    FCOMP float ptr [EBP + 0x15c]       ; 004c54a8
    FNSTSW AX                           ; 004c54ae
    SAHF                                ; 004c54b0
    JBE 0x004c54c5                      ; 004c54b1
        ;   XREF to: 004c54c5 (CONDITIONAL_JUMP)  ; LAB_004c54c5
    FLD float ptr [0x00600c20]          ; 004c54b3 | DAT_00600c20
    FSUBR float ptr [0x01cc90b0]        ; 004c54b9 | DAT_01cc90b0
    FSTP float ptr [0x01cc90b0]         ; 004c54bf | DAT_01cc90b0
    PUSH EBP                            ; 004c54c5
        ;   Label: LAB_004c54c5
    CALL FUN_004c5c60                   ; 004c54c6
        ;   XREF to: 004c5c60 (UNCONDITIONAL_CALL)  ; undefined FUN_004c5c60()
    MOV EAX,dword ptr [EBP + 0x158]     ; 004c54cb
    ADD ESP,0x4                         ; 004c54d1
    CMP EAX,0x8                         ; 004c54d4
    JA 0x004c5956                       ; 004c54d7
        ;   XREF to: 004c5956 (CONDITIONAL_JUMP)  ; LAB_004c5956
    JMP dword ptr [EAX*0x4 + 0x4c5448]  ; 004c54dd
    FLD float ptr [ESP + 0xc4]          ; 004c5845
        ;   Label: LAB_004c5845
    FMUL float ptr [0x00600c1c]         ; 004c584c | DAT_00600c1c
    FADD float ptr [EBP + 0x15c]        ; 004c5852
    FST float ptr [EBP + 0x15c]         ; 004c5858
    FCOMP float ptr [0x00600c20]        ; 004c585e | DAT_00600c20
    FNSTSW AX                           ; 004c5864
    SAHF                                ; 004c5866
    JC 0x004c54a2                       ; 004c5867
        ;   XREF to: 004c54a2 (CONDITIONAL_JUMP)  ; LAB_004c54a2
    FLD float ptr [0x00600c20]          ; 004c586d | DAT_00600c20
    FSUBR float ptr [EBP + 0x15c]       ; 004c5873
    FSTP float ptr [EBP + 0x15c]        ; 004c5879
    JMP 0x004c54a2                      ; 004c587f
        ;   XREF to: 004c54a2 (UNCONDITIONAL_JUMP)  ; LAB_004c54a2
    MOV EDX,0x5e0cd7                    ; 004c5956
        ;   Label: LAB_004c5956
    MOV ECX,0x13e                       ; 004c595b
    PUSH 0x5e0cec                       ; 004c5960
    MOV dword ptr [0x01d1d400],EDX      ; 004c5965 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004c596b | DAT_01d1d404
    CALL FUN_005030e0                   ; 004c5971
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 004c5976
    ADD ESP,0xb8                        ; 004c5979
    POP EBP                             ; 004c597f
    RET                                 ; 004c5980

