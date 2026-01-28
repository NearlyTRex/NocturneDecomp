; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack void __watcallStack crt_iostream_cpp_streambuf_initBuffer_FUN_0060b815 (streambuf *this_ptr,char *buffer_ptr,int buffer_size,char *put_start)
;
; Parameters:
; streambuf *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   buffer_ptr
; int              Stack[0xc]:4   buffer_size
; char *           Stack[0x10]:4   put_start
;
; XREF[3]:
;   crt_fstream.cpp_fstreambase_constructor_FUN_00606456 at 006064b3
;   crt_fstream.cpp_fstreambase_ctor_FUN_0060658f at 006065d5
;   crt_strstream.cpp_strstreambase_constructor_FUN_006060fe at 00606166
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0060b8da
        ;   Label: crt_iostream.cpp_streambuf_initBuffer_FUN_0060b815
    MOV dword ptr [EAX],0x0             ; 0060b8de
    MOV dword ptr [EAX + 0x10],0x0      ; 0060b8e4
    MOV dword ptr [EAX + 0xc],0x0       ; 0060b8eb
    MOV dword ptr [EAX + 0x14],0x0      ; 0060b8f2
    MOV dword ptr [EAX + 0x18],0x6      ; 0060b8f9
    MOV dword ptr [EAX + 0x1c],0x0      ; 0060b900
    MOV byte ptr [EAX + 0x24],0x20      ; 0060b907
    MOV dword ptr [EAX + 0x8],0x0       ; 0060b90b
    MOV EDX,dword ptr [ESP + 0x8]       ; 0060b912
    MOV dword ptr [EAX + 0x20],0x0      ; 0060b916
    TEST EDX,EDX                        ; 0060b91d
    JZ 0x0060b929                       ; 0060b91f
        ;   XREF to: 0060b929 (CONDITIONAL_JUMP)  ; LAB_0060b929
    MOV EDX,dword ptr [ESP + 0x8]       ; 0060b921
        ;   Label: LAB_0060b921
    MOV dword ptr [EAX + 0x4],EDX       ; 0060b925
    RET                                 ; 0060b928
    MOV dword ptr [EAX + 0x10],0x1      ; 0060b929
        ;   Label: LAB_0060b929
    JMP 0x0060b921                      ; 0060b930
        ;   XREF to: 0060b921 (UNCONDITIONAL_JUMP)  ; LAB_0060b921

