; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fbc00(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004dc4b0 at 004dc623
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_005de3bd
;   TerminatedCString s_CDemonMission_getNextLoa_005de3d1
;   TerminatedCString s_core_mission_cpp_005de407
;   TerminatedCString s_CDemonMission_getNextLoa_005de41b
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fbc00
        ;   Label: FUN_004fbc00
    PUSH EDI                            ; 004fbc01
    PUSH EBP                            ; 004fbc02
    MOV EBX,dword ptr [ESP + 0x10]      ; 004fbc03
    CMP dword ptr [EBX + 0x1454],0x0    ; 004fbc07
    JNZ 0x004fbc35                      ; 004fbc0e
        ;   XREF to: 004fbc35 (CONDITIONAL_JUMP)  ; LAB_004fbc35
    PUSH ESI                            ; 004fbc10
    MOV ECX,0x5de3bd                    ; 004fbc11 | = "..\\core\\mission.cpp"
    MOV ESI,0x18a                       ; 004fbc16
    PUSH 0x5de3d1                       ; 004fbc1b | = "CDemonMission::getNextLoadedInventory..."
    MOV dword ptr [0x01d046a0],ECX      ; 004fbc20 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004fbc26 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004fbc2c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004fbc31
    POP ESI                             ; 004fbc34
    MOV EDI,dword ptr [ESP + 0x14]      ; 004fbc35
        ;   Label: LAB_004fbc35
    PUSH EDI                            ; 004fbc39
    MOV EBP,dword ptr [EBX + 0x1454]    ; 004fbc3a
    PUSH EBP                            ; 004fbc40
    CALL FUN_005b8130                   ; 004fbc41
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 004fbc46
    TEST EAX,EAX                        ; 004fbc49
    JNZ 0x004fbc63                      ; 004fbc4b
        ;   XREF to: 004fbc63 (CONDITIONAL_JUMP)  ; LAB_004fbc63
    MOV EAX,dword ptr [EBX + 0x1454]    ; 004fbc4d
        ;   Label: LAB_004fbc4d
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004fbc53
    MOV dword ptr [EBX + 0x1454],EDX    ; 004fbc59
    POP EBP                             ; 004fbc5f
    POP EDI                             ; 004fbc60
    POP EBX                             ; 004fbc61
    RET                                 ; 004fbc62
    MOV ECX,dword ptr [EBX + 0x1454]    ; 004fbc63
        ;   Label: LAB_004fbc63
    PUSH ECX                            ; 004fbc69
    PUSH EDI                            ; 004fbc6a
    MOV EAX,0x5de407                    ; 004fbc6b | = "..\\core\\mission.cpp"
    MOV EDX,0x18f                       ; 004fbc70
    PUSH 0x5de41b                       ; 004fbc75 | = "CDemonMission::getNextLoadedInventory..."
    MOV [0x01d046a0],EAX                ; 004fbc7a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 004fbc7f | DAT_01d046a4
    CALL FUN_004e4500                   ; 004fbc85
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0xc                         ; 004fbc8a
    JMP 0x004fbc4d                      ; 004fbc8d
        ;   XREF to: 004fbc4d (UNCONDITIONAL_JUMP)  ; LAB_004fbc4d

