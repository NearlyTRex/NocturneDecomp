; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_10003e40(undefined4 *param_1,uint param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_10003a80 at 10003b8d
;
; Called Functions:
;   FUN_10003a30
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 10003e40
        ;   Label: FUN_10003e40
    PUSH EBX                            ; 10003e43
    PUSH ESI                            ; 10003e44
    MOV EBX,dword ptr [ESP + 0x18]      ; 10003e45
    PUSH EDI                            ; 10003e49
    PUSH EBP                            ; 10003e4a
    PUSH EBX                            ; 10003e4b
    CALL FUN_10003a30                   ; 10003e4c
        ;   XREF to: 10003a30 (UNCONDITIONAL_CALL)  ; undefined FUN_10003a30()
    ADD ESP,0x4                         ; 10003e51
    TEST EBX,EBX                        ; 10003e54
    JLE 0x10003e7f                      ; 10003e56
        ;   XREF to: 10003e7f (CONDITIONAL_JUMP)  ; LAB_10003e7f
    MOV ECX,dword ptr [ESP + 0x1c]      ; 10003e58
    MOV EDX,EBX                         ; 10003e5c
    AND ECX,0xfffffffc                  ; 10003e5e
    MOV EBP,dword ptr [ESP + 0x18]      ; 10003e61
    MOV dword ptr [ESP + 0x10],ECX      ; 10003e65
    TEST EBX,EBX                        ; 10003e69
        ;   Label: LAB_10003e69
    JLE 0x10003e78                      ; 10003e6b
        ;   XREF to: 10003e78 (CONDITIONAL_JUMP)  ; LAB_10003e78
    MOV EDI,EBP                         ; 10003e6d
    MOV ESI,EAX                         ; 10003e6f
    MOV ECX,EBX                         ; 10003e71
    MOVSD.REP ES:EDI,ESI                ; 10003e73
    LEA EAX,[EAX + EBX*0x4]             ; 10003e75
    ADD EBP,dword ptr [ESP + 0x10]      ; 10003e78
        ;   Label: LAB_10003e78
    DEC EDX                             ; 10003e7c
    JNZ 0x10003e69                      ; 10003e7d
        ;   XREF to: 10003e69 (CONDITIONAL_JUMP)  ; LAB_10003e69
    POP EBP                             ; 10003e7f
        ;   Label: LAB_10003e7f
    POP EDI                             ; 10003e80
    POP ESI                             ; 10003e81
    POP EBX                             ; 10003e82
    ADD ESP,0x4                         ; 10003e83
    RET                                 ; 10003e86

