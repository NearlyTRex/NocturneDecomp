; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_displayMessage_FUN_004cc190(CGame *this_ptr,char *message,float duration)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   message
; float            Stack[0xc]:4   duration
;
; XREF[9]:
;   core_door.cpp_CDoor_getMoveType_FUN_00478b40 at 00478c0d
;   core_game.cpp_CGame_processCheatCodes_FUN_004d27b0 at 004d2819
;   core_game.cpp_CGame_processHotkeys_FUN_004d1a80 at 004d1e0b
;   core_game.cpp_checkCheatAndGiveWeapon_FUN_004d2690 at 004d2715
;   core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004fc240 at 004fc2a2
;   core_inv.cpp_CInventory_select_FUN_004f9bd0 at 004f9d9c
;   core_inv.cpp_FUN_004f7690 at 004f83b8
;   core_netgame.cpp_CNetGame_addChatHistory_FUN_0052f100 at 0052f1b9
;   core_script.cpp_CScript_step_FUN_00544460 at 00546166
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004cc190
        ;   Label: core_game.cpp_CGame_displayMessage_FUN_004cc190
    PUSH EDI                            ; 004cc191
    MOV EDI,dword ptr [ESP + 0xc]       ; 004cc192
    MOV ESI,dword ptr [ESP + 0x10]      ; 004cc196
    TEST ESI,ESI                        ; 004cc19a
    JZ 0x004cc1b0                       ; 004cc19c
        ;   XREF to: 004cc1b0 (CONDITIONAL_JUMP)  ; LAB_004cc1b0
    CMP byte ptr [ESI],0x0              ; 004cc19e
    JNZ 0x004cc1b9                      ; 004cc1a1
        ;   XREF to: 004cc1b9 (CONDITIONAL_JUMP)  ; LAB_004cc1b9
    MOV dword ptr [EDI + 0x3b4],0x0     ; 004cc1a3
    POP EDI                             ; 004cc1ad
    POP ESI                             ; 004cc1ae
    RET                                 ; 004cc1af
    MOV dword ptr [EDI + 0x3b4],ESI     ; 004cc1b0
        ;   Label: LAB_004cc1b0
    POP EDI                             ; 004cc1b6
    POP ESI                             ; 004cc1b7
    RET                                 ; 004cc1b8
    ADD EDI,0x2b4                       ; 004cc1b9
        ;   Label: LAB_004cc1b9
    MOV EAX,dword ptr [ESP + 0x14]      ; 004cc1bf
    MOV dword ptr [EDI + 0x100],EAX     ; 004cc1c3
    PUSH EDI                            ; 004cc1c9
    MOV AL,byte ptr [ESI]               ; 004cc1ca
        ;   Label: LAB_004cc1ca
    MOV byte ptr [EDI],AL               ; 004cc1cc
    CMP AL,0x0                          ; 004cc1ce
    JZ 0x004cc1e2                       ; 004cc1d0
        ;   XREF to: 004cc1e2 (CONDITIONAL_JUMP)  ; LAB_004cc1e2
    MOV AL,byte ptr [ESI + 0x1]         ; 004cc1d2
    ADD ESI,0x2                         ; 004cc1d5
    MOV byte ptr [EDI + 0x1],AL         ; 004cc1d8
    ADD EDI,0x2                         ; 004cc1db
    CMP AL,0x0                          ; 004cc1de
    JNZ 0x004cc1ca                      ; 004cc1e0
        ;   XREF to: 004cc1ca (CONDITIONAL_JUMP)  ; LAB_004cc1ca
    POP EDI                             ; 004cc1e2
        ;   Label: LAB_004cc1e2
    POP EDI                             ; 004cc1e3
    POP ESI                             ; 004cc1e4
    RET                                 ; 004cc1e5

