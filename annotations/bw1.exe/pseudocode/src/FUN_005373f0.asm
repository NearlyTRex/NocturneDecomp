; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005373f0(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005373f0
        ;   Label: FUN_005373f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005373f1
    CMP dword ptr [EBX + 0x440],0x0     ; 005373f5
    JNZ 0x00537402                      ; 005373fc
        ;   XREF to: 00537402 (CONDITIONAL_JUMP)  ; LAB_00537402
    XOR EAX,EAX                         ; 005373fe
    POP EBX                             ; 00537400
    RET                                 ; 00537401
    LEA EAX,[EBX + 0x158]               ; 00537402
        ;   Label: LAB_00537402
    PUSH EAX                            ; 00537408
    CALL FUN_00468900                   ; 00537409
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    MOV ECX,dword ptr [EAX + 0x358]     ; 0053740e
    ADD ESP,0x4                         ; 00537414
    TEST ECX,ECX                        ; 00537417
    JZ 0x00537428                       ; 00537419
        ;   XREF to: 00537428 (CONDITIONAL_JUMP)  ; LAB_00537428
    MOV EAX,dword ptr [ESP + 0xc]       ; 0053741b
    ADD EBX,0x158                       ; 0053741f
    MOV dword ptr [EAX + 0x24],EBX      ; 00537425
    MOV EAX,0x1                         ; 00537428
        ;   Label: LAB_00537428
    POP EBX                             ; 0053742d
    RET                                 ; 0053742e

