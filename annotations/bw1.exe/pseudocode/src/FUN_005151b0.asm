; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005151b0(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_00515850 at 005158e8
;   FUN_005159c0 at 00515a29
;   FUN_00517240 at 0051730c
;
; Referenced Globals:
;   void* PTR_caseD_1_00515198 = 0051525e
;   void* PTR_caseD_3_005151a0 = 0051523c
;   undefined4 DAT_01d227ec
;   undefined4 DAT_01d227f0
;   undefined4 DAT_01d227fc
;   undefined4 DAT_01d22800
;   undefined4 DAT_01d22804
;   undefined4 DAT_01d2283c
;   undefined4 DAT_01d22844
;
; Called Functions:
;   FUN_00514e10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005151b0
        ;   Label: FUN_005151b0
    PUSH ESI                            ; 005151b1
    PUSH EDI                            ; 005151b2
    PUSH EBP                            ; 005151b3
    SUB ESP,0x8                         ; 005151b4
    MOV EBX,dword ptr [0x01d227f0]      ; 005151b7 | DAT_01d227f0
    XOR EDX,EDX                         ; 005151bd
    MOV ECX,dword ptr [0x01d227ec]      ; 005151bf | DAT_01d227ec
    MOV dword ptr [ESP],EDX             ; 005151c5
    TEST ECX,ECX                        ; 005151c8
    JLE 0x00515250                      ; 005151ca
        ;   XREF to: 00515250 (CONDITIONAL_JUMP)  ; LAB_00515250
    MOV EBP,0x1d227fc                   ; 005151d0
    MOV ECX,dword ptr [ESP]             ; 005151d5
        ;   Label: LAB_005151d5
    MOV EAX,[0x01d227ec]                ; 005151d8 | DAT_01d227ec
    INC ECX                             ; 005151dd
    CMP ECX,EAX                         ; 005151de
    JNZ 0x005151e4                      ; 005151e0
        ;   XREF to: 005151e4 (CONDITIONAL_JUMP)  ; LAB_005151e4
    XOR ECX,EAX                         ; 005151e2
    FLD float ptr [EBP + 0x8]           ; 005151e4 | DAT_01d22804 | DAT_01d22844
        ;   Label: LAB_005151e4
    MOV ESI,0x1d227fc                   ; 005151e7
    SHL ECX,0x6                         ; 005151ec
    MOV EDX,EBP                         ; 005151ef
    ADD ESI,ECX                         ; 005151f1
    FCHS                                ; 005151f3
    MOV dword ptr [ESP + 0x4],ESI       ; 005151f5
    XOR ECX,ECX                         ; 005151f9
    FCOMP float ptr [EBP]               ; 005151fb | DAT_01d227fc | DAT_01d2283c
    FNSTSW AX                           ; 005151fe
    SAHF                                ; 00515200
    JC 0x00515208                       ; 00515201
        ;   XREF to: 00515208 (CONDITIONAL_JUMP)  ; LAB_00515208
    MOV ECX,0x1                         ; 00515203
    MOV ESI,dword ptr [ESP + 0x4]       ; 00515208
        ;   Label: LAB_00515208
    FLD float ptr [ESI + 0x8]           ; 0051520c | DAT_01d22804
    FCHS                                ; 0051520f
    FCOMP float ptr [ESI]               ; 00515211 | DAT_01d227fc
    FNSTSW AX                           ; 00515213
    SAHF                                ; 00515215
    JC 0x0051521b                       ; 00515216
        ;   XREF to: 0051521b (CONDITIONAL_JUMP)  ; LAB_0051521b
    OR CL,0x2                           ; 00515218
    CMP ECX,0x3                         ; 0051521b
        ;   Label: LAB_0051521b
    JA 0x0051523c                       ; 0051521e
        ;   XREF to: 0051523c (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x515194]  ; 00515220 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESI,EBX                         ; 00515227
        ;   Label: caseD_0
    SHL ESI,0x6                         ; 00515229
    MOV ECX,0x10                        ; 0051522c
    LEA EDI,[ESI + 0x1d237fc]           ; 00515231
    MOV ESI,EDX                         ; 00515237
    INC EBX                             ; 00515239
    MOVSD.REP ES:EDI,ESI                ; 0051523a | DAT_01d227fc | DAT_01d22800
    MOV ESI,dword ptr [ESP]             ; 0051523c
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x01d227ec]      ; 0051523f | DAT_01d227ec
    INC ESI                             ; 00515245
    ADD EBP,0x40                        ; 00515246
    MOV dword ptr [ESP],ESI             ; 00515249
    CMP ESI,EDI                         ; 0051524c
    JL 0x005151d5                       ; 0051524e
        ;   XREF to: 005151d5 (CONDITIONAL_JUMP)  ; LAB_005151d5
    MOV dword ptr [0x01d227f0],EBX      ; 00515250 | DAT_01d227f0
        ;   Label: LAB_00515250
    ADD ESP,0x8                         ; 00515256
    POP EBP                             ; 00515259
    POP EDI                             ; 0051525a
    POP ESI                             ; 0051525b
    POP EBX                             ; 0051525c
    RET                                 ; 0051525d
    MOV ECX,EBX                         ; 0051525e
        ;   Label: caseD_1
    SHL ECX,0x6                         ; 00515260
    ADD ECX,0x1d237fc                   ; 00515263
    PUSH ECX                            ; 00515269
    PUSH EDX                            ; 0051526a | DAT_01d227fc
    MOV ESI,dword ptr [ESP + 0xc]       ; 0051526b
    PUSH ESI                            ; 0051526f
    MOV dword ptr [0x01d227f0],EBX      ; 00515270 | DAT_01d227f0
    CALL FUN_00514e10                   ; 00515276
        ;   XREF to: 00514e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00514e10()
    MOV EBX,dword ptr [0x01d227f0]      ; 0051527b | DAT_01d227f0
    ADD ESP,0xc                         ; 00515281
    INC EBX                             ; 00515284
    JMP 0x0051523c                      ; 00515285
        ;   XREF to: 0051523c (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV ESI,EBX                         ; 00515287
        ;   Label: caseD_2
    SHL ESI,0x6                         ; 00515289
    MOV ECX,0x10                        ; 0051528c
    LEA EDI,[ESI + 0x1d237fc]           ; 00515291
    MOV ESI,EDX                         ; 00515297
    INC EBX                             ; 00515299
    MOVSD.REP ES:EDI,ESI                ; 0051529a | DAT_01d227fc | DAT_01d22800
    MOV ECX,EBX                         ; 0051529c
    SHL ECX,0x6                         ; 0051529e
    ADD ECX,0x1d237fc                   ; 005152a1
    PUSH ECX                            ; 005152a7
    MOV ECX,dword ptr [ESP + 0x8]       ; 005152a8
    PUSH ECX                            ; 005152ac
    PUSH EDX                            ; 005152ad | DAT_01d227fc
    MOV dword ptr [0x01d227f0],EBX      ; 005152ae | DAT_01d227f0
    CALL FUN_00514e10                   ; 005152b4
        ;   XREF to: 00514e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00514e10()
    MOV EBX,dword ptr [0x01d227f0]      ; 005152b9 | DAT_01d227f0
    ADD ESP,0xc                         ; 005152bf
    INC EBX                             ; 005152c2
    JMP 0x0051523c                      ; 005152c3
        ;   XREF to: 0051523c (UNCONDITIONAL_JUMP)  ; caseD_3

