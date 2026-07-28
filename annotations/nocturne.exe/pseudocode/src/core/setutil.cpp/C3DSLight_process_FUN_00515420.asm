; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSLight_process_FUN_00515420(C3DSLight *this_ptr,CDemonLight *light,int apply_filter_flag)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light
; int              Stack[0xc]:4   apply_filter_flag
;
; XREF[1]:
;   core_set.cpp_CDemonSet_process_FUN_0050d040 at 0050d0df
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_00590e69
;   TerminatedCString s_C3DSLight_process_NULL_C_00590e7d
;   undefined4 DAT_005b9354
;   undefined4 DAT_005be368
;   undefined4 DAT_01bd1d80
;   undefined4 DAT_01c77850
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_01fb1d3c
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515420
        ;   Label: core_setutil.cpp_C3DSLight_process_FUN_00515420
    PUSH ESI                            ; 00515421
    PUSH EDI                            ; 00515422
    PUSH EBP                            ; 00515423
    MOV EBX,dword ptr [ESP + 0x14]      ; 00515424
    MOV ESI,dword ptr [ESP + 0x18]      ; 00515428
    TEST ESI,ESI                        ; 0051542c
    JZ 0x005155a0                       ; 0051542e
        ;   XREF to: 005155a0 (CONDITIONAL_JUMP)  ; LAB_005155a0
    CMP dword ptr [EBX + 0x11ec],0x0    ; 00515434
        ;   Label: LAB_00515434
    JZ 0x00515529                       ; 0051543b
        ;   XREF to: 00515529 (CONDITIONAL_JUMP)  ; LAB_00515529
    MOV EAX,dword ptr [EBX + 0x1890]    ; 00515441
    FLD float ptr [EBX + EAX*0x4 + 0x16f4] ; 00515447
    FLDZ                                ; 0051544e
    FCOMPP                              ; 00515450
    FNSTSW AX                           ; 00515452
    SAHF                                ; 00515454
    JNC 0x005154bc                      ; 00515455
        ;   XREF to: 005154bc (CONDITIONAL_JUMP)  ; LAB_005154bc
    MOV EDX,dword ptr [0x005b9354]      ; 00515457 | DAT_005b9354
    LEA EAX,[EBX + 0x1894]              ; 0051545d
    FLD float ptr [EDX + 0x264]         ; 00515463 | DAT_01c77850
    FADD float ptr [EAX]                ; 00515469
    FSTP float ptr [EAX]                ; 0051546b
    MOV EDX,dword ptr [EBX + 0x1890]    ; 0051546d
    SHL EDX,0x2                         ; 00515473
    ADD EDX,EBX                         ; 00515476
    FLD float ptr [EBX + 0x1894]        ; 00515478
    FCOMP float ptr [EDX + 0x16f4]      ; 0051547e
    FNSTSW AX                           ; 00515484
    SAHF                                ; 00515486
    JBE 0x005154bc                      ; 00515487
        ;   XREF to: 005154bc (CONDITIONAL_JUMP)  ; LAB_005154bc
    FLD float ptr [EDX + 0x16f4]        ; 00515489
    MOV EBP,dword ptr [EBX + 0x1890]    ; 0051548f
    MOV EDX,dword ptr [EBX + 0x11ec]    ; 00515495
    FSUBR float ptr [EBX + 0x1894]      ; 0051549b
    INC EBP                             ; 005154a1
    FSTP float ptr [EBX + 0x1894]       ; 005154a2
    MOV dword ptr [EBX + 0x1890],EBP    ; 005154a8
    CMP EBP,EDX                         ; 005154ae
    JL 0x005154bc                       ; 005154b0
        ;   XREF to: 005154bc (CONDITIONAL_JUMP)  ; LAB_005154bc
    MOV dword ptr [EBX + 0x1890],0x0    ; 005154b2
    MOV EAX,[0x01bd1d80]                ; 005154bc | DAT_01bd1d80
        ;   Label: LAB_005154bc
    MOV EDX,dword ptr [EBX + 0x17f8]    ; 005154c1
    IMUL EDX                            ; 005154c7
    SHRD EAX,EDX,0x10                   ; 005154c9
    MOV ECX,dword ptr [EBX + 0x1800]    ; 005154cd
    MOV EDX,dword ptr [EBX + 0x17fc]    ; 005154d3
    ADD ECX,EAX                         ; 005154d9
    MOV EAX,[0x01bd1d80]                ; 005154db | DAT_01bd1d80
    MOV dword ptr [EBX + 0x1800],ECX    ; 005154e0
    IMUL EDX                            ; 005154e6
    SHRD EAX,EDX,0x10                   ; 005154e8
    MOV EDI,dword ptr [EBX + 0x1804]    ; 005154ec
    ADD EDI,EAX                         ; 005154f2
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005154f4
    MOV dword ptr [EBX + 0x1804],EDI    ; 005154f8
    TEST EBP,EBP                        ; 005154fe
    JZ 0x00515529                       ; 00515500
        ;   XREF to: 00515529 (CONDITIONAL_JUMP)  ; LAB_00515529
    PUSH EDI                            ; 00515502
    MOV EDX,dword ptr [EBX + 0x1800]    ; 00515503
    MOV EAX,dword ptr [EBX + 0x1890]    ; 00515509
    PUSH EDX                            ; 0051550f
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x1774] ; 00515510
    PUSH ECX                            ; 00515517
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x1810] ; 00515518
    PUSH EDI                            ; 0051551f
    PUSH ESI                            ; 00515520
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0 ; 00515521
        ;   XREF to: 004501c0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 00515526
    FLD float ptr [EBX + 0x11e0]        ; 00515529
        ;   Label: LAB_00515529
    FLD1                                ; 0051552f
    FCOMPP                              ; 00515531
    FNSTSW AX                           ; 00515533
    SAHF                                ; 00515535
    JBE 0x0051558c                      ; 00515536
        ;   XREF to: 0051558c (CONDITIONAL_JUMP)  ; LAB_0051558c
    MOV EDX,dword ptr [0x005b9354]      ; 00515538 | DAT_005b9354
    LEA EAX,[EBX + 0x11e8]              ; 0051553e
    FLD float ptr [EDX + 0x264]         ; 00515544 | DAT_01c77850
    FADD float ptr [EAX]                ; 0051554a
    FSTP float ptr [EAX]                ; 0051554c
    FLD float ptr [EBX + 0x11e8]        ; 0051554e
    FCOMP float ptr [EBX + 0x11e4]      ; 00515554
    FNSTSW AX                           ; 0051555a
    SAHF                                ; 0051555c
    JBE 0x00515571                      ; 0051555d
        ;   XREF to: 00515571 (CONDITIONAL_JUMP)  ; LAB_00515571
    FLD float ptr [EBX + 0x11e4]        ; 0051555f
    FSUBR float ptr [EBX + 0x11e8]      ; 00515565
    FSTP float ptr [EBX + 0x11e8]       ; 0051556b
    FLD float ptr [EBX + 0x11e8]        ; 00515571
        ;   Label: LAB_00515571
    FCOMP float ptr [EBX + 0x11e0]      ; 00515577
    FNSTSW AX                           ; 0051557d
    SAHF                                ; 0051557f
    JBE 0x005155c8                      ; 00515580
        ;   XREF to: 005155c8 (CONDITIONAL_JUMP)  ; LAB_005155c8
    MOV dword ptr [ESI + 0x1cb4],0x0    ; 00515582
    MOV EAX,[0x005be368]                ; 0051558c | DAT_005be368
        ;   Label: LAB_0051558c
    MOV EAX,dword ptr [EAX + 0x15aab8]  ; 00515591 | DAT_01fb1d3c
    TEST EAX,EAX                        ; 00515597
    JZ 0x005155d4                       ; 00515599
        ;   XREF to: 005155d4 (CONDITIONAL_JUMP)  ; LAB_005155d4
    POP EBP                             ; 0051559b
    POP EDI                             ; 0051559c
    POP ESI                             ; 0051559d
    POP EBX                             ; 0051559e
    RET                                 ; 0051559f
    MOV EDX,0x590e69                    ; 005155a0 | = "..\\core\\setutil.cpp"
        ;   Label: LAB_005155a0
    MOV ECX,0x31e                       ; 005155a5
    PUSH 0x590e7d                       ; 005155aa | = "C3DSLight::process - NULL CDemonLight..."
    MOV dword ptr [0x01cc4800],EDX      ; 005155af | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 005155b5 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 005155bb
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 005155c0
    JMP 0x00515434                      ; 005155c3
        ;   XREF to: 00515434 (UNCONDITIONAL_JUMP)  ; LAB_00515434
    MOV dword ptr [ESI + 0x1cb4],0x1    ; 005155c8
        ;   Label: LAB_005155c8
    JMP 0x0051558c                      ; 005155d2
        ;   XREF to: 0051558c (UNCONDITIONAL_JUMP)  ; LAB_0051558c
    MOV dword ptr [ESI + 0x1cb4],EAX    ; 005155d4
        ;   Label: LAB_005155d4
    POP EBP                             ; 005155da
    POP EDI                             ; 005155db
    POP ESI                             ; 005155dc
    POP EBX                             ; 005155dd
    RET                                 ; 005155de

