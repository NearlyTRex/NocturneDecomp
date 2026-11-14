; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_passngr_cpp_FUN_0050aba0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01ed02ac
;   undefined4 DAT_01ed02b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01ed02b0]      ; 0050aba0 | DAT_01ed02b0
        ;   Label: core_passngr.cpp_FUN_0050aba0
    MOV EAX,[0x01ed02ac]                ; 0050aba6 | DAT_01ed02ac
    CMP EAX,EDX                         ; 0050abab
    SETZ AL                             ; 0050abad
    AND EAX,0xff                        ; 0050abb0
    RET                                 ; 0050abb5

