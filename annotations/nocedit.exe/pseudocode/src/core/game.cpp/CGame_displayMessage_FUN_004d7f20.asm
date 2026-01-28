; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_game_cpp_CGame_displayMessage_FUN_004d7f20(CGame *this_ptr,char *message,float duration)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   message
; float            Stack[0xc]:4   duration
;
; XREF[9]:
;   core_door.cpp_CDoor_getMoveType_FUN_00481070 at 00481116
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004df960
;   core_game.cpp_FUN_004dd9d0 at 004dda55
;   core_game.cpp_SaveRelated_FUN_004dcee0 at 004dd2c2
;   core_inv.cpp_CInventory_addItem_FUN_004fd600 at 004fe196
;   core_inv.cpp_CInventory_checkHasMatchingKey_FUN_005013d0 at 00501489
;   core_inv.cpp_CInventory_select_FUN_004ff800 at 004ff9cd
;   core_netgame.cpp_CNetGame_FUN_00542370 at 00542429
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055c13a
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004d7f20
        ;   Label: core_game.cpp_CGame_displayMessage_FUN_004d7f20
    PUSH EDI                            ; 004d7f21
    MOV EDI,dword ptr [ESP + 0xc]       ; 004d7f22
    MOV ESI,dword ptr [ESP + 0x10]      ; 004d7f26
    TEST ESI,ESI                        ; 004d7f2a
    JZ 0x004d7f40                       ; 004d7f2c
        ;   XREF to: 004d7f40 (CONDITIONAL_JUMP)  ; LAB_004d7f40
    CMP byte ptr [ESI],0x0              ; 004d7f2e
    JNZ 0x004d7f49                      ; 004d7f31
        ;   XREF to: 004d7f49 (CONDITIONAL_JUMP)  ; LAB_004d7f49
    MOV dword ptr [EDI + 0x384],0x0     ; 004d7f33
    POP EDI                             ; 004d7f3d
    POP ESI                             ; 004d7f3e
    RET                                 ; 004d7f3f
    MOV dword ptr [EDI + 0x384],ESI     ; 004d7f40
        ;   Label: LAB_004d7f40
    POP EDI                             ; 004d7f46
    POP ESI                             ; 004d7f47
    RET                                 ; 004d7f48
    ADD EDI,0x284                       ; 004d7f49
        ;   Label: LAB_004d7f49
    MOV EAX,dword ptr [ESP + 0x14]      ; 004d7f4f
    MOV dword ptr [EDI + 0x100],EAX     ; 004d7f53
    PUSH EDI                            ; 004d7f59
    MOV AL,byte ptr [ESI]               ; 004d7f5a
        ;   Label: LAB_004d7f5a
    MOV byte ptr [EDI],AL               ; 004d7f5c
    CMP AL,0x0                          ; 004d7f5e
    JZ 0x004d7f72                       ; 004d7f60
        ;   XREF to: 004d7f72 (CONDITIONAL_JUMP)  ; LAB_004d7f72
    MOV AL,byte ptr [ESI + 0x1]         ; 004d7f62
    ADD ESI,0x2                         ; 004d7f65
    MOV byte ptr [EDI + 0x1],AL         ; 004d7f68
    ADD EDI,0x2                         ; 004d7f6b
    CMP AL,0x0                          ; 004d7f6e
    JNZ 0x004d7f5a                      ; 004d7f70
        ;   XREF to: 004d7f5a (CONDITIONAL_JUMP)  ; LAB_004d7f5a
    POP EDI                             ; 004d7f72
        ;   Label: LAB_004d7f72
    POP EDI                             ; 004d7f73
    POP ESI                             ; 004d7f74
    RET                                 ; 004d7f75

