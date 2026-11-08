; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005549c0(undefined4 param_1)
;
; Local Variables:
; undefined        Stack[-0x404]:1  local_404
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[38]:
;   FUN_0054b4a0 at 0054b4f8
;   FUN_0054c1c0 at 0054c41c
;   FUN_0054ccf0 at 0054cd47
;   FUN_0054d840 at 0054d900
;   FUN_0054ddf0 at 0054e09b
;   FUN_0054f8a0 at 0054f910
;   FUN_0054f930 at 0054f98a
;   FUN_005506b0 at 00550a27
;   FUN_00553270 at 005532d1
;   FUN_00554c80 at 00554df1
;   ... and 28 more
;
; Referenced Globals:
;   TerminatedCString s_SOUND_005e94bf
;   undefined4 DAT_005e94c7
;
; Called Functions:
;   FUN_0058ffc0
;   FUN_005b7768
;
; *****************************************************************************

section .text

    SUB ESP,0x404                       ; 005549c0
        ;   Label: FUN_005549c0
    LEA EAX,[ESP + 0x40c]               ; 005549c6
    MOV dword ptr [ESP + 0x400],EAX     ; 005549cd
    LEA EAX,[ESP + 0x400]               ; 005549d4
    PUSH EAX                            ; 005549db
    MOV EDX,dword ptr [ESP + 0x40c]     ; 005549dc
    PUSH EDX                            ; 005549e3
    LEA EAX,[ESP + 0x8]                 ; 005549e4
    PUSH EAX                            ; 005549e8
    CALL FUN_005b7768                   ; 005549e9
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7768()
    ADD ESP,0xc                         ; 005549ee
    XOR ECX,ECX                         ; 005549f1
    PUSH 0x5e94bf                       ; 005549f3 | = "SOUND: "
    MOV dword ptr [ESP + 0x404],ECX     ; 005549f8
    CALL FUN_0058ffc0                   ; 005549ff
        ;   XREF to: 0058ffc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058ffc0()
    ADD ESP,0x4                         ; 00554a04
    MOV EAX,ESP                         ; 00554a07
    PUSH EAX                            ; 00554a09
    CALL FUN_0058ffc0                   ; 00554a0a
        ;   XREF to: 0058ffc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058ffc0()
    ADD ESP,0x4                         ; 00554a0f
    PUSH 0x5e94c7                       ; 00554a12 | DAT_005e94c7
    CALL FUN_0058ffc0                   ; 00554a17
        ;   XREF to: 0058ffc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058ffc0()
    ADD ESP,0x4                         ; 00554a1c
    ADD ESP,0x404                       ; 00554a1f
    RET                                 ; 00554a25

