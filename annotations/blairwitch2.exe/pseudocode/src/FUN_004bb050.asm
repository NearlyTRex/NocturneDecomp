; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bb050(void)
;
;
; XREF[1]:
;   FUN_004b6170 at 004b64cb
;
; Referenced Globals:
;   undefined4 DAT_00614d30
;   undefined4 DAT_006167e0
;   undefined4 DAT_0061b5a8
;
; Called Functions:
;   FUN_0049d1c0
;   FUN_004c9b00
;   FUN_004da990
;   FUN_005332a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb050
        ;   Label: FUN_004bb050
    MOV EDX,dword ptr [0x0061b5a8]      ; 004bb051 | DAT_0061b5a8
    PUSH EDX                            ; 004bb057
    CALL FUN_005332a0                   ; 004bb058
        ;   XREF to: 005332a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005332a0()
    ADD ESP,0x4                         ; 004bb05d
    MOV ECX,dword ptr [0x00614d30]      ; 004bb060 | DAT_00614d30
    PUSH ECX                            ; 004bb066
    CALL FUN_0049d1c0                   ; 004bb067
        ;   XREF to: 0049d1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d1c0()
    ADD ESP,0x4                         ; 004bb06c
    MOV EBX,dword ptr [0x006167e0]      ; 004bb06f | DAT_006167e0
    PUSH EBX                            ; 004bb075
    CALL FUN_004c9b00                   ; 004bb076
        ;   XREF to: 004c9b00 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9b00()
    ADD ESP,0x4                         ; 004bb07b
    CALL FUN_004da990                   ; 004bb07e
        ;   XREF to: 004da990 (UNCONDITIONAL_CALL)  ; undefined FUN_004da990()
    POP EBX                             ; 004bb083
    RET                                 ; 004bb084

