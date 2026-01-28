; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_dsemodel_cpp_CDSEModel_scaleY_FUN_0048fe20(CDSEModel *this_ptr,float scale_factor)
;
; Parameters:
; CDSEModel *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   scale_factor
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0 at 0048ffdd
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048fe20
        ;   Label: shape_dsemodel.cpp_CDSEModel_scaleY_FUN_0048fe20
    PUSH ESI                            ; 0048fe21
    PUSH EDI                            ; 0048fe22
    PUSH EBP                            ; 0048fe23
    MOV EBP,ESP                         ; 0048fe24
    SUB ESP,0x60                        ; 0048fe26
    MOV dword ptr [EBP + -0x8],0x497423fe ; 0048fe2c
    MOV dword ptr [EBP + -0x4],0xc97423fe ; 0048fe33
    MOV dword ptr [EBP + -0x10],0x0     ; 0048fe3a
    JMP 0x0048fe49                      ; 0048fe41
        ;   XREF to: 0048fe49 (UNCONDITIONAL_JUMP)  ; LAB_0048fe49
    MOV EAX,dword ptr [EBP + -0x10]     ; 0048fe43
        ;   Label: LAB_0048fe43
    INC dword ptr [EBP + -0x10]         ; 0048fe46
    MOV EAX,dword ptr [EBP + -0x10]     ; 0048fe49
        ;   Label: LAB_0048fe49
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048fe4c
    CMP EAX,dword ptr [EDX]             ; 0048fe4f
    JGE 0x0048fe84                      ; 0048fe51
        ;   XREF to: 0048fe84 (CONDITIONAL_JUMP)  ; LAB_0048fe84
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 0048fe53
    ADD EAX,dword ptr [EBP + 0x14]      ; 0048fe57
    MOV EAX,dword ptr [EAX + 0x8]       ; 0048fe5a
    MOV dword ptr [EBP + -0xc],EAX      ; 0048fe5d
    FLD float ptr [EBP + -0xc]          ; 0048fe60
    FCOMP float ptr [EBP + -0x4]        ; 0048fe63
    FNSTSW AX                           ; 0048fe66
    SAHF                                ; 0048fe68
    JBE 0x0048fe71                      ; 0048fe69
        ;   XREF to: 0048fe71 (CONDITIONAL_JUMP)  ; LAB_0048fe71
    MOV EAX,dword ptr [EBP + -0xc]      ; 0048fe6b
    MOV dword ptr [EBP + -0x4],EAX      ; 0048fe6e
    FLD float ptr [EBP + -0xc]          ; 0048fe71
        ;   Label: LAB_0048fe71
    FCOMP float ptr [EBP + -0x8]        ; 0048fe74
    FNSTSW AX                           ; 0048fe77
    SAHF                                ; 0048fe79
    JNC 0x0048fe82                      ; 0048fe7a
        ;   XREF to: 0048fe82 (CONDITIONAL_JUMP)  ; LAB_0048fe82
    MOV EAX,dword ptr [EBP + -0xc]      ; 0048fe7c
    MOV dword ptr [EBP + -0x8],EAX      ; 0048fe7f
    JMP 0x0048fe43                      ; 0048fe82
        ;   XREF to: 0048fe43 (UNCONDITIONAL_JUMP)  ; LAB_0048fe43
        ;   Label: LAB_0048fe82
    FLD float ptr [EBP + -0x4]          ; 0048fe84
        ;   Label: LAB_0048fe84
    FSUB float ptr [EBP + -0x8]         ; 0048fe87
    FDIVR float ptr [EBP + 0x18]        ; 0048fe8a
    FSTP float ptr [EBP + 0x18]         ; 0048fe8d
    MOV dword ptr [EBP + -0x10],0x0     ; 0048fe90
    JMP 0x0048fe9f                      ; 0048fe97
        ;   XREF to: 0048fe9f (UNCONDITIONAL_JUMP)  ; LAB_0048fe9f
    MOV EAX,dword ptr [EBP + -0x10]     ; 0048fe99
        ;   Label: LAB_0048fe99
    INC dword ptr [EBP + -0x10]         ; 0048fe9c
    MOV EAX,dword ptr [EBP + -0x10]     ; 0048fe9f
        ;   Label: LAB_0048fe9f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048fea2
    CMP EAX,dword ptr [EDX]             ; 0048fea5
    JGE 0x0048fec2                      ; 0048fea7
        ;   XREF to: 0048fec2 (CONDITIONAL_JUMP)  ; LAB_0048fec2
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 0048fea9
    ADD EAX,dword ptr [EBP + 0x14]      ; 0048fead
    FLD float ptr [EAX + 0x8]           ; 0048feb0
    FMUL float ptr [EBP + 0x18]         ; 0048feb3
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 0048feb6
    ADD EAX,dword ptr [EBP + 0x14]      ; 0048feba
    FSTP float ptr [EAX + 0x8]          ; 0048febd
    JMP 0x0048fe99                      ; 0048fec0
        ;   XREF to: 0048fe99 (UNCONDITIONAL_JUMP)  ; LAB_0048fe99
    MOV ESP,EBP                         ; 0048fec2
        ;   Label: LAB_0048fec2
    POP EBP                             ; 0048fec4
    POP EDI                             ; 0048fec5
    POP ESI                             ; 0048fec6
    POP EBX                             ; 0048fec7
    RET                                 ; 0048fec8

