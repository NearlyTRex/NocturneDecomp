; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_motion_cpp_FUN_004e08e0(undefined4 param_1)
;
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_00564570
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e08e0
        ;   Label: core_motion.cpp_FUN_004e08e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e08e1
    PUSH EBX                            ; 004e08e5
        ;   Label: LAB_004e08e5
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004e08e6
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 004e08eb
    TEST EAX,EAX                        ; 004e08ee
    JL 0x004e08f7                       ; 004e08f0
        ;   XREF to: 004e08f7 (CONDITIONAL_JUMP)  ; LAB_004e08f7
    CMP EAX,0xa                         ; 004e08f2
    JNZ 0x004e08e5                      ; 004e08f5
        ;   XREF to: 004e08e5 (CONDITIONAL_JUMP)  ; LAB_004e08e5
    POP EBX                             ; 004e08f7
        ;   Label: LAB_004e08f7
    RET                                 ; 004e08f8

