; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047bcf0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0047bd50 at 0047be97
;
; Referenced Globals:
;   undefined4 DAT_005fb140
;   undefined4 DAT_006074b8
;
; Called Functions:
;   FUN_0047baf0
;   FUN_0047bb10
;   FUN_00480db0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047bcf0
        ;   Label: FUN_0047bcf0
    PUSH ESI                            ; 0047bcf1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0047bcf2
    MOV EDX,dword ptr [0x005fb140]      ; 0047bcf6 | DAT_005fb140
    PUSH EDX                            ; 0047bcfc
    CALL FUN_00480db0                   ; 0047bcfd
        ;   XREF to: 00480db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00480db0()
    ADD ESP,0x4                         ; 0047bd02
    MOV EBX,EAX                         ; 0047bd05
    XOR EAX,EAX                         ; 0047bd07
        ;   Label: LAB_0047bd07
    MOV AL,byte ptr [EBX]               ; 0047bd09
    TEST EAX,EAX                        ; 0047bd0b
    JLE 0x0047bd3d                      ; 0047bd0d
        ;   XREF to: 0047bd3d (CONDITIONAL_JUMP)  ; LAB_0047bd3d
    MOV DL,AL                           ; 0047bd0f
    INC DL                              ; 0047bd11
    AND EDX,0xff                        ; 0047bd13
    TEST byte ptr [EDX + 0x6074b8],0x8  ; 0047bd19 | DAT_006074b8
    JNZ 0x0047bd25                      ; 0047bd20
        ;   XREF to: 0047bd25 (CONDITIONAL_JUMP)  ; LAB_0047bd25
    INC EBX                             ; 0047bd22
        ;   Label: LAB_0047bd22
    JMP 0x0047bd07                      ; 0047bd23
        ;   XREF to: 0047bd07 (UNCONDITIONAL_JUMP)  ; LAB_0047bd07
    CMP EAX,0x9                         ; 0047bd25
        ;   Label: LAB_0047bd25
    JNZ 0x0047bd2f                      ; 0047bd28
        ;   XREF to: 0047bd2f (CONDITIONAL_JUMP)  ; LAB_0047bd2f
    MOV EAX,0x20                        ; 0047bd2a
    PUSH 0x1                            ; 0047bd2f
        ;   Label: LAB_0047bd2f
    PUSH EAX                            ; 0047bd31
    PUSH ESI                            ; 0047bd32
    CALL FUN_0047bb10                   ; 0047bd33
        ;   XREF to: 0047bb10 (UNCONDITIONAL_CALL)  ; undefined FUN_0047bb10()
    ADD ESP,0xc                         ; 0047bd38
    JMP 0x0047bd22                      ; 0047bd3b
        ;   XREF to: 0047bd22 (UNCONDITIONAL_JUMP)  ; LAB_0047bd22
    PUSH ESI                            ; 0047bd3d
        ;   Label: LAB_0047bd3d
    CALL FUN_0047baf0                   ; 0047bd3e
        ;   XREF to: 0047baf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047baf0()
    ADD ESP,0x4                         ; 0047bd43
    POP ESI                             ; 0047bd46
    POP EBX                             ; 0047bd47
    RET                                 ; 0047bd48

