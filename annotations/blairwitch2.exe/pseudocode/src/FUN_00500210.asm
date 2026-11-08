; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00500210(int param_1,undefined4 *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1c710
;   undefined4 DAT_01d1c734
;   undefined4 DAT_01d1c73c
;
; Called Functions:
;   FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00500210
        ;   Label: FUN_00500210
    PUSH ESI                            ; 00500211
    PUSH EDI                            ; 00500212
    PUSH EBP                            ; 00500213
    SUB ESP,0x48                        ; 00500214
    MOV EBP,dword ptr [ESP + 0x5c]      ; 00500217
    MOV EDX,dword ptr [0x01d1c710]      ; 0050021b | DAT_01d1c710
    PUSH EDX                            ; 00500221
    LEA EAX,[EBP + 0x2b4]               ; 00500222
    MOV EBX,0x1                         ; 00500228
    PUSH EAX                            ; 0050022d
    LEA ESI,[ESP + 0x2c]                ; 0050022e
    LEA EDI,[ESP + 0x14]                ; 00500232
    CALL FUN_00546a90                   ; 00500236
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    LEA ESI,[ESP + 0x2c]                ; 0050023b
    ADD ESP,0x8                         ; 0050023f
    LEA EAX,[ESP + 0xc]                 ; 00500242
    MOV ECX,dword ptr [ESP + 0x60]      ; 00500246
    MOVSD ES:EDI,ESI                    ; 0050024a
    MOVSD ES:EDI,ESI                    ; 0050024b
    MOVSD ES:EDI,ESI                    ; 0050024c
    CMP EAX,ECX                         ; 0050024d
    JNZ 0x005002d1                      ; 0050024f
        ;   XREF to: 005002d1 (CONDITIONAL_JUMP)  ; LAB_005002d1
    MOV EAX,dword ptr [EBP + 0x10bbc]   ; 00500255
        ;   Label: LAB_00500255
    CMP dword ptr [EBP + EAX*0x4 + 0x23f4],0x0 ; 0050025b
    JZ 0x005002b7                       ; 00500263
        ;   XREF to: 005002b7 (CONDITIONAL_JUMP)  ; LAB_005002b7
    MOV EDI,dword ptr [0x01d1c734]      ; 00500265 | DAT_01d1c734
    PUSH EDI                            ; 0050026b
    LEA EAX,[EBP + 0x2b4]               ; 0050026c
    PUSH EAX                            ; 00500272
    LEA ESI,[ESP + 0x8]                 ; 00500273
    LEA EDI,[ESP + 0x44]                ; 00500277
    CALL FUN_00546a90                   ; 0050027b
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    LEA EAX,[EBX*0x4 + 0x0]             ; 00500280
    ADD ESP,0x8                         ; 00500287
    SUB EAX,EBX                         ; 0050028a
    MOV EDX,dword ptr [ESP + 0x60]      ; 0050028c
    SHL EAX,0x2                         ; 00500290
    MOV ESI,ESP                         ; 00500293
    ADD EDX,EAX                         ; 00500295
    LEA EAX,[ESP + 0x3c]                ; 00500297
    MOVSD ES:EDI,ESI                    ; 0050029b
    MOVSD ES:EDI,ESI                    ; 0050029c
    MOVSD ES:EDI,ESI                    ; 0050029d
    CMP EDX,EAX                         ; 0050029e
    JZ 0x005002b6                       ; 005002a0
        ;   XREF to: 005002b6 (CONDITIONAL_JUMP)  ; LAB_005002b6
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005002a2
    MOV dword ptr [EDX],EAX             ; 005002a6
    MOV EAX,dword ptr [ESP + 0x40]      ; 005002a8
    MOV dword ptr [EDX + 0x4],EAX       ; 005002ac
    MOV EAX,dword ptr [ESP + 0x44]      ; 005002af
    MOV dword ptr [EDX + 0x8],EAX       ; 005002b3
    INC EBX                             ; 005002b6
        ;   Label: LAB_005002b6
    MOV EAX,dword ptr [EBP + 0x10bc0]   ; 005002b7
        ;   Label: LAB_005002b7
    CMP dword ptr [EBP + EAX*0x4 + 0x23f4],0x0 ; 005002bd
    JNZ 0x005002ea                      ; 005002c5
        ;   XREF to: 005002ea (CONDITIONAL_JUMP)  ; LAB_005002ea
    MOV EAX,EBX                         ; 005002c7
    ADD ESP,0x48                        ; 005002c9
    POP EBP                             ; 005002cc
    POP EDI                             ; 005002cd
    POP ESI                             ; 005002ce
    POP EBX                             ; 005002cf
    RET                                 ; 005002d0
    MOV EAX,dword ptr [ESP + 0xc]       ; 005002d1
        ;   Label: LAB_005002d1
    MOV dword ptr [ECX],EAX             ; 005002d5
    MOV EAX,dword ptr [ESP + 0x10]      ; 005002d7
    MOV dword ptr [ECX + 0x4],EAX       ; 005002db
    MOV EAX,dword ptr [ESP + 0x14]      ; 005002de
    MOV dword ptr [ECX + 0x8],EAX       ; 005002e2
    JMP 0x00500255                      ; 005002e5
        ;   XREF to: 00500255 (UNCONDITIONAL_JUMP)  ; LAB_00500255
    MOV ECX,dword ptr [0x01d1c73c]      ; 005002ea | DAT_01d1c73c
        ;   Label: LAB_005002ea
    PUSH ECX                            ; 005002f0
    ADD EBP,0x2b4                       ; 005002f1
    PUSH EBP                            ; 005002f7
    LEA ESI,[ESP + 0x20]                ; 005002f8
    LEA EDI,[ESP + 0x38]                ; 005002fc
    CALL FUN_00546a90                   ; 00500300
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    LEA EAX,[EBX*0x4 + 0x0]             ; 00500305
    ADD ESP,0x8                         ; 0050030c
    SUB EAX,EBX                         ; 0050030f
    MOV EDX,dword ptr [ESP + 0x60]      ; 00500311
    SHL EAX,0x2                         ; 00500315
    LEA ESI,[ESP + 0x18]                ; 00500318
    ADD EDX,EAX                         ; 0050031c
    LEA EAX,[ESP + 0x30]                ; 0050031e
    MOVSD ES:EDI,ESI                    ; 00500322
    MOVSD ES:EDI,ESI                    ; 00500323
    MOVSD ES:EDI,ESI                    ; 00500324
    CMP EDX,EAX                         ; 00500325
    JZ 0x0050033d                       ; 00500327
        ;   XREF to: 0050033d (CONDITIONAL_JUMP)  ; LAB_0050033d
    MOV EAX,dword ptr [ESP + 0x30]      ; 00500329
    MOV dword ptr [EDX],EAX             ; 0050032d
    MOV EAX,dword ptr [ESP + 0x34]      ; 0050032f
    MOV dword ptr [EDX + 0x4],EAX       ; 00500333
    MOV EAX,dword ptr [ESP + 0x38]      ; 00500336
    MOV dword ptr [EDX + 0x8],EAX       ; 0050033a
    INC EBX                             ; 0050033d
        ;   Label: LAB_0050033d
    MOV EAX,EBX                         ; 0050033e
    ADD ESP,0x48                        ; 00500340
    POP EBP                             ; 00500343
    POP EDI                             ; 00500344
    POP ESI                             ; 00500345
    POP EBX                             ; 00500346
    RET                                 ; 00500347

