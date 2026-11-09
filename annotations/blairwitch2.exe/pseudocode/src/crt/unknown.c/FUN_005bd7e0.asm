; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bd7e0(int param_1,int *param_2,undefined4 param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005bd180 at 005bd3ca
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bd7e0
        ;   Label: crt_unknown.c_FUN_005bd7e0
    PUSH ESI                            ; 005bd7e1
    PUSH EDI                            ; 005bd7e2
    PUSH ES                             ; 005bd7e3
    MOV EDX,dword ptr [ESP + 0x14]      ; 005bd7e4
    MOV EAX,dword ptr [ESP + 0x18]      ; 005bd7e8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005bd7ec
    MOV CL,byte ptr [EDX + 0x10]        ; 005bd7f0
    TEST CL,0x1                         ; 005bd7f3
    JZ 0x005bd845                       ; 005bd7f6
        ;   XREF to: 005bd845 (CONDITIONAL_JUMP)  ; LAB_005bd845
    TEST CL,0x4                         ; 005bd7f8
    JZ 0x005bd809                       ; 005bd7fb
        ;   XREF to: 005bd809 (CONDITIONAL_JUMP)  ; LAB_005bd809
    MOV EDI,dword ptr [EAX]             ; 005bd7fd
    ADD EDI,0x8                         ; 005bd7ff
    MOV dword ptr [EAX],EDI             ; 005bd802
    LES EAX,[EDI + -0x8]                ; 005bd804
    JMP 0x005bd82e                      ; 005bd807
        ;   XREF to: 005bd82e (UNCONDITIONAL_JUMP)  ; LAB_005bd82e
    TEST CL,0x8                         ; 005bd809
        ;   Label: LAB_005bd809
    JZ 0x005bd81e                       ; 005bd80c
        ;   XREF to: 005bd81e (CONDITIONAL_JUMP)  ; LAB_005bd81e
    MOV ESI,dword ptr [EAX]             ; 005bd80e
    ADD ESI,0x4                         ; 005bd810
    MOV CX,DS                           ; 005bd813
    MOV dword ptr [EAX],ESI             ; 005bd815
    MOV ES,CX                           ; 005bd817
    MOV EAX,dword ptr [ESI + -0x4]      ; 005bd819
    JMP 0x005bd82e                      ; 005bd81c
        ;   XREF to: 005bd82e (UNCONDITIONAL_JUMP)  ; LAB_005bd82e
    MOV ECX,dword ptr [EAX]             ; 005bd81e
        ;   Label: LAB_005bd81e
    ADD ECX,0x4                         ; 005bd820
    MOV dword ptr [EAX],ECX             ; 005bd823
    MOV EAX,ECX                         ; 005bd825
    MOV CX,DS                           ; 005bd827
    MOV ES,CX                           ; 005bd829
    MOV EAX,dword ptr [EAX + -0x4]      ; 005bd82b
    MOV CH,byte ptr [EDX + 0x10]        ; 005bd82e
        ;   Label: LAB_005bd82e
    TEST CH,0x10                        ; 005bd831
    JZ 0x005bd83f                       ; 005bd834
        ;   XREF to: 005bd83f (CONDITIONAL_JUMP)  ; LAB_005bd83f
    MOV word ptr ES:[EAX],BX            ; 005bd836
    POP ES                              ; 005bd83a
    POP EDI                             ; 005bd83b
    POP ESI                             ; 005bd83c
    POP EBX                             ; 005bd83d
    RET                                 ; 005bd83e
    TEST CH,0x20                        ; 005bd83f
        ;   Label: LAB_005bd83f
    MOV dword ptr ES:[EAX],EBX          ; 005bd842
    POP ES                              ; 005bd845
        ;   Label: LAB_005bd845
    POP EDI                             ; 005bd846
    POP ESI                             ; 005bd847
    POP EBX                             ; 005bd848
    RET                                 ; 005bd849

