; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamFile * support_trstream_cpp_CInStreamFile_dtor_FUN_005a0a50(CInStreamFile *this_ptr,uint flags)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[18]:
;   cockpit_ckptutil.c_FUN_0043b2e0 at 0043b384
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_00437490 at 004375c5
;   core_game.cpp_FUN_004d6420 at 004d682e
;   core_game.cpp_FUN_004d6990 at 004d6d81
;   engine_2d.c_FUN_00401590 at 004015e4
;   engine_2d.c_initGraphicsSystem_FUN_00401010 at 004010d3
;   engine_2d.c_loadOrBuildColorMap_FUN_00402940 at 00402a86
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004c0cd0 at 004c0f32
;   engine_font.cpp_FUN_004c0fa0 at 004c12f2
;   engine_font.cpp_FUN_004c157e at 004c15fb
;   ... and 8 more
;
; Referenced Globals:
;   WatcomTypeInfo g_CInStreamFileTypeInfo
;   undefined1* g_CInStreamFileVTable = 005a0a50
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;   support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0
;   support_trstream.cpp_FUN_0059f550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0a50
        ;   Label: support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a0a51
    TEST byte ptr [ESP + 0xc],0x4       ; 005a0a55
    JNZ 0x005a0a85                      ; 005a0a5a
        ;   XREF to: 005a0a85 (CONDITIONAL_JUMP)  ; LAB_005a0a85
    PUSH EBX                            ; 005a0a5c
    MOV dword ptr [EBX],0x607384        ; 005a0a5d | g_CInStreamFileVTable
    CALL support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0 ; 005a0a63
        ;   XREF to: 005a0dc0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 005a0a68
    PUSH 0x1                            ; 005a0a6b
    PUSH EBX                            ; 005a0a6d
    CALL support_trstream.cpp_FUN_0059f550 ; 005a0a6e
        ;   XREF to: 0059f550 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0059f550()
    ADD ESP,0x8                         ; 005a0a73
    MOV DL,byte ptr [ESP + 0xc]         ; 005a0a76
    MOV EBX,EAX                         ; 005a0a7a
    TEST DL,0x2                         ; 005a0a7c
    JNZ 0x005a0aa0                      ; 005a0a7f
        ;   XREF to: 005a0aa0 (CONDITIONAL_JUMP)  ; LAB_005a0aa0
    MOV EAX,EBX                         ; 005a0a81
    POP EBX                             ; 005a0a83
    RET                                 ; 005a0a84
    PUSH 0x5fb2d0                       ; 005a0a85 | g_CInStreamFileTypeInfo
        ;   Label: LAB_005a0a85
    PUSH EBX                            ; 005a0a8a
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 005a0a8b
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 005a0a90
    PUSH EAX                            ; 005a0a93
    CALL crt_unknown.c_FUN_005c0336     ; 005a0a94
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 005a0a99
    MOV EAX,EBX                         ; 005a0a9c
    POP EBX                             ; 005a0a9e
    RET                                 ; 005a0a9f
    PUSH EAX                            ; 005a0aa0
        ;   Label: LAB_005a0aa0
    CALL crt_unknown.c_FUN_005c0344     ; 005a0aa1
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 005a0aa6
    MOV EAX,EBX                         ; 005a0aa9
    POP EBX                             ; 005a0aab
    RET                                 ; 005a0aac

