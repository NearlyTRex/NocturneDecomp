; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005349a0(int param_1,float *param_2,undefined4 *param_3,undefined4 param_4)
;
;
; XREF[13]:
;   FUN_00426030 at 004261ae
;   FUN_004263d0 at 00426721
;   FUN_0042ccf0 at 0042d14f
;   FUN_004a0ab0 at 004a0d14
;   FUN_004c7aa0 at 004c81e2
;   FUN_004d9260 at 004da185
;   FUN_004de100 at 004de24c
;   FUN_004e98b0 at 004e9e27
;   FUN_004f1b50 at 004f21d4
;   FUN_00520c10 at 00520d5b
;   ... and 3 more
;
; Referenced Globals:
;   undefined4 DAT_01e6be44
;
; Called Functions:
;   FUN_00533dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005349a0
        ;   Label: FUN_005349a0
    PUSH ESI                            ; 005349a1
    PUSH EDI                            ; 005349a2
    PUSH EBP                            ; 005349a3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005349a4
    MOV ESI,dword ptr [ESP + 0x18]      ; 005349a8
    MOV EBP,dword ptr [ESP + 0x20]      ; 005349ac
    LEA EDI,[EBX + 0x138c0]             ; 005349b0
    FLD float ptr [EDI]                 ; 005349b6
    FCOMP float ptr [ESI]               ; 005349b8
    FNSTSW AX                           ; 005349ba
    SAHF                                ; 005349bc
    JZ 0x00534a0a                       ; 005349bd
        ;   XREF to: 00534a0a (CONDITIONAL_JUMP)  ; LAB_00534a0a
    LEA EAX,[EBX + 0x138c0]             ; 005349bf
        ;   Label: LAB_005349bf
    CMP EAX,ESI                         ; 005349c5
    JNZ 0x00534a22                      ; 005349c7
        ;   XREF to: 00534a22 (CONDITIONAL_JUMP)  ; LAB_00534a22
    MOV EDX,0x1                         ; 005349c9
        ;   Label: LAB_005349c9
    LEA EDI,[EBX + 0x138cc]             ; 005349ce
    MOV dword ptr [0x01e6be44],EDX      ; 005349d4 | DAT_01e6be44
    PUSH EBP                            ; 005349da
        ;   Label: LAB_005349da
    PUSH EDI                            ; 005349db
    PUSH ESI                            ; 005349dc
    PUSH EBX                            ; 005349dd
    CALL FUN_00533dc0                   ; 005349de
        ;   XREF to: 00533dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00533dc0()
    ADD ESP,0x10                        ; 005349e3
    MOV dword ptr [EBX + 0x138bc],EAX   ; 005349e6
    CMP EAX,0x1                         ; 005349ec
    JNZ 0x00534a34                      ; 005349ef
        ;   XREF to: 00534a34 (CONDITIONAL_JUMP)  ; LAB_00534a34
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005349f1
        ;   Label: LAB_005349f1
    LEA EAX,[EBX + 0x138cc]             ; 005349f5
    CMP EAX,ECX                         ; 005349fb
    JNZ 0x00534a46                      ; 005349fd
        ;   XREF to: 00534a46 (CONDITIONAL_JUMP)  ; LAB_00534a46
    MOV EAX,dword ptr [EBX + 0x138bc]   ; 005349ff
    POP EBP                             ; 00534a05
    POP EDI                             ; 00534a06
    POP ESI                             ; 00534a07
    POP EBX                             ; 00534a08
    RET                                 ; 00534a09
    FLD float ptr [EDI + 0x4]           ; 00534a0a
        ;   Label: LAB_00534a0a
    FCOMP float ptr [ESI + 0x4]         ; 00534a0d
    FNSTSW AX                           ; 00534a10
    SAHF                                ; 00534a12
    JNZ 0x005349bf                      ; 00534a13
        ;   XREF to: 005349bf (CONDITIONAL_JUMP)  ; LAB_005349bf
    FLD float ptr [EDI + 0x8]           ; 00534a15
    FCOMP float ptr [ESI + 0x8]         ; 00534a18
    FNSTSW AX                           ; 00534a1b
    SAHF                                ; 00534a1d
    JZ 0x005349f1                       ; 00534a1e
        ;   XREF to: 005349f1 (CONDITIONAL_JUMP)  ; LAB_005349f1
    JMP 0x005349bf                      ; 00534a20
        ;   XREF to: 005349bf (UNCONDITIONAL_JUMP)  ; LAB_005349bf
    MOV EDX,dword ptr [ESI]             ; 00534a22
        ;   Label: LAB_00534a22
    MOV dword ptr [EAX],EDX             ; 00534a24
    MOV EDX,dword ptr [ESI + 0x4]       ; 00534a26
    MOV dword ptr [EAX + 0x4],EDX       ; 00534a29
    MOV EDX,dword ptr [ESI + 0x8]       ; 00534a2c
    MOV dword ptr [EAX + 0x8],EDX       ; 00534a2f
    JMP 0x005349c9                      ; 00534a32
        ;   XREF to: 005349c9 (UNCONDITIONAL_JUMP)  ; LAB_005349c9
    MOV EAX,[0x01e6be44]                ; 00534a34 | DAT_01e6be44
        ;   Label: LAB_00534a34
    INC EAX                             ; 00534a39
    MOV [0x01e6be44],EAX                ; 00534a3a | DAT_01e6be44
    CMP EAX,0x3                         ; 00534a3f
    JLE 0x005349da                      ; 00534a42
        ;   XREF to: 005349da (CONDITIONAL_JUMP)  ; LAB_005349da
    JMP 0x005349f1                      ; 00534a44
        ;   XREF to: 005349f1 (UNCONDITIONAL_JUMP)  ; LAB_005349f1
    MOV EDX,dword ptr [EAX]             ; 00534a46
        ;   Label: LAB_00534a46
    MOV dword ptr [ECX],EDX             ; 00534a48
    MOV EDX,dword ptr [EAX + 0x4]       ; 00534a4a
    MOV dword ptr [ECX + 0x4],EDX       ; 00534a4d
    MOV EDX,dword ptr [EAX + 0x8]       ; 00534a50
    MOV dword ptr [ECX + 0x8],EDX       ; 00534a53
    MOV EAX,dword ptr [EBX + 0x138bc]   ; 00534a56
    POP EBP                             ; 00534a5c
    POP EDI                             ; 00534a5d
    POP ESI                             ; 00534a5e
    POP EBX                             ; 00534a5f
    RET                                 ; 00534a60

