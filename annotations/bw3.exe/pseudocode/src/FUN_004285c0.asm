; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004285c0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00427bc0 at 00427e01
;
; Called Functions:
;   FUN_00428520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004285c0
        ;   Label: FUN_004285c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004285c1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004285c5
    PUSH EDX                            ; 004285c9
    PUSH EBX                            ; 004285ca
    CALL FUN_00428520                   ; 004285cb
        ;   XREF to: 00428520 (UNCONDITIONAL_CALL)  ; undefined FUN_00428520()
    ADD ESP,0x8                         ; 004285d0
    TEST EAX,EAX                        ; 004285d3
    JL 0x004285f5                       ; 004285d5
        ;   XREF to: 004285f5 (CONDITIONAL_JUMP)  ; LAB_004285f5
    SHL EAX,0x3                         ; 004285d7
    MOV EDX,EAX                         ; 004285da
    SHL EAX,0x4                         ; 004285dc
    SUB EAX,EDX                         ; 004285df
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x25ac] ; 004285e1
    TEST EAX,EAX                        ; 004285e8
    JL 0x004285f5                       ; 004285ea
        ;   XREF to: 004285f5 (CONDITIONAL_JUMP)  ; LAB_004285f5
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004285ec
    POP EBX                             ; 004285f3
    RET                                 ; 004285f4
    XOR EAX,EAX                         ; 004285f5
        ;   Label: LAB_004285f5
    POP EBX                             ; 004285f7
    RET                                 ; 004285f8

