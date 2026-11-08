; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00519e50(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_0051b110 at 0051b12e
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00519e50
        ;   Label: FUN_00519e50
    MOV dword ptr [EAX + 0x414],0x0     ; 00519e54
    MOV byte ptr [EAX + 0x4],0x0        ; 00519e5e
    MOV byte ptr [EAX + 0x108],0x0      ; 00519e62
    MOV byte ptr [EAX + 0x208],0x0      ; 00519e69
    MOV byte ptr [EAX + 0x308],0x0      ; 00519e70
    MOV dword ptr [EAX],0x0             ; 00519e77
    MOV dword ptr [EAX + 0x41c],0x0     ; 00519e7d
    MOV dword ptr [EAX + 0x424],0x0     ; 00519e87
    MOV dword ptr [EAX + 0x418],0x0     ; 00519e91
    MOV dword ptr [EAX + 0x408],0x3e8   ; 00519e9b
    MOV dword ptr [EAX + 0x40c],0x3e8   ; 00519ea5
    MOV dword ptr [EAX + 0x410],0x0     ; 00519eaf
    RET                                 ; 00519eb9

