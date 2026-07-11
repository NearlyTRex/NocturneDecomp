; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00449680(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_00449720 at 00449b93
;
; Called Functions:
;   FUN_004493a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449680
        ;   Label: FUN_00449680
    PUSH ESI                            ; 00449681
    PUSH EDI                            ; 00449682
    SUB ESP,0x4                         ; 00449683
    MOV EBX,dword ptr [ESP + 0x14]      ; 00449686
    MOV ESI,dword ptr [ESP + 0x18]      ; 0044968a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0044968e
    FLD float ptr [ESI]                 ; 00449692
    PUSH EBX                            ; 00449694
    FSTP float ptr [EBX + 0x3c]         ; 00449695
    MOV EAX,dword ptr [ESI + 0x8]       ; 00449698
    MOV dword ptr [EBX + 0x40],EAX      ; 0044969b
    MOV EAX,dword ptr [EDI]             ; 0044969e
    MOV dword ptr [EBX + 0x44],EAX      ; 004496a0
    MOV EAX,dword ptr [EDI + 0x8]       ; 004496a3
    MOV dword ptr [EBX + 0x48],EAX      ; 004496a6
    CALL FUN_004493a0                   ; 004496a9
        ;   XREF to: 004493a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004493a0()
    ADD ESP,0x4                         ; 004496ae
    TEST EAX,EAX                        ; 004496b1
    JZ 0x004496d9                       ; 004496b3
        ;   XREF to: 004496d9 (CONDITIONAL_JUMP)  ; LAB_004496d9
    FLD float ptr [EDI + 0x4]           ; 004496b5
    FSUB float ptr [ESI + 0x4]          ; 004496b8
    FMUL float ptr [EBX + 0x50]         ; 004496bb
    FADD float ptr [ESI + 0x4]          ; 004496be
    FST float ptr [ESP]                 ; 004496c1
    FCOMP float ptr [EBX + 0x28]        ; 004496c4
    FNSTSW AX                           ; 004496c7
    SAHF                                ; 004496c9
    JBE 0x004496d7                      ; 004496ca
        ;   XREF to: 004496d7 (CONDITIONAL_JUMP)  ; LAB_004496d7
    FLD float ptr [ESP]                 ; 004496cc
    FCOMP float ptr [EBX + 0x24]        ; 004496cf
    FNSTSW AX                           ; 004496d2
    SAHF                                ; 004496d4
    JC 0x004496e0                       ; 004496d5
        ;   XREF to: 004496e0 (CONDITIONAL_JUMP)  ; LAB_004496e0
    XOR EAX,EAX                         ; 004496d7
        ;   Label: LAB_004496d7
    ADD ESP,0x4                         ; 004496d9
        ;   Label: LAB_004496d9
    POP EDI                             ; 004496dc
    POP ESI                             ; 004496dd
    POP EBX                             ; 004496de
    RET                                 ; 004496df
    FLD float ptr [EBX + 0x18]          ; 004496e0
        ;   Label: LAB_004496e0
    FMUL float ptr [EBX + 0x4c]         ; 004496e3
    FLD float ptr [EBX + 0x1c]          ; 004496e6
    FMUL float ptr [EBX + 0x4c]         ; 004496e9
    FLD float ptr [EBX + 0x4c]          ; 004496ec
    MOV dword ptr [EBX + 0x8],0x0       ; 004496ef
    MOV EAX,0x1                         ; 004496f6
    FSTP float ptr [EBX]                ; 004496fb
    FXCH                                ; 004496fd
    FADD float ptr [EBX + 0x10]         ; 004496ff
    FXCH                                ; 00449702
    FADD float ptr [EBX + 0x14]         ; 00449704
    FLD float ptr [EBX + 0x54]          ; 00449707
    FLD float ptr [EBX + 0x58]          ; 0044970a
    FSUBP ST2,ST0                       ; 0044970d
    FSUBP ST2,ST0                       ; 0044970f
    FSTP float ptr [EBX + 0xc]          ; 00449711
    FSTP float ptr [EBX + 0x4]          ; 00449714
    ADD ESP,0x4                         ; 00449717
    POP EDI                             ; 0044971a
    POP ESI                             ; 0044971b
    POP EBX                             ; 0044971c
    RET                                 ; 0044971d

