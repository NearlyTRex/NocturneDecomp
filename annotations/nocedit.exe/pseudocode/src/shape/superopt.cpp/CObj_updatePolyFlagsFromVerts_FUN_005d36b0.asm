; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_CObj_updatePolyFlagsFromVerts_FUN_005d36b0(CObj *this_ptr,uint mask)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   mask
; Local Variables:
; uint             Stack[-0x1c]:4  local_1c
; int *            Stack[-0x18]:4  local_18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d36b0
        ;   Label: shape_superopt.cpp_CObj_updatePolyFlagsFromVerts_FUN_005d36b0
    PUSH ESI                            ; 005d36b1
    PUSH EDI                            ; 005d36b2
    PUSH EBP                            ; 005d36b3
    SUB ESP,0x10                        ; 005d36b4
    MOV EDI,dword ptr [ESP + 0x24]      ; 005d36b7
    MOV EDX,dword ptr [ESP + 0x28]      ; 005d36bb
    MOV ECX,0x1                         ; 005d36bf
    MOV ESI,dword ptr [EDI + 0x8]       ; 005d36c4
    MOV EBP,dword ptr [EDI + 0xc]       ; 005d36c7
    XOR EBX,EBX                         ; 005d36ca
    MOV dword ptr [ESP],ECX             ; 005d36cc
    MOV dword ptr [ESP + 0x4],EBX       ; 005d36cf
    TEST ESI,ESI                        ; 005d36d3
    JBE 0x005d3721                      ; 005d36d5
        ;   XREF to: 005d3721 (CONDITIONAL_JUMP)  ; LAB_005d3721
    LEA EAX,[EBP + 0xc]                 ; 005d36d7
    MOV dword ptr [ESP + 0x8],EAX       ; 005d36da
    MOV EBX,dword ptr [ESP + 0x8]       ; 005d36de
        ;   Label: LAB_005d36de
    MOV EAX,EBP                         ; 005d36e2
    XOR ECX,ECX                         ; 005d36e4
    MOV dword ptr [ESP + 0xc],EBX       ; 005d36e6
    IMUL EBX,dword ptr [EAX + 0x4],0x38 ; 005d36ea
        ;   Label: LAB_005d36ea
    MOV ESI,dword ptr [EDI + 0x4]       ; 005d36ee
    MOV EBX,dword ptr [ESI + EBX*0x1 + 0x34] ; 005d36f1
    AND EBX,EDX                         ; 005d36f5
    CMP EBX,EDX                         ; 005d36f7
    JZ 0x005d3732                       ; 005d36f9
        ;   XREF to: 005d3732 (CONDITIONAL_JUMP)  ; LAB_005d3732
    CMP ECX,0x3                         ; 005d36fb
        ;   Label: LAB_005d36fb
    JNZ 0x005d3740                      ; 005d36fe
        ;   XREF to: 005d3740 (CONDITIONAL_JUMP)  ; LAB_005d3740
    OR dword ptr [EBP + 0x60],EDX       ; 005d3700
    MOV EAX,dword ptr [ESP + 0x4]       ; 005d3703
        ;   Label: LAB_005d3703
    MOV ECX,dword ptr [ESP + 0x8]       ; 005d3707
    ADD EBP,0x68                        ; 005d370b
    MOV EBX,dword ptr [EDI + 0x8]       ; 005d370e
    INC EAX                             ; 005d3711
    ADD ECX,0x68                        ; 005d3712
    MOV dword ptr [ESP + 0x4],EAX       ; 005d3715
    MOV dword ptr [ESP + 0x8],ECX       ; 005d3719
    CMP EAX,EBX                         ; 005d371d
    JC 0x005d36de                       ; 005d371f
        ;   XREF to: 005d36de (CONDITIONAL_JUMP)  ; LAB_005d36de
    CMP dword ptr [ESP],0x0             ; 005d3721
        ;   Label: LAB_005d3721
    JZ 0x005d3753                       ; 005d3725
        ;   XREF to: 005d3753 (CONDITIONAL_JUMP)  ; LAB_005d3753
    OR dword ptr [EDI + 0x10],EDX       ; 005d3727
    ADD ESP,0x10                        ; 005d372a
    POP EBP                             ; 005d372d
    POP EDI                             ; 005d372e
    POP ESI                             ; 005d372f
    POP EBX                             ; 005d3730
    RET                                 ; 005d3731
    MOV EBX,dword ptr [ESP + 0xc]       ; 005d3732
        ;   Label: LAB_005d3732
    ADD EAX,0x4                         ; 005d3736
    INC ECX                             ; 005d3739
    CMP EAX,EBX                         ; 005d373a
    JC 0x005d36ea                       ; 005d373c
        ;   XREF to: 005d36ea (CONDITIONAL_JUMP)  ; LAB_005d36ea
    JMP 0x005d36fb                      ; 005d373e
        ;   XREF to: 005d36fb (UNCONDITIONAL_JUMP)  ; LAB_005d36fb
    MOV EAX,EDX                         ; 005d3740
        ;   Label: LAB_005d3740
    MOV ESI,dword ptr [EBP + 0x60]      ; 005d3742
    NOT EAX                             ; 005d3745
    AND ESI,EAX                         ; 005d3747
    XOR EAX,EAX                         ; 005d3749
    MOV dword ptr [EBP + 0x60],ESI      ; 005d374b
    MOV dword ptr [ESP],EAX             ; 005d374e
    JMP 0x005d3703                      ; 005d3751
        ;   XREF to: 005d3703 (UNCONDITIONAL_JUMP)  ; LAB_005d3703
    NOT EDX                             ; 005d3753
        ;   Label: LAB_005d3753
    AND dword ptr [EDI + 0x10],EDX      ; 005d3755
    ADD ESP,0x10                        ; 005d3758
    POP EBP                             ; 005d375b
    POP EDI                             ; 005d375c
    POP ESI                             ; 005d375d
    POP EBX                             ; 005d375e
    RET                                 ; 005d375f

