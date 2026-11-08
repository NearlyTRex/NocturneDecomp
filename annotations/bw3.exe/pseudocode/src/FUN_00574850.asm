; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00574850(undefined4 *param_1,byte param_2)
;
;
; XREF[5]:
;   FUN_00402940 at 00402a77
;   FUN_00440a70 at 00440b06
;   FUN_0044f750 at 0044fd26
;   FUN_004bda10 at 004bde33
;   FUN_004bdfb0 at 004be3b5
;
; Referenced Globals:
;   undefined4 DAT_005dafb0
;   undefined1* PTR_FUN_005e5b24 = 00574850
;
; Called Functions:
;   FUN_005744a0
;   FUN_005749a0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574850
        ;   Label: FUN_00574850
    MOV EBX,dword ptr [ESP + 0x8]       ; 00574851
    TEST byte ptr [ESP + 0xc],0x4       ; 00574855
    JNZ 0x00574885                      ; 0057485a
        ;   XREF to: 00574885 (CONDITIONAL_JUMP)  ; LAB_00574885
    PUSH EBX                            ; 0057485c
    MOV dword ptr [EBX],0x5e5b24        ; 0057485d | PTR_FUN_005e5b24
    CALL FUN_005749a0                   ; 00574863
        ;   XREF to: 005749a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005749a0()
    ADD ESP,0x4                         ; 00574868
    PUSH 0x1                            ; 0057486b
    PUSH EBX                            ; 0057486d
    CALL FUN_005744a0                   ; 0057486e
        ;   XREF to: 005744a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005744a0()
    ADD ESP,0x8                         ; 00574873
    MOV DL,byte ptr [ESP + 0xc]         ; 00574876
    MOV EBX,EAX                         ; 0057487a
    TEST DL,0x2                         ; 0057487c
    JNZ 0x005748a0                      ; 0057487f
        ;   XREF to: 005748a0 (CONDITIONAL_JUMP)  ; LAB_005748a0
    MOV EAX,EBX                         ; 00574881
    POP EBX                             ; 00574883
    RET                                 ; 00574884
    PUSH 0x5dafb0                       ; 00574885 | DAT_005dafb0
        ;   Label: LAB_00574885
    PUSH EBX                            ; 0057488a
    CALL FUN_005a308f                   ; 0057488b
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00574890
    PUSH EAX                            ; 00574893
    CALL FUN_005a30b6                   ; 00574894
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00574899
    MOV EAX,EBX                         ; 0057489c
    POP EBX                             ; 0057489e
    RET                                 ; 0057489f
    PUSH EAX                            ; 005748a0
        ;   Label: LAB_005748a0
    CALL FUN_005a30c4                   ; 005748a1
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 005748a6
    MOV EAX,EBX                         ; 005748a9
    POP EBX                             ; 005748ab
    RET                                 ; 005748ac

