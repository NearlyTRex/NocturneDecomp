; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl ostrstream * __cdecl crt_strstream_cpp_ostrstream_dtor_FUN_005ff48a(ostrstream *this_ptr,int d1)
;
; Parameters:
; ostrstream *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   d1
;
; XREF[4]:
;   crt_strstream.cpp_ostrstream_destructor_thunk_from_ios_FUN_005ff445 at 005ff454
;   crt_strstream.cpp_ostrstream_destructor_thunk_from_ostream_FUN_005ff42f at 005ff43c
;   support_codec.cpp_CCodec_finalizeBuffer_FUN_0043ed50 at 0043edb4
;   support_codec.cpp_CCodec_processToBuffer_FUN_0043ea80 at 0043eb0c
;
; Referenced Globals:
;   WatcomTypeInfo g_OStrStreamTypeInfo
;   void* PTR_FUN_00665b7c = 005ff48a
;   void* PTR_LAB_00665b84 = 005ff42f
;   void* PTR_FUN_00665b8c = 005ff445
;
; Called Functions:
;   crt_iostream.cpp_ios_dtor_FUN_0060632c
;   crt_iostream.cpp_ostream_dtor_FUN_00606231
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   crt_strstream.cpp_strstreambase_dtor_FUN_006062a6
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ff48a
        ;   Label: crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ff48b
    TEST byte ptr [ESP + 0xc],0x4       ; 005ff48f
    JNZ 0x005ff4ee                      ; 005ff494
        ;   XREF to: 005ff4ee (CONDITIONAL_JUMP)  ; LAB_005ff4ee
    MOV EAX,dword ptr [EBX]             ; 005ff496
    MOV EDX,dword ptr [EAX + 0x4]       ; 005ff498
    LEA EAX,[EBX + EDX*0x1]             ; 005ff49b
    MOV dword ptr [EAX + -0x4],EDX      ; 005ff49e
    MOV dword ptr [EBX + 0x44],0x665b7c ; 005ff4a1 | PTR_FUN_00665b7c
    PUSH 0x1                            ; 005ff4a8
    MOV EAX,dword ptr [EBX]             ; 005ff4aa
    MOV dword ptr [EBX + 0x4c],0x665b84 ; 005ff4ac | PTR_LAB_00665b84
    ADD EBX,0x48                        ; 005ff4b3
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ff4b6
    PUSH EBX                            ; 005ff4b9
    MOV dword ptr [EBX + EAX*0x1 + -0x20],0x665b8c ; 005ff4ba | PTR_FUN_00665b8c
    CALL crt_iostream.cpp_ostream_dtor_FUN_00606231 ; 005ff4c2
        ;   XREF to: 00606231 (UNCONDITIONAL_CALL)  ; ostream * crt_iostream.cpp_ostream_dtor_FUN_00606231(ostream * this_ptr, uint d1, uint d2)
    ADD ESP,0x8                         ; 005ff4c7
    PUSH 0x1                            ; 005ff4ca
    LEA EBX,[EAX + -0x48]               ; 005ff4cc
    PUSH EBX                            ; 005ff4cf
    CALL crt_strstream.cpp_strstreambase_dtor_FUN_006062a6 ; 005ff4d0
        ;   XREF to: 006062a6 (UNCONDITIONAL_CALL)  ; strstreambase * crt_strstream.cpp_strstreambase_dtor_FUN_006062a6(strstreambase * this_ptr, uint d1, uint d2, uint d3)
    ADD ESP,0x8                         ; 005ff4d5
    MOV DL,byte ptr [ESP + 0xc]         ; 005ff4d8
    MOV EBX,EAX                         ; 005ff4dc
    TEST DL,0x1                         ; 005ff4de
    JZ 0x005ff509                       ; 005ff4e1
        ;   XREF to: 005ff509 (CONDITIONAL_JUMP)  ; LAB_005ff509
    TEST byte ptr [ESP + 0xc],0x2       ; 005ff4e3
        ;   Label: LAB_005ff4e3
    JNZ 0x005ff51c                      ; 005ff4e8
        ;   XREF to: 005ff51c (CONDITIONAL_JUMP)  ; LAB_005ff51c
    MOV EAX,EBX                         ; 005ff4ea
    POP EBX                             ; 005ff4ec
    RET                                 ; 005ff4ed
    PUSH 0x65bc70                       ; 005ff4ee | g_OStrStreamTypeInfo
        ;   Label: LAB_005ff4ee
    PUSH EBX                            ; 005ff4f3
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 005ff4f4
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005ff4f9
    PUSH EAX                            ; 005ff4fc
    CALL crt_memory.c_free_FUN_005fe659 ; 005ff4fd
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005ff502
        ;   Label: LAB_005ff502
    MOV EAX,EBX                         ; 005ff505
    POP EBX                             ; 005ff507
    RET                                 ; 005ff508
    PUSH 0x1                            ; 005ff509
        ;   Label: LAB_005ff509
    ADD EAX,0x54                        ; 005ff50b
    PUSH EAX                            ; 005ff50e
    CALL crt_iostream.cpp_ios_dtor_FUN_0060632c ; 005ff50f
        ;   XREF to: 0060632c (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_dtor_FUN_0060632c(ios * this_ptr, uint d1, uint d2)
    ADD ESP,0x8                         ; 005ff514
    LEA EBX,[EAX + -0x54]               ; 005ff517
    JMP 0x005ff4e3                      ; 005ff51a
        ;   XREF to: 005ff4e3 (UNCONDITIONAL_JUMP)  ; LAB_005ff4e3
    PUSH EBX                            ; 005ff51c
        ;   Label: LAB_005ff51c
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005ff51d
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    JMP 0x005ff502                      ; 005ff522
        ;   XREF to: 005ff502 (UNCONDITIONAL_JUMP)  ; LAB_005ff502

