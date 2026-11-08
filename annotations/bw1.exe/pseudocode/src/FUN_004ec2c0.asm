; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ec2c0(int param_1,int param_2)
;
;
; XREF[5]:
;   FUN_0046bde0 at 0046c0d1
;   FUN_00474400 at 00474678
;   FUN_004c83b0 at 004c852e
;   FUN_005881d0 at 005884c5
;   FUN_005907a0 at 0059095e
;
; Called Functions:
;   FUN_004f7690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ec2c0
        ;   Label: FUN_004ec2c0
    MOV ECX,dword ptr [ESP + 0x8]       ; 004ec2c1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004ec2c5
    SHL EAX,0x3                         ; 004ec2c9
    MOV EDX,EAX                         ; 004ec2cc
    SHL EAX,0x4                         ; 004ec2ce
    SUB EAX,EDX                         ; 004ec2d1
    LEA EBX,[ECX + EAX*0x1]             ; 004ec2d3
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 004ec2d6
    TEST EAX,EAX                        ; 004ec2dc
    JNZ 0x004ec2e2                      ; 004ec2de
        ;   XREF to: 004ec2e2 (CONDITIONAL_JUMP)  ; LAB_004ec2e2
    POP EBX                             ; 004ec2e0
    RET                                 ; 004ec2e1
    PUSH 0x1                            ; 004ec2e2
        ;   Label: LAB_004ec2e2
    PUSH EAX                            ; 004ec2e4
    LEA EAX,[ECX + 0x1fae8]             ; 004ec2e5
    PUSH EAX                            ; 004ec2eb
    CALL FUN_004f7690                   ; 004ec2ec
        ;   XREF to: 004f7690 (UNCONDITIONAL_CALL)  ; undefined FUN_004f7690()
    ADD ESP,0xc                         ; 004ec2f1
    MOV dword ptr [EBX + 0x25b0],0x0    ; 004ec2f4
    POP EBX                             ; 004ec2fe
    RET                                 ; 004ec2ff

