; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a2de0(undefined4 *param_1)
;
;
; XREF[3]:
;   FUN_004889b0 at 00488a0c
;   FUN_00568290 at 005682c5
;   FUN_0057bb60 at 0057bb73
;
; Referenced Globals:
;   undefined4 DAT_005df8fc
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a2de0
        ;   Label: FUN_004a2de0
    MOV dword ptr [EAX],0x3f800000      ; 004a2de4
    MOV dword ptr [EAX + 0x8],0x0       ; 004a2dea
    MOV dword ptr [EAX + 0xc],0xff      ; 004a2df1
    MOV dword ptr [EAX + 0x10],0x0      ; 004a2df8
    MOV dword ptr [EAX + 0x14],0x0      ; 004a2dff
    MOV dword ptr [EAX + 0x18],0x0      ; 004a2e06
    MOV dword ptr [EAX + 0x1c],0x0      ; 004a2e0d
    MOV EDX,dword ptr [0x005df8fc]      ; 004a2e14 | DAT_005df8fc
    MOV dword ptr [EAX + 0x4],EDX       ; 004a2e1a
    RET                                 ; 004a2e1d

