; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_inv_cpp_getItemIconName_FUN_004bed10(CDemonActor *actor_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor_ptr
;
; XREF[2]:
;   core_inv.cpp_CInventory_addItem_FUN_004bf360 at 004bf436
;   core_inv.cpp_FUN_004c2470 at 004c268c
;
; Referenced Globals:
;   TerminatedCString s_Add_to_dict_s_00586d48
;   undefined4 DAT_01cb03d0
;
; Called Functions:
;   core_inv.cpp_getItemModel_FUN_004beb40
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bed10
        ;   Label: core_inv.cpp_getItemIconName_FUN_004bed10
    PUSH ESI                            ; 004bed11
    PUSH EDI                            ; 004bed12
    PUSH EBP                            ; 004bed13
    MOV EBP,ESP                         ; 004bed14
    MOV EDX,dword ptr [EBP + 0x14]      ; 004bed16
    PUSH EDX                            ; 004bed19
    MOV EBX,0x1cb03d8                   ; 004bed1a
    XOR ESI,ESI                         ; 004bed1f
    CALL core_inv.cpp_getItemModel_FUN_004beb40 ; 004bed21
        ;   XREF to: 004beb40 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemModel_FUN_004beb40()
    MOV ECX,dword ptr [0x01cb03d0]      ; 004bed26 | DAT_01cb03d0
    ADD ESP,0x4                         ; 004bed2c
    LEA EDI,[EAX + 0x78]                ; 004bed2f
    TEST ECX,ECX                        ; 004bed32
    JLE 0x004bed54                      ; 004bed34
        ;   XREF to: 004bed54 (CONDITIONAL_JUMP)  ; LAB_004bed54
    PUSH EBX                            ; 004bed36
        ;   Label: LAB_004bed36
    PUSH EDI                            ; 004bed37
    CALL crt_string.c__stricmp_FUN_00564520 ; 004bed38
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bed3d
    TEST EAX,EAX                        ; 004bed40
    JZ 0x004bed71                       ; 004bed42
        ;   XREF to: 004bed71 (CONDITIONAL_JUMP)  ; LAB_004bed71
    MOV EAX,[0x01cb03d0]                ; 004bed44 | DAT_01cb03d0
    INC ESI                             ; 004bed49
    ADD EBX,0x300                       ; 004bed4a
    CMP ESI,EAX                         ; 004bed50
    JL 0x004bed36                       ; 004bed52
        ;   XREF to: 004bed36 (CONDITIONAL_JUMP)  ; LAB_004bed36
    PUSH EDI                            ; 004bed54
        ;   Label: LAB_004bed54
    PUSH 0x586d48                       ; 004bed55 | = "Add to dict: %s"
    PUSH 0x1cae480                      ; 004bed5a
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004bed5f
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EAX,0x1cae480                   ; 004bed64
    ADD ESP,0xc                         ; 004bed69
    POP EBP                             ; 004bed6c
    POP EDI                             ; 004bed6d
    POP ESI                             ; 004bed6e
    POP EBX                             ; 004bed6f
    RET                                 ; 004bed70
    LEA EAX,[EBX + 0x200]               ; 004bed71
        ;   Label: LAB_004bed71
    POP EBP                             ; 004bed77
    POP EDI                             ; 004bed78
    POP ESI                             ; 004bed79
    POP EBX                             ; 004bed7a
    RET                                 ; 004bed7b

