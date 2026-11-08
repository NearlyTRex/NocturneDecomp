; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00424b50(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_00522350 at 005281a3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00424b50
        ;   Label: FUN_00424b50
    MOV EDX,dword ptr [ESP + 0xc]       ; 00424b54
    MOV ECX,dword ptr [ESP + 0x10]      ; 00424b58
    MOV dword ptr [EAX + 0x109d0],ECX   ; 00424b5c
    MOV ECX,dword ptr [ESP + 0x8]       ; 00424b62
    MOV dword ptr [EAX + 0x109cc],0x0   ; 00424b66
    TEST ECX,ECX                        ; 00424b70
    JNZ 0x00424b7b                      ; 00424b72
        ;   XREF to: 00424b7b (CONDITIONAL_JUMP)  ; LAB_00424b7b
    MOV dword ptr [EAX + 0x109c0],EDX   ; 00424b74
    RET                                 ; 00424b7a
    MOV dword ptr [EAX + 0x109c4],EDX   ; 00424b7b
        ;   Label: LAB_00424b7b
    RET                                 ; 00424b81

