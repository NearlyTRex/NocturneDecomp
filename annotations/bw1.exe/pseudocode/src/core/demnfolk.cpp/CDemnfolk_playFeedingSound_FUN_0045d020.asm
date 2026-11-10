; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_demnfolk_cpp_CDemnfolk_playFeedingSound_FUN_0045d020(CDemnfolk *this_ptr)
;
; Parameters:
; CDemnfolk *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_ghoul_eat_wav_005d831b
;   TerminatedCString s_ghoul_dig_wav_005d832b
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d020
        ;   Label: core_demnfolk.cpp_CDemnfolk_playFeedingSound_FUN_0045d020
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045d021
    PUSH 0x3f000000                     ; 0045d025
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0045d02a
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0045d02f
    TEST EAX,EAX                        ; 0045d032
    JZ 0x0045d050                       ; 0045d034
        ;   XREF to: 0045d050 (CONDITIONAL_JUMP)  ; LAB_0045d050
    PUSH 0x5d831b                       ; 0045d036 | = "ghoul-eat-?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045d03b
        ;   Label: LAB_0045d03b
    PUSH EBX                            ; 0045d041
    CALL dword ptr [EAX + 0x2c]         ; 0045d042
    ADD ESP,0x8                         ; 0045d045
    MOV dword ptr [EBX + 0xc354],EAX    ; 0045d048
    POP EBX                             ; 0045d04e
    RET                                 ; 0045d04f
    PUSH 0x5d832b                       ; 0045d050 | = "ghoul-dig-?.wav"
        ;   Label: LAB_0045d050
    JMP 0x0045d03b                      ; 0045d055
        ;   XREF to: 0045d03b (UNCONDITIONAL_JUMP)  ; LAB_0045d03b

