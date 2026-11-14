; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStreamDebug * __cdecl support_trstream_cpp_COutStreamDebug_dtor_FUN_00574e20(COutStreamDebug *this_ptr,uint flags)
;
; Parameters:
; COutStreamDebug * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   undefined1* g_COutStreamDebugVTable = 00574e20
;   WatcomTypeInfo g_COutStreamDebugTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   support_trstream.cpp_COutStream_dtor_FUN_005744a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574e20
        ;   Label: support_trstream.cpp_COutStreamDebug_dtor_FUN_00574e20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00574e21
    TEST byte ptr [ESP + 0xc],0x4       ; 00574e25
    JNZ 0x00574e4c                      ; 00574e2a
        ;   XREF to: 00574e4c (CONDITIONAL_JUMP)  ; LAB_00574e4c
    PUSH 0x1                            ; 00574e2c
    PUSH EBX                            ; 00574e2e
    MOV dword ptr [EBX],0x5e5b74        ; 00574e2f | g_COutStreamDebugVTable
    CALL support_trstream.cpp_COutStream_dtor_FUN_005744a0 ; 00574e35
        ;   XREF to: 005744a0 (UNCONDITIONAL_CALL)  ; COutStream * support_trstream.cpp_COutStream_dtor_FUN_005744a0(COutStream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00574e3a
    MOV DL,byte ptr [ESP + 0xc]         ; 00574e3d
    MOV EBX,EAX                         ; 00574e41
    TEST DL,0x2                         ; 00574e43
    JNZ 0x00574e67                      ; 00574e46
        ;   XREF to: 00574e67 (CONDITIONAL_JUMP)  ; LAB_00574e67
    MOV EAX,EBX                         ; 00574e48
    POP EBX                             ; 00574e4a
    RET                                 ; 00574e4b
    PUSH 0x5e5b90                       ; 00574e4c | g_COutStreamDebugTypeInfo
        ;   Label: LAB_00574e4c
    PUSH EBX                            ; 00574e51
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00574e52
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00574e57
    PUSH EAX                            ; 00574e5a
    CALL crt_unknown.c_FUN_005a30b6     ; 00574e5b
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00574e60
    MOV EAX,EBX                         ; 00574e63
    POP EBX                             ; 00574e65
    RET                                 ; 00574e66
    PUSH EAX                            ; 00574e67
        ;   Label: LAB_00574e67
    CALL crt_unknown.c_FUN_005a30c4     ; 00574e68
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00574e6d
    MOV EAX,EBX                         ; 00574e70
    POP EBX                             ; 00574e72
    RET                                 ; 00574e73

