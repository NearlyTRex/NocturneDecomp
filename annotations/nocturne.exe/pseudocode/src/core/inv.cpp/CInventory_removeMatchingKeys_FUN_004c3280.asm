; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_removeMatchingKeys_FUN_004c3280(int param_1,uint param_2)
;
;
; XREF[2]:
;   FUN_004b5ec0 at 004b5f1e
;   core_hero.cpp_CHero_removeMatchingKeys_FUN_004b5cb0 at 004b5cbf
;
; Referenced Globals:
;   undefined4 DAT_01cc30e0
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_inv.cpp_CInventory_removeItem_FUN_004c07b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c3280
        ;   Label: core_inv.cpp_CInventory_removeMatchingKeys_FUN_004c3280
    PUSH ESI                            ; 004c3281
    PUSH EDI                            ; 004c3282
    PUSH EBP                            ; 004c3283
    MOV EDI,dword ptr [ESP + 0x14]      ; 004c3284
    MOV EBP,dword ptr [ESP + 0x18]      ; 004c3288
    MOV EDX,dword ptr [EDI + 0x8]       ; 004c328c
    XOR ESI,ESI                         ; 004c328f
    TEST EDX,EDX                        ; 004c3291
    JLE 0x004c32c9                      ; 004c3293
        ;   XREF to: 004c32c9 (CONDITIONAL_JUMP)  ; LAB_004c32c9
    MOV EBX,EDI                         ; 004c3295
    MOV EAX,[0x01cc30e0]                ; 004c3297 | DAT_01cc30e0
        ;   Label: LAB_004c3297
    PUSH EAX                            ; 004c329c
    MOV EDX,dword ptr [EBX + 0xc]       ; 004c329d
    PUSH EDX                            ; 004c32a0
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c32a1
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004c32a6
    TEST EAX,EAX                        ; 004c32a9
    JZ 0x004c32ce                       ; 004c32ab
        ;   XREF to: 004c32ce (CONDITIONAL_JUMP)  ; LAB_004c32ce
    TEST dword ptr [EAX + 0x2cc],EBP    ; 004c32ad
    JZ 0x004c32ce                       ; 004c32b3
        ;   XREF to: 004c32ce (CONDITIONAL_JUMP)  ; LAB_004c32ce
    PUSH 0x1                            ; 004c32b5
    MOV EAX,dword ptr [EBX + 0xc]       ; 004c32b7
    PUSH EAX                            ; 004c32ba
    PUSH EDI                            ; 004c32bb
    CALL core_inv.cpp_CInventory_removeItem_FUN_004c07b0 ; 004c32bc
        ;   XREF to: 004c07b0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_removeItem_FUN_004c07b0()
    ADD ESP,0xc                         ; 004c32c1
    CMP ESI,dword ptr [EDI + 0x8]       ; 004c32c4
    JL 0x004c3297                       ; 004c32c7
        ;   XREF to: 004c3297 (CONDITIONAL_JUMP)  ; LAB_004c3297
    POP EBP                             ; 004c32c9
        ;   Label: LAB_004c32c9
    POP EDI                             ; 004c32ca
    POP ESI                             ; 004c32cb
    POP EBX                             ; 004c32cc
    RET                                 ; 004c32cd
    INC ESI                             ; 004c32ce
        ;   Label: LAB_004c32ce
    ADD EBX,0x4                         ; 004c32cf
    CMP ESI,dword ptr [EDI + 0x8]       ; 004c32d2
    JL 0x004c3297                       ; 004c32d5
        ;   XREF to: 004c3297 (CONDITIONAL_JUMP)  ; LAB_004c3297
    POP EBP                             ; 004c32d7
    POP EDI                             ; 004c32d8
    POP ESI                             ; 004c32d9
    POP EBX                             ; 004c32da
    RET                                 ; 004c32db

