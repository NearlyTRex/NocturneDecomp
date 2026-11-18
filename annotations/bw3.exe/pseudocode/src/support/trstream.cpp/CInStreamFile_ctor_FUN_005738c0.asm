; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_ctor_FUN_005738c0(CInStreamFile *this_ptr)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
;
; XREF[17]:
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_004350a0 at 004350bf
;   cockpit_ckptutil.c_readBitmapFile_FUN_00438ef0 at 00438f19
;   core_game.cpp_CGame_loadGame_FUN_004bdfb0 at 004be23b
;   core_game.cpp_CGame_saveGame_FUN_004bda10 at 004bdce7
;   engine_2d.c_initGraphicsSystem_FUN_00401010 at 004010a7
;   engine_2d.c_loadOrBuildColorMap_FUN_00402940 at 00402954
;   engine_2d.c_loadPaletteFile_FUN_00401590 at 00401596
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004af920 at 004afa9d
;   engine_font.cpp_CBitFont_loadFromFile_FUN_004b01d0 at 004b01f0
;   engine_font.cpp_CBitFont_setAcceleration_FUN_004afbf0 at 004afd52
;   ... and 7 more
;
; Referenced Globals:
;   TerminatedCString g_CInStreamFileVTable
;
; Called Functions:
;   support_trstream.cpp_CInStream_ctor_FUN_00572530
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005738c0
        ;   Label: support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0
    PUSH EDX                            ; 005738c4
    CALL support_trstream.cpp_CInStream_ctor_FUN_00572530 ; 005738c5
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; CInStream * support_trstream.cpp_CInStream_ctor_FUN_00572530(CInStream * this_ptr)
    MOV dword ptr [EAX],0x5e5a84        ; 005738ca | = "@:W"
    MOV dword ptr [EAX + 0x4],0x0       ; 005738d0
    MOV dword ptr [EAX + 0x8],0x0       ; 005738d7
    MOV dword ptr [EAX + 0xc],0x0       ; 005738de
    MOV dword ptr [EAX + 0x10],0x0      ; 005738e5
    MOV dword ptr [EAX + 0x14],0x0      ; 005738ec
    MOV dword ptr [EAX + 0x18],0x0      ; 005738f3
    MOV dword ptr [EAX + 0x1c],0x0      ; 005738fa
    MOV dword ptr [EAX + 0x20],0x0      ; 00573901
    ADD ESP,0x4                         ; 00573908
    MOV dword ptr [EAX + 0x24],0x0      ; 0057390b
    RET                                 ; 00573912

