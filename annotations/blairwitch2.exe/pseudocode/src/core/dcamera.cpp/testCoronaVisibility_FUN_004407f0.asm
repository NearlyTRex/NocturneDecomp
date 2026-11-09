; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcamera_cpp_testCoronaVisibility_FUN_004407f0(int start_x,int start_y,int depth_reciprocal)
;
; Parameters:
; int              Stack[0x4]:4   start_x
; int              Stack[0x8]:4   start_y
; int              Stack[0xc]:4   depth_reciprocal
;
; Referenced Globals:
;   undefined4 DAT_0151071c
;   undefined4 DAT_01510720
;   undefined4 DAT_01510724
;   undefined4 DAT_01510728
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004407f0
        ;   Label: core_dcamera.cpp_testCoronaVisibility_FUN_004407f0
    PUSH EBP                            ; 004407f1
    SUB ESP,0x10                        ; 004407f2
    MOV ESI,dword ptr [ESP + 0x24]      ; 004407f5
    CMP dword ptr [0x0151071c],0x0      ; 004407f9 | DAT_0151071c
    JZ 0x004408b6                       ; 00440800
        ;   XREF to: 004408b6 (CONDITIONAL_JUMP)  ; LAB_004408b6
    PUSH EDI                            ; 00440806
    PUSH EBX                            ; 00440807
    MOV EDI,dword ptr [0x01510720]      ; 00440808 | DAT_01510720
    XOR ECX,ECX                         ; 0044080e
    MOV EBX,dword ptr [0x01510728]      ; 00440810 | DAT_01510728
    MOV dword ptr [ESP + 0x8],ECX       ; 00440816
    MOV ECX,dword ptr [0x01510724]      ; 0044081a | DAT_01510724
    TEST ESI,ESI                        ; 00440820
    JZ 0x004408bd                       ; 00440822
        ;   XREF to: 004408bd (CONDITIONAL_JUMP)  ; LAB_004408bd
    MOV EAX,0x7fffffff                  ; 00440828
    MOV EDX,EAX                         ; 0044082d
    SAR EDX,0x1f                        ; 0044082f
    IDIV ESI                            ; 00440832
    MOV ESI,EAX                         ; 00440834
    MOV EBP,dword ptr [ESP + 0x24]      ; 00440836
        ;   Label: LAB_00440836
    MOV EAX,EDI                         ; 0044083a
    SUB EAX,EBP                         ; 0044083c
    SHL EAX,0x4                         ; 0044083e
    MOV dword ptr [ESP + 0x14],EAX      ; 00440841
    MOV EAX,dword ptr [ESP + 0x28]      ; 00440845
    SUB ECX,EAX                         ; 00440849
    MOV EAX,ECX                         ; 0044084b
    MOV EDX,EBX                         ; 0044084d
    SHL EAX,0x4                         ; 0044084f
    SUB EDX,ESI                         ; 00440852
    MOV dword ptr [ESP + 0xc],EAX       ; 00440854
    MOV EAX,EDX                         ; 00440858
    SAR EDX,0x1f                        ; 0044085a
    SHL EDX,0x4                         ; 0044085d
    SBB EAX,EDX                         ; 00440860
    SAR EAX,0x4                         ; 00440862
    MOV EBX,dword ptr [ESP + 0x28]      ; 00440865
    MOV ECX,EBP                         ; 00440869
    SHL EBX,0x8                         ; 0044086b
    SHL ECX,0x8                         ; 0044086e
    MOV dword ptr [ESP + 0x10],EAX      ; 00440871
    MOV EDX,ESI                         ; 00440875
    MOV EAX,0x10                        ; 00440877
    MOV EBP,dword ptr [ESP + 0x10]      ; 0044087c
    MOV EDI,EBX                         ; 00440880
        ;   Label: LAB_00440880
    SAR EDI,0x8                         ; 00440882
    IMUL EDI,EDI,0x500                  ; 00440885
    MOV ESI,ECX                         ; 0044088b
    SAR ESI,0x8                         ; 0044088d
    MOV ESI,dword ptr [EDI + ESI*0x4 + 0xb1ac98] ; 00440890
    LEA EDI,[EDX + -0x80]               ; 00440897
    CMP ESI,EDI                         ; 0044089a
    JGE 0x004408c7                      ; 0044089c
        ;   XREF to: 004408c7 (CONDITIONAL_JUMP)  ; LAB_004408c7
    TEST EAX,EAX                        ; 0044089e
        ;   Label: LAB_0044089e
    JNZ 0x004408aa                      ; 004408a0
        ;   XREF to: 004408aa (CONDITIONAL_JUMP)  ; LAB_004408aa
    MOV dword ptr [ESP + 0x8],0x1       ; 004408a2
    MOV EAX,dword ptr [ESP + 0x8]       ; 004408aa
        ;   Label: LAB_004408aa
    POP EBX                             ; 004408ae
    POP EDI                             ; 004408af
    ADD ESP,0x10                        ; 004408b0
        ;   Label: LAB_004408b0
    POP EBP                             ; 004408b3
    POP ESI                             ; 004408b4
    RET                                 ; 004408b5
    MOV EAX,0x1                         ; 004408b6
        ;   Label: LAB_004408b6
    JMP 0x004408b0                      ; 004408bb
        ;   XREF to: 004408b0 (UNCONDITIONAL_JUMP)  ; LAB_004408b0
    MOV ESI,0x7fffffff                  ; 004408bd
        ;   Label: LAB_004408bd
    JMP 0x00440836                      ; 004408c2
        ;   XREF to: 00440836 (UNCONDITIONAL_JUMP)  ; LAB_00440836
    MOV ESI,dword ptr [ESP + 0x14]      ; 004408c7
        ;   Label: LAB_004408c7
    MOV EDI,dword ptr [ESP + 0xc]       ; 004408cb
    DEC EAX                             ; 004408cf
    ADD EDX,EBP                         ; 004408d0
    ADD ECX,ESI                         ; 004408d2
    ADD EBX,EDI                         ; 004408d4
    TEST EAX,EAX                        ; 004408d6
    JG 0x00440880                       ; 004408d8
        ;   XREF to: 00440880 (CONDITIONAL_JUMP)  ; LAB_00440880
    JMP 0x0044089e                      ; 004408da
        ;   XREF to: 0044089e (UNCONDITIONAL_JUMP)  ; LAB_0044089e

