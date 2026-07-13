; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004b46d0(undefined4 param_1)
;
;
; XREF[9]:
;   FUN_004101d0 at 004101d8
;   FUN_00439d30 at 00439d36
;   FUN_004956a0 at 004956a8
;   FUN_004b30a0 at 004b30a6
;   FUN_004b9d20 at 004b9d26
;   FUN_004dd930 at 004dd938
;   FUN_004fbc00 at 004fbc06
;   FUN_005350c0 at 005350c8
;   FUN_005419b0 at 005419b6
;
; Referenced Globals:
;   void* PTR_FUN_0059eb34 = 004b48d0
;
; Called Functions:
;   FUN_00423f40
;   FUN_004b4dd0
;   FUN_004bedc0
;   FUN_004efd50
;   FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b46d0
        ;   Label: FUN_004b46d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b46d1
    PUSH EBX                            ; 004b46d5
    CALL FUN_00423f40                   ; 004b46d6
        ;   XREF to: 00423f40 (UNCONDITIONAL_CALL)  ; undefined FUN_00423f40()
    ADD ESP,0x4                         ; 004b46db
    ADD EAX,0xbcc0                      ; 004b46de
    PUSH EAX                            ; 004b46e3
    CALL FUN_004efd50                   ; 004b46e4
        ;   XREF to: 004efd50 (UNCONDITIONAL_CALL)  ; undefined FUN_004efd50()
    ADD ESP,0x4                         ; 004b46e9
    ADD EAX,0x138e0                     ; 004b46ec
    PUSH EAX                            ; 004b46f1
    CALL FUN_004bedc0                   ; 004b46f2
        ;   XREF to: 004bedc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bedc0()
    ADD ESP,0x4                         ; 004b46f7
    PUSH 0x2c                           ; 004b46fa
    LEA EBX,[EAX + 0xfffe0a60]          ; 004b46fc
    PUSH 0x0                            ; 004b4702
    MOV dword ptr [EBX + 0x1f5a4],EBX   ; 004b4704
    LEA EAX,[EBX + 0xbc94]              ; 004b470a
    PUSH EAX                            ; 004b4710
    MOV dword ptr [EBX + 0x14c],0x59eb34 ; 004b4711 | PTR_FUN_0059eb34
    CALL FUN_00563cc0                   ; 004b471b
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00563cc0()
    MOV dword ptr [EBX + 0xbc8c],0x0    ; 004b4720
    MOV dword ptr [EBX + 0x2dd4],0x3f19999a ; 004b472a
    MOV dword ptr [EBX + 0x2dd8],0x3f666666 ; 004b4734
    MOV dword ptr [EBX + 0x2ddc],0x49742400 ; 004b473e
    MOV dword ptr [EBX + 0x2de0],0x49742400 ; 004b4748
    MOV dword ptr [EBX + 0x2de4],0x3fcccccd ; 004b4752
    MOV dword ptr [EBX + 0x2de8],0x40c00000 ; 004b475c
    MOV dword ptr [EBX + 0xbc90],0x2    ; 004b4766
    MOV dword ptr [EBX + 0x1f59c],0x0   ; 004b4770
    MOV dword ptr [EBX + 0x1fa04],0x0   ; 004b477a
    MOV dword ptr [EBX + 0x1fa08],0x0   ; 004b4784
    MOV dword ptr [EBX + 0x1fa0c],0x0   ; 004b478e
    MOV dword ptr [EBX + 0x1fa10],0x0   ; 004b4798
    MOV dword ptr [EBX + 0x1fa14],0x0   ; 004b47a2
    MOV dword ptr [EBX + 0x1fa18],0x0   ; 004b47ac
    ADD ESP,0xc                         ; 004b47b6
    MOV dword ptr [EBX + 0x1fa1c],0x0   ; 004b47b9
    PUSH EBX                            ; 004b47c3
    MOV dword ptr [EBX + 0x1fa00],0x0   ; 004b47c4
    CALL FUN_004b4dd0                   ; 004b47ce
        ;   XREF to: 004b4dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b4dd0()
    MOV dword ptr [EBX + 0x1fa38],0x2   ; 004b47d3
    ADD ESP,0x4                         ; 004b47dd
    MOV dword ptr [EBX + 0x261c],0x0    ; 004b47e0
    MOV EAX,EBX                         ; 004b47ea
    MOV dword ptr [EBX + 0x243c],0x1    ; 004b47ec
    POP EBX                             ; 004b47f6
    RET                                 ; 004b47f7

