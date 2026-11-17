; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dpart_cpp_CDemonPart_load_FUN_00466410(CDemonPart *this_ptr)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   char* g_CHAR_PTR_01d71de0
;   int g_INT_01d71de4
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,0x5bc0f9                    ; 00466410
        ;   Label: core_dpart.cpp_CDemonPart_load_FUN_00466410
    MOV ECX,0x128                       ; 00466415
    PUSH 0x5bc10b                       ; 0046641a
    MOV dword ptr [0x01d71de0],EDX      ; 0046641f | g_CHAR_PTR_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00466425 | g_INT_01d71de4
    CALL core_main.c_displayErrorAndQuit_FUN_004e4330 ; 0046642b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4330(char * format)
    ADD ESP,0x4                         ; 00466430
    RET                                 ; 00466433

