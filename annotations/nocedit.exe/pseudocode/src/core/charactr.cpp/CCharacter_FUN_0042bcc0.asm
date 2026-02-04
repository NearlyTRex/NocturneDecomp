; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_charactr_cpp_CCharacter_FUN_0042bcc0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[10]:
;   core_batcreat.cpp_CBatCreature_FUN_00415dd0 at 00415fe0
;   core_batman.cpp_CBatman_FUN_00417660 at 004177a1
;   core_charactr.cpp_CCharacter_FUN_0042b9e0 at 0042ba66
;   core_cow.cpp_CZombieCow_FUN_004448c0 at 00444a22
;   core_gargoyle.cpp_CGargoyle_unk4_FUN_004e5530 at 004e5661
;   core_ghoul.cpp_FUN_004e8520 at 004e8682
;   core_imp.cpp_CImp_FUN_004fab60 at 004faca1
;   core_mobster.cpp_CMobster_FUN_00527380 at 00527504
;   core_smiley.cpp_FUN_005a32a0 at 005a3421
;   core_zombie.cpp_CZombie_FUN_005fc220 at 005fc382
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_FUN_0041a050
;   core_bodypart.cpp_createBodyPart_FUN_00418e10
;   core_charactr.cpp_CCharacter_FUN_0042bd30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042bcc0
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042bcc0
    PUSH ESI                            ; 0042bcc1
    PUSH EBP                            ; 0042bcc2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0042bcc3
    LEA ESI,[EBX + 0x23b8]              ; 0042bcc7
    CMP byte ptr [ESI],0x0              ; 0042bccd
    JZ 0x0042bce0                       ; 0042bcd0
        ;   XREF to: 0042bce0 (CONDITIONAL_JUMP)  ; LAB_0042bce0
    MOV ESI,dword ptr [ESP + 0x14]      ; 0042bcd2
    CMP dword ptr [EBX + ESI*0x4 + 0x2298],0x0 ; 0042bcd6
    JNZ 0x0042bce4                      ; 0042bcde
        ;   XREF to: 0042bce4 (CONDITIONAL_JUMP)  ; LAB_0042bce4
    POP EBP                             ; 0042bce0
        ;   Label: LAB_0042bce0
    POP ESI                             ; 0042bce1
    POP EBX                             ; 0042bce2
    RET                                 ; 0042bce3
    PUSH EDI                            ; 0042bce4
        ;   Label: LAB_0042bce4
    MOV ECX,dword ptr [EBX + 0x2610]    ; 0042bce5
    PUSH ECX                            ; 0042bceb
    PUSH 0x0                            ; 0042bcec
    PUSH 0x0                            ; 0042bcee
    PUSH EBX                            ; 0042bcf0
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0042bcf1
    PUSH ESI                            ; 0042bcf5
    LEA ESI,[EBX + 0x30]                ; 0042bcf6
    PUSH ESI                            ; 0042bcf9
    LEA ESI,[EBX + 0x20]                ; 0042bcfa
    PUSH ESI                            ; 0042bcfd
    CALL core_bodypart.cpp_createBodyPart_FUN_00418e10 ; 0042bcfe
        ;   XREF to: 00418e10 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00418e10()
    ADD ESP,0x1c                        ; 0042bd03
    MOV EDI,dword ptr [ESP + 0x20]      ; 0042bd06
    PUSH EDI                            ; 0042bd0a
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0042bd0b
    PUSH EBP                            ; 0042bd0f
    PUSH EAX                            ; 0042bd10
    PUSH EBX                            ; 0042bd11
    MOV ESI,EAX                         ; 0042bd12
    CALL core_charactr.cpp_CCharacter_FUN_0042bd30 ; 0042bd14
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bd30(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 0042bd19
    PUSH ESI                            ; 0042bd1c
    CALL core_bodypart.cpp_CBodyPart_FUN_0041a050 ; 0042bd1d
        ;   XREF to: 0041a050 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_FUN_0041a050(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 0042bd22
    POP EDI                             ; 0042bd25
    POP EBP                             ; 0042bd26
    POP ESI                             ; 0042bd27
    POP EBX                             ; 0042bd28
    RET                                 ; 0042bd29

