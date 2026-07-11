; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051cfd0(int param_1,undefined4 param_2,float param_3,undefined4 param_4,code *param_5)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[4]:
;   FUN_00497900 at 00497a17
;   FUN_004fd1d0 at 004fd43a
;   FUN_005384d0 at 005387e2
;   FUN_0053a260 at 0053a53d
;
; Referenced Globals:
;   undefined4 DAT_00591bbb
;
; Called Functions:
;   FUN_00517b10
;   FUN_0051e0a0
;   FUN_0055d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051cfd0
        ;   Label: FUN_0051cfd0
    PUSH ESI                            ; 0051cfd1
    PUSH EDI                            ; 0051cfd2
    PUSH EBP                            ; 0051cfd3
    SUB ESP,0x1c                        ; 0051cfd4
    FLD float ptr [ESP + 0x38]          ; 0051cfd7
    FCOMP double ptr [0x00591bbb]       ; 0051cfdb | DAT_00591bbb
    FNSTSW AX                           ; 0051cfe1
    SAHF                                ; 0051cfe3
    JA 0x0051cfee                       ; 0051cfe4
        ;   XREF to: 0051cfee (CONDITIONAL_JUMP)  ; LAB_0051cfee
    ADD ESP,0x1c                        ; 0051cfe6
        ;   Label: LAB_0051cfe6
    POP EBP                             ; 0051cfe9
    POP EDI                             ; 0051cfea
    POP ESI                             ; 0051cfeb
    POP EBX                             ; 0051cfec
    RET                                 ; 0051cfed
    MOV EDX,dword ptr [ESP + 0x30]      ; 0051cfee
        ;   Label: LAB_0051cfee
    PUSH EDX                            ; 0051cff2
    XOR EBX,EBX                         ; 0051cff3
    CALL FUN_0051e0a0                   ; 0051cff5
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e0a0()
    ADD ESP,0x4                         ; 0051cffa
    MOV ECX,dword ptr [EAX + 0x28558]   ; 0051cffd
    MOV dword ptr [ESP + 0x10],EAX      ; 0051d003
    TEST ECX,ECX                        ; 0051d007
    JLE 0x0051cfe6                      ; 0051d009
        ;   XREF to: 0051cfe6 (CONDITIONAL_JUMP)  ; LAB_0051cfe6
    MOV EAX,dword ptr [ESP + 0x30]      ; 0051d00b
    MOV EBP,dword ptr [ESP + 0x30]      ; 0051d00f
    MOV dword ptr [ESP + 0x14],EAX      ; 0051d013
    ADD EBP,0x6b0                       ; 0051d017
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0051d01d
        ;   Label: LAB_0051d01d
    PUSH EAX                            ; 0051d021
    PUSH EBX                            ; 0051d022
    MOV EDX,dword ptr [ESP + 0x18]      ; 0051d023
    PUSH EDX                            ; 0051d027
    CALL FUN_00517b10                   ; 0051d028
        ;   XREF to: 00517b10 (UNCONDITIONAL_CALL)  ; undefined FUN_00517b10()
    ADD ESP,0xc                         ; 0051d02d
    TEST EAX,EAX                        ; 0051d030
    JGE 0x0051d053                      ; 0051d032
        ;   XREF to: 0051d053 (CONDITIONAL_JUMP)  ; LAB_0051d053
    MOV ESI,dword ptr [ESP + 0x14]      ; 0051d034
        ;   Label: LAB_0051d034
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051d038
    ADD EBP,0x10                        ; 0051d03c
    INC EBX                             ; 0051d03f
    ADD ESI,0x10                        ; 0051d040
    MOV EDI,dword ptr [EAX + 0x28558]   ; 0051d043
    MOV dword ptr [ESP + 0x14],ESI      ; 0051d049
    CMP EBX,EDI                         ; 0051d04d
    JGE 0x0051cfe6                      ; 0051d04f
        ;   XREF to: 0051cfe6 (CONDITIONAL_JUMP)  ; LAB_0051cfe6
    JMP 0x0051d01d                      ; 0051d051
        ;   XREF to: 0051d01d (UNCONDITIONAL_JUMP)  ; LAB_0051d01d
    MOV ECX,dword ptr [ESP + 0x30]      ; 0051d053
        ;   Label: LAB_0051d053
    PUSH ECX                            ; 0051d057
    PUSH EAX                            ; 0051d058
    MOV ESI,dword ptr [ESP + 0x44]      ; 0051d059
    PUSH dword ptr [ESP + 0x40]         ; 0051d05d
    PUSH ESI                            ; 0051d061
    PUSH EBX                            ; 0051d062
    CALL dword ptr [ESP + 0x54]         ; 0051d063
    MOV dword ptr [ESP + 0x2c],EAX      ; 0051d067
    FLD float ptr [ESP + 0x2c]          ; 0051d06b
    ADD ESP,0x14                        ; 0051d06f
    SUB ESP,0x4                         ; 0051d072
    MOV EDI,dword ptr [ESP + 0x38]      ; 0051d075
    FSTP float ptr [ESP]                ; 0051d079
    PUSH EDI                            ; 0051d07c
    PUSH EBP                            ; 0051d07d
    LEA ESI,[ESP + 0xc]                 ; 0051d07e
    CALL FUN_0055d2d0                   ; 0051d082
        ;   XREF to: 0055d2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d2d0()
    ADD ESP,0xc                         ; 0051d087
    MOV EDI,dword ptr [ESP + 0x14]      ; 0051d08a
    MOV ESI,ESP                         ; 0051d08e
    LEA EDI,[EDI + 0x6b0]               ; 0051d090
    MOVSD ES:EDI,ESI                    ; 0051d096
    MOVSD ES:EDI,ESI                    ; 0051d097
    MOVSD ES:EDI,ESI                    ; 0051d098
    MOVSD ES:EDI,ESI                    ; 0051d099
    JMP 0x0051d034                      ; 0051d09a
        ;   XREF to: 0051d034 (UNCONDITIONAL_JUMP)  ; LAB_0051d034

