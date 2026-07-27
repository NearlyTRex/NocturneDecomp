; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_armour_cpp_FUN_0040fbc0(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_armour_wav_005784ae
;
; Called Functions:
;   core_charactr.cpp_CCharacter_dismember_FUN_00427b60
;   core_enemy.cpp_CEnemy_processDamage_FUN_00479f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040fbc0
        ;   Label: core_armour.cpp_FUN_0040fbc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040fbc1
    PUSH 0x1                            ; 0040fbc5
    PUSH 0xbf800000                     ; 0040fbc7
    PUSH 0x0                            ; 0040fbcc
    PUSH EBX                            ; 0040fbce
    CALL core_charactr.cpp_CCharacter_dismember_FUN_00427b60 ; 0040fbcf
        ;   XREF to: 00427b60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_dismember_FUN_00427b60()
    ADD ESP,0x10                        ; 0040fbd4
    PUSH 0x5784ae                       ; 0040fbd7 | = "armour.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0040fbdc
    PUSH EBX                            ; 0040fbe2
    CALL dword ptr [EAX + 0x24]         ; 0040fbe3
    ADD ESP,0x8                         ; 0040fbe6
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040fbe9
    PUSH EDX                            ; 0040fbed
    PUSH EBX                            ; 0040fbee
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 0040fbef
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_processDamage_FUN_00479f70()
    ADD ESP,0x8                         ; 0040fbf4
    POP EBX                             ; 0040fbf7
    RET                                 ; 0040fbf8

