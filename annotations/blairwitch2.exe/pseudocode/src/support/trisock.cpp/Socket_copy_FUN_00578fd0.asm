; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SSocket * __cdecl support_trisock_cpp_Socket_copy_FUN_00578fd0(SSocket *this_ptr,SSocket *other)
;
; Parameters:
; SSocket *        Stack[0x4]:4   this_ptr
; SSocket *        Stack[0x8]:4   other
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5ed081                    ; 00578fd0
        ;   Label: support_trisock.cpp_Socket_copy_FUN_00578fd0
    MOV ECX,0x102                       ; 00578fd5
    PUSH 0x5ed098                       ; 00578fda
    MOV dword ptr [0x01d046a0],EDX      ; 00578fdf | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00578fe5 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00578feb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00578ff0
    MOV EAX,dword ptr [ESP + 0x4]       ; 00578ff3
    RET                                 ; 00578ff7

