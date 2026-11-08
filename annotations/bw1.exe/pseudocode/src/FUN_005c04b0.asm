; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c04b0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[47]:
;   FUN_0040aed0 at 0040af0e
;   FUN_0040b1c0 at 0040b1e4
;   FUN_0040b260 at 0040b284
;   FUN_0040b300 at 0040b329
;   FUN_0040b3a0 at 0040b3c8
;   FUN_0040b440 at 0040b4bf
;   FUN_0040b5f0 at 0040b60c
;   FUN_0040b670 at 0040b68d
;   FUN_0040b960 at 0040b9a9
;   FUN_0040bce0 at 0040bd24
;   ... and 37 more
;
; Called Functions:
;   FUN_005c0428
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c04b0
        ;   Label: FUN_005c04b0
    SUB ESP,0x4                         ; 005c04b1
    LEA EAX,[ESP + 0x14]                ; 005c04b4
    MOV dword ptr [ESP],EAX             ; 005c04b8
    MOV EAX,ESP                         ; 005c04bb
    PUSH EAX                            ; 005c04bd
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c04be
    PUSH EDX                            ; 005c04c2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005c04c3
    PUSH EBX                            ; 005c04c7
    CALL FUN_005c0428                   ; 005c04c8
        ;   XREF to: 005c0428 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0428()
    ADD ESP,0xc                         ; 005c04cd
    ADD ESP,0x4                         ; 005c04d0
    POP EBX                             ; 005c04d3
    RET                                 ; 005c04d4

