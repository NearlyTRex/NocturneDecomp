; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d90a0(int param_1,undefined4 param_2)
;
;
; XREF[9]:
;   FUN_0047a390 at 0047a465
;   FUN_004a4170 at 004a4865
;   FUN_004b6770 at 004b6846
;   FUN_004d8aa0 at 004d8b9f
;   FUN_004d9680 at 004d96e4
;   FUN_004d9c20 at 004d9cbe
;   FUN_004fe180 at 004fe2a9
;   FUN_00505200 at 00505266
;   FUN_00547b30 at 00547c56
;
; Called Functions:
;   FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d90a0
        ;   Label: FUN_004d90a0
    PUSH ESI                            ; 004d90a1
    MOV ESI,dword ptr [ESP + 0x10]      ; 004d90a2
    MOV EBX,dword ptr [ESP + 0xc]       ; 004d90a6
    MOV EBX,dword ptr [EBX + 0x514]     ; 004d90aa
    TEST EBX,EBX                        ; 004d90b0
    JZ 0x004d90cc                       ; 004d90b2
        ;   XREF to: 004d90cc (CONDITIONAL_JUMP)  ; LAB_004d90cc
    PUSH ESI                            ; 004d90b4
        ;   Label: LAB_004d90b4
    PUSH EBX                            ; 004d90b5
    CALL FUN_00564520                   ; 004d90b6
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined FUN_00564520()
    ADD ESP,0x8                         ; 004d90bb
    TEST EAX,EAX                        ; 004d90be
    JZ 0x004d90d1                       ; 004d90c0
        ;   XREF to: 004d90d1 (CONDITIONAL_JUMP)  ; LAB_004d90d1
    MOV EBX,dword ptr [EBX + 0x144]     ; 004d90c2
    TEST EBX,EBX                        ; 004d90c8
    JNZ 0x004d90b4                      ; 004d90ca
        ;   XREF to: 004d90b4 (CONDITIONAL_JUMP)  ; LAB_004d90b4
    XOR EAX,EAX                         ; 004d90cc
        ;   Label: LAB_004d90cc
    POP ESI                             ; 004d90ce
    POP EBX                             ; 004d90cf
    RET                                 ; 004d90d0
    MOV EAX,EBX                         ; 004d90d1
        ;   Label: LAB_004d90d1
    POP ESI                             ; 004d90d3
    POP EBX                             ; 004d90d4
    RET                                 ; 004d90d5

