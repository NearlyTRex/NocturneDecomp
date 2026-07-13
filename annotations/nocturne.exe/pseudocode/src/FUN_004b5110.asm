; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004b5110(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   FUN_00439f50 at 0043a316
;   FUN_00495a20 at 00496b59
;   FUN_004b32d0 at 004b36e3
;   FUN_004b9fe0 at 004ba506
;   FUN_0053fc60 at 0053fccf
;   FUN_00541d00 at 005421ee
;
; Referenced Globals:
;   undefined4 DAT_00585843
;   undefined4 DAT_0058584b
;   undefined4 DAT_005be368
;   undefined4 DAT_01af4ed4
;   undefined4 DAT_01fa3ff0
;   undefined4 DAT_01fa3ff4
;
; Called Functions:
;   FUN_0040a290
;   FUN_0040d890
;   FUN_00455270
;   FUN_004564b0
;   FUN_00481890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5110
        ;   Label: FUN_004b5110
    PUSH ESI                            ; 004b5111
    PUSH EDI                            ; 004b5112
    PUSH EBP                            ; 004b5113
    MOV EBP,ESP                         ; 004b5114
    SUB ESP,0x20                        ; 004b5116
    AND ESP,0xfffffff8                  ; 004b5119
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b511c
    XOR ESI,ESI                         ; 004b511f
    LEA EDI,[EAX + 0x20]                ; 004b5121
    MOV dword ptr [ESP + 0x1c],ESI      ; 004b5124
    MOV dword ptr [EAX + 0x1fa04],0x0   ; 004b5128
    MOV EAX,[0x005be368]                ; 004b5132 | DAT_005be368
        ;   Label: LAB_004b5132
    CMP ESI,dword ptr [EAX + 0x14cd6c]  ; 004b5137 | DAT_01fa3ff0
    JL 0x004b5156                       ; 004b513d
        ;   XREF to: 004b5156 (CONDITIONAL_JUMP)  ; LAB_004b5156
    XOR EAX,EAX                         ; 004b513f
    MOV ESP,EBP                         ; 004b5141
    POP EBP                             ; 004b5143
    POP EDI                             ; 004b5144
    POP ESI                             ; 004b5145
    POP EBX                             ; 004b5146
    RET                                 ; 004b5147
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004b5148
        ;   Label: LAB_004b5148
    ADD EDX,0x4                         ; 004b514c
    INC ESI                             ; 004b514f
    MOV dword ptr [ESP + 0x1c],EDX      ; 004b5150
    JMP 0x004b5132                      ; 004b5154
        ;   XREF to: 004b5132 (UNCONDITIONAL_JUMP)  ; LAB_004b5132
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004b5156
        ;   Label: LAB_004b5156
    MOV EBX,dword ptr [0x01af4ed4]      ; 004b515a | DAT_01af4ed4
    ADD EAX,EDX                         ; 004b5160
    PUSH EBX                            ; 004b5162
    MOV ECX,dword ptr [EAX + 0x14cd70]  ; 004b5163 | DAT_01fa3ff4
    PUSH ECX                            ; 004b5169
    CALL FUN_0040d890                   ; 004b516a
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    MOV EBX,EAX                         ; 004b516f
    ADD ESP,0x8                         ; 004b5171
    TEST EAX,EAX                        ; 004b5174
    JZ 0x004b5148                       ; 004b5176
        ;   XREF to: 004b5148 (CONDITIONAL_JUMP)  ; LAB_004b5148
    CMP dword ptr [EAX + 0x2d8],0x0     ; 004b5178
    JNZ 0x004b5148                      ; 004b517f
        ;   XREF to: 004b5148 (CONDITIONAL_JUMP)  ; LAB_004b5148
    LEA EAX,[EBX + 0x9b4]               ; 004b5181
    FLD float ptr [EDI]                 ; 004b5187
    FSUB float ptr [EAX]                ; 004b5189
    FSTP float ptr [ESP]                ; 004b518b
    FLD float ptr [EDI + 0x4]           ; 004b518e
    FSUB float ptr [EAX + 0x4]          ; 004b5191
    FSTP float ptr [ESP + 0x4]          ; 004b5194
    FLD float ptr [EDI + 0x8]           ; 004b5198
    FSUB float ptr [EAX + 0x8]          ; 004b519b
    LEA EAX,[EBX + 0x20]                ; 004b519e
    PUSH EAX                            ; 004b51a1
    LEA EAX,[ESP + 0x10]                ; 004b51a2
    PUSH EAX                            ; 004b51a6
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b51a7
    PUSH EDX                            ; 004b51aa
    FSTP float ptr [ESP + 0x14]         ; 004b51ab
    CALL FUN_0040a290                   ; 004b51af
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a290()
    FLD float ptr [EAX + 0x8]           ; 004b51b4
    FLDZ                                ; 004b51b7
    ADD ESP,0xc                         ; 004b51b9
    FCOMPP                              ; 004b51bc
    FNSTSW AX                           ; 004b51be
    SAHF                                ; 004b51c0
    JNC 0x004b5148                      ; 004b51c1
        ;   XREF to: 004b5148 (CONDITIONAL_JUMP)  ; LAB_004b5148
    FLD float ptr [ESP + 0x4]           ; 004b51c3
    FABS                                ; 004b51c7
    FCOMP double ptr [0x00585843]       ; 004b51c9 | DAT_00585843
    FNSTSW AX                           ; 004b51cf
    SAHF                                ; 004b51d1
    JA 0x004b5148                       ; 004b51d2
        ;   XREF to: 004b5148 (CONDITIONAL_JUMP)  ; LAB_004b5148
    FLD float ptr [ESP]                 ; 004b51d8
    FMUL ST0                            ; 004b51db
    FLD float ptr [ESP + 0x8]           ; 004b51dd
    FMUL ST0                            ; 004b51e1
    FADDP                               ; 004b51e3
    FSQRT                               ; 004b51e5
    XOR ECX,ECX                         ; 004b51e7
    MOV dword ptr [ESP + 0x4],ECX       ; 004b51e9
    FCOMP double ptr [0x0058584b]       ; 004b51ed | DAT_0058584b
    FNSTSW AX                           ; 004b51f3
    SAHF                                ; 004b51f5
    JNC 0x004b5148                      ; 004b51f6
        ;   XREF to: 004b5148 (CONDITIONAL_JUMP)  ; LAB_004b5148
    LEA EAX,[EBX + 0x470]               ; 004b51fc
    PUSH EAX                            ; 004b5202
    CALL FUN_00481890                   ; 004b5203
        ;   XREF to: 00481890 (UNCONDITIONAL_CALL)  ; undefined FUN_00481890()
    ADD ESP,0x4                         ; 004b5208
    TEST EAX,EAX                        ; 004b520b
    JZ 0x004b521b                       ; 004b520d
        ;   XREF to: 004b521b (CONDITIONAL_JUMP)  ; LAB_004b521b
    MOV EAX,0x1                         ; 004b520f
    MOV ESP,EBP                         ; 004b5214
    POP EBP                             ; 004b5216
    POP EDI                             ; 004b5217
    POP ESI                             ; 004b5218
    POP EBX                             ; 004b5219
    RET                                 ; 004b521a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b521b
        ;   Label: LAB_004b521b
    PUSH EAX                            ; 004b521e
    PUSH EBX                            ; 004b521f
    CALL FUN_004564b0                   ; 004b5220
        ;   XREF to: 004564b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004564b0()
    ADD ESP,0x8                         ; 004b5225
    MOV dword ptr [ESP + 0x18],EAX      ; 004b5228
    TEST EAX,EAX                        ; 004b522c
    JZ 0x004b5148                       ; 004b522e
        ;   XREF to: 004b5148 (CONDITIONAL_JUMP)  ; LAB_004b5148
    CMP EAX,0x1                         ; 004b5234
    JNZ 0x004b524d                      ; 004b5237
        ;   XREF to: 004b524d (CONDITIONAL_JUMP)  ; LAB_004b524d
    PUSH EBX                            ; 004b5239
    CALL FUN_00455270                   ; 004b523a
        ;   XREF to: 00455270 (UNCONDITIONAL_CALL)  ; undefined FUN_00455270()
    ADD ESP,0x4                         ; 004b523f
    MOV EAX,dword ptr [ESP + 0x18]      ; 004b5242
    MOV ESP,EBP                         ; 004b5246
    POP EBP                             ; 004b5248
    POP EDI                             ; 004b5249
    POP ESI                             ; 004b524a
    POP EBX                             ; 004b524b
    RET                                 ; 004b524c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b524d
        ;   Label: LAB_004b524d
    MOV dword ptr [EAX + 0x1fa04],EBX   ; 004b5250
    MOV EAX,dword ptr [ESP + 0x18]      ; 004b5256
    MOV ESP,EBP                         ; 004b525a
    POP EBP                             ; 004b525c
    POP EDI                             ; 004b525d
    POP ESI                             ; 004b525e
    POP EBX                             ; 004b525f
    RET                                 ; 004b5260

