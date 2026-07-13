; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00411010(int param_1,float param_2)
;
;
; XREF[1]:
;   FUN_00410490 at 004105ca
;
; Called Functions:
;   FUN_00410cc0
;   FUN_004e11c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411010
        ;   Label: FUN_00411010
    PUSH ESI                            ; 00411011
    PUSH EBP                            ; 00411012
    MOV EBP,ESP                         ; 00411013
    AND ESP,0xfffffff8                  ; 00411015
    MOV EBX,dword ptr [EBP + 0x10]      ; 00411018
    LEA ESI,[EBX + 0x150]               ; 0041101b
    LEA EAX,[EBP + 0x14]                ; 00411021
        ;   Label: LAB_00411021
    PUSH EAX                            ; 00411024
    PUSH ESI                            ; 00411025
    CALL FUN_004e11c0                   ; 00411026
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e11c0()
    ADD ESP,0x8                         ; 0041102b
    CMP EAX,0x64                        ; 0041102e
    JNC 0x00411070                      ; 00411031
        ;   XREF to: 00411070 (CONDITIONAL_JUMP)  ; LAB_00411070
    FLD float ptr [EBP + 0x14]          ; 00411033
        ;   Label: LAB_00411033
    FLDZ                                ; 00411036
    FCOMPP                              ; 00411038
    FNSTSW AX                           ; 0041103a
    SAHF                                ; 0041103c
    JC 0x00411021                       ; 0041103d
        ;   XREF to: 00411021 (CONDITIONAL_JUMP)  ; LAB_00411021
    MOV ESP,EBP                         ; 0041103f
    POP EBP                             ; 00411041
    POP ESI                             ; 00411042
    POP EBX                             ; 00411043
    RET                                 ; 00411044
    PUSH EBX                            ; 00411045
        ;   Label: LAB_00411045
    CALL FUN_00410cc0                   ; 00411046
        ;   XREF to: 00410cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00410cc0()
    ADD ESP,0x4                         ; 0041104b
    JMP 0x00411033                      ; 0041104e
        ;   XREF to: 00411033 (UNCONDITIONAL_JUMP)  ; LAB_00411033
    MOV dword ptr [EBX + 0x1fb34],0x0   ; 00411050
        ;   Label: LAB_00411050
    MOV dword ptr [EBX + 0x1fb38],0x0   ; 0041105a
    MOV dword ptr [EBX + 0x1fb14],0x0   ; 00411064
    JMP 0x00411033                      ; 0041106e
        ;   XREF to: 00411033 (UNCONDITIONAL_JUMP)  ; LAB_00411033
    JBE 0x00411045                      ; 00411070
        ;   XREF to: 00411045 (CONDITIONAL_JUMP)  ; LAB_00411045
        ;   Label: LAB_00411070
    CMP EAX,0x6e                        ; 00411072
    JZ 0x00411050                       ; 00411075
        ;   XREF to: 00411050 (CONDITIONAL_JUMP)  ; LAB_00411050
    JMP 0x00411033                      ; 00411077
        ;   XREF to: 00411033 (UNCONDITIONAL_JUMP)  ; LAB_00411033

