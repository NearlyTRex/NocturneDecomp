; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004fc770(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH 0x5e69fd                       ; 004fc770
        ;   Label: FUN_004fc770
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fc775
    PUSH EDX                            ; 004fc779
    CALL FUN_0040c550                   ; 004fc77a
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 004fc77f
    TEST EAX,EAX                        ; 004fc782
    JZ 0x004fc78b                       ; 004fc784
        ;   XREF to: 004fc78b (CONDITIONAL_JUMP)  ; LAB_004fc78b
    MOV EAX,0x2                         ; 004fc786
    RET                                 ; 004fc78b
        ;   Label: LAB_004fc78b

