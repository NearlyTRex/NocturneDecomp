; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004031c0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[14]:
;   FUN_00403250 at 0040326c
;   FUN_0047afb0 at 0047b187
;   FUN_0047dc40 at 0047e1b6
;   FUN_0047e870 at 0047efab
;   FUN_004831d0 at 00483719
;   FUN_00483ea0 at 004840d7
;   FUN_004a5700 at 004a5a35
;   FUN_004b32c0 at 004b35f8
;   FUN_004bb3d0 at 004bb42e
;   FUN_004dd9b0 at 004de139
;   ... and 4 more
;
; Referenced Globals:
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;   undefined4 DAT_01c35e60
;
; Called Functions:
;   FUN_00402f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004031c0
        ;   Label: FUN_004031c0
    PUSH ESI                            ; 004031c1
    PUSH EDI                            ; 004031c2
    PUSH EBP                            ; 004031c3
    SUB ESP,0x4                         ; 004031c4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004031c7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004031cb
    MOV EDI,dword ptr [ESP + 0x20]      ; 004031cf
    MOV ESI,dword ptr [ESP + 0x24]      ; 004031d3
    MOV EDX,dword ptr [0x01c35e48]      ; 004031d7 | DAT_01c35e48
    CMP EBP,EDX                         ; 004031dd
    JGE 0x004031e3                      ; 004031df
        ;   XREF to: 004031e3 (CONDITIONAL_JUMP)  ; LAB_004031e3
    MOV EBP,EDX                         ; 004031e1
    MOV ECX,dword ptr [0x01c35e50]      ; 004031e3 | DAT_01c35e50
        ;   Label: LAB_004031e3
    CMP EDI,ECX                         ; 004031e9
    JLE 0x004031ef                      ; 004031eb
        ;   XREF to: 004031ef (CONDITIONAL_JUMP)  ; LAB_004031ef
    MOV EDI,ECX                         ; 004031ed
    CMP EBP,EDI                         ; 004031ef
        ;   Label: LAB_004031ef
    JG 0x00403248                       ; 004031f1
        ;   XREF to: 00403248 (CONDITIONAL_JUMP)  ; LAB_00403248
    MOV EAX,[0x01c35e4c]                ; 004031f3 | DAT_01c35e4c
    CMP EBX,EAX                         ; 004031f8
    JGE 0x004031fe                      ; 004031fa
        ;   XREF to: 004031fe (CONDITIONAL_JUMP)  ; LAB_004031fe
    MOV EBX,EAX                         ; 004031fc
    MOV EDX,dword ptr [0x01c35e54]      ; 004031fe | DAT_01c35e54
        ;   Label: LAB_004031fe
    CMP ESI,EDX                         ; 00403204
    JLE 0x0040320a                      ; 00403206
        ;   XREF to: 0040320a (CONDITIONAL_JUMP)  ; LAB_0040320a
    MOV ESI,EDX                         ; 00403208
    CMP EBX,ESI                         ; 0040320a
        ;   Label: LAB_0040320a
    JG 0x00403248                       ; 0040320c
        ;   XREF to: 00403248 (CONDITIONAL_JUMP)  ; LAB_00403248
    MOV EAX,[0x01c35e60]                ; 0040320e | DAT_01c35e60
    MOV dword ptr [ESP],EAX             ; 00403213
    MOV EAX,dword ptr [ESP + 0x28]      ; 00403216
    MOV [0x01c35e60],EAX                ; 0040321a | DAT_01c35e60
    JG 0x00403240                       ; 0040321f
        ;   XREF to: 00403240 (CONDITIONAL_JUMP)  ; LAB_00403240
    PUSH EDI                            ; 00403221
        ;   Label: LAB_00403221
    PUSH EBX                            ; 00403222
    PUSH EBP                            ; 00403223
    CALL FUN_00402f30                   ; 00403224
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00402f30()
    INC EBX                             ; 00403229
    ADD ESP,0xc                         ; 0040322a
    CMP EBX,ESI                         ; 0040322d
    JLE 0x00403221                      ; 0040322f
        ;   XREF to: 00403221 (CONDITIONAL_JUMP)  ; LAB_00403221
    LEA EAX,[EAX]                       ; 00403231
    LEA EDX,[EDX]                       ; 00403237
    LEA EAX,[EAX]                       ; 0040323d
    MOV EAX,dword ptr [ESP]             ; 00403240
        ;   Label: LAB_00403240
    MOV [0x01c35e60],EAX                ; 00403243 | DAT_01c35e60
    ADD ESP,0x4                         ; 00403248
        ;   Label: LAB_00403248
    POP EBP                             ; 0040324b
    POP EDI                             ; 0040324c
    POP ESI                             ; 0040324d
    POP EBX                             ; 0040324e
    RET                                 ; 0040324f

