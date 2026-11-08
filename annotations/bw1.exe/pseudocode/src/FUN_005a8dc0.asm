; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a8dc0(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8dc0
        ;   Label: FUN_005a8dc0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a8dc1
    CMP dword ptr [EAX + 0x7f0],0x0     ; 005a8dc5
    JNZ 0x005a8dd7                      ; 005a8dcc
        ;   XREF to: 005a8dd7 (CONDITIONAL_JUMP)  ; LAB_005a8dd7
    CMP dword ptr [EAX + 0x3b8],0x0     ; 005a8dce
    JZ 0x005a8ddb                       ; 005a8dd5
        ;   XREF to: 005a8ddb (CONDITIONAL_JUMP)  ; LAB_005a8ddb
    XOR EAX,EAX                         ; 005a8dd7
        ;   Label: LAB_005a8dd7
    POP EBX                             ; 005a8dd9
        ;   Label: LAB_005a8dd9
    RET                                 ; 005a8dda
    PUSH 0x5f9136                       ; 005a8ddb
        ;   Label: LAB_005a8ddb
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a8de0
    PUSH EBX                            ; 005a8de4
    CALL FUN_0040c550                   ; 005a8de5
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 005a8dea
    TEST EAX,EAX                        ; 005a8ded
    JZ 0x005a8dd9                       ; 005a8def
        ;   XREF to: 005a8dd9 (CONDITIONAL_JUMP)  ; LAB_005a8dd9
    MOV EAX,0x4                         ; 005a8df1
    POP EBX                             ; 005a8df6
    RET                                 ; 005a8df7

