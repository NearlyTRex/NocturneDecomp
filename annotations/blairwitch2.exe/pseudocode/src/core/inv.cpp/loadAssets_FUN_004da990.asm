; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_loadAssets_FUN_004da990(void)
;
;
; XREF[3]:
;   core_game.cpp_CGame_loadAssets_FUN_004bb050 at 004bb07e
;   core_inv.cpp_CInventory_renderSelectedItems_FUN_004dd670 at 004dd90d
;   core_inv.cpp_FUN_004dd9b0 at 004de9cd
;
; Referenced Globals:
;   undefined4 DAT_005db432
;   TerminatedCString s_invsize_txt_005db435
;   undefined4 DAT_005db441
;   TerminatedCString s_d_d_005db446
;   TerminatedCString s_invback_005db44d
;   TerminatedCString s_invback2_005db455
;   TerminatedCString s_weapback_005db45e
;   TerminatedCString s_weapback2_005db467
;   TerminatedCString s_battery_005db471
;   TerminatedCString s_hbar1_005db479
;   TerminatedCString s_hbar2_005db47f
;   TerminatedCString s_tommyclip24x24_005db485
;   TerminatedCString s_bullet24x24_005db494
;   TerminatedCString s_lithium24x24_005db4a0
;   TerminatedCString s_mercurybullet24x24_005db4ad
;   ... and 22 more
;
; Called Functions:
;   core_inv.cpp_loadItem_FUN_004da720
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fscanf_FUN_005b8100
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0
;   engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0
;   engine_dosio.cpp_FUN_00460c70
;   engine_texture.cpp_FUN_00574e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004da990
        ;   Label: core_inv.cpp_loadAssets_FUN_004da990
    PUSH ESI                            ; 004da991
    PUSH EDI                            ; 004da992
    PUSH EBP                            ; 004da993
    PUSH 0x5db432                       ; 004da994 | DAT_005db432
    PUSH 0x5db435                       ; 004da999 | = "invsize.txt"
    MOV EAX,[0x006141bc]                ; 004da99e | DAT_006141bc
    PUSH 0x5db441                       ; 004da9a3 | DAT_005db441
    MOV [0x01d02f40],EAX                ; 004da9a8 | DAT_01d02f40
    CALL engine_dosio.cpp_FUN_00460c70  ; 004da9ad
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    MOV EBX,EAX                         ; 004da9b2
    ADD ESP,0xc                         ; 004da9b4
    TEST EAX,EAX                        ; 004da9b7
    JNZ 0x004dac85                      ; 004da9b9
        ;   XREF to: 004dac85 (CONDITIONAL_JUMP)  ; LAB_004dac85
    MOV EDX,dword ptr [0x00617cd4]      ; 004da9bf | DAT_00617cd4
        ;   Label: LAB_004da9bf
    PUSH EDX                            ; 004da9c5
    MOV ECX,dword ptr [0x00617cd0]      ; 004da9c6 | DAT_00617cd0
    PUSH ECX                            ; 004da9cc
    PUSH 0x5db44d                       ; 004da9cd | = "invback"
    PUSH 0x1cf01b0                      ; 004da9d2
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004da9d7
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004da9dc
    MOV EBX,dword ptr [0x00617cd4]      ; 004da9df | DAT_00617cd4
    PUSH EBX                            ; 004da9e5
    PUSH EBX                            ; 004da9e6
    PUSH 0x5db455                       ; 004da9e7 | = "invback2"
    PUSH 0x1cf01c4                      ; 004da9ec
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004da9f1
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004da9f6
    MOV EDI,dword ptr [0x00617cd4]      ; 004da9f9 | DAT_00617cd4
    PUSH EDI                            ; 004da9ff
    MOV EBP,dword ptr [0x00617cd0]      ; 004daa00 | DAT_00617cd0
    PUSH EBP                            ; 004daa06
    PUSH 0x5db45e                       ; 004daa07 | = "weapback"
    PUSH 0x1cf01d8                      ; 004daa0c
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004daa11
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004daa16
    MOV EAX,[0x00617cd4]                ; 004daa19 | DAT_00617cd4
    PUSH EAX                            ; 004daa1e
    PUSH EAX                            ; 004daa1f
    PUSH 0x5db467                       ; 004daa20 | = "weapback2"
    PUSH 0x1cf01ec                      ; 004daa25
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004daa2a
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004daa2f
    PUSH 0x20                           ; 004daa32
    PUSH 0x10                           ; 004daa34
    PUSH 0x5db471                       ; 004daa36 | = "battery"
    PUSH 0x1d02e08                      ; 004daa3b
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004daa40
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004daa45
    PUSH 0x40                           ; 004daa48
    PUSH 0x1b                           ; 004daa4a
    PUSH 0x5db479                       ; 004daa4c | = "hbar1"
    PUSH 0x1d02e1c                      ; 004daa51
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004daa56
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004daa5b
    PUSH 0x40                           ; 004daa5e
    PUSH 0x1b                           ; 004daa60
    PUSH 0x5db47f                       ; 004daa62 | = "hbar2"
    PUSH 0x1d02e30                      ; 004daa67
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004daa6c
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004daa71
    PUSH 0x18                           ; 004daa74
    PUSH 0x18                           ; 004daa76
    PUSH 0x5db485                       ; 004daa78 | = "tommyclip24x24"
    PUSH 0x1d02e44                      ; 004daa7d
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004daa82
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004daa87
    PUSH 0x18                           ; 004daa8a
    PUSH 0x18                           ; 004daa8c
    PUSH 0x5db494                       ; 004daa8e | = "bullet24x24"
    PUSH 0x1d02e58                      ; 004daa93
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004daa98
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004daa9d
    PUSH 0x18                           ; 004daaa0
    PUSH 0x18                           ; 004daaa2
    PUSH 0x5db4a0                       ; 004daaa4 | = "lithium24x24"
    PUSH 0x1d02e6c                      ; 004daaa9
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004daaae
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004daab3
    PUSH 0x18                           ; 004daab6
    PUSH 0x18                           ; 004daab8
    PUSH 0x5db4ad                       ; 004daaba | = "mercurybullet24x24"
    PUSH 0x1d02e80                      ; 004daabf
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004daac4
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004daac9
    PUSH 0x18                           ; 004daacc
    PUSH 0x18                           ; 004daace
    PUSH 0x5db4c0                       ; 004daad0 | = "shotshell24x24"
    PUSH 0x1d02e94                      ; 004daad5
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004daada
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004daadf
    PUSH 0x18                           ; 004daae2
    PUSH 0x18                           ; 004daae4
    PUSH 0x5db4cf                       ; 004daae6 | = "silverbullet24x24"
    PUSH 0x1d02ea8                      ; 004daaeb
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004daaf0
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004daaf5
    PUSH 0x18                           ; 004daaf8
    PUSH 0x18                           ; 004daafa
    PUSH 0x5db4e1                       ; 004daafc | = "holybullet24x24"
    PUSH 0x1d02ebc                      ; 004dab01
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004dab06
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004dab0b
    PUSH 0x40                           ; 004dab0e
    PUSH 0x40                           ; 004dab10
    PUSH 0x5db4f1                       ; 004dab12 | = "compass_background"
    PUSH 0x1d02ed0                      ; 004dab17
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004dab1c
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004dab21
    MOV ESI,0x5db504                    ; 004dab24 | = "compass_arrow.raw"
    MOV EDI,0x1d02eec                   ; 004dab29
    PUSH EDI                            ; 004dab2e
    MOV AL,byte ptr [ESI]               ; 004dab2f | = "compass_arrow.raw" | s_compass_arrow_raw_005db504+2
        ;   Label: LAB_004dab2f
    MOV byte ptr [EDI],AL               ; 004dab31 | DAT_01d02eec | DAT_01d02eee
    CMP AL,0x0                          ; 004dab33
    JZ 0x004dab47                       ; 004dab35
        ;   XREF to: 004dab47 (CONDITIONAL_JUMP)  ; LAB_004dab47
    MOV AL,byte ptr [ESI + 0x1]         ; 004dab37 | s_compass_arrow_raw_005db504+1 | s_compass_arrow_raw_005db504+3
    ADD ESI,0x2                         ; 004dab3a
    MOV byte ptr [EDI + 0x1],AL         ; 004dab3d | DAT_01d02eed | DAT_01d02eef
    ADD EDI,0x2                         ; 004dab40
    CMP AL,0x0                          ; 004dab43
    JNZ 0x004dab2f                      ; 004dab45
        ;   XREF to: 004dab2f (CONDITIONAL_JUMP)  ; LAB_004dab2f
    POP EDI                             ; 004dab47
        ;   Label: LAB_004dab47
    PUSH 0x1d02ee4                      ; 004dab48
    CALL engine_texture.cpp_FUN_00574e00 ; 004dab4d
        ;   XREF to: 00574e00 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00574e00()
    MOV EAX,[0x00616494]                ; 004dab52 | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x4]       ; 004dab57 | g_CGameInstance.game_pixy
    ADD ESP,0x4                         ; 004dab5a
    CMP ECX,0x180                       ; 004dab5d
    JGE 0x004dac35                      ; 004dab63
        ;   XREF to: 004dac35 (CONDITIONAL_JUMP)  ; LAB_004dac35
    PUSH 0x2                            ; 004dab69
    PUSH 0x2                            ; 004dab6b
    PUSH 0x1cf01c4                      ; 004dab6d
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0 ; 004dab72
        ;   XREF to: 0040dbd0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004dab77
    PUSH 0x2                            ; 004dab7a
    PUSH 0x2                            ; 004dab7c
    PUSH 0x1cf01ec                      ; 004dab7e
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0 ; 004dab83
        ;   XREF to: 0040dbd0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004dab88
    PUSH 0x2                            ; 004dab8b
    PUSH 0x2                            ; 004dab8d
    PUSH 0x1d02e1c                      ; 004dab8f
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0 ; 004dab94
        ;   XREF to: 0040dbd0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004dab99
    PUSH 0x2                            ; 004dab9c
    PUSH 0x2                            ; 004dab9e
    PUSH 0x1d02e30                      ; 004daba0
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0 ; 004daba5
        ;   XREF to: 0040dbd0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004dabaa
    PUSH 0x2                            ; 004dabad
    PUSH 0x2                            ; 004dabaf
    PUSH 0x1d02e44                      ; 004dabb1
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0 ; 004dabb6
        ;   XREF to: 0040dbd0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004dabbb
    PUSH 0x2                            ; 004dabbe
    PUSH 0x2                            ; 004dabc0
    PUSH 0x1d02e58                      ; 004dabc2
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0 ; 004dabc7
        ;   XREF to: 0040dbd0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004dabcc
    PUSH 0x2                            ; 004dabcf
    PUSH 0x2                            ; 004dabd1
    PUSH 0x1d02e6c                      ; 004dabd3
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0 ; 004dabd8
        ;   XREF to: 0040dbd0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004dabdd
    PUSH 0x2                            ; 004dabe0
    PUSH 0x2                            ; 004dabe2
    PUSH 0x1d02e80                      ; 004dabe4
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0 ; 004dabe9
        ;   XREF to: 0040dbd0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004dabee
    PUSH 0x2                            ; 004dabf1
    PUSH 0x2                            ; 004dabf3
    PUSH 0x1d02e94                      ; 004dabf5
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0 ; 004dabfa
        ;   XREF to: 0040dbd0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004dabff
    PUSH 0x2                            ; 004dac02
    PUSH 0x2                            ; 004dac04
    PUSH 0x1d02ea8                      ; 004dac06
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0 ; 004dac0b
        ;   XREF to: 0040dbd0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004dac10
    PUSH 0x2                            ; 004dac13
    PUSH 0x2                            ; 004dac15
    PUSH 0x1d02ebc                      ; 004dac17
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0 ; 004dac1c
        ;   XREF to: 0040dbd0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004dac21
    PUSH 0x2                            ; 004dac24
    PUSH 0x2                            ; 004dac26
    PUSH 0x1d02ed0                      ; 004dac28
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0 ; 004dac2d
        ;   XREF to: 0040dbd0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 004dac32
    PUSH 0x5db516                       ; 004dac35 | DAT_005db516
        ;   Label: LAB_004dac35
    PUSH 0x5db519                       ; 004dac3a | = "itemlist.txt"
    XOR EBX,EBX                         ; 004dac3f
    PUSH 0x5db526                       ; 004dac41 | DAT_005db526
    MOV dword ptr [0x01cf0200],EBX      ; 004dac46 | DAT_01cf0200
    CALL engine_dosio.cpp_FUN_00460c70  ; 004dac4c
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004dac51
    MOV EBX,EAX                         ; 004dac54
    TEST EAX,EAX                        ; 004dac56
    JZ 0x004dacb4                       ; 004dac58
        ;   XREF to: 004dacb4 (CONDITIONAL_JUMP)  ; LAB_004dacb4
    TEST byte ptr [EBX + 0xc],0x10      ; 004dac5a
        ;   Label: LAB_004dac5a
    JNZ 0x004dacab                      ; 004dac5e
        ;   XREF to: 004dacab (CONDITIONAL_JUMP)  ; LAB_004dacab
    IMUL EAX,dword ptr [0x01cf0200],0x300 ; 004dac60 | DAT_01cf0200
    PUSH EBX                            ; 004dac6a
    ADD EAX,0x1cf0208                   ; 004dac6b
    PUSH EAX                            ; 004dac70
    CALL core_inv.cpp_loadItem_FUN_004da720 ; 004dac71
        ;   XREF to: 004da720 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_loadItem_FUN_004da720(SInventoryItemInfo * item_info, _FILE * file_handle)
    ADD ESP,0x8                         ; 004dac76
    TEST EAX,EAX                        ; 004dac79
    JZ 0x004dacab                       ; 004dac7b
        ;   XREF to: 004dacab (CONDITIONAL_JUMP)  ; LAB_004dacab
    INC dword ptr [0x01cf0200]          ; 004dac7d | DAT_01cf0200
    JMP 0x004dac5a                      ; 004dac83
        ;   XREF to: 004dac5a (UNCONDITIONAL_JUMP)  ; LAB_004dac5a
    PUSH 0x617cd4                       ; 004dac85 | DAT_00617cd4
        ;   Label: LAB_004dac85
    PUSH 0x617cd0                       ; 004dac8a | DAT_00617cd0
    PUSH 0x5db446                       ; 004dac8f | = "%d,%d\n"
    PUSH EAX                            ; 004dac94
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004dac95
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x10                        ; 004dac9a
    PUSH EBX                            ; 004dac9d
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004dac9e
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004daca3
    JMP 0x004da9bf                      ; 004daca6
        ;   XREF to: 004da9bf (UNCONDITIONAL_JUMP)  ; LAB_004da9bf
    PUSH EBX                            ; 004dacab
        ;   Label: LAB_004dacab
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004dacac
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004dacb1
    POP EBP                             ; 004dacb4
        ;   Label: LAB_004dacb4
    POP EDI                             ; 004dacb5
    POP ESI                             ; 004dacb6
    POP EBX                             ; 004dacb7
    RET                                 ; 004dacb8

