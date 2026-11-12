; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_trstream_cpp_COutStreamFile_tell_FUN_0057dd20(COutStreamFile *this_ptr)
;
; Parameters:
; COutStreamFile * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_stdio.c_ftell_FUN_005baab0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0057dd20
        ;   Label: support_trstream.cpp_COutStreamFile_tell_FUN_0057dd20
    MOV EDX,dword ptr [EAX + 0x4]       ; 0057dd24
    TEST EDX,EDX                        ; 0057dd27
    JNZ 0x0057dd31                      ; 0057dd29
        ;   XREF to: 0057dd31 (CONDITIONAL_JUMP)  ; LAB_0057dd31
    MOV EAX,0xffffffff                  ; 0057dd2b
    RET                                 ; 0057dd30
    PUSH EDX                            ; 0057dd31
        ;   Label: LAB_0057dd31
    CALL crt_stdio.c_ftell_FUN_005baab0 ; 0057dd32
        ;   XREF to: 005baab0 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_005baab0(_FILE * file_handle)
    ADD ESP,0x4                         ; 0057dd37
    RET                                 ; 0057dd3a

