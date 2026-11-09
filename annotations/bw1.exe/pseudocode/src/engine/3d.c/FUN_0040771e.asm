; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_3d_c_FUN_0040771e(int *param_1)
;
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0040771e
        ;   Label: engine_3d.c_FUN_0040771e
    MOV EDX,dword ptr [ESP + 0x4]       ; 00407720
    MOV EAX,dword ptr [EDX]             ; 00407724
    TEST EAX,EAX                        ; 00407726
    JL 0x0040772f                       ; 00407728
        ;   XREF to: 0040772f (CONDITIONAL_JUMP)  ; LAB_0040772f
    CMP EAX,0x43                        ; 0040772a
    JL 0x00407730                       ; 0040772d
        ;   XREF to: 00407730 (CONDITIONAL_JUMP)  ; LAB_00407730
    RET                                 ; 0040772f
        ;   Label: LAB_0040772f
    PUSH EDX                            ; 00407730
        ;   Label: LAB_00407730
    CALL dword ptr [EAX*0x4 + 0x6104f4] ; 00407731
    ADD ESP,0x4                         ; 00407738
    RET                                 ; 0040773b

