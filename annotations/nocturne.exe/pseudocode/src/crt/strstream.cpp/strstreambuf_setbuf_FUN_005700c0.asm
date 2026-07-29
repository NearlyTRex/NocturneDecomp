; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; strstreambuf * __watcallStack crt_strstream_cpp_strstreambuf_setbuf_FUN_005700c0(strstreambuf *this_ptr,char *ignored_buffer,int allocation_size)
;
; Parameters:
; strstreambuf *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   ignored_buffer
; int              Stack[0xc]:4   allocation_size
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005700c0
        ;   Label: crt_strstream.cpp_strstreambuf_setbuf_FUN_005700c0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005700c4
    TEST EDX,EDX                        ; 005700c8
    JLE 0x005700cf                      ; 005700ca
        ;   XREF to: 005700cf (CONDITIONAL_JUMP)  ; LAB_005700cf
    MOV dword ptr [EAX + 0x34],EDX      ; 005700cc
    RET                                 ; 005700cf
        ;   Label: LAB_005700cf

