; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a9288(int param_1)
;
;
; XREF[3]:
;   FUN_005a87bc at 005a88cb
;   FUN_005a8ae8 at 005a8b55
;   FUN_005a8dec at 005a8e86
;
; Called Functions:
;   FUN_005a82a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9288
        ;   Label: FUN_005a9288
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a9289
    MOV EAX,dword ptr [EBX + 0xc]       ; 005a928d
    LEA EDX,[EAX + -0x1]                ; 005a9290
    MOV dword ptr [EBX + 0xc],EDX       ; 005a9293
    TEST EAX,EAX                        ; 005a9296
    JZ 0x005a92ab                       ; 005a9298
        ;   XREF to: 005a92ab (CONDITIONAL_JUMP)  ; LAB_005a92ab
    PUSH EBX                            ; 005a929a
    CALL FUN_005a82a0                   ; 005a929b
        ;   XREF to: 005a82a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a82a0()
    MOV DL,byte ptr [EBX + 0x10]        ; 005a92a0
    ADD ESP,0x4                         ; 005a92a3
    TEST DL,0x2                         ; 005a92a6
    JZ 0x005a92b0                       ; 005a92a9
        ;   XREF to: 005a92b0 (CONDITIONAL_JUMP)  ; LAB_005a92b0
    MOV EAX,0xffffffff                  ; 005a92ab
        ;   Label: LAB_005a92ab
    POP EBX                             ; 005a92b0
        ;   Label: LAB_005a92b0
    RET                                 ; 005a92b1

