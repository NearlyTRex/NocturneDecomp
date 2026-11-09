; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SSocket * support_trisock_cpp_Socket_copy_FUN_0056f8a0(SSocket *this_ptr,SSocket *other)
;
; Parameters:
; SSocket *        Stack[0x4]:4   this_ptr
; SSocket *        Stack[0x8]:4   other
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,0x5d690a                    ; 0056f8a0
        ;   Label: support_trisock.cpp_Socket_copy_FUN_0056f8a0
    MOV ECX,0x104                       ; 0056f8a5
    PUSH 0x5d6921                       ; 0056f8aa
    MOV dword ptr [0x01d71de0],EDX      ; 0056f8af | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0056f8b5 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0056f8bb
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0056f8c0
    MOV EAX,dword ptr [ESP + 0x4]       ; 0056f8c3
    RET                                 ; 0056f8c7

