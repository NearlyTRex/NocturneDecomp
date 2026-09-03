; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_inv_cpp_getItemDisplayName_FUN_004beca0(CDemonActor *actor_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor_ptr
;
; XREF[3]:
;   core_inv.cpp_CInventory_addItem_FUN_004bf360 at 004bf41f
;   core_inv.cpp_CInventory_renderAllItems_FUN_004c2470 at 004c269f
;   core_inv.cpp_CInventory_select_FUN_004c1580 at 004c16dd
;
; Referenced Globals:
;   TerminatedCString s_Add_to_dict_s_00586d38
;   undefined4 DAT_01cb03d0
;
; Called Functions:
;   core_inv.cpp_getItemModel_FUN_004beb40
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004beca0
        ;   Label: core_inv.cpp_getItemDisplayName_FUN_004beca0
    PUSH ESI                            ; 004beca1
    PUSH EDI                            ; 004beca2
    PUSH EBP                            ; 004beca3
    MOV EBP,ESP                         ; 004beca4
    MOV EDX,dword ptr [EBP + 0x14]      ; 004beca6
    PUSH EDX                            ; 004beca9
    MOV EBX,0x1cb03d8                   ; 004becaa
    XOR ESI,ESI                         ; 004becaf
    CALL core_inv.cpp_getItemModel_FUN_004beb40 ; 004becb1
        ;   XREF to: 004beb40 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_inv.cpp_getItemModel_FUN_004beb40(CDemonActor * actor_ptr)
    MOV ECX,dword ptr [0x01cb03d0]      ; 004becb6 | DAT_01cb03d0
    ADD ESP,0x4                         ; 004becbc
    LEA EDI,[EAX + 0x78]                ; 004becbf
    TEST ECX,ECX                        ; 004becc2
    JLE 0x004bece4                      ; 004becc4
        ;   XREF to: 004bece4 (CONDITIONAL_JUMP)  ; LAB_004bece4
    PUSH EBX                            ; 004becc6
        ;   Label: LAB_004becc6
    PUSH EDI                            ; 004becc7
    CALL crt_string.c__stricmp_FUN_00564520 ; 004becc8
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004beccd
    TEST EAX,EAX                        ; 004becd0
    JZ 0x004bed01                       ; 004becd2
        ;   XREF to: 004bed01 (CONDITIONAL_JUMP)  ; LAB_004bed01
    MOV EAX,[0x01cb03d0]                ; 004becd4 | DAT_01cb03d0
    INC ESI                             ; 004becd9
    ADD EBX,0x300                       ; 004becda
    CMP ESI,EAX                         ; 004bece0
    JL 0x004becc6                       ; 004bece2
        ;   XREF to: 004becc6 (CONDITIONAL_JUMP)  ; LAB_004becc6
    PUSH EDI                            ; 004bece4
        ;   Label: LAB_004bece4
    PUSH 0x586d38                       ; 004bece5 | = "Add to dict: %s"
    PUSH 0x1cae380                      ; 004becea
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004becef
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    MOV EAX,0x1cae380                   ; 004becf4
    ADD ESP,0xc                         ; 004becf9
    POP EBP                             ; 004becfc
    POP EDI                             ; 004becfd
    POP ESI                             ; 004becfe
    POP EBX                             ; 004becff
    RET                                 ; 004bed00
    LEA EAX,[EBX + 0x100]               ; 004bed01
        ;   Label: LAB_004bed01
    POP EBP                             ; 004bed07
    POP EDI                             ; 004bed08
    POP ESI                             ; 004bed09
    POP EBX                             ; 004bed0a
    RET                                 ; 004bed0b

