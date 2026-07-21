; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056519c(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   crt_fstream.cpp_ofstream_dtor_FUN_005651ca
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056519c
        ;   Label: FUN_0056519c
    MOV EDX,dword ptr [ESP + 0x8]       ; 005651a0
    PUSH EDX                            ; 005651a4
    SUB EAX,0x44                        ; 005651a5
    PUSH EAX                            ; 005651a8
    CALL crt_fstream.cpp_ofstream_dtor_FUN_005651ca ; 005651a9
        ;   XREF to: 005651ca (UNCONDITIONAL_CALL)  ; undefined crt_fstream.cpp_ofstream_dtor_FUN_005651ca()
    ADD ESP,0x8                         ; 005651ae
    RET                                 ; 005651b1

