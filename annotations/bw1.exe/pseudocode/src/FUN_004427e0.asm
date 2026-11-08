; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004427e0(int *param_1,int *param_2)
;
;
; XREF[1]:
;   FUN_00443630 at 00443686
;
; Called Functions:
;   FUN_004427a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004427e0
        ;   Label: FUN_004427e0
    PUSH ESI                            ; 004427e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004427e2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004427e6
    PUSH ESI                            ; 004427ea
    PUSH EBX                            ; 004427eb
    CALL FUN_004427a0                   ; 004427ec
        ;   XREF to: 004427a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004427a0()
    ADD ESP,0x8                         ; 004427f1
    TEST EAX,EAX                        ; 004427f4
    JL 0x004427ff                       ; 004427f6
        ;   XREF to: 004427ff (CONDITIONAL_JUMP)  ; LAB_004427ff
    CMP dword ptr [EBX],0x0             ; 004427f8
    JG 0x00442802                       ; 004427fb
        ;   XREF to: 00442802 (CONDITIONAL_JUMP)  ; LAB_00442802
    XOR EAX,EAX                         ; 004427fd
    POP ESI                             ; 004427ff
        ;   Label: LAB_004427ff
    POP EBX                             ; 00442800
    RET                                 ; 00442801
    XOR EDX,EDX                         ; 00442802
        ;   Label: LAB_00442802
    MOV DL,byte ptr [EBX + 0x4]         ; 00442804
    PUSH EDX                            ; 00442807
    MOV EAX,dword ptr [ESI]             ; 00442808
    PUSH ESI                            ; 0044280a
    CALL dword ptr [EAX + 0x4]          ; 0044280b
    ADD ESP,0x8                         ; 0044280e
    TEST EAX,EAX                        ; 00442811
    JL 0x004427ff                       ; 00442813
        ;   XREF to: 004427ff (CONDITIONAL_JUMP)  ; LAB_004427ff
    MOV dword ptr [EBX],0x0             ; 00442815
    MOV dword ptr [EBX + 0x4],0x0       ; 0044281b
    XOR EAX,EAX                         ; 00442822
    POP ESI                             ; 00442824
    POP EBX                             ; 00442825
    RET                                 ; 00442826

