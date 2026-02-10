; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_enemy_cpp_CEnemy_FUN_004aa030(CEnemy *this_ptr)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   int g_ActorMagicNumber
;
; Called Functions:
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa030
        ;   Label: core_enemy.cpp_CEnemy_FUN_004aa030
    SUB ESP,0xc                         ; 004aa031
    MOV EBX,dword ptr [ESP + 0x14]      ; 004aa034
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 004aa038
    TEST EDX,EDX                        ; 004aa03e
    JNZ 0x004aa047                      ; 004aa040
        ;   XREF to: 004aa047 (CONDITIONAL_JUMP)  ; LAB_004aa047
    ADD ESP,0xc                         ; 004aa042
        ;   Label: LAB_004aa042
    POP EBX                             ; 004aa045
    RET                                 ; 004aa046
    MOV EAX,EDX                         ; 004aa047
        ;   Label: LAB_004aa047
    PUSH EAX                            ; 004aa049
    MOV EDX,dword ptr [EDX + 0x154]     ; 004aa04a
    CALL dword ptr [EDX + 0x108]        ; 004aa050
    ADD ESP,0x4                         ; 004aa056
    CMP EAX,EBX                         ; 004aa059
    JNZ 0x004aa042                      ; 004aa05b
        ;   XREF to: 004aa042 (CONDITIONAL_JUMP)  ; LAB_004aa042
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004aa05d
    PUSH EAX                            ; 004aa063
    MOV EDX,dword ptr [EAX + 0x154]     ; 004aa064
    CALL dword ptr [EDX + 0x104]        ; 004aa06a
    MOV ECX,dword ptr [EBX + 0x68]      ; 004aa070
    ADD ESP,0x4                         ; 004aa073
    CMP ECX,0x78a123                    ; 004aa076 | g_ActorMagicNumber
    JNZ 0x004aa0af                      ; 004aa07c
        ;   XREF to: 004aa0af (CONDITIONAL_JUMP)  ; LAB_004aa0af
    LEA EAX,[EBX + 0x158]               ; 004aa07e
    CMP dword ptr [EAX + 0x22b0],0x0    ; 004aa084
    JZ 0x004aa0af                       ; 004aa08b
        ;   XREF to: 004aa0af (CONDITIONAL_JUMP)  ; LAB_004aa0af
    PUSH EDI                            ; 004aa08d
    MOV dword ptr [ESP + 0xc],0xba83126f ; 004aa08e
    LEA EAX,[ESP + 0x4]                 ; 004aa096
    PUSH EAX                            ; 004aa09a
    XOR EDI,EDI                         ; 004aa09b
    PUSH EBX                            ; 004aa09d
    MOV dword ptr [ESP + 0xc],EDI       ; 004aa09e
    MOV dword ptr [ESP + 0x10],EDI      ; 004aa0a2
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 ; 004aa0a6
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004aa0ab
    POP EDI                             ; 004aa0ae
    MOV dword ptr [EBX + 0xbe3c],0x0    ; 004aa0af
        ;   Label: LAB_004aa0af
    ADD ESP,0xc                         ; 004aa0b9
    POP EBX                             ; 004aa0bc
    RET                                 ; 004aa0bd

