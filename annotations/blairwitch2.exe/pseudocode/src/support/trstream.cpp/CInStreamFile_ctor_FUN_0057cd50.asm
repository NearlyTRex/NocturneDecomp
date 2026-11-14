; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_ctor_FUN_0057cd50(CInStreamFile *this_ptr)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
;
; XREF[16]:
;   cockpit_ckptutil.c_FUN_0042c520 at 0042c549
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_0042c780 at 0042c79f
;   core_game.cpp_FUN_004bb9b0 at 004bbc60
;   core_game.cpp_FUN_004bbf70 at 004bc1da
;   engine_2d.c_FUN_00401590 at 00401596
;   engine_2d.c_initGraphicsSystem_FUN_00401010 at 004010a7
;   engine_2d.c_loadOrBuildColorMap_FUN_00402940 at 00402954
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004a7d00 at 004a7e7d
;   engine_font.cpp_FUN_004a7fd0 at 004a811e
;   engine_font.cpp_FUN_004a85a0 at 004a85c0
;   ... and 6 more
;
; Referenced Globals:
;   undefined1* g_CInStreamFileVTable = 0057cec0
;
; Called Functions:
;   support_trstream.cpp_CInStream_ctor_FUN_0057b9c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057cd50
        ;   Label: support_trstream.cpp_CInStreamFile_ctor_FUN_0057cd50
    PUSH EDX                            ; 0057cd54
    CALL support_trstream.cpp_CInStream_ctor_FUN_0057b9c0 ; 0057cd55
        ;   XREF to: 0057b9c0 (UNCONDITIONAL_CALL)  ; CInStream * support_trstream.cpp_CInStream_ctor_FUN_0057b9c0(CInStream * this_ptr)
    MOV dword ptr [EAX],0x5fd3e4        ; 0057cd5a | g_CInStreamFileVTable
    MOV dword ptr [EAX + 0x4],0x0       ; 0057cd60
    MOV dword ptr [EAX + 0x8],0x0       ; 0057cd67
    MOV dword ptr [EAX + 0xc],0x0       ; 0057cd6e
    MOV dword ptr [EAX + 0x10],0x0      ; 0057cd75
    MOV dword ptr [EAX + 0x14],0x0      ; 0057cd7c
    MOV dword ptr [EAX + 0x18],0x0      ; 0057cd83
    MOV dword ptr [EAX + 0x1c],0x0      ; 0057cd8a
    MOV dword ptr [EAX + 0x20],0x0      ; 0057cd91
    ADD ESP,0x4                         ; 0057cd98
    MOV dword ptr [EAX + 0x24],0x0      ; 0057cd9b
    RET                                 ; 0057cda2

