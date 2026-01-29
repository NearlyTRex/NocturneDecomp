; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * __cdecl crt_fstream_cpp_ifstream_dtor_FUN_005ff856(ifstream *this_ptr,uint d1,uint d2,uint d3,uint d4)
;
; Parameters:
; ifstream *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
; uint             Stack[0x10]:4   d3
; uint             Stack[0x14]:4   d4
;
; XREF[5]:
;   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 at 004e1866
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0 at 004e1260
;   crt_fstream.cpp_ifstream_destructor_thunk_from_ios_FUN_005ff6f8 at 005ff707
;   crt_fstream.cpp_ifstream_destructor_thunk_from_istream_FUN_005ff6e2 at 005ff6ef
;   support_codec.cpp_CCodec_processFiles_FUN_0043ec30 at 0043ed08
;
; Referenced Globals:
;   WatcomTypeInfo g_IFStreamTypeInfo
;   void* g_IFStream_FStreamBaseDestructor = 005ff856
;   void* g_IFStream_IStreamDestructor = 005ff6e2
;   void* g_IFStream_IOSDestructor = 005ff6f8
;
; Called Functions:
;   crt_fstream.cpp_fstreambase_dtor_FUN_00606509
;   crt_iostream.cpp_ios_dtor_FUN_0060632c
;   crt_iostream.cpp_istream_dtor_FUN_006063e1
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ff856
        ;   Label: crt_fstream.cpp_ifstream_dtor_FUN_005ff856
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ff857
    TEST byte ptr [ESP + 0xc],0x4       ; 005ff85b
    JNZ 0x005ff8ba                      ; 005ff860
        ;   XREF to: 005ff8ba (CONDITIONAL_JUMP)  ; LAB_005ff8ba
    MOV EAX,dword ptr [EBX]             ; 005ff862
    MOV EDX,dword ptr [EAX + 0x4]       ; 005ff864
    LEA EAX,[EBX + EDX*0x1]             ; 005ff867
    MOV dword ptr [EAX + -0x4],EDX      ; 005ff86a
    MOV dword ptr [EBX + 0x40],0x665c68 ; 005ff86d | g_IFStream_FStreamBaseDestructor
    PUSH 0x1                            ; 005ff874
    MOV EAX,dword ptr [EBX]             ; 005ff876
    MOV dword ptr [EBX + 0x4c],0x665c70 ; 005ff878 | g_IFStream_IStreamDestructor
    ADD EBX,0x44                        ; 005ff87f
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ff882
    PUSH EBX                            ; 005ff885
    MOV dword ptr [EBX + EAX*0x1 + -0x1c],0x665c78 ; 005ff886 | g_IFStream_IOSDestructor
    CALL crt_iostream.cpp_istream_dtor_FUN_006063e1 ; 005ff88e
        ;   XREF to: 006063e1 (UNCONDITIONAL_CALL)  ; istream * crt_iostream.cpp_istream_dtor_FUN_006063e1(istream * this_ptr, uint d1, uint d2)
    ADD ESP,0x8                         ; 005ff893
    PUSH 0x1                            ; 005ff896
    LEA EBX,[EAX + -0x44]               ; 005ff898
    PUSH EBX                            ; 005ff89b
    CALL crt_fstream.cpp_fstreambase_dtor_FUN_00606509 ; 005ff89c
        ;   XREF to: 00606509 (UNCONDITIONAL_CALL)  ; fstreambase * crt_fstream.cpp_fstreambase_dtor_FUN_00606509(fstreambase * this_ptr, uint d1, uint d2, uint d3)
    ADD ESP,0x8                         ; 005ff8a1
    MOV DL,byte ptr [ESP + 0xc]         ; 005ff8a4
    MOV EBX,EAX                         ; 005ff8a8
    TEST DL,0x1                         ; 005ff8aa
    JZ 0x005ff8d5                       ; 005ff8ad
        ;   XREF to: 005ff8d5 (CONDITIONAL_JUMP)  ; LAB_005ff8d5
    TEST byte ptr [ESP + 0xc],0x2       ; 005ff8af
        ;   Label: LAB_005ff8af
    JNZ 0x005ff8e8                      ; 005ff8b4
        ;   XREF to: 005ff8e8 (CONDITIONAL_JUMP)  ; LAB_005ff8e8
    MOV EAX,EBX                         ; 005ff8b6
    POP EBX                             ; 005ff8b8
    RET                                 ; 005ff8b9
    PUSH 0x65bcb0                       ; 005ff8ba | g_IFStreamTypeInfo
        ;   Label: LAB_005ff8ba
    PUSH EBX                            ; 005ff8bf
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 005ff8c0
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005ff8c5
    PUSH EAX                            ; 005ff8c8
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005ff8c9
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005ff8ce
        ;   Label: LAB_005ff8ce
    MOV EAX,EBX                         ; 005ff8d1
    POP EBX                             ; 005ff8d3
    RET                                 ; 005ff8d4
    PUSH 0x1                            ; 005ff8d5
        ;   Label: LAB_005ff8d5
    ADD EAX,0x54                        ; 005ff8d7
    PUSH EAX                            ; 005ff8da
    CALL crt_iostream.cpp_ios_dtor_FUN_0060632c ; 005ff8db
        ;   XREF to: 0060632c (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_dtor_FUN_0060632c(ios * this_ptr, uint d1, uint d2)
    ADD ESP,0x8                         ; 005ff8e0
    LEA EBX,[EAX + -0x54]               ; 005ff8e3
    JMP 0x005ff8af                      ; 005ff8e6
        ;   XREF to: 005ff8af (UNCONDITIONAL_JUMP)  ; LAB_005ff8af
    PUSH EBX                            ; 005ff8e8
        ;   Label: LAB_005ff8e8
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005ff8e9
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    JMP 0x005ff8ce                      ; 005ff8ee
        ;   XREF to: 005ff8ce (UNCONDITIONAL_JUMP)  ; LAB_005ff8ce

