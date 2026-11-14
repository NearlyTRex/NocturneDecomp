; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_inv_cpp_getItemDescription_FUN_004f6350(CDemonActor *actor_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor_ptr
;
; XREF[2]:
;   core_inv.cpp_FUN_004f7690 at 004f7766
;   core_inv.cpp_FUN_004fae10 at 004fb11c
;
; Referenced Globals:
;   TerminatedCString s_Add_to_dict_s_005e5fa8
;   undefined4 DAT_01d08dc8
;
; Called Functions:
;   core_inv.cpp_FUN_004f60c0
;   crt_string.c__stricmp_FUN_005c04e0
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6350
        ;   Label: core_inv.cpp_getItemDescription_FUN_004f6350
    PUSH ESI                            ; 004f6351
    PUSH EDI                            ; 004f6352
    PUSH EBP                            ; 004f6353
    MOV EBP,ESP                         ; 004f6354
    MOV EDX,dword ptr [EBP + 0x14]      ; 004f6356
    PUSH EDX                            ; 004f6359
    MOV EBX,0x1d08dd0                   ; 004f635a
    XOR ESI,ESI                         ; 004f635f
    CALL core_inv.cpp_FUN_004f60c0      ; 004f6361
        ;   XREF to: 004f60c0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004f60c0()
    MOV ECX,dword ptr [0x01d08dc8]      ; 004f6366 | DAT_01d08dc8
    ADD ESP,0x4                         ; 004f636c
    LEA EDI,[EAX + 0x78]                ; 004f636f
    TEST ECX,ECX                        ; 004f6372
    JLE 0x004f6394                      ; 004f6374
        ;   XREF to: 004f6394 (CONDITIONAL_JUMP)  ; LAB_004f6394
    PUSH EBX                            ; 004f6376
        ;   Label: LAB_004f6376
    PUSH EDI                            ; 004f6377
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004f6378
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f637d
    TEST EAX,EAX                        ; 004f6380
    JZ 0x004f63b1                       ; 004f6382
        ;   XREF to: 004f63b1 (CONDITIONAL_JUMP)  ; LAB_004f63b1
    MOV EAX,[0x01d08dc8]                ; 004f6384 | DAT_01d08dc8
    INC ESI                             ; 004f6389
    ADD EBX,0x300                       ; 004f638a
    CMP ESI,EAX                         ; 004f6390
    JL 0x004f6376                       ; 004f6392
        ;   XREF to: 004f6376 (CONDITIONAL_JUMP)  ; LAB_004f6376
    PUSH EDI                            ; 004f6394
        ;   Label: LAB_004f6394
    PUSH 0x5e5fa8                       ; 004f6395 | = "Add to dict: %s"
    PUSH 0x1d06e70                      ; 004f639a
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004f639f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,0x1d06e70                   ; 004f63a4
    ADD ESP,0xc                         ; 004f63a9
    POP EBP                             ; 004f63ac
    POP EDI                             ; 004f63ad
    POP ESI                             ; 004f63ae
    POP EBX                             ; 004f63af
    RET                                 ; 004f63b0
    LEA EAX,[EBX + 0x200]               ; 004f63b1
        ;   Label: LAB_004f63b1
    POP EBP                             ; 004f63b7
    POP EDI                             ; 004f63b8
    POP ESI                             ; 004f63b9
    POP EBX                             ; 004f63ba
    RET                                 ; 004f63bb

