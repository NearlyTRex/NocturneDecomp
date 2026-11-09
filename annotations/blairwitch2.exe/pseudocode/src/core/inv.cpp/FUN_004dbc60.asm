; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_FUN_004dbc60(CInventory *this_ptr,int direction)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   direction
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_FUN_004b76c0 at 004b7ac4
;   core_game.cpp_FUN_004be8a0 at 004bebc0
;
; Referenced Globals:
;   undefined4 g_CWeaponClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408a50
;   core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd020
;   core_inv.cpp_FUN_004dd270
;   crt_string.c__strcmp_FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dbc60
        ;   Label: core_inv.cpp_FUN_004dbc60
    PUSH ESI                            ; 004dbc61
    PUSH EDI                            ; 004dbc62
    PUSH EBP                            ; 004dbc63
    SUB ESP,0x4                         ; 004dbc64
    MOV ESI,dword ptr [ESP + 0x18]      ; 004dbc67
    PUSH 0x1                            ; 004dbc6b
    PUSH ESI                            ; 004dbc6d
    CALL core_inv.cpp_FUN_004dd270      ; 004dbc6e
        ;   XREF to: 004dd270 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004dd270(CInventory * this_ptr, int reset_both)
    MOV EBP,dword ptr [ESI + 0x468]     ; 004dbc73
    SHL EBP,0x2                         ; 004dbc79
    ADD EBP,ESI                         ; 004dbc7c
    MOV EDX,dword ptr [EBP + 0x610]     ; 004dbc7e
    ADD ESP,0x8                         ; 004dbc84
    TEST EDX,EDX                        ; 004dbc87
    JZ 0x004dbcd4                       ; 004dbc89
        ;   XREF to: 004dbcd4 (CONDITIONAL_JUMP)  ; LAB_004dbcd4
    MOV ECX,dword ptr [ESI + 0x10]      ; 004dbc8b
    XOR EBX,EBX                         ; 004dbc8e
    TEST ECX,ECX                        ; 004dbc90
    JLE 0x004dbca1                      ; 004dbc92
        ;   XREF to: 004dbca1 (CONDITIONAL_JUMP)  ; LAB_004dbca1
    MOV EDI,ESI                         ; 004dbc94
    MOV EDX,dword ptr [EBP + 0x610]     ; 004dbc96
        ;   Label: LAB_004dbc96
    CMP EDX,dword ptr [EDI + 0x14]      ; 004dbc9c
    JNZ 0x004dbcdc                      ; 004dbc9f
        ;   XREF to: 004dbcdc (CONDITIONAL_JUMP)  ; LAB_004dbcdc
    XOR EBP,EBP                         ; 004dbca1
        ;   Label: LAB_004dbca1
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004dbca3
        ;   Label: LAB_004dbca3
    MOV EDI,dword ptr [ESI + 0x10]      ; 004dbca7
    ADD EBX,ECX                         ; 004dbcaa
    CMP EBX,EDI                         ; 004dbcac
    JL 0x004dbce9                       ; 004dbcae
        ;   XREF to: 004dbce9 (CONDITIONAL_JUMP)  ; LAB_004dbce9
    XOR EBX,EBX                         ; 004dbcb0
    MOV EAX,[0x02661f38]                ; 004dbcb2 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004dbcb2
    PUSH EAX                            ; 004dbcb7
    MOV EDX,dword ptr [ESI + EBX*0x4 + 0x14] ; 004dbcb8
    PUSH EDX                            ; 004dbcbc
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004dbcbd
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004dbcc2
    MOV EDI,EAX                         ; 004dbcc5
    MOV dword ptr [ESP],EAX             ; 004dbcc7
    TEST EAX,EAX                        ; 004dbcca
    JNZ 0x004dbcf2                      ; 004dbccc
        ;   XREF to: 004dbcf2 (CONDITIONAL_JUMP)  ; LAB_004dbcf2
    INC EBP                             ; 004dbcce
        ;   Label: LAB_004dbcce
    CMP EBP,0x64                        ; 004dbccf
    JL 0x004dbca3                       ; 004dbcd2
        ;   XREF to: 004dbca3 (CONDITIONAL_JUMP)  ; LAB_004dbca3
    ADD ESP,0x4                         ; 004dbcd4
        ;   Label: LAB_004dbcd4
    POP EBP                             ; 004dbcd7
    POP EDI                             ; 004dbcd8
    POP ESI                             ; 004dbcd9
    POP EBX                             ; 004dbcda
    RET                                 ; 004dbcdb
    INC EBX                             ; 004dbcdc
        ;   Label: LAB_004dbcdc
    MOV EAX,dword ptr [ESI + 0x10]      ; 004dbcdd
    ADD EDI,0x4                         ; 004dbce0
    CMP EBX,EAX                         ; 004dbce3
    JL 0x004dbc96                       ; 004dbce5
        ;   XREF to: 004dbc96 (CONDITIONAL_JUMP)  ; LAB_004dbc96
    JMP 0x004dbca1                      ; 004dbce7
        ;   XREF to: 004dbca1 (UNCONDITIONAL_JUMP)  ; LAB_004dbca1
    TEST EBX,EBX                        ; 004dbce9
        ;   Label: LAB_004dbce9
    JGE 0x004dbcb2                      ; 004dbceb
        ;   XREF to: 004dbcb2 (CONDITIONAL_JUMP)  ; LAB_004dbcb2
    LEA EBX,[EDI + -0x1]                ; 004dbced
    JMP 0x004dbcb2                      ; 004dbcf0
        ;   XREF to: 004dbcb2 (UNCONDITIONAL_JUMP)  ; LAB_004dbcb2
    MOV EAX,dword ptr [ESI + 0x468]     ; 004dbcf2
        ;   Label: LAB_004dbcf2
    MOV ECX,dword ptr [ESI + EAX*0x4 + 0x610] ; 004dbcf8
    PUSH ECX                            ; 004dbcff
    CALL core_actor.cpp_FUN_00408a50    ; 004dbd00
        ;   XREF to: 00408a50 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408a50()
    ADD ESP,0x4                         ; 004dbd05
    PUSH EAX                            ; 004dbd08
    PUSH EDI                            ; 004dbd09
    CALL core_actor.cpp_FUN_00408a50    ; 004dbd0a
        ;   XREF to: 00408a50 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408a50()
    ADD ESP,0x4                         ; 004dbd0f
    PUSH EAX                            ; 004dbd12
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 004dbd13
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 004dbd18
    TEST EAX,EAX                        ; 004dbd1b
    JNZ 0x004dbcce                      ; 004dbd1d
        ;   XREF to: 004dbcce (CONDITIONAL_JUMP)  ; LAB_004dbcce
    MOV EAX,dword ptr [ESI + 0x468]     ; 004dbd1f
    SHL EAX,0x2                         ; 004dbd25
    ADD EAX,ESI                         ; 004dbd28
    MOV EBX,dword ptr [EAX + 0x610]     ; 004dbd2a
    CMP EDI,EBX                         ; 004dbd30
    JZ 0x004dbcd4                       ; 004dbd32
        ;   XREF to: 004dbcd4 (CONDITIONAL_JUMP)  ; LAB_004dbcd4
    TEST EBX,EBX                        ; 004dbd34
    JZ 0x004dbd4c                       ; 004dbd36
        ;   XREF to: 004dbd4c (CONDITIONAL_JUMP)  ; LAB_004dbd4c
    MOV EAX,EBX                         ; 004dbd38
    PUSH 0x3dcccccd                     ; 004dbd3a
    PUSH EAX                            ; 004dbd3f
    MOV EBX,dword ptr [EBX + 0x2b0]     ; 004dbd40
    CALL dword ptr [EBX + 0x14]         ; 004dbd46
    ADD ESP,0x8                         ; 004dbd49
    PUSH 0x3e7                          ; 004dbd4c
        ;   Label: LAB_004dbd4c
    MOV EAX,dword ptr [ESI + 0x468]     ; 004dbd51
    MOV EBX,dword ptr [ESP + 0x4]       ; 004dbd57
    PUSH ESI                            ; 004dbd5b
    MOV dword ptr [ESI + EAX*0x4 + 0x610],EBX ; 004dbd5c
    CALL core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd020 ; 004dbd63
        ;   XREF to: 004dd020 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd020(CInventory * this_ptr, int ammo_type)
    ADD ESP,0x8                         ; 004dbd68
    ADD ESP,0x4                         ; 004dbd6b
    POP EBP                             ; 004dbd6e
    POP EDI                             ; 004dbd6f
    POP ESI                             ; 004dbd70
    POP EBX                             ; 004dbd71
    RET                                 ; 004dbd72

