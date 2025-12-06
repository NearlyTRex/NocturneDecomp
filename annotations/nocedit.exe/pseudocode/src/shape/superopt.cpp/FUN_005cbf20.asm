; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined shape_superopt.cpp_FUN_005cbf20()
;
;
; XREF[1]:
;   shape_superopt.cpp_CondCallDebugMallocUnknownString_FUN_005cbe20 at 005cbe32
;
; Referenced Globals:
;   double DOUBLE_006542d2 = 1.00000000000000E-7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cbf20
        ;   Label: shape_superopt.cpp_FUN_005cbf20
    PUSH ESI                            ; 005cbf21
    PUSH EBP                            ; 005cbf22
    MOV EBP,ESP                         ; 005cbf23
    SUB ESP,0x18                        ; 005cbf25
    AND ESP,0xfffffff8                  ; 005cbf28
    MOV ESI,dword ptr [EBP + 0x14]      ; 005cbf2b
    MOV EBX,dword ptr [EBP + 0x18]      ; 005cbf2e
    LEA EAX,[EBX + -0x1]                ; 005cbf31
    XOR ECX,ECX                         ; 005cbf34
    TEST EBX,EBX                        ; 005cbf36
    JBE 0x005cbf77                      ; 005cbf38 | LAB_005cbf77
        ;   XREF to: 005cbf77 (CONDITIONAL_JUMP)
    LEA EDX,[ESI + 0x10]                ; 005cbf3a
    IMUL EAX,EAX,0x60                   ; 005cbf3d
        ;   Label: LAB_005cbf3d
    FLD double ptr [EDX]                ; 005cbf40
    FSUB double ptr [ESI + EAX*0x1 + 0x28] ; 005cbf42
    FMUL ST0                            ; 005cbf46
    FLD double ptr [EDX + 0x8]          ; 005cbf48
    FSUB double ptr [ESI + EAX*0x1 + 0x30] ; 005cbf4b
    FMUL ST0                            ; 005cbf4f
    FLD double ptr [EDX + 0x10]         ; 005cbf51
    FXCH                                ; 005cbf54
    FADDP ST2,ST0                       ; 005cbf56
    FSUB double ptr [ESI + EAX*0x1 + 0x38] ; 005cbf58
    FMUL ST0                            ; 005cbf5c
    FADDP                               ; 005cbf5e
    FSQRT                               ; 005cbf60
    FCOMP double ptr [0x006542d2]       ; 005cbf62 | double DOUBLE_006542d2
    FNSTSW AX                           ; 005cbf68
    SAHF                                ; 005cbf6a
    JA 0x005cbf82                       ; 005cbf6b | LAB_005cbf82
        ;   XREF to: 005cbf82 (CONDITIONAL_JUMP)
    MOV EAX,ECX                         ; 005cbf6d
    INC ECX                             ; 005cbf6f
    ADD EDX,0x60                        ; 005cbf70
    CMP ECX,EBX                         ; 005cbf73
    JC 0x005cbf3d                       ; 005cbf75 | LAB_005cbf3d
        ;   XREF to: 005cbf3d (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 005cbf77
        ;   Label: LAB_005cbf77
    MOV ESP,EBP                         ; 005cbf7c
    POP EBP                             ; 005cbf7e
    POP ESI                             ; 005cbf7f
    POP EBX                             ; 005cbf80
    RET                                 ; 005cbf81
    XOR EAX,EAX                         ; 005cbf82
        ;   Label: LAB_005cbf82
    MOV ESP,EBP                         ; 005cbf84
    POP EBP                             ; 005cbf86
    POP ESI                             ; 005cbf87
    POP EBX                             ; 005cbf88
    RET                                 ; 005cbf89

