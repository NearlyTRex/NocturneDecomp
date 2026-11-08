; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b53f0(undefined4 *param_1)
;
;
; XREF[6]:
;   FUN_0042c080 at 0042c2ae
;   FUN_0042c7f0 at 0042ca35
;   FUN_0046f740 at 004706b8
;   FUN_004cb1e0 at 004cb643
;   FUN_005188e0 at 00518c16
;   FUN_0058afe0 at 0058bfd3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b53f0
        ;   Label: FUN_005b53f0
    MOV dword ptr [EAX + 0x4],0x0       ; 005b53f4
    MOV dword ptr [EAX + 0x8],0x0       ; 005b53fb
    MOV dword ptr [EAX + 0xc],0x0       ; 005b5402
    MOV dword ptr [EAX + 0x10],0x0      ; 005b5409
    MOV dword ptr [EAX + 0x14],0x3f800000 ; 005b5410
    MOV dword ptr [EAX + 0x18],0x0      ; 005b5417
    MOV dword ptr [EAX + 0x1c],0x0      ; 005b541e
    MOV dword ptr [EAX + 0x20],0x0      ; 005b5425
    MOV dword ptr [EAX + 0x24],0x0      ; 005b542c
    MOV dword ptr [EAX + 0x28],0x3f800000 ; 005b5433
    MOV dword ptr [EAX + 0x2c],0x0      ; 005b543a
    MOV dword ptr [EAX],0x3f800000      ; 005b5441
    RET                                 ; 005b5447

