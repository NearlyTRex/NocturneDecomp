; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00409f20(int param_1)
;
;
; XREF[10]:
;   FUN_00426440 at 00426470
;   FUN_00426510 at 00426527
;   FUN_0043f330 at 0043f33a
;   FUN_00482f50 at 00482f6a
;   FUN_0048d5d0 at 0048d614
;   FUN_004ac7c0 at 004ac7c9
;   FUN_004d5860 at 004d5889
;   FUN_0050e210 at 0050e265
;   FUN_005125a0 at 00513033
;   FUN_00553f50 at 00553f5a
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   FUN_00460a00
;   FUN_00460aa0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00409f20
        ;   Label: FUN_00409f20
    ADD EAX,0x20                        ; 00409f24
    PUSH EAX                            ; 00409f27
    MOV EDX,dword ptr [0x005ae704]      ; 00409f28 | DAT_005ae704
    PUSH EDX                            ; 00409f2e | DAT_01b4d738
    CALL FUN_00460a00                   ; 00409f2f
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00460a00()
    ADD ESP,0x8                         ; 00409f34
    MOV EAX,dword ptr [ESP + 0x4]       ; 00409f37
    PUSH 0x0                            ; 00409f3b
    ADD EAX,0x30                        ; 00409f3d
    PUSH EAX                            ; 00409f40
    MOV ECX,dword ptr [0x005ae704]      ; 00409f41 | DAT_005ae704
    PUSH ECX                            ; 00409f47 | DAT_01b4d738
    CALL FUN_00460aa0                   ; 00409f48
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00460aa0()
    ADD ESP,0xc                         ; 00409f4d
    RET                                 ; 00409f50

