; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040c980(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[34]:
;   FUN_00416570 at 00416709
;   FUN_00419ce0 at 00419e90
;   FUN_0041ec60 at 0041ed1f
;   FUN_004244b0 at 00424592
;   FUN_0042cbc0 at 0042cc02
;   FUN_0043cc50 at 0043cc8b
;   FUN_0044bb10 at 0044bb5d
;   FUN_0045a450 at 0045a5ff
;   FUN_004791a0 at 0047931a
;   FUN_004796c0 at 0047978f
;   ... and 24 more
;
; Referenced Globals:
;   undefined4 DAT_00577c89
;   undefined1 DAT_005acc90
;   undefined4 DAT_005baf90
;   undefined4 DAT_00763e84
;   undefined4 DAT_00763e88
;   undefined4 DAT_00763e8c
;   undefined4 DAT_01cc9450
;
; Called Functions:
;   FUN_004d8aa0
;   FUN_004d8c00
;   FUN_005644f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c980
        ;   Label: FUN_0040c980
    PUSH ESI                            ; 0040c981
    PUSH EBP                            ; 0040c982
    CMP dword ptr [0x00763e88],0x1      ; 0040c983 | DAT_00763e88
    JNZ 0x0040c9b8                      ; 0040c98a
        ;   XREF to: 0040c9b8 (CONDITIONAL_JUMP)  ; LAB_0040c9b8
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040c98c
    PUSH EDX                            ; 0040c990
    MOV ECX,dword ptr [0x00763e8c]      ; 0040c991 | DAT_00763e8c
    PUSH ECX                            ; 0040c997
    MOV EBX,dword ptr [0x00763e84]      ; 0040c998 | DAT_00763e84
    PUSH EBX                            ; 0040c99e
    MOV ESI,dword ptr [0x005baf90]      ; 0040c99f | DAT_005baf90
    PUSH ESI                            ; 0040c9a5 | DAT_01cc9450
    CALL FUN_004d8aa0                   ; 0040c9a6
        ;   XREF to: 004d8aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8aa0()
    ADD ESP,0x10                        ; 0040c9ab
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040c9ae
    MOV dword ptr [EDX],EAX             ; 0040c9b2
    POP EBP                             ; 0040c9b4
    POP ESI                             ; 0040c9b5
    POP EBX                             ; 0040c9b6
    RET                                 ; 0040c9b7
    PUSH EDI                            ; 0040c9b8
        ;   Label: LAB_0040c9b8
    PUSH 0x5acc90                       ; 0040c9b9 | DAT_005acc90
    PUSH 0x577c89                       ; 0040c9be | DAT_00577c89
    MOV ECX,dword ptr [0x00763e84]      ; 0040c9c3 | DAT_00763e84
    PUSH ECX                            ; 0040c9c9
    CALL FUN_005644f0                   ; 0040c9ca
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005644f0()
    ADD ESP,0xc                         ; 0040c9cf
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040c9d2
    PUSH EBX                            ; 0040c9d6
    MOV ESI,dword ptr [0x00763e8c]      ; 0040c9d7 | DAT_00763e8c
    PUSH ESI                            ; 0040c9dd
    MOV EDI,dword ptr [0x00763e84]      ; 0040c9de | DAT_00763e84
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0040c9e4
    PUSH EDI                            ; 0040c9e8
    MOV EBP,dword ptr [EAX]             ; 0040c9e9
    PUSH EBP                            ; 0040c9eb
    MOV EAX,[0x005baf90]                ; 0040c9ec | DAT_005baf90
    PUSH EAX                            ; 0040c9f1 | DAT_01cc9450
    CALL FUN_004d8c00                   ; 0040c9f2
        ;   XREF to: 004d8c00 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c00()
    ADD ESP,0x14                        ; 0040c9f7
    POP EDI                             ; 0040c9fa
    POP EBP                             ; 0040c9fb
    POP ESI                             ; 0040c9fc
    POP EBX                             ; 0040c9fd
    RET                                 ; 0040c9fe

