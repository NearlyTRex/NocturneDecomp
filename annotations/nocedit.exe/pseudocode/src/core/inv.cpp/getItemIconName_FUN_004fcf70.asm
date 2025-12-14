; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * core_inv.cpp_getItemIconName_FUN_004fcf70(CDemonActor * actor_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor_ptr
;
; XREF[2]:
;   core_inv.cpp_CInventory_addItem_FUN_004fd600 at 004fd6d6
;   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 at 00501340
;
; Referenced Globals:
;   TerminatedCString s_Add_to_dict_s_00630389
;   char[256] g_ErrorMessageBuffer2
;   int g_ItemDefinitionCount
;   SInventoryItemInfo[100] g_ItemDefinitionArray
;   undefined4 DAT_02dbacc8
;   undefined4 DAT_02dbadc8
;
; Called Functions:
;   core_inv.cpp_getItemModel_FUN_004fcda0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fcf70
        ;   Label: core_inv.cpp_getItemIconName_FUN_004fcf70
    PUSH ESI                            ; 004fcf71
    PUSH EDI                            ; 004fcf72
    PUSH EBP                            ; 004fcf73
    MOV EBP,ESP                         ; 004fcf74
    MOV EDX,dword ptr [EBP + 0x14]      ; 004fcf76
    PUSH EDX                            ; 004fcf79
    MOV EBX,0x2dbaac8                   ; 004fcf7a | g_ItemDefinitionArray
    XOR ESI,ESI                         ; 004fcf7f
    CALL core_inv.cpp_getItemModel_FUN_004fcda0 ; 004fcf81
        ;   XREF to: 004fcda0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_inv.cpp_getItemModel_FUN_004fcda0(CDemonActor * actor_ptr)
    MOV ECX,dword ptr [0x02dbaac0]      ; 004fcf86 | g_ItemDefinitionCount
    ADD ESP,0x4                         ; 004fcf8c
    LEA EDI,[EAX + 0x78]                ; 004fcf8f
    TEST ECX,ECX                        ; 004fcf92
    JLE 0x004fcfb4                      ; 004fcf94
        ;   XREF to: 004fcfb4 (CONDITIONAL_JUMP)  ; LAB_004fcfb4
    PUSH EBX                            ; 004fcf96 | g_ItemDefinitionArray | DAT_02dbadc8
        ;   Label: LAB_004fcf96
    PUSH EDI                            ; 004fcf97
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004fcf98
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004fcf9d
    TEST EAX,EAX                        ; 004fcfa0
    JZ 0x004fcfd1                       ; 004fcfa2
        ;   XREF to: 004fcfd1 (CONDITIONAL_JUMP)  ; LAB_004fcfd1
    MOV EAX,[0x02dbaac0]                ; 004fcfa4 | g_ItemDefinitionCount
    INC ESI                             ; 004fcfa9
    ADD EBX,0x300                       ; 004fcfaa
    CMP ESI,EAX                         ; 004fcfb0
    JL 0x004fcf96                       ; 004fcfb2
        ;   XREF to: 004fcf96 (CONDITIONAL_JUMP)  ; LAB_004fcf96
    PUSH EDI                            ; 004fcfb4
        ;   Label: LAB_004fcfb4
    PUSH 0x630389                       ; 004fcfb5 | = "Add to dict: %s"
    PUSH 0x2db8b70                      ; 004fcfba | g_ErrorMessageBuffer2
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004fcfbf
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,0x2db8b70                   ; 004fcfc4 | g_ErrorMessageBuffer2
    ADD ESP,0xc                         ; 004fcfc9
    POP EBP                             ; 004fcfcc
    POP EDI                             ; 004fcfcd
    POP ESI                             ; 004fcfce
    POP EBX                             ; 004fcfcf
    RET                                 ; 004fcfd0
    LEA EAX,[EBX + 0x200]               ; 004fcfd1 | DAT_02dbacc8
        ;   Label: LAB_004fcfd1
    POP EBP                             ; 004fcfd7
    POP EDI                             ; 004fcfd8
    POP ESI                             ; 004fcfd9
    POP EBX                             ; 004fcfda
    RET                                 ; 004fcfdb

