; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl ios * crt_iostream.cpp_ios_dtor_FUN_0060632c(ios * this_ptr, uint d1, uint d2)
;
; Parameters:
; ios *            Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; XREF[8]:
;   crt_fstream.cpp_fstreambase_dtor_FUN_00606509 at 0060657a
;   crt_fstream.cpp_ifstream_dtor_FUN_005ff856 at 005ff8db
;   crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc at 005ff841
;   crt_iostream.cpp_istream_dtor_FUN_006063e1 at 00606441
;   crt_iostream.cpp_ostream_dtor_FUN_00606231 at 00606291
;   crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca at 005ff64f
;   crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a at 005ff50f
;   crt_strstream.cpp_strstreambase_dtor_FUN_006062a6 at 00606317
;
; Referenced Globals:
;   void* g_IOS_Destructor = 0060632c
;   WatcomTypeInfo g_IOSTypeInfo
;
; Called Functions:
;   crt_iostream.cpp_ios_freeBufferChain_FUN_0060bdc0
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060632c
        ;   Label: crt_iostream.cpp_ios_dtor_FUN_0060632c
    MOV EBX,dword ptr [ESP + 0x8]       ; 0060632d
    TEST byte ptr [ESP + 0xc],0x4       ; 00606331
    JNZ 0x00606353                      ; 00606336 | LAB_00606353
        ;   XREF to: 00606353 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00606338
    MOV dword ptr [EBX + 0x28],0x665df8 ; 00606339 | void * g_IOS_Destructor
    CALL crt_iostream.cpp_ios_freeBufferChain_FUN_0060bdc0 ; 00606340 | void crt_iostream.cpp_ios_freeBufferChain_FUN_0060bdc0(ios * stream_ptr)
        ;   XREF to: 0060bdc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00606345
    TEST byte ptr [ESP + 0xc],0x2       ; 00606348
    JNZ 0x0060636e                      ; 0060634d | LAB_0060636e
        ;   XREF to: 0060636e (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 0060634f
    POP EBX                             ; 00606351
    RET                                 ; 00606352
    PUSH 0x665e50                       ; 00606353 | WatcomTypeInfo g_IOSTypeInfo
        ;   Label: LAB_00606353
    PUSH EBX                            ; 00606358
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 00606359 | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0060635e
    PUSH EAX                            ; 00606361
    CALL crt_memory.c_free_FUN_005fe659 ; 00606362 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00606367
        ;   Label: LAB_00606367
    MOV EAX,EBX                         ; 0060636a
    POP EBX                             ; 0060636c
    RET                                 ; 0060636d
    PUSH EBX                            ; 0060636e
        ;   Label: LAB_0060636e
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0060636f | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    JMP 0x00606367                      ; 00606374 | LAB_00606367
        ;   XREF to: 00606367 (UNCONDITIONAL_JUMP)

