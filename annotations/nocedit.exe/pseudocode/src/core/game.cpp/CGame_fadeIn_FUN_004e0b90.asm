; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl undefined4 __cdecl core_game_cpp_CGame_fadeIn_FUN_004e0b90(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_event.cpp_CEventList_FUN_004ae140 at 004af173
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004dbb43
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055cf8e
;
; Referenced Globals:
;   undefined4 DAT_02d831ec
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02d831ec]      ; 004e0b90 | DAT_02d831ec
        ;   Label: core_game.cpp_CGame_fadeIn_FUN_004e0b90
    TEST EDX,EDX                        ; 004e0b96
    JZ 0x004e0b9f                       ; 004e0b98
        ;   XREF to: 004e0b9f (CONDITIONAL_JUMP)  ; LAB_004e0b9f
    CMP EDX,0x5                         ; 004e0b9a
    JNZ 0x004e0ba5                      ; 004e0b9d
        ;   XREF to: 004e0ba5 (CONDITIONAL_JUMP)  ; LAB_004e0ba5
    MOV EAX,0x1                         ; 004e0b9f
        ;   Label: LAB_004e0b9f
    RET                                 ; 004e0ba4
    XOR EAX,EAX                         ; 004e0ba5
        ;   Label: LAB_004e0ba5
    RET                                 ; 004e0ba7

