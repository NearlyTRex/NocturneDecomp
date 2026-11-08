; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055a560(undefined4 param_1)
;
; Local Variables:
; undefined        Stack[-0x404]:1  local_404
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[38]:
;   FUN_00551000 at 00551058
;   FUN_00551d20 at 00551f7e
;   FUN_00552850 at 005528b6
;   FUN_005533b0 at 00553470
;   FUN_00553960 at 00553c0b
;   FUN_00555410 at 00555480
;   FUN_005554a0 at 005554fa
;   FUN_00556240 at 005565b7
;   FUN_00558e10 at 00558e71
;   FUN_0055a820 at 0055a991
;   ... and 28 more
;
; Referenced Globals:
;   TerminatedCString s_SOUND_005d3fb3
;   undefined4 DAT_005d3fbb
;
; Called Functions:
;   FUN_00581c70
;   FUN_005a2898
;
; *****************************************************************************

section .text

    SUB ESP,0x404                       ; 0055a560
        ;   Label: FUN_0055a560
    LEA EAX,[ESP + 0x40c]               ; 0055a566
    MOV dword ptr [ESP + 0x400],EAX     ; 0055a56d
    LEA EAX,[ESP + 0x400]               ; 0055a574
    PUSH EAX                            ; 0055a57b
    MOV EDX,dword ptr [ESP + 0x40c]     ; 0055a57c
    PUSH EDX                            ; 0055a583
    LEA EAX,[ESP + 0x8]                 ; 0055a584
    PUSH EAX                            ; 0055a588
    CALL FUN_005a2898                   ; 0055a589
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; undefined FUN_005a2898()
    ADD ESP,0xc                         ; 0055a58e
    XOR ECX,ECX                         ; 0055a591
    PUSH 0x5d3fb3                       ; 0055a593 | = "SOUND: "
    MOV dword ptr [ESP + 0x404],ECX     ; 0055a598
    CALL FUN_00581c70                   ; 0055a59f
        ;   XREF to: 00581c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00581c70()
    ADD ESP,0x4                         ; 0055a5a4
    MOV EAX,ESP                         ; 0055a5a7
    PUSH EAX                            ; 0055a5a9
    CALL FUN_00581c70                   ; 0055a5aa
        ;   XREF to: 00581c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00581c70()
    ADD ESP,0x4                         ; 0055a5af
    PUSH 0x5d3fbb                       ; 0055a5b2 | DAT_005d3fbb
    CALL FUN_00581c70                   ; 0055a5b7
        ;   XREF to: 00581c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00581c70()
    ADD ESP,0x4                         ; 0055a5bc
    ADD ESP,0x404                       ; 0055a5bf
    RET                                 ; 0055a5c5

