; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057cd50(undefined4 param_1)
;
;
; XREF[13]:
;   FUN_00401010 at 004010a7
;   FUN_00401590 at 00401596
;   FUN_00402940 at 00402954
;   FUN_0042c520 at 0042c549
;   FUN_0042c780 at 0042c79f
;   FUN_004a7d00 at 004a7e7d
;   FUN_004bb9b0 at 004bbc60
;   FUN_004bbf70 at 004bc1da
;   FUN_0054bac0 at 0054bbc7
;   FUN_0054c1c0 at 0054c30f
;   ... and 3 more
;
; Referenced Globals:
;   undefined1* PTR_FUN_005fd3e4 = 0057cec0
;
; Called Functions:
;   FUN_0057b9c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057cd50
        ;   Label: FUN_0057cd50
    PUSH EDX                            ; 0057cd54
    CALL FUN_0057b9c0                   ; 0057cd55
        ;   XREF to: 0057b9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057b9c0()
    MOV dword ptr [EAX],0x5fd3e4        ; 0057cd5a | PTR_FUN_005fd3e4
    MOV dword ptr [EAX + 0x4],0x0       ; 0057cd60
    MOV dword ptr [EAX + 0x8],0x0       ; 0057cd67
    MOV dword ptr [EAX + 0xc],0x0       ; 0057cd6e
    MOV dword ptr [EAX + 0x10],0x0      ; 0057cd75
    MOV dword ptr [EAX + 0x14],0x0      ; 0057cd7c
    MOV dword ptr [EAX + 0x18],0x0      ; 0057cd83
    MOV dword ptr [EAX + 0x1c],0x0      ; 0057cd8a
    MOV dword ptr [EAX + 0x20],0x0      ; 0057cd91
    ADD ESP,0x4                         ; 0057cd98
    MOV dword ptr [EAX + 0x24],0x0      ; 0057cd9b
    RET                                 ; 0057cda2

