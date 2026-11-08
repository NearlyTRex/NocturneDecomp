; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00512f00(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_005143b0 at 00514405
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00512f00
        ;   Label: FUN_00512f00
    MOV dword ptr [EAX + 0x414],0x0     ; 00512f04
    MOV byte ptr [EAX + 0x4],0x0        ; 00512f0e
    MOV byte ptr [EAX + 0x108],0x0      ; 00512f12
    MOV byte ptr [EAX + 0x208],0x0      ; 00512f19
    MOV byte ptr [EAX + 0x308],0x0      ; 00512f20
    MOV dword ptr [EAX],0x0             ; 00512f27
    MOV dword ptr [EAX + 0x41c],0x0     ; 00512f2d
    MOV dword ptr [EAX + 0x424],0x0     ; 00512f37
    MOV dword ptr [EAX + 0x418],0x0     ; 00512f41
    MOV dword ptr [EAX + 0x408],0x3e8   ; 00512f4b
    MOV dword ptr [EAX + 0x40c],0x3e8   ; 00512f55
    MOV dword ptr [EAX + 0x410],0x0     ; 00512f5f
    RET                                 ; 00512f69

