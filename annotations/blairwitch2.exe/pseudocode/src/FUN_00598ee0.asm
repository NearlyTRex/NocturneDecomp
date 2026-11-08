; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00598ee0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_005984e0 at 00598724
;
; Called Functions:
;   FUN_00598e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00598ee0
        ;   Label: FUN_00598ee0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00598ee1
    MOV EDX,dword ptr [ESP + 0xc]       ; 00598ee5
    PUSH EDX                            ; 00598ee9
    PUSH EBX                            ; 00598eea
    CALL FUN_00598e40                   ; 00598eeb
        ;   XREF to: 00598e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00598e40()
    ADD ESP,0x8                         ; 00598ef0
    TEST EAX,EAX                        ; 00598ef3
    JL 0x00598f15                       ; 00598ef5
        ;   XREF to: 00598f15 (CONDITIONAL_JUMP)  ; LAB_00598f15
    SHL EAX,0x3                         ; 00598ef7
    MOV EDX,EAX                         ; 00598efa
    SHL EAX,0x4                         ; 00598efc
    SUB EAX,EDX                         ; 00598eff
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x261c] ; 00598f01
    TEST EAX,EAX                        ; 00598f08
    JL 0x00598f15                       ; 00598f0a
        ;   XREF to: 00598f15 (CONDITIONAL_JUMP)  ; LAB_00598f15
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 00598f0c
    POP EBX                             ; 00598f13
    RET                                 ; 00598f14
    XOR EAX,EAX                         ; 00598f15
        ;   Label: LAB_00598f15
    POP EBX                             ; 00598f17
    RET                                 ; 00598f18

