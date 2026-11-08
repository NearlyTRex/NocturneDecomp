; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044d1d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[3]:
;   FUN_004fa770 at 004fa917
;   FUN_004fa930 at 004faad7
;   FUN_00552f50 at 005530ea
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0044d1d0
        ;   Label: FUN_0044d1d0
    MOV EDX,dword ptr [EAX + 0x1d0]     ; 0044d1d4
    CMP EDX,0x100                       ; 0044d1da
    JL 0x0044d1e9                       ; 0044d1e0
        ;   XREF to: 0044d1e9 (CONDITIONAL_JUMP)  ; LAB_0044d1e9
    INC dword ptr [EAX + 0x1d0]         ; 0044d1e2
    RET                                 ; 0044d1e8
    PUSH EDI                            ; 0044d1e9
        ;   Label: LAB_0044d1e9
    PUSH ESI                            ; 0044d1ea
    SHL EDX,0x4                         ; 0044d1eb
    LEA ESI,[ESP + 0x10]                ; 0044d1ee
    LEA EDI,[EDX + EAX*0x1 + 0x1d4]     ; 0044d1f2
    MOVSD ES:EDI,ESI                    ; 0044d1f9
    MOVSD ES:EDI,ESI                    ; 0044d1fa
    MOVSD ES:EDI,ESI                    ; 0044d1fb
    MOVSD ES:EDI,ESI                    ; 0044d1fc
    POP ESI                             ; 0044d1fd
    POP EDI                             ; 0044d1fe
    INC dword ptr [EAX + 0x1d0]         ; 0044d1ff
    RET                                 ; 0044d205

