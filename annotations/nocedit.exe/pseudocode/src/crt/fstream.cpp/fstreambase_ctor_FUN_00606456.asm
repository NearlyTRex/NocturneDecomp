; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_fstream_cpp_fstreambase_ctor_FUN_00606456(fstreambase *this_ptr,int ctor_flags,int fd,int mode,char *buffer,SIZE_T buffer_size )
;
; Parameters:
; fstreambase *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   ctor_flags
; int              Stack[0xc]:4   fd
; int              Stack[0x10]:4   mode
; char *           Stack[0x14]:4   buffer
; SIZE_T           Stack[0x18]:4   buffer_size
;
; XREF[2]:
;   crt_fstream.cpp_ifstream_ctor_FUN_005ff664 at 005ff684
;   crt_fstream.cpp_ofstream_ctor_FUN_005ff710 at 005ff730
;
; Referenced Globals:
;   WatcomVirtualBaseDescriptor g_FStreamBase_VirtualBaseLayout
;   void* g_FStreamBase_Destructor = 00606509
;   void* g_FStreamBase_IOSDestructor = 006064f1
;
; Called Functions:
;   crt_fstream.cpp_filebuf_ctor_FUN_0060bddd
;   crt_fstream.cpp_filebuf_open_FUN_00608c15
;   crt_iostream.cpp_ios_ctor_FUN_006061fc
;   crt_iostream.cpp_streambuf_initBuffer_FUN_0060b815
;   crt_stdio.c_reportStreamError_FUN_00606020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00606456
        ;   Label: crt_fstream.cpp_fstreambase_ctor_FUN_00606456
    PUSH ESI                            ; 00606457
    PUSH EDI                            ; 00606458
    MOV EBX,dword ptr [ESP + 0x10]      ; 00606459
    TEST byte ptr [ESP + 0x14],0x1      ; 0060645d
    JNZ 0x00606479                      ; 00606462
        ;   XREF to: 00606479 (CONDITIONAL_JUMP)  ; LAB_00606479
    MOV dword ptr [EBX],0x665ec8        ; 00606464 | g_FStreamBase_VirtualBaseLayout
    ADD EBX,0x48                        ; 0060646a
    PUSH EBX                            ; 0060646d
    CALL crt_iostream.cpp_ios_ctor_FUN_006061fc ; 0060646e
        ;   XREF to: 006061fc (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_ctor_FUN_006061fc(ios * this_ptr)
    ADD ESP,0x4                         ; 00606473
    LEA EBX,[EAX + -0x48]               ; 00606476
    ADD EBX,0x4                         ; 00606479
        ;   Label: LAB_00606479
    PUSH EBX                            ; 0060647c
    CALL crt_fstream.cpp_filebuf_ctor_FUN_0060bddd ; 0060647d
        ;   XREF to: 0060bddd (UNCONDITIONAL_CALL)  ; filebuf * crt_fstream.cpp_filebuf_ctor_FUN_0060bddd(filebuf * this_ptr)
    LEA EBX,[EAX + -0x4]                ; 00606482
    MOV EAX,dword ptr [EBX]             ; 00606485
    MOV EAX,dword ptr [EAX + 0x4]       ; 00606487
    LEA ESI,[EBX + EAX*0x1]             ; 0060648a
    MOV dword ptr [ESI + -0x4],EAX      ; 0060648d
    MOV EAX,dword ptr [EBX]             ; 00606490
    MOV dword ptr [EBX + 0x40],0x665ed4 ; 00606492 | g_FStreamBase_Destructor
    MOV EAX,dword ptr [EAX + 0x4]       ; 00606499
    MOV dword ptr [EBX + EAX*0x1 + 0x28],0x665edc ; 0060649c | g_FStreamBase_IOSDestructor
    MOV EAX,dword ptr [EBX]             ; 006064a4
    ADD ESP,0x4                         ; 006064a6
    LEA ESI,[EBX + 0x4]                 ; 006064a9
    MOV EAX,dword ptr [EAX + 0x4]       ; 006064ac
    PUSH ESI                            ; 006064af
    ADD EAX,EBX                         ; 006064b0
    PUSH EAX                            ; 006064b2
    CALL crt_iostream.cpp_streambuf_initBuffer_FUN_0060b815 ; 006064b3
        ;   XREF to: 0060b8da (UNCONDITIONAL_CALL)  ; void crt_iostream.cpp_streambuf_initBuffer_FUN_0060b815(streambuf * this_ptr, char * buffer_ptr)
    ADD ESP,0x8                         ; 006064b8
    MOV EDX,dword ptr [ESP + 0x20]      ; 006064bb
    PUSH EDX                            ; 006064bf
    MOV ECX,dword ptr [ESP + 0x20]      ; 006064c0
    PUSH ECX                            ; 006064c4
    MOV EDI,dword ptr [ESP + 0x20]      ; 006064c5
    PUSH EDI                            ; 006064c9
    PUSH ESI                            ; 006064ca
    CALL crt_fstream.cpp_filebuf_open_FUN_00608c15 ; 006064cb
        ;   XREF to: 00608c15 (UNCONDITIONAL_CALL)  ; int crt_fstream.cpp_filebuf_open_FUN_00608c15(filebuf * this_ptr, char * filename, int mode, int permissions)
    ADD ESP,0x10                        ; 006064d0
    TEST EAX,EAX                        ; 006064d3
    JZ 0x006064dd                       ; 006064d5
        ;   XREF to: 006064dd (CONDITIONAL_JUMP)  ; LAB_006064dd
    MOV EAX,EBX                         ; 006064d7
        ;   Label: LAB_006064d7
    POP EDI                             ; 006064d9
    POP ESI                             ; 006064da
    POP EBX                             ; 006064db
    RET                                 ; 006064dc
    MOV EAX,dword ptr [EBX]             ; 006064dd
        ;   Label: LAB_006064dd
    MOV EAX,dword ptr [EAX + 0x4]       ; 006064df
    PUSH 0x3                            ; 006064e2
    ADD EAX,EBX                         ; 006064e4
    PUSH EAX                            ; 006064e6
    CALL crt_stdio.c_reportStreamError_FUN_00606020 ; 006064e7
        ;   XREF to: 00606020 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_reportStreamError_FUN_00606020(FileEmbeddedData * embedded_data, uint error_flags)
    ADD ESP,0x8                         ; 006064ec
    JMP 0x006064d7                      ; 006064ef
        ;   XREF to: 006064d7 (UNCONDITIONAL_JUMP)  ; LAB_006064d7

