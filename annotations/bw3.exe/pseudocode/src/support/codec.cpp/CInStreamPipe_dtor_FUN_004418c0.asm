; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamPipe * support_codec_cpp_CInStreamPipe_dtor_FUN_004418c0(CInStreamPipe *this_ptr,uint flags)
;
; Parameters:
; CInStreamPipe *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   undefined1* g_CInStreamPipeVTable = 004418c0
;   WatcomTypeInfo g_CInStreamPipeTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   support_codec.cpp_CInStreamPipe_close_FUN_00441b60
;   unkafter_turret.cpp_FUN_00572540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004418c0
        ;   Label: support_codec.cpp_CInStreamPipe_dtor_FUN_004418c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004418c1
    TEST byte ptr [ESP + 0xc],0x4       ; 004418c5
    JNZ 0x004418f5                      ; 004418ca
        ;   XREF to: 004418f5 (CONDITIONAL_JUMP)  ; LAB_004418f5
    PUSH EBX                            ; 004418cc
    MOV dword ptr [EBX],0x5dd554        ; 004418cd | g_CInStreamPipeVTable
    CALL support_codec.cpp_CInStreamPipe_close_FUN_00441b60 ; 004418d3
        ;   XREF to: 00441b60 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CInStreamPipe_close_FUN_00441b60(CInStreamPipe * this_ptr)
    ADD ESP,0x4                         ; 004418d8
    PUSH 0x1                            ; 004418db
    PUSH EBX                            ; 004418dd
    CALL unkafter_turret.cpp_FUN_00572540 ; 004418de
        ;   XREF to: 00572540 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00572540()
    ADD ESP,0x8                         ; 004418e3
    MOV DL,byte ptr [ESP + 0xc]         ; 004418e6
    MOV EBX,EAX                         ; 004418ea
    TEST DL,0x2                         ; 004418ec
    JNZ 0x00441910                      ; 004418ef
        ;   XREF to: 00441910 (CONDITIONAL_JUMP)  ; LAB_00441910
    MOV EAX,EBX                         ; 004418f1
    POP EBX                             ; 004418f3
    RET                                 ; 004418f4
    PUSH 0x5dd5e0                       ; 004418f5 | g_CInStreamPipeTypeInfo
        ;   Label: LAB_004418f5
    PUSH EBX                            ; 004418fa
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004418fb
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 00441900
    PUSH EAX                            ; 00441903
    CALL crt_unknown.c_FUN_005a30b6     ; 00441904
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00441909
    MOV EAX,EBX                         ; 0044190c
    POP EBX                             ; 0044190e
    RET                                 ; 0044190f
    PUSH EAX                            ; 00441910
        ;   Label: LAB_00441910
    CALL crt_unknown.c_FUN_005a30c4     ; 00441911
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00441916
    MOV EAX,EBX                         ; 00441919
    POP EBX                             ; 0044191b
    RET                                 ; 0044191c

