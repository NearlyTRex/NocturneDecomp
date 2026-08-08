; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_keys_cpp_CKeys_toggleInputMask_FUN_004c4210(CKeys *this_ptr,int enable_extended)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   enable_extended
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049ddfe
;   core_menu.cpp_configureCustomKeyBindings_FUN_004d2d00 at 004d3e20
;
; Referenced Globals:
;   int INT_005b7630 = 0x7f
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x8],0x0       ; 004c4210
        ;   Label: engine_keys.cpp_CKeys_toggleInputMask_FUN_004c4210
    JZ 0x004c4223                       ; 004c4215
        ;   XREF to: 004c4223 (CONDITIONAL_JUMP)  ; LAB_004c4223
    MOV EDX,0x1ff                       ; 004c4217
    MOV dword ptr [0x005b7630],EDX      ; 004c421c | INT_005b7630
    RET                                 ; 004c4222
    MOV EDX,0x7f                        ; 004c4223
        ;   Label: LAB_004c4223
    MOV dword ptr [0x005b7630],EDX      ; 004c4228 | INT_005b7630
    RET                                 ; 004c422e

