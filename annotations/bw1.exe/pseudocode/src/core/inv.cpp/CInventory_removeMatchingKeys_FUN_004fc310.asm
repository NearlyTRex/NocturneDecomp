; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_removeMatchingKeys_FUN_004fc310(CInventory *this_ptr,uint key_mask)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   key_mask
;
; XREF[2]:
;   core_hero.cpp_CHero_removeMatchingKeys_FUN_004ec300 at 004ec30f
;   core_hero.cpp_CHero_reset_FUN_004ec570 at 004ec5ce
;
; Referenced Globals:
;   undefined4 g_CKeyActorClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_inv.cpp_FUN_004f8d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc310
        ;   Label: core_inv.cpp_CInventory_removeMatchingKeys_FUN_004fc310
    PUSH ESI                            ; 004fc311
    PUSH EDI                            ; 004fc312
    PUSH EBP                            ; 004fc313
    MOV EDI,dword ptr [ESP + 0x14]      ; 004fc314
    MOV EBP,dword ptr [ESP + 0x18]      ; 004fc318
    MOV EDX,dword ptr [EDI + 0x10]      ; 004fc31c
    XOR ESI,ESI                         ; 004fc31f
    TEST EDX,EDX                        ; 004fc321
    JLE 0x004fc359                      ; 004fc323
        ;   XREF to: 004fc359 (CONDITIONAL_JUMP)  ; LAB_004fc359
    MOV EBX,EDI                         ; 004fc325
    MOV EAX,[0x01d1bc9c]                ; 004fc327 | g_CKeyActorClassInfo.name_hash
        ;   Label: LAB_004fc327
    PUSH EAX                            ; 004fc32c
    MOV EDX,dword ptr [EBX + 0x14]      ; 004fc32d
    PUSH EDX                            ; 004fc330
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004fc331
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004fc336
    TEST EAX,EAX                        ; 004fc339
    JZ 0x004fc35e                       ; 004fc33b
        ;   XREF to: 004fc35e (CONDITIONAL_JUMP)  ; LAB_004fc35e
    TEST dword ptr [EAX + 0x2d4],EBP    ; 004fc33d
    JZ 0x004fc35e                       ; 004fc343
        ;   XREF to: 004fc35e (CONDITIONAL_JUMP)  ; LAB_004fc35e
    PUSH 0x1                            ; 004fc345
    MOV EAX,dword ptr [EBX + 0x14]      ; 004fc347
    PUSH EAX                            ; 004fc34a
    PUSH EDI                            ; 004fc34b
    CALL core_inv.cpp_FUN_004f8d00      ; 004fc34c
        ;   XREF to: 004f8d00 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004f8d00(CInventory * this_ptr, CDemonActor * item_to_remove, int should_delete_actor)
    ADD ESP,0xc                         ; 004fc351
    CMP ESI,dword ptr [EDI + 0x10]      ; 004fc354
    JL 0x004fc327                       ; 004fc357
        ;   XREF to: 004fc327 (CONDITIONAL_JUMP)  ; LAB_004fc327
    POP EBP                             ; 004fc359
        ;   Label: LAB_004fc359
    POP EDI                             ; 004fc35a
    POP ESI                             ; 004fc35b
    POP EBX                             ; 004fc35c
    RET                                 ; 004fc35d
    INC ESI                             ; 004fc35e
        ;   Label: LAB_004fc35e
    ADD EBX,0x4                         ; 004fc35f
    CMP ESI,dword ptr [EDI + 0x10]      ; 004fc362
    JL 0x004fc327                       ; 004fc365
        ;   XREF to: 004fc327 (CONDITIONAL_JUMP)  ; LAB_004fc327
    POP EBP                             ; 004fc367
    POP EDI                             ; 004fc368
    POP ESI                             ; 004fc369
    POP EBX                             ; 004fc36a
    RET                                 ; 004fc36b

