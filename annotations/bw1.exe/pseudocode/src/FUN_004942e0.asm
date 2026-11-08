; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004942e0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x408]:1  local_408
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[7]:
;   FUN_004d27b0 at 004d30bc
;   FUN_004d6990 at 004d6dd6
;   FUN_005031c0 at 00503272
;   FUN_0051c240 at 0051c399
;   FUN_0052cab0 at 0052cc1c
;   FUN_0052e120 at 0052e458
;   FUN_00544460 at 00546a0f
;
; Referenced Globals:
;   TerminatedCString s_Message_005dbdb2
;   undefined4 DAT_01c3f55c
;
; Called Functions:
;   FUN_00493d40
;   FUN_005bfb18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004942e0
        ;   Label: FUN_004942e0
    SUB ESP,0x404                       ; 004942e1
    LEA EAX,[ESP + 0x414]               ; 004942e7
    MOV dword ptr [ESP + 0x400],EAX     ; 004942ee
    LEA EAX,[ESP + 0x400]               ; 004942f5
    PUSH EAX                            ; 004942fc
    MOV EDX,dword ptr [ESP + 0x414]     ; 004942fd
    PUSH EDX                            ; 00494304
    LEA EAX,[ESP + 0x8]                 ; 00494305
    PUSH EAX                            ; 00494309
    CALL FUN_005bfb18                   ; 0049430a
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb18()
    ADD ESP,0xc                         ; 0049430f
    MOV EBX,dword ptr [0x01c3f55c]      ; 00494312 | DAT_01c3f55c
    PUSH EBX                            ; 00494318
    LEA EAX,[ESP + 0x4]                 ; 00494319
    PUSH EAX                            ; 0049431d
    XOR ECX,ECX                         ; 0049431e
    PUSH 0x5dbdb2                       ; 00494320 | = "Message"
    MOV dword ptr [ESP + 0x40c],ECX     ; 00494325
    CALL FUN_00493d40                   ; 0049432c
        ;   XREF to: 00493d40 (UNCONDITIONAL_CALL)  ; undefined FUN_00493d40()
    ADD ESP,0xc                         ; 00494331
    ADD ESP,0x404                       ; 00494334
    POP EBX                             ; 0049433a
    RET                                 ; 0049433b

