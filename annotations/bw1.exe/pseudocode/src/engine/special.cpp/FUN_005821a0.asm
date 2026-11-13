; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_005821a0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c833c0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c50948],0x0      ; 005821a0 | DAT_01c50948
        ;   Label: engine_special.cpp_FUN_005821a0
    JNZ 0x005821ac                      ; 005821a7
        ;   XREF to: 005821ac (CONDITIONAL_JUMP)  ; LAB_005821ac
    XOR EAX,EAX                         ; 005821a9
    RET                                 ; 005821ab
    MOV ECX,dword ptr [ESP + 0x4]       ; 005821ac
        ;   Label: LAB_005821ac
    PUSH ECX                            ; 005821b0
    CALL dword ptr [0x02c833c0]         ; 005821b1 | DAT_02c833c0
    ADD ESP,0x4                         ; 005821b7
    RET                                 ; 005821ba

