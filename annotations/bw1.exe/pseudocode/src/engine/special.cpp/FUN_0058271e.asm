; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_0058271e(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c833dc
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 0058271e
        ;   Label: engine_special.cpp_FUN_0058271e
    CMP dword ptr [0x01c50948],0x0      ; 00582720 | DAT_01c50948
    JNZ 0x0058272c                      ; 00582727
        ;   XREF to: 0058272c (CONDITIONAL_JUMP)  ; LAB_0058272c
    XOR EAX,EAX                         ; 00582729
    RET                                 ; 0058272b
    CALL dword ptr [0x02c833dc]         ; 0058272c | DAT_02c833dc
        ;   Label: LAB_0058272c
    RET                                 ; 00582732

