; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_00471430(undefined4 param_1,undefined4 param_2,float *param_3,int param_4,float param_5,float param_6,byte param_7)
;
; Local Variables:
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined1       Stack[-0x38]:1  local_38
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a0ee9
;   core_game.cpp_setupMovieRecording_FUN_0049a240 at 0049a271
;
; Referenced Globals:
;   undefined4 DAT_0057e7a5
;   undefined4 DAT_0057e7a8
;   string s_Please_enter_a_valid_number._0057e7ab
;   string s_Please_enter_a_valid_integer_bet_0057e7c8
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_stdio.c_sscanf_FUN_00566b5c
;   FUN_0046fcd0
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00471600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00471430
        ;   Label: shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_00471430
    PUSH ESI                            ; 00471431
    PUSH EDI                            ; 00471432
    PUSH EBP                            ; 00471433
    MOV EBP,ESP                         ; 00471434
    SUB ESP,0x2c                        ; 00471436
    AND ESP,0xfffffff8                  ; 00471439
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047143c
    MOV EAX,dword ptr [EBP + 0x24]      ; 0047143f
    MOV ESI,dword ptr [EBP + 0x18]      ; 00471442
    MOV dword ptr [ESP],EAX             ; 00471445
    MOV EAX,dword ptr [EBP + 0x28]      ; 00471448
    MOV EDI,dword ptr [EBP + 0x20]      ; 0047144b
    MOV dword ptr [ESP + 0x4],EAX       ; 0047144e
    TEST byte ptr [EBP + 0x2c],0x1      ; 00471452
    JNZ 0x0047147c                      ; 00471456
        ;   XREF to: 0047147c (CONDITIONAL_JUMP)  ; LAB_0047147c
    XOR DL,DL                           ; 00471458
    MOV byte ptr [ESP + 0x8],DL         ; 0047145a
    PUSH 0x1                            ; 0047145e
        ;   Label: LAB_0047145e
    PUSH 0x1e                           ; 00471460
    LEA EAX,[ESP + 0x10]                ; 00471462
    PUSH EAX                            ; 00471466
    PUSH ESI                            ; 00471467
    PUSH EBX                            ; 00471468
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00471600 ; 00471469
        ;   XREF to: 00471600 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00471600()
    ADD ESP,0x14                        ; 0047146e
    TEST EAX,EAX                        ; 00471471
    JNZ 0x0047149b                      ; 00471473
        ;   XREF to: 0047149b (CONDITIONAL_JUMP)  ; LAB_0047149b
    MOV ESP,EBP                         ; 00471475
    POP EBP                             ; 00471477
    POP EDI                             ; 00471478
    POP ESI                             ; 00471479
    POP EBX                             ; 0047147a
    RET                                 ; 0047147b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0047147c
        ;   Label: LAB_0047147c
    SUB ESP,0x8                         ; 0047147f
    FLD float ptr [EAX]                 ; 00471482
    FSTP double ptr [ESP]               ; 00471484
    PUSH 0x57e7a5                       ; 00471487 | DAT_0057e7a5
    LEA EAX,[ESP + 0x14]                ; 0047148c
    PUSH EAX                            ; 00471490
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00471491
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 00471496
    JMP 0x0047145e                      ; 00471499
        ;   XREF to: 0047145e (UNCONDITIONAL_JUMP)  ; LAB_0047145e
    LEA EAX,[ESP + 0x28]                ; 0047149b
        ;   Label: LAB_0047149b
    PUSH EAX                            ; 0047149f
    PUSH 0x57e7a8                       ; 004714a0 | DAT_0057e7a8
    LEA EAX,[ESP + 0x10]                ; 004714a5
    PUSH EAX                            ; 004714a9
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 004714aa
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0xc                         ; 004714af
    CMP EAX,0x1                         ; 004714b2
    JNZ 0x004714e9                      ; 004714b5
        ;   XREF to: 004714e9 (CONDITIONAL_JUMP)  ; LAB_004714e9
    TEST EDI,EDI                        ; 004714b7
    JZ 0x004714d4                       ; 004714b9
        ;   XREF to: 004714d4 (CONDITIONAL_JUMP)  ; LAB_004714d4
    FLD float ptr [ESP + 0x28]          ; 004714bb
    FCOMP float ptr [ESP]               ; 004714bf
    FNSTSW AX                           ; 004714c2
    SAHF                                ; 004714c4
    JC 0x004714fc                       ; 004714c5
        ;   XREF to: 004714fc (CONDITIONAL_JUMP)  ; LAB_004714fc
    FLD float ptr [ESP + 0x28]          ; 004714c7
    FCOMP float ptr [ESP + 0x4]         ; 004714cb
    FNSTSW AX                           ; 004714cf
    SAHF                                ; 004714d1
    JA 0x004714fc                       ; 004714d2
        ;   XREF to: 004714fc (CONDITIONAL_JUMP)  ; LAB_004714fc
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004714d4
        ;   Label: LAB_004714d4
    MOV EAX,dword ptr [ESP + 0x28]      ; 004714d7
    MOV dword ptr [EBX],EAX             ; 004714db
    MOV EAX,0x1                         ; 004714dd
    MOV ESP,EBP                         ; 004714e2
    POP EBP                             ; 004714e4
    POP EDI                             ; 004714e5
    POP ESI                             ; 004714e6
    POP EBX                             ; 004714e7
    RET                                 ; 004714e8
    PUSH 0x57e7ab                       ; 004714e9 | = "Please enter a valid number."
        ;   Label: LAB_004714e9
    PUSH EBX                            ; 004714ee
    CALL FUN_0046fcd0                   ; 004714ef
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fcd0()
    ADD ESP,0x8                         ; 004714f4
    JMP 0x0047145e                      ; 004714f7
        ;   XREF to: 0047145e (UNCONDITIONAL_JUMP)  ; LAB_0047145e
    FLD float ptr [ESP + 0x4]           ; 004714fc
        ;   Label: LAB_004714fc
    SUB ESP,0x8                         ; 00471500
    FSTP double ptr [ESP]               ; 00471503
    FLD float ptr [ESP + 0x8]           ; 00471506
    SUB ESP,0x8                         ; 0047150a
    FSTP double ptr [ESP]               ; 0047150d
    PUSH 0x57e7c8                       ; 00471510 | = "Please enter a valid integer between ..."
    PUSH EBX                            ; 00471515
    CALL FUN_0046fcd0                   ; 00471516
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fcd0()
    ADD ESP,0x18                        ; 0047151b
    JMP 0x0047145e                      ; 0047151e
        ;   XREF to: 0047145e (UNCONDITIONAL_JUMP)  ; LAB_0047145e

