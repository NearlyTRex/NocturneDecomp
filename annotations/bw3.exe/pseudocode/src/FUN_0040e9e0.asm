; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040e9e0(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c790
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040e9e0
        ;   Label: FUN_0040e9e0
    CMP dword ptr [EAX + 0x314],0x0     ; 0040e9e4
    JNZ 0x0040e9f0                      ; 0040e9eb
        ;   XREF to: 0040e9f0 (CONDITIONAL_JUMP)  ; LAB_0040e9f0
    XOR EAX,EAX                         ; 0040e9ed
        ;   Label: LAB_0040e9ed
    RET                                 ; 0040e9ef
    PUSH 0x5b61d1                       ; 0040e9f0
        ;   Label: LAB_0040e9f0
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040e9f5
    PUSH ECX                            ; 0040e9f9
    CALL FUN_0040c790                   ; 0040e9fa
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 0040e9ff
    TEST EAX,EAX                        ; 0040ea02
    JZ 0x0040e9ed                       ; 0040ea04
        ;   XREF to: 0040e9ed (CONDITIONAL_JUMP)  ; LAB_0040e9ed
    MOV EAX,0x1                         ; 0040ea06
    RET                                 ; 0040ea0b

