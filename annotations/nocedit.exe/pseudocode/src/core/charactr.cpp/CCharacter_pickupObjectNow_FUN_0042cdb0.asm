; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[9]:
;   core_boneguy.cpp_FUN_0041bf90 at 0041c355
;   core_charactr.cpp_CCharacter_FUN_0042f3e0 at 0042f6cf
;   core_hero.cpp_FUN_004f3890 at 004f38ae
;   core_icepick.cpp_FUN_004f93a0 at 004f945c
;   core_mobster.cpp_FUN_00525840 at 00525afe
;   core_stranger.cpp_CStranger_FUN_005c5270 at 005c5481
;   core_vampboss.cpp_FUN_005e7030 at 005e720f
;   core_vehicle.cpp_CVehicle_process_FUN_005e7e80 at 005e857c
;   core_zombie.cpp_CZombie_process_FUN_005f9470 at 005f9947
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_006172a2
;   TerminatedCString s_CCharacter_pickupObjectN_006172b7
;   TerminatedCString s_core_charactr_cpp_006172e8
;   TerminatedCString s_CCharacter_pickupObjectN_006172fd
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042cdb0
        ;   Label: core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
    PUSH ESI                            ; 0042cdb1
    PUSH EDI                            ; 0042cdb2
    PUSH EBP                            ; 0042cdb3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0042cdb4
    MOV EDI,dword ptr [ESP + 0x18]      ; 0042cdb8
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0042cdbc
    TEST EDI,EDI                        ; 0042cdc0
    JL 0x0042cdc9                       ; 0042cdc2
        ;   XREF to: 0042cdc9 (CONDITIONAL_JUMP)  ; LAB_0042cdc9
    CMP EDI,0x2                         ; 0042cdc4
    JL 0x0042cdec                       ; 0042cdc7
        ;   XREF to: 0042cdec (CONDITIONAL_JUMP)  ; LAB_0042cdec
    MOV EDX,0x6172a2                    ; 0042cdc9 | = "..\\core\\charactr.cpp"
        ;   Label: LAB_0042cdc9
    MOV ECX,0xbd3                       ; 0042cdce
    PUSH 0x6172b7                       ; 0042cdd3 | = "CCharacter::pickupObjectNow - invalid..."
    MOV dword ptr [0x02f0ca48],EDX      ; 0042cdd8 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0042cdde | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0042cde4
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0042cde9
    TEST EBP,EBP                        ; 0042cdec
        ;   Label: LAB_0042cdec
    JNZ 0x0042cdf5                      ; 0042cdee
        ;   XREF to: 0042cdf5 (CONDITIONAL_JUMP)  ; LAB_0042cdf5
    POP EBP                             ; 0042cdf0
        ;   Label: LAB_0042cdf0
    POP EDI                             ; 0042cdf1
    POP ESI                             ; 0042cdf2
    POP EBX                             ; 0042cdf3
    RET                                 ; 0042cdf4
    PUSH 0x0                            ; 0042cdf5
        ;   Label: LAB_0042cdf5
    PUSH EDI                            ; 0042cdf7
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042cdf8
    PUSH EBX                            ; 0042cdfe
    CALL dword ptr [EAX + 0x13c]        ; 0042cdff
    MOV EAX,EDI                         ; 0042ce05
    SHL EAX,0x4                         ; 0042ce07
    ADD EAX,EDI                         ; 0042ce0a
    LEA ESI,[EBX + 0x24ac]              ; 0042ce0c
    SHL EAX,0x2                         ; 0042ce12
    ADD ESI,EAX                         ; 0042ce15
    MOV EAX,dword ptr [ESI + 0x4]       ; 0042ce17
    ADD ESP,0xc                         ; 0042ce1a
    TEST EAX,EAX                        ; 0042ce1d
    JL 0x0042ce2b                       ; 0042ce1f
        ;   XREF to: 0042ce2b (CONDITIONAL_JUMP)  ; LAB_0042ce2b
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0042ce21
    JZ 0x0042cdf0                       ; 0042ce29
        ;   XREF to: 0042cdf0 (CONDITIONAL_JUMP)  ; LAB_0042cdf0
    CMP dword ptr [ESI],0x0             ; 0042ce2b
        ;   Label: LAB_0042ce2b
    JGE 0x0042ce52                      ; 0042ce2e
        ;   XREF to: 0042ce52 (CONDITIONAL_JUMP)  ; LAB_0042ce52
    MOV EAX,0x6172e8                    ; 0042ce30 | = "..\\core\\charactr.cpp"
    MOV EDX,0xbeb                       ; 0042ce35
    PUSH 0x6172fd                       ; 0042ce3a | = "CCharacter::pickupObjectNow - invalid..."
    MOV [0x02f0ca48],EAX                ; 0042ce3f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0042ce44 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0042ce4a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0042ce4f
    PUSH EBX                            ; 0042ce52
        ;   Label: LAB_0042ce52
    MOV EAX,dword ptr [EBP + 0x154]     ; 0042ce53
    PUSH EBP                            ; 0042ce59
    CALL dword ptr [EAX + 0x80]         ; 0042ce5a
    ADD ESP,0x8                         ; 0042ce60
    PUSH dword ptr [ESP + 0x20]         ; 0042ce63
    PUSH EDI                            ; 0042ce67
    PUSH EBX                            ; 0042ce68
    MOV dword ptr [ESI + 0x8],EBP       ; 0042ce69
    CALL core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80 ; 0042ce6c
        ;   XREF to: 0042ce80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80(CCharacter * this_ptr)
    ADD ESP,0xc                         ; 0042ce71
    POP EBP                             ; 0042ce74
    POP EDI                             ; 0042ce75
    POP ESI                             ; 0042ce76
    POP EBX                             ; 0042ce77
    RET                                 ; 0042ce78

