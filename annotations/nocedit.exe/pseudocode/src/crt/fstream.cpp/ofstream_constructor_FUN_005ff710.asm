; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_fstream_cpp_ofstream_constructor_FUN_005ff710(ofstream *this_ptr,int ctor_flags,int fd,int mode,char *buffer,SIZE_T buffer_size)
;
; Parameters:
; ofstream *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   ctor_flags
; int              Stack[0xc]:4   fd
; int              Stack[0x10]:4   mode
; char *           Stack[0x14]:4   buffer
; SIZE_T           Stack[0x18]:4   buffer_size
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 at 00452a7e
;   support_codec.cpp_CCodec_processFiles_FUN_0043ec30 at 0043ec8d
;
; Referenced Globals:
;   WatcomVirtualBaseDescriptor g_OFStream_VirtualBaseLayout
;   WatcomVirtualBaseDescriptor g_OFStream_OStreamSubobjectLayout
;   void* g_OFStream_FStreamBaseDestructor = 005ff7bc
;   void* g_OFStream_OStream = 005ff78e
;   void* g_OFStream_IOS = 005ff7a4
;
; Called Functions:
;   crt_fstream.cpp_fstreambase_constructor_FUN_00606456
;   crt_iostream.cpp_ios_ctor_FUN_006061fc
;   crt_iostream.cpp_ostream_ctor_FUN_006061a2
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ff710
        ;   Label: crt_fstream.cpp_ofstream_constructor_FUN_005ff710
    TEST byte ptr [ESP + 0x8],0x1       ; 005ff714
    JZ 0x005ff770                       ; 005ff719
        ;   XREF to: 005ff770 (CONDITIONAL_JUMP)  ; LAB_005ff770
    MOV EDX,dword ptr [ESP + 0x14]      ; 005ff71b
        ;   Label: LAB_005ff71b
    PUSH EDX                            ; 005ff71f
    MOV EDX,dword ptr [ESP + 0x14]      ; 005ff720
    OR DL,0x2                           ; 005ff724
    PUSH EDX                            ; 005ff727
    MOV ECX,dword ptr [ESP + 0x14]      ; 005ff728
    PUSH ECX                            ; 005ff72c
    PUSH 0x1                            ; 005ff72d
    PUSH EAX                            ; 005ff72f
    CALL crt_fstream.cpp_fstreambase_constructor_FUN_00606456 ; 005ff730
        ;   XREF to: 00606456 (UNCONDITIONAL_CALL)  ; void crt_fstream.cpp_fstreambase_constructor_FUN_00606456(fstreambase * this_ptr, int ctor_flags, int fd, int mode, ...)
    ADD ESP,0x14                        ; 005ff735
    PUSH 0x1                            ; 005ff738
    ADD EAX,0x44                        ; 005ff73a
    PUSH EAX                            ; 005ff73d
    CALL crt_iostream.cpp_ostream_ctor_FUN_006061a2 ; 005ff73e
        ;   XREF to: 006061a2 (UNCONDITIONAL_CALL)  ; ostream * crt_iostream.cpp_ostream_ctor_FUN_006061a2(ostream * this_ptr, uint c1)
    SUB EAX,0x44                        ; 005ff743
    MOV EDX,dword ptr [EAX]             ; 005ff746
    MOV EDX,dword ptr [EDX + 0x4]       ; 005ff748
    LEA ECX,[EAX + EDX*0x1]             ; 005ff74b
    MOV dword ptr [ECX + -0x4],EDX      ; 005ff74e
    MOV dword ptr [EAX + 0x40],0x665cd4 ; 005ff751 | g_OFStream_FStreamBaseDestructor
    MOV EDX,dword ptr [EAX]             ; 005ff758
    MOV dword ptr [EAX + 0x48],0x665cdc ; 005ff75a | g_OFStream_OStream
    MOV EDX,dword ptr [EDX + 0x4]       ; 005ff761
    ADD ESP,0x8                         ; 005ff764
    MOV dword ptr [EDX + EAX*0x1 + 0x28],0x665ce4 ; 005ff767 | g_OFStream_IOS
    RET                                 ; 005ff76f
    MOV dword ptr [EAX],0x665cc0        ; 005ff770 | g_OFStream_VirtualBaseLayout
        ;   Label: LAB_005ff770
    ADD EAX,0x50                        ; 005ff776
    PUSH EAX                            ; 005ff779
    MOV dword ptr [EAX + -0xc],0x665cc8 ; 005ff77a | g_OFStream_OStreamSubobjectLayout
    CALL crt_iostream.cpp_ios_ctor_FUN_006061fc ; 005ff781
        ;   XREF to: 006061fc (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_ctor_FUN_006061fc(ios * this_ptr)
    ADD ESP,0x4                         ; 005ff786
    SUB EAX,0x50                        ; 005ff789
    JMP 0x005ff71b                      ; 005ff78c
        ;   XREF to: 005ff71b (UNCONDITIONAL_JUMP)  ; LAB_005ff71b

