; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051d9d0(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5)
;
;
; XREF[3]:
;   FUN_00425c20 at 00425c95
;   FUN_00426e80 at 00427040
;   FUN_004d5860 at 004d5969
;
; Called Functions:
;   FUN_0051a700
;   FUN_0051dad0
;   FUN_0051db20
;   FUN_0051db70
;   FUN_0051dbc0
;   FUN_0051e020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051d9d0
        ;   Label: FUN_0051d9d0
    PUSH ESI                            ; 0051d9d1
    PUSH EDI                            ; 0051d9d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0051d9d3
    MOV EAX,dword ptr [ESP + 0x14]      ; 0051d9d7
    MOV ESI,EAX                         ; 0051d9db
    TEST EAX,EAX                        ; 0051d9dd
    JL 0x0051da17                       ; 0051d9df
        ;   XREF to: 0051da17 (CONDITIONAL_JUMP)  ; LAB_0051da17
    PUSH ESI                            ; 0051d9e1
        ;   Label: LAB_0051d9e1
    PUSH EBX                            ; 0051d9e2
    CALL FUN_0051dad0                   ; 0051d9e3
        ;   XREF to: 0051dad0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051dad0()
    ADD ESP,0x8                         ; 0051d9e8
    CMP dword ptr [ESP + 0x1c],0x0      ; 0051d9eb
    JNZ 0x0051da34                      ; 0051d9f0
        ;   XREF to: 0051da34 (CONDITIONAL_JUMP)  ; LAB_0051da34
    CMP dword ptr [ESP + 0x18],0x0      ; 0051d9f2
    JL 0x0051da40                       ; 0051d9f7
        ;   XREF to: 0051da40 (CONDITIONAL_JUMP)  ; LAB_0051da40
    TEST byte ptr [ESP + 0x19],0x1      ; 0051d9f9
    JZ 0x0051da40                       ; 0051d9fe
        ;   XREF to: 0051da40 (CONDITIONAL_JUMP)  ; LAB_0051da40
    MOV ESI,dword ptr [ESP + 0x20]      ; 0051da00
        ;   Label: LAB_0051da00
    PUSH ESI                            ; 0051da04
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0051da05
    PUSH EDI                            ; 0051da09
    PUSH EBX                            ; 0051da0a
    CALL FUN_0051dbc0                   ; 0051da0b
        ;   XREF to: 0051dbc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051dbc0()
    ADD ESP,0xc                         ; 0051da10
    POP EDI                             ; 0051da13
    POP ESI                             ; 0051da14
    POP EBX                             ; 0051da15
    RET                                 ; 0051da16
    LEA EAX,[EBX + 0x2238]              ; 0051da17
        ;   Label: LAB_0051da17
    PUSH EAX                            ; 0051da1d
    PUSH EBX                            ; 0051da1e
    CALL FUN_0051e020                   ; 0051da1f
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e020()
    ADD ESP,0x4                         ; 0051da24
    PUSH EAX                            ; 0051da27
    CALL FUN_0051a700                   ; 0051da28
        ;   XREF to: 0051a700 (UNCONDITIONAL_CALL)  ; undefined FUN_0051a700()
    ADD ESP,0x8                         ; 0051da2d
    MOV ESI,EAX                         ; 0051da30
    JMP 0x0051d9e1                      ; 0051da32
        ;   XREF to: 0051d9e1 (UNCONDITIONAL_JUMP)  ; LAB_0051d9e1
    PUSH ESI                            ; 0051da34
        ;   Label: LAB_0051da34
    PUSH EBX                            ; 0051da35
    CALL FUN_0051db20                   ; 0051da36
        ;   XREF to: 0051db20 (UNCONDITIONAL_CALL)  ; undefined FUN_0051db20()
    ADD ESP,0x8                         ; 0051da3b
    JMP 0x0051da00                      ; 0051da3e
        ;   XREF to: 0051da00 (UNCONDITIONAL_JUMP)  ; LAB_0051da00
    PUSH ESI                            ; 0051da40
        ;   Label: LAB_0051da40
    PUSH EBX                            ; 0051da41
    CALL FUN_0051db70                   ; 0051da42
        ;   XREF to: 0051db70 (UNCONDITIONAL_CALL)  ; undefined FUN_0051db70()
    ADD ESP,0x8                         ; 0051da47
    JMP 0x0051da00                      ; 0051da4a
        ;   XREF to: 0051da00 (UNCONDITIONAL_JUMP)  ; LAB_0051da00

