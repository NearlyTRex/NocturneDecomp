; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl strstreambase * crt_strstream.cpp_strstreambase_dtor_FUN_006062a6(strstreambase * this_ptr, uint d1, uint d2, uint d3)
;
; Parameters:
; strstreambase *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
; uint             Stack[0x10]:4   d3
;
; XREF[3]:
;   crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca at 005ff610
;   crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a at 005ff4d0
;   crt_strstream.cpp_strstreambase_destructor_thunk_FUN_0060618a at 00606199
;
; Referenced Globals:
;   void* g_StrStreamBase_Destructor = 006062a6
;   void* g_StrStreamBase_IOSDestructor = 0060618a
;   WatcomTypeInfo g_StrStreamBaseTypeInfo
;
; Called Functions:
;   crt_iostream.cpp_ios_dtor_FUN_0060632c
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   crt_strstream.cpp_strstreambuf_dtor_FUN_0060bb7f
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006062a6
        ;   Label: crt_strstream.cpp_strstreambase_dtor_FUN_006062a6
    MOV EBX,dword ptr [ESP + 0x8]       ; 006062a7
    TEST byte ptr [ESP + 0xc],0x4       ; 006062ab
    JNZ 0x006062f6                      ; 006062b0 | LAB_006062f6
        ;   XREF to: 006062f6 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX]             ; 006062b2
    MOV EAX,dword ptr [EAX + 0x4]       ; 006062b4
    LEA EDX,[EBX + EAX*0x1]             ; 006062b7
    MOV dword ptr [EDX + -0x4],EAX      ; 006062ba
    PUSH 0x0                            ; 006062bd
    MOV EAX,dword ptr [EBX]             ; 006062bf
    MOV dword ptr [EBX + 0x44],0x665d6c ; 006062c1 | void * g_StrStreamBase_Destructor
    ADD EBX,0x4                         ; 006062c8
    MOV EAX,dword ptr [EAX + 0x4]       ; 006062cb
    PUSH EBX                            ; 006062ce
    MOV dword ptr [EBX + EAX*0x1 + 0x24],0x665d74 ; 006062cf | void * g_StrStreamBase_IOSDestructor
    CALL crt_strstream.cpp_strstreambuf_dtor_FUN_0060bb7f ; 006062d7 | strstreambuf * crt_strstream.cpp_strstreambuf_dtor_FUN_0060bb7f(strstreambuf * this_ptr, uint d1)
        ;   XREF to: 0060bb7f (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 006062dc
    MOV DL,byte ptr [ESP + 0xc]         ; 006062df
    LEA EBX,[EAX + -0x4]                ; 006062e3
    TEST DL,0x1                         ; 006062e6
    JZ 0x00606311                       ; 006062e9 | LAB_00606311
        ;   XREF to: 00606311 (CONDITIONAL_JUMP)
    TEST byte ptr [ESP + 0xc],0x2       ; 006062eb
        ;   Label: LAB_006062eb
    JNZ 0x00606324                      ; 006062f0 | LAB_00606324
        ;   XREF to: 00606324 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 006062f2
    POP EBX                             ; 006062f4
    RET                                 ; 006062f5
    PUSH 0x665e30                       ; 006062f6 | WatcomTypeInfo g_StrStreamBaseTypeInfo
        ;   Label: LAB_006062f6
    PUSH EBX                            ; 006062fb
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 006062fc | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00606301
    PUSH EAX                            ; 00606304
    CALL crt_memory.c_free_FUN_005fe659 ; 00606305 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060630a
        ;   Label: LAB_0060630a
    MOV EAX,EBX                         ; 0060630d
    POP EBX                             ; 0060630f
    RET                                 ; 00606310
    PUSH 0x1                            ; 00606311
        ;   Label: LAB_00606311
    ADD EBX,0x4c                        ; 00606313
    PUSH EBX                            ; 00606316
    CALL crt_iostream.cpp_ios_dtor_FUN_0060632c ; 00606317 | ios * crt_iostream.cpp_ios_dtor_FUN_0060632c(ios * this_ptr, uint d1, uint d2)
        ;   XREF to: 0060632c (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0060631c
    LEA EBX,[EAX + -0x4c]               ; 0060631f
    JMP 0x006062eb                      ; 00606322 | LAB_006062eb
        ;   XREF to: 006062eb (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 00606324
        ;   Label: LAB_00606324
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00606325 | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    JMP 0x0060630a                      ; 0060632a | LAB_0060630a
        ;   XREF to: 0060630a (UNCONDITIONAL_JUMP)

