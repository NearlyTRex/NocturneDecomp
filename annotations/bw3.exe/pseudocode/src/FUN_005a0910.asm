; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a0910(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e8640
;
; Called Functions:
;   FUN_00408770
;   FUN_00410370
;   FUN_0043f900
;   FUN_004fa8c0
;   FUN_0054bf80
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0910
        ;   Label: FUN_005a0910
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a0911
    TEST byte ptr [ESP + 0xc],0x4       ; 005a0915
    JNZ 0x005a097d                      ; 005a091a
        ;   XREF to: 005a097d (CONDITIONAL_JUMP)  ; LAB_005a097d
    PUSH 0x0                            ; 005a091c
    ADD EBX,0xd064                      ; 005a091e
    PUSH EBX                            ; 005a0924
    CALL FUN_004fa8c0                   ; 005a0925
        ;   XREF to: 004fa8c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa8c0()
    ADD ESP,0x8                         ; 005a092a
    PUSH 0x0                            ; 005a092d
    SUB EAX,0x9808                      ; 005a092f
    PUSH EAX                            ; 005a0934
    CALL FUN_00410370                   ; 005a0935
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 005a093a
    PUSH 0x0                            ; 005a093d
    SUB EAX,0x954                       ; 005a093f
    PUSH EAX                            ; 005a0944
    CALL FUN_0043f900                   ; 005a0945
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 005a094a
    PUSH 0x0                            ; 005a094d
    SUB EAX,0x2db0                      ; 005a094f
    PUSH EAX                            ; 005a0954
    CALL FUN_0054bf80                   ; 005a0955
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 005a095a
    PUSH 0x1                            ; 005a095d
    LEA EBX,[EAX + 0xfffffea8]          ; 005a095f
    PUSH EBX                            ; 005a0965
    CALL FUN_00408770                   ; 005a0966
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 005a096b
    MOV DL,byte ptr [ESP + 0xc]         ; 005a096e
    MOV EBX,EAX                         ; 005a0972
    TEST DL,0x2                         ; 005a0974
    JNZ 0x005a0998                      ; 005a0977
        ;   XREF to: 005a0998 (CONDITIONAL_JUMP)  ; LAB_005a0998
    MOV EAX,EBX                         ; 005a0979
    POP EBX                             ; 005a097b
    RET                                 ; 005a097c
    PUSH 0x5e8640                       ; 005a097d | DAT_005e8640
        ;   Label: LAB_005a097d
    PUSH EBX                            ; 005a0982
    CALL FUN_005a308f                   ; 005a0983
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 005a0988
    PUSH EAX                            ; 005a098b
    CALL FUN_005a30b6                   ; 005a098c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 005a0991
    MOV EAX,EBX                         ; 005a0994
    POP EBX                             ; 005a0996
    RET                                 ; 005a0997
    PUSH EAX                            ; 005a0998
        ;   Label: LAB_005a0998
    CALL FUN_005a30c4                   ; 005a0999
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 005a099e
    MOV EAX,EBX                         ; 005a09a1
    POP EBX                             ; 005a09a3
    RET                                 ; 005a09a4

