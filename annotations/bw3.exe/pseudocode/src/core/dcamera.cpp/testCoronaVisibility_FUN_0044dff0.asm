; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcamera_cpp_testCoronaVisibility_FUN_0044dff0(int start_x,int start_y,int depth_reciprocal)
;
; Parameters:
; int              Stack[0x4]:4   start_x
; int              Stack[0x8]:4   start_y
; int              Stack[0xc]:4   depth_reciprocal
;
; Referenced Globals:
;   undefined4 DAT_015484cc
;   undefined4 DAT_015484d0
;   undefined4 DAT_015484d4
;   undefined4 DAT_015484d8
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0044dff0
        ;   Label: core_dcamera.cpp_testCoronaVisibility_FUN_0044dff0
    PUSH EBP                            ; 0044dff1
    SUB ESP,0x10                        ; 0044dff2
    MOV ESI,dword ptr [ESP + 0x24]      ; 0044dff5
    CMP dword ptr [0x015484cc],0x0      ; 0044dff9 | DAT_015484cc
    JZ 0x0044e0b6                       ; 0044e000
        ;   XREF to: 0044e0b6 (CONDITIONAL_JUMP)  ; LAB_0044e0b6
    PUSH EDI                            ; 0044e006
    PUSH EBX                            ; 0044e007
    MOV EDI,dword ptr [0x015484d0]      ; 0044e008 | DAT_015484d0
    XOR ECX,ECX                         ; 0044e00e
    MOV EBX,dword ptr [0x015484d8]      ; 0044e010 | DAT_015484d8
    MOV dword ptr [ESP + 0x8],ECX       ; 0044e016
    MOV ECX,dword ptr [0x015484d4]      ; 0044e01a | DAT_015484d4
    TEST ESI,ESI                        ; 0044e020
    JZ 0x0044e0bd                       ; 0044e022
        ;   XREF to: 0044e0bd (CONDITIONAL_JUMP)  ; LAB_0044e0bd
    MOV EAX,0x7fffffff                  ; 0044e028
    MOV EDX,EAX                         ; 0044e02d
    SAR EDX,0x1f                        ; 0044e02f
    IDIV ESI                            ; 0044e032
    MOV ESI,EAX                         ; 0044e034
    MOV EBP,dword ptr [ESP + 0x24]      ; 0044e036
        ;   Label: LAB_0044e036
    MOV EAX,EDI                         ; 0044e03a
    SUB EAX,EBP                         ; 0044e03c
    SHL EAX,0x4                         ; 0044e03e
    MOV dword ptr [ESP + 0x14],EAX      ; 0044e041
    MOV EAX,dword ptr [ESP + 0x28]      ; 0044e045
    SUB ECX,EAX                         ; 0044e049
    MOV EAX,ECX                         ; 0044e04b
    MOV EDX,EBX                         ; 0044e04d
    SHL EAX,0x4                         ; 0044e04f
    SUB EDX,ESI                         ; 0044e052
    MOV dword ptr [ESP + 0xc],EAX       ; 0044e054
    MOV EAX,EDX                         ; 0044e058
    SAR EDX,0x1f                        ; 0044e05a
    SHL EDX,0x4                         ; 0044e05d
    SBB EAX,EDX                         ; 0044e060
    SAR EAX,0x4                         ; 0044e062
    MOV EBX,dword ptr [ESP + 0x28]      ; 0044e065
    MOV ECX,EBP                         ; 0044e069
    SHL EBX,0x8                         ; 0044e06b
    SHL ECX,0x8                         ; 0044e06e
    MOV dword ptr [ESP + 0x10],EAX      ; 0044e071
    MOV EDX,ESI                         ; 0044e075
    MOV EAX,0x10                        ; 0044e077
    MOV EBP,dword ptr [ESP + 0x10]      ; 0044e07c
    MOV EDI,EBX                         ; 0044e080
        ;   Label: LAB_0044e080
    SAR EDI,0x8                         ; 0044e082
    IMUL EDI,EDI,0x500                  ; 0044e085
    MOV ESI,ECX                         ; 0044e08b
    SAR ESI,0x8                         ; 0044e08d
    MOV ESI,dword ptr [EDI + ESI*0x4 + 0xb52a48] ; 0044e090
    LEA EDI,[EDX + -0x80]               ; 0044e097
    CMP ESI,EDI                         ; 0044e09a
    JGE 0x0044e0c7                      ; 0044e09c
        ;   XREF to: 0044e0c7 (CONDITIONAL_JUMP)  ; LAB_0044e0c7
    TEST EAX,EAX                        ; 0044e09e
        ;   Label: LAB_0044e09e
    JNZ 0x0044e0aa                      ; 0044e0a0
        ;   XREF to: 0044e0aa (CONDITIONAL_JUMP)  ; LAB_0044e0aa
    MOV dword ptr [ESP + 0x8],0x1       ; 0044e0a2
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044e0aa
        ;   Label: LAB_0044e0aa
    POP EBX                             ; 0044e0ae
    POP EDI                             ; 0044e0af
    ADD ESP,0x10                        ; 0044e0b0
        ;   Label: LAB_0044e0b0
    POP EBP                             ; 0044e0b3
    POP ESI                             ; 0044e0b4
    RET                                 ; 0044e0b5
    MOV EAX,0x1                         ; 0044e0b6
        ;   Label: LAB_0044e0b6
    JMP 0x0044e0b0                      ; 0044e0bb
        ;   XREF to: 0044e0b0 (UNCONDITIONAL_JUMP)  ; LAB_0044e0b0
    MOV ESI,0x7fffffff                  ; 0044e0bd
        ;   Label: LAB_0044e0bd
    JMP 0x0044e036                      ; 0044e0c2
        ;   XREF to: 0044e036 (UNCONDITIONAL_JUMP)  ; LAB_0044e036
    MOV ESI,dword ptr [ESP + 0x14]      ; 0044e0c7
        ;   Label: LAB_0044e0c7
    MOV EDI,dword ptr [ESP + 0xc]       ; 0044e0cb
    DEC EAX                             ; 0044e0cf
    ADD EDX,EBP                         ; 0044e0d0
    ADD ECX,ESI                         ; 0044e0d2
    ADD EBX,EDI                         ; 0044e0d4
    TEST EAX,EAX                        ; 0044e0d6
    JG 0x0044e080                       ; 0044e0d8
        ;   XREF to: 0044e080 (CONDITIONAL_JUMP)  ; LAB_0044e080
    JMP 0x0044e09e                      ; 0044e0da
        ;   XREF to: 0044e09e (UNCONDITIONAL_JUMP)  ; LAB_0044e09e

