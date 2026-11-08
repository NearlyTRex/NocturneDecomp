; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004943a0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x408]:1  local_408
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[26]:
;   FUN_00474fc0 at 00475092
;   FUN_00494fd0 at 0049514d
;   FUN_00495da0 at 00495e49
;   FUN_00495e70 at 00495f2f
;   FUN_00495f70 at 00496040
;   FUN_004bcba0 at 004bcde6
;   FUN_004bdd00 at 004bddb1
;   FUN_004bde80 at 004bdf76
;   FUN_004bdfa0 at 004be051
;   FUN_004d27b0 at 004d3f86
;   ... and 16 more
;
; Referenced Globals:
;   TerminatedCString s_Error_005dbdc2
;   undefined4 DAT_01c3f564
;
; Called Functions:
;   FUN_00493d40
;   FUN_005bfb18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004943a0
        ;   Label: FUN_004943a0
    SUB ESP,0x404                       ; 004943a1
    LEA EAX,[ESP + 0x414]               ; 004943a7
    MOV dword ptr [ESP + 0x400],EAX     ; 004943ae
    LEA EAX,[ESP + 0x400]               ; 004943b5
    PUSH EAX                            ; 004943bc
    MOV EDX,dword ptr [ESP + 0x414]     ; 004943bd
    PUSH EDX                            ; 004943c4
    LEA EAX,[ESP + 0x8]                 ; 004943c5
    PUSH EAX                            ; 004943c9
    CALL FUN_005bfb18                   ; 004943ca
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb18()
    ADD ESP,0xc                         ; 004943cf
    MOV EBX,dword ptr [0x01c3f564]      ; 004943d2 | DAT_01c3f564
    PUSH EBX                            ; 004943d8
    LEA EAX,[ESP + 0x4]                 ; 004943d9
    PUSH EAX                            ; 004943dd
    XOR ECX,ECX                         ; 004943de
    PUSH 0x5dbdc2                       ; 004943e0 | = "Error"
    MOV dword ptr [ESP + 0x40c],ECX     ; 004943e5
    CALL FUN_00493d40                   ; 004943ec
        ;   XREF to: 00493d40 (UNCONDITIONAL_CALL)  ; undefined FUN_00493d40()
    ADD ESP,0xc                         ; 004943f1
    ADD ESP,0x404                       ; 004943f4
    POP EBX                             ; 004943fa
    RET                                 ; 004943fb

