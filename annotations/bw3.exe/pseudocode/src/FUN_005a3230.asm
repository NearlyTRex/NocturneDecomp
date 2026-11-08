; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a3230(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[47]:
;   FUN_0040b110 at 0040b14e
;   FUN_0040b400 at 0040b424
;   FUN_0040b4a0 at 0040b4c4
;   FUN_0040b540 at 0040b569
;   FUN_0040b5e0 at 0040b608
;   FUN_0040b680 at 0040b6ff
;   FUN_0040b830 at 0040b84c
;   FUN_0040b8b0 at 0040b8cd
;   FUN_0040bba0 at 0040bbe9
;   FUN_0040bf20 at 0040bf64
;   ... and 37 more
;
; Called Functions:
;   FUN_005a31a8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3230
        ;   Label: FUN_005a3230
    SUB ESP,0x4                         ; 005a3231
    LEA EAX,[ESP + 0x14]                ; 005a3234
    MOV dword ptr [ESP],EAX             ; 005a3238
    MOV EAX,ESP                         ; 005a323b
    PUSH EAX                            ; 005a323d
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a323e
    PUSH EDX                            ; 005a3242
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a3243
    PUSH EBX                            ; 005a3247
    CALL FUN_005a31a8                   ; 005a3248
        ;   XREF to: 005a31a8 (UNCONDITIONAL_CALL)  ; undefined FUN_005a31a8()
    ADD ESP,0xc                         ; 005a324d
    ADD ESP,0x4                         ; 005a3250
    POP EBX                             ; 005a3253
    RET                                 ; 005a3254

