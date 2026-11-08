; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050cee0(int param_1)
;
;
; XREF[3]:
;   FUN_0050acc0 at 0050ace3
;   FUN_0050b1d0 at 0050b30a
;   FUN_0050cf60 at 0050cfa7
;
; Called Functions:
;   FUN_005a28f0
;   FUN_005a35cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050cee0
        ;   Label: FUN_0050cee0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050cee1
    PUSH 0x9c40                         ; 0050cee5
    PUSH 0x7f                           ; 0050ceea
    LEA EAX,[EBX + 0x9c70]              ; 0050ceec
    PUSH EAX                            ; 0050cef2
    CALL FUN_005a28f0                   ; 0050cef3
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    LEA EAX,[EBX + 0x138c0]             ; 0050cef8
    MOV dword ptr [EBX + 0x138bc],0x0   ; 0050cefe
    MOV dword ptr [EAX + 0x8],0x0       ; 0050cf08
    MOV EDX,dword ptr [EAX + 0x8]       ; 0050cf0f
    MOV dword ptr [EAX + 0x4],EDX       ; 0050cf12
    MOV EDX,dword ptr [EAX + 0x4]       ; 0050cf15
    MOV dword ptr [EAX],EDX             ; 0050cf18
    LEA EAX,[EBX + 0x138cc]             ; 0050cf1a
    MOV dword ptr [EBX + 0x138c0],0x7149f2ca ; 0050cf20
    MOV dword ptr [EAX + 0x8],0x0       ; 0050cf2a
    ADD ESP,0xc                         ; 0050cf31
    MOV EDX,dword ptr [EAX + 0x8]       ; 0050cf34
    MOV dword ptr [EAX + 0x4],EDX       ; 0050cf37
    MOV EDX,dword ptr [EAX + 0x4]       ; 0050cf3a
    MOV dword ptr [EAX],EDX             ; 0050cf3d
    CALL FUN_005a35cc                   ; 0050cf3f
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; undefined FUN_005a35cc()
    AND EAX,0x3fff                      ; 0050cf44
    MOV dword ptr [EBX + 0x138d8],EAX   ; 0050cf49
    POP EBX                             ; 0050cf4f
    RET                                 ; 0050cf50

