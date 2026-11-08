; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00591860(undefined4 *param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
;
; XREF[2]:
;   FUN_00455d10 at 004560d2
;   FUN_004568e0 at 004574d5
;
; Called Functions:
;   FUN_005916b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00591860
        ;   Label: FUN_00591860
    PUSH ESI                            ; 00591861
    PUSH EDI                            ; 00591862
    SUB ESP,0x30                        ; 00591863
    MOV EBX,dword ptr [ESP + 0x40]      ; 00591866
    MOV EDX,dword ptr [ESP + 0x44]      ; 0059186a
    PUSH EDX                            ; 0059186e
    PUSH EBX                            ; 0059186f
    LEA ESI,[ESP + 0x8]                 ; 00591870
    MOV EDI,EBX                         ; 00591874
    CALL FUN_005916b0                   ; 00591876
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005916b0()
    MOV ECX,0xc                         ; 0059187b
    LEA ESI,[ESP + 0x8]                 ; 00591880
    ADD ESP,0x8                         ; 00591884
    MOV EAX,EBX                         ; 00591887
    MOVSD.REP ES:EDI,ESI                ; 00591889
    ADD ESP,0x30                        ; 0059188b
    POP EDI                             ; 0059188e
    POP ESI                             ; 0059188f
    POP EBX                             ; 00591890
    RET                                 ; 00591891

