; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _ostream * __cdecl crt_iostream_cpp_ostream_ctor_FUN_0056b4a9(_ostream *this_ptr,uint c1)
;
; Parameters:
; _ostream *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   c1
;
; XREF[3]:
;   crt_fstream.cpp_ofstream_ctor_FUN_0056511e at 0056514c
;   crt_fstream.cpp_ofstream_ctor_FUN_0056536a at 00565386
;   crt_strstream.cpp_ostrstream_ctor_FUN_00564d92 at 00564ddf
;
; Referenced Globals:
;   undefined4 DAT_005a4908
;   void* PTR_crt_iostream.cpp_ostream_dtor_FUN_0056b538_005a4914 = 0056b538
;   void* PTR_crt_unknown.c_FUN_0056b4eb_005a491c = 0056b4eb
;
; Called Functions:
;   crt_iostream.cpp_ios_ctor_FUN_0056b503
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056b4a9
        ;   Label: crt_iostream.cpp_ostream_ctor_FUN_0056b4a9
    TEST byte ptr [ESP + 0x8],0x1       ; 0056b4ad
    JZ 0x0056b4d4                       ; 0056b4b2
        ;   XREF to: 0056b4d4 (CONDITIONAL_JUMP)  ; LAB_0056b4d4
    MOV EDX,dword ptr [EAX]             ; 0056b4b4
        ;   Label: LAB_0056b4b4
    MOV EDX,dword ptr [EDX + 0x4]       ; 0056b4b6
    LEA ECX,[EAX + EDX*0x1]             ; 0056b4b9
    MOV dword ptr [ECX + -0x4],EDX      ; 0056b4bc
    MOV EDX,dword ptr [EAX]             ; 0056b4bf
    MOV dword ptr [EAX + 0x4],0x5a4914  ; 0056b4c1 | PTR_crt_iostream.cpp_ostream_dtor_FUN_0056b538_005a4914
    MOV EDX,dword ptr [EDX + 0x4]       ; 0056b4c8
    MOV dword ptr [EDX + EAX*0x1 + 0x28],0x5a491c ; 0056b4cb | PTR_crt_unknown.c_FUN_0056b4eb_005a491c
    RET                                 ; 0056b4d3
    MOV dword ptr [EAX],0x5a4908        ; 0056b4d4 | DAT_005a4908
        ;   Label: LAB_0056b4d4
    ADD EAX,0xc                         ; 0056b4da
    PUSH EAX                            ; 0056b4dd
    CALL crt_iostream.cpp_ios_ctor_FUN_0056b503 ; 0056b4de
        ;   XREF to: 0056b503 (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_ctor_FUN_0056b503(ios * this_ptr)
    ADD ESP,0x4                         ; 0056b4e3
    SUB EAX,0xc                         ; 0056b4e6
    JMP 0x0056b4b4                      ; 0056b4e9
        ;   XREF to: 0056b4b4 (UNCONDITIONAL_JUMP)  ; LAB_0056b4b4

