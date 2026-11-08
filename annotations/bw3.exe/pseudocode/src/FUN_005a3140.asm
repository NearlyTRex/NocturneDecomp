; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a3140(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[39]:
;   FUN_0040aff0 at 0040b046
;   FUN_0040b350 at 0040b3b4
;   FUN_0040b400 at 0040b487
;   FUN_0040b4a0 at 0040b527
;   FUN_0040b540 at 0040b5d0
;   FUN_0040b5e0 at 0040b674
;   FUN_0040b680 at 0040b779
;   FUN_0040b830 at 0040b89d
;   FUN_0040b8b0 at 0040b919
;   FUN_0040b930 at 0040b97a
;   ... and 29 more
;
; Called Functions:
;   FUN_005a7e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3140
        ;   Label: FUN_005a3140
    SUB ESP,0x4                         ; 005a3141
    LEA EAX,[ESP + 0x14]                ; 005a3144
    MOV dword ptr [ESP],EAX             ; 005a3148
    MOV EAX,ESP                         ; 005a314b
    PUSH EAX                            ; 005a314d
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a314e
    PUSH EDX                            ; 005a3152
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a3153
    PUSH EBX                            ; 005a3157
    CALL FUN_005a7e50                   ; 005a3158
        ;   XREF to: 005a7e50 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7e50()
    ADD ESP,0xc                         ; 005a315d
    ADD ESP,0x4                         ; 005a3160
    POP EBX                             ; 005a3163
    RET                                 ; 005a3164

