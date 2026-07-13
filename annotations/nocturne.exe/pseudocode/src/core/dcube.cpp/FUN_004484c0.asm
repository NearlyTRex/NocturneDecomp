; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004484c0(float *param_1,float *param_2,float *param_3,int param_4,uint param_5,int param_6,uint param_7,int param_8,uint param_9,double param_10)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
;
; XREF[3]:
;   FUN_00448660 at 0044873c
;   FUN_004487c0 at 004488a2
;   FUN_00448bf0 at 00448cd2
;
; Referenced Globals:
;   undefined4 s_..\\core\\dcube.cpp_0057bb72+1
;   string s_Bad_clip!_0057bb85
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004484c0
        ;   Label: FUN_004484c0
    PUSH ESI                            ; 004484c1
    PUSH EDI                            ; 004484c2
    PUSH EBP                            ; 004484c3
    MOV EBP,ESP                         ; 004484c4
    SUB ESP,0x18                        ; 004484c6
    AND ESP,0xfffffff8                  ; 004484c9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004484cc
    MOV EDI,dword ptr [EBP + 0x18]      ; 004484cf
    MOV ESI,dword ptr [EBP + 0x1c]      ; 004484d2
    FLD float ptr [EDI + 0x4]           ; 004484d5
    FSUB float ptr [EBX + 0x4]          ; 004484d8
    FMUL double ptr [EBP + 0x28]        ; 004484db
    FLD float ptr [EDI]                 ; 004484de
    FSUB float ptr [EBX]                ; 004484e0
    FMUL double ptr [EBP + 0x20]        ; 004484e2
    FADDP                               ; 004484e5
    FLD float ptr [EDI + 0x8]           ; 004484e7
    FSUB float ptr [EBX + 0x8]          ; 004484ea
    FMUL double ptr [EBP + 0x30]        ; 004484ed
    FADDP                               ; 004484f0
    FSTP double ptr [ESP]               ; 004484f2
    MOV EDX,dword ptr [ESP + 0x4]       ; 004484f5
    MOV ECX,dword ptr [ESP]             ; 004484f9
    TEST EDX,0x7fffffff                 ; 004484fc
    JNZ 0x0044850c                      ; 00448502
        ;   XREF to: 0044850c (CONDITIONAL_JUMP)  ; LAB_0044850c
    TEST ECX,ECX                        ; 00448504
    JZ 0x00448616                       ; 00448506
        ;   XREF to: 00448616 (CONDITIONAL_JUMP)  ; LAB_00448616
    FLD float ptr [EBX]                 ; 0044850c
        ;   Label: LAB_0044850c
    FLD double ptr [EBP + 0x20]         ; 0044850e
    FMUL ST1                            ; 00448511
    FADD double ptr [EBP + 0x38]        ; 00448513
    FLD float ptr [EBX + 0x4]           ; 00448516
    FMUL double ptr [EBP + 0x28]        ; 00448519
    FADDP                               ; 0044851c
    FLD float ptr [EBX + 0x8]           ; 0044851e
    FMUL double ptr [EBP + 0x30]        ; 00448521
    FADDP                               ; 00448524
    FLD ST0                             ; 00448526
    FCHS                                ; 00448528
    FDIV double ptr [ESP]               ; 0044852a
    FLD float ptr [EDI]                 ; 0044852d
    FSUB float ptr [EBX]                ; 0044852f
    FXCH                                ; 00448531
    FSTP ST2                            ; 00448533
    FMUL ST1                            ; 00448535
    FADDP ST2,ST0                       ; 00448537
    FXCH                                ; 00448539
    FSTP float ptr [ESI]                ; 0044853b
    FLD float ptr [EDI + 0x4]           ; 0044853d
    FSUB float ptr [EBX + 0x4]          ; 00448540
    FMUL ST1                            ; 00448543
    FADD float ptr [EBX + 0x4]          ; 00448545
    FSTP float ptr [ESI + 0x4]          ; 00448548
    FLD float ptr [EDI + 0x8]           ; 0044854b
    FSUB float ptr [EBX + 0x8]          ; 0044854e
    FMULP                               ; 00448551
    MOV ECX,dword ptr [EBP + 0x24]      ; 00448553
    FADD float ptr [EBX + 0x8]          ; 00448556
    MOV EBX,dword ptr [EBP + 0x20]      ; 00448559
    FSTP float ptr [ESI + 0x8]          ; 0044855c
    TEST ECX,0x7fffffff                 ; 0044855f
    JNZ 0x0044856b                      ; 00448565
        ;   XREF to: 0044856b (CONDITIONAL_JUMP)  ; LAB_0044856b
    TEST EBX,EBX                        ; 00448567
    JZ 0x00448599                       ; 00448569
        ;   XREF to: 00448599 (CONDITIONAL_JUMP)  ; LAB_00448599
    MOV EDI,dword ptr [EBP + 0x2c]      ; 0044856b
        ;   Label: LAB_0044856b
    MOV EAX,dword ptr [EBP + 0x28]      ; 0044856e
    TEST EDI,0x7fffffff                 ; 00448571
    JNZ 0x00448599                      ; 00448577
        ;   XREF to: 00448599 (CONDITIONAL_JUMP)  ; LAB_00448599
    TEST EAX,EAX                        ; 00448579
    JNZ 0x00448599                      ; 0044857b
        ;   XREF to: 00448599 (CONDITIONAL_JUMP)  ; LAB_00448599
    MOV EDX,dword ptr [EBP + 0x34]      ; 0044857d
    MOV ECX,dword ptr [EBP + 0x30]      ; 00448580
    TEST EDX,0x7fffffff                 ; 00448583
    JNZ 0x00448599                      ; 00448589
        ;   XREF to: 00448599 (CONDITIONAL_JUMP)  ; LAB_00448599
    TEST ECX,ECX                        ; 0044858b
    JNZ 0x00448599                      ; 0044858d
        ;   XREF to: 00448599 (CONDITIONAL_JUMP)  ; LAB_00448599
    FLD double ptr [EBP + 0x20]         ; 0044858f
    FCHS                                ; 00448592
    FMUL double ptr [EBP + 0x38]        ; 00448594
    FSTP float ptr [ESI]                ; 00448597
    MOV EBX,dword ptr [EBP + 0x24]      ; 00448599
        ;   Label: LAB_00448599
    MOV EDI,dword ptr [EBP + 0x20]      ; 0044859c
    TEST EBX,0x7fffffff                 ; 0044859f
    JNZ 0x004485d9                      ; 004485a5
        ;   XREF to: 004485d9 (CONDITIONAL_JUMP)  ; LAB_004485d9
    TEST EDI,EDI                        ; 004485a7
    JNZ 0x004485d9                      ; 004485a9
        ;   XREF to: 004485d9 (CONDITIONAL_JUMP)  ; LAB_004485d9
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004485ab
    MOV EDX,dword ptr [EBP + 0x28]      ; 004485ae
    TEST EAX,0x7fffffff                 ; 004485b1
    JNZ 0x004485bc                      ; 004485b6
        ;   XREF to: 004485bc (CONDITIONAL_JUMP)  ; LAB_004485bc
    TEST EDX,EDX                        ; 004485b8
    JZ 0x004485d9                       ; 004485ba
        ;   XREF to: 004485d9 (CONDITIONAL_JUMP)  ; LAB_004485d9
    MOV ECX,dword ptr [EBP + 0x34]      ; 004485bc
        ;   Label: LAB_004485bc
    MOV EBX,dword ptr [EBP + 0x30]      ; 004485bf
    TEST ECX,0x7fffffff                 ; 004485c2
    JNZ 0x004485d9                      ; 004485c8
        ;   XREF to: 004485d9 (CONDITIONAL_JUMP)  ; LAB_004485d9
    TEST EBX,EBX                        ; 004485ca
    JNZ 0x004485d9                      ; 004485cc
        ;   XREF to: 004485d9 (CONDITIONAL_JUMP)  ; LAB_004485d9
    FLD double ptr [EBP + 0x28]         ; 004485ce
    FCHS                                ; 004485d1
    FMUL double ptr [EBP + 0x38]        ; 004485d3
    FSTP float ptr [ESI + 0x4]          ; 004485d6
    MOV EDI,dword ptr [EBP + 0x24]      ; 004485d9
        ;   Label: LAB_004485d9
    MOV EAX,dword ptr [EBP + 0x20]      ; 004485dc
    TEST EDI,0x7fffffff                 ; 004485df
    JNZ 0x0044860f                      ; 004485e5
        ;   XREF to: 0044860f (CONDITIONAL_JUMP)  ; LAB_0044860f
    TEST EAX,EAX                        ; 004485e7
    JNZ 0x0044860f                      ; 004485e9
        ;   XREF to: 0044860f (CONDITIONAL_JUMP)  ; LAB_0044860f
    MOV EDX,dword ptr [EBP + 0x2c]      ; 004485eb
    MOV ECX,dword ptr [EBP + 0x28]      ; 004485ee
    TEST EDX,0x7fffffff                 ; 004485f1
    JNZ 0x0044860f                      ; 004485f7
        ;   XREF to: 0044860f (CONDITIONAL_JUMP)  ; LAB_0044860f
    TEST ECX,ECX                        ; 004485f9
    JNZ 0x0044860f                      ; 004485fb
        ;   XREF to: 0044860f (CONDITIONAL_JUMP)  ; LAB_0044860f
    MOV EBX,dword ptr [EBP + 0x34]      ; 004485fd
    MOV EDI,dword ptr [EBP + 0x30]      ; 00448600
    TEST EBX,0x7fffffff                 ; 00448603
    JNZ 0x0044863d                      ; 00448609
        ;   XREF to: 0044863d (CONDITIONAL_JUMP)  ; LAB_0044863d
    TEST EDI,EDI                        ; 0044860b
    JNZ 0x0044863d                      ; 0044860d
        ;   XREF to: 0044863d (CONDITIONAL_JUMP)  ; LAB_0044863d
    MOV ESP,EBP                         ; 0044860f
        ;   Label: LAB_0044860f
    POP EBP                             ; 00448611
    POP EDI                             ; 00448612
    POP ESI                             ; 00448613
    POP EBX                             ; 00448614
    RET                                 ; 00448615
    MOV EAX,0x57bb73                    ; 00448616 | s_..\core\dcube.cpp_0057bb72+1
        ;   Label: LAB_00448616
    MOV EDX,0x6e                        ; 0044861b
    PUSH 0x57bb85                       ; 00448620 | = "Bad clip!"
    MOV [0x01cc4800],EAX                ; 00448625 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0044862a | DAT_01cc4804
    CALL FUN_004c8440                   ; 00448630
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00448635
    JMP 0x0044850c                      ; 00448638
        ;   XREF to: 0044850c (UNCONDITIONAL_JUMP)  ; LAB_0044850c
    FLD double ptr [EBP + 0x30]         ; 0044863d
        ;   Label: LAB_0044863d
    FCHS                                ; 00448640
    FMUL double ptr [EBP + 0x38]        ; 00448642
    FSTP float ptr [ESI + 0x8]          ; 00448645
    MOV ESP,EBP                         ; 00448648
    POP EBP                             ; 0044864a
    POP EDI                             ; 0044864b
    POP ESI                             ; 0044864c
    POP EBX                             ; 0044864d
    RET                                 ; 0044864e

