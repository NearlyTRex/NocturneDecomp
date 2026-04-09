; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSLight_import3DS_FUN_005874d0(C3DSLight *this_ptr,_FILE *file_handle)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; char[255]        Stack[-0x188]:255  local_188
; char[80]         Stack[-0x88]:80  acStack_88
; float            Stack[-0x38]:4  fStack_38
; float            Stack[-0x34]:4  fStack_34
; float[4]         Stack[-0x30]:16  afStack_30
; float[2]         Stack[-0x20]:8  afStack_20
; undefined1[4]    Stack[-0x18]:4  auStack_18
; char *           Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_d_00649961
;   TerminatedCString s_d_d_d_00649965
;   TerminatedCString s_f_0064996f
;   TerminatedCString s_f_00649973
;   TerminatedCString s_f_f_f_00649977
;   TerminatedCString s_f_f_f_00649981
;   TerminatedCString s_f_0064998b
;   TerminatedCString s_f_0064998f
;   TerminatedCString s_f_00649993
;   TerminatedCString s_f_00649997
;   TerminatedCString s_f_0064999b
;
; Called Functions:
;   crt_math.c_atan2_FUN_006013b1
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005874d0
        ;   Label: core_setutil.cpp_C3DSLight_import3DS_FUN_005874d0
    PUSH ESI                            ; 005874d1
    PUSH EDI                            ; 005874d2
    PUSH EBP                            ; 005874d3
    MOV EBP,ESP                         ; 005874d4
    SUB ESP,0x178                       ; 005874d6
    AND ESP,0xfffffff8                  ; 005874dc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005874df
    MOV EDX,dword ptr [EBP + 0x18]      ; 005874e2
    PUSH EDX                            ; 005874e5
    MOV ESI,0xff                        ; 005874e6
    LEA EAX,[EBX + 0x4]                 ; 005874eb
    PUSH ESI                            ; 005874ee
    MOV dword ptr [ESP + 0x17c],EAX     ; 005874ef
    LEA EAX,[ESP + 0x8]                 ; 005874f6
    PUSH EAX                            ; 005874fa
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 005874fb
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00587500
    MOV EDI,ESP                         ; 00587503
    SUB ECX,ECX                         ; 00587505
    DEC ECX                             ; 00587507
    XOR EAX,EAX                         ; 00587508
    SCASB.REPNE ES:EDI                  ; 0058750a
    NOT ECX                             ; 0058750c
    DEC ECX                             ; 0058750e
    TEST ECX,ECX                        ; 0058750f
    JLE 0x00587519                      ; 00587511
        ;   XREF to: 00587519 (CONDITIONAL_JUMP)  ; LAB_00587519
    XOR AH,AH                           ; 00587513
    MOV byte ptr [ESP + ECX*0x1 + -0x1],AH ; 00587515
    MOV EDI,ESP                         ; 00587519
        ;   Label: LAB_00587519
    SUB ECX,ECX                         ; 0058751b
    DEC ECX                             ; 0058751d
    XOR EAX,EAX                         ; 0058751e
    SCASB.REPNE ES:EDI                  ; 00587520
    NOT ECX                             ; 00587522
    DEC ECX                             ; 00587524
    XOR DL,DL                           ; 00587525
    MOV EDI,dword ptr [ESP + 0x174]     ; 00587527
    MOV byte ptr [ESP + ESI*0x1],DL     ; 0058752e
    MOV ESI,ESP                         ; 00587531
    PUSH EDI                            ; 00587533
    MOV AL,byte ptr [ESI]               ; 00587534
        ;   Label: LAB_00587534
    MOV byte ptr [EDI],AL               ; 00587536
    CMP AL,0x0                          ; 00587538
    JZ 0x0058754c                       ; 0058753a
        ;   XREF to: 0058754c (CONDITIONAL_JUMP)  ; LAB_0058754c
    MOV AL,byte ptr [ESI + 0x1]         ; 0058753c
    ADD ESI,0x2                         ; 0058753f
    MOV byte ptr [EDI + 0x1],AL         ; 00587542
    ADD EDI,0x2                         ; 00587545
    CMP AL,0x0                          ; 00587548
    JNZ 0x00587534                      ; 0058754a
        ;   XREF to: 00587534 (CONDITIONAL_JUMP)  ; LAB_00587534
    POP EDI                             ; 0058754c
        ;   Label: LAB_0058754c
    PUSH EBX                            ; 0058754d
    PUSH 0x649961                       ; 0058754e | = "%d\n"
    MOV ECX,dword ptr [EBP + 0x18]      ; 00587553
    PUSH ECX                            ; 00587556
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00587557
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058755c
    LEA EAX,[EBX + 0x11cc]              ; 0058755f
    PUSH EAX                            ; 00587565
    LEA EAX,[EBX + 0x11c8]              ; 00587566
    PUSH EAX                            ; 0058756c
    LEA EAX,[EBX + 0x11c4]              ; 0058756d
    PUSH EAX                            ; 00587573
    PUSH 0x649965                       ; 00587574 | = "%d,%d,%d\n"
    MOV ESI,dword ptr [EBP + 0x18]      ; 00587579
    PUSH ESI                            ; 0058757c
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058757d
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00587582
    LEA EAX,[EBX + 0x11d0]              ; 00587585
    PUSH EAX                            ; 0058758b
    PUSH 0x64996f                       ; 0058758c | = "%f\n"
    PUSH ESI                            ; 00587591
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00587592
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00587597
    LEA EAX,[EBX + 0x11d4]              ; 0058759a
    PUSH EAX                            ; 005875a0
    PUSH 0x649973                       ; 005875a1 | = "%f\n"
    PUSH ESI                            ; 005875a6
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005875a7
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005875ac
    LEA EAX,[EBX + 0x10c]               ; 005875af
    PUSH EAX                            ; 005875b5
    LEA EAX,[EBX + 0x108]               ; 005875b6
    PUSH EAX                            ; 005875bc
    LEA EAX,[EBX + 0x104]               ; 005875bd
    PUSH EAX                            ; 005875c3
    PUSH 0x649977                       ; 005875c4 | = "%f,%f,%f\n"
    PUSH ESI                            ; 005875c9
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005875ca
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 005875cf
    LEA EAX,[ESP + 0x158]               ; 005875d2
    PUSH EAX                            ; 005875d9
    LEA EAX,[ESP + 0x158]               ; 005875da
    PUSH EAX                            ; 005875e1
    LEA EAX,[ESP + 0x158]               ; 005875e2
    PUSH EAX                            ; 005875e9
    PUSH 0x649981                       ; 005875ea | = "%f,%f,%f\n"
    PUSH ESI                            ; 005875ef
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005875f0
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 005875f5
    LEA EAX,[ESP + 0x168]               ; 005875f8
    PUSH EAX                            ; 005875ff
    PUSH 0x64998b                       ; 00587600 | = "%f\n"
    PUSH ESI                            ; 00587605
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00587606
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058760b
    PUSH ESI                            ; 0058760e
    PUSH 0x50                           ; 0058760f
    LEA EAX,[ESP + 0x108]               ; 00587611
    PUSH EAX                            ; 00587618
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00587619
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0058761e
    LEA EAX,[EBX + 0x11c]               ; 00587621
    PUSH EAX                            ; 00587627
    PUSH 0x64998f                       ; 00587628 | = "%f\n"
    PUSH ESI                            ; 0058762d
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058762e
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00587633
    LEA EAX,[ESP + 0x170]               ; 00587636
    PUSH EAX                            ; 0058763d
    PUSH 0x649993                       ; 0058763e | = "%f\n"
    PUSH ESI                            ; 00587643
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00587644
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00587649
    LEA EAX,[ESP + 0x170]               ; 0058764c
    PUSH EAX                            ; 00587653
    PUSH 0x649997                       ; 00587654 | = "%f\n"
    PUSH ESI                            ; 00587659
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058765a
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058765f
    LEA EAX,[ESP + 0x170]               ; 00587662
    PUSH EAX                            ; 00587669
    PUSH 0x64999b                       ; 0058766a | = "%f\n"
    PUSH ESI                            ; 0058766f
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00587670
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00587675
    FLD float ptr [ESP + 0x150]         ; 00587678
    FSUB float ptr [EBX + 0x104]        ; 0058767f
    FLD float ptr [ESP + 0x154]         ; 00587685
    FXCH                                ; 0058768c
    FSTP float ptr [ESP + 0x15c]        ; 0058768e
    FSUB float ptr [EBX + 0x108]        ; 00587695
    FLD float ptr [ESP + 0x158]         ; 0058769b
    FXCH                                ; 005876a2
    FSTP float ptr [ESP + 0x160]        ; 005876a4
    FSUB float ptr [EBX + 0x10c]        ; 005876ab
    FST float ptr [ESP + 0x164]         ; 005876b1
    FMUL float ptr [ESP + 0x164]        ; 005876b8
    FLD float ptr [ESP + 0x15c]         ; 005876bf
    FMUL ST0                            ; 005876c6
    FADDP                               ; 005876c8
    FSQRT                               ; 005876ca
    MOV EAX,dword ptr [ESP + 0x168]     ; 005876cc
    MOV dword ptr [EBX + 0x118],EAX     ; 005876d3
    FLD float ptr [ESP + 0x164]         ; 005876d9
    FLD float ptr [ESP + 0x15c]         ; 005876e0
    CALL crt_math.c_atan2_FUN_006013b1  ; 005876e7
        ;   XREF to: 006013b1 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_006013b1(float10 y, float10 x)
    FSTP float ptr [EBX + 0x114]        ; 005876ec
    FLD float ptr [ESP + 0x160]         ; 005876f2
    FXCH                                ; 005876f9
    FPATAN                              ; 005876fb
    NOP                                 ; 005876fd
    FCHS                                ; 005876fe
    FSTP float ptr [EBX + 0x110]        ; 00587700
    MOV ESP,EBP                         ; 00587706
    POP EBP                             ; 00587708
    POP EDI                             ; 00587709
    POP ESI                             ; 0058770a
    POP EBX                             ; 0058770b
    RET                                 ; 0058770c

