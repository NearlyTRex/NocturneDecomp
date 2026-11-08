; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c8ce0(int param_1)
;
;
; XREF[1]:
;   FUN_004c9670 at 004c96ef
;
; Referenced Globals:
;   undefined4 DAT_005d94e2
;   undefined4 DAT_00616494
;   undefined4 DAT_01cb6b84
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004c8ce0
        ;   Label: FUN_004c8ce0
    MOV EDX,dword ptr [0x00616494]      ; 004c8ce4 | DAT_00616494
    LEA EAX,[ECX + 0x18]                ; 004c8cea
    FLD float ptr [EDX + 0x284]         ; 004c8ced | DAT_01cb6b84
    FADD float ptr [EAX]                ; 004c8cf3
    FSTP float ptr [EAX]                ; 004c8cf5
    FLD float ptr [ECX + 0x18]          ; 004c8cf7
    FCOMP double ptr [0x005d94e2]       ; 004c8cfa | DAT_005d94e2
    FNSTSW AX                           ; 004c8d00
    SAHF                                ; 004c8d02
    JA 0x004c8d06                       ; 004c8d03
        ;   XREF to: 004c8d06 (CONDITIONAL_JUMP)  ; LAB_004c8d06
    RET                                 ; 004c8d05
    MOV dword ptr [ECX + 0x18],0x40680000 ; 004c8d06
        ;   Label: LAB_004c8d06
    RET                                 ; 004c8d0d

