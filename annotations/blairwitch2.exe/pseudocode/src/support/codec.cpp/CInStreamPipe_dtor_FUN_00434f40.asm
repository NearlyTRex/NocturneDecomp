; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamPipe * support_codec_cpp_CInStreamPipe_dtor_FUN_00434f40(CInStreamPipe *this_ptr,uint flags)
;
; Parameters:
; CInStreamPipe *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   undefined1* g_CInStreamPipeVTable = 00434f40
;   WatcomTypeInfo g_CInStreamPipeTypeInfo
;
; Called Functions:
;   core_terrain.cpp_FUN_0057b9d0
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;   support_codec.cpp_CInStreamPipe_close_FUN_004351e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434f40
        ;   Label: support_codec.cpp_CInStreamPipe_dtor_FUN_00434f40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00434f41
    TEST byte ptr [ESP + 0xc],0x4       ; 00434f45
    JNZ 0x00434f75                      ; 00434f4a
        ;   XREF to: 00434f75 (CONDITIONAL_JUMP)  ; LAB_00434f75
    PUSH EBX                            ; 00434f4c
    MOV dword ptr [EBX],0x5f4344        ; 00434f4d | g_CInStreamPipeVTable
    CALL support_codec.cpp_CInStreamPipe_close_FUN_004351e0 ; 00434f53
        ;   XREF to: 004351e0 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CInStreamPipe_close_FUN_004351e0(CInStreamPipe * this_ptr)
    ADD ESP,0x4                         ; 00434f58
    PUSH 0x1                            ; 00434f5b
    PUSH EBX                            ; 00434f5d
    CALL core_terrain.cpp_FUN_0057b9d0  ; 00434f5e
        ;   XREF to: 0057b9d0 (UNCONDITIONAL_CALL)  ; undefined core_terrain.cpp_FUN_0057b9d0()
    ADD ESP,0x8                         ; 00434f63
    MOV DL,byte ptr [ESP + 0xc]         ; 00434f66
    MOV EBX,EAX                         ; 00434f6a
    TEST DL,0x2                         ; 00434f6c
    JNZ 0x00434f90                      ; 00434f6f
        ;   XREF to: 00434f90 (CONDITIONAL_JUMP)  ; LAB_00434f90
    MOV EAX,EBX                         ; 00434f71
    POP EBX                             ; 00434f73
    RET                                 ; 00434f74
    PUSH 0x5f43d0                       ; 00434f75 | g_CInStreamPipeTypeInfo
        ;   Label: LAB_00434f75
    PUSH EBX                            ; 00434f7a
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00434f7b
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 00434f80
    PUSH EAX                            ; 00434f83
    CALL crt_unknown.c_FUN_005b7fce     ; 00434f84
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00434f89
    MOV EAX,EBX                         ; 00434f8c
    POP EBX                             ; 00434f8e
    RET                                 ; 00434f8f
    PUSH EAX                            ; 00434f90
        ;   Label: LAB_00434f90
    CALL crt_unknown.c_FUN_005b7fdc     ; 00434f91
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00434f96
    MOV EAX,EBX                         ; 00434f99
    POP EBX                             ; 00434f9b
    RET                                 ; 00434f9c

