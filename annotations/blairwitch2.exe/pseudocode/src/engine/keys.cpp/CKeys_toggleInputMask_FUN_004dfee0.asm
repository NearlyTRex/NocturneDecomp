; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_keys_cpp_CKeys_toggleInputMask_FUN_004dfee0(CKeys *this_ptr,int enable_extended)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   enable_extended
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_004b6170 at 004b6584
;   core_menu.cpp_FUN_004eed60 at 004efd2a
;
; Referenced Globals:
;   undefined4 DAT_006141cc
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x8],0x0       ; 004dfee0
        ;   Label: engine_keys.cpp_CKeys_toggleInputMask_FUN_004dfee0
    JZ 0x004dfef3                       ; 004dfee5
        ;   XREF to: 004dfef3 (CONDITIONAL_JUMP)  ; LAB_004dfef3
    MOV EDX,0x1ff                       ; 004dfee7
    MOV dword ptr [0x006141cc],EDX      ; 004dfeec | DAT_006141cc
    RET                                 ; 004dfef2
    MOV EDX,0x7f                        ; 004dfef3
        ;   Label: LAB_004dfef3
    MOV dword ptr [0x006141cc],EDX      ; 004dfef8 | DAT_006141cc
    RET                                 ; 004dfefe

