; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00585190(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585190
        ;   Label: FUN_00585190
    MOV EAX,dword ptr [ESP + 0x8]       ; 00585191
    CMP dword ptr [EAX + 0xaa8],0x0     ; 00585195
    JNZ 0x005851a7                      ; 0058519c
        ;   XREF to: 005851a7 (CONDITIONAL_JUMP)  ; LAB_005851a7
    CMP dword ptr [EAX + 0x514],0x0     ; 0058519e
    JZ 0x005851ab                       ; 005851a5
        ;   XREF to: 005851ab (CONDITIONAL_JUMP)  ; LAB_005851ab
    XOR EAX,EAX                         ; 005851a7
        ;   Label: LAB_005851a7
    POP EBX                             ; 005851a9
        ;   Label: LAB_005851a9
    RET                                 ; 005851aa
    PUSH 0x5eddda                       ; 005851ab
        ;   Label: LAB_005851ab
    MOV EBX,dword ptr [ESP + 0x10]      ; 005851b0
    PUSH EBX                            ; 005851b4
    CALL FUN_0040c840                   ; 005851b5
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 005851ba
    TEST EAX,EAX                        ; 005851bd
    JZ 0x005851a9                       ; 005851bf
        ;   XREF to: 005851a9 (CONDITIONAL_JUMP)  ; LAB_005851a9
    MOV EAX,0x4                         ; 005851c1
    POP EBX                             ; 005851c6
    RET                                 ; 005851c7

