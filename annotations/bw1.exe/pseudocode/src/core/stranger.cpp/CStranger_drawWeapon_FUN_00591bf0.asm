; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_drawWeapon_FUN_00591bf0(CStranger *this_ptr,int drawn)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   drawn
;
; Referenced Globals:
;   undefined4 s_flashlit_wav_005f71d8+1
;   CGame* g_CGamePtr = 01ccf390
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.flashlight_active
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00591bf0
        ;   Label: core_stranger.cpp_CStranger_drawWeapon_FUN_00591bf0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00591bf4
    MOV dword ptr [EDX + 0x1ffac],EAX   ; 00591bf8
    TEST EAX,EAX                        ; 00591bfe
    JNZ 0x00591c10                      ; 00591c00
        ;   XREF to: 00591c10 (CONDITIONAL_JUMP)  ; LAB_00591c10
    MOV EAX,[0x0061d95c]                ; 00591c02 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x264],0x0     ; 00591c07 | g_CGameInstance.flashlight_active
    JNZ 0x00591c11                      ; 00591c0e
        ;   XREF to: 00591c11 (CONDITIONAL_JUMP)  ; LAB_00591c11
    RET                                 ; 00591c10
        ;   Label: LAB_00591c10
    PUSH 0x5f71d9                       ; 00591c11 | s_flashlit_wav_005f71d8+1
        ;   Label: LAB_00591c11
    MOV dword ptr [EAX + 0x264],0x0     ; 00591c16 | g_CGameInstance.flashlight_active
    PUSH EDX                            ; 00591c20
    MOV EAX,dword ptr [EDX + 0x154]     ; 00591c21
    CALL dword ptr [EAX + 0x2c]         ; 00591c27
    ADD ESP,0x8                         ; 00591c2a
    RET                                 ; 00591c2d

