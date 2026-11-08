; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0058d020(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Called Functions:
;   FUN_004285f0
;   FUN_005035c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0058d020
        ;   Label: FUN_0058d020
    ADD EAX,0x2b4                       ; 0058d024
    PUSH EAX                            ; 0058d029
    CALL FUN_005035c0                   ; 0058d02a
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0058d02f
    ADD ESP,0x4                         ; 0058d032
    CMP EAX,0x13                        ; 0058d035
    JNZ 0x0058d03b                      ; 0058d038
        ;   XREF to: 0058d03b (CONDITIONAL_JUMP)  ; LAB_0058d03b
    RET                                 ; 0058d03a
    PUSH dword ptr [ESP + 0x10]         ; 0058d03b
        ;   Label: LAB_0058d03b
    MOV EDX,dword ptr [ESP + 0xc]       ; 0058d03f
    PUSH dword ptr [ESP + 0x10]         ; 0058d043
    PUSH EDX                            ; 0058d047
    MOV ECX,dword ptr [ESP + 0x10]      ; 0058d048
    PUSH ECX                            ; 0058d04c
    CALL FUN_004285f0                   ; 0058d04d
        ;   XREF to: 004285f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004285f0()
    ADD ESP,0x10                        ; 0058d052
    RET                                 ; 0058d055

