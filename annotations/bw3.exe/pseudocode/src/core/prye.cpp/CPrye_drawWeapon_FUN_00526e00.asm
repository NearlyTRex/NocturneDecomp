; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_prye_cpp_CPrye_drawWeapon_FUN_00526e00(CPrye *this_ptr,int drawn)
;
; Parameters:
; CPrye *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   drawn
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01d2130c
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.field572_0x26c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00526e00
        ;   Label: core_prye.cpp_CPrye_drawWeapon_FUN_00526e00
    MOV EDX,dword ptr [ESP + 0x4]       ; 00526e04
    MOV dword ptr [EDX + 0x20bcc],EAX   ; 00526e08
    TEST EAX,EAX                        ; 00526e0e
    JNZ 0x00526e20                      ; 00526e10
        ;   XREF to: 00526e20 (CONDITIONAL_JUMP)  ; LAB_00526e20
    MOV EAX,[0x005fe9dc]                ; 00526e12 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x26c],0x0     ; 00526e17 | g_CGameInstance.field572_0x26c
    JNZ 0x00526e21                      ; 00526e1e
        ;   XREF to: 00526e21 (CONDITIONAL_JUMP)  ; LAB_00526e21
    RET                                 ; 00526e20
        ;   Label: LAB_00526e20
    MOV dword ptr [EAX + 0x26c],0x0     ; 00526e21 | g_CGameInstance.field572_0x26c
        ;   Label: LAB_00526e21
    RET                                 ; 00526e2b

