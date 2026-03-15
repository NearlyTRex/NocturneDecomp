; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _istream * __cdecl crt_iostream_cpp_istream_dtor_FUN_006063e1(_istream *this_ptr,uint flags)
;
; Parameters:
; _istream *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[3]:
;   crt_fstream.cpp_ifstream_dtor_FUN_005ff856 at 005ff88e
;   crt_iostream.cpp_istream_destructor_thunk_from_ios_FUN_006063c9 at 006063d8
;   crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca at 005ff602
;
; Referenced Globals:
;   WatcomThunkedDestructor WatcomThunkedDestructor_00665e74
;   void* PTR_FUN_00665e7c = 006063c9
;   WatcomTypeInfo g_IStreamTypeInfo
;
; Called Functions:
;   crt_iostream.cpp_ios_dtor_FUN_0060632c
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006063e1
        ;   Label: crt_iostream.cpp_istream_dtor_FUN_006063e1
    MOV EBX,dword ptr [ESP + 0x8]       ; 006063e2
    TEST byte ptr [ESP + 0xc],0x4       ; 006063e6
    JNZ 0x00606420                      ; 006063eb
        ;   XREF to: 00606420 (CONDITIONAL_JUMP)  ; LAB_00606420
    MOV EAX,dword ptr [EBX]             ; 006063ed
    MOV EDX,dword ptr [EAX + 0x4]       ; 006063ef
    LEA EAX,[EBX + EDX*0x1]             ; 006063f2
    MOV dword ptr [EAX + -0x4],EDX      ; 006063f5
    MOV EAX,dword ptr [EBX]             ; 006063f8
    MOV dword ptr [EBX + 0x8],0x665e74  ; 006063fa | WatcomThunkedDestructor_00665e74
    MOV EAX,dword ptr [EAX + 0x4]       ; 00606401
    MOV DL,byte ptr [ESP + 0xc]         ; 00606404
    MOV dword ptr [EBX + EAX*0x1 + 0x28],0x665e7c ; 00606408 | PTR_FUN_00665e7c
    TEST DL,0x1                         ; 00606410
    JZ 0x0060643b                       ; 00606413
        ;   XREF to: 0060643b (CONDITIONAL_JUMP)  ; LAB_0060643b
    TEST byte ptr [ESP + 0xc],0x2       ; 00606415
        ;   Label: LAB_00606415
    JNZ 0x0060644e                      ; 0060641a
        ;   XREF to: 0060644e (CONDITIONAL_JUMP)  ; LAB_0060644e
    MOV EAX,EBX                         ; 0060641c
    POP EBX                             ; 0060641e
    RET                                 ; 0060641f
    PUSH 0x665eb0                       ; 00606420 | g_IStreamTypeInfo
        ;   Label: LAB_00606420
    PUSH EBX                            ; 00606425
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 00606426
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0060642b
    PUSH EAX                            ; 0060642e
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0060642f
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00606434
        ;   Label: LAB_00606434
    MOV EAX,EBX                         ; 00606437
    POP EBX                             ; 00606439
    RET                                 ; 0060643a
    PUSH 0x1                            ; 0060643b
        ;   Label: LAB_0060643b
    ADD EBX,0x10                        ; 0060643d
    PUSH EBX                            ; 00606440
    CALL crt_iostream.cpp_ios_dtor_FUN_0060632c ; 00606441
        ;   XREF to: 0060632c (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_dtor_FUN_0060632c(ios * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00606446
    LEA EBX,[EAX + -0x10]               ; 00606449
    JMP 0x00606415                      ; 0060644c
        ;   XREF to: 00606415 (UNCONDITIONAL_JUMP)  ; LAB_00606415
    PUSH EBX                            ; 0060644e
        ;   Label: LAB_0060644e
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0060644f
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    JMP 0x00606434                      ; 00606454
        ;   XREF to: 00606434 (UNCONDITIONAL_JUMP)  ; LAB_00606434

