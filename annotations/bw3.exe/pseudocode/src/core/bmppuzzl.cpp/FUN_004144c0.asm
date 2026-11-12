; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bmppuzzl_cpp_FUN_004144c0(undefined4 param_1)
;
;
; XREF[1]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_dtor_FUN_00411bb0 at 00411bc8
;
; Referenced Globals:
;   WatcomTypeInfo g_buttonStructTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dbf60                       ; 004144c0 | g_buttonStructTypeInfo
        ;   Label: core_bmppuzzl.cpp_FUN_004144c0
    PUSH 0x32                           ; 004144c5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004144c7
    PUSH EDX                            ; 004144cb
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 004144cc
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005a3de6()
    ADD ESP,0xc                         ; 004144d1
    RET                                 ; 004144d4

