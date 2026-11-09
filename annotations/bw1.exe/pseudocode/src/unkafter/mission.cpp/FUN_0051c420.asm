; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_mission_cpp_FUN_0051c420(undefined4 param_1,char *param_2)
;
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00544460 at 0054953f
;
; Referenced Globals:
;   undefined4 DAT_01d33b88
;   undefined4 DAT_01d33b89
;   undefined4 DAT_01d33b8a
;   undefined4 DAT_01d33b8b
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0051c420
        ;   Label: unkafter_mission.cpp_FUN_0051c420
    PUSH EDI                            ; 0051c421
    MOV ESI,dword ptr [ESP + 0x10]      ; 0051c422
    MOV EDI,0x1d33b88                   ; 0051c426
    PUSH EDI                            ; 0051c42b | DAT_01d33b88
    MOV AL,byte ptr [ESI]               ; 0051c42c
        ;   Label: LAB_0051c42c
    MOV byte ptr [EDI],AL               ; 0051c42e | DAT_01d33b88 | DAT_01d33b8a
    CMP AL,0x0                          ; 0051c430
    JZ 0x0051c444                       ; 0051c432
        ;   XREF to: 0051c444 (CONDITIONAL_JUMP)  ; LAB_0051c444
    MOV AL,byte ptr [ESI + 0x1]         ; 0051c434
    ADD ESI,0x2                         ; 0051c437
    MOV byte ptr [EDI + 0x1],AL         ; 0051c43a | DAT_01d33b89 | DAT_01d33b8b
    ADD EDI,0x2                         ; 0051c43d
    CMP AL,0x0                          ; 0051c440
    JNZ 0x0051c42c                      ; 0051c442
        ;   XREF to: 0051c42c (CONDITIONAL_JUMP)  ; LAB_0051c42c
    POP EDI                             ; 0051c444
        ;   Label: LAB_0051c444
    POP EDI                             ; 0051c445
    POP ESI                             ; 0051c446
    RET                                 ; 0051c447

