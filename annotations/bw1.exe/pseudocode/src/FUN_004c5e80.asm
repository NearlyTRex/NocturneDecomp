; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c5e80(int param_1,float param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_004c5c60 at 004c5d4e
;
; Called Functions:
;   FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c5e80
        ;   Label: FUN_004c5e80
    SUB ESP,0x8                         ; 004c5e81
    MOV EBX,dword ptr [ESP + 0x10]      ; 004c5e84
    LEA EAX,[EBX + 0x184]               ; 004c5e88
    PUSH EAX                            ; 004c5e8e
    CALL FUN_00468900                   ; 004c5e8f
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    FLD float ptr [EBX + 0x15c]         ; 004c5e94
    ADD ESP,0x4                         ; 004c5e9a
    MOV EAX,dword ptr [EAX + 0x100]     ; 004c5e9d
    FLD float ptr [ESP + 0x14]          ; 004c5ea3
    FXCH                                ; 004c5ea7
    FSUB ST0,ST1                        ; 004c5ea9
    MOV dword ptr [ESP + 0x4],EAX       ; 004c5eab
    FILD dword ptr [ESP + 0x4]          ; 004c5eaf
    FMULP                               ; 004c5eb3
    FLD float ptr [ESP + 0x18]          ; 004c5eb5
    FSUBRP ST2,ST0                      ; 004c5eb9
    FDIVRP                              ; 004c5ebb
    MOV EDX,EAX                         ; 004c5ebd
    FST float ptr [EBX + 0x180]         ; 004c5ebf
    FLDZ                                ; 004c5ec5
    FCOMPP                              ; 004c5ec7
    FNSTSW AX                           ; 004c5ec9
    SAHF                                ; 004c5ecb
    JA 0x004c5eed                       ; 004c5ecc
        ;   XREF to: 004c5eed (CONDITIONAL_JUMP)  ; LAB_004c5eed
    DEC EDX                             ; 004c5ece
        ;   Label: LAB_004c5ece
    MOV dword ptr [ESP + 0x4],EDX       ; 004c5ecf
    FLD float ptr [EBX + 0x180]         ; 004c5ed3
    FILD dword ptr [ESP + 0x4]          ; 004c5ed9
    FSTP float ptr [ESP]                ; 004c5edd
    FCOMP float ptr [ESP]               ; 004c5ee0
    FNSTSW AX                           ; 004c5ee3
    SAHF                                ; 004c5ee5
    JA 0x004c5ef9                       ; 004c5ee6
        ;   XREF to: 004c5ef9 (CONDITIONAL_JUMP)  ; LAB_004c5ef9
    ADD ESP,0x8                         ; 004c5ee8
    POP EBX                             ; 004c5eeb
    RET                                 ; 004c5eec
    MOV dword ptr [EBX + 0x180],0x0     ; 004c5eed
        ;   Label: LAB_004c5eed
    JMP 0x004c5ece                      ; 004c5ef7
        ;   XREF to: 004c5ece (UNCONDITIONAL_JUMP)  ; LAB_004c5ece
    MOV EAX,dword ptr [ESP]             ; 004c5ef9
        ;   Label: LAB_004c5ef9
    MOV dword ptr [EBX + 0x180],EAX     ; 004c5efc
    ADD ESP,0x8                         ; 004c5f02
    POP EBX                             ; 004c5f05
    RET                                 ; 004c5f06

