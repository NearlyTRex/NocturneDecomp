; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_3d_c_FUN_004078f0(int *param_1)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004078f0
        ;   Label: engine_3d.c_FUN_004078f0
    MOV EAX,dword ptr [EDX]             ; 004078f4
    TEST EAX,EAX                        ; 004078f6
    JL 0x004078ff                       ; 004078f8
        ;   XREF to: 004078ff (CONDITIONAL_JUMP)  ; LAB_004078ff
    CMP EAX,0x43                        ; 004078fa
    JL 0x00407900                       ; 004078fd
        ;   XREF to: 00407900 (CONDITIONAL_JUMP)  ; LAB_00407900
    RET                                 ; 004078ff
        ;   Label: LAB_004078ff
    PUSH EDX                            ; 00407900
        ;   Label: LAB_00407900
    CALL dword ptr [EAX*0x4 + 0x6093c4] ; 00407901
    ADD ESP,0x4                         ; 00407908
    RET                                 ; 0040790b

