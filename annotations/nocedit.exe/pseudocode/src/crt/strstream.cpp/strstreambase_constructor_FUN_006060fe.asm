; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl strstreambase * crt_strstream.cpp_strstreambase_constructor_FUN_006060fe(strstreambase * this_ptr, int ctor_flags, char * buffer, int size, char * pstart)
;
; Parameters:
; strstreambase *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   ctor_flags
; char *           Stack[0xc]:4   buffer
; int              Stack[0x10]:4   size
; char *           Stack[0x14]:4   pstart
;
; XREF[2]:
;   crt_strstream.cpp_istrstream_constructor_FUN_005ff524 at 005ff53e
;   crt_strstream.cpp_ostrstream_ctor_FUN_005ff384 at 005ff3c3
;
; Referenced Globals:
;   strstreambuf_vtable g_StrstreambufVTable
;   WatcomVirtualBaseDescriptor DAT_00665d60
;   void* g_StrStreamBase_Destructor = 006062a6
;   void* g_StrStreamBase_IOSDestructor = 0060618a
;
; Called Functions:
;   crt_iostream.cpp_ios_ctor_FUN_006061fc
;   crt_iostream.cpp_streambuf_constructor_FUN_0060b7c2
;   crt_iostream.cpp_streambuf_initBuffer_FUN_0060b815
;   crt_strstream.cpp_strstreambuf_init_FUN_0060b815
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006060fe
        ;   Label: crt_strstream.cpp_strstreambase_constructor_FUN_006060fe
    PUSH ESI                            ; 006060ff
    MOV EBX,dword ptr [ESP + 0xc]       ; 00606100
    TEST byte ptr [ESP + 0x10],0x1      ; 00606104
    JZ 0x00606173                       ; 00606109 | LAB_00606173
        ;   XREF to: 00606173 (CONDITIONAL_JUMP)
    ADD EBX,0x4                         ; 0060610b
        ;   Label: LAB_0060610b
    PUSH EBX                            ; 0060610e
    CALL crt_iostream.cpp_streambuf_constructor_FUN_0060b7c2 ; 0060610f | streambuf * crt_iostream.cpp_streambuf_constructor_FUN_0060b7c2(streambuf * this_ptr)
        ;   XREF to: 0060b7c2 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00606114
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00606117
    PUSH EDX                            ; 0060611b
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0060611c
    PUSH ECX                            ; 00606120
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00606121
    PUSH ESI                            ; 00606125
    MOV EBX,EAX                         ; 00606126
    PUSH EAX                            ; 00606128
    SUB EBX,0x4                         ; 00606129
    MOV dword ptr [EAX + 0x28],0x665d34 ; 0060612c | strstreambuf_vtable g_StrstreambufVTable
    CALL crt_strstream.cpp_strstreambuf_init_FUN_0060b815 ; 00606133 | void crt_strstream.cpp_strstreambuf_init_FUN_0060b815(strstreambuf * this_ptr, char * buffer_ptr, int buffer_size, char * put_start)
        ;   XREF to: 0060b815 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBX]             ; 00606138
    MOV EAX,dword ptr [EAX + 0x4]       ; 0060613a
    LEA EDX,[EBX + EAX*0x1]             ; 0060613d
    MOV dword ptr [EDX + -0x4],EAX      ; 00606140
    MOV EAX,dword ptr [EBX]             ; 00606143
    MOV dword ptr [EBX + 0x44],0x665d6c ; 00606145 | void * g_StrStreamBase_Destructor
    MOV EAX,dword ptr [EAX + 0x4]       ; 0060614c
    ADD ESP,0x10                        ; 0060614f
    MOV dword ptr [EBX + EAX*0x1 + 0x28],0x665d74 ; 00606152 | void * g_StrStreamBase_IOSDestructor
    LEA EAX,[EBX + 0x4]                 ; 0060615a
    PUSH EAX                            ; 0060615d
    MOV EAX,dword ptr [EBX]             ; 0060615e
    MOV EAX,dword ptr [EAX + 0x4]       ; 00606160
    ADD EAX,EBX                         ; 00606163
    PUSH EAX                            ; 00606165
    CALL crt_iostream.cpp_streambuf_initBuffer_FUN_0060b815 ; 00606166 | void crt_iostream.cpp_streambuf_initBuffer_FUN_0060b815(streambuf * this_ptr, char * buffer_ptr, int buffer_size, char * put_start)
        ;   XREF to: 0060b8da (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0060616b
    MOV EAX,EBX                         ; 0060616e
    POP ESI                             ; 00606170
    POP EBX                             ; 00606171
    RET                                 ; 00606172
    MOV dword ptr [EBX],0x665d60        ; 00606173 | WatcomVirtualBaseDescriptor DAT_00665d60
        ;   Label: LAB_00606173
    ADD EBX,0x4c                        ; 00606179
    PUSH EBX                            ; 0060617c
    CALL crt_iostream.cpp_ios_ctor_FUN_006061fc ; 0060617d | ios * crt_iostream.cpp_ios_ctor_FUN_006061fc(ios * this_ptr)
        ;   XREF to: 006061fc (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00606182
    LEA EBX,[EAX + -0x4c]               ; 00606185
    JMP 0x0060610b                      ; 00606188 | LAB_0060610b
        ;   XREF to: 0060610b (UNCONDITIONAL_JUMP)

