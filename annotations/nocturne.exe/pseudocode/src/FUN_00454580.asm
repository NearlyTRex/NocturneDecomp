; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00454580(int param_1,char *param_2)
;
;
; XREF[17]:
;   FUN_0040ca00 at 0040ca31
;   FUN_0040eb70 at 0040ebaa
;   FUN_0040ed80 at 0040edf4
;   FUN_00417ac0 at 00417b15
;   FUN_0041e300 at 0041e3d7
;   FUN_0041f6e0 at 0041f72e
;   FUN_00424260 at 00424294
;   FUN_00483290 at 0048329a
;   FUN_00483ff0 at 00483ffa
;   FUN_004850b0 at 004850ba
;   ... and 7 more
;
; Called Functions:
;   FUN_004544b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00454580
        ;   Label: FUN_00454580
    PUSH EDI                            ; 00454581
    MOV EDX,dword ptr [ESP + 0xc]       ; 00454582
    MOV ESI,dword ptr [ESP + 0x10]      ; 00454586
    LEA EDI,[EDX + 0x78]                ; 0045458a
    PUSH EDI                            ; 0045458d
    MOV AL,byte ptr [ESI]               ; 0045458e
        ;   Label: LAB_0045458e
    MOV byte ptr [EDI],AL               ; 00454590
    CMP AL,0x0                          ; 00454592
    JZ 0x004545a6                       ; 00454594
        ;   XREF to: 004545a6 (CONDITIONAL_JUMP)  ; LAB_004545a6
    MOV AL,byte ptr [ESI + 0x1]         ; 00454596
    ADD ESI,0x2                         ; 00454599
    MOV byte ptr [EDI + 0x1],AL         ; 0045459c
    ADD EDI,0x2                         ; 0045459f
    CMP AL,0x0                          ; 004545a2
    JNZ 0x0045458e                      ; 004545a4
        ;   XREF to: 0045458e (CONDITIONAL_JUMP)  ; LAB_0045458e
    POP EDI                             ; 004545a6
        ;   Label: LAB_004545a6
    PUSH EDX                            ; 004545a7
    MOV dword ptr [EDX + 0x178],0x0     ; 004545a8
    CALL FUN_004544b0                   ; 004545b2
        ;   XREF to: 004544b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004544b0()
    ADD ESP,0x4                         ; 004545b7
    POP EDI                             ; 004545ba
    POP ESI                             ; 004545bb
    RET                                 ; 004545bc

