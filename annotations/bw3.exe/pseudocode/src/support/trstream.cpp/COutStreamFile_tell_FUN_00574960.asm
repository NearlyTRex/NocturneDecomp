; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_trstream_cpp_COutStreamFile_tell_FUN_00574960(COutStreamFile *this_ptr)
;
; Parameters:
; COutStreamFile * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_stdio.c_ftell_FUN_005a5d00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00574960
        ;   Label: support_trstream.cpp_COutStreamFile_tell_FUN_00574960
    MOV EDX,dword ptr [EAX + 0x4]       ; 00574964
    TEST EDX,EDX                        ; 00574967
    JNZ 0x00574971                      ; 00574969
        ;   XREF to: 00574971 (CONDITIONAL_JUMP)  ; LAB_00574971
    MOV EAX,0xffffffff                  ; 0057496b
    RET                                 ; 00574970
    PUSH EDX                            ; 00574971
        ;   Label: LAB_00574971
    CALL crt_stdio.c_ftell_FUN_005a5d00 ; 00574972
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005a5d00()
    ADD ESP,0x4                         ; 00574977
    RET                                 ; 0057497a

