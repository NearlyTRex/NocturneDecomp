; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00575760(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00583f20 at 005845de
;
; Referenced Globals:
;   TerminatedCString s_tommygun_kfm_005ecc66
;   undefined4 DAT_005fce6c
;   undefined4 DAT_005fce74
;
; Called Functions:
;   FUN_0044fd70
;   FUN_005899d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00575760
        ;   Label: FUN_00575760
    MOV EDX,dword ptr [ESP + 0x8]       ; 00575761
    PUSH EDX                            ; 00575765
    CALL FUN_005899d0                   ; 00575766
        ;   XREF to: 005899d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005899d0()
    ADD ESP,0x4                         ; 0057576b
    PUSH 0x5ecc66                       ; 0057576e | = "tommygun.kfm"
    MOV EBX,EAX                         ; 00575773
    ADD EAX,0x2b4                       ; 00575775
    PUSH EAX                            ; 0057577a
    MOV dword ptr [EAX + -0x4],0x5fce74 ; 0057577b | DAT_005fce74
    CALL FUN_0044fd70                   ; 00575782
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    MOV dword ptr [EBX + 0x434],0x0     ; 00575787
    MOV dword ptr [EBX + 0x438],0x0     ; 00575791
    MOV dword ptr [EBX + 0x43c],0x4     ; 0057579b
    MOV dword ptr [EBX + 0x440],0x1     ; 005757a5
    MOV dword ptr [EBX + 0x444],0x42c80000 ; 005757af
    MOV dword ptr [EBX + 0x448],0x1     ; 005757b9
    MOV dword ptr [EBX + 0x6d8],0x0     ; 005757c3
    FLD float ptr [0x005fce6c]          ; 005757cd | DAT_005fce6c
    MOV dword ptr [EBX + 0x6dc],0x0     ; 005757d3
    ADD ESP,0x8                         ; 005757dd
    MOV dword ptr [EBX + 0x6d4],0x0     ; 005757e0
    MOV EAX,EBX                         ; 005757ea
    FSTP float ptr [EBX + 0x6c0]        ; 005757ec
    POP EBX                             ; 005757f2
    RET                                 ; 005757f3

