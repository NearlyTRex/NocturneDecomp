; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CDeformableModel_findMaxWeightBone_FUN_00544bb0(CDeformableModel *this_ptr,int lod_level,int triangle_index)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_level
; int              Stack[0xc]:4   triangle_index
; Local Variables:
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_actor.cpp_FUN_004093a0 at 004097e5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544bb0
        ;   Label: core_skeleton.cpp_CDeformableModel_findMaxWeightBone_FUN_00544bb0
    PUSH ESI                            ; 00544bb1
    PUSH EDI                            ; 00544bb2
    PUSH EBP                            ; 00544bb3
    SUB ESP,0x194                       ; 00544bb4
    XOR EAX,EAX                         ; 00544bba
    ADD EAX,0x4                         ; 00544bbc
        ;   Label: LAB_00544bbc
    XOR EDX,EDX                         ; 00544bbf
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EDX ; 00544bc1
    CMP EAX,0x190                       ; 00544bc5
    JNZ 0x00544bbc                      ; 00544bca
        ;   XREF to: 00544bbc (CONDITIONAL_JUMP)  ; LAB_00544bbc
    MOV EBP,dword ptr [ESP + 0x1ac]     ; 00544bcc
    MOV ECX,dword ptr [ESP + 0x1a8]     ; 00544bd3
    MOV EDX,dword ptr [ESP + 0x1b0]     ; 00544bda
    SHL EBP,0x2                         ; 00544be1
    LEA EAX,[EDX*0x8 + 0x0]             ; 00544be4
    ADD EBP,ECX                         ; 00544beb
    ADD EDX,EAX                         ; 00544bed
    MOV EAX,dword ptr [EBP + 0x7c]      ; 00544bef
    ADD EDX,EDX                         ; 00544bf2
    ADD EAX,EDX                         ; 00544bf4
    MOV EDI,EAX                         ; 00544bf6
    ADD EAX,0x6                         ; 00544bf8
    MOV dword ptr [ESP + 0x190],EAX     ; 00544bfb
    XOR EAX,EAX                         ; 00544c02
        ;   Label: LAB_00544c02
    MOV AX,word ptr [EDI]               ; 00544c04
    IMUL EAX,EAX,0x34                   ; 00544c07
    MOV ESI,dword ptr [EBP + 0x40]      ; 00544c0a
    ADD ESI,EAX                         ; 00544c0d
    XOR ECX,ECX                         ; 00544c0f
    MOV EDX,ESI                         ; 00544c11
    MOV EAX,ESI                         ; 00544c13
    XOR EBX,EBX                         ; 00544c15
        ;   Label: LAB_00544c15
    MOV BL,byte ptr [ESI]               ; 00544c17
    CMP ECX,EBX                         ; 00544c19
    JL 0x00544c5a                       ; 00544c1b
        ;   XREF to: 00544c5a (CONDITIONAL_JUMP)  ; LAB_00544c5a
    MOV EBX,dword ptr [ESP + 0x190]     ; 00544c1d
    ADD EDI,0x2                         ; 00544c24
    CMP EDI,EBX                         ; 00544c27
    JNZ 0x00544c02                      ; 00544c29
        ;   XREF to: 00544c02 (CONDITIONAL_JUMP)  ; LAB_00544c02
    MOV EBX,0x1                         ; 00544c2b
    MOV EDX,0x4                         ; 00544c30
    XOR ECX,ECX                         ; 00544c35
    FLD float ptr [ESP + EDX*0x1]       ; 00544c37
        ;   Label: LAB_00544c37
    FCOMP float ptr [ESP + ECX*0x4]     ; 00544c3a
    FNSTSW AX                           ; 00544c3d
    SAHF                                ; 00544c3f
    JBE 0x00544c44                      ; 00544c40
        ;   XREF to: 00544c44 (CONDITIONAL_JUMP)  ; LAB_00544c44
    MOV ECX,EBX                         ; 00544c42
    INC EBX                             ; 00544c44
        ;   Label: LAB_00544c44
    ADD EDX,0x4                         ; 00544c45
    CMP EBX,0x64                        ; 00544c48
    JL 0x00544c37                       ; 00544c4b
        ;   XREF to: 00544c37 (CONDITIONAL_JUMP)  ; LAB_00544c37
    MOV EAX,ECX                         ; 00544c4d
    ADD ESP,0x194                       ; 00544c4f
    POP EBP                             ; 00544c55
    POP EDI                             ; 00544c56
    POP ESI                             ; 00544c57
    POP EBX                             ; 00544c58
    RET                                 ; 00544c59
    XOR EBX,EBX                         ; 00544c5a
        ;   Label: LAB_00544c5a
    FLD float ptr [EDX + 0x4]           ; 00544c5c
    MOV BL,byte ptr [EAX + 0x1]         ; 00544c5f
    ADD EDX,0x4                         ; 00544c62
    INC EAX                             ; 00544c65
    FADD float ptr [ESP + EBX*0x4]      ; 00544c66
    INC ECX                             ; 00544c69
    FSTP float ptr [ESP + EBX*0x4]      ; 00544c6a
    JMP 0x00544c15                      ; 00544c6d
        ;   XREF to: 00544c15 (UNCONDITIONAL_JUMP)  ; LAB_00544c15

