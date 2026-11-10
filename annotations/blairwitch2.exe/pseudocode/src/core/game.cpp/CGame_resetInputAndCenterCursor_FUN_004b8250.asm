; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004b8250(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_game.cpp_CGame_playerControls_FUN_004b7050 at 004b708b
;   core_game.cpp_CGame_runGameSession_FUN_004b6170 at 004b651e
;   core_game.cpp_FUN_004bcbf0 at 004bcfb0
;   core_script.cpp_CScript_executeInitSection_FUN_00522200 at 0052229d
;   core_script.cpp_CScript_process_FUN_005216e0 at 00521763
;   core_script.cpp_FUN_00522350 at 005265ff
;   unkaddr_0059aa80.cpp_FUN_0059ab70 at 0059ab9e
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   CFieldNotes* g_CFieldNotesPtr = 01caf56c
;   CNetGame* g_CNetGamePtr = 01d34cb0
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CFieldNotesInstance.field64_0x40
;   undefined4 DAT_01cb7528
;   undefined4 DAT_01cb7780
;   undefined4 DAT_01cb7784
;   CNetGame g_CNetGameInstance
;   undefined4 g_CDemonSetInstance.selected_camera_index
;   undefined4 DAT_026677e0
;
; Called Functions:
;   core_netgame.cpp_CNetGame_getMyControls_FUN_0050f430
;   crt_memory.c_memset_FUN_005b77c0
;   wincore_winrun.cpp_setCursorPosition_FUN_0058ed10
;
; *****************************************************************************

section .text

    PUSH 0x34                           ; 004b8250
        ;   Label: core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004b8250
    PUSH 0x0                            ; 004b8252
    MOV EDX,dword ptr [0x0061b120]      ; 004b8254 | g_CNetGamePtr
    PUSH EDX                            ; 004b825a | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_getMyControls_FUN_0050f430 ; 004b825b
        ;   XREF to: 0050f430 (UNCONDITIONAL_CALL)  ; SPlayerInput * core_netgame.cpp_CNetGame_getMyControls_FUN_0050f430(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004b8260
    PUSH EAX                            ; 004b8263
    CALL crt_memory.c_memset_FUN_005b77c0 ; 004b8264
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004b8269
    PUSH 0x258                          ; 004b826c
    PUSH 0x0                            ; 004b8271
    PUSH 0x1cb7528                      ; 004b8273 | DAT_01cb7528
    CALL crt_memory.c_memset_FUN_005b77c0 ; 004b8278
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV EAX,[0x0061b5a8]                ; 004b827d | g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 004b8282 | g_CDemonSetInstance.selected_camera_index
    MOV [0x01cb7784],EAX                ; 004b8288 | DAT_01cb7784
    MOV EAX,[0x00616044]                ; 004b828d | g_CFieldNotesPtr
    MOV ECX,dword ptr [EAX + 0x40]      ; 004b8292 | g_CFieldNotesInstance.field64_0x40
    ADD ESP,0xc                         ; 004b8295
    TEST ECX,ECX                        ; 004b8298
    JNZ 0x004b82a5                      ; 004b829a
        ;   XREF to: 004b82a5 (CONDITIONAL_JUMP)  ; LAB_004b82a5
    CMP dword ptr [0x026677e0],0x0      ; 004b829c | DAT_026677e0
    JZ 0x004b82a6                       ; 004b82a3
        ;   XREF to: 004b82a6 (CONDITIONAL_JUMP)  ; LAB_004b82a6
    RET                                 ; 004b82a5
        ;   Label: LAB_004b82a5
    MOV EAX,[0x006141bc]                ; 004b82a6 | DAT_006141bc
        ;   Label: LAB_004b82a6
    MOV EDX,EAX                         ; 004b82ab
    SAR EDX,0x1f                        ; 004b82ad
    SUB EAX,EDX                         ; 004b82b0
    SAR EAX,0x1                         ; 004b82b2
    PUSH EAX                            ; 004b82b4
    MOV EAX,[0x006141b8]                ; 004b82b5 | DAT_006141b8
    MOV EDX,EAX                         ; 004b82ba
    SAR EDX,0x1f                        ; 004b82bc
    SUB EAX,EDX                         ; 004b82bf
    SAR EAX,0x1                         ; 004b82c1
    PUSH EAX                            ; 004b82c3
    MOV dword ptr [0x01cb7780],ECX      ; 004b82c4 | DAT_01cb7780
    CALL wincore_winrun.cpp_setCursorPosition_FUN_0058ed10 ; 004b82ca
        ;   XREF to: 0058ed10 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setCursorPosition_FUN_0058ed10(int x, int y)
    ADD ESP,0x8                         ; 004b82cf
    RET                                 ; 004b82d2

