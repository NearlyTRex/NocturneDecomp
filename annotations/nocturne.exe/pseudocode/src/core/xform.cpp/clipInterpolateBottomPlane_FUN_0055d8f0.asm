; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clipInterpolateBottomPlane_FUN_0055d8f0(int *param_1,int *param_2,int *param_3)
;
;
; XREF[3]:
;   core_xform.cpp_FUN_0055de8e at 0055defc
;   core_xform.cpp_FUN_0055df19 at 0055df6a
;   core_xform.cpp_transformAndClipGeometry_FUN_0055e040 at 0055e6a9
;
; Referenced Globals:
;   undefined4 DAT_01c039a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d8f0
        ;   Label: core_xform.cpp_clipInterpolateBottomPlane_FUN_0055d8f0
    PUSH ESI                            ; 0055d8f1
    PUSH EDI                            ; 0055d8f2
    PUSH EBP                            ; 0055d8f3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0055d8f4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0055d8f8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0055d8fc
    MOV EDX,dword ptr [ESI + 0x4]       ; 0055d900
    MOV ECX,dword ptr [ESI + 0x8]       ; 0055d903
    MOV EAX,dword ptr [EBP + 0x4]       ; 0055d906
    MOV EBX,dword ptr [EBP + 0x8]       ; 0055d909
    ADD EDX,ECX                         ; 0055d90c
    ADD EAX,EBX                         ; 0055d90e
    MOV EBX,EDX                         ; 0055d910
    SUB EBX,EAX                         ; 0055d912
    CMP EDX,EBX                         ; 0055d914
    JGE 0x0055d92a                      ; 0055d916
        ;   XREF to: 0055d92a (CONDITIONAL_JUMP)  ; LAB_0055d92a
    NEG EBX                             ; 0055d918
    CMP EDX,EBX                         ; 0055d91a
    JLE 0x0055d931                      ; 0055d91c
        ;   XREF to: 0055d931 (CONDITIONAL_JUMP)  ; LAB_0055d931
    NEG EBX                             ; 0055d91e
    XOR EAX,EAX                         ; 0055d920
    SAR EDX,0x1                         ; 0055d922
    RCR EAX,0x1                         ; 0055d924
    IDIV EBX                            ; 0055d926
    JMP 0x0055d938                      ; 0055d928
        ;   XREF to: 0055d938 (UNCONDITIONAL_JUMP)  ; LAB_0055d938
    MOV EAX,0x7fffffff                  ; 0055d92a
        ;   Label: LAB_0055d92a
    JMP 0x0055d938                      ; 0055d92f
        ;   XREF to: 0055d938 (UNCONDITIONAL_JUMP)  ; LAB_0055d938
    NEG EBX                             ; 0055d931
        ;   Label: LAB_0055d931
    MOV EAX,0x80000000                  ; 0055d933
    MOV ECX,EAX                         ; 0055d938
        ;   Label: LAB_0055d938
    MOV EDX,dword ptr [ESI + 0x8]       ; 0055d93a
    MOV EAX,dword ptr [EBP + 0x8]       ; 0055d93d
    SUB EAX,EDX                         ; 0055d940
    MOV EDX,ECX                         ; 0055d942
    IMUL EDX                            ; 0055d944
    ADD EAX,EAX                         ; 0055d946
    ADC EDX,EDX                         ; 0055d948
    MOV EAX,EDX                         ; 0055d94a
    MOV EDX,dword ptr [ESI + 0x8]       ; 0055d94c
    ADD EAX,EDX                         ; 0055d94f
    MOV dword ptr [EDI + 0x8],EAX       ; 0055d951
    MOV EBX,EAX                         ; 0055d954
    MOV dword ptr [EDI + 0x4],EAX       ; 0055d956
    NEG EBX                             ; 0055d959
    MOV dword ptr [EDI + 0x4],EBX       ; 0055d95b
    MOV EAX,dword ptr [EBP]             ; 0055d95e
    SUB EAX,dword ptr [ESI]             ; 0055d961
    MOV EDX,ECX                         ; 0055d963
    IMUL EDX                            ; 0055d965
    ADD EAX,EAX                         ; 0055d967
    ADC EDX,EDX                         ; 0055d969
    MOV EAX,EDX                         ; 0055d96b
    MOV EDX,dword ptr [ESI]             ; 0055d96d
    ADD EAX,EDX                         ; 0055d96f
    MOV dword ptr [EDI],EAX             ; 0055d971
    MOV AH,byte ptr [0x01c039a0]        ; 0055d973 | DAT_01c039a0
    MOV dword ptr [EDI + 0x10],0xffffffff ; 0055d979
    TEST AH,0x4                         ; 0055d980
    JNZ 0x0055d98a                      ; 0055d983
        ;   XREF to: 0055d98a (CONDITIONAL_JUMP)  ; LAB_0055d98a
    POP EBP                             ; 0055d985
    POP EDI                             ; 0055d986
    POP ESI                             ; 0055d987
    POP EBX                             ; 0055d988
    RET                                 ; 0055d989
    MOV EAX,dword ptr [EBP + 0x20]      ; 0055d98a
        ;   Label: LAB_0055d98a
    MOV EBX,dword ptr [ESI + 0x20]      ; 0055d98d
    MOV EDX,ECX                         ; 0055d990
    SUB EAX,EBX                         ; 0055d992
    IMUL EDX                            ; 0055d994
    ADD EAX,EAX                         ; 0055d996
    ADC EDX,EDX                         ; 0055d998
    MOV EAX,EDX                         ; 0055d99a
    MOV EDX,dword ptr [ESI + 0x20]      ; 0055d99c
    ADD EAX,EDX                         ; 0055d99f
    MOV dword ptr [EDI + 0x20],EAX      ; 0055d9a1
    POP EBP                             ; 0055d9a4
    POP EDI                             ; 0055d9a5
    POP ESI                             ; 0055d9a6
    POP EBX                             ; 0055d9a7
    RET                                 ; 0055d9a8

