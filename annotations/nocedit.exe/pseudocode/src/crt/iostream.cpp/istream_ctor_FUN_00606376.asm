; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; istream * __cdecl crt_iostream_cpp_istream_ctor_FUN_00606376(istream *this_ptr,uint c1)
;
; Parameters:
; istream *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   c1
;
; XREF[3]:
;   crt_fstream.cpp_ifstream_constructor_FUN_005ff664 at 005ff692
;   crt_fstream.cpp_ifstream_ctor_FUN_005ff8f0 at 005ff90c
;   crt_strstream.cpp_istrstream_constructor_FUN_005ff524 at 005ff54c
;
; Referenced Globals:
;   WatcomInheritanceLayout DAT_00665e68
;   WatcomThunkedDestructor PTR_unk_OtherFreeMemory2_FUN_006063e1_00665e74
;   void* PTR_FUN_00665e7c = 006063c9
;
; Called Functions:
;   crt_iostream.cpp_ios_ctor_FUN_006061fc
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00606376
        ;   Label: crt_iostream.cpp_istream_ctor_FUN_00606376
    TEST byte ptr [ESP + 0x8],0x1       ; 0060637a
    JZ 0x006063b2                       ; 0060637f
        ;   XREF to: 006063b2 (CONDITIONAL_JUMP)  ; LAB_006063b2
    MOV EDX,dword ptr [EAX]             ; 00606381
        ;   Label: LAB_00606381
    MOV ECX,dword ptr [EDX + 0x4]       ; 00606383
    LEA EDX,[EAX + ECX*0x1]             ; 00606386
    MOV dword ptr [EDX + -0x4],ECX      ; 00606389
    MOV EDX,dword ptr [EAX]             ; 0060638c
    MOV dword ptr [EAX + 0x8],0x665e74  ; 0060638e | PTR_unk_OtherFreeMemory2_FUN_006063e1_00665e74
    MOV EDX,dword ptr [EDX + 0x4]       ; 00606395
    MOV dword ptr [EDX + EAX*0x1 + 0x28],0x665e7c ; 00606398 | PTR_FUN_00665e7c
    MOV EDX,dword ptr [EAX]             ; 006063a0
    MOV dword ptr [EAX + 0x4],0x0       ; 006063a2
    MOV EDX,dword ptr [EDX + 0x4]       ; 006063a9
    OR byte ptr [EDX + EAX*0x1 + 0xc],0x1 ; 006063ac
    RET                                 ; 006063b1
    MOV dword ptr [EAX],0x665e68        ; 006063b2 | DAT_00665e68
        ;   Label: LAB_006063b2
    ADD EAX,0x10                        ; 006063b8
    PUSH EAX                            ; 006063bb
    CALL crt_iostream.cpp_ios_ctor_FUN_006061fc ; 006063bc
        ;   XREF to: 006061fc (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_ctor_FUN_006061fc(ios * this_ptr)
    ADD ESP,0x4                         ; 006063c1
    SUB EAX,0x10                        ; 006063c4
    JMP 0x00606381                      ; 006063c7
        ;   XREF to: 00606381 (UNCONDITIONAL_JUMP)  ; LAB_00606381

