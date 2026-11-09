; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_door_cpp_FUN_00478d10(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_door.cpp_CDoor_getMoveType_FUN_00478b40 at 00478bf9
;   core_hero.cpp_FUN_004eb5e0 at 004eb641
;
; Referenced Globals:
;   undefined4 DAT_01b688ec
;
; Called Functions:
;   sound_sndmain.cpp_FUN_005735a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478d10
        ;   Label: core_door.cpp_FUN_00478d10
    MOV EBX,dword ptr [ESP + 0x8]       ; 00478d11
    MOV EDX,dword ptr [0x01b688ec]      ; 00478d15 | DAT_01b688ec
    PUSH EDX                            ; 00478d1b
    CALL sound_sndmain.cpp_FUN_005735a0 ; 00478d1c
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00478d21
    TEST EAX,EAX                        ; 00478d24
    JZ 0x00478d2a                       ; 00478d26
        ;   XREF to: 00478d2a (CONDITIONAL_JUMP)  ; LAB_00478d2a
    POP EBX                             ; 00478d28
    RET                                 ; 00478d29
    LEA EDX,[EBX + 0x92c]               ; 00478d2a
        ;   Label: LAB_00478d2a
    PUSH EDX                            ; 00478d30
    MOV EAX,dword ptr [EBX + 0x154]     ; 00478d31
    PUSH EBX                            ; 00478d37
    CALL dword ptr [EAX + 0x2c]         ; 00478d38
    ADD ESP,0x8                         ; 00478d3b
    MOV [0x01b688ec],EAX                ; 00478d3e | DAT_01b688ec
    POP EBX                             ; 00478d43
    RET                                 ; 00478d44

