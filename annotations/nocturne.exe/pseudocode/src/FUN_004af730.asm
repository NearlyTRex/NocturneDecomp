; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004af730(int param_1,undefined4 *param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_004b0480 at 004b04a2
;
; Referenced Globals:
;   undefined4 DAT_00585138
;   undefined4 DAT_0059e4d4
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;
; Called Functions:
;   FUN_0040de00
;   FUN_0050ec80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af730
        ;   Label: FUN_004af730
    PUSH ESI                            ; 004af731
    SUB ESP,0x4                         ; 004af732
    MOV ESI,dword ptr [ESP + 0x10]      ; 004af735
    MOV EBX,dword ptr [ESP + 0x14]      ; 004af739
    PUSH 0x3                            ; 004af73d
    PUSH 0x0                            ; 004af73f
    CALL FUN_0040de00                   ; 004af741
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040de00()
    ADD ESP,0x8                         ; 004af746
    MOV EDX,dword ptr [0x005be368]      ; 004af749 | DAT_005be368
    PUSH 0x0                            ; 004af74f
    MOV dword ptr [ESI + 0x14],EAX      ; 004af751
    PUSH EBX                            ; 004af754
    FLD float ptr [EBX]                 ; 004af755
    PUSH EDX                            ; 004af757 | DAT_01e57284
    FSTP float ptr [ESI + 0x4]          ; 004af758
    CALL FUN_0050ec80                   ; 004af75b
        ;   XREF to: 0050ec80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ec80()
    MOV dword ptr [ESP + 0xc],EAX       ; 004af760
    FLD float ptr [ESP + 0xc]           ; 004af764
    LEA EAX,[ESI + 0x4]                 ; 004af768
    FSTP float ptr [ESI + 0x8]          ; 004af76b
    ADD ESP,0xc                         ; 004af76e
    FLD float ptr [ESI + 0x8]           ; 004af771
    MOV EDX,dword ptr [EBX + 0x8]       ; 004af774
    MOV dword ptr [ESI + 0xc],EDX       ; 004af777
    MOV dword ptr [ESI + 0x18],0x0      ; 004af77a
    FADD float ptr [0x00585138]         ; 004af781 | DAT_00585138
    LEA EBX,[ESI + 0x1c]                ; 004af787
    FSTP float ptr [ESI + 0x8]          ; 004af78a
    FLD float ptr [EAX]                 ; 004af78d
    FMUL float ptr [0x0059e4d4]         ; 004af78f | DAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004af795
    FLD float ptr [EAX + 0x4]           ; 004af797
    FMUL float ptr [0x0059e4d4]         ; 004af79a | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004af7a0
    FLD float ptr [EAX + 0x8]           ; 004af7a3
    FMUL float ptr [0x0059e4d4]         ; 004af7a6 | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004af7ac
    MOV EAX,dword ptr [ESP + 0x18]      ; 004af7af
    MOV dword ptr [ESI + 0x10],EAX      ; 004af7b3
    ADD ESP,0x4                         ; 004af7b6
    POP ESI                             ; 004af7b9
    POP EBX                             ; 004af7ba
    RET                                 ; 004af7bb

