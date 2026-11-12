; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tvbat_cpp_FUN_00576230(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02cfd900
;   undefined4 DAT_02cfd904
;   undefined4 DAT_02cfd908
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00576230
        ;   Label: core_tvbat.cpp_FUN_00576230
    MOV dword ptr [0x02cfd904],EDX      ; 00576232 | DAT_02cfd904
    MOV dword ptr [0x02cfd908],EDX      ; 00576238 | DAT_02cfd908
    MOV dword ptr [0x02cfd900],EDX      ; 0057623e | DAT_02cfd900
    RET                                 ; 00576244

