; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0047b080(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004625f0
;   FUN_0057ad70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047b080
        ;   Label: FUN_0047b080
    MOV EDX,dword ptr [ESP + 0x8]       ; 0047b081
    PUSH EDX                            ; 0047b085
    CALL FUN_0057ad70                   ; 0047b086
        ;   XREF to: 0057ad70 (UNCONDITIONAL_CALL)  ; undefined FUN_0057ad70()
    ADD ESP,0x4                         ; 0047b08b
    PUSH 0x5bccfb                       ; 0047b08e
    MOV EBX,EAX                         ; 0047b093
    ADD EAX,0x158                       ; 0047b095
    PUSH EAX                            ; 0047b09a
    MOV dword ptr [EAX + -0x4],0x5deed4 ; 0047b09b
    CALL FUN_004625f0                   ; 0047b0a2
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    LEA EAX,[EBX + 0x598]               ; 0047b0a7
    MOV dword ptr [EBX + 0x564],0x3f800000 ; 0047b0ad
    MOV dword ptr [EAX + 0x8],0x0       ; 0047b0b7
    MOV EDX,dword ptr [EAX + 0x8]       ; 0047b0be
    MOV dword ptr [EAX + 0x4],EDX       ; 0047b0c1
    MOV EDX,dword ptr [EAX + 0x4]       ; 0047b0c4
    MOV dword ptr [EAX],EDX             ; 0047b0c7
    MOV dword ptr [EBX + 0x594],0xbf800000 ; 0047b0c9
    MOV dword ptr [EBX + 0x2d8],0x0     ; 0047b0d3
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0047b0dd
    MOV dword ptr [EBX + 0x2e0],0x3     ; 0047b0e7
    MOV dword ptr [EBX + 0x2e4],0x0     ; 0047b0f1
    MOV dword ptr [EBX + 0x2e8],0x43480000 ; 0047b0fb
    MOV dword ptr [EBX + 0x2ec],0x0     ; 0047b105
    ADD ESP,0x8                         ; 0047b10f
    MOV dword ptr [EBX + 0x2f0],0x0     ; 0047b112
    MOV EAX,EBX                         ; 0047b11c
    MOV dword ptr [EBX + 0x5a4],0x0     ; 0047b11e
    POP EBX                             ; 0047b128
    RET                                 ; 0047b129

