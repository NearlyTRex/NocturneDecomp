; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_selectItem_FUN_004dbc40(CInventory *this_ptr,int direction)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   direction
;
; XREF[2]:
;   core_game.cpp_FUN_004b9960 at 004b9ceb
;   core_game.cpp_FUN_004c07b0 at 004c0aa5
;
; Referenced Globals:
;   TerminatedCString s_CWeapon_005c62af
;   TerminatedCString s_CAmmo_005c62b7
;   TerminatedCString s_CWeapon_005c62bd
;   TerminatedCString s_CAmmo_005c62c5
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CGameInstance.goggles_active
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c790
;   core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004dd390
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dbc40
        ;   Label: core_inv.cpp_CInventory_selectItem_FUN_004dbc40
    PUSH ESI                            ; 004dbc41
    PUSH EDI                            ; 004dbc42
    PUSH EBP                            ; 004dbc43
    MOV ESI,dword ptr [ESP + 0x14]      ; 004dbc44
    MOV EAX,[0x005fe9dc]                ; 004dbc48 | g_CGamePtr
    CMP dword ptr [EAX + 0x264],0x0     ; 004dbc4d | g_CGameInstance.goggles_active
    JNZ 0x004dbca3                      ; 004dbc54
        ;   XREF to: 004dbca3 (CONDITIONAL_JUMP)  ; LAB_004dbca3
    CMP dword ptr [ESI + 0x33c],0x0     ; 004dbc56
    JNZ 0x004dbcd6                      ; 004dbc5d
        ;   XREF to: 004dbcd6 (CONDITIONAL_JUMP)  ; LAB_004dbcd6
    MOV EBP,dword ptr [ESI + 0x10]      ; 004dbc63
    XOR EDI,EDI                         ; 004dbc66
    TEST EBP,EBP                        ; 004dbc68
    JLE 0x004dbc8e                      ; 004dbc6a
        ;   XREF to: 004dbc8e (CONDITIONAL_JUMP)  ; LAB_004dbc8e
    MOV EBX,ESI                         ; 004dbc6c
    PUSH 0x5c62af                       ; 004dbc6e | = "CWeapon"
        ;   Label: LAB_004dbc6e
    MOV EAX,dword ptr [EBX + 0x14]      ; 004dbc73
    PUSH EAX                            ; 004dbc76
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dbc77
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dbc7c
    TEST EAX,EAX                        ; 004dbc7f
    JZ 0x004dbca8                       ; 004dbc81
        ;   XREF to: 004dbca8 (CONDITIONAL_JUMP)  ; LAB_004dbca8
    INC EDI                             ; 004dbc83
        ;   Label: LAB_004dbc83
    MOV EBP,dword ptr [ESI + 0x10]      ; 004dbc84
    ADD EBX,0x4                         ; 004dbc87
    CMP EDI,EBP                         ; 004dbc8a
    JL 0x004dbc6e                       ; 004dbc8c
        ;   XREF to: 004dbc6e (CONDITIONAL_JUMP)  ; LAB_004dbc6e
    CMP dword ptr [ESI + 0x33c],0x0     ; 004dbc8e
        ;   Label: LAB_004dbc8e
    JZ 0x004dbca3                       ; 004dbc95
        ;   XREF to: 004dbca3 (CONDITIONAL_JUMP)  ; LAB_004dbca3
    TEST dword ptr [ESI + 0x344],0x7fffffff ; 004dbc97
    JZ 0x004dbcc8                       ; 004dbca1
        ;   XREF to: 004dbcc8 (CONDITIONAL_JUMP)  ; LAB_004dbcc8
    POP EBP                             ; 004dbca3
        ;   Label: LAB_004dbca3
    POP EDI                             ; 004dbca4
    POP ESI                             ; 004dbca5
    POP EBX                             ; 004dbca6
    RET                                 ; 004dbca7
    PUSH 0x5c62b7                       ; 004dbca8 | = "CAmmo"
        ;   Label: LAB_004dbca8
    MOV EDX,dword ptr [EBX + 0x14]      ; 004dbcad
    PUSH EDX                            ; 004dbcb0
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dbcb1
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dbcb6
    TEST EAX,EAX                        ; 004dbcb9
    JNZ 0x004dbc83                      ; 004dbcbb
        ;   XREF to: 004dbc83 (CONDITIONAL_JUMP)  ; LAB_004dbc83
    MOV EAX,dword ptr [EBX + 0x14]      ; 004dbcbd
    MOV dword ptr [ESI + 0x33c],EAX     ; 004dbcc0
    JMP 0x004dbc8e                      ; 004dbcc6
        ;   XREF to: 004dbc8e (UNCONDITIONAL_JUMP)  ; LAB_004dbc8e
    PUSH ESI                            ; 004dbcc8
        ;   Label: LAB_004dbcc8
    CALL core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004dd390 ; 004dbcc9
        ;   XREF to: 004dd390 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004dd390(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004dbcce
    POP EBP                             ; 004dbcd1
    POP EDI                             ; 004dbcd2
    POP ESI                             ; 004dbcd3
    POP EBX                             ; 004dbcd4
    RET                                 ; 004dbcd5
    MOV EBX,dword ptr [ESI + 0x10]      ; 004dbcd6
        ;   Label: LAB_004dbcd6
    XOR EDI,EDI                         ; 004dbcd9
    TEST EBX,EBX                        ; 004dbcdb
    JLE 0x004dbcec                      ; 004dbcdd
        ;   XREF to: 004dbcec (CONDITIONAL_JUMP)  ; LAB_004dbcec
    MOV EBX,ESI                         ; 004dbcdf
    MOV EDX,dword ptr [ESI + 0x33c]     ; 004dbce1
        ;   Label: LAB_004dbce1
    CMP EDX,dword ptr [EBX + 0x14]      ; 004dbce7
    JNZ 0x004dbd39                      ; 004dbcea
        ;   XREF to: 004dbd39 (CONDITIONAL_JUMP)  ; LAB_004dbd39
    TEST dword ptr [ESI + 0x344],0x7fffffff ; 004dbcec
        ;   Label: LAB_004dbcec
    JZ 0x004dbcc8                       ; 004dbcf6
        ;   XREF to: 004dbcc8 (CONDITIONAL_JUMP)  ; LAB_004dbcc8
    PUSH ESI                            ; 004dbcf8
    CALL core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004dd390 ; 004dbcf9
        ;   XREF to: 004dd390 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004dd390(CInventory * this_ptr)
    MOV EBX,EDI                         ; 004dbcfe
    ADD ESP,0x4                         ; 004dbd00
    MOV EBP,dword ptr [ESP + 0x18]      ; 004dbd03
        ;   Label: LAB_004dbd03
    MOV EAX,dword ptr [ESI + 0x10]      ; 004dbd07
    ADD EBX,EBP                         ; 004dbd0a
    CMP EBX,EAX                         ; 004dbd0c
    JL 0x004dbd46                       ; 004dbd0e
        ;   XREF to: 004dbd46 (CONDITIONAL_JUMP)  ; LAB_004dbd46
    XOR EBX,EBX                         ; 004dbd10
    LEA EBP,[EBX*0x4 + 0x0]             ; 004dbd12
        ;   Label: LAB_004dbd12
    ADD EBP,ESI                         ; 004dbd19
    PUSH 0x5c62bd                       ; 004dbd1b | = "CWeapon"
    MOV EDX,dword ptr [EBP + 0x14]      ; 004dbd20
    PUSH EDX                            ; 004dbd23
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dbd24
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dbd29
    TEST EAX,EAX                        ; 004dbd2c
    JZ 0x004dbd4f                       ; 004dbd2e
        ;   XREF to: 004dbd4f (CONDITIONAL_JUMP)  ; LAB_004dbd4f
    CMP EBX,EDI                         ; 004dbd30
        ;   Label: LAB_004dbd30
    JNZ 0x004dbd03                      ; 004dbd32
        ;   XREF to: 004dbd03 (CONDITIONAL_JUMP)  ; LAB_004dbd03
    POP EBP                             ; 004dbd34
    POP EDI                             ; 004dbd35
    POP ESI                             ; 004dbd36
    POP EBX                             ; 004dbd37
    RET                                 ; 004dbd38
    INC EDI                             ; 004dbd39
        ;   Label: LAB_004dbd39
    MOV EAX,dword ptr [ESI + 0x10]      ; 004dbd3a
    ADD EBX,0x4                         ; 004dbd3d
    CMP EDI,EAX                         ; 004dbd40
    JL 0x004dbce1                       ; 004dbd42
        ;   XREF to: 004dbce1 (CONDITIONAL_JUMP)  ; LAB_004dbce1
    JMP 0x004dbcec                      ; 004dbd44
        ;   XREF to: 004dbcec (UNCONDITIONAL_JUMP)  ; LAB_004dbcec
    TEST EBX,EBX                        ; 004dbd46
        ;   Label: LAB_004dbd46
    JGE 0x004dbd12                      ; 004dbd48
        ;   XREF to: 004dbd12 (CONDITIONAL_JUMP)  ; LAB_004dbd12
    LEA EBX,[EAX + -0x1]                ; 004dbd4a
    JMP 0x004dbd12                      ; 004dbd4d
        ;   XREF to: 004dbd12 (UNCONDITIONAL_JUMP)  ; LAB_004dbd12
    PUSH 0x5c62c5                       ; 004dbd4f | = "CAmmo"
        ;   Label: LAB_004dbd4f
    MOV ECX,dword ptr [EBP + 0x14]      ; 004dbd54
    PUSH ECX                            ; 004dbd57
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dbd58
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dbd5d
    TEST EAX,EAX                        ; 004dbd60
    JNZ 0x004dbd30                      ; 004dbd62
        ;   XREF to: 004dbd30 (CONDITIONAL_JUMP)  ; LAB_004dbd30
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dbd64
    MOV dword ptr [ESI + 0x33c],EAX     ; 004dbd67
    POP EBP                             ; 004dbd6d
    POP EDI                             ; 004dbd6e
    POP ESI                             ; 004dbd6f
    POP EBX                             ; 004dbd70
    RET                                 ; 004dbd71

