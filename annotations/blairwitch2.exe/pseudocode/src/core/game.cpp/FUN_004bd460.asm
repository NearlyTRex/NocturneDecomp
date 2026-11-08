; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bd460(int param_1,float param_2)
;
;
; XREF[8]:
;   FUN_00450b20 at 00450ba1
;   FUN_00450c60 at 00450e33
;   FUN_004945b0 at 004945ff
;   FUN_00494ec0 at 00494f14
;   FUN_004b5190 at 004b5226
;   FUN_0050f370 at 0050f3a0
;   FUN_00562f30 at 00562fad
;   FUN_00563060 at 00563254
;
; Referenced Globals:
;   TerminatedCString s_core_game_cpp_005d881e
;   TerminatedCString s_CGame_slamDT_invalid_dt_005d882f
;   undefined4 DAT_005d884b
;   undefined4 DAT_01c2a370
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bd460
        ;   Label: FUN_004bd460
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bd461
    FLD float ptr [ESP + 0xc]           ; 004bd465
    FLDZ                                ; 004bd469
    FCOMPP                              ; 004bd46b
    FNSTSW AX                           ; 004bd46d
    SAHF                                ; 004bd46f
    JA 0x004bd4a1                       ; 004bd470
        ;   XREF to: 004bd4a1 (CONDITIONAL_JUMP)  ; LAB_004bd4a1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004bd472
        ;   Label: LAB_004bd472
    MOV dword ptr [EBX + 0x284],EAX     ; 004bd476
    FLD float ptr [EBX + 0x284]         ; 004bd47c
    FMUL float ptr [0x005d884b]         ; 004bd482 | DAT_005d884b
    CALL FUN_005b7ff0                   ; 004bd488
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [EBX + 0x280]       ; 004bd48d
    MOV EBX,dword ptr [EBX + 0x280]     ; 004bd493
    MOV dword ptr [0x01c2a370],EBX      ; 004bd499 | DAT_01c2a370
    POP EBX                             ; 004bd49f
    RET                                 ; 004bd4a0
    MOV EDX,0x5d881e                    ; 004bd4a1 | = "..\\core\\game.cpp"
        ;   Label: LAB_004bd4a1
    MOV ECX,0x1313                      ; 004bd4a6
    PUSH 0x5d882f                       ; 004bd4ab | = "CGame::slamDT - invalid dt!"
    MOV dword ptr [0x01d046a0],EDX      ; 004bd4b0 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004bd4b6 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004bd4bc
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004bd4c1
    JMP 0x004bd472                      ; 004bd4c4
        ;   XREF to: 004bd472 (UNCONDITIONAL_JUMP)  ; LAB_004bd472

