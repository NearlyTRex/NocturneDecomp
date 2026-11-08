; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051ab60(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004f97a0 at 004f9913
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_005e9400
;   TerminatedCString s_CDemonMission_getNextLoa_005e9414
;   TerminatedCString s_core_mission_cpp_005e944a
;   TerminatedCString s_CDemonMission_getNextLoa_005e945e
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051ab60
        ;   Label: FUN_0051ab60
    PUSH EDI                            ; 0051ab61
    PUSH EBP                            ; 0051ab62
    MOV EBX,dword ptr [ESP + 0x10]      ; 0051ab63
    CMP dword ptr [EBX + 0x1458],0x0    ; 0051ab67
    JNZ 0x0051ab95                      ; 0051ab6e
        ;   XREF to: 0051ab95 (CONDITIONAL_JUMP)  ; LAB_0051ab95
    PUSH ESI                            ; 0051ab70
    MOV ECX,0x5e9400                    ; 0051ab71 | = "..\\core\\mission.cpp"
    MOV ESI,0x18d                       ; 0051ab76
    PUSH 0x5e9414                       ; 0051ab7b | = "CDemonMission::getNextLoadedInventory..."
    MOV dword ptr [0x01d1d400],ECX      ; 0051ab80 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0051ab86 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0051ab8c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0051ab91
    POP ESI                             ; 0051ab94
    MOV EDI,dword ptr [ESP + 0x14]      ; 0051ab95
        ;   Label: LAB_0051ab95
    PUSH EDI                            ; 0051ab99
    MOV EBP,dword ptr [EBX + 0x1458]    ; 0051ab9a
    PUSH EBP                            ; 0051aba0
    CALL FUN_005c04e0                   ; 0051aba1
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 0051aba6
    TEST EAX,EAX                        ; 0051aba9
    JNZ 0x0051abc3                      ; 0051abab
        ;   XREF to: 0051abc3 (CONDITIONAL_JUMP)  ; LAB_0051abc3
    MOV EAX,dword ptr [EBX + 0x1458]    ; 0051abad
        ;   Label: LAB_0051abad
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0051abb3
    MOV dword ptr [EBX + 0x1458],EDX    ; 0051abb9
    POP EBP                             ; 0051abbf
    POP EDI                             ; 0051abc0
    POP EBX                             ; 0051abc1
    RET                                 ; 0051abc2
    MOV ECX,dword ptr [EBX + 0x1458]    ; 0051abc3
        ;   Label: LAB_0051abc3
    PUSH ECX                            ; 0051abc9
    PUSH EDI                            ; 0051abca
    MOV EAX,0x5e944a                    ; 0051abcb | = "..\\core\\mission.cpp"
    MOV EDX,0x192                       ; 0051abd0
    PUSH 0x5e945e                       ; 0051abd5 | = "CDemonMission::getNextLoadedInventory..."
    MOV [0x01d1d400],EAX                ; 0051abda | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0051abdf | DAT_01d1d404
    CALL FUN_005030e0                   ; 0051abe5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0xc                         ; 0051abea
    JMP 0x0051abad                      ; 0051abed
        ;   XREF to: 0051abad (UNCONDITIONAL_JUMP)  ; LAB_0051abad

