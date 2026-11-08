; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004859a0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f5dec
;
; Called Functions:
;   FUN_0044fd70
;   FUN_005899d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004859a0
        ;   Label: FUN_004859a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004859a1
    PUSH EDX                            ; 004859a5
    CALL FUN_005899d0                   ; 004859a6
        ;   XREF to: 005899d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005899d0()
    ADD ESP,0x4                         ; 004859ab
    PUSH 0x5d2b13                       ; 004859ae
    MOV EBX,EAX                         ; 004859b3
    ADD EAX,0x2b4                       ; 004859b5
    PUSH EAX                            ; 004859ba
    MOV dword ptr [EAX + -0x4],0x5f5df4 ; 004859bb
    CALL FUN_0044fd70                   ; 004859c2
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    MOV dword ptr [EBX + 0x6d4],0x41200000 ; 004859c7
    MOV dword ptr [EBX + 0x434],0x1     ; 004859d1
    MOV dword ptr [EBX + 0x438],0x2     ; 004859db
    MOV dword ptr [EBX + 0x43c],0x1     ; 004859e5
    MOV dword ptr [EBX + 0x440],0x1     ; 004859ef
    MOV dword ptr [EBX + 0x444],0x41700000 ; 004859f9
    FLD float ptr [0x005f5dec]          ; 00485a03 | DAT_005f5dec
    MOV dword ptr [EBX + 0x448],0x0     ; 00485a09
    ADD ESP,0x8                         ; 00485a13
    MOV dword ptr [EBX + 0x6d8],0x0     ; 00485a16
    MOV EAX,EBX                         ; 00485a20
    FSTP float ptr [EBX + 0x6c0]        ; 00485a22
    POP EBX                             ; 00485a28
    RET                                 ; 00485a29

