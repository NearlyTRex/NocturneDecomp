; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SSocket * support_trisock_cpp_Socket_copy_FUN_0059c8b0(SSocket *this_ptr,SSocket *other)
;
; Parameters:
; SSocket *        Stack[0x4]:4   this_ptr
; SSocket *        Stack[0x8]:4   other
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EDX,0x5f839b                    ; 0059c8b0
        ;   Label: support_trisock.cpp_Socket_copy_FUN_0059c8b0
    MOV ECX,0x104                       ; 0059c8b5
    PUSH 0x5f83b2                       ; 0059c8ba
    MOV dword ptr [0x01d1d400],EDX      ; 0059c8bf | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0059c8c5 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0059c8cb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0059c8d0
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059c8d3
    RET                                 ; 0059c8d7

