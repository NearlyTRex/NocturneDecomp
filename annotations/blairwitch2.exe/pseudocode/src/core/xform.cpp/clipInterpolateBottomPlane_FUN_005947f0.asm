; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clipInterpolateBottomPlane_FUN_005947f0(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex_a
; SRenderVertex *  Stack[0x8]:4   vertex_b
; SRenderVertex *  Stack[0xc]:4   vertex_out
;
; XREF[1]:
;   core_xform.cpp_transformAndClipGeometry_FUN_00594f40 at 005955a9
;
; Referenced Globals:
;   undefined4 DAT_01c38b54
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005947f0
        ;   Label: core_xform.cpp_clipInterpolateBottomPlane_FUN_005947f0
    PUSH ESI                            ; 005947f1
    PUSH EDI                            ; 005947f2
    PUSH EBP                            ; 005947f3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005947f4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005947f8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005947fc
    MOV EDX,dword ptr [ESI + 0x4]       ; 00594800
    MOV ECX,dword ptr [ESI + 0x8]       ; 00594803
    MOV EAX,dword ptr [EBP + 0x4]       ; 00594806
    MOV EBX,dword ptr [EBP + 0x8]       ; 00594809
    ADD EDX,ECX                         ; 0059480c
    ADD EAX,EBX                         ; 0059480e
    MOV EBX,EDX                         ; 00594810
    SUB EBX,EAX                         ; 00594812
    CMP EDX,EBX                         ; 00594814
    JGE 0x0059482a                      ; 00594816
        ;   XREF to: 0059482a (CONDITIONAL_JUMP)  ; LAB_0059482a
    NEG EBX                             ; 00594818
    CMP EDX,EBX                         ; 0059481a
    JLE 0x00594831                      ; 0059481c
        ;   XREF to: 00594831 (CONDITIONAL_JUMP)  ; LAB_00594831
    NEG EBX                             ; 0059481e
    XOR EAX,EAX                         ; 00594820
    SAR EDX,0x1                         ; 00594822
    RCR EAX,0x1                         ; 00594824
    IDIV EBX                            ; 00594826
    JMP 0x00594838                      ; 00594828
        ;   XREF to: 00594838 (UNCONDITIONAL_JUMP)  ; LAB_00594838
    MOV EAX,0x7fffffff                  ; 0059482a
        ;   Label: LAB_0059482a
    JMP 0x00594838                      ; 0059482f
        ;   XREF to: 00594838 (UNCONDITIONAL_JUMP)  ; LAB_00594838
    NEG EBX                             ; 00594831
        ;   Label: LAB_00594831
    MOV EAX,0x80000000                  ; 00594833
    MOV ECX,EAX                         ; 00594838
        ;   Label: LAB_00594838
    MOV EDX,dword ptr [ESI + 0x8]       ; 0059483a
    MOV EAX,dword ptr [EBP + 0x8]       ; 0059483d
    SUB EAX,EDX                         ; 00594840
    MOV EDX,ECX                         ; 00594842
    IMUL EDX                            ; 00594844
    ADD EAX,EAX                         ; 00594846
    ADC EDX,EDX                         ; 00594848
    MOV EAX,EDX                         ; 0059484a
    MOV EDX,dword ptr [ESI + 0x8]       ; 0059484c
    ADD EAX,EDX                         ; 0059484f
    MOV dword ptr [EDI + 0x8],EAX       ; 00594851
    MOV EBX,EAX                         ; 00594854
    MOV dword ptr [EDI + 0x4],EAX       ; 00594856
    NEG EBX                             ; 00594859
    MOV dword ptr [EDI + 0x4],EBX       ; 0059485b
    MOV EAX,dword ptr [EBP]             ; 0059485e
    SUB EAX,dword ptr [ESI]             ; 00594861
    MOV EDX,ECX                         ; 00594863
    IMUL EDX                            ; 00594865
    ADD EAX,EAX                         ; 00594867
    ADC EDX,EDX                         ; 00594869
    MOV EAX,EDX                         ; 0059486b
    MOV EDX,dword ptr [ESI]             ; 0059486d
    ADD EAX,EDX                         ; 0059486f
    MOV dword ptr [EDI],EAX             ; 00594871
    MOV AH,byte ptr [0x01c38b54]        ; 00594873 | DAT_01c38b54
    MOV dword ptr [EDI + 0x10],0xffffffff ; 00594879
    TEST AH,0x4                         ; 00594880
    JNZ 0x0059488a                      ; 00594883
        ;   XREF to: 0059488a (CONDITIONAL_JUMP)  ; LAB_0059488a
    POP EBP                             ; 00594885
    POP EDI                             ; 00594886
    POP ESI                             ; 00594887
    POP EBX                             ; 00594888
    RET                                 ; 00594889
    MOV EAX,dword ptr [EBP + 0x20]      ; 0059488a
        ;   Label: LAB_0059488a
    MOV EBX,dword ptr [ESI + 0x20]      ; 0059488d
    MOV EDX,ECX                         ; 00594890
    SUB EAX,EBX                         ; 00594892
    IMUL EDX                            ; 00594894
    ADD EAX,EAX                         ; 00594896
    ADC EDX,EDX                         ; 00594898
    MOV EAX,EDX                         ; 0059489a
    MOV EDX,dword ptr [ESI + 0x20]      ; 0059489c
    ADD EAX,EDX                         ; 0059489f
    MOV dword ptr [EDI + 0x20],EAX      ; 005948a1
    POP EBP                             ; 005948a4
    POP EDI                             ; 005948a5
    POP ESI                             ; 005948a6
    POP EBX                             ; 005948a7
    RET                                 ; 005948a8

