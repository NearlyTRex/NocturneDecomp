; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_dsemodel_cpp_CDSEModel_scaleX_FUN_0048fd70(CDSEModel *this_ptr,float scale_factor)
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
;   shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0 at 0048ffc8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048fd70
        ;   Label: shape_dsemodel.cpp_CDSEModel_scaleX_FUN_0048fd70
    PUSH ESI                            ; 0048fd71
    PUSH EDI                            ; 0048fd72
    PUSH EBP                            ; 0048fd73
    MOV EBP,ESP                         ; 0048fd74
    SUB ESP,0x60                        ; 0048fd76
    MOV dword ptr [EBP + -0x8],0x497423fe ; 0048fd7c
    MOV dword ptr [EBP + -0x4],0xc97423fe ; 0048fd83
    MOV dword ptr [EBP + -0x10],0x0     ; 0048fd8a
    JMP 0x0048fd99                      ; 0048fd91
        ;   XREF to: 0048fd99 (UNCONDITIONAL_JUMP)  ; LAB_0048fd99
    MOV EAX,dword ptr [EBP + -0x10]     ; 0048fd93
        ;   Label: LAB_0048fd93
    INC dword ptr [EBP + -0x10]         ; 0048fd96
    MOV EAX,dword ptr [EBP + -0x10]     ; 0048fd99
        ;   Label: LAB_0048fd99
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048fd9c
    CMP EAX,dword ptr [EDX]             ; 0048fd9f
    JGE 0x0048fdd4                      ; 0048fda1
        ;   XREF to: 0048fdd4 (CONDITIONAL_JUMP)  ; LAB_0048fdd4
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 0048fda3
    ADD EAX,dword ptr [EBP + 0x14]      ; 0048fda7
    MOV EAX,dword ptr [EAX + 0x4]       ; 0048fdaa
    MOV dword ptr [EBP + -0xc],EAX      ; 0048fdad
    FLD float ptr [EBP + -0xc]          ; 0048fdb0
    FCOMP float ptr [EBP + -0x4]        ; 0048fdb3
    FNSTSW AX                           ; 0048fdb6
    SAHF                                ; 0048fdb8
    JBE 0x0048fdc1                      ; 0048fdb9
        ;   XREF to: 0048fdc1 (CONDITIONAL_JUMP)  ; LAB_0048fdc1
    MOV EAX,dword ptr [EBP + -0xc]      ; 0048fdbb
    MOV dword ptr [EBP + -0x4],EAX      ; 0048fdbe
    FLD float ptr [EBP + -0xc]          ; 0048fdc1
        ;   Label: LAB_0048fdc1
    FCOMP float ptr [EBP + -0x8]        ; 0048fdc4
    FNSTSW AX                           ; 0048fdc7
    SAHF                                ; 0048fdc9
    JNC 0x0048fdd2                      ; 0048fdca
        ;   XREF to: 0048fdd2 (CONDITIONAL_JUMP)  ; LAB_0048fdd2
    MOV EAX,dword ptr [EBP + -0xc]      ; 0048fdcc
    MOV dword ptr [EBP + -0x8],EAX      ; 0048fdcf
    JMP 0x0048fd93                      ; 0048fdd2
        ;   XREF to: 0048fd93 (UNCONDITIONAL_JUMP)  ; LAB_0048fd93
        ;   Label: LAB_0048fdd2
    FLD float ptr [EBP + -0x4]          ; 0048fdd4
        ;   Label: LAB_0048fdd4
    FSUB float ptr [EBP + -0x8]         ; 0048fdd7
    FDIVR float ptr [EBP + 0x18]        ; 0048fdda
    FSTP float ptr [EBP + 0x18]         ; 0048fddd
    MOV dword ptr [EBP + -0x10],0x0     ; 0048fde0
    JMP 0x0048fdef                      ; 0048fde7
        ;   XREF to: 0048fdef (UNCONDITIONAL_JUMP)  ; LAB_0048fdef
    MOV EAX,dword ptr [EBP + -0x10]     ; 0048fde9
        ;   Label: LAB_0048fde9
    INC dword ptr [EBP + -0x10]         ; 0048fdec
    MOV EAX,dword ptr [EBP + -0x10]     ; 0048fdef
        ;   Label: LAB_0048fdef
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048fdf2
    CMP EAX,dword ptr [EDX]             ; 0048fdf5
    JGE 0x0048fe12                      ; 0048fdf7
        ;   XREF to: 0048fe12 (CONDITIONAL_JUMP)  ; LAB_0048fe12
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 0048fdf9
    ADD EAX,dword ptr [EBP + 0x14]      ; 0048fdfd
    FLD float ptr [EAX + 0x4]           ; 0048fe00
    FMUL float ptr [EBP + 0x18]         ; 0048fe03
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 0048fe06
    ADD EAX,dword ptr [EBP + 0x14]      ; 0048fe0a
    FSTP float ptr [EAX + 0x4]          ; 0048fe0d
    JMP 0x0048fde9                      ; 0048fe10
        ;   XREF to: 0048fde9 (UNCONDITIONAL_JUMP)  ; LAB_0048fde9
    MOV ESP,EBP                         ; 0048fe12
        ;   Label: LAB_0048fe12
    POP EBP                             ; 0048fe14
    POP EDI                             ; 0048fe15
    POP ESI                             ; 0048fe16
    POP EBX                             ; 0048fe17
    RET                                 ; 0048fe18

