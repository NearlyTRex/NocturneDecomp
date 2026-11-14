; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_intersectClipPlane3_FUN_004f0770(float *from,float *to,float *out)
;
; Parameters:
; float *          Stack[0x4]:4   from
; float *          Stack[0x8]:4   to
; float *          Stack[0xc]:4   out
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   engine_mini3d.cpp_clipAgainstPlane3_FUN_004f0be0 at 004f0ca7
;
; Referenced Globals:
;   undefined4 DAT_01d7a694
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0770
        ;   Label: engine_mini3d.cpp_intersectClipPlane3_FUN_004f0770
    SUB ESP,0x8                         ; 004f0771
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f0774
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f0778
    MOV ECX,dword ptr [ESP + 0x18]      ; 004f077c
    FLD float ptr [EAX + 0x4]           ; 004f0780
    FLD float ptr [EDX + 0x4]           ; 004f0783
    FADD float ptr [EDX + 0x8]          ; 004f0786
    FXCH                                ; 004f0789
    FADD float ptr [EAX + 0x8]          ; 004f078b
    FXCH                                ; 004f078e
    FSUBR ST0,ST1                       ; 004f0790
    FDIVP                               ; 004f0792
    FLD float ptr [EDX + 0x8]           ; 004f0794
    FSUB float ptr [EAX + 0x8]          ; 004f0797
    FXCH                                ; 004f079a
    FSTP float ptr [ESP + 0x4]          ; 004f079c
    FMUL float ptr [ESP + 0x4]          ; 004f07a0
    FADD float ptr [EAX + 0x8]          ; 004f07a4
    FST float ptr [ECX + 0x8]           ; 004f07a7
    FCHS                                ; 004f07aa
    FSTP float ptr [ECX + 0x4]          ; 004f07ac
    FLD float ptr [EDX]                 ; 004f07af
    FSUB float ptr [EAX]                ; 004f07b1
    FMUL float ptr [ESP + 0x4]          ; 004f07b3
    FADD float ptr [EAX]                ; 004f07b7
    MOV EBX,dword ptr [0x01d7a694]      ; 004f07b9 | DAT_01d7a694
    FSTP float ptr [ECX]                ; 004f07bf
    TEST EBX,EBX                        ; 004f07c1
    JZ 0x004f07ca                       ; 004f07c3
        ;   XREF to: 004f07ca (CONDITIONAL_JUMP)  ; LAB_004f07ca
    ADD ESP,0x8                         ; 004f07c5
    POP EBX                             ; 004f07c8
    RET                                 ; 004f07c9
    FLD float ptr [EDX + 0x2c]          ; 004f07ca
        ;   Label: LAB_004f07ca
    FSUB float ptr [EAX + 0x2c]         ; 004f07cd
    FLD float ptr [ESP + 0x4]           ; 004f07d0
    FXCH                                ; 004f07d4
    FMUL ST1                            ; 004f07d6
    FADD float ptr [EAX + 0x2c]         ; 004f07d8
    FSTP float ptr [ECX + 0x2c]         ; 004f07db
    FLD float ptr [EDX + 0x28]          ; 004f07de
    FSUB float ptr [EAX + 0x28]         ; 004f07e1
    FMUL ST1                            ; 004f07e4
    FADD float ptr [EAX + 0x28]         ; 004f07e6
    FSTP float ptr [ECX + 0x28]         ; 004f07e9
    FLD float ptr [EDX + 0x24]          ; 004f07ec
    FSUB float ptr [EAX + 0x24]         ; 004f07ef
    FMUL ST1                            ; 004f07f2
    FADD float ptr [EAX + 0x24]         ; 004f07f4
    FSTP float ptr [ECX + 0x24]         ; 004f07f7
    FLD float ptr [EDX + 0x1c]          ; 004f07fa
    FSUB float ptr [EAX + 0x1c]         ; 004f07fd
    FMUL ST1                            ; 004f0800
    FADD float ptr [EAX + 0x1c]         ; 004f0802
    FSTP float ptr [ECX + 0x1c]         ; 004f0805
    FLD float ptr [EDX + 0x20]          ; 004f0808
    FSUB float ptr [EAX + 0x20]         ; 004f080b
    FMUL ST1                            ; 004f080e
    FADD float ptr [EAX + 0x20]         ; 004f0810
    FSTP float ptr [ECX + 0x20]         ; 004f0813
    FLD float ptr [EDX + 0x30]          ; 004f0816
    FSUB float ptr [EAX + 0x30]         ; 004f0819
    FMUL ST1                            ; 004f081c
    FADD float ptr [EAX + 0x30]         ; 004f081e
    FSTP float ptr [ECX + 0x30]         ; 004f0821
    FLD float ptr [EDX + 0x34]          ; 004f0824
    FSUB float ptr [EAX + 0x34]         ; 004f0827
    FMULP                               ; 004f082a
    FADD float ptr [EAX + 0x34]         ; 004f082c
    FSTP float ptr [ECX + 0x34]         ; 004f082f
    ADD ESP,0x8                         ; 004f0832
    POP EBX                             ; 004f0835
    RET                                 ; 004f0836

