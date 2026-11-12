; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_autoUseHealthItem_FUN_004df010(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_doc.cpp_CDoc_processDamage_FUN_0045b190 at 0045b274
;   core_stranger.cpp_CStranger_processDamage_FUN_0056d060 at 0056d144
;
; Referenced Globals:
;   TerminatedCString s_Auto_use_selected_health_005dbb61
;   TerminatedCString s_Auto_use_health_005dbb7b
;   TerminatedCString s_no_more_auto_health_left_005dbb8c
;   CConsole* g_CConsolePtr = 007c158c
;   CConsole g_CConsoleInstance
;   undefined4 g_CHealthItemClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_inv.cpp_FUN_004dc8c0
;   engine_console.cpp_CConsole_printf_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df010
        ;   Label: core_inv.cpp_CInventory_autoUseHealthItem_FUN_004df010
    PUSH ESI                            ; 004df011
    PUSH EDI                            ; 004df012
    PUSH EBP                            ; 004df013
    MOV EDI,dword ptr [ESP + 0x14]      ; 004df014
    MOV EAX,dword ptr [EDI + 0x468]     ; 004df018
    SHL EAX,0x2                         ; 004df01e
    ADD EAX,EDI                         ; 004df021
    MOV EDX,dword ptr [EAX + 0x5fc]     ; 004df023
    TEST EDX,EDX                        ; 004df029
    JNZ 0x004df07f                      ; 004df02b
        ;   XREF to: 004df07f (CONDITIONAL_JUMP)  ; LAB_004df07f
    MOV EBP,dword ptr [EDI + 0x10]      ; 004df02d
        ;   Label: LAB_004df02d
    XOR ESI,ESI                         ; 004df030
    TEST EBP,EBP                        ; 004df032
    JLE 0x004df066                      ; 004df034
        ;   XREF to: 004df066 (CONDITIONAL_JUMP)  ; LAB_004df066
    MOV EBX,EDI                         ; 004df036
    MOV EBP,dword ptr [0x01ceded8]      ; 004df038 | g_CHealthItemClassInfo.name_hash
        ;   Label: LAB_004df038
    PUSH EBP                            ; 004df03e
    MOV EAX,dword ptr [EBX + 0x14]      ; 004df03f
    PUSH EAX                            ; 004df042
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004df043
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,dword ptr [EBX + 0x46c]     ; 004df048
    MOV ECX,dword ptr [EDI + 0x468]     ; 004df04e
    ADD ESP,0x8                         ; 004df054
    CMP EDX,ECX                         ; 004df057
    JZ 0x004df0b1                       ; 004df059
        ;   XREF to: 004df0b1 (CONDITIONAL_JUMP)  ; LAB_004df0b1
    INC ESI                             ; 004df05b
        ;   Label: LAB_004df05b
    MOV EDX,dword ptr [EDI + 0x10]      ; 004df05c
    ADD EBX,0x4                         ; 004df05f
    CMP ESI,EDX                         ; 004df062
    JL 0x004df038                       ; 004df064
        ;   XREF to: 004df038 (CONDITIONAL_JUMP)  ; LAB_004df038
    PUSH 0x5dbb8c                       ; 004df066 | = "no more auto health left\n"
        ;   Label: LAB_004df066
    MOV ECX,dword ptr [0x00609ed0]      ; 004df06b | g_CConsolePtr
    PUSH ECX                            ; 004df071 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 004df072
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004df077
        ;   Label: LAB_004df077
    POP EBP                             ; 004df07a
    POP EDI                             ; 004df07b
    POP ESI                             ; 004df07c
    POP EBX                             ; 004df07d
    RET                                 ; 004df07e
    MOV ECX,dword ptr [0x01ceded8]      ; 004df07f | g_CHealthItemClassInfo.name_hash
        ;   Label: LAB_004df07f
    PUSH ECX                            ; 004df085
    PUSH EDX                            ; 004df086
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004df087
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 004df08c
    ADD ESP,0x8                         ; 004df08e
    TEST EAX,EAX                        ; 004df091
    JZ 0x004df02d                       ; 004df093
        ;   XREF to: 004df02d (CONDITIONAL_JUMP)  ; LAB_004df02d
    PUSH 0x5dbb61                       ; 004df095 | = "Auto use selected health\n"
    MOV EAX,[0x00609ed0]                ; 004df09a | g_CConsolePtr
    PUSH EAX                            ; 004df09f | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 004df0a0
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004df0a5
    PUSH ESI                            ; 004df0a8
    PUSH EDI                            ; 004df0a9
    CALL core_inv.cpp_FUN_004dc8c0      ; 004df0aa
        ;   XREF to: 004dc8c0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dc8c0()
    JMP 0x004df077                      ; 004df0af
        ;   XREF to: 004df077 (UNCONDITIONAL_JUMP)  ; LAB_004df077
    TEST EAX,EAX                        ; 004df0b1
        ;   Label: LAB_004df0b1
    JZ 0x004df05b                       ; 004df0b3
        ;   XREF to: 004df05b (CONDITIONAL_JUMP)  ; LAB_004df05b
    PUSH EAX                            ; 004df0b5
    PUSH EDI                            ; 004df0b6
    CALL core_inv.cpp_FUN_004dc8c0      ; 004df0b7
        ;   XREF to: 004dc8c0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dc8c0()
    ADD ESP,0x8                         ; 004df0bc
    PUSH 0x5dbb7b                       ; 004df0bf | = "Auto use health\n"
    MOV EBX,dword ptr [0x00609ed0]      ; 004df0c4 | g_CConsolePtr
    PUSH EBX                            ; 004df0ca | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 004df0cb
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004df0d0
    POP EBP                             ; 004df0d3
    POP EDI                             ; 004df0d4
    POP ESI                             ; 004df0d5
    POP EBX                             ; 004df0d6
    RET                                 ; 004df0d7

