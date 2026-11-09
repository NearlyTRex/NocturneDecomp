; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_FUN_00591ad0(CMatrix3x4f *output_matrix,CVector3f *position,CVector3f *euler_angles)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   output_matrix
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   euler_angles
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[12]:
;   core_bodypart.cpp_FUN_00416d70 at 00416fa8
;   core_bugs.cpp_FUN_004203a0 at 004204b1
;   core_charactr.cpp_FUN_00426a10 at 00426d76
;   core_charactr.cpp_FUN_00428bd0 at 00428c16
;   core_cloth.cpp_CCloth_orientBoneToChild_FUN_005af200 at 005af306
;   core_fire.cpp_FUN_00493a40 at 00493baf
;   core_ladder.cpp_FUN_004e0380 at 004e03cb
;   core_mimic.cpp_FUN_004f0a50 at 004f0be9
;   core_platfrm.cpp_CPlatform_attachActor_FUN_00519a60 at 00519ae8
;   core_platfrm.cpp_FUN_005184c0 at 005186d1
;   ... and 2 more
;
; Called Functions:
;   core_dirmat.cpp_FUN_00449c20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00591ad0
        ;   Label: core_xform.cpp_FUN_00591ad0
    PUSH ESI                            ; 00591ad1
    PUSH EDI                            ; 00591ad2
    SUB ESP,0x18                        ; 00591ad3
    MOV EBX,dword ptr [ESP + 0x28]      ; 00591ad6
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00591ada
    MOV EDI,dword ptr [ESP + 0x30]      ; 00591ade
    PUSH EDI                            ; 00591ae2
    LEA EAX,[ESP + 0x4]                 ; 00591ae3
    PUSH EAX                            ; 00591ae7
    LEA EAX,[ESP + 0x14]                ; 00591ae8
    PUSH EAX                            ; 00591aec
    CALL core_dirmat.cpp_FUN_00449c20   ; 00591aed
        ;   XREF to: 00449c20 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449c20()
    ADD ESP,0xc                         ; 00591af2
    LEA EAX,[EDI + 0x8]                 ; 00591af5
    PUSH EAX                            ; 00591af8
    LEA EAX,[ESP + 0x8]                 ; 00591af9
    PUSH EAX                            ; 00591afd
    LEA EAX,[ESP + 0x18]                ; 00591afe
    PUSH EAX                            ; 00591b02
    CALL core_dirmat.cpp_FUN_00449c20   ; 00591b03
        ;   XREF to: 00449c20 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449c20()
    ADD ESP,0xc                         ; 00591b08
    ADD EDI,0x4                         ; 00591b0b
    PUSH EDI                            ; 00591b0e
    LEA EAX,[ESP + 0xc]                 ; 00591b0f
    PUSH EAX                            ; 00591b13
    LEA EAX,[ESP + 0x1c]                ; 00591b14
    PUSH EAX                            ; 00591b18
    CALL core_dirmat.cpp_FUN_00449c20   ; 00591b19
        ;   XREF to: 00449c20 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449c20()
    ADD ESP,0xc                         ; 00591b1e
    FLD float ptr [ESP + 0x14]          ; 00591b21
    FMUL float ptr [ESP + 0xc]          ; 00591b25
    FMUL float ptr [ESP + 0x10]         ; 00591b29
    FLD float ptr [ESP + 0x8]           ; 00591b2d
    FMUL float ptr [ESP + 0x4]          ; 00591b31
    FADDP                               ; 00591b35
    FSTP float ptr [EBX]                ; 00591b37
    FLD float ptr [ESP + 0x14]          ; 00591b39
    FMUL float ptr [ESP + 0xc]          ; 00591b3d
    FMUL float ptr [ESP + 0x4]          ; 00591b41
    FLD float ptr [ESP + 0x8]           ; 00591b45
    FCHS                                ; 00591b49
    FMUL float ptr [ESP + 0x10]         ; 00591b4b
    FADDP                               ; 00591b4f
    FSTP float ptr [EBX + 0x10]         ; 00591b51
    FLD float ptr [ESP + 0x14]          ; 00591b54
    FMUL float ptr [ESP]                ; 00591b58
    FSTP float ptr [EBX + 0x20]         ; 00591b5b
    FLD float ptr [ESP + 0x10]          ; 00591b5e
    FMUL float ptr [ESP]                ; 00591b62
    FSTP float ptr [EBX + 0x4]          ; 00591b65
    FLD float ptr [ESP + 0x4]           ; 00591b68
    FMUL float ptr [ESP]                ; 00591b6c
    FSTP float ptr [EBX + 0x14]         ; 00591b6f
    FLD float ptr [ESP + 0xc]           ; 00591b72
    FCHS                                ; 00591b76
    FSTP float ptr [EBX + 0x24]         ; 00591b78
    FLD float ptr [ESP + 0x8]           ; 00591b7b
    FMUL float ptr [ESP + 0xc]          ; 00591b7f
    FMUL float ptr [ESP + 0x10]         ; 00591b83
    FLD float ptr [ESP + 0x14]          ; 00591b87
    FCHS                                ; 00591b8b
    FMUL float ptr [ESP + 0x4]          ; 00591b8d
    FADDP                               ; 00591b91
    FSTP float ptr [EBX + 0x8]          ; 00591b93
    FLD float ptr [ESP + 0x8]           ; 00591b96
    FMUL float ptr [ESP + 0xc]          ; 00591b9a
    FMUL float ptr [ESP + 0x4]          ; 00591b9e
    FLD float ptr [ESP + 0x10]          ; 00591ba2
    FMUL float ptr [ESP + 0x14]         ; 00591ba6
    FADDP                               ; 00591baa
    FSTP float ptr [EBX + 0x18]         ; 00591bac
    FLD float ptr [ESP + 0x8]           ; 00591baf
    FMUL float ptr [ESP]                ; 00591bb3
    FSTP float ptr [EBX + 0x28]         ; 00591bb6
    FLD float ptr [ESI + 0x4]           ; 00591bb9
    FMUL float ptr [EBX + 0x4]          ; 00591bbc
    FLD float ptr [ESI]                 ; 00591bbf
    FMUL float ptr [EBX]                ; 00591bc1
    FADDP                               ; 00591bc3
    FLD float ptr [ESI + 0x8]           ; 00591bc5
    FMUL float ptr [EBX + 0x8]          ; 00591bc8
    FADDP                               ; 00591bcb
    FCHS                                ; 00591bcd
    FSTP float ptr [EBX + 0xc]          ; 00591bcf
    FLD float ptr [ESI + 0x4]           ; 00591bd2
    FMUL float ptr [EBX + 0x14]         ; 00591bd5
    FLD float ptr [ESI]                 ; 00591bd8
    FMUL float ptr [EBX + 0x10]         ; 00591bda
    FADDP                               ; 00591bdd
    FLD float ptr [ESI + 0x8]           ; 00591bdf
    FMUL float ptr [EBX + 0x18]         ; 00591be2
    FADDP                               ; 00591be5
    FCHS                                ; 00591be7
    FSTP float ptr [EBX + 0x1c]         ; 00591be9
    FLD float ptr [ESI + 0x4]           ; 00591bec
    FMUL float ptr [EBX + 0x24]         ; 00591bef
    FLD float ptr [ESI]                 ; 00591bf2
    FMUL float ptr [EBX + 0x20]         ; 00591bf4
    FADDP                               ; 00591bf7
    FLD float ptr [ESI + 0x8]           ; 00591bf9
    FMUL float ptr [EBX + 0x28]         ; 00591bfc
    FADDP                               ; 00591bff
    FCHS                                ; 00591c01
    FSTP float ptr [EBX + 0x2c]         ; 00591c03
    ADD ESP,0x18                        ; 00591c06
    POP EDI                             ; 00591c09
    POP ESI                             ; 00591c0a
    POP EBX                             ; 00591c0b
    RET                                 ; 00591c0c

