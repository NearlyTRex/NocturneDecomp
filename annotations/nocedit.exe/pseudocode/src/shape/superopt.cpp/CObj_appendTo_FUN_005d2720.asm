; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_superopt.cpp_CObj_appendTo_FUN_005d2720(CObj * this_ptr, CObj * dest_obj)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; CObj *           Stack[0x8]:4   dest_obj
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   shape_superopt.cpp_COptimize_FUN_005d71e0 at 005d722a
;
; Referenced Globals:
;   TerminatedCString s_Unable_to_add_vertices_t_006543e6
;   TerminatedCString s_Unable_to_add_polygons_t_00654407
;
; Called Functions:
;   shape_superopt.cpp_logToFile_FUN_005c7910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d2720
        ;   Label: shape_superopt.cpp_CObj_appendTo_FUN_005d2720
    PUSH EDI                            ; 005d2721
    PUSH EBP                            ; 005d2722
    SUB ESP,0x8                         ; 005d2723
    MOV EBX,dword ptr [ESP + 0x18]      ; 005d2726
    MOV EAX,dword ptr [EBX + 0x8]       ; 005d272a
    MOV dword ptr [ESP],EAX             ; 005d272d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005d2730
    MOV EDX,dword ptr [EAX]             ; 005d2734
    MOV EBP,dword ptr [EBX]             ; 005d2736
    TEST EDX,EDX                        ; 005d2738
    JNZ 0x005d282d                      ; 005d273a | LAB_005d282d
        ;   XREF to: 005d282d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005d2740
        ;   Label: LAB_005d2740
    CMP dword ptr [EAX + 0x8],0x0       ; 005d2744
    JZ 0x005d2764                       ; 005d2748 | LAB_005d2764
        ;   XREF to: 005d2764 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005d274a
    MOV EDI,dword ptr [EDX + 0x8]       ; 005d274e
    PUSH EDI                            ; 005d2751
    MOV EAX,dword ptr [EBX + 0x18]      ; 005d2752
    PUSH EBX                            ; 005d2755
    CALL dword ptr [EAX + 0x10]         ; 005d2756
    ADD ESP,0x8                         ; 005d2759
    TEST EAX,EAX                        ; 005d275c
    JZ 0x005d285c                       ; 005d275e | LAB_005d285c
        ;   XREF to: 005d285c (CONDITIONAL_JUMP)
    PUSH ESI                            ; 005d2764
        ;   Label: LAB_005d2764
    MOV EAX,dword ptr [ESP + 0x20]      ; 005d2765
    MOV EAX,dword ptr [EAX]             ; 005d2769
    SHL EAX,0x3                         ; 005d276b
    LEA ECX,[EAX*0x8 + 0x0]             ; 005d276e
    SUB ECX,EAX                         ; 005d2775
    LEA EAX,[EBP*0x8 + 0x0]             ; 005d2777
    MOV ESI,dword ptr [ESP + 0x20]      ; 005d277e
    MOV EDX,EAX                         ; 005d2782
    SHL EAX,0x3                         ; 005d2784
    MOV EDI,dword ptr [EBX + 0x4]       ; 005d2787
    SUB EAX,EDX                         ; 005d278a
    MOV ESI,dword ptr [ESI + 0x4]       ; 005d278c
    ADD EDI,EAX                         ; 005d278f
    PUSH EDI                            ; 005d2791
    MOV EAX,ECX                         ; 005d2792
    SHR ECX,0x2                         ; 005d2794
    MOVSD.REP ES:EDI,ESI                ; 005d2797
    MOV CL,AL                           ; 005d2799
    AND CL,0x3                          ; 005d279b
    MOVSB.REP ES:EDI,ESI                ; 005d279e
    POP EDI                             ; 005d27a0
    MOV EAX,dword ptr [ESP + 0x4]       ; 005d27a1
    MOV EDX,dword ptr [EBX + 0x8]       ; 005d27a5
    MOV dword ptr [ESP + 0x8],EAX       ; 005d27a8
    CMP EAX,EDX                         ; 005d27ac
    JNC 0x005d2820                      ; 005d27ae | LAB_005d2820
        ;   XREF to: 005d2820 (CONDITIONAL_JUMP)
    MOV EDX,EAX                         ; 005d27b0
    SHL EAX,0x2                         ; 005d27b2
    SUB EAX,EDX                         ; 005d27b5
    SHL EAX,0x2                         ; 005d27b7
    ADD EAX,EDX                         ; 005d27ba
    SHL EAX,0x3                         ; 005d27bc
    MOV EDX,EAX                         ; 005d27bf
    NEG EDX                             ; 005d27c1
    LEA EDI,[EAX + EDX*0x1]             ; 005d27c3
    MOV ESI,EAX                         ; 005d27c6
    MOV EDX,dword ptr [ESP + 0x20]      ; 005d27c8
        ;   Label: LAB_005d27c8
    PUSH EBX                            ; 005d27cc
    MOV EDX,dword ptr [EDX + 0xc]       ; 005d27cd
    MOV EAX,dword ptr [EBX + 0xc]       ; 005d27d0
    ADD EDX,EDI                         ; 005d27d3
    ADD EAX,ESI                         ; 005d27d5
    PUSH EDX                            ; 005d27d7
    MOV ECX,dword ptr [EAX + 0x64]      ; 005d27d8
    PUSH EAX                            ; 005d27db
    CALL dword ptr [ECX + 0x4]          ; 005d27dc
    MOV EAX,dword ptr [EBX + 0xc]       ; 005d27df
    ADD dword ptr [ESI + EAX*0x1 + 0x4],EBP ; 005d27e2
    MOV EAX,dword ptr [EBX + 0xc]       ; 005d27e6
    ADD dword ptr [ESI + EAX*0x1 + 0x8],EBP ; 005d27e9
    MOV EAX,dword ptr [EBX + 0xc]       ; 005d27ed
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0xc] ; 005d27f0
    ADD ESI,0x68                        ; 005d27f4
    ADD ECX,EBP                         ; 005d27f7
    ADD ESP,0xc                         ; 005d27f9
    MOV dword ptr [ESI + EAX*0x1 + -0x5c],ECX ; 005d27fc
    MOV EAX,dword ptr [ESP + 0x8]       ; 005d2800
    ADD EDI,0x68                        ; 005d2804
    INC EAX                             ; 005d2807
    MOV EDX,dword ptr [EBX + 0x8]       ; 005d2808
    MOV dword ptr [ESP + 0x8],EAX       ; 005d280b
    CMP EAX,EDX                         ; 005d280f
    JC 0x005d27c8                       ; 005d2811 | LAB_005d27c8
        ;   XREF to: 005d27c8 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 005d2813
    LEA EDX,[EDX]                       ; 005d2819
    NOP                                 ; 005d281f
    MOV EAX,0x1                         ; 005d2820
        ;   Label: LAB_005d2820
    POP ESI                             ; 005d2825
    ADD ESP,0x8                         ; 005d2826
    POP EBP                             ; 005d2829
    POP EDI                             ; 005d282a
    POP EBX                             ; 005d282b
    RET                                 ; 005d282c
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005d282d
        ;   Label: LAB_005d282d
    MOV ECX,dword ptr [EDX]             ; 005d2831
    PUSH ECX                            ; 005d2833
    MOV EAX,dword ptr [EBX + 0x18]      ; 005d2834
    PUSH EBX                            ; 005d2837
    CALL dword ptr [EAX + 0x18]         ; 005d2838
    ADD ESP,0x8                         ; 005d283b
    TEST EAX,EAX                        ; 005d283e
    JNZ 0x005d2740                      ; 005d2840 | LAB_005d2740
        ;   XREF to: 005d2740 (CONDITIONAL_JUMP)
    PUSH 0x6543e6                       ; 005d2846 | = "Unable to add vertices to object" | s_Unable_to_add_vertices_t_006543e6 = Unable to add vertices to object
    CALL shape_superopt.cpp_logToFile_FUN_005c7910 ; 005d284b | void shape_superopt.cpp_logToFile_FUN_005c7910(char * format)
        ;   XREF to: 005c7910 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005d2850
    XOR EAX,EAX                         ; 005d2853
    ADD ESP,0x8                         ; 005d2855
    POP EBP                             ; 005d2858
    POP EDI                             ; 005d2859
    POP EBX                             ; 005d285a
    RET                                 ; 005d285b
    PUSH 0x654407                       ; 005d285c | = "Unable to add polygons to object" | s_Unable_to_add_polygons_t_00654407 = Unable to add polygons to object
        ;   Label: LAB_005d285c
    CALL shape_superopt.cpp_logToFile_FUN_005c7910 ; 005d2861 | void shape_superopt.cpp_logToFile_FUN_005c7910(char * format)
        ;   XREF to: 005c7910 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005d2866
    XOR EAX,EAX                         ; 005d2869
    ADD ESP,0x8                         ; 005d286b
    POP EBP                             ; 005d286e
    POP EDI                             ; 005d286f
    POP EBX                             ; 005d2870
    RET                                 ; 005d2871

