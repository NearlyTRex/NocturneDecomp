; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flashlit_cpp_FUN_004b9e00(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061d310
;   undefined4 DAT_01cc7f1c
;   undefined4 DAT_01cc7f38
;   undefined4 DAT_01cc8000
;
; *****************************************************************************

section .text

    MOV ECX,0xffffffff                  ; 004b9e00
        ;   Label: core_flashlit.cpp_FUN_004b9e00
    XOR AH,AH                           ; 004b9e05
    XOR EDX,EDX                         ; 004b9e07
    MOV byte ptr [0x01cc7f38],AH        ; 004b9e09 | DAT_01cc7f38
    MOV dword ptr [0x0061d310],ECX      ; 004b9e0f | DAT_0061d310
    MOV dword ptr [0x01cc8000],EDX      ; 004b9e15 | DAT_01cc8000
    MOV dword ptr [0x01cc7f1c],EDX      ; 004b9e1b | DAT_01cc7f1c
    RET                                 ; 004b9e21

