; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_trstream_cpp_COutStreamFile_tell_FUN_005a1970(COutStreamFile *this_ptr)
;
; Parameters:
; COutStreamFile * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_stdio.c_ftell_FUN_005c2e90
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a1970
        ;   Label: support_trstream.cpp_COutStreamFile_tell_FUN_005a1970
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a1974
    TEST EDX,EDX                        ; 005a1977
    JNZ 0x005a1981                      ; 005a1979
        ;   XREF to: 005a1981 (CONDITIONAL_JUMP)  ; LAB_005a1981
    MOV EAX,0xffffffff                  ; 005a197b
    RET                                 ; 005a1980
    PUSH EDX                            ; 005a1981
        ;   Label: LAB_005a1981
    CALL crt_stdio.c_ftell_FUN_005c2e90 ; 005a1982
        ;   XREF to: 005c2e90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005c2e90()
    ADD ESP,0x4                         ; 005a1987
    RET                                 ; 005a198a

