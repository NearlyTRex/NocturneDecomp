; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005651b2(int param_1,uint param_2)
;
;
; Called Functions:
;   crt_fstream.cpp_ofstream_dtor_FUN_005651ca
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005651b2
        ;   Label: crt_unknown.c_FUN_005651b2
    MOV ECX,dword ptr [ESP + 0x8]       ; 005651b6
    MOV EDX,dword ptr [EAX + -0x4]      ; 005651ba
    PUSH ECX                            ; 005651bd
    SUB EAX,EDX                         ; 005651be
    PUSH EAX                            ; 005651c0
    CALL crt_fstream.cpp_ofstream_dtor_FUN_005651ca ; 005651c1
        ;   XREF to: 005651ca (UNCONDITIONAL_CALL)  ; ofstream * crt_fstream.cpp_ofstream_dtor_FUN_005651ca(void * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005651c6
    RET                                 ; 005651c9

