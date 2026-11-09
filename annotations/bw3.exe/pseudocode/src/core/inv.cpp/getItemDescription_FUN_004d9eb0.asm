; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_inv_cpp_getItemDescription_FUN_004d9eb0(undefined4 param_1)
;
;
; XREF[2]:
;   core_inv.cpp_CInventory_renderAllItems_FUN_004dda90 at 004ddbd7
;   core_inv.cpp_FUN_004da880 at 004da962
;
; Referenced Globals:
;   TerminatedCString s_Add_to_dict_s_005c5e94
;   undefined4 DAT_01d5dc88
;
; Called Functions:
;   core_inv.cpp_FUN_004d9d20
;   crt_string.c__stricmp_FUN_005a3260
;   crt_unknown.c_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d9eb0
        ;   Label: core_inv.cpp_getItemDescription_FUN_004d9eb0
    PUSH ESI                            ; 004d9eb1
    PUSH EDI                            ; 004d9eb2
    PUSH EBP                            ; 004d9eb3
    MOV EBP,ESP                         ; 004d9eb4
    MOV EDX,dword ptr [EBP + 0x14]      ; 004d9eb6
    PUSH EDX                            ; 004d9eb9
    MOV EBX,0x1d5dc90                   ; 004d9eba
    XOR ESI,ESI                         ; 004d9ebf
    CALL core_inv.cpp_FUN_004d9d20      ; 004d9ec1
        ;   XREF to: 004d9d20 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004d9d20()
    MOV ECX,dword ptr [0x01d5dc88]      ; 004d9ec6 | DAT_01d5dc88
    ADD ESP,0x4                         ; 004d9ecc
    LEA EDI,[EAX + 0x78]                ; 004d9ecf
    TEST ECX,ECX                        ; 004d9ed2
    JLE 0x004d9ef4                      ; 004d9ed4
        ;   XREF to: 004d9ef4 (CONDITIONAL_JUMP)  ; LAB_004d9ef4
    PUSH EBX                            ; 004d9ed6
        ;   Label: LAB_004d9ed6
    PUSH EDI                            ; 004d9ed7
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004d9ed8
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d9edd
    TEST EAX,EAX                        ; 004d9ee0
    JZ 0x004d9f11                       ; 004d9ee2
        ;   XREF to: 004d9f11 (CONDITIONAL_JUMP)  ; LAB_004d9f11
    MOV EAX,[0x01d5dc88]                ; 004d9ee4 | DAT_01d5dc88
    INC ESI                             ; 004d9ee9
    ADD EBX,0x300                       ; 004d9eea
    CMP ESI,EAX                         ; 004d9ef0
    JL 0x004d9ed6                       ; 004d9ef2
        ;   XREF to: 004d9ed6 (CONDITIONAL_JUMP)  ; LAB_004d9ed6
    PUSH EDI                            ; 004d9ef4
        ;   Label: LAB_004d9ef4
    PUSH 0x5c5e94                       ; 004d9ef5 | = "Add to dict: %s"
    PUSH 0x1d5bd80                      ; 004d9efa
    CALL crt_unknown.c_FUN_005a28c0     ; 004d9eff
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    MOV EAX,0x1d5bd80                   ; 004d9f04
    ADD ESP,0xc                         ; 004d9f09
    POP EBP                             ; 004d9f0c
    POP EDI                             ; 004d9f0d
    POP ESI                             ; 004d9f0e
    POP EBX                             ; 004d9f0f
    RET                                 ; 004d9f10
    LEA EAX,[EBX + 0x200]               ; 004d9f11
        ;   Label: LAB_004d9f11
    POP EBP                             ; 004d9f17
    POP EDI                             ; 004d9f18
    POP ESI                             ; 004d9f19
    POP EBX                             ; 004d9f1a
    RET                                 ; 004d9f1b

