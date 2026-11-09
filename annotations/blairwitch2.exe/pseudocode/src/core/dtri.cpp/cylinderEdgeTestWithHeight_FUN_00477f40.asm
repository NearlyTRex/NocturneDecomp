; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_cylinderEdgeTestWithHeight_FUN_00477f40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0 at 004783be
;
; Called Functions:
;   core_dtri.cpp_cylinderEdgeIntersection_FUN_00477c60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477f40
        ;   Label: core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_00477f40
    PUSH ESI                            ; 00477f41
    PUSH EDI                            ; 00477f42
    SUB ESP,0x4                         ; 00477f43
    MOV EBX,dword ptr [ESP + 0x14]      ; 00477f46
    MOV ESI,dword ptr [ESP + 0x18]      ; 00477f4a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00477f4e
    FLD float ptr [ESI]                 ; 00477f52
    PUSH EBX                            ; 00477f54
    FSTP float ptr [EBX + 0x3c]         ; 00477f55
    MOV EAX,dword ptr [ESI + 0x8]       ; 00477f58
    MOV dword ptr [EBX + 0x40],EAX      ; 00477f5b
    MOV EAX,dword ptr [EDI]             ; 00477f5e
    MOV dword ptr [EBX + 0x44],EAX      ; 00477f60
    MOV EAX,dword ptr [EDI + 0x8]       ; 00477f63
    MOV dword ptr [EBX + 0x48],EAX      ; 00477f66
    CALL core_dtri.cpp_cylinderEdgeIntersection_FUN_00477c60 ; 00477f69
        ;   XREF to: 00477c60 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderEdgeIntersection_FUN_00477c60()
    ADD ESP,0x4                         ; 00477f6e
    TEST EAX,EAX                        ; 00477f71
    JZ 0x00477f97                       ; 00477f73
        ;   XREF to: 00477f97 (CONDITIONAL_JUMP)  ; LAB_00477f97
    FLD float ptr [EDI + 0x4]           ; 00477f75
    FSUB float ptr [ESI + 0x4]          ; 00477f78
    FMUL float ptr [EBX + 0x50]         ; 00477f7b
    FADD float ptr [ESI + 0x4]          ; 00477f7e
    FST float ptr [ESP]                 ; 00477f81
    FCOMP float ptr [EBX + 0x28]        ; 00477f84
    FNSTSW AX                           ; 00477f87
    SAHF                                ; 00477f89
    JBE 0x00477f97                      ; 00477f8a
        ;   XREF to: 00477f97 (CONDITIONAL_JUMP)  ; LAB_00477f97
    FLD float ptr [ESP]                 ; 00477f8c
    FCOMP float ptr [EBX + 0x24]        ; 00477f8f
    FNSTSW AX                           ; 00477f92
    SAHF                                ; 00477f94
    JC 0x00477f9e                       ; 00477f95
        ;   XREF to: 00477f9e (CONDITIONAL_JUMP)  ; LAB_00477f9e
    ADD ESP,0x4                         ; 00477f97
        ;   Label: LAB_00477f97
    POP EDI                             ; 00477f9a
    POP ESI                             ; 00477f9b
    POP EBX                             ; 00477f9c
    RET                                 ; 00477f9d
    MOV dword ptr [EBX + 0x8],0x0       ; 00477f9e
        ;   Label: LAB_00477f9e
    FLD float ptr [EBX + 0x18]          ; 00477fa5
    FMUL float ptr [EBX + 0x4c]         ; 00477fa8
    FLD float ptr [EBX + 0x1c]          ; 00477fab
    FMUL float ptr [EBX + 0x4c]         ; 00477fae
    MOV EAX,dword ptr [EBX + 0x4c]      ; 00477fb1
    MOV dword ptr [EBX],EAX             ; 00477fb4
    FXCH                                ; 00477fb6
    FADD float ptr [EBX + 0x10]         ; 00477fb8
    FXCH                                ; 00477fbb
    FADD float ptr [EBX + 0x14]         ; 00477fbd
    FLD float ptr [EBX + 0x54]          ; 00477fc0
    FLD float ptr [EBX + 0x58]          ; 00477fc3
    FSUBP ST2,ST0                       ; 00477fc6
    FSUBP ST2,ST0                       ; 00477fc8
    FSTP float ptr [EBX + 0xc]          ; 00477fca
    FSTP float ptr [EBX + 0x4]          ; 00477fcd
    ADD ESP,0x4                         ; 00477fd0
    POP EDI                             ; 00477fd3
    POP ESI                             ; 00477fd4
    POP EBX                             ; 00477fd5
    RET                                 ; 00477fd6

