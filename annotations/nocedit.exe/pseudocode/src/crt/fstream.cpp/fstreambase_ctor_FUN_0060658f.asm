; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; fstreambase * __cdecl crt_fstream_cpp_fstreambase_ctor_FUN_0060658f(fstreambase *this_ptr,uint c1)
;
; Parameters:
; fstreambase *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   c1
;
; XREF[2]:
;   crt_fstream.cpp_ifstream_ctor_FUN_005ff8f0 at 005ff8fe
;   crt_fstream.cpp_ofstream_ctor_FUN_005ff95c at 005ff96a
;
; Referenced Globals:
;   WatcomVirtualBaseDescriptor g_FStreamBase_VirtualBaseLayout
;   void* g_FStreamBase_Destructor = 00606509
;   void* g_FStreamBase_IOSDestructor = 006064f1
;
; Called Functions:
;   crt_fstream.cpp_filebuf_ctor_FUN_0060bddd
;   crt_iostream.cpp_ios_ctor_FUN_006061fc
;   crt_iostream.cpp_streambuf_initBuffer_FUN_0060b815
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060658f
        ;   Label: crt_fstream.cpp_fstreambase_ctor_FUN_0060658f
    MOV EBX,dword ptr [ESP + 0x8]       ; 00606590
    TEST byte ptr [ESP + 0xc],0x1       ; 00606594
    JZ 0x006065e1                       ; 00606599
        ;   XREF to: 006065e1 (CONDITIONAL_JUMP)  ; LAB_006065e1
    ADD EBX,0x4                         ; 0060659b
        ;   Label: LAB_0060659b
    PUSH EBX                            ; 0060659e
    CALL crt_fstream.cpp_filebuf_ctor_FUN_0060bddd ; 0060659f
        ;   XREF to: 0060bddd (UNCONDITIONAL_CALL)  ; filebuf * crt_fstream.cpp_filebuf_ctor_FUN_0060bddd(filebuf * this_ptr)
    LEA EBX,[EAX + -0x4]                ; 006065a4
    MOV EDX,dword ptr [EBX]             ; 006065a7
    MOV EDX,dword ptr [EDX + 0x4]       ; 006065a9
    LEA EAX,[EBX + EDX*0x1]             ; 006065ac
    MOV dword ptr [EAX + -0x4],EDX      ; 006065af
    MOV EAX,dword ptr [EBX]             ; 006065b2
    MOV dword ptr [EBX + 0x40],0x665ed4 ; 006065b4 | g_FStreamBase_Destructor
    MOV EAX,dword ptr [EAX + 0x4]       ; 006065bb
    ADD ESP,0x4                         ; 006065be
    MOV dword ptr [EBX + EAX*0x1 + 0x28],0x665edc ; 006065c1 | g_FStreamBase_IOSDestructor
    LEA EAX,[EBX + 0x4]                 ; 006065c9
    PUSH EAX                            ; 006065cc
    MOV EAX,dword ptr [EBX]             ; 006065cd
    MOV EAX,dword ptr [EAX + 0x4]       ; 006065cf
    ADD EAX,EBX                         ; 006065d2
    PUSH EAX                            ; 006065d4
    CALL crt_iostream.cpp_streambuf_initBuffer_FUN_0060b815 ; 006065d5
        ;   XREF to: 0060b8da (UNCONDITIONAL_CALL)  ; void crt_iostream.cpp_streambuf_initBuffer_FUN_0060b815(streambuf * this_ptr, char * buffer_ptr)
    ADD ESP,0x8                         ; 006065da
    MOV EAX,EBX                         ; 006065dd
    POP EBX                             ; 006065df
    RET                                 ; 006065e0
    MOV dword ptr [EBX],0x665ec8        ; 006065e1 | g_FStreamBase_VirtualBaseLayout
        ;   Label: LAB_006065e1
    ADD EBX,0x48                        ; 006065e7
    PUSH EBX                            ; 006065ea
    CALL crt_iostream.cpp_ios_ctor_FUN_006061fc ; 006065eb
        ;   XREF to: 006061fc (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_ctor_FUN_006061fc(ios * this_ptr)
    ADD ESP,0x4                         ; 006065f0
    LEA EBX,[EAX + -0x48]               ; 006065f3
    JMP 0x0060659b                      ; 006065f6
        ;   XREF to: 0060659b (UNCONDITIONAL_JUMP)  ; LAB_0060659b

