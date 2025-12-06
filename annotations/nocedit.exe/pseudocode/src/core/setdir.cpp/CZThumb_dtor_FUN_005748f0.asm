; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CZThumb * core_setdir.cpp_CZThumb_dtor_FUN_005748f0(CZThumb * this_ptr)
;
; Parameters:
; CZThumb *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_setdir.cpp_CZThumb_free_FUN_00574b50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005748f0
        ;   Label: core_setdir.cpp_CZThumb_dtor_FUN_005748f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005748f1
    PUSH EBX                            ; 005748f5
    CALL core_setdir.cpp_CZThumb_free_FUN_00574b50 ; 005748f6 | void core_setdir.cpp_CZThumb_free_FUN_00574b50(CZThumb * this_ptr)
        ;   XREF to: 00574b50 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005748fb
    MOV EAX,EBX                         ; 005748fe
    POP EBX                             ; 00574900
    RET                                 ; 00574901

