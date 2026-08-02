; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; strstreambase * __cdecl crt_strstream_cpp_strstreambase_ctor_FUN_0056b405(strstreambase *this_ptr,int ctor_flags,char *buffer,int size,char *pstart)
;
; Parameters:
; strstreambase *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   ctor_flags
; char *           Stack[0xc]:4   buffer
; int              Stack[0x10]:4   size
; char *           Stack[0x14]:4   pstart
;
; XREF[2]:
;   crt_strstream.cpp_istrstream_ctor_FUN_00564f32 at 00564f4c
;   crt_strstream.cpp_ostrstream_ctor_FUN_00564d92 at 00564dd1
;
; Referenced Globals:
;   strstreambuf_vtable g_StrstreambufVTable
;   undefined4 DAT_005a48b0
;   void* PTR_crt_strstream.cpp_strstreambase_dtor_FUN_0056b5ad_005a48bc = 0056b5ad
;   void* PTR_crt_unknown.c_FUN_0056b491_005a48c4 = 0056b491
;
; Called Functions:
;   crt_iostream.cpp_ios_ctor_FUN_0056b503
;   crt_iostream.cpp_streambuf_ctor_FUN_0056fe12
;   crt_iostream.cpp_streambuf_initBuffer_FUN_0056ff2a
;   crt_strstream.cpp_strstreambuf_init_FUN_0056fe65
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b405
        ;   Label: crt_strstream.cpp_strstreambase_ctor_FUN_0056b405
    PUSH ESI                            ; 0056b406
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056b407
    TEST byte ptr [ESP + 0x10],0x1      ; 0056b40b
    JZ 0x0056b47a                       ; 0056b410
        ;   XREF to: 0056b47a (CONDITIONAL_JUMP)  ; LAB_0056b47a
    ADD EBX,0x4                         ; 0056b412
        ;   Label: LAB_0056b412
    PUSH EBX                            ; 0056b415
    CALL crt_iostream.cpp_streambuf_ctor_FUN_0056fe12 ; 0056b416
        ;   XREF to: 0056fe12 (UNCONDITIONAL_CALL)  ; streambuf * crt_iostream.cpp_streambuf_ctor_FUN_0056fe12(streambuf * this_ptr)
    ADD ESP,0x4                         ; 0056b41b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0056b41e
    PUSH EDX                            ; 0056b422
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0056b423
    PUSH ECX                            ; 0056b427
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0056b428
    PUSH ESI                            ; 0056b42c
    MOV EBX,EAX                         ; 0056b42d
    PUSH EAX                            ; 0056b42f
    SUB EBX,0x4                         ; 0056b430
    MOV dword ptr [EAX + 0x28],0x5a4884 ; 0056b433 | g_StrstreambufVTable
    CALL crt_strstream.cpp_strstreambuf_init_FUN_0056fe65 ; 0056b43a
        ;   XREF to: 0056fe65 (UNCONDITIONAL_CALL)  ; void crt_strstream.cpp_strstreambuf_init_FUN_0056fe65(strstreambuf * this_ptr, char * buffer_ptr, int buffer_size, char * put_start)
    MOV EAX,dword ptr [EBX]             ; 0056b43f
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b441
    LEA EDX,[EBX + EAX*0x1]             ; 0056b444
    MOV dword ptr [EDX + -0x4],EAX      ; 0056b447
    MOV EAX,dword ptr [EBX]             ; 0056b44a
    MOV dword ptr [EBX + 0x44],0x5a48bc ; 0056b44c | PTR_crt_strstream.cpp_strstreambase_dtor_FUN_0056b5ad_005a48bc
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b453
    ADD ESP,0x10                        ; 0056b456
    MOV dword ptr [EBX + EAX*0x1 + 0x28],0x5a48c4 ; 0056b459 | PTR_crt_unknown.c_FUN_0056b491_005a48c4
    LEA EAX,[EBX + 0x4]                 ; 0056b461
    PUSH EAX                            ; 0056b464
    MOV EAX,dword ptr [EBX]             ; 0056b465
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b467
    ADD EAX,EBX                         ; 0056b46a
    PUSH EAX                            ; 0056b46c
    CALL crt_iostream.cpp_streambuf_initBuffer_FUN_0056ff2a ; 0056b46d
        ;   XREF to: 0056ff2a (UNCONDITIONAL_CALL)  ; void crt_iostream.cpp_streambuf_initBuffer_FUN_0056ff2a(streambuf * this_ptr, char * buffer_ptr)
    ADD ESP,0x8                         ; 0056b472
    MOV EAX,EBX                         ; 0056b475
    POP ESI                             ; 0056b477
    POP EBX                             ; 0056b478
    RET                                 ; 0056b479
    MOV dword ptr [EBX],0x5a48b0        ; 0056b47a | DAT_005a48b0
        ;   Label: LAB_0056b47a
    ADD EBX,0x4c                        ; 0056b480
    PUSH EBX                            ; 0056b483
    CALL crt_iostream.cpp_ios_ctor_FUN_0056b503 ; 0056b484
        ;   XREF to: 0056b503 (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_ctor_FUN_0056b503(ios * this_ptr)
    ADD ESP,0x4                         ; 0056b489
    LEA EBX,[EAX + -0x4c]               ; 0056b48c
    JMP 0x0056b412                      ; 0056b48f
        ;   XREF to: 0056b412 (UNCONDITIONAL_JUMP)  ; LAB_0056b412

