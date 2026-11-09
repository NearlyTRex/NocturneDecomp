; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_FUN_004f8b70(CInventory *param_1,CDemonActor *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_actor.cpp_FUN_00408830
;   core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0
;   core_ammo.cpp_FUN_0040ddd0
;   core_inv.cpp_FUN_004f7690
;   core_main.c_FUN_005030e0
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004f8b70
        ;   Label: core_inv.cpp_FUN_004f8b70
    PUSH EBP                            ; 004f8b71
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f8b72
    CMP dword ptr [ESI + 0x56c],-0x1    ; 004f8b76
    JNZ 0x004f8b82                      ; 004f8b7d
        ;   XREF to: 004f8b82 (CONDITIONAL_JUMP)  ; LAB_004f8b82
    POP EBP                             ; 004f8b7f
    POP ESI                             ; 004f8b80
    RET                                 ; 004f8b81
    PUSH 0x31c                          ; 004f8b82
        ;   Label: LAB_004f8b82
    CALL crt_unknown.c_FUN_005c0f32     ; 004f8b87
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 004f8b8c
    TEST EAX,EAX                        ; 004f8b8f
    JZ 0x004f8b9c                       ; 004f8b91
        ;   XREF to: 004f8b9c (CONDITIONAL_JUMP)  ; LAB_004f8b9c
    PUSH EAX                            ; 004f8b93
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0 ; 004f8b94
        ;   XREF to: 0040dbc0 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 004f8b99
    PUSH EDI                            ; 004f8b9c
        ;   Label: LAB_004f8b9c
    PUSH EBX                            ; 004f8b9d
    MOV EBX,EAX                         ; 004f8b9e
    TEST EAX,EAX                        ; 004f8ba0
    JNZ 0x004f8bc7                      ; 004f8ba2
        ;   XREF to: 004f8bc7 (CONDITIONAL_JUMP)  ; LAB_004f8bc7
    MOV ECX,0x5e6548                    ; 004f8ba4
    MOV EDI,0x431                       ; 004f8ba9
    PUSH 0x5e6558                       ; 004f8bae
    MOV dword ptr [0x01d1d400],ECX      ; 004f8bb3 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 004f8bb9 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004f8bbf
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004f8bc4
    MOV EAX,dword ptr [ESI + 0x568]     ; 004f8bc7
        ;   Label: LAB_004f8bc7
    MOV dword ptr [EBX + 0x314],EAX     ; 004f8bcd
    MOV EAX,dword ptr [ESI + 0x56c]     ; 004f8bd3
    PUSH ESI                            ; 004f8bd9
    MOV dword ptr [EBX + 0x318],EAX     ; 004f8bda
    CALL core_actor.cpp_FUN_00408830    ; 004f8be0
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004f8be5
    PUSH EAX                            ; 004f8be8
    PUSH EBX                            ; 004f8be9
    CALL core_ammo.cpp_FUN_0040ddd0     ; 004f8bea
        ;   XREF to: 0040ddd0 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_FUN_0040ddd0(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004f8bef
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f8bf2
    PUSH EBX                            ; 004f8bf8
    CALL dword ptr [EAX]                ; 004f8bf9
    ADD ESP,0x4                         ; 004f8bfb
    MOV EDI,EBX                         ; 004f8bfe
    MOV ESI,0x5e6566                    ; 004f8c00
    PUSH EDI                            ; 004f8c05
    MOV AL,byte ptr [ESI]               ; 004f8c06
        ;   Label: LAB_004f8c06
    MOV byte ptr [EDI],AL               ; 004f8c08
    CMP AL,0x0                          ; 004f8c0a
    JZ 0x004f8c1e                       ; 004f8c0c
        ;   XREF to: 004f8c1e (CONDITIONAL_JUMP)  ; LAB_004f8c1e
    MOV AL,byte ptr [ESI + 0x1]         ; 004f8c0e
    ADD ESI,0x2                         ; 004f8c11
    MOV byte ptr [EDI + 0x1],AL         ; 004f8c14
    ADD EDI,0x2                         ; 004f8c17
    CMP AL,0x0                          ; 004f8c1a
    JNZ 0x004f8c06                      ; 004f8c1c
        ;   XREF to: 004f8c06 (CONDITIONAL_JUMP)  ; LAB_004f8c06
    POP EDI                             ; 004f8c1e
        ;   Label: LAB_004f8c1e
    PUSH 0x0                            ; 004f8c1f
    PUSH EBX                            ; 004f8c21
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004f8c22
    PUSH EBP                            ; 004f8c26
    CALL core_inv.cpp_FUN_004f7690      ; 004f8c27
        ;   XREF to: 004f7690 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004f7690(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004f8c2c
    POP EBX                             ; 004f8c2f
    POP EDI                             ; 004f8c30
    POP EBP                             ; 004f8c31
    POP ESI                             ; 004f8c32
    RET                                 ; 004f8c33

