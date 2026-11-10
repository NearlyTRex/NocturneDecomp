; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_clearLights_FUN_00551b90(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004cfd05
;   core_mission.cpp_CDemonMission_process_FUN_0051b8d0 at 0051ba1e
;   core_set.cpp_FUN_0054e69e at 0054ec3c
;
; Referenced Globals:
;   undefined4 DAT_01fe4cb4
;   undefined4 DAT_01fe4cb8
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_free_FUN_0044cdf0
;   core_dlight.cpp_resetRestoreMemoryAllocator_FUN_00462760
;   core_setutil.cpp_C3DSLight_doNothing_FUN_0055d190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551b90
        ;   Label: core_set.cpp_CDemonSet_clearLights_FUN_00551b90
    PUSH ESI                            ; 00551b91
    PUSH EDI                            ; 00551b92
    PUSH EBP                            ; 00551b93
    MOV EDI,dword ptr [ESP + 0x14]      ; 00551b94
    MOV EDX,dword ptr [0x01fe4cb4]      ; 00551b98 | DAT_01fe4cb4
    XOR ESI,ESI                         ; 00551b9e
    TEST EDX,EDX                        ; 00551ba0
    JLE 0x00551bc6                      ; 00551ba2
        ;   XREF to: 00551bc6 (CONDITIONAL_JUMP)  ; LAB_00551bc6
    XOR EBX,EBX                         ; 00551ba4
    MOV EAX,dword ptr [EBX + 0x1fe4cb8] ; 00551ba6 | DAT_01fe4cb8
        ;   Label: LAB_00551ba6
    TEST EAX,EAX                        ; 00551bac
    JNZ 0x00551c17                      ; 00551bae
        ;   XREF to: 00551c17 (CONDITIONAL_JUMP)  ; LAB_00551c17
    MOV EBP,dword ptr [0x01fe4cb4]      ; 00551bb0 | DAT_01fe4cb4
        ;   Label: LAB_00551bb0
    ADD EBX,0x4                         ; 00551bb6
    XOR ECX,ECX                         ; 00551bb9
    INC ESI                             ; 00551bbb
    MOV dword ptr [EBX + 0x1fe4cb4],ECX ; 00551bbc | DAT_01fe4cb8
    CMP ESI,EBP                         ; 00551bc2
    JL 0x00551ba6                       ; 00551bc4
        ;   XREF to: 00551ba6 (CONDITIONAL_JUMP)  ; LAB_00551ba6
    MOV EDX,dword ptr [EDI + 0x19a2c]   ; 00551bc6
        ;   Label: LAB_00551bc6
    XOR EAX,EAX                         ; 00551bcc
    XOR ESI,ESI                         ; 00551bce
    MOV [0x01fe4cb4],EAX                ; 00551bd0 | DAT_01fe4cb4
    TEST EDX,EDX                        ; 00551bd5
    JLE 0x00551c00                      ; 00551bd7
        ;   XREF to: 00551c00 (CONDITIONAL_JUMP)  ; LAB_00551c00
    LEA EBX,[EDI + 0x19a30]             ; 00551bd9
    PUSH EBX                            ; 00551bdf
        ;   Label: LAB_00551bdf
    CALL core_setutil.cpp_C3DSLight_doNothing_FUN_0055d190 ; 00551be0
        ;   XREF to: 0055d190 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_doNothing_FUN_0055d190(C3DSLight * this_ptr)
    INC ESI                             ; 00551be5
    ADD ESP,0x4                         ; 00551be6
    MOV ECX,dword ptr [EDI + 0x19a2c]   ; 00551be9
    ADD EBX,0x1898                      ; 00551bef
    CMP ESI,ECX                         ; 00551bf5
    JL 0x00551bdf                       ; 00551bf7
        ;   XREF to: 00551bdf (CONDITIONAL_JUMP)  ; LAB_00551bdf
    LEA EAX,[EAX]                       ; 00551bf9
    NOP                                 ; 00551bff
    CALL core_dlight.cpp_resetRestoreMemoryAllocator_FUN_00462760 ; 00551c00
        ;   XREF to: 00462760 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_resetRestoreMemoryAllocator_FUN_00462760()
        ;   Label: LAB_00551c00
    PUSH 0x1fe37ec                      ; 00551c05
    CALL core_dcamera.cpp_CDemonCamera_free_FUN_0044cdf0 ; 00551c0a
        ;   XREF to: 0044cdf0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_free_FUN_0044cdf0(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 00551c0f
    POP EBP                             ; 00551c12
    POP EDI                             ; 00551c13
    POP ESI                             ; 00551c14
    POP EBX                             ; 00551c15
    RET                                 ; 00551c16
    PUSH 0x2                            ; 00551c17
        ;   Label: LAB_00551c17
    MOV EDX,dword ptr [EAX + 0x3c]      ; 00551c19
    PUSH EAX                            ; 00551c1c
    CALL dword ptr [EDX]                ; 00551c1d
    ADD ESP,0x8                         ; 00551c1f
    JMP 0x00551bb0                      ; 00551c22
        ;   XREF to: 00551bb0 (UNCONDITIONAL_JUMP)  ; LAB_00551bb0

