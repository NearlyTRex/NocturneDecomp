; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_doc_cpp_CDoc_drawWeapon_FUN_00476220(CDoc *this_ptr,int drawn)
;
; Parameters:
; CDoc *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   drawn
;
; Referenced Globals:
;   TerminatedCString s_flashlit_wav_5_005da5f4
;   CGame* g_CGamePtr = 01ccf390
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.flashlight_active
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00476220
        ;   Label: core_doc.cpp_CDoc_drawWeapon_FUN_00476220
    MOV EAX,dword ptr [ESP + 0x8]       ; 00476224
    MOV dword ptr [EDX + 0x1ffac],EAX   ; 00476228
    TEST EAX,EAX                        ; 0047622e
    JNZ 0x00476240                      ; 00476230
        ;   XREF to: 00476240 (CONDITIONAL_JUMP)  ; LAB_00476240
    MOV EAX,[0x0061d95c]                ; 00476232 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x264],0x0     ; 00476237 | g_CGameInstance.flashlight_active
    JNZ 0x00476241                      ; 0047623e
        ;   XREF to: 00476241 (CONDITIONAL_JUMP)  ; LAB_00476241
    RET                                 ; 00476240
        ;   Label: LAB_00476240
    PUSH 0x5da5f4                       ; 00476241 | = "flashlit.wav @ .5"
        ;   Label: LAB_00476241
    MOV dword ptr [EAX + 0x264],0x0     ; 00476246 | g_CGameInstance.flashlight_active
    PUSH EDX                            ; 00476250
    MOV EAX,dword ptr [EDX + 0x154]     ; 00476251
    CALL dword ptr [EAX + 0x2c]         ; 00476257
    ADD ESP,0x8                         ; 0047625a
    RET                                 ; 0047625d

