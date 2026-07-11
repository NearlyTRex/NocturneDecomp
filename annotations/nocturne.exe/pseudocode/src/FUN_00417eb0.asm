; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00417eb0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b96c4
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   FUN_0040dea0
;   FUN_004b00f0
;
; *****************************************************************************

section .text

    PUSH 0x3da3d70a                     ; 00417eb0
        ;   Label: FUN_00417eb0
    CALL FUN_0040dea0                   ; 00417eb5
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dea0()
    ADD ESP,0x4                         ; 00417eba
    TEST EAX,EAX                        ; 00417ebd
    JNZ 0x00417ec2                      ; 00417ebf
        ;   XREF to: 00417ec2 (CONDITIONAL_JUMP)  ; LAB_00417ec2
    RET                                 ; 00417ec1
    MOV EAX,dword ptr [ESP + 0x4]       ; 00417ec2
        ;   Label: LAB_00417ec2
    MOV EDX,dword ptr [EAX + 0xca0]     ; 00417ec6
    PUSH EDX                            ; 00417ecc
    PUSH 0x2dd1184                      ; 00417ecd | DAT_02dd1184
    ADD EAX,0x20                        ; 00417ed2
    PUSH EAX                            ; 00417ed5
    MOV ECX,dword ptr [0x005b96c4]      ; 00417ed6 | DAT_005b96c4
    PUSH ECX                            ; 00417edc
    CALL FUN_004b00f0                   ; 00417edd
        ;   XREF to: 004b00f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b00f0()
    ADD ESP,0x10                        ; 00417ee2
    RET                                 ; 00417ee5

