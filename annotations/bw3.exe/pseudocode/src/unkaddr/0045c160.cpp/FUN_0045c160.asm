; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_0045c160_cpp_FUN_0045c160(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01b4b6a8
;   undefined4 DAT_01b4b6ac
;   undefined4 DAT_01b4b6b0
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0045c160
        ;   Label: unkaddr_0045c160.cpp_FUN_0045c160
    MOV dword ptr [0x01b4b6ac],EDX      ; 0045c162 | DAT_01b4b6ac
    MOV dword ptr [0x01b4b6b0],EDX      ; 0045c168 | DAT_01b4b6b0
    MOV dword ptr [0x01b4b6a8],EDX      ; 0045c16e | DAT_01b4b6a8
    RET                                 ; 0045c174

