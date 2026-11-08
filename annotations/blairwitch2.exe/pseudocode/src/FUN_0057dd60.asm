; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0057dd60(int param_1)
;
;
; XREF[4]:
;   FUN_00402940 at 00402a61
;   FUN_004bb9b0 at 004bbd74
;   FUN_004bbf70 at 004bc2dc
;   FUN_0057dc10 at 0057dc23
;
; Called Functions:
;   FUN_005b89c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057dd60
        ;   Label: FUN_0057dd60
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057dd61
    MOV EDX,dword ptr [EBX + 0x4]       ; 0057dd65
    TEST EDX,EDX                        ; 0057dd68
    JNZ 0x0057dd73                      ; 0057dd6a
        ;   XREF to: 0057dd73 (CONDITIONAL_JUMP)  ; LAB_0057dd73
    MOV EAX,0x1                         ; 0057dd6c
    POP EBX                             ; 0057dd71
    RET                                 ; 0057dd72
    PUSH EDX                            ; 0057dd73
        ;   Label: LAB_0057dd73
    CALL FUN_005b89c0                   ; 0057dd74
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b89c0()
    ADD ESP,0x4                         ; 0057dd79
    MOV dword ptr [EBX + 0x4],0x0       ; 0057dd7c
    MOV EAX,0x1                         ; 0057dd83
    POP EBX                             ; 0057dd88
    RET                                 ; 0057dd89

