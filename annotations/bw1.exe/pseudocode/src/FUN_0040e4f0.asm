; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040e4f0(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c550
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040e4f0
        ;   Label: FUN_0040e4f0
    CMP dword ptr [EAX + 0x314],0x0     ; 0040e4f4
    JNZ 0x0040e500                      ; 0040e4fb
        ;   XREF to: 0040e500 (CONDITIONAL_JUMP)  ; LAB_0040e500
    XOR EAX,EAX                         ; 0040e4fd
        ;   Label: LAB_0040e4fd
    RET                                 ; 0040e4ff
    PUSH 0x5d3251                       ; 0040e500
        ;   Label: LAB_0040e500
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040e505
    PUSH ECX                            ; 0040e509
    CALL FUN_0040c550                   ; 0040e50a
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 0040e50f
    TEST EAX,EAX                        ; 0040e512
    JZ 0x0040e4fd                       ; 0040e514
        ;   XREF to: 0040e4fd (CONDITIONAL_JUMP)  ; LAB_0040e4fd
    MOV EAX,0x1                         ; 0040e516
    RET                                 ; 0040e51b

