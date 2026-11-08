; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fa9c0(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[8]:
;   FUN_0050a610 at 0050a681
;   FUN_005275c0 at 00527716
;   FUN_00598800 at 00598977
;   FUN_005992f0 at 005994cc
;   FUN_0059a060 at 0059a250
;   FUN_0059aba0 at 0059ad90
;   FUN_0059d7f0 at 0059d99b
;   FUN_0059e130 at 0059e392
;
; Called Functions:
;   FUN_004f9a70
;   FUN_004f9d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fa9c0
        ;   Label: FUN_004fa9c0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fa9c1
    LEA EAX,[EDX*0x4 + 0x0]             ; 004fa9c5
    SUB EAX,EDX                         ; 004fa9cc
    SHL EAX,0x6                         ; 004fa9ce
    ADD EAX,EDX                         ; 004fa9d1
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fa9d3
    SHL EAX,0x3                         ; 004fa9d7
    ADD EBX,EAX                         ; 004fa9da
    PUSH EBX                            ; 004fa9dc
    CALL FUN_004f9a70                   ; 004fa9dd
        ;   XREF to: 004f9a70 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9a70()
    ADD ESP,0x4                         ; 004fa9e2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fa9e5
    PUSH EDX                            ; 004fa9e9
    PUSH EBX                            ; 004fa9ea
    CALL FUN_004f9d90                   ; 004fa9eb
        ;   XREF to: 004f9d90 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9d90()
    ADD ESP,0x8                         ; 004fa9f0
    POP EBX                             ; 004fa9f3
    RET                                 ; 004fa9f4

