; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CPathMap * core_path.cpp_CPathMap_dtor_FUN_005464d0(CPathMap * this_ptr)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
;
; XREF[8]:
;   core_hero.cpp_CHero_dtor_FUN_004f2470 at 004f24ae
;   core_hiram.cpp_CHiram_dtor_FUN_004f4450 at 004f4473
;   core_hostage.cpp_CHostage_dtor_FUN_004f6b60 at 004f6b79
;   core_hpriest.cpp_CHighPriestOfGardath_dtor_FUN_004f7cb0 at 004f7cc9
;   core_npc.cpp_CNPC_dtor_FUN_004f4700 at 004f4719
;   core_passngr.cpp_CPassenger_dtor_FUN_00545c10 at 00545c7a
;   core_tbplayer.cpp_CBassPlayer_dtor_FUN_005da610 at 005da629
;   core_tbplayer.cpp_CDrummer_dtor_FUN_005da540 at 005da559
;
; Referenced Globals:
;   int g_PathMapCount
;   CPathMap*[200] g_PathMapList
;   undefined4 DAT_030c3ac0
;   undefined4 DAT_030c3ac4
;
; Called Functions:
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005464d0
        ;   Label: core_path.cpp_CPathMap_dtor_FUN_005464d0
    PUSH ESI                            ; 005464d1
    PUSH EDI                            ; 005464d2
    PUSH EBP                            ; 005464d3
    MOV EDI,dword ptr [0x030c3ab8]      ; 005464d4 | g_PathMapCount
    MOV ESI,dword ptr [ESP + 0x14]      ; 005464da
    XOR ECX,ECX                         ; 005464de
    TEST EDI,EDI                        ; 005464e0
    JLE 0x00546501                      ; 005464e2
        ;   XREF to: 00546501 (CONDITIONAL_JUMP)  ; LAB_00546501
    LEA EBX,[EDI*0x4 + 0x0]             ; 005464e4
    XOR EAX,EAX                         ; 005464eb
    MOV EBP,dword ptr [EAX + 0x30c3abc] ; 005464ed | g_PathMapList | DAT_030c3ac0
        ;   Label: LAB_005464ed
    LEA EDX,[EAX + 0x4]                 ; 005464f3
    CMP ESI,EBP                         ; 005464f6
    JZ 0x0054650e                       ; 005464f8
        ;   XREF to: 0054650e (CONDITIONAL_JUMP)  ; LAB_0054650e
    MOV EAX,EDX                         ; 005464fa
    INC ECX                             ; 005464fc
    CMP EDX,EBX                         ; 005464fd
    JL 0x005464ed                       ; 005464ff
        ;   XREF to: 005464ed (CONDITIONAL_JUMP)  ; LAB_005464ed
    MOV EAX,ESI                         ; 00546501
        ;   Label: LAB_00546501
    MOV dword ptr [0x030c3ab8],EDI      ; 00546503 | g_PathMapCount
    POP EBP                             ; 00546509
    POP EDI                             ; 0054650a
    POP ESI                             ; 0054650b
    POP EBX                             ; 0054650c
    RET                                 ; 0054650d
    DEC EDI                             ; 0054650e
        ;   Label: LAB_0054650e
    MOV EBX,EDI                         ; 0054650f
    SUB EBX,ECX                         ; 00546511
    LEA ECX,[EBX*0x4 + 0x0]             ; 00546513
    PUSH ECX                            ; 0054651a
    ADD EDX,0x30c3abc                   ; 0054651b | g_PathMapList
    PUSH EDX                            ; 00546521 | DAT_030c3ac4
    ADD EAX,0x30c3abc                   ; 00546522 | g_PathMapList
    PUSH EAX                            ; 00546527 | DAT_030c3ac0
    MOV dword ptr [0x030c3ab8],EDI      ; 00546528 | g_PathMapCount
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 0054652e
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    MOV EDI,dword ptr [0x030c3ab8]      ; 00546533 | g_PathMapCount
    XOR EAX,EAX                         ; 00546539
    ADD ESP,0xc                         ; 0054653b
    MOV dword ptr [EDI*0x4 + 0x30c3abc],EAX ; 0054653e | g_PathMapList
    MOV EAX,ESI                         ; 00546545
    MOV dword ptr [0x030c3ab8],EDI      ; 00546547 | g_PathMapCount
    POP EBP                             ; 0054654d
    POP EDI                             ; 0054654e
    POP ESI                             ; 0054654f
    POP EBX                             ; 00546550
    RET                                 ; 00546551

