; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00432050(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   FUN_0055f3d0 at 0055f3f4
;   FUN_005b0b70 at 005b0b9d
;
; Referenced Globals:
;   undefined4 s_STAND_005d5b4e+1
;   TerminatedCString s_STAND_005d5b55
;   TerminatedCString s_CCharacter_005d5b5b
;   undefined4 DAT_005d5b67
;   undefined4 DAT_005d5b6f
;   undefined4 DAT_005d5b73
;
; Called Functions:
;   FUN_0040c550
;   FUN_00524150
;   FUN_00524850
;   FUN_00524a00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432050
        ;   Label: FUN_00432050
    PUSH EDI                            ; 00432051
    SUB ESP,0x10                        ; 00432052
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00432055
    MOV EDI,dword ptr [ESP + 0x20]      ; 00432059
    TEST EDI,EDI                        ; 0043205d
    JNZ 0x004320f5                      ; 0043205f
        ;   XREF to: 004320f5 (CONDITIONAL_JUMP)  ; LAB_004320f5
    PUSH ESI                            ; 00432065
    CMP dword ptr [EBX + 0x273c],0x0    ; 00432066
    JZ 0x004320b5                       ; 0043206d
        ;   XREF to: 004320b5 (CONDITIONAL_JUMP)  ; LAB_004320b5
    CMP dword ptr [EBX + 0x2704],0x0    ; 0043206f
    JZ 0x004320b5                       ; 00432076
        ;   XREF to: 004320b5 (CONDITIONAL_JUMP)  ; LAB_004320b5
    LEA ESI,[EBX + 0x158]               ; 00432078
    LEA EAX,[EBX + 0x24a8]              ; 0043207e
    CMP byte ptr [EAX],0x0              ; 00432084
    JZ 0x004320b5                       ; 00432087
        ;   XREF to: 004320b5 (CONDITIONAL_JUMP)  ; LAB_004320b5
    PUSH EDI                            ; 00432089
    PUSH 0x5d5b4f                       ; 0043208a | s_STAND_005d5b4e+1
    PUSH ESI                            ; 0043208f
    CALL FUN_00524a00                   ; 00432090
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00524a00()
    ADD ESP,0x4                         ; 00432095
    PUSH EAX                            ; 00432098
    CALL FUN_00524150                   ; 00432099
        ;   XREF to: 00524150 (UNCONDITIONAL_CALL)  ; undefined FUN_00524150()
    ADD ESP,0xc                         ; 0043209e
    TEST EAX,EAX                        ; 004320a1
    JL 0x004320b5                       ; 004320a3
        ;   XREF to: 004320b5 (CONDITIONAL_JUMP)  ; LAB_004320b5
    PUSH 0x1                            ; 004320a5
    PUSH 0x5d5b55                       ; 004320a7 | = "STAND"
    PUSH ESI                            ; 004320ac
    CALL FUN_00524850                   ; 004320ad
        ;   XREF to: 00524850 (UNCONDITIONAL_CALL)  ; undefined FUN_00524850()
    ADD ESP,0xc                         ; 004320b2
    PUSH 0xbf800000                     ; 004320b5
        ;   Label: LAB_004320b5
    MOV EAX,dword ptr [EBX + 0x154]     ; 004320ba
    PUSH EBX                            ; 004320c0
    MOV dword ptr [EBX + 0x273c],0x0    ; 004320c1
    CALL dword ptr [EAX + 0x138]        ; 004320cb
    ADD ESP,0x8                         ; 004320d1
    POP ESI                             ; 004320d4
    MOV EAX,dword ptr [ESP + 0x24]      ; 004320d5
        ;   Label: LAB_004320d5
    MOV dword ptr [EBX + 0x2704],EDI    ; 004320d9
    MOV dword ptr [EBX + 0x2708],EAX    ; 004320df
    MOV EAX,dword ptr [ESP + 0x28]      ; 004320e5
    MOV dword ptr [EBX + 0x270c],EAX    ; 004320e9
    ADD ESP,0x10                        ; 004320ef
    POP EDI                             ; 004320f2
    POP EBX                             ; 004320f3
    RET                                 ; 004320f4
    PUSH 0x5d5b5b                       ; 004320f5 | = "CCharacter"
        ;   Label: LAB_004320f5
    PUSH EDI                            ; 004320fa
    MOV dword ptr [EBX + 0x273c],0x1    ; 004320fb
    CALL FUN_0040c550                   ; 00432105
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 0043210a
    TEST EAX,EAX                        ; 0043210d
    JNZ 0x0043216b                      ; 0043210f
        ;   XREF to: 0043216b (CONDITIONAL_JUMP)  ; LAB_0043216b
    LEA EDX,[EBX + 0x20]                ; 00432111
    LEA EAX,[EDI + 0x20]                ; 00432114
    FLD float ptr [EDX]                 ; 00432117
    FSUB float ptr [EAX]                ; 00432119
    FMUL ST0                            ; 0043211b
    FLD float ptr [EDX + 0x4]           ; 0043211d
    FSUB float ptr [EAX + 0x4]          ; 00432120
    FMUL ST0                            ; 00432123
    FLD float ptr [EDX + 0x8]           ; 00432125
    FXCH                                ; 00432128
    FADDP ST2,ST0                       ; 0043212a
    FSUB float ptr [EAX + 0x8]          ; 0043212c
    FMUL ST0                            ; 0043212f
    FADDP                               ; 00432131
    FSQRT                               ; 00432133
    FMUL double ptr [0x005d5b67]        ; 00432135 | DAT_005d5b67
    FST float ptr [ESP + 0x8]           ; 0043213b
    FCOMP float ptr [0x005d5b6f]        ; 0043213f | DAT_005d5b6f
    FNSTSW AX                           ; 00432145
    SAHF                                ; 00432147
    JNC 0x00432185                      ; 00432148
        ;   XREF to: 00432185 (CONDITIONAL_JUMP)  ; LAB_00432185
    MOV dword ptr [ESP + 0x8],0x40a00000 ; 0043214a
    PUSH dword ptr [ESP + 0x8]          ; 00432152
        ;   Label: LAB_00432152
    MOV EAX,dword ptr [EBX + 0x154]     ; 00432156
    PUSH EBX                            ; 0043215c
    CALL dword ptr [EAX + 0x138]        ; 0043215d
    ADD ESP,0x8                         ; 00432163
    JMP 0x004320d5                      ; 00432166
        ;   XREF to: 004320d5 (UNCONDITIONAL_JUMP)  ; LAB_004320d5
    PUSH 0xbf800000                     ; 0043216b
        ;   Label: LAB_0043216b
    MOV EAX,dword ptr [EBX + 0x154]     ; 00432170
    PUSH EBX                            ; 00432176
    CALL dword ptr [EAX + 0x138]        ; 00432177
    ADD ESP,0x8                         ; 0043217d
    JMP 0x004320d5                      ; 00432180
        ;   XREF to: 004320d5 (UNCONDITIONAL_JUMP)  ; LAB_004320d5
    FLD float ptr [ESP + 0x8]           ; 00432185
        ;   Label: LAB_00432185
    FCOMP float ptr [0x005d5b73]        ; 00432189 | DAT_005d5b73
    FNSTSW AX                           ; 0043218f
    SAHF                                ; 00432191
    JBE 0x00432152                      ; 00432192
        ;   XREF to: 00432152 (CONDITIONAL_JUMP)  ; LAB_00432152
    MOV dword ptr [ESP + 0x8],0x42700000 ; 00432194
    JMP 0x00432152                      ; 0043219c
        ;   XREF to: 00432152 (UNCONDITIONAL_JUMP)  ; LAB_00432152

