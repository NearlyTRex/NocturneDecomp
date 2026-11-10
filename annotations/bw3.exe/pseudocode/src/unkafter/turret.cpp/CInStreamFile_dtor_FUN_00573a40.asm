; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamFile * unkafter_turret_cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile *this_ptr,uint flags)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[18]:
;   cockpit_ckptutil.c_FUN_00438ef0 at 00438f94
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_004350a0 at 004351d5
;   core_game.cpp_FUN_004bda10 at 004bde45
;   core_game.cpp_FUN_004bdfb0 at 004be3c7
;   engine_2d.c_FUN_00401590 at 004015e4
;   engine_2d.c_initGraphicsSystem_FUN_00401010 at 004010d3
;   engine_2d.c_loadOrBuildColorMap_FUN_00402940 at 00402a86
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004af920 at 004afb82
;   engine_font.cpp_FUN_004afbf0 at 004aff42
;   engine_font.cpp_FUN_004b01ce at 004b024b
;   ... and 8 more
;
; Referenced Globals:
;   WatcomTypeInfo g_CInStreamFileTypeInfo
;   undefined1* g_CInStreamFileVTable = 00573a40
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   unkafter_turret.cpp_FUN_00572540
;   unkafter_turret.cpp_FUN_00573db0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573a40
        ;   Label: unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00573a41
    TEST byte ptr [ESP + 0xc],0x4       ; 00573a45
    JNZ 0x00573a75                      ; 00573a4a
        ;   XREF to: 00573a75 (CONDITIONAL_JUMP)  ; LAB_00573a75
    PUSH EBX                            ; 00573a4c
    MOV dword ptr [EBX],0x5e5a84        ; 00573a4d | g_CInStreamFileVTable
    CALL unkafter_turret.cpp_FUN_00573db0 ; 00573a53
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573db0()
    ADD ESP,0x4                         ; 00573a58
    PUSH 0x1                            ; 00573a5b
    PUSH EBX                            ; 00573a5d
    CALL unkafter_turret.cpp_FUN_00572540 ; 00573a5e
        ;   XREF to: 00572540 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00572540()
    ADD ESP,0x8                         ; 00573a63
    MOV DL,byte ptr [ESP + 0xc]         ; 00573a66
    MOV EBX,EAX                         ; 00573a6a
    TEST DL,0x2                         ; 00573a6c
    JNZ 0x00573a90                      ; 00573a6f
        ;   XREF to: 00573a90 (CONDITIONAL_JUMP)  ; LAB_00573a90
    MOV EAX,EBX                         ; 00573a71
    POP EBX                             ; 00573a73
    RET                                 ; 00573a74
    PUSH 0x5daf90                       ; 00573a75 | g_CInStreamFileTypeInfo
        ;   Label: LAB_00573a75
    PUSH EBX                            ; 00573a7a
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00573a7b
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 00573a80
    PUSH EAX                            ; 00573a83
    CALL crt_unknown.c_FUN_005a30b6     ; 00573a84
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00573a89
    MOV EAX,EBX                         ; 00573a8c
    POP EBX                             ; 00573a8e
    RET                                 ; 00573a8f
    PUSH EAX                            ; 00573a90
        ;   Label: LAB_00573a90
    CALL crt_unknown.c_FUN_005a30c4     ; 00573a91
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00573a96
    MOV EAX,EBX                         ; 00573a99
    POP EBX                             ; 00573a9b
    RET                                 ; 00573a9c

