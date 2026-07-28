; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeleton * core_skeleton_cpp_FUN_0051f680(char *param_1)
;
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_captureTextures_FUN_005180a0 at 005180b2
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_00591e2e
;   TerminatedCString s_Can_t_load_s_because_ske_00591e43
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_02737ef4
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_skeleton.cpp_CSkeleton_load_FUN_00517560
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051f680
        ;   Label: core_skeleton.cpp_FUN_0051f680
    PUSH ESI                            ; 0051f681
    PUSH EDI                            ; 0051f682
    PUSH EBP                            ; 0051f683
    MOV EDI,dword ptr [ESP + 0x14]      ; 0051f684
    MOV EDX,dword ptr [0x02737ef4]      ; 0051f688 | DAT_02737ef4
    XOR EBX,EBX                         ; 0051f68e
    TEST EDX,EDX                        ; 0051f690
    JLE 0x0051f6cb                      ; 0051f692
        ;   XREF to: 0051f6cb (CONDITIONAL_JUMP)  ; LAB_0051f6cb
    MOV ESI,0x2737ef8                   ; 0051f694
    ADD ESI,0x28508                     ; 0051f699
    IMUL EAX,EBX,0x2937c                ; 0051f69f
        ;   Label: LAB_0051f69f
    PUSH EDI                            ; 0051f6a5
    MOV EBP,0x2737ef8                   ; 0051f6a6
    PUSH ESI                            ; 0051f6ab
    ADD EBP,EAX                         ; 0051f6ac
    CALL crt_string.c__stricmp_FUN_00564520 ; 0051f6ae
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 0051f6b3
    TEST EAX,EAX                        ; 0051f6b6
    JZ 0x0051f725                       ; 0051f6b8
        ;   XREF to: 0051f725 (CONDITIONAL_JUMP)  ; LAB_0051f725
    MOV ECX,dword ptr [0x02737ef4]      ; 0051f6ba | DAT_02737ef4
    INC EBX                             ; 0051f6c0
    ADD ESI,0x2937c                     ; 0051f6c1
    CMP EBX,ECX                         ; 0051f6c7
    JL 0x0051f69f                       ; 0051f6c9
        ;   XREF to: 0051f69f (CONDITIONAL_JUMP)  ; LAB_0051f69f
    CMP dword ptr [0x02737ef4],0x28     ; 0051f6cb | DAT_02737ef4
        ;   Label: LAB_0051f6cb
    JL 0x0051f6fa                       ; 0051f6d2
        ;   XREF to: 0051f6fa (CONDITIONAL_JUMP)  ; LAB_0051f6fa
    PUSH 0x28                           ; 0051f6d4
    PUSH EDI                            ; 0051f6d6
    MOV ESI,0x591e2e                    ; 0051f6d7 | = "..\\core\\skeleton.cpp"
    MOV EBP,0x1093                      ; 0051f6dc
    PUSH 0x591e43                       ; 0051f6e1 | = "Can't load %s because skeleton manage..."
    MOV dword ptr [0x01cc4800],ESI      ; 0051f6e6 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 0051f6ec | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0051f6f2
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0xc                         ; 0051f6f7
    MOV EAX,[0x02737ef4]                ; 0051f6fa | DAT_02737ef4
        ;   Label: LAB_0051f6fa
    IMUL EBX,EAX,0x2937c                ; 0051f6ff
    PUSH EDI                            ; 0051f705
    ADD EBX,0x2737ef8                   ; 0051f706
    LEA EDX,[EAX + 0x1]                 ; 0051f70c
    PUSH EBX                            ; 0051f70f
    MOV dword ptr [0x02737ef4],EDX      ; 0051f710 | DAT_02737ef4
    CALL core_skeleton.cpp_CSkeleton_load_FUN_00517560 ; 0051f716
        ;   XREF to: 00517560 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CSkeleton_load_FUN_00517560(CSkeleton * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0051f71b
    MOV EAX,EBX                         ; 0051f71e
    POP EBP                             ; 0051f720
    POP EDI                             ; 0051f721
    POP ESI                             ; 0051f722
    POP EBX                             ; 0051f723
    RET                                 ; 0051f724
    MOV EAX,EBP                         ; 0051f725
        ;   Label: LAB_0051f725
    POP EBP                             ; 0051f727
    POP EDI                             ; 0051f728
    POP ESI                             ; 0051f729
    POP EBX                             ; 0051f72a
    RET                                 ; 0051f72b

