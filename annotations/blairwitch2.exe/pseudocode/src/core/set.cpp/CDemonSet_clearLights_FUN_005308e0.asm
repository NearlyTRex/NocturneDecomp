; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_clearLights_FUN_005308e0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_game.cpp_CGame_runGameSession_FUN_004b6170 at 004b6807
;   core_mission.cpp_CDemonMission_process_FUN_004fc940 at 004fca4b
;   core_set.cpp_FUN_0052d3be at 0052d95c
;
; Referenced Globals:
;   undefined4 DAT_01fc8d00
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_free_FUN_0043b730
;   core_dlight.cpp_resetRestoreMemoryAllocator_FUN_00449f60
;   core_setutil.cpp_C3DSLight_doNothing_FUN_0053b8c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005308e0
        ;   Label: core_set.cpp_CDemonSet_clearLights_FUN_005308e0
    PUSH ESI                            ; 005308e1
    PUSH EDI                            ; 005308e2
    PUSH EBP                            ; 005308e3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005308e4
    MOV EDX,dword ptr [0x01fc8d00]      ; 005308e8 | DAT_01fc8d00
    XOR ESI,ESI                         ; 005308ee
    TEST EDX,EDX                        ; 005308f0
    JLE 0x00530916                      ; 005308f2
        ;   XREF to: 00530916 (CONDITIONAL_JUMP)  ; LAB_00530916
    XOR EBX,EBX                         ; 005308f4
    MOV EAX,dword ptr [EBX + 0x1fc8d04] ; 005308f6
        ;   Label: LAB_005308f6
    TEST EAX,EAX                        ; 005308fc
    JNZ 0x00530967                      ; 005308fe
        ;   XREF to: 00530967 (CONDITIONAL_JUMP)  ; LAB_00530967
    MOV EBP,dword ptr [0x01fc8d00]      ; 00530900 | DAT_01fc8d00
        ;   Label: LAB_00530900
    ADD EBX,0x4                         ; 00530906
    XOR ECX,ECX                         ; 00530909
    INC ESI                             ; 0053090b
    MOV dword ptr [EBX + 0x1fc8d00],ECX ; 0053090c
    CMP ESI,EBP                         ; 00530912
    JL 0x005308f6                       ; 00530914
        ;   XREF to: 005308f6 (CONDITIONAL_JUMP)  ; LAB_005308f6
    MOV EDX,dword ptr [EDI + 0x19a2c]   ; 00530916
        ;   Label: LAB_00530916
    XOR EAX,EAX                         ; 0053091c
    XOR ESI,ESI                         ; 0053091e
    MOV [0x01fc8d00],EAX                ; 00530920 | DAT_01fc8d00
    TEST EDX,EDX                        ; 00530925
    JLE 0x00530950                      ; 00530927
        ;   XREF to: 00530950 (CONDITIONAL_JUMP)  ; LAB_00530950
    LEA EBX,[EDI + 0x19a30]             ; 00530929
    PUSH EBX                            ; 0053092f
        ;   Label: LAB_0053092f
    CALL core_setutil.cpp_C3DSLight_doNothing_FUN_0053b8c0 ; 00530930
        ;   XREF to: 0053b8c0 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_doNothing_FUN_0053b8c0(C3DSLight * this_ptr)
    INC ESI                             ; 00530935
    ADD ESP,0x4                         ; 00530936
    MOV ECX,dword ptr [EDI + 0x19a2c]   ; 00530939
    ADD EBX,0x1898                      ; 0053093f
    CMP ESI,ECX                         ; 00530945
    JL 0x0053092f                       ; 00530947
        ;   XREF to: 0053092f (CONDITIONAL_JUMP)  ; LAB_0053092f
    LEA EAX,[EAX]                       ; 00530949
    NOP                                 ; 0053094f
    CALL core_dlight.cpp_resetRestoreMemoryAllocator_FUN_00449f60 ; 00530950
        ;   XREF to: 00449f60 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_resetRestoreMemoryAllocator_FUN_00449f60()
        ;   Label: LAB_00530950
    PUSH 0x1fc7838                      ; 00530955
    CALL core_dcamera.cpp_CDemonCamera_free_FUN_0043b730 ; 0053095a
        ;   XREF to: 0043b730 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_free_FUN_0043b730(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0053095f
    POP EBP                             ; 00530962
    POP EDI                             ; 00530963
    POP ESI                             ; 00530964
    POP EBX                             ; 00530965
    RET                                 ; 00530966
    PUSH 0x2                            ; 00530967
        ;   Label: LAB_00530967
    MOV EDX,dword ptr [EAX + 0x3c]      ; 00530969
    PUSH EAX                            ; 0053096c
    CALL dword ptr [EDX]                ; 0053096d
    ADD ESP,0x8                         ; 0053096f
    JMP 0x00530900                      ; 00530972
        ;   XREF to: 00530900 (UNCONDITIONAL_JUMP)  ; LAB_00530900

