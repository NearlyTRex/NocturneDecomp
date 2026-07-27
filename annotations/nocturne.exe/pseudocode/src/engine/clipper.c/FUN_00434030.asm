; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_clipper_c_FUN_00434030(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* switchdataD_00434018 = 00434098
;   undefined1* PTR_caseD_1_0043401c = 004340e2
;   undefined1* PTR_caseD_3_00434024 = 004340c2
;   string caseD_0
;   undefined4 caseD_3
;   undefined4 caseD_1
;   string caseD_2
;   undefined4 DAT_00767b48
;   undefined4 DAT_00768d4c
;   undefined4 DAT_00768d50
;   undefined4 DAT_00768d54
;   undefined4 DAT_00768d80
;   undefined4 DAT_00768d84
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434030
        ;   Label: engine_clipper.c_FUN_00434030
    PUSH ESI                            ; 00434031
    PUSH EDI                            ; 00434032
    PUSH EBP                            ; 00434033
    SUB ESP,0x4                         ; 00434034
    XOR EDX,EDX                         ; 00434037
    MOV ECX,dword ptr [0x00767b48]      ; 00434039 | DAT_00767b48
    MOV dword ptr [ESP],EDX             ; 0043403f
    TEST ECX,ECX                        ; 00434042
    JLE 0x004340da                      ; 00434044
        ;   XREF to: 004340da (CONDITIONAL_JUMP)  ; LAB_004340da
    MOV EBX,0x768d4c                    ; 0043404a | DAT_00768d4c
    MOV EAX,dword ptr [ESP]             ; 0043404f
        ;   Label: LAB_0043404f
    MOV EBP,dword ptr [0x00767b48]      ; 00434052 | DAT_00767b48
    INC EAX                             ; 00434058
    CMP EAX,EBP                         ; 00434059
    JNZ 0x0043405f                      ; 0043405b
        ;   XREF to: 0043405f (CONDITIONAL_JUMP)  ; LAB_0043405f
    XOR EAX,EBP                         ; 0043405d
    IMUL EAX,EAX,0x30                   ; 0043405f
        ;   Label: LAB_0043405f
    MOV EBP,0x768d4c                    ; 00434062 | DAT_00768d4c
    MOV EDX,EBX                         ; 00434067
    MOV EDI,dword ptr [EBX + 0x8]       ; 00434069 | DAT_00768d54 | DAT_00768d84
    MOV ECX,dword ptr [EBX + 0x4]       ; 0043406c | DAT_00768d50 | DAT_00768d80
    NEG EDI                             ; 0043406f
    ADD EBP,EAX                         ; 00434071
    XOR EAX,EAX                         ; 00434073
    CMP EDI,ECX                         ; 00434075
    JL 0x0043407e                       ; 00434077
        ;   XREF to: 0043407e (CONDITIONAL_JUMP)  ; LAB_0043407e
    MOV EAX,0x1                         ; 00434079
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043407e | DAT_00768d54
        ;   Label: LAB_0043407e
    MOV ESI,dword ptr [EBP + 0x4]       ; 00434081 | DAT_00768d50
    NEG EDI                             ; 00434084
    CMP EDI,ESI                         ; 00434086
    JL 0x0043408c                       ; 00434088
        ;   XREF to: 0043408c (CONDITIONAL_JUMP)  ; LAB_0043408c
    OR AL,0x2                           ; 0043408a
    CMP EAX,0x3                         ; 0043408c
        ;   Label: LAB_0043408c
    JA 0x004340c2                       ; 0043408f
        ;   XREF to: 004340c2 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x434018]  ; 00434091 | = "k=plv" | caseD_1 | caseD_2
        ;   Label: switchD

