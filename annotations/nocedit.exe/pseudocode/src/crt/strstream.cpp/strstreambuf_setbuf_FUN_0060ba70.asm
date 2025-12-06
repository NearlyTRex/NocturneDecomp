; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack strstreambuf * crt_strstream.cpp_strstreambuf_setbuf_FUN_0060ba70(strstreambuf * this_ptr, char * ignored_buffer, int allocation_size)
;
; Parameters:
; strstreambuf *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   ignored_buffer
; int              Stack[0xc]:4   allocation_size
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0060ba70
        ;   Label: crt_strstream.cpp_strstreambuf_setbuf_FUN_0060ba70
    MOV EDX,dword ptr [ESP + 0xc]       ; 0060ba74
    TEST EDX,EDX                        ; 0060ba78
    JLE 0x0060ba7f                      ; 0060ba7a | LAB_0060ba7f
        ;   XREF to: 0060ba7f (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x34],EDX      ; 0060ba7c
    RET                                 ; 0060ba7f
        ;   Label: LAB_0060ba7f

