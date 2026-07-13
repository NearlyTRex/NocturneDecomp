; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ushort FUN_0043a980(int param_1,float param_2)
;
;
; XREF[1]:
;   FUN_00439f50 at 00439fb4
;
; Called Functions:
;   FUN_0042add0
;   FUN_004e11c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043a980
        ;   Label: FUN_0043a980
    PUSH ESI                            ; 0043a981
    PUSH EBP                            ; 0043a982
    MOV EBP,ESP                         ; 0043a983
    AND ESP,0xfffffff8                  ; 0043a985
    MOV ESI,dword ptr [EBP + 0x10]      ; 0043a988
    LEA EBX,[ESI + 0x150]               ; 0043a98b
    LEA EAX,[EBP + 0x14]                ; 0043a991
        ;   Label: LAB_0043a991
    PUSH EAX                            ; 0043a994
    PUSH EBX                            ; 0043a995
    CALL FUN_004e11c0                   ; 0043a996
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e11c0()
    ADD ESP,0x8                         ; 0043a99b
    MOV EDX,EAX                         ; 0043a99e
    CMP EAX,0x64                        ; 0043a9a0
    JC 0x0043a9c1                       ; 0043a9a3
        ;   XREF to: 0043a9c1 (CONDITIONAL_JUMP)  ; LAB_0043a9c1
    JA 0x0043a9cd                       ; 0043a9a5
        ;   XREF to: 0043a9cd (CONDITIONAL_JUMP)  ; LAB_0043a9cd
    FLD float ptr [EBP + 0x14]          ; 0043a9a7
        ;   Label: LAB_0043a9a7
    FLDZ                                ; 0043a9aa
    FCOMPP                              ; 0043a9ac
    FNSTSW AX                           ; 0043a9ae
    SAHF                                ; 0043a9b0
    JC 0x0043a991                       ; 0043a9b1
        ;   XREF to: 0043a991 (CONDITIONAL_JUMP)  ; LAB_0043a991
    MOV ESP,EBP                         ; 0043a9b3
    POP EBP                             ; 0043a9b5
    POP ESI                             ; 0043a9b6
    POP EBX                             ; 0043a9b7
    LEA EAX,[EAX]                       ; 0043a9b8
    MOV EDX,EDX                         ; 0043a9be
    RET                                 ; 0043a9c0
    PUSH EDX                            ; 0043a9c1
        ;   Label: LAB_0043a9c1
    PUSH ESI                            ; 0043a9c2
    CALL FUN_0042add0                   ; 0043a9c3
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042add0()
    ADD ESP,0x8                         ; 0043a9c8
    JMP 0x0043a9a7                      ; 0043a9cb
        ;   XREF to: 0043a9a7 (UNCONDITIONAL_JUMP)  ; LAB_0043a9a7
    CMP EAX,0x65                        ; 0043a9cd
        ;   Label: LAB_0043a9cd
    JZ 0x0043a9a7                       ; 0043a9d0
        ;   XREF to: 0043a9a7 (CONDITIONAL_JUMP)  ; LAB_0043a9a7
    PUSH EDX                            ; 0043a9d2
    PUSH ESI                            ; 0043a9d3
    CALL FUN_0042add0                   ; 0043a9d4
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042add0()
    ADD ESP,0x8                         ; 0043a9d9
    JMP 0x0043a9a7                      ; 0043a9dc
        ;   XREF to: 0043a9a7 (UNCONDITIONAL_JUMP)  ; LAB_0043a9a7

