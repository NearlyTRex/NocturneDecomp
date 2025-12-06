; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_superopt.cpp_CObj_copyFrom_FUN_005d2650(CObj * this_ptr, CObj * source)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; CObj *           Stack[0x8]:4   source
;
; XREF[1]:
;   shape_superopt.cpp_COptimize_FUN_005d71e0 at 005d71fa
;
; Referenced Globals:
;   TerminatedCString s_Unable_to_allocate_RAM_f_006543bf
;
; Called Functions:
;   shape_superopt.cpp_logToFile_FUN_005c7910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d2650
        ;   Label: shape_superopt.cpp_CObj_copyFrom_FUN_005d2650
    PUSH EBP                            ; 005d2651
    MOV EBP,dword ptr [ESP + 0xc]       ; 005d2652
    PUSH EBP                            ; 005d2656
    MOV EAX,dword ptr [EBP + 0x18]      ; 005d2657
    CALL dword ptr [EAX + 0x1c]         ; 005d265a
    ADD ESP,0x4                         ; 005d265d
    MOV EAX,dword ptr [EBP + 0x18]      ; 005d2660
    PUSH EBP                            ; 005d2663
    CALL dword ptr [EAX]                ; 005d2664
    ADD ESP,0x4                         ; 005d2666
    MOV EDX,dword ptr [ESP + 0x10]      ; 005d2669
    MOV ECX,dword ptr [EDX]             ; 005d266d
    PUSH ECX                            ; 005d266f
    MOV EBX,dword ptr [EDX + 0x8]       ; 005d2670
    PUSH EBX                            ; 005d2673
    MOV EAX,dword ptr [EBP + 0x18]      ; 005d2674
    PUSH EBP                            ; 005d2677
    CALL dword ptr [EAX + 0x8]          ; 005d2678
    ADD ESP,0xc                         ; 005d267b
    TEST EAX,EAX                        ; 005d267e
    JZ 0x005d2704                       ; 005d2680 | LAB_005d2704
        ;   XREF to: 005d2704 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 005d2686
    PUSH ESI                            ; 005d2687
    MOV EAX,dword ptr [EBP]             ; 005d2688
    MOV ESI,dword ptr [ESP + 0x18]      ; 005d268b
    SHL EAX,0x3                         ; 005d268f
    MOV EDI,dword ptr [EBP + 0x4]       ; 005d2692
    LEA ECX,[EAX*0x8 + 0x0]             ; 005d2695
    MOV ESI,dword ptr [ESI + 0x4]       ; 005d269c
    SUB ECX,EAX                         ; 005d269f
    PUSH EDI                            ; 005d26a1
    MOV EAX,ECX                         ; 005d26a2
    SHR ECX,0x2                         ; 005d26a4
    MOVSD.REP ES:EDI,ESI                ; 005d26a7
    MOV CL,AL                           ; 005d26a9
    AND CL,0x3                          ; 005d26ab
    MOVSB.REP ES:EDI,ESI                ; 005d26ae
    POP EDI                             ; 005d26b0
    MOV EDI,dword ptr [EBP + 0x8]       ; 005d26b1
    XOR ESI,ESI                         ; 005d26b4
    TEST EDI,EDI                        ; 005d26b6
    JBE 0x005d26f0                      ; 005d26b8 | LAB_005d26f0
        ;   XREF to: 005d26f0 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 005d26ba
    MOV ECX,dword ptr [ESP + 0x18]      ; 005d26bc
        ;   Label: LAB_005d26bc
    PUSH EBP                            ; 005d26c0
    MOV ECX,dword ptr [ECX + 0xc]       ; 005d26c1
    MOV EAX,dword ptr [EBP + 0xc]       ; 005d26c4
    ADD ECX,EBX                         ; 005d26c7
    ADD EAX,EBX                         ; 005d26c9
    PUSH ECX                            ; 005d26cb
    MOV EDX,dword ptr [EAX + 0x64]      ; 005d26cc
    PUSH EAX                            ; 005d26cf
    INC ESI                             ; 005d26d0
    ADD EBX,0x68                        ; 005d26d1
    CALL dword ptr [EDX + 0x4]          ; 005d26d4
    MOV EAX,dword ptr [EBP + 0x8]       ; 005d26d7
    ADD ESP,0xc                         ; 005d26da
    CMP ESI,EAX                         ; 005d26dd
    JC 0x005d26bc                       ; 005d26df | LAB_005d26bc
        ;   XREF to: 005d26bc (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 005d26e1
    LEA EDX,[EDX]                       ; 005d26e7
    LEA EAX,[EAX]                       ; 005d26ed
    MOV EAX,dword ptr [ESP + 0x18]      ; 005d26f0
        ;   Label: LAB_005d26f0
    MOV EAX,dword ptr [EAX + 0x10]      ; 005d26f4
    MOV dword ptr [EBP + 0x10],EAX      ; 005d26f7
    MOV EAX,0x1                         ; 005d26fa
    POP ESI                             ; 005d26ff
    POP EDI                             ; 005d2700
    POP EBP                             ; 005d2701
    POP EBX                             ; 005d2702
    RET                                 ; 005d2703
    PUSH 0x6543bf                       ; 005d2704 | = "Unable to allocate RAM for object copy" | s_Unable_to_allocate_RAM_f_006543bf = Unable to allocate RAM for object copy
        ;   Label: LAB_005d2704
    CALL shape_superopt.cpp_logToFile_FUN_005c7910 ; 005d2709 | void shape_superopt.cpp_logToFile_FUN_005c7910(char * format)
        ;   XREF to: 005c7910 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005d270e
    XOR EAX,EAX                         ; 005d2711
    POP EBP                             ; 005d2713
    POP EBX                             ; 005d2714
    RET                                 ; 005d2715

