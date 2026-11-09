; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_mission_cpp_FUN_004fd460(undefined4 param_1,char *param_2)
;
;
; XREF[1]:
;   core_script.cpp_FUN_00522350 at 00528251
;
; Referenced Globals:
;   undefined4 DAT_01d1c698
;   undefined4 DAT_01d1c699
;   undefined4 DAT_01d1c69a
;   undefined4 DAT_01d1c69b
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004fd460
        ;   Label: unkafter_mission.cpp_FUN_004fd460
    PUSH EDI                            ; 004fd461
    MOV ESI,dword ptr [ESP + 0x10]      ; 004fd462
    MOV EDI,0x1d1c698                   ; 004fd466
    PUSH EDI                            ; 004fd46b | DAT_01d1c698
    MOV AL,byte ptr [ESI]               ; 004fd46c
        ;   Label: LAB_004fd46c
    MOV byte ptr [EDI],AL               ; 004fd46e | DAT_01d1c698 | DAT_01d1c69a
    CMP AL,0x0                          ; 004fd470
    JZ 0x004fd484                       ; 004fd472
        ;   XREF to: 004fd484 (CONDITIONAL_JUMP)  ; LAB_004fd484
    MOV AL,byte ptr [ESI + 0x1]         ; 004fd474
    ADD ESI,0x2                         ; 004fd477
    MOV byte ptr [EDI + 0x1],AL         ; 004fd47a | DAT_01d1c699 | DAT_01d1c69b
    ADD EDI,0x2                         ; 004fd47d
    CMP AL,0x0                          ; 004fd480
    JNZ 0x004fd46c                      ; 004fd482
        ;   XREF to: 004fd46c (CONDITIONAL_JUMP)  ; LAB_004fd46c
    POP EDI                             ; 004fd484
        ;   Label: LAB_004fd484
    POP EDI                             ; 004fd485
    POP ESI                             ; 004fd486
    RET                                 ; 004fd487

