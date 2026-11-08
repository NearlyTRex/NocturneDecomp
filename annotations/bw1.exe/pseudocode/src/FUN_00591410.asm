; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00591410(int param_1)
;
;
; XREF[1]:
;   FUN_00591120 at 00591144
;
; Referenced Globals:
;   undefined4 DAT_00606084
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00591410
        ;   Label: FUN_00591410
    PUSH ESI                            ; 00591411
    MOV EBX,dword ptr [ESP + 0xc]       ; 00591412
    MOV EDX,dword ptr [EBX + 0x2628]    ; 00591416
    XOR ESI,ESI                         ; 0059141c
    TEST EDX,EDX                        ; 0059141e
    JNZ 0x00591453                      ; 00591420
        ;   XREF to: 00591453 (CONDITIONAL_JUMP)  ; LAB_00591453
    MOV ECX,dword ptr [EBX + 0x20004]   ; 00591422
        ;   Label: LAB_00591422
    TEST ECX,ECX                        ; 00591428
    JZ 0x00591468                       ; 0059142a
        ;   XREF to: 00591468 (CONDITIONAL_JUMP)  ; LAB_00591468
    CMP dword ptr [ECX + 0x2e0],0x3     ; 0059142c
    JNZ 0x00591468                      ; 00591433
        ;   XREF to: 00591468 (CONDITIONAL_JUMP)  ; LAB_00591468
    FLD float ptr [0x00606084]          ; 00591435 | DAT_00606084
        ;   Label: LAB_00591435
    MOV dword ptr [EBX + 0x1ff5c],0x3   ; 0059143b
    MOV EAX,0x1                         ; 00591445
    FSTP float ptr [EBX + 0x1ffbc]      ; 0059144a
    POP ESI                             ; 00591450
    POP EBX                             ; 00591451
    RET                                 ; 00591452
    MOV EAX,EDX                         ; 00591453
        ;   Label: LAB_00591453
    PUSH EAX                            ; 00591455
    MOV EDX,dword ptr [EDX + 0x154]     ; 00591456
    CALL dword ptr [EDX + 0x74]         ; 0059145c
    ADD ESP,0x4                         ; 0059145f
    TEST AL,0x4                         ; 00591462
    JZ 0x00591422                       ; 00591464
        ;   XREF to: 00591422 (CONDITIONAL_JUMP)  ; LAB_00591422
    JMP 0x00591435                      ; 00591466
        ;   XREF to: 00591435 (UNCONDITIONAL_JUMP)  ; LAB_00591435
    TEST ESI,ESI                        ; 00591468
        ;   Label: LAB_00591468
    JNZ 0x00591435                      ; 0059146a
        ;   XREF to: 00591435 (CONDITIONAL_JUMP)  ; LAB_00591435
    XOR EAX,EAX                         ; 0059146c
    POP ESI                             ; 0059146e
    POP EBX                             ; 0059146f
    RET                                 ; 00591470

