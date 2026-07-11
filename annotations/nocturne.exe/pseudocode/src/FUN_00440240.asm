; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00440240(undefined4 param_1,int param_2)
;
;
; XREF[2]:
;   FUN_00440290 at 004403d7
;   FUN_0044e470 at 0044e495
;
; Referenced Globals:
;   undefined4 DAT_007f7370
;   undefined4 DAT_007f7374
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00440240
        ;   Label: FUN_00440240
    MOV ECX,dword ptr [ESP + 0x8]       ; 00440244
    MOV dword ptr [0x007f7370],EDX      ; 00440248 | DAT_007f7370
    TEST ECX,ECX                        ; 0044024e
    JZ 0x00440259                       ; 00440250
        ;   XREF to: 00440259 (CONDITIONAL_JUMP)  ; LAB_00440259
    MOV dword ptr [0x007f7374],EDX      ; 00440252 | DAT_007f7374
    RET                                 ; 00440258
    XOR EDX,EDX                         ; 00440259
        ;   Label: LAB_00440259
    MOV dword ptr [0x007f7374],EDX      ; 0044025b | DAT_007f7374
    RET                                 ; 00440261

