; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c03c0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[39]:
;   FUN_0040adb0 at 0040ae06
;   FUN_0040b110 at 0040b174
;   FUN_0040b1c0 at 0040b247
;   FUN_0040b260 at 0040b2e7
;   FUN_0040b300 at 0040b390
;   FUN_0040b3a0 at 0040b434
;   FUN_0040b440 at 0040b539
;   FUN_0040b5f0 at 0040b65d
;   FUN_0040b670 at 0040b6d9
;   FUN_0040b6f0 at 0040b73a
;   ... and 29 more
;
; Called Functions:
;   FUN_005c4fe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c03c0
        ;   Label: FUN_005c03c0
    SUB ESP,0x4                         ; 005c03c1
    LEA EAX,[ESP + 0x14]                ; 005c03c4
    MOV dword ptr [ESP],EAX             ; 005c03c8
    MOV EAX,ESP                         ; 005c03cb
    PUSH EAX                            ; 005c03cd
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c03ce
    PUSH EDX                            ; 005c03d2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005c03d3
    PUSH EBX                            ; 005c03d7
    CALL FUN_005c4fe0                   ; 005c03d8
        ;   XREF to: 005c4fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c4fe0()
    ADD ESP,0xc                         ; 005c03dd
    ADD ESP,0x4                         ; 005c03e0
    POP EBX                             ; 005c03e3
    RET                                 ; 005c03e4

