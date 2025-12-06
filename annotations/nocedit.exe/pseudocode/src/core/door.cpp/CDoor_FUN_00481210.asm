; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_door.cpp_CDoor_FUN_00481210(CDoor * this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_door.cpp_CDoor_getMoveType_FUN_00481070 at 00481101
;   core_hero.cpp_FUN_004f2ed0 at 004f2f31
;
; Referenced Globals:
;   undefined4 DAT_02c14cd8
;
; Called Functions:
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481210
        ;   Label: core_door.cpp_CDoor_FUN_00481210
    MOV EBX,dword ptr [ESP + 0x8]       ; 00481211
    MOV EDX,dword ptr [0x02c14cd8]      ; 00481215 | undefined4 DAT_02c14cd8
    PUSH EDX                            ; 0048121b
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 0048121c | int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00481221
    TEST EAX,EAX                        ; 00481224
    JZ 0x0048122a                       ; 00481226 | LAB_0048122a
        ;   XREF to: 0048122a (CONDITIONAL_JUMP)
    POP EBX                             ; 00481228
    RET                                 ; 00481229
    LEA EDX,[EBX + 0x92c]               ; 0048122a
        ;   Label: LAB_0048122a
    PUSH EDX                            ; 00481230
    MOV EAX,dword ptr [EBX + 0x154]     ; 00481231
    PUSH EBX                            ; 00481237
    CALL dword ptr [EAX + 0x24]         ; 00481238
    ADD ESP,0x8                         ; 0048123b
    MOV [0x02c14cd8],EAX                ; 0048123e | undefined4 DAT_02c14cd8
    POP EBX                             ; 00481243
    RET                                 ; 00481244

