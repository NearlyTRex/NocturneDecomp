; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_FUN_004d0750(void)
;
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01cb6900
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.goggles_active
;   undefined4 g_CGameInstance.vtable
;
; *****************************************************************************

section .text

    MOV EAX,[0x00616494]                ; 004d0750 | g_CGamePtr
        ;   Label: core_hero.cpp_FUN_004d0750
    CMP dword ptr [EAX + 0x25c],0x0     ; 004d0755 | g_CGameInstance.goggles_active
    JNZ 0x004d076d                      ; 004d075c
        ;   XREF to: 004d076d (CONDITIONAL_JUMP)  ; LAB_004d076d
    PUSH 0x1                            ; 004d075e
    MOV EDX,dword ptr [EAX + 0xb1c]     ; 004d0760 | g_CGameInstance.vtable
    PUSH EAX                            ; 004d0766 | g_CGameInstance
    CALL dword ptr [EDX]                ; 004d0767
    ADD ESP,0x8                         ; 004d0769
    RET                                 ; 004d076c
    PUSH 0x0                            ; 004d076d
        ;   Label: LAB_004d076d
    MOV EDX,dword ptr [EAX + 0xb1c]     ; 004d076f | g_CGameInstance.vtable
    PUSH EAX                            ; 004d0775 | g_CGameInstance
    CALL dword ptr [EDX]                ; 004d0776
    ADD ESP,0x8                         ; 004d0778
    RET                                 ; 004d077b

