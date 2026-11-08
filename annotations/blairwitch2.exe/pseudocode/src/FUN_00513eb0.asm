; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00513eb0(int param_1)
;
;
; XREF[3]:
;   FUN_00511c90 at 00511cb3
;   FUN_005121a0 at 005122da
;   FUN_00513f30 at 00513f77
;
; Called Functions:
;   FUN_005b77c0
;   FUN_005b849c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00513eb0
        ;   Label: FUN_00513eb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00513eb1
    PUSH 0x9c40                         ; 00513eb5
    PUSH 0x7f                           ; 00513eba
    LEA EAX,[EBX + 0x9c70]              ; 00513ebc
    PUSH EAX                            ; 00513ec2
    CALL FUN_005b77c0                   ; 00513ec3
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    LEA EAX,[EBX + 0x138c0]             ; 00513ec8
    MOV dword ptr [EBX + 0x138bc],0x0   ; 00513ece
    MOV dword ptr [EAX + 0x8],0x0       ; 00513ed8
    MOV EDX,dword ptr [EAX + 0x8]       ; 00513edf
    MOV dword ptr [EAX + 0x4],EDX       ; 00513ee2
    MOV EDX,dword ptr [EAX + 0x4]       ; 00513ee5
    MOV dword ptr [EAX],EDX             ; 00513ee8
    LEA EAX,[EBX + 0x138cc]             ; 00513eea
    MOV dword ptr [EBX + 0x138c0],0x7149f2ca ; 00513ef0
    MOV dword ptr [EAX + 0x8],0x0       ; 00513efa
    ADD ESP,0xc                         ; 00513f01
    MOV EDX,dword ptr [EAX + 0x8]       ; 00513f04
    MOV dword ptr [EAX + 0x4],EDX       ; 00513f07
    MOV EDX,dword ptr [EAX + 0x4]       ; 00513f0a
    MOV dword ptr [EAX],EDX             ; 00513f0d
    CALL FUN_005b849c                   ; 00513f0f
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; undefined FUN_005b849c()
    AND EAX,0x3fff                      ; 00513f14
    MOV dword ptr [EBX + 0x138d8],EAX   ; 00513f19
    POP EBX                             ; 00513f1f
    RET                                 ; 00513f20

