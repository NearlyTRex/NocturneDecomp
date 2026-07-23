; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00471360(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5,int param_6,byte param_7)
;
; Local Variables:
; undefined1       Stack[-0x34]:1  local_34
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a0f13
;   core_game.cpp_setupMovieRecording_FUN_0049a240 at 0049a29e
;
; Referenced Globals:
;   TerminatedCString s_d_0057e751
;   TerminatedCString s_d_0057e754
;   TerminatedCString s_Please_enter_a_valid_int_0057e757
;   TerminatedCString s_Please_enter_a_valid_int_0057e775
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_stdio.c_sscanf_FUN_00566b5c
;   FUN_0046fcd0
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00471600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00471360
        ;   Label: shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00471360
    PUSH ESI                            ; 00471361
    PUSH EDI                            ; 00471362
    PUSH EBP                            ; 00471363
    SUB ESP,0x24                        ; 00471364
    MOV EBX,dword ptr [ESP + 0x38]      ; 00471367
    MOV EBP,dword ptr [ESP + 0x3c]      ; 0047136b
    MOV EDI,dword ptr [ESP + 0x48]      ; 0047136f
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00471373
    TEST byte ptr [ESP + 0x50],0x1      ; 00471377
    JNZ 0x004713a2                      ; 0047137c
        ;   XREF to: 004713a2 (CONDITIONAL_JUMP)  ; LAB_004713a2
    XOR DL,DL                           ; 0047137e
    MOV byte ptr [ESP],DL               ; 00471380
    PUSH 0x1                            ; 00471383
        ;   Label: LAB_00471383
    PUSH 0x1e                           ; 00471385
    LEA EAX,[ESP + 0x8]                 ; 00471387
    PUSH EAX                            ; 0047138b
    PUSH EBP                            ; 0047138c
    PUSH EBX                            ; 0047138d
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00471600 ; 0047138e
        ;   XREF to: 00471600 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00471600()
    ADD ESP,0x14                        ; 00471393
    TEST EAX,EAX                        ; 00471396
    JNZ 0x004713bd                      ; 00471398
        ;   XREF to: 004713bd (CONDITIONAL_JUMP)  ; LAB_004713bd
    ADD ESP,0x24                        ; 0047139a
    POP EBP                             ; 0047139d
    POP EDI                             ; 0047139e
    POP ESI                             ; 0047139f
    POP EBX                             ; 004713a0
    RET                                 ; 004713a1
    MOV EAX,dword ptr [ESP + 0x40]      ; 004713a2
        ;   Label: LAB_004713a2
    MOV EDX,dword ptr [EAX]             ; 004713a6
    PUSH EDX                            ; 004713a8
    PUSH 0x57e751                       ; 004713a9 | = "%d"
    LEA EAX,[ESP + 0x8]                 ; 004713ae
    PUSH EAX                            ; 004713b2
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004713b3
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004713b8
    JMP 0x00471383                      ; 004713bb
        ;   XREF to: 00471383 (UNCONDITIONAL_JUMP)  ; LAB_00471383
    LEA EAX,[ESP + 0x20]                ; 004713bd
        ;   Label: LAB_004713bd
    PUSH EAX                            ; 004713c1
    PUSH 0x57e754                       ; 004713c2 | = "%d"
    LEA EAX,[ESP + 0x8]                 ; 004713c7
    PUSH EAX                            ; 004713cb
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 004713cc
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0xc                         ; 004713d1
    CMP EAX,0x1                         ; 004713d4
    JNZ 0x00471403                      ; 004713d7
        ;   XREF to: 00471403 (CONDITIONAL_JUMP)  ; LAB_00471403
    CMP dword ptr [ESP + 0x44],0x0      ; 004713d9
    JZ 0x004713ec                       ; 004713de
        ;   XREF to: 004713ec (CONDITIONAL_JUMP)  ; LAB_004713ec
    MOV EAX,dword ptr [ESP + 0x20]      ; 004713e0
    CMP EDI,EAX                         ; 004713e4
    JG 0x00471416                       ; 004713e6
        ;   XREF to: 00471416 (CONDITIONAL_JUMP)  ; LAB_00471416
    CMP ESI,EAX                         ; 004713e8
    JL 0x00471416                       ; 004713ea
        ;   XREF to: 00471416 (CONDITIONAL_JUMP)  ; LAB_00471416
    MOV EBX,dword ptr [ESP + 0x40]      ; 004713ec
        ;   Label: LAB_004713ec
    MOV EAX,dword ptr [ESP + 0x20]      ; 004713f0
    MOV dword ptr [EBX],EAX             ; 004713f4
    MOV EAX,0x1                         ; 004713f6
    ADD ESP,0x24                        ; 004713fb
    POP EBP                             ; 004713fe
    POP EDI                             ; 004713ff
    POP ESI                             ; 00471400
    POP EBX                             ; 00471401
    RET                                 ; 00471402
    PUSH 0x57e757                       ; 00471403 | = "Please enter a valid integer."
        ;   Label: LAB_00471403
    PUSH EBX                            ; 00471408
    CALL FUN_0046fcd0                   ; 00471409
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fcd0()
    ADD ESP,0x8                         ; 0047140e
    JMP 0x00471383                      ; 00471411
        ;   XREF to: 00471383 (UNCONDITIONAL_JUMP)  ; LAB_00471383
    PUSH ESI                            ; 00471416
        ;   Label: LAB_00471416
    PUSH EDI                            ; 00471417
    PUSH 0x57e775                       ; 00471418 | = "Please enter a valid integer between ..."
    PUSH EBX                            ; 0047141d
    CALL FUN_0046fcd0                   ; 0047141e
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fcd0()
    ADD ESP,0x10                        ; 00471423
    JMP 0x00471383                      ; 00471426
        ;   XREF to: 00471383 (UNCONDITIONAL_JUMP)  ; LAB_00471383

