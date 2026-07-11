; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a5f00(int param_1,float param_2)
;
;
; XREF[3]:
;   FUN_0049cc10 at 0049cca6
;   FUN_004ed980 at 004ed9b0
;   FUN_00535900 at 00535a60
;
; Referenced Globals:
;   string s_..\\core\\game.cpp_00584452
;   string s_CGame::slamDT_-_invalid_dt!_00584463
;   undefined4 DAT_00584482
;   undefined4 DAT_01bd1d80
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;   FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a5f00
        ;   Label: FUN_004a5f00
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a5f01
    FLD float ptr [ESP + 0xc]           ; 004a5f05
    FLDZ                                ; 004a5f09
    FCOMPP                              ; 004a5f0b
    FNSTSW AX                           ; 004a5f0d
    SAHF                                ; 004a5f0f
    JA 0x004a5f41                       ; 004a5f10
        ;   XREF to: 004a5f41 (CONDITIONAL_JUMP)  ; LAB_004a5f41
    MOV EAX,dword ptr [ESP + 0xc]       ; 004a5f12
        ;   Label: LAB_004a5f12
    MOV dword ptr [EBX + 0x264],EAX     ; 004a5f16
    FLD float ptr [EBX + 0x264]         ; 004a5f1c
    FMUL float ptr [0x00584482]         ; 004a5f22 | DAT_00584482
    CALL FUN_00563a30                   ; 004a5f28
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [EBX + 0x260]       ; 004a5f2d
    MOV EBX,dword ptr [EBX + 0x260]     ; 004a5f33
    MOV dword ptr [0x01bd1d80],EBX      ; 004a5f39 | DAT_01bd1d80
    POP EBX                             ; 004a5f3f
    RET                                 ; 004a5f40
    MOV EDX,0x584452                    ; 004a5f41 | = "..\\core\\game.cpp"
        ;   Label: LAB_004a5f41
    MOV ECX,0x10b5                      ; 004a5f46
    PUSH 0x584463                       ; 004a5f4b | = "CGame::slamDT - invalid dt!"
    MOV dword ptr [0x01cc4800],EDX      ; 004a5f50 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004a5f56 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004a5f5c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004a5f61
    JMP 0x004a5f12                      ; 004a5f64
        ;   XREF to: 004a5f12 (UNCONDITIONAL_JUMP)  ; LAB_004a5f12

