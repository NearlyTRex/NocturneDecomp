; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _ostream * __cdecl crt_iostream_cpp_ostream_ctor_FUN_006061a2(_ostream *this_ptr,uint c1)
;
; Parameters:
; _ostream *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   c1
;
; XREF[3]:
;   crt_fstream.cpp_ofstream_ctor_FUN_005ff710 at 005ff73e
;   crt_fstream.cpp_ofstream_ctor_FUN_005ff95c at 005ff978
;   crt_strstream.cpp_ostrstream_ctor_FUN_005ff384 at 005ff3d1
;
; Referenced Globals:
;   undefined4 DAT_00665db8
;   void* g_OStream_Destructor = 00606231
;   void* g_OStream_IOSDestructor = 006061e4
;
; Called Functions:
;   crt_iostream.cpp_ios_ctor_FUN_006061fc
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 006061a2
        ;   Label: crt_iostream.cpp_ostream_ctor_FUN_006061a2
    TEST byte ptr [ESP + 0x8],0x1       ; 006061a6
    JZ 0x006061cd                       ; 006061ab
        ;   XREF to: 006061cd (CONDITIONAL_JUMP)  ; LAB_006061cd
    MOV EDX,dword ptr [EAX]             ; 006061ad
        ;   Label: LAB_006061ad
    MOV EDX,dword ptr [EDX + 0x4]       ; 006061af
    LEA ECX,[EAX + EDX*0x1]             ; 006061b2
    MOV dword ptr [ECX + -0x4],EDX      ; 006061b5
    MOV EDX,dword ptr [EAX]             ; 006061b8
    MOV dword ptr [EAX + 0x4],0x665dc4  ; 006061ba | g_OStream_Destructor
    MOV EDX,dword ptr [EDX + 0x4]       ; 006061c1
    MOV dword ptr [EDX + EAX*0x1 + 0x28],0x665dcc ; 006061c4 | g_OStream_IOSDestructor
    RET                                 ; 006061cc
    MOV dword ptr [EAX],0x665db8        ; 006061cd | DAT_00665db8
        ;   Label: LAB_006061cd
    ADD EAX,0xc                         ; 006061d3
    PUSH EAX                            ; 006061d6
    CALL crt_iostream.cpp_ios_ctor_FUN_006061fc ; 006061d7
        ;   XREF to: 006061fc (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_ctor_FUN_006061fc(ios * this_ptr)
    ADD ESP,0x4                         ; 006061dc
    SUB EAX,0xc                         ; 006061df
    JMP 0x006061ad                      ; 006061e2
        ;   XREF to: 006061ad (UNCONDITIONAL_JUMP)  ; LAB_006061ad

