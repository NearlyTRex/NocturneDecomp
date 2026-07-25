; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_stdio_c_fgetc_FUN_00564570(undefined4 *param_1)
;
;
; XREF[28]:
;   FUN_00430210 at 0043027b
;   FUN_0043b5b0 at 0043b5b6
;   FUN_00452560 at 0045256f
;   FUN_004d7de0 at 004d7de6
;   FUN_004e08e0 at 004e08e6
;   FUN_004febd0 at 004fed79
;   FUN_00517190 at 00517196
;   FUN_00563290 at 00563299
;   core_actor.cpp_FUN_0040cb00 at 0040cb1b
;   core_actor.cpp_FUN_0040ce80 at 0040ce9b
;   ... and 18 more
;
; Referenced Globals:
;   void* PTR_FUN_005c1ac0 = 005671e4
;   void* PTR_FUN_005c1ac4 = 005671e4
;
; Called Functions:
;   FUN_00564640
;   FUN_005671e4
;   FUN_00568e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564570
        ;   Label: crt_stdio.c_fgetc_FUN_00564570
    PUSH ESI                            ; 00564571
    PUSH EDI                            ; 00564572
    PUSH EBP                            ; 00564573
    MOV EBX,dword ptr [ESP + 0x14]      ; 00564574
    MOV EDX,dword ptr [EBX + 0x10]      ; 00564578
    PUSH EDX                            ; 0056457b
    CALL dword ptr [0x005c1ac0]         ; 0056457c | PTR_FUN_005c1ac0
    MOV ESI,dword ptr [EBX + 0x8]       ; 00564582
    MOV ECX,dword ptr [ESI + 0xc]       ; 00564585
    ADD ESP,0x4                         ; 00564588
    CMP ECX,0x1                         ; 0056458b
    JZ 0x005645a9                       ; 0056458e
        ;   XREF to: 005645a9 (CONDITIONAL_JUMP)  ; LAB_005645a9
    TEST ECX,ECX                        ; 00564590
    JZ 0x005645a2                       ; 00564592
        ;   XREF to: 005645a2 (CONDITIONAL_JUMP)  ; LAB_005645a2
    MOV EBP,dword ptr [EBX + 0x10]      ; 00564594
    PUSH EBP                            ; 00564597
    MOV ESI,0xffffffff                  ; 00564598
    JMP 0x0056462e                      ; 0056459d
        ;   XREF to: 0056462e (UNCONDITIONAL_JUMP)  ; LAB_0056462e
    MOV dword ptr [ESI + 0xc],0x1       ; 005645a2
        ;   Label: LAB_005645a2
    TEST byte ptr [EBX + 0xc],0x1       ; 005645a9
        ;   Label: LAB_005645a9
    JNZ 0x005645c9                      ; 005645ad
        ;   XREF to: 005645c9 (CONDITIONAL_JUMP)  ; LAB_005645c9
    PUSH 0x4                            ; 005645af
    CALL FUN_00568e80                   ; 005645b1
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e80()
    MOV DL,byte ptr [EBX + 0xc]         ; 005645b6
    MOV ESI,0xffffffff                  ; 005645b9
    OR DL,0x20                          ; 005645be
    ADD ESP,0x4                         ; 005645c1
    MOV byte ptr [EBX + 0xc],DL         ; 005645c4
    JMP 0x005645ea                      ; 005645c7
        ;   XREF to: 005645ea (UNCONDITIONAL_JUMP)  ; LAB_005645ea
    MOV EAX,dword ptr [EBX + 0x4]       ; 005645c9
        ;   Label: LAB_005645c9
    DEC EAX                             ; 005645cc
    MOV dword ptr [EBX + 0x4],EAX       ; 005645cd
    TEST EAX,EAX                        ; 005645d0
    JGE 0x005645e1                      ; 005645d2
        ;   XREF to: 005645e1 (CONDITIONAL_JUMP)  ; LAB_005645e1
    PUSH EBX                            ; 005645d4
    CALL FUN_00564640                   ; 005645d5
        ;   XREF to: 00564640 (UNCONDITIONAL_CALL)  ; undefined FUN_00564640()
    ADD ESP,0x4                         ; 005645da
    MOV ESI,EAX                         ; 005645dd
    JMP 0x005645ea                      ; 005645df
        ;   XREF to: 005645ea (UNCONDITIONAL_JUMP)  ; LAB_005645ea
    MOV EAX,dword ptr [EBX]             ; 005645e1
        ;   Label: LAB_005645e1
    INC EAX                             ; 005645e3
    MOVZX ESI,byte ptr [EAX + -0x1]     ; 005645e4
    MOV dword ptr [EBX],EAX             ; 005645e8
    TEST byte ptr [EBX + 0xc],0x40      ; 005645ea
        ;   Label: LAB_005645ea
    JNZ 0x0056462a                      ; 005645ee
        ;   XREF to: 0056462a (CONDITIONAL_JUMP)  ; LAB_0056462a
    CMP ESI,0xd                         ; 005645f0
    JNZ 0x00564617                      ; 005645f3
        ;   XREF to: 00564617 (CONDITIONAL_JUMP)  ; LAB_00564617
    MOV ECX,dword ptr [EBX + 0x4]       ; 005645f5
    DEC ECX                             ; 005645f8
    MOV dword ptr [EBX + 0x4],ECX       ; 005645f9
    TEST ECX,ECX                        ; 005645fc
    JGE 0x0056460d                      ; 005645fe
        ;   XREF to: 0056460d (CONDITIONAL_JUMP)  ; LAB_0056460d
    PUSH EBX                            ; 00564600
    CALL FUN_00564640                   ; 00564601
        ;   XREF to: 00564640 (UNCONDITIONAL_CALL)  ; undefined FUN_00564640()
    ADD ESP,0x4                         ; 00564606
    MOV ESI,EAX                         ; 00564609
    JMP 0x00564617                      ; 0056460b
        ;   XREF to: 00564617 (UNCONDITIONAL_JUMP)  ; LAB_00564617
    MOV EAX,dword ptr [EBX]             ; 0056460d
        ;   Label: LAB_0056460d
    MOV DL,byte ptr [EAX]               ; 0056460f
    INC EAX                             ; 00564611
    MOVZX ESI,DL                        ; 00564612
    MOV dword ptr [EBX],EAX             ; 00564615
    CMP ESI,0x1a                        ; 00564617
        ;   Label: LAB_00564617
    JNZ 0x0056462a                      ; 0056461a
        ;   XREF to: 0056462a (CONDITIONAL_JUMP)  ; LAB_0056462a
    MOV CL,byte ptr [EBX + 0xc]         ; 0056461c
    OR CL,0x10                          ; 0056461f
    MOV ESI,0xffffffff                  ; 00564622
    MOV byte ptr [EBX + 0xc],CL         ; 00564627
    MOV EDI,dword ptr [EBX + 0x10]      ; 0056462a
        ;   Label: LAB_0056462a
    PUSH EDI                            ; 0056462d
    CALL dword ptr [0x005c1ac4]         ; 0056462e | PTR_FUN_005c1ac4
        ;   Label: LAB_0056462e
    ADD ESP,0x4                         ; 00564634
    MOV EAX,ESI                         ; 00564637
    POP EBP                             ; 00564639
    POP EDI                             ; 0056463a
    POP ESI                             ; 0056463b
    POP EBX                             ; 0056463c
    RET                                 ; 0056463d

