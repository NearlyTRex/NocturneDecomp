; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005737d0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_004b5e00 at 004b5e84
;   FUN_004b6e60 at 004b6ec2
;
; Called Functions:
;   FUN_0056fa10
;   FUN_00573e70
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005737d0
        ;   Label: FUN_005737d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005737d2
    PUSH EDX                            ; 005737d6
    CALL FUN_0056fa10                   ; 005737d7
        ;   XREF to: 0056fa10 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fa10()
    ADD ESP,0x8                         ; 005737dc
    TEST EAX,EAX                        ; 005737df
    JNZ 0x005737e4                      ; 005737e1
        ;   XREF to: 005737e4 (CONDITIONAL_JUMP)  ; LAB_005737e4
    RET                                 ; 005737e3
    MOV EDX,dword ptr [ESP + 0x8]       ; 005737e4
        ;   Label: LAB_005737e4
    MOV dword ptr [EAX + 0x1c],EDX      ; 005737e8
    MOV DL,byte ptr [EAX + 0x118]       ; 005737eb
    MOV dword ptr [EAX + 0x20],0x1      ; 005737f1
    OR DL,0x2                           ; 005737f8
    MOV byte ptr [EAX + 0x118],DL       ; 005737fb
    CALL FUN_00573e70                   ; 00573801
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00573e70()
    MOV EAX,0x1                         ; 00573806
    RET                                 ; 0057380b

