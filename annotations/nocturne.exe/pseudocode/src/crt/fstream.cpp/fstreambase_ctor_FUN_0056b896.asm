; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; fstreambase * __cdecl crt_fstream_cpp_fstreambase_ctor_FUN_0056b896(fstreambase *this_ptr,uint c1)
;
; Parameters:
; fstreambase *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   c1
;
; XREF[2]:
;   crt_fstream.cpp_ifstream_ctor_FUN_005652fe at 0056530c
;   crt_fstream.cpp_ofstream_ctor_FUN_0056536a at 00565378
;
; Referenced Globals:
;   undefined4 DAT_005a4a18
;   void* PTR_crt_fstream.cpp_fstreambase_dtor_FUN_0056b810_005a4a24 = 0056b810
;   void* PTR_crt_unknown.c_FUN_0056b7f8_005a4a2c = 0056b7f8
;
; Called Functions:
;   crt_fstream.cpp_filebuf_ctor_FUN_0057042d
;   crt_iostream.cpp_ios_ctor_FUN_0056b503
;   crt_iostream.cpp_streambuf_initBuffer_FUN_0056ff2a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b896
        ;   Label: crt_fstream.cpp_fstreambase_ctor_FUN_0056b896
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056b897
    TEST byte ptr [ESP + 0xc],0x1       ; 0056b89b
    JZ 0x0056b8e8                       ; 0056b8a0
        ;   XREF to: 0056b8e8 (CONDITIONAL_JUMP)  ; LAB_0056b8e8
    ADD EBX,0x4                         ; 0056b8a2
        ;   Label: LAB_0056b8a2
    PUSH EBX                            ; 0056b8a5
    CALL crt_fstream.cpp_filebuf_ctor_FUN_0057042d ; 0056b8a6
        ;   XREF to: 0057042d (UNCONDITIONAL_CALL)  ; filebuf * crt_fstream.cpp_filebuf_ctor_FUN_0057042d(filebuf * this_ptr)
    LEA EBX,[EAX + -0x4]                ; 0056b8ab
    MOV EDX,dword ptr [EBX]             ; 0056b8ae
    MOV EDX,dword ptr [EDX + 0x4]       ; 0056b8b0
    LEA EAX,[EBX + EDX*0x1]             ; 0056b8b3
    MOV dword ptr [EAX + -0x4],EDX      ; 0056b8b6
    MOV EAX,dword ptr [EBX]             ; 0056b8b9
    MOV dword ptr [EBX + 0x40],0x5a4a24 ; 0056b8bb | PTR_crt_fstream.cpp_fstreambase_dtor_FUN_0056b810_005a4a24
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b8c2
    ADD ESP,0x4                         ; 0056b8c5
    MOV dword ptr [EBX + EAX*0x1 + 0x28],0x5a4a2c ; 0056b8c8 | PTR_crt_unknown.c_FUN_0056b7f8_005a4a2c
    LEA EAX,[EBX + 0x4]                 ; 0056b8d0
    PUSH EAX                            ; 0056b8d3
    MOV EAX,dword ptr [EBX]             ; 0056b8d4
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b8d6
    ADD EAX,EBX                         ; 0056b8d9
    PUSH EAX                            ; 0056b8db
    CALL crt_iostream.cpp_streambuf_initBuffer_FUN_0056ff2a ; 0056b8dc
        ;   XREF to: 0056ff2a (UNCONDITIONAL_CALL)  ; void crt_iostream.cpp_streambuf_initBuffer_FUN_0056ff2a(streambuf * this_ptr, char * buffer_ptr)
    ADD ESP,0x8                         ; 0056b8e1
    MOV EAX,EBX                         ; 0056b8e4
    POP EBX                             ; 0056b8e6
    RET                                 ; 0056b8e7
    MOV dword ptr [EBX],0x5a4a18        ; 0056b8e8 | DAT_005a4a18
        ;   Label: LAB_0056b8e8
    ADD EBX,0x48                        ; 0056b8ee
    PUSH EBX                            ; 0056b8f1
    CALL crt_iostream.cpp_ios_ctor_FUN_0056b503 ; 0056b8f2
        ;   XREF to: 0056b503 (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_ctor_FUN_0056b503(ios * this_ptr)
    ADD ESP,0x4                         ; 0056b8f7
    LEA EBX,[EAX + -0x48]               ; 0056b8fa
    JMP 0x0056b8a2                      ; 0056b8fd
        ;   XREF to: 0056b8a2 (UNCONDITIONAL_JUMP)  ; LAB_0056b8a2

