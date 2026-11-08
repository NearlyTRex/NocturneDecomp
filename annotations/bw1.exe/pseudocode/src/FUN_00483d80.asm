; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00483d80(int param_1,int param_2)
;
;
; XREF[17]:
;   FUN_00421670 at 00421725
;   FUN_00436600 at 004366ae
;   FUN_00441800 at 00441835
;   FUN_0044bf20 at 0044c040
;   FUN_004551a0 at 0045521c
;   FUN_00457f70 at 00457fbb
;   FUN_00463460 at 004635ca
;   FUN_004665c0 at 004665f2
;   FUN_004673a0 at 004673df
;   FUN_00484e00 at 00484e76
;   ... and 7 more
;
; Called Functions:
;   FUN_00483d70
;   FUN_0053d7a0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00483d80
        ;   Label: FUN_00483d80
    MOV EDX,dword ptr [ESP + 0xc]       ; 00483d81
    TEST EDX,EDX                        ; 00483d85
    JZ 0x00483dbe                       ; 00483d87
        ;   XREF to: 00483dbe (CONDITIONAL_JUMP)  ; LAB_00483dbe
    MOV EAX,dword ptr [ESP + 0x8]       ; 00483d89
    CMP dword ptr [EAX + 0x18],0x0      ; 00483d8d
    JZ 0x00483dba                       ; 00483d91
        ;   XREF to: 00483dba (CONDITIONAL_JUMP)  ; LAB_00483dba
    PUSH 0x2                            ; 00483d93
    CALL FUN_0053d7a0                   ; 00483d95
        ;   XREF to: 0053d7a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053d7a0()
        ;   Label: LAB_00483d95
    ADD ESP,0x4                         ; 00483d9a
    CMP dword ptr [ESP + 0xc],0x0       ; 00483d9d
    SETZ AL                             ; 00483da2
    AND EAX,0xff                        ; 00483da5
    PUSH EAX                            ; 00483daa
    MOV ESI,dword ptr [ESP + 0xc]       ; 00483dab
    PUSH ESI                            ; 00483daf
    CALL FUN_00483d70                   ; 00483db0
        ;   XREF to: 00483d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00483d70()
    ADD ESP,0x8                         ; 00483db5
    POP ESI                             ; 00483db8
    RET                                 ; 00483db9
    PUSH 0x1                            ; 00483dba
        ;   Label: LAB_00483dba
    JMP 0x00483d95                      ; 00483dbc
        ;   XREF to: 00483d95 (UNCONDITIONAL_JUMP)  ; LAB_00483d95
    PUSH EDX                            ; 00483dbe
        ;   Label: LAB_00483dbe
    JMP 0x00483d95                      ; 00483dbf
        ;   XREF to: 00483d95 (UNCONDITIONAL_JUMP)  ; LAB_00483d95

