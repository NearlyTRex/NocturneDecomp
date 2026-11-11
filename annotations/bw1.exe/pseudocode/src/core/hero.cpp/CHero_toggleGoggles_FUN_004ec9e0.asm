; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_toggleGoggles_FUN_004ec9e0(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01ccf390
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.goggles_active
;   undefined4 g_CGameInstance.vtable
;
; *****************************************************************************

section .text

    MOV EAX,[0x0061d95c]                ; 004ec9e0 | g_CGamePtr
        ;   Label: core_hero.cpp_CHero_toggleGoggles_FUN_004ec9e0
    CMP dword ptr [EAX + 0x25c],0x0     ; 004ec9e5 | g_CGameInstance.goggles_active
    JNZ 0x004ec9fd                      ; 004ec9ec
        ;   XREF to: 004ec9fd (CONDITIONAL_JUMP)  ; LAB_004ec9fd
    PUSH 0x1                            ; 004ec9ee
    MOV EDX,dword ptr [EAX + 0xb00]     ; 004ec9f0 | g_CGameInstance.vtable
    PUSH EAX                            ; 004ec9f6 | g_CGameInstance
    CALL dword ptr [EDX]                ; 004ec9f7
    ADD ESP,0x8                         ; 004ec9f9
    RET                                 ; 004ec9fc
    PUSH 0x0                            ; 004ec9fd
        ;   Label: LAB_004ec9fd
    MOV EDX,dword ptr [EAX + 0xb00]     ; 004ec9ff | g_CGameInstance.vtable
    PUSH EAX                            ; 004eca05 | g_CGameInstance
    CALL dword ptr [EDX]                ; 004eca06
    ADD ESP,0x8                         ; 004eca08
    RET                                 ; 004eca0b

