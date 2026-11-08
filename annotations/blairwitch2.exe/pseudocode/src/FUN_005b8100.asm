; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b8100(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[47]:
;   FUN_0040b1c0 at 0040b1fe
;   FUN_0040b4b0 at 0040b4d4
;   FUN_0040b550 at 0040b574
;   FUN_0040b5f0 at 0040b619
;   FUN_0040b690 at 0040b6b8
;   FUN_0040b730 at 0040b7af
;   FUN_0040b8e0 at 0040b8fc
;   FUN_0040b960 at 0040b97d
;   FUN_0040bc50 at 0040bc99
;   FUN_0040bfd0 at 0040c014
;   ... and 37 more
;
; Called Functions:
;   FUN_005b8078
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8100
        ;   Label: FUN_005b8100
    SUB ESP,0x4                         ; 005b8101
    LEA EAX,[ESP + 0x14]                ; 005b8104
    MOV dword ptr [ESP],EAX             ; 005b8108
    MOV EAX,ESP                         ; 005b810b
    PUSH EAX                            ; 005b810d
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b810e
    PUSH EDX                            ; 005b8112
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b8113
    PUSH EBX                            ; 005b8117
    CALL FUN_005b8078                   ; 005b8118
        ;   XREF to: 005b8078 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8078()
    ADD ESP,0xc                         ; 005b811d
    ADD ESP,0x4                         ; 005b8120
    POP EBX                             ; 005b8123
    RET                                 ; 005b8124

