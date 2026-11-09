; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dpart_cpp_CDemonPart_save_FUN_00466440(CDemonPart *this_ptr)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
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

    MOV EDX,0x5bc130                    ; 00466440
        ;   Label: core_dpart.cpp_CDemonPart_save_FUN_00466440
    MOV ECX,0x132                       ; 00466445
    PUSH 0x5bc142                       ; 0046644a
    MOV dword ptr [0x01d71de0],EDX      ; 0046644f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00466455 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0046645b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00466460
    RET                                 ; 00466463

