; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044ab60(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_set.cpp_FUN_0052d980 at 0052dae9
;   core_set.cpp_FUN_0052ef80 at 0052f08f
;   core_set.cpp_FUN_0052fad0 at 0052fc41
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ab60
        ;   Label: core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044ab60
    PUSH ESI                            ; 0044ab61
    PUSH EDI                            ; 0044ab62
    PUSH EBP                            ; 0044ab63
    MOV ECX,dword ptr [ESP + 0x14]      ; 0044ab64
    CMP dword ptr [ECX + 0x1cb8],0x0    ; 0044ab68
    JZ 0x0044ab26                       ; 0044ab6f
        ;   XREF to: 0044ab26 (CONDITIONAL_JUMP)  ; LAB_0044ab26
    XOR ESI,ESI                         ; 0044ab71
    MOV EAX,dword ptr [ECX + 0x1cc4]    ; 0044ab73
        ;   Label: LAB_0044ab73
    MOV EDX,EAX                         ; 0044ab79
    SAR EDX,0x1f                        ; 0044ab7b
    SUB EAX,EDX                         ; 0044ab7e
    SAR EAX,0x1                         ; 0044ab80
    CMP ESI,EAX                         ; 0044ab82
    JGE 0x0044ab26                      ; 0044ab84
        ;   XREF to: 0044ab26 (CONDITIONAL_JUMP)  ; LAB_0044ab26
    XOR EBX,EBX                         ; 0044ab86
    MOV EAX,dword ptr [ECX + 0x1cc0]    ; 0044ab88
        ;   Label: LAB_0044ab88
    MOV EDX,EAX                         ; 0044ab8e
    SAR EDX,0x1f                        ; 0044ab90
    SUB EAX,EDX                         ; 0044ab93
    SAR EAX,0x1                         ; 0044ab95
    CMP EBX,EAX                         ; 0044ab97
    JL 0x0044ab9e                       ; 0044ab99
        ;   XREF to: 0044ab9e (CONDITIONAL_JUMP)  ; LAB_0044ab9e
    INC ESI                             ; 0044ab9b
    JMP 0x0044ab73                      ; 0044ab9c
        ;   XREF to: 0044ab73 (UNCONDITIONAL_JUMP)  ; LAB_0044ab73
    MOV EDI,EAX                         ; 0044ab9e
        ;   Label: LAB_0044ab9e
    MOV EAX,dword ptr [ECX + 0x1cc4]    ; 0044aba0
    MOV EDX,EAX                         ; 0044aba6
    SAR EDX,0x1f                        ; 0044aba8
    SUB EAX,EDX                         ; 0044abab
    SAR EAX,0x1                         ; 0044abad
    MOV EBP,EAX                         ; 0044abaf
    MOV EDX,dword ptr [ECX + 0x1cc0]    ; 0044abb1
    MOV EAX,dword ptr [ECX + 0x1cc4]    ; 0044abb7
    IMUL EDX,EAX                        ; 0044abbd
    MOV EAX,EDX                         ; 0044abc0
    SAR EDX,0x1f                        ; 0044abc2
    SHL EDX,0x2                         ; 0044abc5
    SBB EAX,EDX                         ; 0044abc8
    SAR EAX,0x2                         ; 0044abca
    SUB EDI,EBX                         ; 0044abcd
    IMUL EDI,EDI                        ; 0044abcf
    SUB EBP,ESI                         ; 0044abd2
    IMUL EBP,EBP                        ; 0044abd4
    ADD EDI,EBP                         ; 0044abd7
    CMP EDI,EAX                         ; 0044abd9
    JLE 0x0044ac59                      ; 0044abdb
        ;   XREF to: 0044ac59 (CONDITIONAL_JUMP)  ; LAB_0044ac59
    MOV EAX,dword ptr [ECX + 0x1cc0]    ; 0044abdd
    IMUL EAX,ESI                        ; 0044abe3
    MOV EDX,dword ptr [ECX + 0x2f94]    ; 0044abe6
    ADD EAX,EBX                         ; 0044abec
    MOV word ptr [EDX + EAX*0x2],0x0    ; 0044abee
    MOV EAX,dword ptr [ECX + 0x1cc0]    ; 0044abf4
    LEA EDX,[EAX + -0x1]                ; 0044abfa
    IMUL EAX,ESI                        ; 0044abfd
    SUB EDX,EBX                         ; 0044ac00
    ADD EAX,EDX                         ; 0044ac02
    MOV EDX,dword ptr [ECX + 0x2f94]    ; 0044ac04
    MOV word ptr [EDX + EAX*0x2],0x0    ; 0044ac0a
    MOV EAX,dword ptr [ECX + 0x1cc4]    ; 0044ac10
    DEC EAX                             ; 0044ac16
    MOV EDX,dword ptr [ECX + 0x1cc0]    ; 0044ac17
    SUB EAX,ESI                         ; 0044ac1d
    IMUL EDX,EAX                        ; 0044ac1f
    MOV EAX,dword ptr [ECX + 0x1cc0]    ; 0044ac22
    DEC EAX                             ; 0044ac28
    SUB EAX,EBX                         ; 0044ac29
    ADD EAX,EDX                         ; 0044ac2b
    MOV EDX,dword ptr [ECX + 0x2f94]    ; 0044ac2d
    MOV word ptr [EDX + EAX*0x2],0x0    ; 0044ac33
    MOV EAX,dword ptr [ECX + 0x1cc4]    ; 0044ac39
    DEC EAX                             ; 0044ac3f
    MOV EDX,dword ptr [ECX + 0x1cc0]    ; 0044ac40
    SUB EAX,ESI                         ; 0044ac46
    IMUL EAX,EDX                        ; 0044ac48
    MOV EDX,dword ptr [ECX + 0x2f94]    ; 0044ac4b
    ADD EAX,EBX                         ; 0044ac51
    MOV word ptr [EDX + EAX*0x2],0x0    ; 0044ac53
    INC EBX                             ; 0044ac59
        ;   Label: LAB_0044ac59
    JMP 0x0044ab88                      ; 0044ac5a
        ;   XREF to: 0044ab88 (UNCONDITIONAL_JUMP)  ; LAB_0044ab88

