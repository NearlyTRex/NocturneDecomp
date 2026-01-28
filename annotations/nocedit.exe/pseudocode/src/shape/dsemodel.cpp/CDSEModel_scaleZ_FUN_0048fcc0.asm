; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_dsemodel_cpp_CDSEModel_scaleZ_FUN_0048fcc0(CDSEModel *this_ptr,float scale_factor)
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
;   shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0 at 0048fff2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048fcc0
        ;   Label: shape_dsemodel.cpp_CDSEModel_scaleZ_FUN_0048fcc0
    PUSH ESI                            ; 0048fcc1
    PUSH EDI                            ; 0048fcc2
    PUSH EBP                            ; 0048fcc3
    MOV EBP,ESP                         ; 0048fcc4
    SUB ESP,0x60                        ; 0048fcc6
    MOV dword ptr [EBP + -0x8],0x497423fe ; 0048fccc
    MOV dword ptr [EBP + -0x4],0xc97423fe ; 0048fcd3
    MOV dword ptr [EBP + -0x10],0x0     ; 0048fcda
    JMP 0x0048fce9                      ; 0048fce1
        ;   XREF to: 0048fce9 (UNCONDITIONAL_JUMP)  ; LAB_0048fce9
    MOV EAX,dword ptr [EBP + -0x10]     ; 0048fce3
        ;   Label: LAB_0048fce3
    INC dword ptr [EBP + -0x10]         ; 0048fce6
    MOV EAX,dword ptr [EBP + -0x10]     ; 0048fce9
        ;   Label: LAB_0048fce9
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048fcec
    CMP EAX,dword ptr [EDX]             ; 0048fcef
    JGE 0x0048fd24                      ; 0048fcf1
        ;   XREF to: 0048fd24 (CONDITIONAL_JUMP)  ; LAB_0048fd24
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 0048fcf3
    ADD EAX,dword ptr [EBP + 0x14]      ; 0048fcf7
    MOV EAX,dword ptr [EAX + 0xc]       ; 0048fcfa
    MOV dword ptr [EBP + -0xc],EAX      ; 0048fcfd
    FLD float ptr [EBP + -0xc]          ; 0048fd00
    FCOMP float ptr [EBP + -0x4]        ; 0048fd03
    FNSTSW AX                           ; 0048fd06
    SAHF                                ; 0048fd08
    JBE 0x0048fd11                      ; 0048fd09
        ;   XREF to: 0048fd11 (CONDITIONAL_JUMP)  ; LAB_0048fd11
    MOV EAX,dword ptr [EBP + -0xc]      ; 0048fd0b
    MOV dword ptr [EBP + -0x4],EAX      ; 0048fd0e
    FLD float ptr [EBP + -0xc]          ; 0048fd11
        ;   Label: LAB_0048fd11
    FCOMP float ptr [EBP + -0x8]        ; 0048fd14
    FNSTSW AX                           ; 0048fd17
    SAHF                                ; 0048fd19
    JNC 0x0048fd22                      ; 0048fd1a
        ;   XREF to: 0048fd22 (CONDITIONAL_JUMP)  ; LAB_0048fd22
    MOV EAX,dword ptr [EBP + -0xc]      ; 0048fd1c
    MOV dword ptr [EBP + -0x8],EAX      ; 0048fd1f
    JMP 0x0048fce3                      ; 0048fd22
        ;   XREF to: 0048fce3 (UNCONDITIONAL_JUMP)  ; LAB_0048fce3
        ;   Label: LAB_0048fd22
    FLD float ptr [EBP + -0x4]          ; 0048fd24
        ;   Label: LAB_0048fd24
    FSUB float ptr [EBP + -0x8]         ; 0048fd27
    FDIVR float ptr [EBP + 0x18]        ; 0048fd2a
    FSTP float ptr [EBP + 0x18]         ; 0048fd2d
    MOV dword ptr [EBP + -0x10],0x0     ; 0048fd30
    JMP 0x0048fd3f                      ; 0048fd37
        ;   XREF to: 0048fd3f (UNCONDITIONAL_JUMP)  ; LAB_0048fd3f
    MOV EAX,dword ptr [EBP + -0x10]     ; 0048fd39
        ;   Label: LAB_0048fd39
    INC dword ptr [EBP + -0x10]         ; 0048fd3c
    MOV EAX,dword ptr [EBP + -0x10]     ; 0048fd3f
        ;   Label: LAB_0048fd3f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048fd42
    CMP EAX,dword ptr [EDX]             ; 0048fd45
    JGE 0x0048fd62                      ; 0048fd47
        ;   XREF to: 0048fd62 (CONDITIONAL_JUMP)  ; LAB_0048fd62
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 0048fd49
    ADD EAX,dword ptr [EBP + 0x14]      ; 0048fd4d
    FLD float ptr [EAX + 0xc]           ; 0048fd50
    FMUL float ptr [EBP + 0x18]         ; 0048fd53
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 0048fd56
    ADD EAX,dword ptr [EBP + 0x14]      ; 0048fd5a
    FSTP float ptr [EAX + 0xc]          ; 0048fd5d
    JMP 0x0048fd39                      ; 0048fd60
        ;   XREF to: 0048fd39 (UNCONDITIONAL_JUMP)  ; LAB_0048fd39
    MOV ESP,EBP                         ; 0048fd62
        ;   Label: LAB_0048fd62
    POP EBP                             ; 0048fd64
    POP EDI                             ; 0048fd65
    POP ESI                             ; 0048fd66
    POP EBX                             ; 0048fd67
    RET                                 ; 0048fd68

