; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004689b0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01b687f8
;   undefined4 DAT_01b687fc
;   undefined4 DAT_01b68800
;   undefined4 DAT_01b68804
;   undefined4 DAT_01b68808
;   undefined4 DAT_01b6880c
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004689b0
        ;   Label: FUN_004689b0
    PUSH ESI                            ; 004689b1
    PUSH EDI                            ; 004689b2
    PUSH EBP                            ; 004689b3
    PUSH 0x1d06ad8                      ; 004689b4
    MOV EDX,0x3f012dba                  ; 004689b9
    MOV ECX,0xbd86832f                  ; 004689be
    PUSH 0x9                            ; 004689c3
    MOV EBX,0x3dad1c2d                  ; 004689c5
    MOV ESI,0xbf05e354                  ; 004689ca
    PUSH 0x6124cc                       ; 004689cf
    MOV EDI,0x3d656042                  ; 004689d4
    MOV EBP,0x3e010625                  ; 004689d9
    PUSH 0x468c50                       ; 004689de
    MOV dword ptr [0x01b687f8],EDX      ; 004689e3 | DAT_01b687f8
    MOV dword ptr [0x01b687fc],ECX      ; 004689e9 | DAT_01b687fc
    PUSH 0x5d987c                       ; 004689ef
    MOV dword ptr [0x01b68800],EBX      ; 004689f4 | DAT_01b68800
    MOV dword ptr [0x01b68804],ESI      ; 004689fa | DAT_01b68804
    PUSH 0x1b68870                      ; 00468a00
    MOV dword ptr [0x01b68808],EDI      ; 00468a05 | DAT_01b68808
    MOV dword ptr [0x01b6880c],EBP      ; 00468a0b | DAT_01b6880c
    CALL FUN_0040c160                   ; 00468a11
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 00468a16
    POP EBP                             ; 00468a19
    POP EDI                             ; 00468a1a
    POP ESI                             ; 00468a1b
    POP EBX                             ; 00468a1c
    RET                                 ; 00468a1d

