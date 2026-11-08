; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cff50(int param_1,undefined4 param_2)
;
;
; XREF[3]:
;   FUN_00453250 at 004535ec
;   FUN_004af410 at 004af53d
;   FUN_005656f0 at 00565983
;
; Called Functions:
;   FUN_00428b10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cff50
        ;   Label: FUN_004cff50
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cff51
    MOV EDX,dword ptr [EBX + 0x25608]   ; 004cff55
    TEST EDX,EDX                        ; 004cff5b
    JNZ 0x004cff61                      ; 004cff5d
        ;   XREF to: 004cff61 (CONDITIONAL_JUMP)  ; LAB_004cff61
    POP EBX                             ; 004cff5f
    RET                                 ; 004cff60
    PUSH ESI                            ; 004cff61
        ;   Label: LAB_004cff61
    PUSH 0x0                            ; 004cff62
    PUSH 0x3dcccccd                     ; 004cff64
    PUSH EDX                            ; 004cff69
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004cff6a
    PUSH ESI                            ; 004cff6e
    PUSH EBX                            ; 004cff6f
    CALL FUN_00428b10                   ; 004cff70
        ;   XREF to: 00428b10 (UNCONDITIONAL_CALL)  ; undefined FUN_00428b10()
    ADD ESP,0x14                        ; 004cff75
    MOV dword ptr [EBX + 0x25608],0x0   ; 004cff78
    POP ESI                             ; 004cff82
    POP EBX                             ; 004cff83
    RET                                 ; 004cff84

