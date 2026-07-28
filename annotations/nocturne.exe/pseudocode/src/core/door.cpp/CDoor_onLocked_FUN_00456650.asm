; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_door_cpp_CDoor_onLocked_FUN_00456650(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_door.cpp_CDoor_getMoveType_FUN_004564b0 at 00456506
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004b5270 at 004b52d1
;
; Referenced Globals:
;   undefined4 DAT_01af4e98
;
; Called Functions:
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456650
        ;   Label: core_door.cpp_CDoor_onLocked_FUN_00456650
    MOV EBX,dword ptr [ESP + 0x8]       ; 00456651
    MOV EDX,dword ptr [0x01af4e98]      ; 00456655 | DAT_01af4e98
    PUSH EDX                            ; 0045665b
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 0045665c
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 00456661
    TEST EAX,EAX                        ; 00456664
    JZ 0x0045666a                       ; 00456666
        ;   XREF to: 0045666a (CONDITIONAL_JUMP)  ; LAB_0045666a
    POP EBX                             ; 00456668
    RET                                 ; 00456669
    LEA EDX,[EBX + 0x924]               ; 0045666a
        ;   Label: LAB_0045666a
    PUSH EDX                            ; 00456670
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00456671
    PUSH EBX                            ; 00456677
    CALL dword ptr [EAX + 0x24]         ; 00456678
    ADD ESP,0x8                         ; 0045667b
    MOV [0x01af4e98],EAX                ; 0045667e | DAT_01af4e98
    POP EBX                             ; 00456683
    RET                                 ; 00456684

