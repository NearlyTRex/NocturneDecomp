; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStreamFile * support_trstream_cpp_COutStreamFile_dtor_FUN_0057dc10(COutStreamFile *this_ptr,uint flags)
;
; Parameters:
; COutStreamFile * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00441f50 at 00442526
;   core_game.cpp_FUN_004bb9b0 at 004bbdaa
;   core_game.cpp_FUN_004bbf70 at 004bc352
;   engine_2d.c_loadOrBuildColorMap_FUN_00402940 at 00402a70
;   support_codec.cpp_FUN_004340f0 at 00434184
;
; Referenced Globals:
;   WatcomTypeInfo g_COutStreamFileTypeInfo
;   undefined1* g_COutStreamFileVTable = 0057dc10
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;   support_trstream.cpp_COutStreamFile_close_FUN_0057dd60
;   support_trstream.cpp_FUN_0057d860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057dc10
        ;   Label: support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057dc11
    TEST byte ptr [ESP + 0xc],0x4       ; 0057dc15
    JNZ 0x0057dc45                      ; 0057dc1a
        ;   XREF to: 0057dc45 (CONDITIONAL_JUMP)  ; LAB_0057dc45
    PUSH EBX                            ; 0057dc1c
    MOV dword ptr [EBX],0x5fd484        ; 0057dc1d | g_COutStreamFileVTable
    CALL support_trstream.cpp_COutStreamFile_close_FUN_0057dd60 ; 0057dc23
        ;   XREF to: 0057dd60 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_COutStreamFile_close_FUN_0057dd60(COutStreamFile * this_ptr)
    ADD ESP,0x4                         ; 0057dc28
    PUSH 0x1                            ; 0057dc2b
    PUSH EBX                            ; 0057dc2d
    CALL support_trstream.cpp_FUN_0057d860 ; 0057dc2e
        ;   XREF to: 0057d860 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057d860()
    ADD ESP,0x8                         ; 0057dc33
    MOV DL,byte ptr [ESP + 0xc]         ; 0057dc36
    MOV EBX,EAX                         ; 0057dc3a
    TEST DL,0x2                         ; 0057dc3c
    JNZ 0x0057dc60                      ; 0057dc3f
        ;   XREF to: 0057dc60 (CONDITIONAL_JUMP)  ; LAB_0057dc60
    MOV EAX,EBX                         ; 0057dc41
    POP EBX                             ; 0057dc43
    RET                                 ; 0057dc44
    PUSH 0x5f2140                       ; 0057dc45 | g_COutStreamFileTypeInfo
        ;   Label: LAB_0057dc45
    PUSH EBX                            ; 0057dc4a
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0057dc4b
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 0057dc50
    PUSH EAX                            ; 0057dc53
    CALL crt_unknown.c_FUN_005b7fce     ; 0057dc54
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0057dc59
    MOV EAX,EBX                         ; 0057dc5c
    POP EBX                             ; 0057dc5e
    RET                                 ; 0057dc5f
    PUSH EAX                            ; 0057dc60
        ;   Label: LAB_0057dc60
    CALL crt_unknown.c_FUN_005b7fdc     ; 0057dc61
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0057dc66
    MOV EAX,EBX                         ; 0057dc69
    POP EBX                             ; 0057dc6b
    RET                                 ; 0057dc6c

