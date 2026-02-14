; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_fstream_cpp_ifstream_constructor_FUN_005ff664(ifstream *this_ptr,int ctor_flags,int fd,char *buffer,int buffer_len)
;
; Parameters:
; ifstream *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   ctor_flags
; int              Stack[0xc]:4   fd
; char *           Stack[0x10]:4   buffer
; int              Stack[0x14]:4   buffer_len
;
; XREF[1]:
;   support_codec.cpp_CCodec_processFiles_FUN_0043ec30 at 0043ec5c
;
; Referenced Globals:
;   WatcomVirtualBaseDescriptor g_IFStream_LayoutInfo
;   WatcomVirtualBaseDescriptor g_IFStream_IStreamSubobjectLayout
;   void* g_IFStream_FStreamBaseDestructor = 005ff856
;   void* g_IFStream_IStreamDestructor = 005ff6e2
;   void* g_IFStream_IOSDestructor = 005ff6f8
;
; Called Functions:
;   crt_fstream.cpp_fstreambase_constructor_FUN_00606456
;   crt_iostream.cpp_ios_ctor_FUN_006061fc
;   crt_iostream.cpp_istream_ctor_FUN_00606376
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ff664
        ;   Label: crt_fstream.cpp_ifstream_constructor_FUN_005ff664
    TEST byte ptr [ESP + 0x8],0x1       ; 005ff668
    JZ 0x005ff6c4                       ; 005ff66d
        ;   XREF to: 005ff6c4 (CONDITIONAL_JUMP)  ; LAB_005ff6c4
    MOV EDX,dword ptr [ESP + 0x14]      ; 005ff66f
        ;   Label: LAB_005ff66f
    PUSH EDX                            ; 005ff673
    MOV EDX,dword ptr [ESP + 0x14]      ; 005ff674
    OR DL,0x1                           ; 005ff678
    PUSH EDX                            ; 005ff67b
    MOV ECX,dword ptr [ESP + 0x14]      ; 005ff67c
    PUSH ECX                            ; 005ff680
    PUSH 0x1                            ; 005ff681
    PUSH EAX                            ; 005ff683
    CALL crt_fstream.cpp_fstreambase_constructor_FUN_00606456 ; 005ff684
        ;   XREF to: 00606456 (UNCONDITIONAL_CALL)  ; void crt_fstream.cpp_fstreambase_constructor_FUN_00606456(fstreambase * this_ptr, int ctor_flags, int fd, int mode, ...)
    ADD ESP,0x14                        ; 005ff689
    PUSH 0x1                            ; 005ff68c
    ADD EAX,0x44                        ; 005ff68e
    PUSH EAX                            ; 005ff691
    CALL crt_iostream.cpp_istream_ctor_FUN_00606376 ; 005ff692
        ;   XREF to: 00606376 (UNCONDITIONAL_CALL)  ; istream * crt_iostream.cpp_istream_ctor_FUN_00606376(istream * this_ptr, uint c1)
    SUB EAX,0x44                        ; 005ff697
    MOV EDX,dword ptr [EAX]             ; 005ff69a
    MOV EDX,dword ptr [EDX + 0x4]       ; 005ff69c
    LEA ECX,[EAX + EDX*0x1]             ; 005ff69f
    MOV dword ptr [ECX + -0x4],EDX      ; 005ff6a2
    MOV dword ptr [EAX + 0x40],0x665c68 ; 005ff6a5 | g_IFStream_FStreamBaseDestructor
    MOV EDX,dword ptr [EAX]             ; 005ff6ac
    MOV dword ptr [EAX + 0x4c],0x665c70 ; 005ff6ae | g_IFStream_IStreamDestructor
    MOV EDX,dword ptr [EDX + 0x4]       ; 005ff6b5
    ADD ESP,0x8                         ; 005ff6b8
    MOV dword ptr [EDX + EAX*0x1 + 0x28],0x665c78 ; 005ff6bb | g_IFStream_IOSDestructor
    RET                                 ; 005ff6c3
    MOV dword ptr [EAX],0x665c54        ; 005ff6c4 | g_IFStream_LayoutInfo
        ;   Label: LAB_005ff6c4
    ADD EAX,0x54                        ; 005ff6ca
    PUSH EAX                            ; 005ff6cd
    MOV dword ptr [EAX + -0x10],0x665c5c ; 005ff6ce | g_IFStream_IStreamSubobjectLayout
    CALL crt_iostream.cpp_ios_ctor_FUN_006061fc ; 005ff6d5
        ;   XREF to: 006061fc (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_ctor_FUN_006061fc(ios * this_ptr)
    ADD ESP,0x4                         ; 005ff6da
    SUB EAX,0x54                        ; 005ff6dd
    JMP 0x005ff66f                      ; 005ff6e0
        ;   XREF to: 005ff66f (UNCONDITIONAL_JUMP)  ; LAB_005ff66f

