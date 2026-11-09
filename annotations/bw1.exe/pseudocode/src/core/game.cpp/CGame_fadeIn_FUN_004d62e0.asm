; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_game_cpp_CGame_fadeIn_FUN_004d62e0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0 at 004a82c5
;   core_game.cpp_FUN_004cf5e0 at 004d0323
;   core_script.cpp_CScript_step_FUN_00544460 at 00547238
;
; Referenced Globals:
;   undefined4 DAT_01cd0c7c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01cd0c7c]      ; 004d62e0 | DAT_01cd0c7c
        ;   Label: core_game.cpp_CGame_fadeIn_FUN_004d62e0
    TEST EDX,EDX                        ; 004d62e6
    JZ 0x004d62ef                       ; 004d62e8
        ;   XREF to: 004d62ef (CONDITIONAL_JUMP)  ; LAB_004d62ef
    CMP EDX,0x5                         ; 004d62ea
    JNZ 0x004d62f5                      ; 004d62ed
        ;   XREF to: 004d62f5 (CONDITIONAL_JUMP)  ; LAB_004d62f5
    MOV EAX,0x1                         ; 004d62ef
        ;   Label: LAB_004d62ef
    RET                                 ; 004d62f4
    XOR EAX,EAX                         ; 004d62f5
        ;   Label: LAB_004d62f5
    RET                                 ; 004d62f7

