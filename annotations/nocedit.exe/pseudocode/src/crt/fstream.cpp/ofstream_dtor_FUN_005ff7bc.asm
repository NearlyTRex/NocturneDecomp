; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl ofstream * crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc(ofstream * this_ptr, uint d1, uint d2, uint d3, uint d4)
;
; Parameters:
; ofstream *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
; uint             Stack[0x10]:4   d3
; uint             Stack[0x14]:4   d4
;
; XREF[6]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 at 00452f64
;   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 at 004e18c2
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0 at 004e128c
;   crt_fstream.cpp_ofstream_destructor_thunk_from_ios_FUN_005ff7a4 at 005ff7b3
;   crt_fstream.cpp_ofstream_destructor_thunk_from_ostream_FUN_005ff78e at 005ff79b
;   support_codec.cpp_CCodec_processFiles_FUN_0043ec30 at 0043ed30
;
; Referenced Globals:
;   WatcomTypeInfo g_OFStreamTypeInfo
;   void* g_OFStream_FStreamBaseDestructor = 005ff7bc
;   void* g_OFStream_OStream = 005ff78e
;   void* g_OFStream_IOS = 005ff7a4
;
; Called Functions:
;   crt_fstream.cpp_fstreambase_dtor_FUN_00606509
;   crt_iostream.cpp_ios_dtor_FUN_0060632c
;   crt_iostream.cpp_ostream_dtor_FUN_00606231
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ff7bc
        ;   Label: crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ff7bd
    TEST byte ptr [ESP + 0xc],0x4       ; 005ff7c1
    JNZ 0x005ff820                      ; 005ff7c6
        ;   XREF to: 005ff820 (CONDITIONAL_JUMP)  ; LAB_005ff820
    MOV EAX,dword ptr [EBX]             ; 005ff7c8
    MOV EDX,dword ptr [EAX + 0x4]       ; 005ff7ca
    LEA EAX,[EBX + EDX*0x1]             ; 005ff7cd
    MOV dword ptr [EAX + -0x4],EDX      ; 005ff7d0
    MOV dword ptr [EBX + 0x40],0x665cd4 ; 005ff7d3 | g_OFStream_FStreamBaseDestructor
    PUSH 0x1                            ; 005ff7da
    MOV EAX,dword ptr [EBX]             ; 005ff7dc
    MOV dword ptr [EBX + 0x48],0x665cdc ; 005ff7de | g_OFStream_OStream
    ADD EBX,0x44                        ; 005ff7e5
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ff7e8
    PUSH EBX                            ; 005ff7eb
    MOV dword ptr [EBX + EAX*0x1 + -0x1c],0x665ce4 ; 005ff7ec | g_OFStream_IOS
    CALL crt_iostream.cpp_ostream_dtor_FUN_00606231 ; 005ff7f4
        ;   XREF to: 00606231 (UNCONDITIONAL_CALL)  ; ostream * crt_iostream.cpp_ostream_dtor_FUN_00606231(ostream * this_ptr, uint d1, uint d2)
    ADD ESP,0x8                         ; 005ff7f9
    PUSH 0x1                            ; 005ff7fc
    LEA EBX,[EAX + -0x44]               ; 005ff7fe
    PUSH EBX                            ; 005ff801
    CALL crt_fstream.cpp_fstreambase_dtor_FUN_00606509 ; 005ff802
        ;   XREF to: 00606509 (UNCONDITIONAL_CALL)  ; fstreambase * crt_fstream.cpp_fstreambase_dtor_FUN_00606509(fstreambase * this_ptr, uint d1, uint d2, uint d3)
    ADD ESP,0x8                         ; 005ff807
    MOV DL,byte ptr [ESP + 0xc]         ; 005ff80a
    MOV EBX,EAX                         ; 005ff80e
    TEST DL,0x1                         ; 005ff810
    JZ 0x005ff83b                       ; 005ff813
        ;   XREF to: 005ff83b (CONDITIONAL_JUMP)  ; LAB_005ff83b
    TEST byte ptr [ESP + 0xc],0x2       ; 005ff815
        ;   Label: LAB_005ff815
    JNZ 0x005ff84e                      ; 005ff81a
        ;   XREF to: 005ff84e (CONDITIONAL_JUMP)  ; LAB_005ff84e
    MOV EAX,EBX                         ; 005ff81c
    POP EBX                             ; 005ff81e
    RET                                 ; 005ff81f
    PUSH 0x65bcd0                       ; 005ff820 | g_OFStreamTypeInfo
        ;   Label: LAB_005ff820
    PUSH EBX                            ; 005ff825
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 005ff826
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005ff82b
    PUSH EAX                            ; 005ff82e
    CALL crt_memory.c_free_FUN_005fe659 ; 005ff82f
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005ff834
        ;   Label: LAB_005ff834
    MOV EAX,EBX                         ; 005ff837
    POP EBX                             ; 005ff839
    RET                                 ; 005ff83a
    PUSH 0x1                            ; 005ff83b
        ;   Label: LAB_005ff83b
    ADD EAX,0x50                        ; 005ff83d
    PUSH EAX                            ; 005ff840
    CALL crt_iostream.cpp_ios_dtor_FUN_0060632c ; 005ff841
        ;   XREF to: 0060632c (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_dtor_FUN_0060632c(ios * this_ptr, uint d1, uint d2)
    ADD ESP,0x8                         ; 005ff846
    LEA EBX,[EAX + -0x50]               ; 005ff849
    JMP 0x005ff815                      ; 005ff84c
        ;   XREF to: 005ff815 (UNCONDITIONAL_JUMP)  ; LAB_005ff815
    PUSH EBX                            ; 005ff84e
        ;   Label: LAB_005ff84e
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005ff84f
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    JMP 0x005ff834                      ; 005ff854
        ;   XREF to: 005ff834 (UNCONDITIONAL_JUMP)  ; LAB_005ff834

