; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cd450(undefined4 *param_1,float *param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_004ce950 at 004ce972
;
; Referenced Globals:
;   undefined4 DAT_005e0e18
;   undefined4 DAT_01d5ba14
;
; Called Functions:
;   FUN_0040cea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cd450
        ;   Label: FUN_004cd450
    PUSH ESI                            ; 004cd451
    PUSH EDI                            ; 004cd452
    MOV ESI,dword ptr [ESP + 0x10]      ; 004cd453
    MOV EDI,dword ptr [ESP + 0x14]      ; 004cd457
    LEA EAX,[ESI + 0x4]                 ; 004cd45b
    MOV dword ptr [ESI + 0x14],0x0      ; 004cd45e
    CMP EAX,EDI                         ; 004cd465
    JZ 0x004cd479                       ; 004cd467
        ;   XREF to: 004cd479 (CONDITIONAL_JUMP)  ; LAB_004cd479
    MOV EDX,dword ptr [EDI]             ; 004cd469
    MOV dword ptr [EAX],EDX             ; 004cd46b
    MOV EDX,dword ptr [EDI + 0x4]       ; 004cd46d
    MOV dword ptr [EAX + 0x4],EDX       ; 004cd470
    MOV EDX,dword ptr [EDI + 0x8]       ; 004cd473
    MOV dword ptr [EAX + 0x8],EDX       ; 004cd476
    PUSH 0x3                            ; 004cd479
        ;   Label: LAB_004cd479
    PUSH 0x0                            ; 004cd47b
    LEA EBX,[ESI + 0x30]                ; 004cd47d
    CALL FUN_0040cea0                   ; 004cd480
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cea0()
    ADD ESP,0x8                         ; 004cd485
    MOV dword ptr [ESI + 0x2c],EAX      ; 004cd488
    MOV EAX,EDI                         ; 004cd48b
    MOV dword ptr [ESI + 0x28],0x0      ; 004cd48d
    FLD float ptr [EAX]                 ; 004cd494
    FMUL float ptr [0x005e0e18]         ; 004cd496 | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004cd49c
    FLD float ptr [EAX + 0x4]           ; 004cd49e
    FMUL float ptr [0x005e0e18]         ; 004cd4a1 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004cd4a7
    FLD float ptr [EAX + 0x8]           ; 004cd4aa
    FMUL float ptr [0x005e0e18]         ; 004cd4ad | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004cd4b3
    MOV dword ptr [ESI + 0x3c],0x0      ; 004cd4b6
    MOV dword ptr [ESI + 0x40],0xffff   ; 004cd4bd
    MOV EAX,dword ptr [ESP + 0x18]      ; 004cd4c4
    MOV dword ptr [ESI + 0x44],0x0      ; 004cd4c8
    MOV dword ptr [ESI + 0x18],EAX      ; 004cd4cf
    LEA EAX,[ESI + 0x1c]                ; 004cd4d2
    MOV dword ptr [ESI],0x0             ; 004cd4d5
    MOV dword ptr [EAX + 0x8],0x0       ; 004cd4db
    MOV EDX,dword ptr [EAX + 0x8]       ; 004cd4e2
    MOV dword ptr [EAX + 0x4],EDX       ; 004cd4e5
    MOV EDX,dword ptr [EAX + 0x4]       ; 004cd4e8
    MOV dword ptr [EAX],EDX             ; 004cd4eb
    MOV EAX,[0x01d5ba14]                ; 004cd4ed | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004cd4f2
    MOV EAX,dword ptr [EAX + 0x2c]      ; 004cd4f9
    MOV dword ptr [ESI + 0x10],EAX      ; 004cd4fc
    POP EDI                             ; 004cd4ff
    POP ESI                             ; 004cd500
    POP EBX                             ; 004cd501
    RET                                 ; 004cd502

