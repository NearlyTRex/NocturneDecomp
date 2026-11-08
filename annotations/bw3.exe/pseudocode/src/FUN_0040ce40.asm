; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_0040ce40(float param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[152]:
;   FUN_0040cab0 at 0040cc3e
;   FUN_0040e140 at 0040e17a
;   FUN_0040e2b0 at 0040e2ea
;   FUN_0040eeb0 at 0040ef05
;   FUN_0040f010 at 0040f1e2
;   FUN_0040f8d0 at 0040f8dd
;   FUN_0040f9f0 at 0040fa51
;   FUN_00410490 at 00410550
;   FUN_00411750 at 00411776
;   FUN_00414550 at 00414683
;   ... and 142 more
;
; Referenced Globals:
;   undefined4 DAT_005b5ee5
;   undefined4 DAT_005b5ee9
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01d2156c
;
; Called Functions:
;   FUN_0040cdd0
;   FUN_005a35cc
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 0040ce40
        ;   Label: FUN_0040ce40
    FLD float ptr [ESP + 0x18]          ; 0040ce43
    MOV EAX,[0x005fe9dc]                ; 0040ce47 | DAT_005fe9dc
    FSUB float ptr [ESP + 0x14]         ; 0040ce4c
    MOV EDX,dword ptr [EAX + 0x260]     ; 0040ce50 | DAT_01d2156c
    FSTP float ptr [ESP + 0x4]          ; 0040ce56
    TEST EDX,EDX                        ; 0040ce5a
    JZ 0x0040ce8b                       ; 0040ce5c
        ;   XREF to: 0040ce8b (CONDITIONAL_JUMP)  ; LAB_0040ce8b
    CALL FUN_0040cdd0                   ; 0040ce5e
        ;   XREF to: 0040cdd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cdd0()
    MOV dword ptr [ESP + 0xc],EAX       ; 0040ce63
    FILD dword ptr [ESP + 0xc]          ; 0040ce67
    FMUL float ptr [0x005b5ee9]         ; 0040ce6b | DAT_005b5ee9
    FSTP float ptr [ESP + 0x8]          ; 0040ce71
        ;   Label: LAB_0040ce71
    FLD float ptr [ESP + 0x8]           ; 0040ce75
    FMUL float ptr [ESP + 0x4]          ; 0040ce79
    FADD float ptr [ESP + 0x14]         ; 0040ce7d
    FSTP float ptr [ESP]                ; 0040ce81
    MOV EAX,dword ptr [ESP]             ; 0040ce84
    ADD ESP,0x10                        ; 0040ce87
    RET                                 ; 0040ce8a
    CALL FUN_005a35cc                   ; 0040ce8b
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; undefined FUN_005a35cc()
        ;   Label: LAB_0040ce8b
    MOV dword ptr [ESP + 0xc],EAX       ; 0040ce90
    FILD dword ptr [ESP + 0xc]          ; 0040ce94
    FMUL float ptr [0x005b5ee5]         ; 0040ce98 | DAT_005b5ee5
    JMP 0x0040ce71                      ; 0040ce9e
        ;   XREF to: 0040ce71 (UNCONDITIONAL_JUMP)  ; LAB_0040ce71

