; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043bb10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[3]:
;   FUN_004dd320 at 004dd4c7
;   FUN_004dd4e0 at 004dd655
;   FUN_00531ca0 at 00531e3a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043bb10
        ;   Label: FUN_0043bb10
    MOV EDX,dword ptr [EAX + 0x1d0]     ; 0043bb14
    CMP EDX,0x100                       ; 0043bb1a
    JL 0x0043bb29                       ; 0043bb20
        ;   XREF to: 0043bb29 (CONDITIONAL_JUMP)  ; LAB_0043bb29
    INC dword ptr [EAX + 0x1d0]         ; 0043bb22
    RET                                 ; 0043bb28
    PUSH EDI                            ; 0043bb29
        ;   Label: LAB_0043bb29
    PUSH ESI                            ; 0043bb2a
    SHL EDX,0x4                         ; 0043bb2b
    LEA ESI,[ESP + 0x10]                ; 0043bb2e
    LEA EDI,[EDX + EAX*0x1 + 0x1d4]     ; 0043bb32
    MOVSD ES:EDI,ESI                    ; 0043bb39
    MOVSD ES:EDI,ESI                    ; 0043bb3a
    MOVSD ES:EDI,ESI                    ; 0043bb3b
    MOVSD ES:EDI,ESI                    ; 0043bb3c
    POP ESI                             ; 0043bb3d
    POP EDI                             ; 0043bb3e
    INC dword ptr [EAX + 0x1d0]         ; 0043bb3f
    RET                                 ; 0043bb45

