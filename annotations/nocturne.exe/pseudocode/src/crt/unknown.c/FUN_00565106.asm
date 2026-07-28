; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00565106(int param_1,uint param_2)
;
;
; Called Functions:
;   crt_fstream.cpp_ifstream_dtor_FUN_00565264
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00565106
        ;   Label: crt_unknown.c_FUN_00565106
    MOV ECX,dword ptr [ESP + 0x8]       ; 0056510a
    MOV EDX,dword ptr [EAX + -0x4]      ; 0056510e
    PUSH ECX                            ; 00565111
    SUB EAX,EDX                         ; 00565112
    PUSH EAX                            ; 00565114
    CALL crt_fstream.cpp_ifstream_dtor_FUN_00565264 ; 00565115
        ;   XREF to: 00565264 (UNCONDITIONAL_CALL)  ; ifstream * crt_fstream.cpp_ifstream_dtor_FUN_00565264(void * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0056511a
    RET                                 ; 0056511d

