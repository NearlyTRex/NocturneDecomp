; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CDeformableModel_findMaxWeightBone_FUN_0051b540(CDeformableModel *this_ptr,int lod_level,int triangle_index)
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
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740 at 0040aac5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b540
        ;   Label: core_skeleton.cpp_CDeformableModel_findMaxWeightBone_FUN_0051b540
    PUSH ESI                            ; 0051b541
    PUSH EDI                            ; 0051b542
    PUSH EBP                            ; 0051b543
    SUB ESP,0x194                       ; 0051b544
    XOR EAX,EAX                         ; 0051b54a
    ADD EAX,0x4                         ; 0051b54c
        ;   Label: LAB_0051b54c
    XOR EDX,EDX                         ; 0051b54f
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EDX ; 0051b551
    CMP EAX,0x190                       ; 0051b555
    JNZ 0x0051b54c                      ; 0051b55a
        ;   XREF to: 0051b54c (CONDITIONAL_JUMP)  ; LAB_0051b54c
    MOV EBP,dword ptr [ESP + 0x1ac]     ; 0051b55c
    MOV ECX,dword ptr [ESP + 0x1a8]     ; 0051b563
    MOV EDX,dword ptr [ESP + 0x1b0]     ; 0051b56a
    SHL EBP,0x2                         ; 0051b571
    LEA EAX,[EDX*0x8 + 0x0]             ; 0051b574
    ADD EBP,ECX                         ; 0051b57b
    ADD EDX,EAX                         ; 0051b57d
    MOV EAX,dword ptr [EBP + 0x7c]      ; 0051b57f
    ADD EDX,EDX                         ; 0051b582
    ADD EAX,EDX                         ; 0051b584
    MOV EDI,EAX                         ; 0051b586
    ADD EAX,0x6                         ; 0051b588
    MOV dword ptr [ESP + 0x190],EAX     ; 0051b58b
    XOR EAX,EAX                         ; 0051b592
        ;   Label: LAB_0051b592
    MOV AX,word ptr [EDI]               ; 0051b594
    IMUL EAX,EAX,0x34                   ; 0051b597
    MOV ESI,dword ptr [EBP + 0x40]      ; 0051b59a
    ADD ESI,EAX                         ; 0051b59d
    XOR ECX,ECX                         ; 0051b59f
    MOV EDX,ESI                         ; 0051b5a1
    MOV EAX,ESI                         ; 0051b5a3
    XOR EBX,EBX                         ; 0051b5a5
        ;   Label: LAB_0051b5a5
    MOV BL,byte ptr [ESI]               ; 0051b5a7
    CMP ECX,EBX                         ; 0051b5a9
    JL 0x0051b5ea                       ; 0051b5ab
        ;   XREF to: 0051b5ea (CONDITIONAL_JUMP)  ; LAB_0051b5ea
    MOV EBX,dword ptr [ESP + 0x190]     ; 0051b5ad
    ADD EDI,0x2                         ; 0051b5b4
    CMP EDI,EBX                         ; 0051b5b7
    JNZ 0x0051b592                      ; 0051b5b9
        ;   XREF to: 0051b592 (CONDITIONAL_JUMP)  ; LAB_0051b592
    MOV EBX,0x1                         ; 0051b5bb
    MOV EDX,0x4                         ; 0051b5c0
    XOR ECX,ECX                         ; 0051b5c5
    FLD float ptr [ESP + EDX*0x1]       ; 0051b5c7
        ;   Label: LAB_0051b5c7
    FCOMP float ptr [ESP + ECX*0x4]     ; 0051b5ca
    FNSTSW AX                           ; 0051b5cd
    SAHF                                ; 0051b5cf
    JBE 0x0051b5d4                      ; 0051b5d0
        ;   XREF to: 0051b5d4 (CONDITIONAL_JUMP)  ; LAB_0051b5d4
    MOV ECX,EBX                         ; 0051b5d2
    INC EBX                             ; 0051b5d4
        ;   Label: LAB_0051b5d4
    ADD EDX,0x4                         ; 0051b5d5
    CMP EBX,0x64                        ; 0051b5d8
    JL 0x0051b5c7                       ; 0051b5db
        ;   XREF to: 0051b5c7 (CONDITIONAL_JUMP)  ; LAB_0051b5c7
    MOV EAX,ECX                         ; 0051b5dd
    ADD ESP,0x194                       ; 0051b5df
    POP EBP                             ; 0051b5e5
    POP EDI                             ; 0051b5e6
    POP ESI                             ; 0051b5e7
    POP EBX                             ; 0051b5e8
    RET                                 ; 0051b5e9
    XOR EBX,EBX                         ; 0051b5ea
        ;   Label: LAB_0051b5ea
    FLD float ptr [EDX + 0x4]           ; 0051b5ec
    MOV BL,byte ptr [EAX + 0x1]         ; 0051b5ef
    ADD EDX,0x4                         ; 0051b5f2
    INC EAX                             ; 0051b5f5
    FADD float ptr [ESP + EBX*0x4]      ; 0051b5f6
    INC ECX                             ; 0051b5f9
    FSTP float ptr [ESP + EBX*0x4]      ; 0051b5fa
    JMP 0x0051b5a5                      ; 0051b5fd
        ;   XREF to: 0051b5a5 (UNCONDITIONAL_JUMP)  ; LAB_0051b5a5

