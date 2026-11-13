; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_3d_c_FUN_00407760(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00407760
        ;   Label: engine_3d.c_FUN_00407760
    MOV EAX,dword ptr [EDX]             ; 00407764
    TEST EAX,EAX                        ; 00407766
    JL 0x0040776f                       ; 00407768
        ;   XREF to: 0040776f (CONDITIONAL_JUMP)  ; LAB_0040776f
    CMP EAX,0x43                        ; 0040776a
    JL 0x00407770                       ; 0040776d
        ;   XREF to: 00407770 (CONDITIONAL_JUMP)  ; LAB_00407770
    RET                                 ; 0040776f
        ;   Label: LAB_0040776f
    PUSH EDX                            ; 00407770
        ;   Label: LAB_00407770
    CALL dword ptr [EAX*0x4 + 0x5f07c4] ; 00407771
    ADD ESP,0x4                         ; 00407778
    RET                                 ; 0040777b

