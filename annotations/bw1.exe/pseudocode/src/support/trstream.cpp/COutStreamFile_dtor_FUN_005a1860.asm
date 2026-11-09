; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStreamFile * support_trstream_cpp_COutStreamFile_dtor_FUN_005a1860(COutStreamFile *this_ptr,uint flags)
;
; Parameters:
; COutStreamFile * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00453610 at 00453be6
;   core_game.cpp_FUN_004d6420 at 004d681c
;   core_game.cpp_FUN_004d6990 at 004d6d6f
;   engine_2d.c_FUN_00402940 at 00402a77
;   support_codec.cpp_FUN_00442e10 at 00442ea6
;
; Referenced Globals:
;   WatcomTypeInfo g_COutStreamFileTypeInfo
;   undefined1* g_COutStreamFileVTable = 005a1860
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;   support_trstream.cpp_FUN_005a14b0
;   support_trstream.cpp_FUN_005a19b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1860
        ;   Label: support_trstream.cpp_COutStreamFile_dtor_FUN_005a1860
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a1861
    TEST byte ptr [ESP + 0xc],0x4       ; 005a1865
    JNZ 0x005a1895                      ; 005a186a
        ;   XREF to: 005a1895 (CONDITIONAL_JUMP)  ; LAB_005a1895
    PUSH EBX                            ; 005a186c
    MOV dword ptr [EBX],0x607424        ; 005a186d | g_COutStreamFileVTable
    CALL support_trstream.cpp_FUN_005a19b0 ; 005a1873
        ;   XREF to: 005a19b0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005a19b0()
    ADD ESP,0x4                         ; 005a1878
    PUSH 0x1                            ; 005a187b
    PUSH EBX                            ; 005a187d
    CALL support_trstream.cpp_FUN_005a14b0 ; 005a187e
        ;   XREF to: 005a14b0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005a14b0()
    ADD ESP,0x8                         ; 005a1883
    MOV DL,byte ptr [ESP + 0xc]         ; 005a1886
    MOV EBX,EAX                         ; 005a188a
    TEST DL,0x2                         ; 005a188c
    JNZ 0x005a18b0                      ; 005a188f
        ;   XREF to: 005a18b0 (CONDITIONAL_JUMP)  ; LAB_005a18b0
    MOV EAX,EBX                         ; 005a1891
    POP EBX                             ; 005a1893
    RET                                 ; 005a1894
    PUSH 0x5fb2f0                       ; 005a1895 | g_COutStreamFileTypeInfo
        ;   Label: LAB_005a1895
    PUSH EBX                            ; 005a189a
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 005a189b
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 005a18a0
    PUSH EAX                            ; 005a18a3
    CALL crt_unknown.c_FUN_005c0336     ; 005a18a4
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 005a18a9
    MOV EAX,EBX                         ; 005a18ac
    POP EBX                             ; 005a18ae
    RET                                 ; 005a18af
    PUSH EAX                            ; 005a18b0
        ;   Label: LAB_005a18b0
    CALL crt_unknown.c_FUN_005c0344     ; 005a18b1
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 005a18b6
    MOV EAX,EBX                         ; 005a18b9
    POP EBX                             ; 005a18bb
    RET                                 ; 005a18bc

