; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setLightVector_FUN_00513bc0(CVector3f *direction,float intensity)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   direction
; float            Stack[0x8]:4   intensity
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_01d2257c
;   undefined4 DAT_02c8344c
;
; Called Functions:
;   engine_mini3d.cpp_updateTransform_FUN_005124f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00513bc0
        ;   Label: engine_mini3d.cpp_setLightVector_FUN_00513bc0
    SUB ESP,0x10                        ; 00513bc1
    MOV EBX,dword ptr [ESP + 0x18]      ; 00513bc4
    CALL engine_mini3d.cpp_updateTransform_FUN_005124f0 ; 00513bc8
        ;   XREF to: 005124f0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_updateTransform_FUN_005124f0()
    FLD float ptr [EBX + 0x4]           ; 00513bcd
    FMUL ST0                            ; 00513bd0
    FLD float ptr [EBX]                 ; 00513bd2
    FMUL ST0                            ; 00513bd4
    FADDP                               ; 00513bd6
    FLD float ptr [EBX + 0x8]           ; 00513bd8
    FMUL ST0                            ; 00513bdb
    FADDP                               ; 00513bdd
    FSQRT                               ; 00513bdf
    FDIVR float ptr [ESP + 0x1c]        ; 00513be1
    MOV EDX,dword ptr [0x02c8344c]      ; 00513be5 | DAT_02c8344c
    FSTP float ptr [ESP + 0xc]          ; 00513beb
    TEST EDX,EDX                        ; 00513bef
    JZ 0x00513bfc                       ; 00513bf1
        ;   XREF to: 00513bfc (CONDITIONAL_JUMP)  ; LAB_00513bfc
    CMP dword ptr [0x01c50948],0x0      ; 00513bf3 | DAT_01c50948
    JNZ 0x00513c1f                      ; 00513bfa
        ;   XREF to: 00513c1f (CONDITIONAL_JUMP)  ; LAB_00513c1f
    FLD float ptr [ESP + 0xc]           ; 00513bfc
        ;   Label: LAB_00513bfc
    FLD float ptr [EBX]                 ; 00513c00
    FMUL ST1                            ; 00513c02
    MOV EAX,[0x01d2257c]                ; 00513c04 | DAT_01d2257c
    FSTP float ptr [EAX + 0x30]         ; 00513c09
    FLD float ptr [EBX + 0x4]           ; 00513c0c
    FMUL ST1                            ; 00513c0f
    FSTP float ptr [EAX + 0x34]         ; 00513c11
    FMUL float ptr [EBX + 0x8]          ; 00513c14
    FSTP float ptr [EAX + 0x38]         ; 00513c17
    ADD ESP,0x10                        ; 00513c1a
    POP EBX                             ; 00513c1d
    RET                                 ; 00513c1e
    FLD float ptr [ESP + 0xc]           ; 00513c1f
        ;   Label: LAB_00513c1f
    FLD float ptr [EBX]                 ; 00513c23
    FMUL ST1                            ; 00513c25
    FSTP float ptr [ESP]                ; 00513c27
    FLD float ptr [EBX + 0x4]           ; 00513c2a
    FMUL ST1                            ; 00513c2d
    FSTP float ptr [ESP + 0x4]          ; 00513c2f
    FMUL float ptr [EBX + 0x8]          ; 00513c33
    MOV EAX,ESP                         ; 00513c36
    PUSH dword ptr [ESP + 0x1c]         ; 00513c38
    PUSH EAX                            ; 00513c3c
    FSTP float ptr [ESP + 0x10]         ; 00513c3d
    CALL dword ptr [0x02c8344c]         ; 00513c41 | DAT_02c8344c
    ADD ESP,0x8                         ; 00513c47
    JMP 0x00513bfc                      ; 00513c4a
        ;   XREF to: 00513bfc (UNCONDITIONAL_JUMP)  ; LAB_00513bfc

