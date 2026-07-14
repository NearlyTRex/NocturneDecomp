; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_1000f950(int param_1,undefined4 param_2,int param_3)
;
;
; Called Functions:
;   FUN_1000f8f0
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0xc]       ; 1000f950
        ;   Label: FUN_1000f950
    PUSH ESI                            ; 1000f954
    MOV EAX,dword ptr [ESP + 0x8]       ; 1000f955
    CMP ECX,0xa                         ; 1000f959
    JNZ 0x1000f969                      ; 1000f95c
        ;   XREF to: 1000f969 (CONDITIONAL_JUMP)  ; LAB_1000f969
    TEST EAX,EAX                        ; 1000f95e
    JGE 0x1000f969                      ; 1000f960
        ;   XREF to: 1000f969 (CONDITIONAL_JUMP)  ; LAB_1000f969
    MOV EDX,0x1                         ; 1000f962
    JMP 0x1000f96b                      ; 1000f967
        ;   XREF to: 1000f96b (UNCONDITIONAL_JUMP)  ; LAB_1000f96b
    XOR EDX,EDX                         ; 1000f969
        ;   Label: LAB_1000f969
    MOV ESI,dword ptr [ESP + 0xc]       ; 1000f96b
        ;   Label: LAB_1000f96b
    PUSH EDX                            ; 1000f96f
    PUSH ECX                            ; 1000f970
    PUSH ESI                            ; 1000f971
    PUSH EAX                            ; 1000f972
    CALL FUN_1000f8f0                   ; 1000f973
        ;   XREF to: 1000f8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_1000f8f0()
    ADD ESP,0x10                        ; 1000f978
    MOV EAX,ESI                         ; 1000f97b
    POP ESI                             ; 1000f97d
    RET                                 ; 1000f97e

