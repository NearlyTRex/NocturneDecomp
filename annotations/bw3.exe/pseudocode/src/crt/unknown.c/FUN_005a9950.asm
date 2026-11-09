; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a9950(int param_1)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005a3ad4 at 005a3aee
;   crt_unknown.c_FUN_005a427c at 005a4323
;
; Referenced Globals:
;   undefined4 DAT_02d252a0
;   undefined4 DAT_02d252a4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9950
        ;   Label: crt_unknown.c_FUN_005a9950
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a9951
    MOV EDX,0x2d252a0                   ; 005a9955
    MOV EAX,dword ptr [EDX]             ; 005a995a | DAT_02d252a0
        ;   Label: LAB_005a995a
    TEST EAX,EAX                        ; 005a995c
    JZ 0x005a9985                       ; 005a995e
        ;   XREF to: 005a9985 (CONDITIONAL_JUMP)  ; LAB_005a9985
    MOV ECX,dword ptr [EAX + 0x4]       ; 005a9960
    CMP EBX,ECX                         ; 005a9963
    JZ 0x005a996b                       ; 005a9965
        ;   XREF to: 005a996b (CONDITIONAL_JUMP)  ; LAB_005a996b
    MOV EDX,EAX                         ; 005a9967
    JMP 0x005a995a                      ; 005a9969
        ;   XREF to: 005a995a (UNCONDITIONAL_JUMP)  ; LAB_005a995a
    MOV CL,byte ptr [ECX + 0xc]         ; 005a996b
        ;   Label: LAB_005a996b
    OR CL,0x3                           ; 005a996e
    MOV byte ptr [EBX + 0xc],CL         ; 005a9971
    MOV EBX,dword ptr [EAX]             ; 005a9974
    MOV dword ptr [EDX],EBX             ; 005a9976
    MOV EDX,dword ptr [0x02d252a4]      ; 005a9978 | DAT_02d252a4
    MOV [0x02d252a4],EAX                ; 005a997e | DAT_02d252a4
    MOV dword ptr [EAX],EDX             ; 005a9983
    POP EBX                             ; 005a9985
        ;   Label: LAB_005a9985
    RET                                 ; 005a9986

