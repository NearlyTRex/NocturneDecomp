; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_renderAllItems_FUN_004dda90(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x580]:8  local_580
; undefined8       Stack[-0x578]:8  local_578
; undefined4       Stack[-0x570]:4  local_570
; undefined4       Stack[-0x56c]:4  local_56c
; undefined4       Stack[-0x568]:4  local_568
; undefined        Stack[-0x564]:1  local_564
; undefined        Stack[-0x464]:1  local_464
; undefined        Stack[-0x364]:1  local_364
; undefined        Stack[-0x264]:1  local_264
; undefined        Stack[-0x164]:1  local_164
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004b6f30 at 004b7319
;
; Referenced Globals:
;   undefined4 s_GCHolycross_005c6602+1
;   TerminatedCString s_infinite_005c660e
;   undefined4 DAT_005c6617
;   undefined4 DAT_005c661a
;   undefined4 DAT_005c661d
;   TerminatedCString s_s_s_005c661f
;   TerminatedCString s_s_s_005c6626
;   TerminatedCString s_d_x_3_0f_005c662d
;   TerminatedCString s_s_s_005c6639
;   undefined4 DAT_005c6640
;   undefined4 DAT_005c6643
;   undefined4 DAT_005c6645
;   undefined4 DAT_005c664b
;   undefined4 DAT_005c664f
;   undefined4 DAT_005c6657
;   ... and 18 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_0040c790
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_inv.cpp_FUN_004dd310
;   core_inv.cpp_getItemDescription_FUN_004d9eb0
;   core_inv.cpp_getItemDisplayName_FUN_004d9e40
;   core_inv.cpp_loadAssets_FUN_004da570
;   crt_math.c_round_FUN_005a3120
;   crt_unknown.c_FUN_005a28c0
;   engine_3d.c_setRenderAlpha_FUN_00406bf0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0
;   engine_alphabit.cpp_FUN_0040d8a0
;   engine_font.cpp_FUN_004b0a20
;   engine_font.cpp_FUN_004b2a80
;   engine_font.cpp_FUN_004b2e40
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dda90
        ;   Label: core_inv.cpp_CInventory_renderAllItems_FUN_004dda90
    PUSH ESI                            ; 004dda91
    PUSH EDI                            ; 004dda92
    PUSH EBP                            ; 004dda93
    MOV EBP,ESP                         ; 004dda94
    SUB ESP,0x568                       ; 004dda96
    AND ESP,0xfffffff8                  ; 004dda9c
    MOV EAX,[0x005fe9dc]                ; 004dda9f | g_CGamePtr
    CMP dword ptr [EAX + 0x24c],0x0     ; 004ddaa4 | g_CGameInstance.field588_0x24c
    JNZ 0x004de349                      ; 004ddaab
        ;   XREF to: 004de349 (CONDITIONAL_JUMP)  ; LAB_004de349
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ddab1
    MOV EDX,dword ptr [0x01d5ba14]      ; 004ddab4 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX + 0x4]       ; 004ddaba
    CMP EAX,dword ptr [EDX*0x4 + 0x1d5ba04] ; 004ddabd
    JNZ 0x004de349                      ; 004ddac4
        ;   XREF to: 004de349 (CONDITIONAL_JUMP)  ; LAB_004de349
    MOV EAX,[0x005fe4b0]                ; 004ddaca | g_CFieldNotesPtr
    CMP dword ptr [EAX + 0x40],0x0      ; 004ddacf | g_CFieldNotesInstance.field64_0x40
    JNZ 0x004de350                      ; 004ddad3
        ;   XREF to: 004de350 (CONDITIONAL_JUMP)  ; LAB_004de350
    MOV ESI,dword ptr [0x005fba1c]      ; 004ddad9 | DAT_005fba1c
        ;   Label: LAB_004ddad9
    CMP ESI,dword ptr [0x01d70a34]      ; 004ddadf | DAT_01d70a34
    JZ 0x004ddaec                       ; 004ddae5
        ;   XREF to: 004ddaec (CONDITIONAL_JUMP)  ; LAB_004ddaec
    CALL core_inv.cpp_loadAssets_FUN_004da570 ; 004ddae7
        ;   XREF to: 004da570 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_loadAssets_FUN_004da570()
    MOV EAX,[0x01c6cee8]                ; 004ddaec | DAT_01c6cee8
        ;   Label: LAB_004ddaec
    MOV dword ptr [ESP + 0x520],EAX     ; 004ddaf1
    MOV EAX,[0x01549ab4]                ; 004ddaf8 | DAT_01549ab4
    XOR EDI,EDI                         ; 004ddafd
    MOV dword ptr [ESP + 0x534],EAX     ; 004ddaff
    MOV EAX,[0x005fba1c]                ; 004ddb06 | DAT_005fba1c
    MOV dword ptr [0x01c6cee8],EDI      ; 004ddb0b | DAT_01c6cee8
    CMP EAX,0x180                       ; 004ddb11
    JGE 0x004ddb28                      ; 004ddb16
        ;   XREF to: 004ddb28 (CONDITIONAL_JUMP)  ; LAB_004ddb28
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ddb18
    CMP dword ptr [EAX + 0x454],0x0     ; 004ddb1b
    JZ 0x004de380                       ; 004ddb22
        ;   XREF to: 004de380 (CONDITIONAL_JUMP)  ; LAB_004de380
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ddb28
        ;   Label: LAB_004ddb28
    CMP dword ptr [EAX + 0x338],0x0     ; 004ddb2b
    JZ 0x004ddcd0                       ; 004ddb32
        ;   XREF to: 004ddcd0 (CONDITIONAL_JUMP)  ; LAB_004ddcd0
    FLD float ptr [EAX + 0x340]         ; 004ddb38
    FLDZ                                ; 004ddb3e
    FCOMPP                              ; 004ddb40
    FNSTSW AX                           ; 004ddb42
    SAHF                                ; 004ddb44
    JNC 0x004ddcd0                      ; 004ddb45
        ;   XREF to: 004ddcd0 (CONDITIONAL_JUMP)  ; LAB_004ddcd0
    MOV EBX,0x70                        ; 004ddb4b
    MOV EDI,0x10                        ; 004ddb50
    MOV ESI,dword ptr [0x00600180]      ; 004ddb55 | DAT_00600180
    MOV EAX,[0x005fba1c]                ; 004ddb5b | DAT_005fba1c
    MOV dword ptr [ESP + 0x528],EBX     ; 004ddb60
    MOV EBX,dword ptr [0x00600184]      ; 004ddb67 | DAT_00600184
    CMP EAX,0x180                       ; 004ddb6d
    JGE 0x004ddb84                      ; 004ddb72
        ;   XREF to: 004ddb84 (CONDITIONAL_JUMP)  ; LAB_004ddb84
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ddb74
    CMP dword ptr [EAX + 0x454],0x0     ; 004ddb77
    JZ 0x004de391                       ; 004ddb7e
        ;   XREF to: 004de391 (CONDITIONAL_JUMP)  ; LAB_004de391
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ddb84
        ;   Label: LAB_004ddb84
    PUSH 0x5c6603                       ; 004ddb87 | s_GCHolycross_005c6602+1
    MOV EDX,dword ptr [EAX + 0x338]     ; 004ddb8c
    PUSH EDX                            ; 004ddb92
    CALL core_actor.cpp_FUN_0040c790    ; 004ddb93
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004ddb98
    TEST EAX,EAX                        ; 004ddb9b
    JZ 0x004de3c1                       ; 004ddb9d
        ;   XREF to: 004de3c1 (CONDITIONAL_JUMP)  ; LAB_004de3c1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ddba3
        ;   Label: LAB_004ddba3
    CMP dword ptr [EAX + 0x454],0x0     ; 004ddba6
    JZ 0x004ddcd0                       ; 004ddbad
        ;   XREF to: 004ddcd0 (CONDITIONAL_JUMP)  ; LAB_004ddcd0
    PUSH 0x1                            ; 004ddbb3
    MOV ECX,dword ptr [EAX + 0x338]     ; 004ddbb5
    PUSH ECX                            ; 004ddbbb
    PUSH EAX                            ; 004ddbbc
    CALL core_inv.cpp_FUN_004dd310      ; 004ddbbd
        ;   XREF to: 004dd310 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dd310()
    ADD ESP,0xc                         ; 004ddbc2
    TEST EAX,EAX                        ; 004ddbc5
    JZ 0x004de4d6                       ; 004ddbc7
        ;   XREF to: 004de4d6 (CONDITIONAL_JUMP)  ; LAB_004de4d6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ddbcd
    MOV EDX,dword ptr [EAX + 0x338]     ; 004ddbd0
    PUSH EDX                            ; 004ddbd6
    CALL core_inv.cpp_getItemDescription_FUN_004d9eb0 ; 004ddbd7
        ;   XREF to: 004d9eb0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDescription_FUN_004d9eb0()
    ADD ESP,0x4                         ; 004ddbdc
    PUSH EAX                            ; 004ddbdf
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ddbe0
    MOV ECX,dword ptr [EAX + 0x338]     ; 004ddbe3
    PUSH ECX                            ; 004ddbe9
    CALL core_inv.cpp_getItemDisplayName_FUN_004d9e40 ; 004ddbea
        ;   XREF to: 004d9e40 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDisplayName_FUN_004d9e40()
    ADD ESP,0x4                         ; 004ddbef
    PUSH EAX                            ; 004ddbf2
    PUSH 0x5c661f                       ; 004ddbf3 | = "%s\n\n%s"
    LEA EAX,[ESP + 0x20]                ; 004ddbf8
        ;   Label: LAB_004ddbf8
    PUSH EAX                            ; 004ddbfc
    CALL crt_unknown.c_FUN_005a28c0     ; 004ddbfd
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004ddc02
    MOV EAX,dword ptr [ESP + 0x534]     ; 004ddc05
    MOV EDX,dword ptr [ESP + 0x528]     ; 004ddc0c
    MOV dword ptr [ESP + 0x554],EAX     ; 004ddc13
    MOV EAX,ESI                         ; 004ddc1a
    SUB EAX,EDX                         ; 004ddc1c
    PUSH EAX                            ; 004ddc1e
    PUSH 0x100                          ; 004ddc1f
    PUSH 0xa                            ; 004ddc24
    PUSH 0x1d5be88                      ; 004ddc26
    LEA EAX,[ESP + 0x24]                ; 004ddc2b
    PUSH EAX                            ; 004ddc2f
    MOV ECX,dword ptr [ESP + 0x548]     ; 004ddc30
    PUSH ECX                            ; 004ddc37
    CALL engine_font.cpp_FUN_004b2e40   ; 004ddc38
        ;   XREF to: 004b2e40 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b2e40()
    MOV dword ptr [ESP + 0x530],EAX     ; 004ddc3d
    ADD ESP,0x18                        ; 004ddc44
    PUSH 0x58                           ; 004ddc47
    MOV dword ptr [ESP + 0x544],EAX     ; 004ddc49
    MOV EAX,dword ptr [ESP + 0x538]     ; 004ddc50
    PUSH EAX                            ; 004ddc57
    CALL engine_font.cpp_FUN_004b30f0   ; 004ddc58
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004ddc5d
    MOV dword ptr [ESP + 0x544],EAX     ; 004ddc60
    MOV EAX,[0x005fba1c]                ; 004ddc67 | DAT_005fba1c
    SUB EAX,EBX                         ; 004ddc6c
    LEA EBX,[EAX + EDI*0x1]             ; 004ddc6e
    MOV EAX,[0x005fba18]                ; 004ddc71 | DAT_005fba18
    SUB EAX,ESI                         ; 004ddc76
    MOV EDX,dword ptr [ESP + 0x518]     ; 004ddc78
    ADD EAX,EDI                         ; 004ddc7f
    XOR ESI,ESI                         ; 004ddc81
    MOV dword ptr [ESP + 0x558],EAX     ; 004ddc83
    TEST EDX,EDX                        ; 004ddc8a
    JLE 0x004ddcd0                      ; 004ddc8c
        ;   XREF to: 004ddcd0 (CONDITIONAL_JUMP)  ; LAB_004ddcd0
    MOV EDI,0x1d5be88                   ; 004ddc8e
    PUSH 0x0                            ; 004ddc93
        ;   Label: LAB_004ddc93
    PUSH 0xf8                           ; 004ddc95
    PUSH EBX                            ; 004ddc9a
    MOV ECX,dword ptr [ESP + 0x564]     ; 004ddc9b
    PUSH ECX                            ; 004ddca2
    PUSH EDI                            ; 004ddca3
    MOV EAX,dword ptr [ESP + 0x568]     ; 004ddca4
    PUSH EAX                            ; 004ddcab
    INC ESI                             ; 004ddcac
    CALL engine_font.cpp_FUN_004b0a20   ; 004ddcad
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004ddcb2
    ADD EDI,0x100                       ; 004ddcb5
    MOV EDX,dword ptr [ESP + 0x544]     ; 004ddcbb
    MOV ECX,dword ptr [ESP + 0x540]     ; 004ddcc2
    ADD EBX,EDX                         ; 004ddcc9
    CMP ESI,ECX                         ; 004ddccb
    JL 0x004ddc93                       ; 004ddccd
        ;   XREF to: 004ddc93 (CONDITIONAL_JUMP)  ; LAB_004ddc93
    NOP                                 ; 004ddccf
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ddcd0
        ;   Label: LAB_004ddcd0
    CMP dword ptr [EAX + 0x33c],0x0     ; 004ddcd3
    JZ 0x004ddf00                       ; 004ddcda
        ;   XREF to: 004ddf00 (CONDITIONAL_JUMP)  ; LAB_004ddf00
    FLD float ptr [EAX + 0x344]         ; 004ddce0
    FLDZ                                ; 004ddce6
    FCOMPP                              ; 004ddce8
    FNSTSW AX                           ; 004ddcea
    SAHF                                ; 004ddcec
    JNC 0x004ddf00                      ; 004ddced
        ;   XREF to: 004ddf00 (CONDITIONAL_JUMP)  ; LAB_004ddf00
    MOV ESI,0x70                        ; 004ddcf3
    MOV EDI,0x10                        ; 004ddcf8
    MOV EBX,dword ptr [0x00600184]      ; 004ddcfd | DAT_00600184
    MOV EAX,[0x005fba1c]                ; 004ddd03 | DAT_005fba1c
    MOV dword ptr [ESP + 0x530],ESI     ; 004ddd08
    MOV ESI,dword ptr [0x00600180]      ; 004ddd0f | DAT_00600180
    CMP EAX,0x180                       ; 004ddd15
    JGE 0x004ddd2c                      ; 004ddd1a
        ;   XREF to: 004ddd2c (CONDITIONAL_JUMP)  ; LAB_004ddd2c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ddd1c
    CMP dword ptr [EAX + 0x454],0x0     ; 004ddd1f
    JZ 0x004de506                       ; 004ddd26
        ;   XREF to: 004de506 (CONDITIONAL_JUMP)  ; LAB_004de506
    MOV EAX,[0x01d5b9b4]                ; 004ddd2c | g_CHealthItemClassInfo.name_hash
        ;   Label: LAB_004ddd2c
    PUSH EAX                            ; 004ddd31
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ddd32
    MOV EDX,dword ptr [EAX + 0x33c]     ; 004ddd35
    PUSH EDX                            ; 004ddd3b
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004ddd3c
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004ddd41
    TEST EAX,EAX                        ; 004ddd44
    JZ 0x004ddde1                       ; 004ddd46
        ;   XREF to: 004ddde1 (CONDITIONAL_JUMP)  ; LAB_004ddde1
    SUB ESP,0x8                         ; 004ddd4c
    FLD float ptr [EAX + 0x2d8]         ; 004ddd4f
    FSTP double ptr [ESP]               ; 004ddd55
    MOV ECX,dword ptr [EAX + 0x2d4]     ; 004ddd58
    PUSH ECX                            ; 004ddd5e
    PUSH 0x5c662d                       ; 004ddd5f | = "%d x%3.0f%%"
    LEA EAX,[ESP + 0x224]               ; 004ddd64
    PUSH EAX                            ; 004ddd6b
    CALL crt_unknown.c_FUN_005a28c0     ; 004ddd6c
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x14                        ; 004ddd71
    PUSH 0x58                           ; 004ddd74
    MOV EAX,dword ptr [ESP + 0x538]     ; 004ddd76
    PUSH EAX                            ; 004ddd7d
    CALL engine_font.cpp_FUN_004b30f0   ; 004ddd7e
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    MOV dword ptr [ESP + 0x520],EAX     ; 004ddd83
    ADD ESP,0x8                         ; 004ddd8a
    LEA EAX,[ESP + 0x214]               ; 004ddd8d
    PUSH EAX                            ; 004ddd94
    MOV EDX,dword ptr [ESP + 0x538]     ; 004ddd95
    PUSH EDX                            ; 004ddd9c
    CALL engine_font.cpp_FUN_004b2a80   ; 004ddd9d
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b2a80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004ddda2
    MOV EDX,dword ptr [0x005fba1c]      ; 004ddda5 | DAT_005fba1c
    PUSH 0x0                            ; 004dddab
    MOV ECX,dword ptr [ESP + 0x51c]     ; 004dddad
    SUB EDX,EDI                         ; 004dddb4
    PUSH 0xf8                           ; 004dddb6
    SUB EDX,ECX                         ; 004dddbb
    PUSH EDX                            ; 004dddbd
    MOV EDX,dword ptr [0x005fba18]      ; 004dddbe | DAT_005fba18
    SUB EDX,EDI                         ; 004dddc4
    SUB EDX,EAX                         ; 004dddc6
    PUSH EDX                            ; 004dddc8
    LEA EAX,[ESP + 0x224]               ; 004dddc9
    PUSH EAX                            ; 004dddd0
    MOV EAX,dword ptr [ESP + 0x548]     ; 004dddd1
    PUSH EAX                            ; 004dddd8
    CALL engine_font.cpp_FUN_004b0a20   ; 004dddd9
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004dddde
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ddde1
        ;   Label: LAB_004ddde1
    CMP dword ptr [EAX + 0x454],0x0     ; 004ddde4
    JZ 0x004ddf00                       ; 004dddeb
        ;   XREF to: 004ddf00 (CONDITIONAL_JUMP)  ; LAB_004ddf00
    MOV ECX,dword ptr [EAX + 0x33c]     ; 004dddf1
    PUSH ECX                            ; 004dddf7
    CALL core_inv.cpp_getItemDescription_FUN_004d9eb0 ; 004dddf8
        ;   XREF to: 004d9eb0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDescription_FUN_004d9eb0()
    ADD ESP,0x4                         ; 004dddfd
    PUSH EAX                            ; 004dde00
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dde01
    MOV EDX,dword ptr [EAX + 0x33c]     ; 004dde04
    PUSH EDX                            ; 004dde0a
    CALL core_inv.cpp_getItemDisplayName_FUN_004d9e40 ; 004dde0b
        ;   XREF to: 004d9e40 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDisplayName_FUN_004d9e40()
    ADD ESP,0x4                         ; 004dde10
    PUSH EAX                            ; 004dde13
    PUSH 0x5c6639                       ; 004dde14 | = "%s\n\n%s"
    LEA EAX,[ESP + 0x320]               ; 004dde19
    PUSH EAX                            ; 004dde20
    CALL crt_unknown.c_FUN_005a28c0     ; 004dde21
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004dde26
    MOV EAX,dword ptr [ESP + 0x534]     ; 004dde29
    MOV ECX,dword ptr [ESP + 0x530]     ; 004dde30
    MOV dword ptr [ESP + 0x550],EAX     ; 004dde37
    MOV EAX,ESI                         ; 004dde3e
    SUB EAX,ECX                         ; 004dde40
    PUSH EAX                            ; 004dde42
    PUSH 0x100                          ; 004dde43
    PUSH 0xa                            ; 004dde48
    PUSH 0x1d5c888                      ; 004dde4a
    LEA EAX,[ESP + 0x324]               ; 004dde4f
    PUSH EAX                            ; 004dde56
    MOV EAX,dword ptr [ESP + 0x548]     ; 004dde57
    PUSH EAX                            ; 004dde5e
    CALL engine_font.cpp_FUN_004b2e40   ; 004dde5f
        ;   XREF to: 004b2e40 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b2e40()
    MOV dword ptr [ESP + 0x530],EAX     ; 004dde64
    ADD ESP,0x18                        ; 004dde6b
    PUSH 0x58                           ; 004dde6e
    MOV EDX,dword ptr [ESP + 0x538]     ; 004dde70
    PUSH EDX                            ; 004dde77
    MOV dword ptr [ESP + 0x544],EAX     ; 004dde78
    CALL engine_font.cpp_FUN_004b30f0   ; 004dde7f
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004dde84
    MOV dword ptr [ESP + 0x538],EAX     ; 004dde87
    MOV EAX,[0x005fba1c]                ; 004dde8e | DAT_005fba1c
    SUB EAX,EBX                         ; 004dde93
    LEA EBX,[EAX + EDI*0x1]             ; 004dde95
    MOV EAX,[0x005fba18]                ; 004dde98 | DAT_005fba18
    SUB EAX,ESI                         ; 004dde9d
    MOV ECX,dword ptr [ESP + 0x518]     ; 004dde9f
    ADD EAX,EDI                         ; 004ddea6
    XOR ESI,ESI                         ; 004ddea8
    MOV dword ptr [ESP + 0x548],EAX     ; 004ddeaa
    TEST ECX,ECX                        ; 004ddeb1
    JLE 0x004ddf00                      ; 004ddeb3
        ;   XREF to: 004ddf00 (CONDITIONAL_JUMP)  ; LAB_004ddf00
    MOV EDI,0x1d5c888                   ; 004ddeb5
    PUSH 0x0                            ; 004ddeba
        ;   Label: LAB_004ddeba
    PUSH 0xf8                           ; 004ddebc
    PUSH EBX                            ; 004ddec1
    MOV EAX,dword ptr [ESP + 0x554]     ; 004ddec2
    PUSH EAX                            ; 004ddec9
    PUSH EDI                            ; 004ddeca
    MOV EDX,dword ptr [ESP + 0x564]     ; 004ddecb
    PUSH EDX                            ; 004dded2
    INC ESI                             ; 004dded3
    CALL engine_font.cpp_FUN_004b0a20   ; 004dded4
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004dded9
    ADD EDI,0x100                       ; 004ddedc
    MOV ECX,dword ptr [ESP + 0x538]     ; 004ddee2
    MOV EAX,dword ptr [ESP + 0x53c]     ; 004ddee9
    ADD EBX,ECX                         ; 004ddef0
    CMP ESI,EAX                         ; 004ddef2
    JL 0x004ddeba                       ; 004ddef4
        ;   XREF to: 004ddeba (CONDITIONAL_JUMP)  ; LAB_004ddeba
    LEA EAX,[EAX]                       ; 004ddef6
    LEA EDX,[EDX]                       ; 004ddefc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ddf00
        ;   Label: LAB_004ddf00
    FLD float ptr [EAX + 0x344]         ; 004ddf03
    FLDZ                                ; 004ddf09
    FCOMPP                              ; 004ddf0b
    FNSTSW AX                           ; 004ddf0d
    SAHF                                ; 004ddf0f
    JNC 0x004de536                      ; 004ddf10
        ;   XREF to: 004de536 (CONDITIONAL_JUMP)  ; LAB_004de536
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ddf16
        ;   Label: LAB_004ddf16
    MOV EAX,dword ptr [EAX + 0x348]     ; 004ddf19
    MOV dword ptr [ESP + 0xc],EAX       ; 004ddf1f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ddf23
    FLD float ptr [EAX + 0x344]         ; 004ddf26
    FCOMP float ptr [ESP + 0xc]         ; 004ddf2c
    FNSTSW AX                           ; 004ddf30
    SAHF                                ; 004ddf32
    JBE 0x004ddf42                      ; 004ddf33
        ;   XREF to: 004ddf42 (CONDITIONAL_JUMP)  ; LAB_004ddf42
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ddf35
    MOV EAX,dword ptr [EAX + 0x344]     ; 004ddf38
    MOV dword ptr [ESP + 0xc],EAX       ; 004ddf3e
    FLD float ptr [ESP + 0xc]           ; 004ddf42
        ;   Label: LAB_004ddf42
    MOV EDX,0xffff                      ; 004ddf46
    FLD1                                ; 004ddf4b
    MOV dword ptr [ESP + 0x52c],EDX     ; 004ddf4d
    FCOMPP                              ; 004ddf54
    FNSTSW AX                           ; 004ddf56
    SAHF                                ; 004ddf58
    JBE 0x004ddf71                      ; 004ddf59
        ;   XREF to: 004ddf71 (CONDITIONAL_JUMP)  ; LAB_004ddf71
    FLD float ptr [ESP + 0xc]           ; 004ddf5b
    FMUL float ptr [0x005c664b]         ; 004ddf5f | DAT_005c664b
    CALL crt_math.c_round_FUN_005a3120  ; 004ddf65
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x52c]       ; 004ddf6a
    MOV EAX,[0x01d5ba14]                ; 004ddf71 | DAT_01d5ba14
        ;   Label: LAB_004ddf71
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004ddf76
    FLD float ptr [EAX + 0x2538]        ; 004ddf7d
    FMUL double ptr [0x005c664f]        ; 004ddf83 | DAT_005c664f
    FST float ptr [ESP + 0x10]          ; 004ddf89
    FLDZ                                ; 004ddf8d
    FCOMPP                              ; 004ddf8f
    FNSTSW AX                           ; 004ddf91
    SAHF                                ; 004ddf93
    JBE 0x004ddf9c                      ; 004ddf94
        ;   XREF to: 004ddf9c (CONDITIONAL_JUMP)  ; LAB_004ddf9c
    XOR ECX,ECX                         ; 004ddf96
    MOV dword ptr [ESP + 0x10],ECX      ; 004ddf98
    FLD float ptr [ESP + 0x10]          ; 004ddf9c
        ;   Label: LAB_004ddf9c
    FLD1                                ; 004ddfa0
    FCOMPP                              ; 004ddfa2
    FNSTSW AX                           ; 004ddfa4
    SAHF                                ; 004ddfa6
    JNC 0x004ddfb1                      ; 004ddfa7
        ;   XREF to: 004ddfb1 (CONDITIONAL_JUMP)  ; LAB_004ddfb1
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 004ddfa9
    MOV EBX,0x3f                        ; 004ddfb1
        ;   Label: LAB_004ddfb1
    MOV ESI,dword ptr [0x005fba1c]      ; 004ddfb6 | DAT_005fba1c
    MOV ECX,0x30                        ; 004ddfbc
    CMP ESI,0x180                       ; 004ddfc1
    JGE 0x004ddfd3                      ; 004ddfc7
        ;   XREF to: 004ddfd3 (CONDITIONAL_JUMP)  ; LAB_004ddfd3
    MOV EBX,0x1f                        ; 004ddfc9
    MOV ECX,0x18                        ; 004ddfce
    MOV EAX,[0x01d5ba14]                ; 004ddfd3 | DAT_01d5ba14
        ;   Label: LAB_004ddfd3
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004ddfd8
    MOV ESI,dword ptr [0x005fba18]      ; 004ddfdf | DAT_005fba18
    FILD dword ptr [EAX + 0x20b80]      ; 004ddfe5
    FMUL double ptr [0x005c664f]        ; 004ddfeb | DAT_005c664f
    SUB ESI,0x4                         ; 004ddff1
    MOV EDI,0x4                         ; 004ddff4
    SUB ESI,ECX                         ; 004ddff9
    FST float ptr [ESP + 0x8]           ; 004ddffb
    FLDZ                                ; 004ddfff
    FCOMPP                              ; 004de001
    FNSTSW AX                           ; 004de003
    SAHF                                ; 004de005
    JBE 0x004de00e                      ; 004de006
        ;   XREF to: 004de00e (CONDITIONAL_JUMP)  ; LAB_004de00e
    XOR EAX,EAX                         ; 004de008
    MOV dword ptr [ESP + 0x8],EAX       ; 004de00a
    FLD float ptr [ESP + 0x8]           ; 004de00e
        ;   Label: LAB_004de00e
    FLD1                                ; 004de012
    FCOMPP                              ; 004de014
    FNSTSW AX                           ; 004de016
    SAHF                                ; 004de018
    JNC 0x004de023                      ; 004de019
        ;   XREF to: 004de023 (CONDITIONAL_JUMP)  ; LAB_004de023
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 004de01b
    MOV EAX,dword ptr [ESP + 0x52c]     ; 004de023
        ;   Label: LAB_004de023
    MOV EDX,EAX                         ; 004de02a
    SAR EDX,0x1f                        ; 004de02c
    SUB EAX,EDX                         ; 004de02f
    SAR EAX,0x1                         ; 004de031
    MOV dword ptr [ESP + 0x564],EBX     ; 004de033
    DEC ECX                             ; 004de03a
    FILD dword ptr [ESP + 0x564]        ; 004de03b
    FST float ptr [ESP + 0x518]         ; 004de042
    FMUL float ptr [ESP + 0x8]          ; 004de049
    MOV dword ptr [ESP + 0x51c],ECX     ; 004de04d
    PUSH EAX                            ; 004de054
    FSUBR float ptr [ESP + 0x51c]       ; 004de055
    PUSH EBX                            ; 004de05c
    CALL crt_math.c_round_FUN_005a3120  ; 004de05d
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    PUSH ECX                            ; 004de062
    FISTP dword ptr [ESP + 0x520]       ; 004de063
    MOV ECX,dword ptr [ESP + 0x520]     ; 004de06a
    PUSH ECX                            ; 004de071
    PUSH 0x0                            ; 004de072
    MOV dword ptr [ESP + 0x578],EAX     ; 004de074
    LEA EAX,[ECX + EDI*0x1]             ; 004de07b
    PUSH EAX                            ; 004de07e
    PUSH ESI                            ; 004de07f
    PUSH 0x1d708b8                      ; 004de080
    CALL engine_alphabit.cpp_FUN_0040d8a0 ; 004de085
        ;   XREF to: 0040d8a0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040d8a0()
    ADD ESP,0x20                        ; 004de08a
    FLD float ptr [ESP + 0x518]         ; 004de08d
    FMUL float ptr [ESP + 0x10]         ; 004de094
    MOV EAX,dword ptr [ESP + 0x564]     ; 004de098
    MOV EDX,dword ptr [ESP + 0x51c]     ; 004de09f
    PUSH EAX                            ; 004de0a6
    FSUBR float ptr [ESP + 0x51c]       ; 004de0a7
    PUSH EBX                            ; 004de0ae
    CALL crt_math.c_round_FUN_005a3120  ; 004de0af
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    PUSH EDX                            ; 004de0b4
    FISTP dword ptr [ESP + 0x520]       ; 004de0b5
    MOV ECX,dword ptr [ESP + 0x520]     ; 004de0bc
    PUSH ECX                            ; 004de0c3
    PUSH 0x0                            ; 004de0c4
    LEA EAX,[ECX + EDI*0x1]             ; 004de0c6
    PUSH EAX                            ; 004de0c9
    PUSH ESI                            ; 004de0ca
    PUSH 0x1d70890                      ; 004de0cb
    CALL engine_alphabit.cpp_FUN_0040d8a0 ; 004de0d0
        ;   XREF to: 0040d8a0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040d8a0()
    ADD ESP,0x20                        ; 004de0d5
    MOV EAX,dword ptr [ESP + 0x564]     ; 004de0d8
    PUSH EAX                            ; 004de0df
    PUSH EDI                            ; 004de0e0
    PUSH ESI                            ; 004de0e1
    PUSH 0x1d708a4                      ; 004de0e2
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004de0e7
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV EAX,[0x005fe9dc]                ; 004de0ec | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0xe0]      ; 004de0f1 | g_CGameInstance.field224_0xe0
    ADD ESP,0x10                        ; 004de0f7
    TEST EDX,EDX                        ; 004de0fa
    JZ 0x004de1ce                       ; 004de0fc
        ;   XREF to: 004de1ce (CONDITIONAL_JUMP)  ; LAB_004de1ce
    MOV EAX,[0x01d5ba14]                ; 004de102 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004de107
    CMP dword ptr [EAX + 0x2538],0x3f800000 ; 004de10e
    JLE 0x004de551                      ; 004de118
        ;   XREF to: 004de551 (CONDITIONAL_JUMP)  ; LAB_004de551
    MOV EAX,[0x01d5ba14]                ; 004de11e | DAT_01d5ba14
        ;   Label: LAB_004de11e
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004de123
    FLD float ptr [EAX + 0x2538]        ; 004de12a
    CALL crt_math.c_round_FUN_005a3120  ; 004de130
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x564]       ; 004de135
    MOV EAX,dword ptr [ESP + 0x564]     ; 004de13c
    PUSH EAX                            ; 004de143
    PUSH 0x5c6640                       ; 004de144 | DAT_005c6640
    LEA EAX,[ESP + 0x11c]               ; 004de149
    PUSH EAX                            ; 004de150
    CALL crt_unknown.c_FUN_005a28c0     ; 004de151
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 004de156
    PUSH 0x0                            ; 004de159
        ;   Label: LAB_004de159
    ADD EDI,EBX                         ; 004de15b
    PUSH 0xf9                           ; 004de15d
    SUB EDI,0xa                         ; 004de162
    PUSH EDI                            ; 004de165
    PUSH ESI                            ; 004de166
    LEA EAX,[ESP + 0x124]               ; 004de167
    PUSH EAX                            ; 004de16e
    MOV EDX,dword ptr [ESP + 0x548]     ; 004de16f
    PUSH EDX                            ; 004de176
    CALL engine_font.cpp_FUN_004b0a20   ; 004de177
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d5ba14]                ; 004de17c | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004de181
    ADD ESP,0x18                        ; 004de188
    MOV ECX,dword ptr [EAX + 0x20b80]   ; 004de18b
    PUSH ECX                            ; 004de191
    PUSH 0x5c6645                       ; 004de192 | DAT_005c6645
    LEA EAX,[ESP + 0x11c]               ; 004de197
    PUSH EAX                            ; 004de19e
    CALL crt_unknown.c_FUN_005a28c0     ; 004de19f
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 004de1a4
    PUSH 0x0                            ; 004de1a7
    PUSH 0xfc                           ; 004de1a9
    SUB EBX,0x6                         ; 004de1ae
    PUSH EBX                            ; 004de1b1
    ADD ESI,0x1c                        ; 004de1b2
    PUSH ESI                            ; 004de1b5
    LEA EAX,[ESP + 0x124]               ; 004de1b6
    PUSH EAX                            ; 004de1bd
    MOV EBX,dword ptr [ESP + 0x548]     ; 004de1be
    PUSH EBX                            ; 004de1c5
    CALL engine_font.cpp_FUN_004b0a20   ; 004de1c6
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004de1cb
    MOV EAX,dword ptr [EBP + 0x14]      ; 004de1ce
        ;   Label: LAB_004de1ce
    FLDZ                                ; 004de1d1
    FLD float ptr [EAX + 0x34c]         ; 004de1d3
    FSTP double ptr [ESP]               ; 004de1d9
    FCOMP double ptr [ESP]              ; 004de1dc
    FNSTSW AX                           ; 004de1df
    SAHF                                ; 004de1e1
    JNC 0x004de2e0                      ; 004de1e2
        ;   XREF to: 004de2e0 (CONDITIONAL_JUMP)  ; LAB_004de2e0
    MOV ESI,0xffff                      ; 004de1e8
    FLD1                                ; 004de1ed
    MOV dword ptr [ESP + 0x524],ESI     ; 004de1ef
    FCOMP double ptr [ESP]              ; 004de1f6
    FNSTSW AX                           ; 004de1f9
    SAHF                                ; 004de1fb
    JBE 0x004de213                      ; 004de1fc
        ;   XREF to: 004de213 (CONDITIONAL_JUMP)  ; LAB_004de213
    FLD double ptr [ESP]                ; 004de1fe
    FMUL double ptr [0x005c6657]        ; 004de201 | DAT_005c6657
    CALL crt_math.c_round_FUN_005a3120  ; 004de207
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x524]       ; 004de20c
    MOV EDI,dword ptr [ESP + 0x524]     ; 004de213
        ;   Label: LAB_004de213
    PUSH EDI                            ; 004de21a
    CALL engine_3d.c_setRenderAlpha_FUN_00406bf0 ; 004de21b
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)
    MOV EAX,[0x01549ab4]                ; 004de220 | DAT_01549ab4
    ADD ESP,0x4                         ; 004de225
    MOV dword ptr [ESP + 0x560],EAX     ; 004de228
    MOV EAX,[0x005fba1c]                ; 004de22f | DAT_005fba1c
    MOV EDX,dword ptr [0x00600184]      ; 004de234 | DAT_00600184
    CMP EAX,0x180                       ; 004de23a
    JGE 0x004de258                      ; 004de23f
        ;   XREF to: 004de258 (CONDITIONAL_JUMP)  ; LAB_004de258
    MOV EAX,EDX                         ; 004de241
    SAR EDX,0x1f                        ; 004de243
    SUB EAX,EDX                         ; 004de246
    SAR EAX,0x1                         ; 004de248
    MOV EDX,EAX                         ; 004de24a
    MOV EAX,[0x01549abc]                ; 004de24c | DAT_01549abc
    MOV dword ptr [ESP + 0x560],EAX     ; 004de251
    MOV EAX,[0x005fba18]                ; 004de258 | DAT_005fba18
        ;   Label: LAB_004de258
    SUB EAX,EDX                         ; 004de25d
    SUB EAX,0x4                         ; 004de25f
    PUSH EAX                            ; 004de262
    PUSH 0x100                          ; 004de263
    PUSH 0xa                            ; 004de268
    MOV EAX,dword ptr [EBP + 0x14]      ; 004de26a
    PUSH 0x1d5d288                      ; 004de26d
    ADD EAX,0x354                       ; 004de272
    PUSH EAX                            ; 004de277
    MOV EDX,dword ptr [ESP + 0x574]     ; 004de278
    PUSH EDX                            ; 004de27f
    CALL engine_font.cpp_FUN_004b2e40   ; 004de280
        ;   XREF to: 004b2e40 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b2e40()
    ADD ESP,0x18                        ; 004de285
    PUSH 0x58                           ; 004de288
    MOV ECX,dword ptr [ESP + 0x564]     ; 004de28a
    PUSH ECX                            ; 004de291
    MOV EBX,EAX                         ; 004de292
    MOV dword ptr [ESP + 0x564],EAX     ; 004de294
    CALL engine_font.cpp_FUN_004b30f0   ; 004de29b
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004de2a0
    MOV dword ptr [ESP + 0x54c],EAX     ; 004de2a3
    IMUL EAX,EBX                        ; 004de2aa
    MOV EBX,dword ptr [0x005fba1c]      ; 004de2ad | DAT_005fba1c
    SUB EBX,0x4                         ; 004de2b3
    MOV ESI,dword ptr [0x01549abc]      ; 004de2b6 | DAT_01549abc
    SUB EBX,EAX                         ; 004de2bc
    CMP ESI,dword ptr [ESP + 0x560]     ; 004de2be
    JNZ 0x004de57c                      ; 004de2c5
        ;   XREF to: 004de57c (CONDITIONAL_JUMP)  ; LAB_004de57c
    CMP dword ptr [0x01dd4890],0x0      ; 004de2cb | DAT_01dd4890
    JZ 0x004de57c                       ; 004de2d2
        ;   XREF to: 004de57c (CONDITIONAL_JUMP)  ; LAB_004de57c
    LEA EAX,[EAX]                       ; 004de2d8
    MOV EDX,EDX                         ; 004de2de
    MOV EAX,dword ptr [EBP + 0x14]      ; 004de2e0
        ;   Label: LAB_004de2e0
    CMP dword ptr [EAX + 0xc],0x0       ; 004de2e3
    JZ 0x004de33d                       ; 004de2e7
        ;   XREF to: 004de33d (CONDITIONAL_JUMP)  ; LAB_004de33d
    MOV EAX,[0x005fe4b0]                ; 004de2e9 | g_CFieldNotesPtr
    CMP dword ptr [EAX + 0x40],0x0      ; 004de2ee | g_CFieldNotesInstance.field64_0x40
    JNZ 0x004de33d                      ; 004de2f2
        ;   XREF to: 004de33d (CONDITIONAL_JUMP)  ; LAB_004de33d
    MOV EAX,[0x005fe9dc]                ; 004de2f4 | g_CGamePtr
    CMP dword ptr [EAX + 0x24c],0x0     ; 004de2f9 | g_CGameInstance.field588_0x24c
    JNZ 0x004de33d                      ; 004de300
        ;   XREF to: 004de33d (CONDITIONAL_JUMP)  ; LAB_004de33d
    PUSH 0xffff                         ; 004de302
    PUSH 0x2                            ; 004de307
    PUSH 0x2                            ; 004de309
    PUSH 0x1d708cc                      ; 004de30b
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004de310
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV ESI,dword ptr [0x01d70a20]      ; 004de315 | DAT_01d70a20
    ADD ESP,0x10                        ; 004de31b
    CMP ESI,-0x1                        ; 004de31e
    JNZ 0x004de5cd                      ; 004de321
        ;   XREF to: 004de5cd (CONDITIONAL_JUMP)  ; LAB_004de5cd
    PUSH 0xffff                         ; 004de327
    PUSH 0x2                            ; 004de32c
    PUSH 0x2                            ; 004de32e
    PUSH 0x1d708e0                      ; 004de330
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004de335
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
        ;   Label: LAB_004de335
    ADD ESP,0x10                        ; 004de33a
    MOV EAX,dword ptr [ESP + 0x520]     ; 004de33d
        ;   Label: LAB_004de33d
    MOV [0x01c6cee8],EAX                ; 004de344 | DAT_01c6cee8
    MOV ESP,EBP                         ; 004de349
        ;   Label: LAB_004de349
    POP EBP                             ; 004de34b
    POP EDI                             ; 004de34c
    POP ESI                             ; 004de34d
    POP EBX                             ; 004de34e
    RET                                 ; 004de34f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004de350
        ;   Label: LAB_004de350
    MOV dword ptr [EAX + 0x344],0x0     ; 004de353
    MOV dword ptr [EAX + 0x34c],0x0     ; 004de35d
    MOV dword ptr [EAX + 0x350],0x0     ; 004de367
    MOV dword ptr [EAX + 0x340],0x0     ; 004de371
    JMP 0x004ddad9                      ; 004de37b
        ;   XREF to: 004ddad9 (UNCONDITIONAL_JUMP)  ; LAB_004ddad9
    MOV EAX,[0x01549abc]                ; 004de380 | DAT_01549abc
        ;   Label: LAB_004de380
    MOV dword ptr [ESP + 0x534],EAX     ; 004de385
    JMP 0x004ddb28                      ; 004de38c
        ;   XREF to: 004ddb28 (UNCONDITIONAL_JUMP)  ; LAB_004ddb28
    MOV EDX,ESI                         ; 004de391
        ;   Label: LAB_004de391
    MOV EAX,ESI                         ; 004de393
    SAR EDX,0x1f                        ; 004de395
    SUB EAX,EDX                         ; 004de398
    SAR EAX,0x1                         ; 004de39a
    MOV ESI,EAX                         ; 004de39c
    MOV EDX,EBX                         ; 004de39e
    MOV EAX,EBX                         ; 004de3a0
    SAR EDX,0x1f                        ; 004de3a2
    SUB EAX,EDX                         ; 004de3a5
    SAR EAX,0x1                         ; 004de3a7
    MOV ECX,0x28                        ; 004de3a9
    MOV EDI,0x8                         ; 004de3ae
    MOV dword ptr [ESP + 0x528],ECX     ; 004de3b3
    MOV EBX,EAX                         ; 004de3ba
    JMP 0x004ddb84                      ; 004de3bc
        ;   XREF to: 004ddb84 (UNCONDITIONAL_JUMP)  ; LAB_004ddb84
    MOV EAX,dword ptr [EBP + 0x14]      ; 004de3c1
        ;   Label: LAB_004de3c1
    MOV EAX,dword ptr [EAX + 0x338]     ; 004de3c4
    CMP dword ptr [EAX + 0x570],0x0     ; 004de3ca
    JZ 0x004de45e                       ; 004de3d1
        ;   XREF to: 004de45e (CONDITIONAL_JUMP)  ; LAB_004de45e
    PUSH 0x5c660e                       ; 004de3d7 | = "infinite"
    LEA EAX,[ESP + 0x418]               ; 004de3dc
        ;   Label: LAB_004de3dc
    PUSH EAX                            ; 004de3e3
    CALL crt_unknown.c_FUN_005a28c0     ; 004de3e4
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 004de3e9
    PUSH 0x58                           ; 004de3ec
        ;   Label: LAB_004de3ec
    MOV EAX,dword ptr [ESP + 0x538]     ; 004de3ee
    PUSH EAX                            ; 004de3f5
    CALL engine_font.cpp_FUN_004b30f0   ; 004de3f6
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    MOV dword ptr [ESP + 0x56c],EAX     ; 004de3fb
    ADD ESP,0x8                         ; 004de402
    LEA EAX,[ESP + 0x414]               ; 004de405
    PUSH EAX                            ; 004de40c
    MOV EDX,dword ptr [ESP + 0x538]     ; 004de40d
    PUSH EDX                            ; 004de414
    CALL engine_font.cpp_FUN_004b2a80   ; 004de415
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b2a80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004de41a
    MOV EDX,dword ptr [0x005fba1c]      ; 004de41d | DAT_005fba1c
    PUSH 0x0                            ; 004de423
    MOV ECX,dword ptr [ESP + 0x568]     ; 004de425
    SUB EDX,EDI                         ; 004de42c
    PUSH 0xf8                           ; 004de42e
    SUB EDX,ECX                         ; 004de433
    PUSH EDX                            ; 004de435
    MOV EDX,dword ptr [0x005fba18]      ; 004de436 | DAT_005fba18
    SUB EDX,EDI                         ; 004de43c
    SUB EDX,EAX                         ; 004de43e
    PUSH EDX                            ; 004de440
    LEA EAX,[ESP + 0x424]               ; 004de441
    PUSH EAX                            ; 004de448
    MOV EAX,dword ptr [ESP + 0x548]     ; 004de449
    PUSH EAX                            ; 004de450
    CALL engine_font.cpp_FUN_004b0a20   ; 004de451
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004de456
    JMP 0x004ddba3                      ; 004de459
        ;   XREF to: 004ddba3 (UNCONDITIONAL_JUMP)  ; LAB_004ddba3
    MOV EDX,dword ptr [0x01d5ba70]      ; 004de45e | g_CHeroClassInfo.name_hash
        ;   Label: LAB_004de45e
    PUSH EDX                            ; 004de464
    MOV ECX,dword ptr [EAX + 0x304]     ; 004de465
    PUSH ECX                            ; 004de46b
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004de46c
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004de471
    TEST EAX,EAX                        ; 004de474
    JZ 0x004de4cc                       ; 004de476
        ;   XREF to: 004de4cc (CONDITIONAL_JUMP)  ; LAB_004de4cc
    MOV EDX,dword ptr [EBP + 0x14]      ; 004de478
    MOV EDX,dword ptr [EDX + 0x338]     ; 004de47b
    CMP dword ptr [EDX + 0x56c],0xa     ; 004de481
    JNZ 0x004de4ab                      ; 004de488
        ;   XREF to: 004de4ab (CONDITIONAL_JUMP)  ; LAB_004de4ab
    MOV ECX,dword ptr [EAX + 0x20b80]   ; 004de48a
    PUSH ECX                            ; 004de490
    PUSH 0x5c6617                       ; 004de491 | DAT_005c6617
    LEA EAX,[ESP + 0x41c]               ; 004de496
    PUSH EAX                            ; 004de49d
    CALL crt_unknown.c_FUN_005a28c0     ; 004de49e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 004de4a3
    JMP 0x004de3ec                      ; 004de4a6
        ;   XREF to: 004de3ec (UNCONDITIONAL_JUMP)  ; LAB_004de3ec
    MOV EDX,dword ptr [EAX + 0x20b84]   ; 004de4ab
        ;   Label: LAB_004de4ab
    PUSH EDX                            ; 004de4b1
    PUSH 0x5c661a                       ; 004de4b2 | DAT_005c661a
    LEA EAX,[ESP + 0x41c]               ; 004de4b7
    PUSH EAX                            ; 004de4be
    CALL crt_unknown.c_FUN_005a28c0     ; 004de4bf
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 004de4c4
    JMP 0x004de3ec                      ; 004de4c7
        ;   XREF to: 004de3ec (UNCONDITIONAL_JUMP)  ; LAB_004de3ec
    PUSH 0x5c661d                       ; 004de4cc | DAT_005c661d
        ;   Label: LAB_004de4cc
    JMP 0x004de3dc                      ; 004de4d1
        ;   XREF to: 004de3dc (UNCONDITIONAL_JUMP)  ; LAB_004de3dc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004de4d6
        ;   Label: LAB_004de4d6
    MOV EDX,dword ptr [EAX + 0x338]     ; 004de4d9
    PUSH EDX                            ; 004de4df
    CALL core_inv.cpp_getItemDescription_FUN_004d9eb0 ; 004de4e0
        ;   XREF to: 004d9eb0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDescription_FUN_004d9eb0()
    ADD ESP,0x4                         ; 004de4e5
    PUSH EAX                            ; 004de4e8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004de4e9
    MOV ECX,dword ptr [EAX + 0x338]     ; 004de4ec
    PUSH ECX                            ; 004de4f2
    CALL core_inv.cpp_getItemDisplayName_FUN_004d9e40 ; 004de4f3
        ;   XREF to: 004d9e40 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDisplayName_FUN_004d9e40()
    ADD ESP,0x4                         ; 004de4f8
    PUSH EAX                            ; 004de4fb
    PUSH 0x5c6626                       ; 004de4fc | = "%s\n\n%s"
    JMP 0x004ddbf8                      ; 004de501
        ;   XREF to: 004ddbf8 (UNCONDITIONAL_JUMP)  ; LAB_004ddbf8
    MOV EDX,ESI                         ; 004de506
        ;   Label: LAB_004de506
    MOV EAX,ESI                         ; 004de508
    SAR EDX,0x1f                        ; 004de50a
    SUB EAX,EDX                         ; 004de50d
    SAR EAX,0x1                         ; 004de50f
    MOV ESI,EAX                         ; 004de511
    MOV EDX,EBX                         ; 004de513
    MOV EAX,EBX                         ; 004de515
    SAR EDX,0x1f                        ; 004de517
    SUB EAX,EDX                         ; 004de51a
    SAR EAX,0x1                         ; 004de51c
    MOV ECX,0x28                        ; 004de51e
    MOV EDI,0x8                         ; 004de523
    MOV dword ptr [ESP + 0x530],ECX     ; 004de528
    MOV EBX,EAX                         ; 004de52f
    JMP 0x004ddd2c                      ; 004de531
        ;   XREF to: 004ddd2c (UNCONDITIONAL_JUMP)  ; LAB_004ddd2c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004de536
        ;   Label: LAB_004de536
    FLD float ptr [EAX + 0x348]         ; 004de539
    FLDZ                                ; 004de53f
    FCOMPP                              ; 004de541
    FNSTSW AX                           ; 004de543
    SAHF                                ; 004de545
    JC 0x004ddf16                       ; 004de546
        ;   XREF to: 004ddf16 (CONDITIONAL_JUMP)  ; LAB_004ddf16
    JMP 0x004de1ce                      ; 004de54c
        ;   XREF to: 004de1ce (UNCONDITIONAL_JUMP)  ; LAB_004de1ce
    FLDZ                                ; 004de551
        ;   Label: LAB_004de551
    FCOMP float ptr [EAX + 0x2538]      ; 004de553
    FNSTSW AX                           ; 004de559
    SAHF                                ; 004de55b
    JNC 0x004de11e                      ; 004de55c
        ;   XREF to: 004de11e (CONDITIONAL_JUMP)  ; LAB_004de11e
    PUSH 0x5c6643                       ; 004de562 | DAT_005c6643
    LEA EAX,[ESP + 0x118]               ; 004de567
    PUSH EAX                            ; 004de56e
    CALL crt_unknown.c_FUN_005a28c0     ; 004de56f
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 004de574
    JMP 0x004de159                      ; 004de577
        ;   XREF to: 004de159 (UNCONDITIONAL_JUMP)  ; LAB_004de159
    MOV EAX,dword ptr [ESP + 0x55c]     ; 004de57c
        ;   Label: LAB_004de57c
    XOR ESI,ESI                         ; 004de583
    TEST EAX,EAX                        ; 004de585
    JLE 0x004de2e0                      ; 004de587
        ;   XREF to: 004de2e0 (CONDITIONAL_JUMP)  ; LAB_004de2e0
    MOV EDI,0x1d5d288                   ; 004de58d
    PUSH 0x0                            ; 004de592
        ;   Label: LAB_004de592
    PUSH 0xf8                           ; 004de594
    PUSH EBX                            ; 004de599
    PUSH 0x4                            ; 004de59a
    PUSH EDI                            ; 004de59c
    MOV EDX,dword ptr [ESP + 0x574]     ; 004de59d
    PUSH EDX                            ; 004de5a4
    INC ESI                             ; 004de5a5
    CALL engine_font.cpp_FUN_004b0a20   ; 004de5a6
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004de5ab
    ADD EDI,0x100                       ; 004de5ae
    MOV ECX,dword ptr [ESP + 0x54c]     ; 004de5b4
    MOV EAX,dword ptr [ESP + 0x55c]     ; 004de5bb
    ADD EBX,ECX                         ; 004de5c2
    CMP ESI,EAX                         ; 004de5c4
    JL 0x004de592                       ; 004de5c6
        ;   XREF to: 004de592 (CONDITIONAL_JUMP)  ; LAB_004de592
    JMP 0x004de2e0                      ; 004de5c8
        ;   XREF to: 004de2e0 (UNCONDITIONAL_JUMP)  ; LAB_004de2e0
    PUSH 0xffff                         ; 004de5cd
        ;   Label: LAB_004de5cd
    PUSH 0x2                            ; 004de5d2
    LEA EDX,[ESI*0x4 + 0x0]             ; 004de5d4
    PUSH 0x2                            ; 004de5db
    MOV EBX,0x1d708e0                   ; 004de5dd
    ADD EDX,ESI                         ; 004de5e2
    PUSH 0x3                            ; 004de5e4
    SHL EDX,0x4                         ; 004de5e6
    PUSH 0x0                            ; 004de5e9
    ADD EBX,EDX                         ; 004de5eb
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 004de5ed
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    LEA EDX,[EAX*0x4 + 0x0]             ; 004de5f2
    ADD EDX,EAX                         ; 004de5f9
    SHL EDX,0x2                         ; 004de5fb
    ADD ESP,0x8                         ; 004de5fe
    LEA EAX,[EBX + EDX*0x1]             ; 004de601
    PUSH EAX                            ; 004de604
    JMP 0x004de335                      ; 004de605
        ;   XREF to: 004de335 (UNCONDITIONAL_JUMP)  ; LAB_004de335

