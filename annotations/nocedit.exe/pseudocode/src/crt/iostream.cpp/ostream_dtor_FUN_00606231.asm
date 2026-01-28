; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl ostream * __cdecl crt_iostream_cpp_ostream_dtor_FUN_00606231(ostream *this_ptr,uint d1,uint d2)
;
; Parameters:
; ostream *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; XREF[3]:
;   crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc at 005ff7f4
;   crt_iostream.cpp_ostream_destructor_thunk_FUN_006061e4 at 006061f3
;   crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a at 005ff4c2
;
; Referenced Globals:
;   void* g_OStream_Destructor = 00606231
;   void* g_OStream_IOSDestructor = 006061e4
;   WatcomTypeInfo g_OStreamTypeInfo
;
; Called Functions:
;   crt_iostream.cpp_ios_dtor_FUN_0060632c
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00606231
        ;   Label: crt_iostream.cpp_ostream_dtor_FUN_00606231
    MOV EBX,dword ptr [ESP + 0x8]       ; 00606232
    TEST byte ptr [ESP + 0xc],0x4       ; 00606236
    JNZ 0x00606270                      ; 0060623b
        ;   XREF to: 00606270 (CONDITIONAL_JUMP)  ; LAB_00606270
    MOV EAX,dword ptr [EBX]             ; 0060623d
    MOV EDX,dword ptr [EAX + 0x4]       ; 0060623f
    LEA EAX,[EBX + EDX*0x1]             ; 00606242
    MOV dword ptr [EAX + -0x4],EDX      ; 00606245
    MOV EAX,dword ptr [EBX]             ; 00606248
    MOV dword ptr [EBX + 0x4],0x665dc4  ; 0060624a | g_OStream_Destructor
    MOV EAX,dword ptr [EAX + 0x4]       ; 00606251
    MOV DL,byte ptr [ESP + 0xc]         ; 00606254
    MOV dword ptr [EBX + EAX*0x1 + 0x28],0x665dcc ; 00606258 | g_OStream_IOSDestructor
    TEST DL,0x1                         ; 00606260
    JZ 0x0060628b                       ; 00606263
        ;   XREF to: 0060628b (CONDITIONAL_JUMP)  ; LAB_0060628b
    TEST byte ptr [ESP + 0xc],0x2       ; 00606265
        ;   Label: LAB_00606265
    JNZ 0x0060629e                      ; 0060626a
        ;   XREF to: 0060629e (CONDITIONAL_JUMP)  ; LAB_0060629e
    MOV EAX,EBX                         ; 0060626c
    POP EBX                             ; 0060626e
    RET                                 ; 0060626f
    PUSH 0x665e10                       ; 00606270 | g_OStreamTypeInfo
        ;   Label: LAB_00606270
    PUSH EBX                            ; 00606275
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 00606276
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0060627b
    PUSH EAX                            ; 0060627e
    CALL crt_memory.c_free_FUN_005fe659 ; 0060627f
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00606284
        ;   Label: LAB_00606284
    MOV EAX,EBX                         ; 00606287
    POP EBX                             ; 00606289
    RET                                 ; 0060628a
    PUSH 0x1                            ; 0060628b
        ;   Label: LAB_0060628b
    ADD EBX,0xc                         ; 0060628d
    PUSH EBX                            ; 00606290
    CALL crt_iostream.cpp_ios_dtor_FUN_0060632c ; 00606291
        ;   XREF to: 0060632c (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_dtor_FUN_0060632c(ios * this_ptr, uint d1, uint d2)
    ADD ESP,0x8                         ; 00606296
    LEA EBX,[EAX + -0xc]                ; 00606299
    JMP 0x00606265                      ; 0060629c
        ;   XREF to: 00606265 (UNCONDITIONAL_JUMP)  ; LAB_00606265
    PUSH EBX                            ; 0060629e
        ;   Label: LAB_0060629e
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0060629f
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    JMP 0x00606284                      ; 006062a4
        ;   XREF to: 00606284 (UNCONDITIONAL_JUMP)  ; LAB_00606284

