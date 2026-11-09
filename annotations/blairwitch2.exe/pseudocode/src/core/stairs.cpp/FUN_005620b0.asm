; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_stairs_cpp_FUN_005620b0(int param_1,undefined4 param_2,undefined4 param_3,float *param_4)
;
;
; Called Functions:
;   core_dtri.cpp_rayTriangleIntersection_FUN_00477a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005620b0
        ;   Label: core_stairs.cpp_FUN_005620b0
    PUSH ESI                            ; 005620b1
    PUSH EDI                            ; 005620b2
    PUSH EBP                            ; 005620b3
    MOV EBP,ESP                         ; 005620b4
    SUB ESP,0x30                        ; 005620b6
    AND ESP,0xfffffff8                  ; 005620b9
    MOV EDX,0x3f8147ae                  ; 005620bc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005620c1
    XOR ECX,ECX                         ; 005620c4
    MOV dword ptr [ESP + 0x24],EDX      ; 005620c6
    MOV dword ptr [ESP + 0x28],ECX      ; 005620ca
    ADD EBX,0x2cc                       ; 005620ce
    MOV EAX,dword ptr [EBP + 0x14]      ; 005620d4
        ;   Label: LAB_005620d4
    MOV EAX,dword ptr [EAX + 0x2c8]     ; 005620d7
    MOV ESI,dword ptr [ESP + 0x28]      ; 005620dd
    ADD EAX,EAX                         ; 005620e1
    CMP EAX,ESI                         ; 005620e3
    JG 0x005620f2                       ; 005620e5
        ;   XREF to: 005620f2 (CONDITIONAL_JUMP)  ; LAB_005620f2
    MOV EAX,dword ptr [ESP + 0x24]      ; 005620e7
    MOV ESP,EBP                         ; 005620eb
    POP EBP                             ; 005620ed
    POP EDI                             ; 005620ee
    POP ESI                             ; 005620ef
    POP EBX                             ; 005620f0
    RET                                 ; 005620f1
    MOV EDI,dword ptr [EBP + 0x1c]      ; 005620f2
        ;   Label: LAB_005620f2
    PUSH EDI                            ; 005620f5
    MOV EAX,dword ptr [EBP + 0x18]      ; 005620f6
    PUSH EAX                            ; 005620f9
    PUSH EBX                            ; 005620fa
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_00477a50 ; 005620fb
        ;   XREF to: 00477a50 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayTriangleIntersection_FUN_00477a50()
    MOV dword ptr [ESP + 0x38],EAX      ; 00562100
    FLD float ptr [ESP + 0x38]          ; 00562104
    ADD ESP,0xc                         ; 00562108
    FLDZ                                ; 0056210b
    FXCH                                ; 0056210d
    FST float ptr [ESP + 0x8]           ; 0056210f
    FSTP double ptr [ESP]               ; 00562113
    FCOMP double ptr [ESP]              ; 00562116
    FNSTSW AX                           ; 00562119
    SAHF                                ; 0056211b
    JA 0x0056218e                       ; 0056211c
        ;   XREF to: 0056218e (CONDITIONAL_JUMP)  ; LAB_0056218e
    FLD float ptr [ESP + 0x8]           ; 0056211e
    FCOMP float ptr [ESP + 0x24]        ; 00562122
    FNSTSW AX                           ; 00562126
    SAHF                                ; 00562128
    JNC 0x0056218e                      ; 00562129
        ;   XREF to: 0056218e (CONDITIONAL_JUMP)  ; LAB_0056218e
    FLD1                                ; 0056212b
    FCOMP double ptr [ESP]              ; 0056212d
    FNSTSW AX                           ; 00562130
    SAHF                                ; 00562132
    JC 0x0056218e                       ; 00562133
        ;   XREF to: 0056218e (CONDITIONAL_JUMP)  ; LAB_0056218e
    MOV EAX,dword ptr [ESP + 0x8]       ; 00562135
    LEA EDI,[ESP + 0x18]                ; 00562139
    MOV dword ptr [ESP + 0x24],EAX      ; 0056213d
    LEA EAX,[EBX + 0x24]                ; 00562141
    LEA ESI,[ESP + 0xc]                 ; 00562144
    MOV EDX,dword ptr [EBP + 0x20]      ; 00562148
    FLD float ptr [EAX]                 ; 0056214b
    FLD float ptr [EAX + 0x4]           ; 0056214d
    FLD float ptr [EAX + 0x8]           ; 00562150
    FXCH ST2                            ; 00562153
    FCHS                                ; 00562155
    FXCH                                ; 00562157
    FCHS                                ; 00562159
    FXCH ST2                            ; 0056215b
    FCHS                                ; 0056215d
    LEA EAX,[ESP + 0x18]                ; 0056215f
    FXCH                                ; 00562163
    FSTP float ptr [ESP + 0xc]          ; 00562165
    FXCH                                ; 00562169
    FSTP float ptr [ESP + 0x10]         ; 0056216b
    FSTP float ptr [ESP + 0x14]         ; 0056216f
    MOVSD ES:EDI,ESI                    ; 00562173
    MOVSD ES:EDI,ESI                    ; 00562174
    MOVSD ES:EDI,ESI                    ; 00562175
    CMP EAX,EDX                         ; 00562176
    JZ 0x0056218e                       ; 00562178
        ;   XREF to: 0056218e (CONDITIONAL_JUMP)  ; LAB_0056218e
    MOV EAX,dword ptr [ESP + 0x18]      ; 0056217a
    MOV dword ptr [EDX],EAX             ; 0056217e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00562180
    MOV dword ptr [EDX + 0x4],EAX       ; 00562184
    MOV EAX,dword ptr [ESP + 0x20]      ; 00562187
    MOV dword ptr [EDX + 0x8],EAX       ; 0056218b
    MOV ECX,dword ptr [ESP + 0x28]      ; 0056218e
        ;   Label: LAB_0056218e
    INC ECX                             ; 00562192
    ADD EBX,0x38                        ; 00562193
    MOV dword ptr [ESP + 0x28],ECX      ; 00562196
    JMP 0x005620d4                      ; 0056219a
        ;   XREF to: 005620d4 (UNCONDITIONAL_JUMP)  ; LAB_005620d4

