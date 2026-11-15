; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dpart_cpp_CDemonPart_load_FUN_00479b40(CDemonPart *this_ptr)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EDX,0x5dab82                    ; 00479b40
        ;   Label: core_dpart.cpp_CDemonPart_load_FUN_00479b40
    MOV ECX,0x128                       ; 00479b45
    PUSH 0x5dab94                       ; 00479b4a
    MOV dword ptr [0x01d1d400],EDX      ; 00479b4f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00479b55 | DAT_01d1d404
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 00479b5b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x4                         ; 00479b60
    RET                                 ; 00479b63

