; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00503a30(void)
;
;
; XREF[1]:
;   FUN_005b2e00 at 005b3057
;
; Referenced Globals:
;   undefined4 DAT_0061f650
;   undefined4 DAT_00622580
;   undefined4 DAT_00622700
;   undefined4 DAT_00622a6c
;   undefined4 DAT_006236b8
;   undefined4 DAT_01d2c900
;
; Called Functions:
;   FUN_00415c20
;   FUN_0045e7a0
;   FUN_00468830
;   FUN_004f5760
;   FUN_00507340
;   FUN_0051a3a0
;   FUN_0052c5d0
;   FUN_005313a0
;   FUN_0053c8f0
;   FUN_0056b610
;   FUN_0056b740
;   FUN_005b2410
;   FUN_005b3b10
;   thunk_FUN_00574ea0
;   thunk_FUN_005979d0
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503a30
        ;   Label: FUN_00503a30
    PUSH ESI                            ; 00503a31
    PUSH EDI                            ; 00503a32
    CALL FUN_00415c20                   ; 00503a33
        ;   XREF to: 00415c20 (UNCONDITIONAL_CALL)  ; undefined FUN_00415c20()
    MOV EDX,dword ptr [0x00622580]      ; 00503a38 | DAT_00622580
    PUSH EDX                            ; 00503a3e
    CALL FUN_0052c5d0                   ; 00503a3f
        ;   XREF to: 0052c5d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052c5d0()
    ADD ESP,0x4                         ; 00503a44
    MOV ECX,dword ptr [0x00622700]      ; 00503a47 | DAT_00622700
    PUSH ECX                            ; 00503a4d
    CALL FUN_005313a0                   ; 00503a4e
        ;   XREF to: 005313a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005313a0()
    ADD ESP,0x4                         ; 00503a53
    MOV EBX,dword ptr [0x0061f650]      ; 00503a56 | DAT_0061f650
    PUSH EBX                            ; 00503a5c | DAT_01d2c900
    CALL FUN_0051a3a0                   ; 00503a5d
        ;   XREF to: 0051a3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051a3a0()
    ADD ESP,0x4                         ; 00503a62
    MOV ESI,dword ptr [0x006236b8]      ; 00503a65 | DAT_006236b8
    PUSH ESI                            ; 00503a6b
    CALL thunk_FUN_00574ea0             ; 00503a6c
        ;   XREF to: 0057cb90 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_00574ea0()
    ADD ESP,0x4                         ; 00503a71
    CALL FUN_00468830                   ; 00503a74
        ;   XREF to: 00468830 (UNCONDITIONAL_CALL)  ; undefined FUN_00468830()
    CALL FUN_0056b610                   ; 00503a79
        ;   XREF to: 0056b610 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b610()
    CALL FUN_0056b740                   ; 00503a7e
        ;   XREF to: 0056b740 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b740()
    CALL FUN_00507340                   ; 00503a83
        ;   XREF to: 00507340 (UNCONDITIONAL_CALL)  ; undefined FUN_00507340()
    CALL FUN_005b2410                   ; 00503a88
        ;   XREF to: 005b2410 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2410()
    CALL thunk_FUN_005ac1b0             ; 00503a8d
        ;   XREF to: 00401120 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005ac1b0()
    CALL thunk_FUN_005979d0             ; 00503a92
        ;   XREF to: 004037a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005979d0()
    CALL FUN_0045e7a0                   ; 00503a97
        ;   XREF to: 0045e7a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045e7a0()
    CALL FUN_005b3b10                   ; 00503a9c
        ;   XREF to: 005b3b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005b3b10()
    MOV EDI,dword ptr [0x00622a6c]      ; 00503aa1 | DAT_00622a6c
    PUSH EDI                            ; 00503aa7
    CALL FUN_0053c8f0                   ; 00503aa8
        ;   XREF to: 0053c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053c8f0()
    ADD ESP,0x4                         ; 00503aad
    CALL FUN_004f5760                   ; 00503ab0
        ;   XREF to: 004f5760 (UNCONDITIONAL_CALL)  ; undefined FUN_004f5760()
    POP EDI                             ; 00503ab5
    POP ESI                             ; 00503ab6
    POP EBX                             ; 00503ab7
    RET                                 ; 00503ab8

