; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f1e10(int param_1)
;
;
; XREF[3]:
;   FUN_004efd50 at 004efd73
;   FUN_004f0360 at 004f048d
;   FUN_004f1e90 at 004f1ed7
;
; Called Functions:
;   FUN_00563cc0
;   FUN_0056488c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1e10
        ;   Label: FUN_004f1e10
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f1e11
    PUSH 0x9c40                         ; 004f1e15
    PUSH 0x7f                           ; 004f1e1a
    LEA EAX,[EBX + 0x9c70]              ; 004f1e1c
    PUSH EAX                            ; 004f1e22
    CALL FUN_00563cc0                   ; 004f1e23
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00563cc0()
    LEA EAX,[EBX + 0x138c0]             ; 004f1e28
    MOV dword ptr [EBX + 0x138bc],0x0   ; 004f1e2e
    MOV dword ptr [EAX + 0x8],0x0       ; 004f1e38
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f1e3f
    MOV dword ptr [EAX + 0x4],EDX       ; 004f1e42
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f1e45
    MOV dword ptr [EAX],EDX             ; 004f1e48
    LEA EAX,[EBX + 0x138cc]             ; 004f1e4a
    MOV dword ptr [EBX + 0x138c0],0x7149f2ca ; 004f1e50
    MOV dword ptr [EAX + 0x8],0x0       ; 004f1e5a
    ADD ESP,0xc                         ; 004f1e61
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f1e64
    MOV dword ptr [EAX + 0x4],EDX       ; 004f1e67
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f1e6a
    MOV dword ptr [EAX],EDX             ; 004f1e6d
    CALL FUN_0056488c                   ; 004f1e6f
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined FUN_0056488c()
    AND EAX,0x3fff                      ; 004f1e74
    MOV dword ptr [EBX + 0x138d8],EAX   ; 004f1e79
    POP EBX                             ; 004f1e7f
    RET                                 ; 004f1e80

