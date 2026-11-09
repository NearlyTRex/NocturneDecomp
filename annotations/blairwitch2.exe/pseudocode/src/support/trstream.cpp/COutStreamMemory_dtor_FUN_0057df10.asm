; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStreamMemory * support_trstream_cpp_COutStreamMemory_dtor_FUN_0057df10(COutStreamMemory *this_ptr,uint flags)
;
; Parameters:
; COutStreamMemory * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[3]:
;   support_codec.cpp_FUN_00433f60 at 00433fba
;   support_codec.cpp_FUN_004341e0 at 00434238
;   support_codec.cpp_FUN_00435300 at 00435395
;
; Referenced Globals:
;   WatcomTypeInfo g_COutStreamMemoryTypeInfo
;   undefined1* g_COutStreamMemoryVTable = 0057df10
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;   support_trstream.cpp_FUN_0057d860
;   support_trstream.cpp_FUN_0057e0d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057df10
        ;   Label: support_trstream.cpp_COutStreamMemory_dtor_FUN_0057df10
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057df11
    TEST byte ptr [ESP + 0xc],0x4       ; 0057df15
    JNZ 0x0057df45                      ; 0057df1a
        ;   XREF to: 0057df45 (CONDITIONAL_JUMP)  ; LAB_0057df45
    PUSH EBX                            ; 0057df1c
    MOV dword ptr [EBX],0x5fd4b4        ; 0057df1d | g_COutStreamMemoryVTable
    CALL support_trstream.cpp_FUN_0057e0d0 ; 0057df23
        ;   XREF to: 0057e0d0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057e0d0()
    ADD ESP,0x4                         ; 0057df28
    PUSH 0x1                            ; 0057df2b
    PUSH EBX                            ; 0057df2d
    CALL support_trstream.cpp_FUN_0057d860 ; 0057df2e
        ;   XREF to: 0057d860 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057d860()
    ADD ESP,0x8                         ; 0057df33
    MOV DL,byte ptr [ESP + 0xc]         ; 0057df36
    MOV EBX,EAX                         ; 0057df3a
    TEST DL,0x2                         ; 0057df3c
    JNZ 0x0057df60                      ; 0057df3f
        ;   XREF to: 0057df60 (CONDITIONAL_JUMP)  ; LAB_0057df60
    MOV EAX,EBX                         ; 0057df41
    POP EBX                             ; 0057df43
    RET                                 ; 0057df44
    PUSH 0x5f4390                       ; 0057df45 | g_COutStreamMemoryTypeInfo
        ;   Label: LAB_0057df45
    PUSH EBX                            ; 0057df4a
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0057df4b
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 0057df50
    PUSH EAX                            ; 0057df53
    CALL crt_unknown.c_FUN_005b7fce     ; 0057df54
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0057df59
    MOV EAX,EBX                         ; 0057df5c
    POP EBX                             ; 0057df5e
    RET                                 ; 0057df5f
    PUSH EAX                            ; 0057df60
        ;   Label: LAB_0057df60
    CALL crt_unknown.c_FUN_005b7fdc     ; 0057df61
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0057df66
    MOV EAX,EBX                         ; 0057df69
    POP EBX                             ; 0057df6b
    RET                                 ; 0057df6c

