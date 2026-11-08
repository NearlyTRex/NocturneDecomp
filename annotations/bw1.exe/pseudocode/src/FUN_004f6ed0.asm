; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f6ed0(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_004ea830 at 004ea852
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f6ed0
        ;   Label: FUN_004f6ed0
    MOV dword ptr [EAX + 0x334],0x0     ; 004f6ed4
    MOV dword ptr [EAX + 0x338],0x0     ; 004f6ede
    MOV dword ptr [EAX + 0x33c],0x0     ; 004f6ee8
    MOV dword ptr [EAX],0x42c80000      ; 004f6ef2
    MOV dword ptr [EAX + 0x4],0x0       ; 004f6ef8
    MOV dword ptr [EAX + 0x340],0x0     ; 004f6eff
    MOV dword ptr [EAX + 0x344],0x0     ; 004f6f09
    MOV dword ptr [EAX + 0x348],0x0     ; 004f6f13
    MOV dword ptr [EAX + 0x454],0x1     ; 004f6f1d
    MOV dword ptr [EAX + 0x458],0x0     ; 004f6f27
    MOV dword ptr [EAX + 0x45c],0x0     ; 004f6f31
    MOV dword ptr [EAX + 0x460],0x0     ; 004f6f3b
    MOV dword ptr [EAX + 0x34c],0x0     ; 004f6f45
    MOV byte ptr [EAX + 0x354],0x0      ; 004f6f4f
    MOV dword ptr [EAX + 0x464],0x0     ; 004f6f56
    MOV dword ptr [EAX + 0x468],0x0     ; 004f6f60
    MOV dword ptr [EAX + 0x8],0x0       ; 004f6f6a
    MOV dword ptr [EAX + 0xc],0x0       ; 004f6f71
    MOV dword ptr [EAX + 0x10],0x0      ; 004f6f78
    RET                                 ; 004f6f7f

