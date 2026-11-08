; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040e950(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c840
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040e950
        ;   Label: FUN_0040e950
    CMP dword ptr [EAX + 0x470],0x0     ; 0040e954
    JNZ 0x0040e960                      ; 0040e95b
        ;   XREF to: 0040e960 (CONDITIONAL_JUMP)  ; LAB_0040e960
    XOR EAX,EAX                         ; 0040e95d
        ;   Label: LAB_0040e95d
    RET                                 ; 0040e95f
    PUSH 0x5cb2e6                       ; 0040e960
        ;   Label: LAB_0040e960
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040e965
    PUSH ECX                            ; 0040e969
    CALL FUN_0040c840                   ; 0040e96a
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 0040e96f
    TEST EAX,EAX                        ; 0040e972
    JZ 0x0040e95d                       ; 0040e974
        ;   XREF to: 0040e95d (CONDITIONAL_JUMP)  ; LAB_0040e95d
    MOV EAX,0x1                         ; 0040e976
    RET                                 ; 0040e97b

