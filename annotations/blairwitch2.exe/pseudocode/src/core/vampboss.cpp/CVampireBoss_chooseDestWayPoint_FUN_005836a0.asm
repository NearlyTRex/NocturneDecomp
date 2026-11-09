; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005836a0(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_vampboss.cpp_FUN_00581910 at 00582bc9
;
; Referenced Globals:
;   TerminatedCString s_core_vampboss_cpp_005edbd2
;   TerminatedCString s_CVampireBoss_chooseDestW_005edbe7
;   undefined4 DAT_01cedef4
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005836a0
        ;   Label: core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005836a0
    PUSH ESI                            ; 005836a1
    PUSH EDI                            ; 005836a2
    PUSH EBP                            ; 005836a3
    SUB ESP,0x24                        ; 005836a4
    MOV EBP,dword ptr [ESP + 0x38]      ; 005836a7
    MOV EDX,0xcb045fed                  ; 005836ab
    LEA EDI,[EBP + 0x20]                ; 005836b0
    MOV dword ptr [EBP + 0xc3b84],0x0   ; 005836b3
    XOR EBX,EBX                         ; 005836bd
    MOV ESI,EBP                         ; 005836bf
    MOV dword ptr [ESP + 0x14],EDX      ; 005836c1
    CMP dword ptr [ESI + 0xc3b88],0x0   ; 005836c5
        ;   Label: LAB_005836c5
    JZ 0x00583755                       ; 005836cc
        ;   XREF to: 00583755 (CONDITIONAL_JUMP)  ; LAB_00583755
    MOV EAX,[0x01cedef4]                ; 005836d2 | DAT_01cedef4
        ;   Label: LAB_005836d2
    MOV EDX,dword ptr [EAX*0x4 + 0x1cedee4] ; 005836d7
    MOV EAX,dword ptr [ESI + 0xc3b88]   ; 005836de
    FLD float ptr [EAX + 0x20]          ; 005836e4
    FSUB float ptr [EDX + 0x20]         ; 005836e7
    FMUL ST0                            ; 005836ea
    FLD float ptr [EAX + 0x20]          ; 005836ec
    FSUB float ptr [EDI]                ; 005836ef
    FMUL ST0                            ; 005836f1
    FLD float ptr [EAX + 0x24]          ; 005836f3
    FSUB float ptr [EDX + 0x24]         ; 005836f6
    FMUL ST0                            ; 005836f9
    FLD float ptr [EAX + 0x24]          ; 005836fb
    FSUB float ptr [EDI + 0x4]          ; 005836fe
    FMUL ST0                            ; 00583701
    FLD float ptr [EAX + 0x28]          ; 00583703
    FXCH                                ; 00583706
    FADDP ST3,ST0                       ; 00583708
    FSUB float ptr [EDI + 0x8]          ; 0058370a
    FMUL ST0                            ; 0058370d
    FLD float ptr [EAX + 0x28]          ; 0058370f
    FXCH ST2                            ; 00583712
    FADDP ST4,ST0                       ; 00583714
    FXCH                                ; 00583716
    FSUB float ptr [EDX + 0x28]         ; 00583718
    FMUL ST0                            ; 0058371b
    FXCH                                ; 0058371d
    FADDP ST2,ST0                       ; 0058371f
    FADDP ST2,ST0                       ; 00583721
    FADDP                               ; 00583723
    FST float ptr [ESP + 0x18]          ; 00583725
    FCOMP float ptr [ESP + 0x14]        ; 00583729
    FNSTSW AX                           ; 0058372d
    SAHF                                ; 0058372f
    JBE 0x00583740                      ; 00583730
        ;   XREF to: 00583740 (CONDITIONAL_JUMP)  ; LAB_00583740
    MOV EAX,dword ptr [ESP + 0x18]      ; 00583732
    MOV dword ptr [EBP + 0xc3b84],EBX   ; 00583736
    MOV dword ptr [ESP + 0x14],EAX      ; 0058373c
    INC EBX                             ; 00583740
        ;   Label: LAB_00583740
    ADD ESI,0x4                         ; 00583741
    CMP EBX,0x4                         ; 00583744
    JL 0x005836c5                       ; 00583747
        ;   XREF to: 005836c5 (CONDITIONAL_JUMP)  ; LAB_005836c5
    ADD ESP,0x24                        ; 0058374d
    POP EBP                             ; 00583750
    POP EDI                             ; 00583751
    POP ESI                             ; 00583752
    POP EBX                             ; 00583753
    RET                                 ; 00583754
    PUSH EBX                            ; 00583755
        ;   Label: LAB_00583755
    MOV EAX,0x5edbd2                    ; 00583756 | = "..\\core\\vampboss.cpp"
    MOV EDX,0x428                       ; 0058375b
    PUSH 0x5edbe7                       ; 00583760 | = "CVampireBoss::chooseDestWayPoint - wa..."
    MOV [0x01d046a0],EAX                ; 00583765 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0058376a | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00583770
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00583775
    JMP 0x005836d2                      ; 00583778
        ;   XREF to: 005836d2 (UNCONDITIONAL_JUMP)  ; LAB_005836d2

