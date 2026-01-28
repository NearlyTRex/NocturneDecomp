; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_keys_cpp_CKeys_toggleInputMask_FUN_005024b0(CKeys *this_ptr,int enable_extended)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   enable_extended
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db52c
;   core_menu.cpp_configureCustomKeyBindings_FUN_005138e0 at 00514b1a
;
; Referenced Globals:
;   int g_InputKeyMask = 0x7f
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x8],0x0       ; 005024b0
        ;   Label: engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0
    JZ 0x005024c3                       ; 005024b5
        ;   XREF to: 005024c3 (CONDITIONAL_JUMP)  ; LAB_005024c3
    MOV EDX,0x1ff                       ; 005024b7
    MOV dword ptr [0x006793a8],EDX      ; 005024bc | g_InputKeyMask
    RET                                 ; 005024c2
    MOV EDX,0x7f                        ; 005024c3
        ;   Label: LAB_005024c3
    MOV dword ptr [0x006793a8],EDX      ; 005024c8 | g_InputKeyMask
    RET                                 ; 005024ce

