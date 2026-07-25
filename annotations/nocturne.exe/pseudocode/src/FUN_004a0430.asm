; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a0430(char *param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_cheat_1_wav_00582b89
;   undefined4 DAT_005b9354
;   undefined4 DAT_005bed68
;   undefined4 DAT_01c775ec
;   undefined4 DAT_01c78af0
;
; Called Functions:
;   core_game.cpp_CGame_displayMessage_FUN_0049aa30
;   core_game.cpp_giveHeroWeapon_FUN_004a02e0
;   core_sound.cpp_CSound_playSound_FUN_0052ea40
;   crt_ctype.c_toupper_FUN_00565e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0430
        ;   Label: FUN_004a0430
    PUSH ESI                            ; 004a0431
    PUSH EDI                            ; 004a0432
    PUSH EBP                            ; 004a0433
    SUB ESP,0x8                         ; 004a0434
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004a0437
    MOV EDI,ESI                         ; 004a043b
    SUB ECX,ECX                         ; 004a043d
    DEC ECX                             ; 004a043f
    XOR EAX,EAX                         ; 004a0440
    SCASB.REPNE ES:EDI                  ; 004a0442
    NOT ECX                             ; 004a0444
    DEC ECX                             ; 004a0446
    XOR EBP,EBP                         ; 004a0447
    MOV EAX,ECX                         ; 004a0449
    MOV dword ptr [ESP],ECX             ; 004a044b
    TEST ECX,ECX                        ; 004a044e
    JLE 0x004a0482                      ; 004a0450
        ;   XREF to: 004a0482 (CONDITIONAL_JUMP)  ; LAB_004a0482
    MOV EDI,ECX                         ; 004a0452
    NEG EDI                             ; 004a0454
    MOV EBX,ECX                         ; 004a0456
    LEA EAX,[ECX + EDI*0x1]             ; 004a0458
    MOV dword ptr [ESP + 0x4],EAX       ; 004a045b
    XOR EAX,EAX                         ; 004a045f
        ;   Label: LAB_004a045f
    MOV AL,byte ptr [ESI]               ; 004a0461
    PUSH EAX                            ; 004a0463
    MOVZX EDI,byte ptr [EBX + 0x1c78aef] ; 004a0464 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a046b
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; undefined crt_ctype.c_toupper_FUN_00565e20()
    ADD ESP,0x4                         ; 004a0470
    CMP EDI,EAX                         ; 004a0473
    JNZ 0x004a0478                      ; 004a0475
        ;   XREF to: 004a0478 (CONDITIONAL_JUMP)  ; LAB_004a0478
    INC EBP                             ; 004a0477
    MOV EDX,dword ptr [ESP + 0x4]       ; 004a0478
        ;   Label: LAB_004a0478
    DEC EBX                             ; 004a047c
    INC ESI                             ; 004a047d
    CMP EBX,EDX                         ; 004a047e
    JG 0x004a045f                       ; 004a0480
        ;   XREF to: 004a045f (CONDITIONAL_JUMP)  ; LAB_004a045f
    CMP EBP,dword ptr [ESP]             ; 004a0482
        ;   Label: LAB_004a0482
    JZ 0x004a048f                       ; 004a0485
        ;   XREF to: 004a048f (CONDITIONAL_JUMP)  ; LAB_004a048f
    ADD ESP,0x8                         ; 004a0487
    POP EBP                             ; 004a048a
    POP EDI                             ; 004a048b
    POP ESI                             ; 004a048c
    POP EBX                             ; 004a048d
    RET                                 ; 004a048e
    MOV EBX,dword ptr [ESP + 0x20]      ; 004a048f
        ;   Label: LAB_004a048f
    XOR AH,AH                           ; 004a0493
    PUSH EBX                            ; 004a0495
    MOV byte ptr [0x01c78af0],AH        ; 004a0496 | DAT_01c78af0
    CALL core_game.cpp_giveHeroWeapon_FUN_004a02e0 ; 004a049c
        ;   XREF to: 004a02e0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_giveHeroWeapon_FUN_004a02e0()
    ADD ESP,0x4                         ; 004a04a1
    MOV ESI,dword ptr [ESP + 0x24]      ; 004a04a4
    PUSH 0x40a00000                     ; 004a04a8
    PUSH ESI                            ; 004a04ad
    MOV EDI,dword ptr [0x005b9354]      ; 004a04ae | DAT_005b9354
    PUSH EDI                            ; 004a04b4 | DAT_01c775ec
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a04b5
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_displayMessage_FUN_0049aa30()
    ADD ESP,0xc                         ; 004a04ba
    PUSH 0x582b89                       ; 004a04bd | = "cheat-1.wav"
    PUSH 0x0                            ; 004a04c2
    MOV EBP,dword ptr [0x005bed68]      ; 004a04c4 | DAT_005bed68
    PUSH EBP                            ; 004a04ca
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 004a04cb
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_playSound_FUN_0052ea40()
    ADD ESP,0xc                         ; 004a04d0
    ADD ESP,0x8                         ; 004a04d3
    POP EBP                             ; 004a04d6
    POP EDI                             ; 004a04d7
    POP ESI                             ; 004a04d8
    POP EBX                             ; 004a04d9
    RET                                 ; 004a04da

