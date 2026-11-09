; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamFile * unkclass_instream_cpp_CInStreamFile_ctor_FUN_005a08d0(CInStreamFile *this_ptr)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
;
; XREF[17]:
;   cockpit_ckptutil.c_FUN_0043b2e0 at 0043b309
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_00437490 at 004374af
;   core_game.cpp_FUN_004d6420 at 004d66d0
;   core_game.cpp_FUN_004d6990 at 004d6bf5
;   engine_2d.c_FUN_00401010 at 004010a7
;   engine_2d.c_FUN_00401590 at 00401596
;   engine_2d.c_FUN_00402940 at 00402954
;   engine_font.cpp_FUN_004c0cd0 at 004c0e4d
;   engine_font.cpp_FUN_004c0fa0 at 004c1102
;   engine_font.cpp_FUN_004c157e at 004c15a0
;   ... and 7 more
;
; Referenced Globals:
;   undefined1* g_CInStreamFileVTable = 005a0a50
;
; Called Functions:
;   unkaddr_0059f520.cpp_FUN_0059f540
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a08d0
        ;   Label: unkclass_instream.cpp_CInStreamFile_ctor_FUN_005a08d0
    PUSH EDX                            ; 005a08d4
    CALL unkaddr_0059f520.cpp_FUN_0059f540 ; 005a08d5
        ;   XREF to: 0059f540 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059f520.cpp_FUN_0059f540()
    MOV dword ptr [EAX],0x607384        ; 005a08da | g_CInStreamFileVTable
    MOV dword ptr [EAX + 0x4],0x0       ; 005a08e0
    MOV dword ptr [EAX + 0x8],0x0       ; 005a08e7
    MOV dword ptr [EAX + 0xc],0x0       ; 005a08ee
    MOV dword ptr [EAX + 0x10],0x0      ; 005a08f5
    MOV dword ptr [EAX + 0x14],0x0      ; 005a08fc
    MOV dword ptr [EAX + 0x18],0x0      ; 005a0903
    MOV dword ptr [EAX + 0x1c],0x0      ; 005a090a
    MOV dword ptr [EAX + 0x20],0x0      ; 005a0911
    ADD ESP,0x4                         ; 005a0918
    MOV dword ptr [EAX + 0x24],0x0      ; 005a091b
    RET                                 ; 005a0922

