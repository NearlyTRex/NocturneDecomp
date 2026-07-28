; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_game_cpp_CGame_fadeIn_FUN_004a3a50(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_0047e0d0 at 0047f118
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049e588
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00501a3e
;
; Referenced Globals:
;   undefined4 DAT_01c78b04
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01c78b04]      ; 004a3a50 | DAT_01c78b04
        ;   Label: core_game.cpp_CGame_fadeIn_FUN_004a3a50
    TEST EDX,EDX                        ; 004a3a56
    JZ 0x004a3a5f                       ; 004a3a58
        ;   XREF to: 004a3a5f (CONDITIONAL_JUMP)  ; LAB_004a3a5f
    CMP EDX,0x5                         ; 004a3a5a
    JNZ 0x004a3a65                      ; 004a3a5d
        ;   XREF to: 004a3a65 (CONDITIONAL_JUMP)  ; LAB_004a3a65
    MOV EAX,0x1                         ; 004a3a5f
        ;   Label: LAB_004a3a5f
    RET                                 ; 004a3a64
    XOR EAX,EAX                         ; 004a3a65
        ;   Label: LAB_004a3a65
    RET                                 ; 004a3a67

