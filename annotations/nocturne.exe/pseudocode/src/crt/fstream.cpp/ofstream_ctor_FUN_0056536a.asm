; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ofstream * __cdecl crt_fstream_cpp_ofstream_ctor_FUN_0056536a(void *this_ptr,int c1)
;
; Parameters:
; void *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   c1
;
; XREF[2]:
;   core_game.cpp_FUN_004a3b90 at 004a3e55
;   core_game.cpp_FUN_004a4170 at 004a4410
;
; Referenced Globals:
;   undefined4 DAT_005a4810
;   undefined4 DAT_005a4818
;   void* PTR_crt_fstream.cpp_ofstream_dtor_FUN_005651ca_005a4824 = 005651ca
;   void* PTR_crt_unknown.c_FUN_0056519c_005a482c = 0056519c
;   void* PTR_crt_unknown.c_FUN_005651b2_005a4834 = 005651b2
;
; Called Functions:
;   crt_fstream.cpp_fstreambase_ctor_FUN_0056b896
;   crt_iostream.cpp_ios_ctor_FUN_0056b503
;   crt_iostream.cpp_ostream_ctor_FUN_0056b4a9
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056536a
        ;   Label: crt_fstream.cpp_ofstream_ctor_FUN_0056536a
    TEST byte ptr [ESP + 0x8],0x1       ; 0056536e
    JZ 0x005653b8                       ; 00565373
        ;   XREF to: 005653b8 (CONDITIONAL_JUMP)  ; LAB_005653b8
    PUSH 0x1                            ; 00565375
        ;   Label: LAB_00565375
    PUSH EAX                            ; 00565377
    CALL crt_fstream.cpp_fstreambase_ctor_FUN_0056b896 ; 00565378
        ;   XREF to: 0056b896 (UNCONDITIONAL_CALL)  ; fstreambase * crt_fstream.cpp_fstreambase_ctor_FUN_0056b896(fstreambase * this_ptr, uint c1)
    ADD ESP,0x8                         ; 0056537d
    PUSH 0x1                            ; 00565380
    ADD EAX,0x44                        ; 00565382
    PUSH EAX                            ; 00565385
    CALL crt_iostream.cpp_ostream_ctor_FUN_0056b4a9 ; 00565386
        ;   XREF to: 0056b4a9 (UNCONDITIONAL_CALL)  ; _ostream * crt_iostream.cpp_ostream_ctor_FUN_0056b4a9(_ostream * this_ptr, uint c1)
    SUB EAX,0x44                        ; 0056538b
    MOV EDX,dword ptr [EAX]             ; 0056538e
    MOV EDX,dword ptr [EDX + 0x4]       ; 00565390
    LEA ECX,[EAX + EDX*0x1]             ; 00565393
    MOV dword ptr [ECX + -0x4],EDX      ; 00565396
    MOV dword ptr [EAX + 0x40],0x5a4824 ; 00565399 | PTR_crt_fstream.cpp_ofstream_dtor_FUN_005651ca_005a4824
    MOV EDX,dword ptr [EAX]             ; 005653a0
    MOV dword ptr [EAX + 0x48],0x5a482c ; 005653a2 | PTR_crt_unknown.c_FUN_0056519c_005a482c
    MOV EDX,dword ptr [EDX + 0x4]       ; 005653a9
    ADD ESP,0x8                         ; 005653ac
    MOV dword ptr [EDX + EAX*0x1 + 0x28],0x5a4834 ; 005653af | PTR_crt_unknown.c_FUN_005651b2_005a4834
    RET                                 ; 005653b7
    MOV dword ptr [EAX],0x5a4810        ; 005653b8 | DAT_005a4810
        ;   Label: LAB_005653b8
    ADD EAX,0x50                        ; 005653be
    PUSH EAX                            ; 005653c1
    MOV dword ptr [EAX + -0xc],0x5a4818 ; 005653c2 | DAT_005a4818
    CALL crt_iostream.cpp_ios_ctor_FUN_0056b503 ; 005653c9
        ;   XREF to: 0056b503 (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_ctor_FUN_0056b503(ios * this_ptr)
    ADD ESP,0x4                         ; 005653ce
    SUB EAX,0x50                        ; 005653d1
    JMP 0x00565375                      ; 005653d4
        ;   XREF to: 00565375 (UNCONDITIONAL_JUMP)  ; LAB_00565375

