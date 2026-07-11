; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005282c0(int param_1,undefined4 *param_2)
;
;
; XREF[4]:
;   FUN_004d12e0 at 004d1c59
;   FUN_00528320 at 00528347
;   FUN_005289f0 at 00528a49
;   FUN_00528c80 at 00528cc1
;
; Referenced Globals:
;   string s_..\\sound\\sndmain.cpp_00593818
;   string s_getSoundDeviceInfo_-_invalid_ind_0059382d
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;   FUN_00528230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005282c0
        ;   Label: FUN_005282c0
    PUSH ESI                            ; 005282c1
    PUSH EDI                            ; 005282c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005282c3
    CALL FUN_00528230                   ; 005282c7
        ;   XREF to: 00528230 (UNCONDITIONAL_CALL)  ; undefined FUN_00528230()
    TEST EBX,EBX                        ; 005282cc
    JL 0x005282f8                       ; 005282ce
        ;   XREF to: 005282f8 (CONDITIONAL_JUMP)  ; LAB_005282f8
    CMP EBX,EAX                         ; 005282d0
    JGE 0x005282f8                      ; 005282d2
        ;   XREF to: 005282f8 (CONDITIONAL_JUMP)  ; LAB_005282f8
    LEA EAX,[EBX*0x8 + 0x0]             ; 005282d4
        ;   Label: LAB_005282d4
    ADD EAX,EBX                         ; 005282db
    SHL EAX,0x2                         ; 005282dd
    SUB EAX,EBX                         ; 005282e0
    MOV ECX,0x46                        ; 005282e2
    MOV EDI,dword ptr [ESP + 0x14]      ; 005282e7
    LEA ESI,[EAX*0x8 + 0x2dc7a58]       ; 005282eb
    MOVSD.REP ES:EDI,ESI                ; 005282f2
    POP EDI                             ; 005282f4
    POP ESI                             ; 005282f5
    POP EBX                             ; 005282f6
    RET                                 ; 005282f7
    MOV EDX,0x593818                    ; 005282f8 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005282f8
    MOV ECX,0x11d1                      ; 005282fd
    PUSH 0x59382d                       ; 00528302 | = "getSoundDeviceInfo - invalid index"
    MOV dword ptr [0x01cc4800],EDX      ; 00528307 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0052830d | DAT_01cc4804
    CALL FUN_004c8440                   ; 00528313
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00528318
    JMP 0x005282d4                      ; 0052831b
        ;   XREF to: 005282d4 (UNCONDITIONAL_JUMP)  ; LAB_005282d4

