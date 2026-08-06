; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ifstream * __cdecl crt_fstream_cpp_ifstream_ctor_FUN_005652fe(void *this_ptr,int c1)
;
; Parameters:
; void *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   c1
;
; XREF[2]:
;   core_game.cpp_CGame_FUN_004a3b90 at 004a3e44
;   core_game.cpp_CGame_FUN_004a4170 at 004a43fe
;
; Referenced Globals:
;   undefined4 DAT_005a47a4
;   undefined4 DAT_005a47ac
;   void* PTR_crt_fstream.cpp_ifstream_dtor_FUN_00565264_005a47b8 = 00565264
;   void* PTR_crt_unknown.c_FUN_005650f0_005a47c0 = 005650f0
;   void* PTR_crt_unknown.c_FUN_00565106_005a47c8 = 00565106
;
; Called Functions:
;   crt_fstream.cpp_fstreambase_ctor_FUN_0056b896
;   crt_iostream.cpp_ios_ctor_FUN_0056b503
;   crt_iostream.cpp_istream_ctor_FUN_0056b67d
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005652fe
        ;   Label: crt_fstream.cpp_ifstream_ctor_FUN_005652fe
    TEST byte ptr [ESP + 0x8],0x1       ; 00565302
    JZ 0x0056534c                       ; 00565307
        ;   XREF to: 0056534c (CONDITIONAL_JUMP)  ; LAB_0056534c
    PUSH 0x1                            ; 00565309
        ;   Label: LAB_00565309
    PUSH EAX                            ; 0056530b
    CALL crt_fstream.cpp_fstreambase_ctor_FUN_0056b896 ; 0056530c
        ;   XREF to: 0056b896 (UNCONDITIONAL_CALL)  ; fstreambase * crt_fstream.cpp_fstreambase_ctor_FUN_0056b896(fstreambase * this_ptr, uint c1)
    ADD ESP,0x8                         ; 00565311
    PUSH 0x1                            ; 00565314
    ADD EAX,0x44                        ; 00565316
    PUSH EAX                            ; 00565319
    CALL crt_iostream.cpp_istream_ctor_FUN_0056b67d ; 0056531a
        ;   XREF to: 0056b67d (UNCONDITIONAL_CALL)  ; _istream * crt_iostream.cpp_istream_ctor_FUN_0056b67d(_istream * this_ptr, uint c1)
    SUB EAX,0x44                        ; 0056531f
    MOV EDX,dword ptr [EAX]             ; 00565322
    MOV EDX,dword ptr [EDX + 0x4]       ; 00565324
    LEA ECX,[EAX + EDX*0x1]             ; 00565327
    MOV dword ptr [ECX + -0x4],EDX      ; 0056532a
    MOV dword ptr [EAX + 0x40],0x5a47b8 ; 0056532d | PTR_crt_fstream.cpp_ifstream_dtor_FUN_00565264_005a47b8
    MOV EDX,dword ptr [EAX]             ; 00565334
    MOV dword ptr [EAX + 0x4c],0x5a47c0 ; 00565336 | PTR_crt_unknown.c_FUN_005650f0_005a47c0
    MOV EDX,dword ptr [EDX + 0x4]       ; 0056533d
    ADD ESP,0x8                         ; 00565340
    MOV dword ptr [EDX + EAX*0x1 + 0x28],0x5a47c8 ; 00565343 | PTR_crt_unknown.c_FUN_00565106_005a47c8
    RET                                 ; 0056534b
    MOV dword ptr [EAX],0x5a47a4        ; 0056534c | DAT_005a47a4
        ;   Label: LAB_0056534c
    ADD EAX,0x54                        ; 00565352
    PUSH EAX                            ; 00565355
    MOV dword ptr [EAX + -0x10],0x5a47ac ; 00565356 | DAT_005a47ac
    CALL crt_iostream.cpp_ios_ctor_FUN_0056b503 ; 0056535d
        ;   XREF to: 0056b503 (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_ctor_FUN_0056b503(ios * this_ptr)
    ADD ESP,0x4                         ; 00565362
    SUB EAX,0x54                        ; 00565365
    JMP 0x00565309                      ; 00565368
        ;   XREF to: 00565309 (UNCONDITIONAL_JUMP)  ; LAB_00565309

