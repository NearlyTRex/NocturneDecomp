; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040d910(int param_1)
;
;
; XREF[3]:
;   FUN_0040d4b0 at 0040d4f0
;   FUN_0040d660 at 0040d70a
;   FUN_0040d9a0 at 0040d9ac
;
; Referenced Globals:
;   undefined4 DAT_01c4e3d4
;   undefined4 DAT_01c4e3d8
;   undefined4 DAT_01c4e3d9
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040d910
        ;   Label: FUN_0040d910
    PUSH EDI                            ; 0040d911
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040d912
    MOV ECX,0x400                       ; 0040d916
    MOV EDI,0x1c4e3d4                   ; 0040d91b
    MOV ESI,dword ptr [ESI + 0x8]       ; 0040d920
    PUSH EDI                            ; 0040d923
    MOV EAX,ECX                         ; 0040d924
    SHR ECX,0x2                         ; 0040d926
    MOVSD.REP ES:EDI,ESI                ; 0040d929 | DAT_01c4e3d4 | DAT_01c4e3d8
    MOV CL,AL                           ; 0040d92b
    AND CL,0x3                          ; 0040d92d
    MOVSB.REP ES:EDI,ESI                ; 0040d930 | DAT_01c4e3d8 | DAT_01c4e3d9
    POP EDI                             ; 0040d932
    POP EDI                             ; 0040d933
    POP ESI                             ; 0040d934
    RET                                 ; 0040d935

