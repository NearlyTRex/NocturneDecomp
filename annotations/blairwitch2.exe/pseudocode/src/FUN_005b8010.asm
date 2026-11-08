; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b8010(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[35]:
;   FUN_0040b0a0 at 0040b0f6
;   FUN_0040b400 at 0040b464
;   FUN_0040b4b0 at 0040b537
;   FUN_0040b550 at 0040b5d7
;   FUN_0040b5f0 at 0040b680
;   FUN_0040b690 at 0040b724
;   FUN_0040b730 at 0040b829
;   FUN_0040b8e0 at 0040b94d
;   FUN_0040b960 at 0040b9c9
;   FUN_0040b9e0 at 0040ba2a
;   ... and 25 more
;
; Called Functions:
;   FUN_005bcd10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8010
        ;   Label: FUN_005b8010
    SUB ESP,0x4                         ; 005b8011
    LEA EAX,[ESP + 0x14]                ; 005b8014
    MOV dword ptr [ESP],EAX             ; 005b8018
    MOV EAX,ESP                         ; 005b801b
    PUSH EAX                            ; 005b801d
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b801e
    PUSH EDX                            ; 005b8022
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b8023
    PUSH EBX                            ; 005b8027
    CALL FUN_005bcd10                   ; 005b8028
        ;   XREF to: 005bcd10 (UNCONDITIONAL_CALL)  ; undefined FUN_005bcd10()
    ADD ESP,0xc                         ; 005b802d
    ADD ESP,0x4                         ; 005b8030
    POP EBX                             ; 005b8033
    RET                                 ; 005b8034

