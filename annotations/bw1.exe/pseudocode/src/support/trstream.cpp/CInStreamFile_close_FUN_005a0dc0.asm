; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_trstream_cpp_CInStreamFile_close_FUN_005a0dc0(CInStreamFile *this_ptr)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
;
; XREF[17]:
;   cockpit_ckptutil.c_FUN_0043b2e0 at 0043b375
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_00437490 at 004375b3
;   core_game.cpp_FUN_004d6420 at 004d67d6
;   core_game.cpp_FUN_004d6990 at 004d6ce9
;   engine_2d.c_FUN_00401590 at 004015d5
;   engine_2d.c_initGraphicsSystem_FUN_00401010 at 004010fa
;   engine_2d.c_loadOrBuildColorMap_FUN_00402940 at 00402ab3
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004c0cd0 at 004c0eee
;   engine_font.cpp_FUN_004c0fa0 at 004c1164
;   engine_font.cpp_FUN_004c157e at 004c1785
;   ... and 7 more
;
; Referenced Globals:
;   void* PTR_CloseHandle_005d051c = 001d0c5a
;
; Called Functions:
;   CloseHandle
;   support_trstream.cpp_CInStreamFile_freeBuffer_FUN_005a0e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0dc0
        ;   Label: support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a0dc1
    MOV EDX,dword ptr [EBX + 0x4]       ; 005a0dc5
    TEST EDX,EDX                        ; 005a0dc8
    JNZ 0x005a0df1                      ; 005a0dca
        ;   XREF to: 005a0df1 (CONDITIONAL_JUMP)  ; LAB_005a0df1
    MOV dword ptr [EBX + 0xc],0x0       ; 005a0dcc
        ;   Label: LAB_005a0dcc
    MOV dword ptr [EBX + 0x10],0x0      ; 005a0dd3
    PUSH EBX                            ; 005a0dda
    MOV dword ptr [EBX + 0x8],0x0       ; 005a0ddb
    CALL support_trstream.cpp_CInStreamFile_freeBuffer_FUN_005a0e80 ; 005a0de2
        ;   XREF to: 005a0e80 (UNCONDITIONAL_CALL)  ; void support_trstream.cpp_CInStreamFile_freeBuffer_FUN_005a0e80(CInStreamFile * this_ptr)
    MOV EAX,0x1                         ; 005a0de7
    ADD ESP,0x4                         ; 005a0dec
    POP EBX                             ; 005a0def
    RET                                 ; 005a0df0
    PUSH EDX                            ; 005a0df1
        ;   Label: LAB_005a0df1
    CALL dword ptr CS:[0x5d051c]        ; 005a0df2 | PTR_CloseHandle_005d051c
    MOV dword ptr [EBX + 0x4],0x0       ; 005a0df9
    JMP 0x005a0dcc                      ; 005a0e00
        ;   XREF to: 005a0dcc (UNCONDITIONAL_JUMP)  ; LAB_005a0dcc

