; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005773f0(undefined4 param_1)
;
; Local Variables:
; undefined        Stack[-0x404]:1  local_404
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[38]:
;   FUN_0056db10 at 0056db68
;   FUN_0056e830 at 0056ea8e
;   FUN_0056f360 at 0056f3b7
;   FUN_0056feb0 at 0056ff70
;   FUN_00570460 at 0057070b
;   FUN_00571f10 at 00571f80
;   FUN_00571fa0 at 00571ffa
;   FUN_00572d20 at 0057345d
;   FUN_00575ca0 at 00575d01
;   FUN_005776b0 at 00577821
;   ... and 28 more
;
; Referenced Globals:
;   TerminatedCString s_SOUND_005f46b9
;   undefined4 DAT_005f46c1
;
; Called Functions:
;   FUN_005b3a90
;   FUN_005bfb18
;
; *****************************************************************************

section .text

    SUB ESP,0x404                       ; 005773f0
        ;   Label: FUN_005773f0
    LEA EAX,[ESP + 0x40c]               ; 005773f6
    MOV dword ptr [ESP + 0x400],EAX     ; 005773fd
    LEA EAX,[ESP + 0x400]               ; 00577404
    PUSH EAX                            ; 0057740b
    MOV EDX,dword ptr [ESP + 0x40c]     ; 0057740c
    PUSH EDX                            ; 00577413
    LEA EAX,[ESP + 0x8]                 ; 00577414
    PUSH EAX                            ; 00577418
    CALL FUN_005bfb18                   ; 00577419
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb18()
    ADD ESP,0xc                         ; 0057741e
    XOR ECX,ECX                         ; 00577421
    PUSH 0x5f46b9                       ; 00577423 | = "SOUND: "
    MOV dword ptr [ESP + 0x404],ECX     ; 00577428
    CALL FUN_005b3a90                   ; 0057742f
        ;   XREF to: 005b3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005b3a90()
    ADD ESP,0x4                         ; 00577434
    MOV EAX,ESP                         ; 00577437
    PUSH EAX                            ; 00577439
    CALL FUN_005b3a90                   ; 0057743a
        ;   XREF to: 005b3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005b3a90()
    ADD ESP,0x4                         ; 0057743f
    PUSH 0x5f46c1                       ; 00577442 | DAT_005f46c1
    CALL FUN_005b3a90                   ; 00577447
        ;   XREF to: 005b3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005b3a90()
    ADD ESP,0x4                         ; 0057744c
    ADD ESP,0x404                       ; 0057744f
    RET                                 ; 00577455

