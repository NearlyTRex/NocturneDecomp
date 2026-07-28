; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_displayMessage_FUN_0049aa30(CGame *this_ptr,char *message,float duration)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   message
; float            Stack[0xc]:4   duration
;
; XREF[9]:
;   core_door.cpp_CDoor_getMoveType_FUN_004564b0 at 0045651a
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a05b9
;   core_game.cpp_FUN_0049f930 at 0049fc97
;   core_game.cpp_checkCheatAndGiveWeapon_FUN_004a0430 at 004a04b5
;   core_inv.cpp_CInventory_addItem_FUN_004bf360 at 004bfed3
;   core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004c31b0 at 004c3212
;   core_inv.cpp_CInventory_select_FUN_004c1580 at 004c174d
;   core_netgame.cpp_CNetGame_addChatHistory_FUN_004ec500 at 004ec5b9
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00500bea
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0049aa30
        ;   Label: core_game.cpp_CGame_displayMessage_FUN_0049aa30
    PUSH EDI                            ; 0049aa31
    MOV EDI,dword ptr [ESP + 0xc]       ; 0049aa32
    MOV ESI,dword ptr [ESP + 0x10]      ; 0049aa36
    TEST ESI,ESI                        ; 0049aa3a
    JZ 0x0049aa50                       ; 0049aa3c
        ;   XREF to: 0049aa50 (CONDITIONAL_JUMP)  ; LAB_0049aa50
    CMP byte ptr [ESI],0x0              ; 0049aa3e
    JNZ 0x0049aa59                      ; 0049aa41
        ;   XREF to: 0049aa59 (CONDITIONAL_JUMP)  ; LAB_0049aa59
    MOV dword ptr [EDI + 0x384],0x0     ; 0049aa43
    POP EDI                             ; 0049aa4d
    POP ESI                             ; 0049aa4e
    RET                                 ; 0049aa4f
    MOV dword ptr [EDI + 0x384],ESI     ; 0049aa50
        ;   Label: LAB_0049aa50
    POP EDI                             ; 0049aa56
    POP ESI                             ; 0049aa57
    RET                                 ; 0049aa58
    ADD EDI,0x284                       ; 0049aa59
        ;   Label: LAB_0049aa59
    MOV EAX,dword ptr [ESP + 0x14]      ; 0049aa5f
    MOV dword ptr [EDI + 0x100],EAX     ; 0049aa63
    PUSH EDI                            ; 0049aa69
    MOV AL,byte ptr [ESI]               ; 0049aa6a
        ;   Label: LAB_0049aa6a
    MOV byte ptr [EDI],AL               ; 0049aa6c
    CMP AL,0x0                          ; 0049aa6e
    JZ 0x0049aa82                       ; 0049aa70
        ;   XREF to: 0049aa82 (CONDITIONAL_JUMP)  ; LAB_0049aa82
    MOV AL,byte ptr [ESI + 0x1]         ; 0049aa72
    ADD ESI,0x2                         ; 0049aa75
    MOV byte ptr [EDI + 0x1],AL         ; 0049aa78
    ADD EDI,0x2                         ; 0049aa7b
    CMP AL,0x0                          ; 0049aa7e
    JNZ 0x0049aa6a                      ; 0049aa80
        ;   XREF to: 0049aa6a (CONDITIONAL_JUMP)  ; LAB_0049aa6a
    POP EDI                             ; 0049aa82
        ;   Label: LAB_0049aa82
    POP EDI                             ; 0049aa83
    POP ESI                             ; 0049aa84
    RET                                 ; 0049aa85

