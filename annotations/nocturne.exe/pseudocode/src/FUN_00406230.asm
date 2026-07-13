; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00406230(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c038f4
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   FUN_00404610
;   FUN_00404710
;   FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406230
        ;   Label: FUN_00406230
    PUSH ESI                            ; 00406231
    MOV EBX,dword ptr [ESP + 0xc]       ; 00406232
    LEA ESI,[EBX + 0x18]                ; 00406236
    LEA EAX,[EBX + 0x8]                 ; 00406239
    PUSH EAX                            ; 0040623c
    CALL FUN_00404610                   ; 0040623d
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined FUN_00404610()
    ADD ESP,0x4                         ; 00406242
    TEST EAX,EAX                        ; 00406245
    JZ 0x0040629e                       ; 00406247
        ;   XREF to: 0040629e (CONDITIONAL_JUMP)  ; LAB_0040629e
    CMP dword ptr [0x01c038f4],0x0      ; 00406249 | DAT_01c038f4
    JZ 0x004062d9                       ; 00406250
        ;   XREF to: 004062d9 (CONDITIONAL_JUMP)  ; LAB_004062d9
    CMP dword ptr [0x01c03948],0x0      ; 00406256 | DAT_01c03948
    JNZ 0x004062b8                      ; 0040625d
        ;   XREF to: 004062b8 (CONDITIONAL_JUMP)  ; LAB_004062b8
    CMP dword ptr [0x005b7624],0x20     ; 0040625f | DAT_005b7624
    JNZ 0x004062ac                      ; 00406266
        ;   XREF to: 004062ac (CONDITIONAL_JUMP)  ; LAB_004062ac
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00406268 | DAT_01c00c7c | LAB_005300ec
        ;   Label: LAB_00406268
    MOV EDX,0xd9                        ; 00406272
        ;   Label: LAB_00406272
    MOV ECX,0x1                         ; 00406277
    PUSH EBX                            ; 0040627c
    MOV dword ptr [0x01c039a0],EDX      ; 0040627d | DAT_01c039a0
    MOV dword ptr [0x01c039a4],ECX      ; 00406283 | DAT_01c039a4
    CALL FUN_00404710                   ; 00406289
        ;   XREF to: 00404710 (UNCONDITIONAL_CALL)  ; undefined FUN_00404710()
    ADD ESP,0x4                         ; 0040628e
    PUSH ESI                            ; 00406291
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406292
    PUSH ESI                            ; 00406295
    CALL FUN_00432cd0                   ; 00406296
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00432cd0()
    ADD ESP,0x8                         ; 0040629b
    MOV ESI,dword ptr [EBX + 0x4]       ; 0040629e
        ;   Label: LAB_0040629e
    LEA EAX,[EBX + 0x18]                ; 004062a1
    SHL ESI,0x2                         ; 004062a4
    ADD EAX,ESI                         ; 004062a7
    POP ESI                             ; 004062a9
    POP EBX                             ; 004062aa
    RET                                 ; 004062ab
    MOV dword ptr [0x01c00c7c],0x530322 ; 004062ac | DAT_01c00c7c | LAB_00530322
        ;   Label: LAB_004062ac
    JMP 0x00406272                      ; 004062b6
        ;   XREF to: 00406272 (UNCONDITIONAL_JUMP)  ; LAB_00406272
    CMP dword ptr [0x005b7624],0x20     ; 004062b8 | DAT_005b7624
        ;   Label: LAB_004062b8
    JNZ 0x004062cd                      ; 004062bf
        ;   XREF to: 004062cd (CONDITIONAL_JUMP)  ; LAB_004062cd
    MOV dword ptr [0x01c00c7c],0x52f031 ; 004062c1 | DAT_01c00c7c | LAB_0052f031
    JMP 0x00406272                      ; 004062cb
        ;   XREF to: 00406272 (UNCONDITIONAL_JUMP)  ; LAB_00406272
    MOV dword ptr [0x01c00c7c],0x52f823 ; 004062cd | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_004062cd
    JMP 0x00406272                      ; 004062d7
        ;   XREF to: 00406272 (UNCONDITIONAL_JUMP)  ; LAB_00406272
    CMP dword ptr [0x01c03948],0x0      ; 004062d9 | DAT_01c03948
        ;   Label: LAB_004062d9
    JNZ 0x004062fe                      ; 004062e0
        ;   XREF to: 004062fe (CONDITIONAL_JUMP)  ; LAB_004062fe
    CMP dword ptr [0x005b7624],0x20     ; 004062e2 | DAT_005b7624
    JZ 0x00406268                       ; 004062e9
        ;   XREF to: 00406268 (CONDITIONAL_JUMP)  ; LAB_00406268
    MOV dword ptr [0x01c00c7c],0x530322 ; 004062ef | DAT_01c00c7c | LAB_00530322
    JMP 0x00406272                      ; 004062f9
        ;   XREF to: 00406272 (UNCONDITIONAL_JUMP)  ; LAB_00406272
    CMP dword ptr [0x005b7624],0x20     ; 004062fe | DAT_005b7624
        ;   Label: LAB_004062fe
    JNZ 0x004062cd                      ; 00406305
        ;   XREF to: 004062cd (CONDITIONAL_JUMP)  ; LAB_004062cd
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00406307 | DAT_01c00c7c | LAB_0052f031
    JMP 0x00406272                      ; 00406311
        ;   XREF to: 00406272 (UNCONDITIONAL_JUMP)  ; LAB_00406272

