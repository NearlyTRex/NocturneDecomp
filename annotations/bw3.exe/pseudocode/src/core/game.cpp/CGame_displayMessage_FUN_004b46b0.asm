; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_displayMessage_FUN_004b46b0(CGame *this_ptr,char *message,float duration)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   message
; float            Stack[0xc]:4   duration
;
; XREF[9]:
;   core_door.cpp_CDoor_getMoveType_FUN_00465380 at 0046544d
;   core_game.cpp_CGame_processHotkeys_FUN_004ba540 at 004ba8cf
;   core_game.cpp_FUN_004bb100 at 004bb169
;   core_hero.cpp_FUN_004d3e20 at 004d3fb3
;   core_inv.cpp_CInventory_select_FUN_004dcb40 at 004dcd0c
;   core_inv.cpp_FUN_004da880 at 004db0ae
;   core_inv.cpp_FUN_004de610 at 004de672
;   core_netgame.cpp_CNetGame_addChatHistory_FUN_00506a00 at 00506ab9
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052b84d
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004b46b0
        ;   Label: core_game.cpp_CGame_displayMessage_FUN_004b46b0
    PUSH EDI                            ; 004b46b1
    MOV EDI,dword ptr [ESP + 0xc]       ; 004b46b2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004b46b6
    TEST ESI,ESI                        ; 004b46ba
    JZ 0x004b46d0                       ; 004b46bc
        ;   XREF to: 004b46d0 (CONDITIONAL_JUMP)  ; LAB_004b46d0
    CMP byte ptr [ESI],0x0              ; 004b46be
    JNZ 0x004b46d9                      ; 004b46c1
        ;   XREF to: 004b46d9 (CONDITIONAL_JUMP)  ; LAB_004b46d9
    MOV dword ptr [EDI + 0x434],0x0     ; 004b46c3
    POP EDI                             ; 004b46cd
    POP ESI                             ; 004b46ce
    RET                                 ; 004b46cf
    MOV dword ptr [EDI + 0x434],ESI     ; 004b46d0
        ;   Label: LAB_004b46d0
    POP EDI                             ; 004b46d6
    POP ESI                             ; 004b46d7
    RET                                 ; 004b46d8
    ADD EDI,0x334                       ; 004b46d9
        ;   Label: LAB_004b46d9
    MOV EAX,dword ptr [ESP + 0x14]      ; 004b46df
    MOV dword ptr [EDI + 0x100],EAX     ; 004b46e3
    PUSH EDI                            ; 004b46e9
    MOV AL,byte ptr [ESI]               ; 004b46ea
        ;   Label: LAB_004b46ea
    MOV byte ptr [EDI],AL               ; 004b46ec
    CMP AL,0x0                          ; 004b46ee
    JZ 0x004b4702                       ; 004b46f0
        ;   XREF to: 004b4702 (CONDITIONAL_JUMP)  ; LAB_004b4702
    MOV AL,byte ptr [ESI + 0x1]         ; 004b46f2
    ADD ESI,0x2                         ; 004b46f5
    MOV byte ptr [EDI + 0x1],AL         ; 004b46f8
    ADD EDI,0x2                         ; 004b46fb
    CMP AL,0x0                          ; 004b46fe
    JNZ 0x004b46ea                      ; 004b4700
        ;   XREF to: 004b46ea (CONDITIONAL_JUMP)  ; LAB_004b46ea
    POP EDI                             ; 004b4702
        ;   Label: LAB_004b4702
    POP EDI                             ; 004b4703
    POP ESI                             ; 004b4704
    RET                                 ; 004b4705

