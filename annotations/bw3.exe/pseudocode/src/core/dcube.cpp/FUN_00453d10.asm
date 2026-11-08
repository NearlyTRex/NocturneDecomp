; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00453d10(int *param_1)
;
;
; XREF[2]:
;   FUN_004784a0 at 0047858c
;   FUN_004785c0 at 004786ab
;
; Referenced Globals:
;   TerminatedCString s_core_dcube_cpp_005ba136
;   TerminatedCString s_CDemonCube_allocMemory_O_005ba148
;   TerminatedCString s_core_dcube_cpp_005ba176
;   TerminatedCString s_CDemonCube_allocMemory_O_005ba188
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;   FUN_005a4b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453d10
        ;   Label: FUN_00453d10
    PUSH EBP                            ; 00453d11
    MOV EBX,dword ptr [ESP + 0xc]       ; 00453d12
    PUSH 0x1                            ; 00453d16
    PUSH 0x40                           ; 00453d18
    CALL FUN_005a4b20                   ; 00453d1a
        ;   XREF to: 005a4b20 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4b20()
    ADD ESP,0x8                         ; 00453d1f
    MOV dword ptr [EBX],EAX             ; 00453d22
    TEST EAX,EAX                        ; 00453d24
    JNZ 0x00453d4d                      ; 00453d26
        ;   XREF to: 00453d4d (CONDITIONAL_JUMP)  ; LAB_00453d4d
    PUSH ESI                            ; 00453d28
    MOV ECX,0x5ba136                    ; 00453d29 | = "..\\core\\dcube.cpp"
    MOV ESI,0x5f3                       ; 00453d2e
    PUSH 0x5ba148                       ; 00453d33 | = "CDemonCube::allocMemory - Out of voxe..."
    MOV dword ptr [0x01d71de0],ECX      ; 00453d38 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00453d3e | DAT_01d71de4
    CALL FUN_004e4330                   ; 00453d44
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00453d49
    POP ESI                             ; 00453d4c
    PUSH 0x1                            ; 00453d4d
        ;   Label: LAB_00453d4d
    PUSH 0x40                           ; 00453d4f
    CALL FUN_005a4b20                   ; 00453d51
        ;   XREF to: 005a4b20 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4b20()
    ADD ESP,0x8                         ; 00453d56
    MOV dword ptr [EBX + 0x4],EAX       ; 00453d59
    TEST EAX,EAX                        ; 00453d5c
    JZ 0x00453d63                       ; 00453d5e
        ;   XREF to: 00453d63 (CONDITIONAL_JUMP)  ; LAB_00453d63
    POP EBP                             ; 00453d60
    POP EBX                             ; 00453d61
    RET                                 ; 00453d62
    MOV EBP,0x5ba176                    ; 00453d63 | = "..\\core\\dcube.cpp"
        ;   Label: LAB_00453d63
    MOV EAX,0x5f5                       ; 00453d68
    PUSH 0x5ba188                       ; 00453d6d | = "CDemonCube::allocMemory - Out of voxe..."
    MOV dword ptr [0x01d71de0],EBP      ; 00453d72 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00453d78 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00453d7d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00453d82
    POP EBP                             ; 00453d85
    POP EBX                             ; 00453d86
    RET                                 ; 00453d87

