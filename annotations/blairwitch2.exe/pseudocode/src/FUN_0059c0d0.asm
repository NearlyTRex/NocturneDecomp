; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0059c0d0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH 0x5ef5c1                       ; 0059c0d0
        ;   Label: FUN_0059c0d0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0059c0d5
    PUSH EDX                            ; 0059c0d9
    CALL FUN_0040c840                   ; 0059c0da
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 0059c0df
    TEST EAX,EAX                        ; 0059c0e2
    JZ 0x0059c0f0                       ; 0059c0e4
        ;   XREF to: 0059c0f0 (CONDITIONAL_JUMP)  ; LAB_0059c0f0
    MOV EAX,0x2                         ; 0059c0e6
    LEA EAX,[EAX]                       ; 0059c0eb
    MOV ECX,ECX                         ; 0059c0ee
    RET                                 ; 0059c0f0
        ;   Label: LAB_0059c0f0

