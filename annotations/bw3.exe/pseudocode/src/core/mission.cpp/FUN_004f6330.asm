; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f6330(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004dc750 at 004dc8c3
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_005c8702
;   TerminatedCString s_CDemonMission_getNextLoa_005c8716
;   TerminatedCString s_core_mission_cpp_005c874c
;   TerminatedCString s_CDemonMission_getNextLoa_005c8760
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;   FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6330
        ;   Label: FUN_004f6330
    PUSH EDI                            ; 004f6331
    PUSH EBP                            ; 004f6332
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f6333
    CMP dword ptr [EBX + 0x1458],0x0    ; 004f6337
    JNZ 0x004f6365                      ; 004f633e
        ;   XREF to: 004f6365 (CONDITIONAL_JUMP)  ; LAB_004f6365
    PUSH ESI                            ; 004f6340
    MOV ECX,0x5c8702                    ; 004f6341 | = "..\\core\\mission.cpp"
    MOV ESI,0x18d                       ; 004f6346
    PUSH 0x5c8716                       ; 004f634b | = "CDemonMission::getNextLoadedInventory..."
    MOV dword ptr [0x01d71de0],ECX      ; 004f6350 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004f6356 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004f635c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004f6361
    POP ESI                             ; 004f6364
    MOV EDI,dword ptr [ESP + 0x14]      ; 004f6365
        ;   Label: LAB_004f6365
    PUSH EDI                            ; 004f6369
    MOV EBP,dword ptr [EBX + 0x1458]    ; 004f636a
    PUSH EBP                            ; 004f6370
    CALL FUN_005a3260                   ; 004f6371
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 004f6376
    TEST EAX,EAX                        ; 004f6379
    JNZ 0x004f6393                      ; 004f637b
        ;   XREF to: 004f6393 (CONDITIONAL_JUMP)  ; LAB_004f6393
    MOV EAX,dword ptr [EBX + 0x1458]    ; 004f637d
        ;   Label: LAB_004f637d
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004f6383
    MOV dword ptr [EBX + 0x1458],EDX    ; 004f6389
    POP EBP                             ; 004f638f
    POP EDI                             ; 004f6390
    POP EBX                             ; 004f6391
    RET                                 ; 004f6392
    MOV ECX,dword ptr [EBX + 0x1458]    ; 004f6393
        ;   Label: LAB_004f6393
    PUSH ECX                            ; 004f6399
    PUSH EDI                            ; 004f639a
    MOV EAX,0x5c874c                    ; 004f639b | = "..\\core\\mission.cpp"
    MOV EDX,0x192                       ; 004f63a0
    PUSH 0x5c8760                       ; 004f63a5 | = "CDemonMission::getNextLoadedInventory..."
    MOV [0x01d71de0],EAX                ; 004f63aa | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 004f63af | DAT_01d71de4
    CALL FUN_004e4330                   ; 004f63b5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0xc                         ; 004f63ba
    JMP 0x004f637d                      ; 004f63bd
        ;   XREF to: 004f637d (UNCONDITIONAL_JUMP)  ; LAB_004f637d

