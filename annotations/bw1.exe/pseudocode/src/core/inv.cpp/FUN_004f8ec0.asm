; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_FUN_004f8ec0(CInventory *this_ptr,int direction)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   direction
;
; XREF[2]:
;   core_game.cpp_FUN_004d0ee0 at 004d124f
;   core_game.cpp_FUN_004d9260 at 004d9506
;
; Referenced Globals:
;   TerminatedCString s_CWeapon_005e6570
;   TerminatedCString s_CAmmo_005e6578
;   TerminatedCString s_CWeapon_005e657e
;   TerminatedCString s_CAmmo_005e6586
;   CGame* g_CGamePtr = 01ccf390
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.field604_0x25c
;
; Called Functions:
;   core_actor.cpp_FUN_0040c550
;   core_inv.cpp_FUN_004fa710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8ec0
        ;   Label: core_inv.cpp_FUN_004f8ec0
    PUSH ESI                            ; 004f8ec1
    PUSH EDI                            ; 004f8ec2
    PUSH EBP                            ; 004f8ec3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004f8ec4
    MOV EAX,[0x0061d95c]                ; 004f8ec8 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x25c],0x0     ; 004f8ecd | g_CGameInstance.field604_0x25c
    JNZ 0x004f8f0a                      ; 004f8ed4
        ;   XREF to: 004f8f0a (CONDITIONAL_JUMP)  ; LAB_004f8f0a
    CMP dword ptr [ESI + 0x33c],0x0     ; 004f8ed6
    JNZ 0x004f8f32                      ; 004f8edd
        ;   XREF to: 004f8f32 (CONDITIONAL_JUMP)  ; LAB_004f8f32
    MOV EBP,dword ptr [ESI + 0x10]      ; 004f8edf
    XOR EDI,EDI                         ; 004f8ee2
    TEST EBP,EBP                        ; 004f8ee4
    JLE 0x004f8f0a                      ; 004f8ee6
        ;   XREF to: 004f8f0a (CONDITIONAL_JUMP)  ; LAB_004f8f0a
    MOV EBX,ESI                         ; 004f8ee8
    PUSH 0x5e6570                       ; 004f8eea | = "CWeapon"
        ;   Label: LAB_004f8eea
    MOV EAX,dword ptr [EBX + 0x14]      ; 004f8eef
    PUSH EAX                            ; 004f8ef2
    CALL core_actor.cpp_FUN_0040c550    ; 004f8ef3
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f8ef8
    TEST EAX,EAX                        ; 004f8efb
    JZ 0x004f8f0f                       ; 004f8efd
        ;   XREF to: 004f8f0f (CONDITIONAL_JUMP)  ; LAB_004f8f0f
    INC EDI                             ; 004f8eff
        ;   Label: LAB_004f8eff
    MOV EBP,dword ptr [ESI + 0x10]      ; 004f8f00
    ADD EBX,0x4                         ; 004f8f03
    CMP EDI,EBP                         ; 004f8f06
    JL 0x004f8eea                       ; 004f8f08
        ;   XREF to: 004f8eea (CONDITIONAL_JUMP)  ; LAB_004f8eea
    POP EBP                             ; 004f8f0a
        ;   Label: LAB_004f8f0a
    POP EDI                             ; 004f8f0b
    POP ESI                             ; 004f8f0c
    POP EBX                             ; 004f8f0d
    RET                                 ; 004f8f0e
    PUSH 0x5e6578                       ; 004f8f0f | = "CAmmo"
        ;   Label: LAB_004f8f0f
    MOV EDX,dword ptr [EBX + 0x14]      ; 004f8f14
    PUSH EDX                            ; 004f8f17
    CALL core_actor.cpp_FUN_0040c550    ; 004f8f18
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f8f1d
    TEST EAX,EAX                        ; 004f8f20
    JNZ 0x004f8eff                      ; 004f8f22
        ;   XREF to: 004f8eff (CONDITIONAL_JUMP)  ; LAB_004f8eff
    MOV EAX,dword ptr [EBX + 0x14]      ; 004f8f24
    MOV dword ptr [ESI + 0x33c],EAX     ; 004f8f27
    POP EBP                             ; 004f8f2d
    POP EDI                             ; 004f8f2e
    POP ESI                             ; 004f8f2f
    POP EBX                             ; 004f8f30
    RET                                 ; 004f8f31
    MOV EBX,dword ptr [ESI + 0x10]      ; 004f8f32
        ;   Label: LAB_004f8f32
    XOR EDI,EDI                         ; 004f8f35
    TEST EBX,EBX                        ; 004f8f37
    JLE 0x004f8f48                      ; 004f8f39
        ;   XREF to: 004f8f48 (CONDITIONAL_JUMP)  ; LAB_004f8f48
    MOV EBX,ESI                         ; 004f8f3b
    MOV EDX,dword ptr [ESI + 0x33c]     ; 004f8f3d
        ;   Label: LAB_004f8f3d
    CMP EDX,dword ptr [EBX + 0x14]      ; 004f8f43
    JNZ 0x004f8f95                      ; 004f8f46
        ;   XREF to: 004f8f95 (CONDITIONAL_JUMP)  ; LAB_004f8f95
    TEST dword ptr [ESI + 0x344],0x7fffffff ; 004f8f48
        ;   Label: LAB_004f8f48
    JZ 0x004f8fa2                       ; 004f8f52
        ;   XREF to: 004f8fa2 (CONDITIONAL_JUMP)  ; LAB_004f8fa2
    PUSH ESI                            ; 004f8f54
    CALL core_inv.cpp_FUN_004fa710      ; 004f8f55
        ;   XREF to: 004fa710 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004fa710(CInventory * this_ptr)
    MOV EBX,EDI                         ; 004f8f5a
    ADD ESP,0x4                         ; 004f8f5c
    MOV EBP,dword ptr [ESP + 0x18]      ; 004f8f5f
        ;   Label: LAB_004f8f5f
    MOV EAX,dword ptr [ESI + 0x10]      ; 004f8f63
    ADD EBX,EBP                         ; 004f8f66
    CMP EBX,EAX                         ; 004f8f68
    JL 0x004f8fb0                       ; 004f8f6a
        ;   XREF to: 004f8fb0 (CONDITIONAL_JUMP)  ; LAB_004f8fb0
    XOR EBX,EBX                         ; 004f8f6c
    LEA EBP,[EBX*0x4 + 0x0]             ; 004f8f6e
        ;   Label: LAB_004f8f6e
    ADD EBP,ESI                         ; 004f8f75
    PUSH 0x5e657e                       ; 004f8f77 | = "CWeapon"
    MOV EDX,dword ptr [EBP + 0x14]      ; 004f8f7c
    PUSH EDX                            ; 004f8f7f
    CALL core_actor.cpp_FUN_0040c550    ; 004f8f80
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f8f85
    TEST EAX,EAX                        ; 004f8f88
    JZ 0x004f8fb9                       ; 004f8f8a
        ;   XREF to: 004f8fb9 (CONDITIONAL_JUMP)  ; LAB_004f8fb9
    CMP EBX,EDI                         ; 004f8f8c
        ;   Label: LAB_004f8f8c
    JNZ 0x004f8f5f                      ; 004f8f8e
        ;   XREF to: 004f8f5f (CONDITIONAL_JUMP)  ; LAB_004f8f5f
    POP EBP                             ; 004f8f90
    POP EDI                             ; 004f8f91
    POP ESI                             ; 004f8f92
    POP EBX                             ; 004f8f93
    RET                                 ; 004f8f94
    INC EDI                             ; 004f8f95
        ;   Label: LAB_004f8f95
    MOV EAX,dword ptr [ESI + 0x10]      ; 004f8f96
    ADD EBX,0x4                         ; 004f8f99
    CMP EDI,EAX                         ; 004f8f9c
    JL 0x004f8f3d                       ; 004f8f9e
        ;   XREF to: 004f8f3d (CONDITIONAL_JUMP)  ; LAB_004f8f3d
    JMP 0x004f8f48                      ; 004f8fa0
        ;   XREF to: 004f8f48 (UNCONDITIONAL_JUMP)  ; LAB_004f8f48
    PUSH ESI                            ; 004f8fa2
        ;   Label: LAB_004f8fa2
    CALL core_inv.cpp_FUN_004fa710      ; 004f8fa3
        ;   XREF to: 004fa710 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004fa710(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004f8fa8
    POP EBP                             ; 004f8fab
    POP EDI                             ; 004f8fac
    POP ESI                             ; 004f8fad
    POP EBX                             ; 004f8fae
    RET                                 ; 004f8faf
    TEST EBX,EBX                        ; 004f8fb0
        ;   Label: LAB_004f8fb0
    JGE 0x004f8f6e                      ; 004f8fb2
        ;   XREF to: 004f8f6e (CONDITIONAL_JUMP)  ; LAB_004f8f6e
    LEA EBX,[EAX + -0x1]                ; 004f8fb4
    JMP 0x004f8f6e                      ; 004f8fb7
        ;   XREF to: 004f8f6e (UNCONDITIONAL_JUMP)  ; LAB_004f8f6e
    PUSH 0x5e6586                       ; 004f8fb9 | = "CAmmo"
        ;   Label: LAB_004f8fb9
    MOV ECX,dword ptr [EBP + 0x14]      ; 004f8fbe
    PUSH ECX                            ; 004f8fc1
    CALL core_actor.cpp_FUN_0040c550    ; 004f8fc2
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f8fc7
    TEST EAX,EAX                        ; 004f8fca
    JNZ 0x004f8f8c                      ; 004f8fcc
        ;   XREF to: 004f8f8c (CONDITIONAL_JUMP)  ; LAB_004f8f8c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f8fce
    MOV dword ptr [ESI + 0x33c],EAX     ; 004f8fd1
    POP EBP                             ; 004f8fd7
    POP EDI                             ; 004f8fd8
    POP ESI                             ; 004f8fd9
    POP EBX                             ; 004f8fda
    RET                                 ; 004f8fdb

