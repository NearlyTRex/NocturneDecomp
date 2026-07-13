; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00545b90(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0054eae0 at 0054f09f
;
; Referenced Globals:
;   string s_tommygun.kfm_0059688b
;   undefined4 DAT_005a32dc
;   undefined1* PTR_FUN_005a32e4 = 00553f10
;
; Called Functions:
;   FUN_00454580
;   FUN_00553d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545b90
        ;   Label: FUN_00545b90
    MOV EDX,dword ptr [ESP + 0x8]       ; 00545b91
    PUSH EDX                            ; 00545b95
    CALL FUN_00553d90                   ; 00545b96
        ;   XREF to: 00553d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00553d90()
    ADD ESP,0x4                         ; 00545b9b
    PUSH 0x59688b                       ; 00545b9e | = "tommygun.kfm"
    MOV EBX,EAX                         ; 00545ba3
    ADD EAX,0x150                       ; 00545ba5
    PUSH EAX                            ; 00545baa
    MOV dword ptr [EAX + -0x4],0x5a32e4 ; 00545bab | PTR_FUN_005a32e4
    CALL FUN_00454580                   ; 00545bb2
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined FUN_00454580()
    MOV dword ptr [EBX + 0x2d0],0x0     ; 00545bb7
    MOV dword ptr [EBX + 0x2d4],0x0     ; 00545bc1
    MOV dword ptr [EBX + 0x2d8],0x4     ; 00545bcb
    MOV dword ptr [EBX + 0x2dc],0x1     ; 00545bd5
    MOV dword ptr [EBX + 0x2e0],0x42c80000 ; 00545bdf
    MOV dword ptr [EBX + 0x2e4],0x1     ; 00545be9
    MOV dword ptr [EBX + 0x574],0x0     ; 00545bf3
    FLD float ptr [0x005a32dc]          ; 00545bfd | DAT_005a32dc
    MOV dword ptr [EBX + 0x578],0x0     ; 00545c03
    ADD ESP,0x8                         ; 00545c0d
    MOV dword ptr [EBX + 0x570],0x0     ; 00545c10
    MOV EAX,EBX                         ; 00545c1a
    FSTP float ptr [EBX + 0x55c]        ; 00545c1c
    POP EBX                             ; 00545c22
    RET                                 ; 00545c23

