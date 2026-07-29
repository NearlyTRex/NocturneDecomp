; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _istream * __cdecl crt_iostream_cpp_istream_ctor_FUN_0056b67d(_istream *this_ptr,uint c1)
;
; Parameters:
; _istream *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   c1
;
; XREF[3]:
;   crt_fstream.cpp_ifstream_ctor_FUN_00565072 at 005650a0
;   crt_fstream.cpp_ifstream_ctor_FUN_005652fe at 0056531a
;   crt_strstream.cpp_istrstream_ctor_FUN_00564f32 at 00564f5a
;
; Referenced Globals:
;   undefined4 DAT_005a49b8
;   void* PTR_crt_iostream.cpp_istream_dtor_FUN_0056b6e8_005a49c4 = 0056b6e8
;   void* PTR_FUN_005a49cc = 0056b6d0
;
; Called Functions:
;   crt_iostream.cpp_ios_ctor_FUN_0056b503
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056b67d
        ;   Label: crt_iostream.cpp_istream_ctor_FUN_0056b67d
    TEST byte ptr [ESP + 0x8],0x1       ; 0056b681
    JZ 0x0056b6b9                       ; 0056b686
        ;   XREF to: 0056b6b9 (CONDITIONAL_JUMP)  ; LAB_0056b6b9
    MOV EDX,dword ptr [EAX]             ; 0056b688
        ;   Label: LAB_0056b688
    MOV ECX,dword ptr [EDX + 0x4]       ; 0056b68a
    LEA EDX,[EAX + ECX*0x1]             ; 0056b68d
    MOV dword ptr [EDX + -0x4],ECX      ; 0056b690
    MOV EDX,dword ptr [EAX]             ; 0056b693
    MOV dword ptr [EAX + 0x8],0x5a49c4  ; 0056b695 | PTR_crt_iostream.cpp_istream_dtor_FUN_0056b6e8_005a49c4
    MOV EDX,dword ptr [EDX + 0x4]       ; 0056b69c
    MOV dword ptr [EDX + EAX*0x1 + 0x28],0x5a49cc ; 0056b69f | PTR_FUN_005a49cc
    MOV EDX,dword ptr [EAX]             ; 0056b6a7
    MOV dword ptr [EAX + 0x4],0x0       ; 0056b6a9
    MOV EDX,dword ptr [EDX + 0x4]       ; 0056b6b0
    OR byte ptr [EDX + EAX*0x1 + 0xc],0x1 ; 0056b6b3
    RET                                 ; 0056b6b8
    MOV dword ptr [EAX],0x5a49b8        ; 0056b6b9 | DAT_005a49b8
        ;   Label: LAB_0056b6b9
    ADD EAX,0x10                        ; 0056b6bf
    PUSH EAX                            ; 0056b6c2
    CALL crt_iostream.cpp_ios_ctor_FUN_0056b503 ; 0056b6c3
        ;   XREF to: 0056b503 (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_ctor_FUN_0056b503(ios * this_ptr)
    ADD ESP,0x4                         ; 0056b6c8
    SUB EAX,0x10                        ; 0056b6cb
    JMP 0x0056b688                      ; 0056b6ce
        ;   XREF to: 0056b688 (UNCONDITIONAL_JUMP)  ; LAB_0056b688

