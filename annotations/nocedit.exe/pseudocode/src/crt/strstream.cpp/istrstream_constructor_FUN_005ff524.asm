; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl istrstream * __cdecl crt_strstream_cpp_istrstream_constructor_FUN_005ff524(istrstream *this_ptr,int ctor_flags,char *buffer,int size)
;
; Parameters:
; istrstream *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   ctor_flags
; char *           Stack[0xc]:4   buffer
; int              Stack[0x10]:4   size
;
; XREF[2]:
;   support_codec.cpp_CCodec_processBuffer_FUN_0043eba0 at 0043ebc3
;   support_codec.cpp_CCodec_processFromBuffer_FUN_0043eb30 at 0043eb52
;
; Referenced Globals:
;   WatcomVirtualBaseDescriptor g_IstrstreamLayoutInfo
;   int g_Istrstream_IstreamLastReadLength = 0x48
;   WatcomThunkedDestructor PTR_FUN_00665bf4
;   WatcomThunkedDestructor PTR_FUN_00665bfc
;   WatcomThunkedDestructorDirect PTR_FUN_00665c04
;
; Called Functions:
;   crt_iostream.cpp_ios_ctor_FUN_006061fc
;   crt_iostream.cpp_istream_ctor_FUN_00606376
;   crt_strstream.cpp_strstreambase_constructor_FUN_006060fe
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ff524
        ;   Label: crt_strstream.cpp_istrstream_constructor_FUN_005ff524
    TEST byte ptr [ESP + 0x8],0x1       ; 005ff528
    JZ 0x005ff57e                       ; 005ff52d
        ;   XREF to: 005ff57e (CONDITIONAL_JUMP)  ; LAB_005ff57e
    PUSH 0x0                            ; 005ff52f
        ;   Label: LAB_005ff52f
    MOV EDX,dword ptr [ESP + 0x14]      ; 005ff531
    PUSH EDX                            ; 005ff535
    MOV ECX,dword ptr [ESP + 0x14]      ; 005ff536
    PUSH ECX                            ; 005ff53a
    PUSH 0x1                            ; 005ff53b
    PUSH EAX                            ; 005ff53d
    CALL crt_strstream.cpp_strstreambase_constructor_FUN_006060fe ; 005ff53e
        ;   XREF to: 006060fe (UNCONDITIONAL_CALL)  ; strstreambase * crt_strstream.cpp_strstreambase_constructor_FUN_006060fe(strstreambase * this_ptr, int ctor_flags, char * buffer, int size, ...)
    ADD ESP,0x14                        ; 005ff543
    PUSH 0x1                            ; 005ff546
    ADD EAX,0x48                        ; 005ff548
    PUSH EAX                            ; 005ff54b
    CALL crt_iostream.cpp_istream_ctor_FUN_00606376 ; 005ff54c
        ;   XREF to: 00606376 (UNCONDITIONAL_CALL)  ; istream * crt_iostream.cpp_istream_ctor_FUN_00606376(istream * this_ptr, uint c1)
    SUB EAX,0x48                        ; 005ff551
    MOV EDX,dword ptr [EAX]             ; 005ff554
    MOV ECX,dword ptr [EDX + 0x4]       ; 005ff556
    LEA EDX,[EAX + ECX*0x1]             ; 005ff559
    MOV dword ptr [EDX + -0x4],ECX      ; 005ff55c
    MOV dword ptr [EAX + 0x44],0x665bf4 ; 005ff55f | PTR_FUN_00665bf4
    MOV EDX,dword ptr [EAX]             ; 005ff566
    MOV dword ptr [EAX + 0x50],0x665bfc ; 005ff568 | PTR_FUN_00665bfc
    MOV EDX,dword ptr [EDX + 0x4]       ; 005ff56f
    ADD ESP,0x8                         ; 005ff572
    MOV dword ptr [EDX + EAX*0x1 + 0x28],0x665c04 ; 005ff575 | PTR_FUN_00665c04
    RET                                 ; 005ff57d
    MOV dword ptr [EAX],0x665be0        ; 005ff57e | g_IstrstreamLayoutInfo
        ;   Label: LAB_005ff57e
    ADD EAX,0x58                        ; 005ff584
    PUSH EAX                            ; 005ff587
    MOV dword ptr [EAX + -0x10],0x665be8 ; 005ff588 | g_Istrstream_IstreamLastReadLength
    CALL crt_iostream.cpp_ios_ctor_FUN_006061fc ; 005ff58f
        ;   XREF to: 006061fc (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_ctor_FUN_006061fc(ios * this_ptr)
    ADD ESP,0x4                         ; 005ff594
    SUB EAX,0x58                        ; 005ff597
    JMP 0x005ff52f                      ; 005ff59a
        ;   XREF to: 005ff52f (UNCONDITIONAL_JUMP)  ; LAB_005ff52f

