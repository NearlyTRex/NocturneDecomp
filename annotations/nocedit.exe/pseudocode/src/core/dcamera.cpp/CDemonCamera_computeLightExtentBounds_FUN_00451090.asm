; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRect * __stack2_esi core_dcamera_cpp_CDemonCamera_computeLightExtentBounds_FUN_00451090(CDemonCamera *this_ptr,CDemonLight *light,CRect *out_bounds)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light
; Local Variables:
; uint             Stack[-0x1c]:4  local_1c
; uint             Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
; int              Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 at 0056a8c3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00451090
        ;   Label: core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00451090
    PUSH EDI                            ; 00451091
    PUSH EBP                            ; 00451092
    SUB ESP,0x10                        ; 00451093
    MOV EBX,dword ptr [ESP + 0x20]      ; 00451096
    MOV EBP,ESI                         ; 0045109a
    MOV EDX,0x270f                      ; 0045109c
    XOR ECX,ECX                         ; 004510a1
    MOV EAX,dword ptr [EBX + 0x154]     ; 004510a3
    MOV dword ptr [ESP + 0x4],ECX       ; 004510a9
    MOV dword ptr [ESP + 0x8],EDX       ; 004510ad
    MOV dword ptr [ESP + 0xc],ECX       ; 004510b1
    MOV dword ptr [ESP],EDX             ; 004510b5
    TEST EAX,EAX                        ; 004510b8
    JLE 0x00451112                      ; 004510ba
        ;   XREF to: 00451112 (CONDITIONAL_JUMP)  ; LAB_00451112
    MOV EDX,dword ptr [ESP + 0x24]      ; 004510bc
    MOV EDI,dword ptr [EDX + 0x1888]    ; 004510c0
        ;   Label: LAB_004510c0
    CMP EDI,dword ptr [EDX + 0x14c8]    ; 004510c6
    JC 0x00451104                       ; 004510cc
        ;   XREF to: 00451104 (CONDITIONAL_JUMP)  ; LAB_00451104
    CMP ECX,dword ptr [ESP + 0x8]       ; 004510ce
    JGE 0x004510d8                      ; 004510d2
        ;   XREF to: 004510d8 (CONDITIONAL_JUMP)  ; LAB_004510d8
    MOV dword ptr [ESP + 0x8],ECX       ; 004510d4
    CMP ECX,dword ptr [ESP + 0xc]       ; 004510d8
        ;   Label: LAB_004510d8
    JLE 0x004510e2                      ; 004510dc
        ;   XREF to: 004510e2 (CONDITIONAL_JUMP)  ; LAB_004510e2
    MOV dword ptr [ESP + 0xc],ECX       ; 004510de
    MOV EDI,dword ptr [ESP]             ; 004510e2
        ;   Label: LAB_004510e2
    MOV EAX,dword ptr [EDX + 0x14c8]    ; 004510e5
    CMP EAX,EDI                         ; 004510eb
    JNC 0x004510f2                      ; 004510ed
        ;   XREF to: 004510f2 (CONDITIONAL_JUMP)  ; LAB_004510f2
    MOV dword ptr [ESP],EAX             ; 004510ef
    MOV ESI,dword ptr [ESP + 0x4]       ; 004510f2
        ;   Label: LAB_004510f2
    MOV EAX,dword ptr [EDX + 0x1888]    ; 004510f6
    CMP EAX,ESI                         ; 004510fc
    JBE 0x00451104                      ; 004510fe
        ;   XREF to: 00451104 (CONDITIONAL_JUMP)  ; LAB_00451104
    MOV dword ptr [ESP + 0x4],EAX       ; 00451100
    INC ECX                             ; 00451104
        ;   Label: LAB_00451104
    MOV ESI,dword ptr [EBX + 0x154]     ; 00451105
    ADD EDX,0x4                         ; 0045110b
    CMP ECX,ESI                         ; 0045110e
    JL 0x004510c0                       ; 00451110
        ;   XREF to: 004510c0 (CONDITIONAL_JUMP)  ; LAB_004510c0
    MOV ESI,ESP                         ; 00451112
        ;   Label: LAB_00451112
    MOV EDI,EBP                         ; 00451114
    JMP 0x006048a1                      ; 00451116
        ;   XREF to: 006048a1 (UNCONDITIONAL_JUMP)  ; LAB_006048a1
    ADD ESP,0x10                        ; 0045111c
        ;   Label: LAB_0045111c
    POP EBP                             ; 0045111f
    POP EDI                             ; 00451120
    POP EBX                             ; 00451121
    RET                                 ; 00451122
    MOV ECX,dword ptr [ESI]             ; 006048a1
        ;   Label: LAB_006048a1
    MOV dword ptr [EDI],ECX             ; 006048a3
    MOV ECX,dword ptr [ESI + 0x4]       ; 006048a5
    MOV dword ptr [EDI + 0x4],ECX       ; 006048a8
    MOV ECX,dword ptr [ESI + 0x8]       ; 006048ab
    MOV dword ptr [EDI + 0x8],ECX       ; 006048ae
    MOV ECX,dword ptr [ESI + 0xc]       ; 006048b1
    MOV dword ptr [EDI + 0xc],ECX       ; 006048b4
    ADD ESI,0x10                        ; 006048b7
    ADD EDI,0x10                        ; 006048ba
    MOV EAX,EBP                         ; 006048bd
    JMP 0x0045111c                      ; 006048bf
        ;   XREF to: 0045111c (UNCONDITIONAL_JUMP)  ; LAB_0045111c

