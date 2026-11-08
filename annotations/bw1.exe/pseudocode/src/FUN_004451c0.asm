; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004451c0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fdbd8
;   undefined4 DAT_0061d95c
;   undefined4 DAT_0061dca4
;   undefined4 DAT_01ccf57c
;   undefined4 DAT_01ccf5d8
;
; Called Functions:
;   FUN_004319e0
;   FUN_004e64d0
;   FUN_00524770
;   FUN_005247c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004451c0
        ;   Label: FUN_004451c0
    PUSH ESI                            ; 004451c1
    PUSH EDI                            ; 004451c2
    PUSH EBP                            ; 004451c3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004451c4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004451c8
    TEST dword ptr [EBX + 0xc1d0],0x7fffffff ; 004451cc
    JNZ 0x00445244                      ; 004451d6
        ;   XREF to: 00445244 (CONDITIONAL_JUMP)  ; LAB_00445244
    MOV EAX,[0x0061d95c]                ; 004451d8 | DAT_0061d95c
        ;   Label: LAB_004451d8
    CMP dword ptr [EAX + 0x1ec],0x0     ; 004451dd | DAT_01ccf57c
    JZ 0x004451ed                       ; 004451e4
        ;   XREF to: 004451ed (CONDITIONAL_JUMP)  ; LAB_004451ed
    MOV dword ptr [ESI + 0x4],0x0       ; 004451e6
    MOV EAX,[0x0061d95c]                ; 004451ed | DAT_0061d95c
        ;   Label: LAB_004451ed
    MOV EDI,dword ptr [EAX + 0x248]     ; 004451f2 | DAT_01ccf5d8
    TEST EDI,EDI                        ; 004451f8
    JZ 0x0044524d                       ; 004451fa
        ;   XREF to: 0044524d (CONDITIONAL_JUMP)  ; LAB_0044524d
    MOV EAX,[0x005fdbd8]                ; 004451fc | DAT_005fdbd8
        ;   Label: LAB_004451fc
    MOV dword ptr [EBX + 0xc1d0],EAX    ; 00445201
    FLD float ptr [ESI + 0x4]           ; 00445207
    FSUBR float ptr [EBX + 0x2538]      ; 0044520a
    LEA EDI,[EBX + 0x158]               ; 00445210
    FST float ptr [EBX + 0x2538]        ; 00445216
    FLDZ                                ; 0044521c
    FCOMPP                              ; 0044521e
    FNSTSW AX                           ; 00445220
    SAHF                                ; 00445222
    JNC 0x00445252                      ; 00445223
        ;   XREF to: 00445252 (CONDITIONAL_JUMP)  ; LAB_00445252
    FLD float ptr [ESI + 0x4]           ; 00445225
    FLDZ                                ; 00445228
    FCOMPP                              ; 0044522a
    FNSTSW AX                           ; 0044522c
    SAHF                                ; 0044522e
    JC 0x004452bd                       ; 0044522f
        ;   XREF to: 004452bd (CONDITIONAL_JUMP)  ; LAB_004452bd
    PUSH ESI                            ; 00445235
        ;   Label: LAB_00445235
    PUSH EBX                            ; 00445236
    CALL FUN_004319e0                   ; 00445237
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004319e0()
    ADD ESP,0x8                         ; 0044523c
    POP EBP                             ; 0044523f
    POP EDI                             ; 00445240
    POP ESI                             ; 00445241
    POP EBX                             ; 00445242
    RET                                 ; 00445243
    MOV dword ptr [ESI + 0x4],0x0       ; 00445244
        ;   Label: LAB_00445244
    JMP 0x004451d8                      ; 0044524b
        ;   XREF to: 004451d8 (UNCONDITIONAL_JUMP)  ; LAB_004451d8
    MOV dword ptr [ESI + 0x4],EDI       ; 0044524d
        ;   Label: LAB_0044524d
    JMP 0x004451fc                      ; 00445250
        ;   XREF to: 004451fc (UNCONDITIONAL_JUMP)  ; LAB_004451fc
    PUSH EDI                            ; 00445252
        ;   Label: LAB_00445252
    MOV dword ptr [EBX + 0x2538],0x0    ; 00445253
    CALL FUN_00524770                   ; 0044525d
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00445262
    ADD ESP,0x4                         ; 00445265
    CMP EAX,0x6                         ; 00445268
    JZ 0x00445235                       ; 0044526b
        ;   XREF to: 00445235 (CONDITIONAL_JUMP)  ; LAB_00445235
    PUSH EDI                            ; 0044526d
    CALL FUN_00524770                   ; 0044526e
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00445273
    ADD ESP,0x4                         ; 00445276
    CMP EAX,0x5                         ; 00445279
    JZ 0x00445235                       ; 0044527c
        ;   XREF to: 00445235 (CONDITIONAL_JUMP)  ; LAB_00445235
    PUSH 0x1                            ; 0044527e
    PUSH 0x5                            ; 00445280
    PUSH EDI                            ; 00445282
    MOV dword ptr [EBX + 0x26fc],0x0    ; 00445283
    CALL FUN_005247c0                   ; 0044528d
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 00445292
    PUSH 0x0                            ; 00445295
    PUSH 0x42480000                     ; 00445297
    PUSH 0x32                           ; 0044529c
    PUSH EBX                            ; 0044529e
    MOV EBP,dword ptr [0x0061dca4]      ; 0044529f | DAT_0061dca4
    PUSH EBP                            ; 004452a5
    CALL FUN_004e64d0                   ; 004452a6
        ;   XREF to: 004e64d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e64d0()
    ADD ESP,0x14                        ; 004452ab
    PUSH ESI                            ; 004452ae
    PUSH EBX                            ; 004452af
    CALL FUN_004319e0                   ; 004452b0
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004319e0()
    ADD ESP,0x8                         ; 004452b5
    POP EBP                             ; 004452b8
    POP EDI                             ; 004452b9
    POP ESI                             ; 004452ba
    POP EBX                             ; 004452bb
    RET                                 ; 004452bc
    PUSH 0x1                            ; 004452bd
        ;   Label: LAB_004452bd
    PUSH 0x4                            ; 004452bf
    PUSH EDI                            ; 004452c1
    CALL FUN_005247c0                   ; 004452c2
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 004452c7
    PUSH ESI                            ; 004452ca
    PUSH EBX                            ; 004452cb
    CALL FUN_004319e0                   ; 004452cc
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004319e0()
    ADD ESP,0x8                         ; 004452d1
    POP EBP                             ; 004452d4
    POP EDI                             ; 004452d5
    POP ESI                             ; 004452d6
    POP EBX                             ; 004452d7
    RET                                 ; 004452d8

