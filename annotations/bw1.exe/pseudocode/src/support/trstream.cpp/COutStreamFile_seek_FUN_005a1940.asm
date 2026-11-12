; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool __cdecl support_trstream_cpp_COutStreamFile_seek_FUN_005a1940(COutStreamFile *this_ptr,long param_2,int param_3)
;
; Parameters:
; COutStreamFile * Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
;
; Called Functions:
;   crt_stdio.c_fseek_FUN_005c170c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a1940
        ;   Label: support_trstream.cpp_COutStreamFile_seek_FUN_005a1940
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a1944
    TEST EDX,EDX                        ; 005a1947
    JNZ 0x005a194e                      ; 005a1949
        ;   XREF to: 005a194e (CONDITIONAL_JUMP)  ; LAB_005a194e
    XOR EAX,EAX                         ; 005a194b
    RET                                 ; 005a194d
    PUSH EBX                            ; 005a194e
        ;   Label: LAB_005a194e
    MOV ECX,dword ptr [ESP + 0x10]      ; 005a194f
    PUSH ECX                            ; 005a1953
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a1954
    PUSH EBX                            ; 005a1958
    PUSH EDX                            ; 005a1959
    CALL crt_stdio.c_fseek_FUN_005c170c ; 005a195a
        ;   XREF to: 005c170c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005c170c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 005a195f
    TEST EAX,EAX                        ; 005a1962
    SETZ AL                             ; 005a1964
    AND EAX,0xff                        ; 005a1967
    POP EBX                             ; 005a196c
    RET                                 ; 005a196d

