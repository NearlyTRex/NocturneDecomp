; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_fstream_cpp_ifstream_ctor_FUN_00565072(void *this_ptr,int ctor_flags,char *filename,int open_mode,int buffer_size)
;
; Parameters:
; void *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   ctor_flags
; char *           Stack[0xc]:4   filename
; int              Stack[0x10]:4   open_mode
; int              Stack[0x14]:4   buffer_size
;
; XREF[1]:
;   support_codec.cpp_CCodec_processFiles_FUN_004391b0 at 004391dc
;
; Referenced Globals:
;   undefined4 DAT_005a47a4
;   undefined4 DAT_005a47ac
;   void* PTR_crt_fstream.cpp_ifstream_dtor_FUN_00565264_005a47b8 = 00565264
;   void* PTR_crt_unknown.c_FUN_005650f0_005a47c0 = 005650f0
;   void* PTR_crt_unknown.c_FUN_00565106_005a47c8 = 00565106
;
; Called Functions:
;   crt_fstream.cpp_fstreambase_ctor_FUN_0056b75d
;   crt_iostream.cpp_ios_ctor_FUN_0056b503
;   crt_iostream.cpp_istream_ctor_FUN_0056b67d
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00565072
        ;   Label: crt_fstream.cpp_ifstream_ctor_FUN_00565072
    TEST byte ptr [ESP + 0x8],0x1       ; 00565076
    JZ 0x005650d2                       ; 0056507b
        ;   XREF to: 005650d2 (CONDITIONAL_JUMP)  ; LAB_005650d2
    MOV EDX,dword ptr [ESP + 0x14]      ; 0056507d
        ;   Label: LAB_0056507d
    PUSH EDX                            ; 00565081
    MOV EDX,dword ptr [ESP + 0x14]      ; 00565082
    OR DL,0x1                           ; 00565086
    PUSH EDX                            ; 00565089
    MOV ECX,dword ptr [ESP + 0x14]      ; 0056508a
    PUSH ECX                            ; 0056508e
    PUSH 0x1                            ; 0056508f
    PUSH EAX                            ; 00565091
    CALL crt_fstream.cpp_fstreambase_ctor_FUN_0056b75d ; 00565092
        ;   XREF to: 0056b75d (UNCONDITIONAL_CALL)  ; void crt_fstream.cpp_fstreambase_ctor_FUN_0056b75d(fstreambase * this_ptr, int ctor_flags, int fd, int mode, ...)
    ADD ESP,0x14                        ; 00565097
    PUSH 0x1                            ; 0056509a
    ADD EAX,0x44                        ; 0056509c
    PUSH EAX                            ; 0056509f
    CALL crt_iostream.cpp_istream_ctor_FUN_0056b67d ; 005650a0
        ;   XREF to: 0056b67d (UNCONDITIONAL_CALL)  ; _istream * crt_iostream.cpp_istream_ctor_FUN_0056b67d(_istream * this_ptr, uint c1)
    SUB EAX,0x44                        ; 005650a5
    MOV EDX,dword ptr [EAX]             ; 005650a8
    MOV EDX,dword ptr [EDX + 0x4]       ; 005650aa
    LEA ECX,[EAX + EDX*0x1]             ; 005650ad
    MOV dword ptr [ECX + -0x4],EDX      ; 005650b0
    MOV dword ptr [EAX + 0x40],0x5a47b8 ; 005650b3 | PTR_crt_fstream.cpp_ifstream_dtor_FUN_00565264_005a47b8
    MOV EDX,dword ptr [EAX]             ; 005650ba
    MOV dword ptr [EAX + 0x4c],0x5a47c0 ; 005650bc | PTR_crt_unknown.c_FUN_005650f0_005a47c0
    MOV EDX,dword ptr [EDX + 0x4]       ; 005650c3
    ADD ESP,0x8                         ; 005650c6
    MOV dword ptr [EDX + EAX*0x1 + 0x28],0x5a47c8 ; 005650c9 | PTR_crt_unknown.c_FUN_00565106_005a47c8
    RET                                 ; 005650d1
    MOV dword ptr [EAX],0x5a47a4        ; 005650d2 | DAT_005a47a4
        ;   Label: LAB_005650d2
    ADD EAX,0x54                        ; 005650d8
    PUSH EAX                            ; 005650db
    MOV dword ptr [EAX + -0x10],0x5a47ac ; 005650dc | DAT_005a47ac
    CALL crt_iostream.cpp_ios_ctor_FUN_0056b503 ; 005650e3
        ;   XREF to: 0056b503 (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_ctor_FUN_0056b503(ios * this_ptr)
    ADD ESP,0x4                         ; 005650e8
    SUB EAX,0x54                        ; 005650eb
    JMP 0x0056507d                      ; 005650ee
        ;   XREF to: 0056507d (UNCONDITIONAL_JUMP)  ; LAB_0056507d

