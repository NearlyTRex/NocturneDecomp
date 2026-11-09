; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_clipEdgeToPlane_FUN_00455460(float *param_1,float *param_2,float *param_3,int param_4,uint param_5,int param_6,uint param_7,int param_8,uint param_9,double param_10)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
;
; XREF[3]:
;   core_dcube.cpp_FUN_004558d0 at 004559aa
;   core_dcube.cpp_FUN_00455d00 at 00455de2
;   core_dcube.cpp_FUN_004570de at 004576f1
;
; Referenced Globals:
;   TerminatedCString s_core_dcube_cpp_005d7a87
;   TerminatedCString s_Bad_clip_005d7a99
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455460
        ;   Label: core_dcube.cpp_clipEdgeToPlane_FUN_00455460
    PUSH ESI                            ; 00455461
    PUSH EDI                            ; 00455462
    PUSH EBP                            ; 00455463
    MOV EBP,ESP                         ; 00455464
    SUB ESP,0x18                        ; 00455466
    AND ESP,0xfffffff8                  ; 00455469
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045546c
    MOV EDI,dword ptr [EBP + 0x18]      ; 0045546f
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00455472
    FLD float ptr [EDI + 0x4]           ; 00455475
    FSUB float ptr [EBX + 0x4]          ; 00455478
    FMUL double ptr [EBP + 0x28]        ; 0045547b
    FLD float ptr [EDI]                 ; 0045547e
    FSUB float ptr [EBX]                ; 00455480
    FMUL double ptr [EBP + 0x20]        ; 00455482
    FADDP                               ; 00455485
    FLD float ptr [EDI + 0x8]           ; 00455487
    FSUB float ptr [EBX + 0x8]          ; 0045548a
    FMUL double ptr [EBP + 0x30]        ; 0045548d
    FADDP                               ; 00455490
    FSTP double ptr [ESP]               ; 00455492
    MOV EDX,dword ptr [ESP + 0x4]       ; 00455495
    MOV ECX,dword ptr [ESP]             ; 00455499
    TEST EDX,0x7fffffff                 ; 0045549c
    JNZ 0x004554ac                      ; 004554a2
        ;   XREF to: 004554ac (CONDITIONAL_JUMP)  ; LAB_004554ac
    TEST ECX,ECX                        ; 004554a4
    JZ 0x004555b6                       ; 004554a6
        ;   XREF to: 004555b6 (CONDITIONAL_JUMP)  ; LAB_004555b6
    FLD float ptr [EBX]                 ; 004554ac
        ;   Label: LAB_004554ac
    FLD double ptr [EBP + 0x20]         ; 004554ae
    FMUL ST1                            ; 004554b1
    FADD double ptr [EBP + 0x38]        ; 004554b3
    FLD float ptr [EBX + 0x4]           ; 004554b6
    FMUL double ptr [EBP + 0x28]        ; 004554b9
    FADDP                               ; 004554bc
    FLD float ptr [EBX + 0x8]           ; 004554be
    FMUL double ptr [EBP + 0x30]        ; 004554c1
    FADDP                               ; 004554c4
    FLD ST0                             ; 004554c6
    FCHS                                ; 004554c8
    FDIV double ptr [ESP]               ; 004554ca
    FLD float ptr [EDI]                 ; 004554cd
    FSUB float ptr [EBX]                ; 004554cf
    FXCH                                ; 004554d1
    FSTP ST2                            ; 004554d3
    FMUL ST1                            ; 004554d5
    FADDP ST2,ST0                       ; 004554d7
    FXCH                                ; 004554d9
    FSTP float ptr [ESI]                ; 004554db
    FLD float ptr [EDI + 0x4]           ; 004554dd
    FSUB float ptr [EBX + 0x4]          ; 004554e0
    FMUL ST1                            ; 004554e3
    FADD float ptr [EBX + 0x4]          ; 004554e5
    FSTP float ptr [ESI + 0x4]          ; 004554e8
    FLD float ptr [EDI + 0x8]           ; 004554eb
    FSUB float ptr [EBX + 0x8]          ; 004554ee
    FMULP                               ; 004554f1
    MOV ECX,dword ptr [EBP + 0x24]      ; 004554f3
    FADD float ptr [EBX + 0x8]          ; 004554f6
    MOV EBX,dword ptr [EBP + 0x20]      ; 004554f9
    FSTP float ptr [ESI + 0x8]          ; 004554fc
    TEST ECX,0x7fffffff                 ; 004554ff
    JNZ 0x0045550b                      ; 00455505
        ;   XREF to: 0045550b (CONDITIONAL_JUMP)  ; LAB_0045550b
    TEST EBX,EBX                        ; 00455507
    JZ 0x00455539                       ; 00455509
        ;   XREF to: 00455539 (CONDITIONAL_JUMP)  ; LAB_00455539
    MOV EDI,dword ptr [EBP + 0x2c]      ; 0045550b
        ;   Label: LAB_0045550b
    MOV EAX,dword ptr [EBP + 0x28]      ; 0045550e
    TEST EDI,0x7fffffff                 ; 00455511
    JNZ 0x00455539                      ; 00455517
        ;   XREF to: 00455539 (CONDITIONAL_JUMP)  ; LAB_00455539
    TEST EAX,EAX                        ; 00455519
    JNZ 0x00455539                      ; 0045551b
        ;   XREF to: 00455539 (CONDITIONAL_JUMP)  ; LAB_00455539
    MOV EDX,dword ptr [EBP + 0x34]      ; 0045551d
    MOV ECX,dword ptr [EBP + 0x30]      ; 00455520
    TEST EDX,0x7fffffff                 ; 00455523
    JNZ 0x00455539                      ; 00455529
        ;   XREF to: 00455539 (CONDITIONAL_JUMP)  ; LAB_00455539
    TEST ECX,ECX                        ; 0045552b
    JNZ 0x00455539                      ; 0045552d
        ;   XREF to: 00455539 (CONDITIONAL_JUMP)  ; LAB_00455539
    FLD double ptr [EBP + 0x20]         ; 0045552f
    FCHS                                ; 00455532
    FMUL double ptr [EBP + 0x38]        ; 00455534
    FSTP float ptr [ESI]                ; 00455537
    MOV EBX,dword ptr [EBP + 0x24]      ; 00455539
        ;   Label: LAB_00455539
    MOV EDI,dword ptr [EBP + 0x20]      ; 0045553c
    TEST EBX,0x7fffffff                 ; 0045553f
    JNZ 0x00455579                      ; 00455545
        ;   XREF to: 00455579 (CONDITIONAL_JUMP)  ; LAB_00455579
    TEST EDI,EDI                        ; 00455547
    JNZ 0x00455579                      ; 00455549
        ;   XREF to: 00455579 (CONDITIONAL_JUMP)  ; LAB_00455579
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0045554b
    MOV EDX,dword ptr [EBP + 0x28]      ; 0045554e
    TEST EAX,0x7fffffff                 ; 00455551
    JNZ 0x0045555c                      ; 00455556
        ;   XREF to: 0045555c (CONDITIONAL_JUMP)  ; LAB_0045555c
    TEST EDX,EDX                        ; 00455558
    JZ 0x00455579                       ; 0045555a
        ;   XREF to: 00455579 (CONDITIONAL_JUMP)  ; LAB_00455579
    MOV ECX,dword ptr [EBP + 0x34]      ; 0045555c
        ;   Label: LAB_0045555c
    MOV EBX,dword ptr [EBP + 0x30]      ; 0045555f
    TEST ECX,0x7fffffff                 ; 00455562
    JNZ 0x00455579                      ; 00455568
        ;   XREF to: 00455579 (CONDITIONAL_JUMP)  ; LAB_00455579
    TEST EBX,EBX                        ; 0045556a
    JNZ 0x00455579                      ; 0045556c
        ;   XREF to: 00455579 (CONDITIONAL_JUMP)  ; LAB_00455579
    FLD double ptr [EBP + 0x28]         ; 0045556e
    FCHS                                ; 00455571
    FMUL double ptr [EBP + 0x38]        ; 00455573
    FSTP float ptr [ESI + 0x4]          ; 00455576
    MOV EDI,dword ptr [EBP + 0x24]      ; 00455579
        ;   Label: LAB_00455579
    MOV EAX,dword ptr [EBP + 0x20]      ; 0045557c
    TEST EDI,0x7fffffff                 ; 0045557f
    JNZ 0x004555af                      ; 00455585
        ;   XREF to: 004555af (CONDITIONAL_JUMP)  ; LAB_004555af
    TEST EAX,EAX                        ; 00455587
    JNZ 0x004555af                      ; 00455589
        ;   XREF to: 004555af (CONDITIONAL_JUMP)  ; LAB_004555af
    MOV EDX,dword ptr [EBP + 0x2c]      ; 0045558b
    MOV ECX,dword ptr [EBP + 0x28]      ; 0045558e
    TEST EDX,0x7fffffff                 ; 00455591
    JNZ 0x004555af                      ; 00455597
        ;   XREF to: 004555af (CONDITIONAL_JUMP)  ; LAB_004555af
    TEST ECX,ECX                        ; 00455599
    JNZ 0x004555af                      ; 0045559b
        ;   XREF to: 004555af (CONDITIONAL_JUMP)  ; LAB_004555af
    MOV EBX,dword ptr [EBP + 0x34]      ; 0045559d
    MOV EDI,dword ptr [EBP + 0x30]      ; 004555a0
    TEST EBX,0x7fffffff                 ; 004555a3
    JNZ 0x004555dd                      ; 004555a9
        ;   XREF to: 004555dd (CONDITIONAL_JUMP)  ; LAB_004555dd
    TEST EDI,EDI                        ; 004555ab
    JNZ 0x004555dd                      ; 004555ad
        ;   XREF to: 004555dd (CONDITIONAL_JUMP)  ; LAB_004555dd
    MOV ESP,EBP                         ; 004555af
        ;   Label: LAB_004555af
    POP EBP                             ; 004555b1
    POP EDI                             ; 004555b2
    POP ESI                             ; 004555b3
    POP EBX                             ; 004555b4
    RET                                 ; 004555b5
    MOV EAX,0x5d7a87                    ; 004555b6 | = "..\\core\\dcube.cpp"
        ;   Label: LAB_004555b6
    MOV EDX,0x6e                        ; 004555bb
    PUSH 0x5d7a99                       ; 004555c0 | = "Bad clip!"
    MOV [0x01d1d400],EAX                ; 004555c5 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 004555ca | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004555d0
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004555d5
    JMP 0x004554ac                      ; 004555d8
        ;   XREF to: 004554ac (UNCONDITIONAL_JUMP)  ; LAB_004554ac
    FLD double ptr [EBP + 0x30]         ; 004555dd
        ;   Label: LAB_004555dd
    FCHS                                ; 004555e0
    FMUL double ptr [EBP + 0x38]        ; 004555e2
    FSTP float ptr [ESI + 0x8]          ; 004555e5
    MOV ESP,EBP                         ; 004555e8
    POP EBP                             ; 004555ea
    POP EDI                             ; 004555eb
    POP ESI                             ; 004555ec
    POP EBX                             ; 004555ed
    RET                                 ; 004555ee

