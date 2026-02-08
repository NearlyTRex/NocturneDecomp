; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * __cdecl core_inv_cpp_getItemDisplayName_FUN_004fcf00(CDemonActor *actor_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor_ptr
;
; XREF[3]:
;   core_inv.cpp_CInventory_addItem_FUN_004fd600 at 004fde42
;   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 at 00500ba7
;   core_inv.cpp_CInventory_select_FUN_004ff800 at 004ff95d
;
; Referenced Globals:
;   TerminatedCString s_Add_to_dict_s_00630379
;   char[256] g_ErrorMessageBuffer_02db8a70
;   int g_ItemDefinitionCount
;   SInventoryItemInfo[100] g_ItemDefinitionArray
;   undefined4 DAT_02dbabc8
;   undefined4 DAT_02dbadc8
;
; Called Functions:
;   core_inv.cpp_getItemModel_FUN_004fcda0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fcf00
        ;   Label: core_inv.cpp_getItemDisplayName_FUN_004fcf00
    PUSH ESI                            ; 004fcf01
    PUSH EDI                            ; 004fcf02
    PUSH EBP                            ; 004fcf03
    MOV EBP,ESP                         ; 004fcf04
    MOV EDX,dword ptr [EBP + 0x14]      ; 004fcf06
    PUSH EDX                            ; 004fcf09
    MOV EBX,0x2dbaac8                   ; 004fcf0a | g_ItemDefinitionArray
    XOR ESI,ESI                         ; 004fcf0f
    CALL core_inv.cpp_getItemModel_FUN_004fcda0 ; 004fcf11
        ;   XREF to: 004fcda0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_inv.cpp_getItemModel_FUN_004fcda0(CDemonActor * actor_ptr)
    MOV ECX,dword ptr [0x02dbaac0]      ; 004fcf16 | g_ItemDefinitionCount
    ADD ESP,0x4                         ; 004fcf1c
    LEA EDI,[EAX + 0x78]                ; 004fcf1f
    TEST ECX,ECX                        ; 004fcf22
    JLE 0x004fcf44                      ; 004fcf24
        ;   XREF to: 004fcf44 (CONDITIONAL_JUMP)  ; LAB_004fcf44
    PUSH EBX                            ; 004fcf26 | g_ItemDefinitionArray | DAT_02dbadc8
        ;   Label: LAB_004fcf26
    PUSH EDI                            ; 004fcf27
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004fcf28
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004fcf2d
    TEST EAX,EAX                        ; 004fcf30
    JZ 0x004fcf61                       ; 004fcf32
        ;   XREF to: 004fcf61 (CONDITIONAL_JUMP)  ; LAB_004fcf61
    MOV EAX,[0x02dbaac0]                ; 004fcf34 | g_ItemDefinitionCount
    INC ESI                             ; 004fcf39
    ADD EBX,0x300                       ; 004fcf3a
    CMP ESI,EAX                         ; 004fcf40
    JL 0x004fcf26                       ; 004fcf42
        ;   XREF to: 004fcf26 (CONDITIONAL_JUMP)  ; LAB_004fcf26
    PUSH EDI                            ; 004fcf44
        ;   Label: LAB_004fcf44
    PUSH 0x630379                       ; 004fcf45 | = "Add to dict: %s"
    PUSH 0x2db8a70                      ; 004fcf4a | g_ErrorMessageBuffer_02db8a70
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004fcf4f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,0x2db8a70                   ; 004fcf54 | g_ErrorMessageBuffer_02db8a70
    ADD ESP,0xc                         ; 004fcf59
    POP EBP                             ; 004fcf5c
    POP EDI                             ; 004fcf5d
    POP ESI                             ; 004fcf5e
    POP EBX                             ; 004fcf5f
    RET                                 ; 004fcf60
    LEA EAX,[EBX + 0x100]               ; 004fcf61 | DAT_02dbabc8
        ;   Label: LAB_004fcf61
    POP EBP                             ; 004fcf67
    POP EDI                             ; 004fcf68
    POP ESI                             ; 004fcf69
    POP EBX                             ; 004fcf6a
    RET                                 ; 004fcf6b

