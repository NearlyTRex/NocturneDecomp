; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_FUN_00583800(CMatrix3x4f *output_matrix,CVector3f *position,CVector3f *euler_angles)
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
; XREF[10]:
;   core_bodypart.cpp_FUN_00415e30 at 00416068
;   core_bugs.cpp_FUN_00422570 at 00422677
;   core_charactr.cpp_FUN_0042f770 at 0042fad6
;   core_charactr.cpp_FUN_00431ab0 at 00431af6
;   core_cloth.cpp_CCloth_orientBoneToChild_FUN_0043d680 at 0043d786
;   core_fire.cpp_FUN_00497290 at 0049740c
;   core_ladder.cpp_CLadder_cacheRelativePosition_FUN_004dfa70 at 004dfabb
;   core_platfrm.cpp_CPlatform_attachActor_FUN_00512aa0 at 00512b28
;   core_platfrm.cpp_FUN_005114f0 at 00511701
;   core_thehand.cpp_FUN_0056c140 at 0056c3a4
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045bef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00583800
        ;   Label: core_xform.cpp_FUN_00583800
    PUSH ESI                            ; 00583801
    PUSH EDI                            ; 00583802
    SUB ESP,0x18                        ; 00583803
    MOV EBX,dword ptr [ESP + 0x28]      ; 00583806
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0058380a
    MOV EDI,dword ptr [ESP + 0x30]      ; 0058380e
    PUSH EDI                            ; 00583812
    LEA EAX,[ESP + 0x4]                 ; 00583813
    PUSH EAX                            ; 00583817
    LEA EAX,[ESP + 0x14]                ; 00583818
    PUSH EAX                            ; 0058381c
    CALL core_dirmat.cpp_FUN_0045bef0   ; 0058381d
        ;   XREF to: 0045bef0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045bef0()
    ADD ESP,0xc                         ; 00583822
    LEA EAX,[EDI + 0x8]                 ; 00583825
    PUSH EAX                            ; 00583828
    LEA EAX,[ESP + 0x8]                 ; 00583829
    PUSH EAX                            ; 0058382d
    LEA EAX,[ESP + 0x18]                ; 0058382e
    PUSH EAX                            ; 00583832
    CALL core_dirmat.cpp_FUN_0045bef0   ; 00583833
        ;   XREF to: 0045bef0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045bef0()
    ADD ESP,0xc                         ; 00583838
    ADD EDI,0x4                         ; 0058383b
    PUSH EDI                            ; 0058383e
    LEA EAX,[ESP + 0xc]                 ; 0058383f
    PUSH EAX                            ; 00583843
    LEA EAX,[ESP + 0x1c]                ; 00583844
    PUSH EAX                            ; 00583848
    CALL core_dirmat.cpp_FUN_0045bef0   ; 00583849
        ;   XREF to: 0045bef0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045bef0()
    ADD ESP,0xc                         ; 0058384e
    FLD float ptr [ESP + 0x14]          ; 00583851
    FMUL float ptr [ESP + 0xc]          ; 00583855
    FMUL float ptr [ESP + 0x10]         ; 00583859
    FLD float ptr [ESP + 0x8]           ; 0058385d
    FMUL float ptr [ESP + 0x4]          ; 00583861
    FADDP                               ; 00583865
    FSTP float ptr [EBX]                ; 00583867
    FLD float ptr [ESP + 0x14]          ; 00583869
    FMUL float ptr [ESP + 0xc]          ; 0058386d
    FMUL float ptr [ESP + 0x4]          ; 00583871
    FLD float ptr [ESP + 0x8]           ; 00583875
    FCHS                                ; 00583879
    FMUL float ptr [ESP + 0x10]         ; 0058387b
    FADDP                               ; 0058387f
    FSTP float ptr [EBX + 0x10]         ; 00583881
    FLD float ptr [ESP + 0x14]          ; 00583884
    FMUL float ptr [ESP]                ; 00583888
    FSTP float ptr [EBX + 0x20]         ; 0058388b
    FLD float ptr [ESP + 0x10]          ; 0058388e
    FMUL float ptr [ESP]                ; 00583892
    FSTP float ptr [EBX + 0x4]          ; 00583895
    FLD float ptr [ESP + 0x4]           ; 00583898
    FMUL float ptr [ESP]                ; 0058389c
    FSTP float ptr [EBX + 0x14]         ; 0058389f
    FLD float ptr [ESP + 0xc]           ; 005838a2
    FCHS                                ; 005838a6
    FSTP float ptr [EBX + 0x24]         ; 005838a8
    FLD float ptr [ESP + 0x8]           ; 005838ab
    FMUL float ptr [ESP + 0xc]          ; 005838af
    FMUL float ptr [ESP + 0x10]         ; 005838b3
    FLD float ptr [ESP + 0x14]          ; 005838b7
    FCHS                                ; 005838bb
    FMUL float ptr [ESP + 0x4]          ; 005838bd
    FADDP                               ; 005838c1
    FSTP float ptr [EBX + 0x8]          ; 005838c3
    FLD float ptr [ESP + 0x8]           ; 005838c6
    FMUL float ptr [ESP + 0xc]          ; 005838ca
    FMUL float ptr [ESP + 0x4]          ; 005838ce
    FLD float ptr [ESP + 0x10]          ; 005838d2
    FMUL float ptr [ESP + 0x14]         ; 005838d6
    FADDP                               ; 005838da
    FSTP float ptr [EBX + 0x18]         ; 005838dc
    FLD float ptr [ESP + 0x8]           ; 005838df
    FMUL float ptr [ESP]                ; 005838e3
    FSTP float ptr [EBX + 0x28]         ; 005838e6
    FLD float ptr [ESI + 0x4]           ; 005838e9
    FMUL float ptr [EBX + 0x4]          ; 005838ec
    FLD float ptr [ESI]                 ; 005838ef
    FMUL float ptr [EBX]                ; 005838f1
    FADDP                               ; 005838f3
    FLD float ptr [ESI + 0x8]           ; 005838f5
    FMUL float ptr [EBX + 0x8]          ; 005838f8
    FADDP                               ; 005838fb
    FCHS                                ; 005838fd
    FSTP float ptr [EBX + 0xc]          ; 005838ff
    FLD float ptr [ESI + 0x4]           ; 00583902
    FMUL float ptr [EBX + 0x14]         ; 00583905
    FLD float ptr [ESI]                 ; 00583908
    FMUL float ptr [EBX + 0x10]         ; 0058390a
    FADDP                               ; 0058390d
    FLD float ptr [ESI + 0x8]           ; 0058390f
    FMUL float ptr [EBX + 0x18]         ; 00583912
    FADDP                               ; 00583915
    FCHS                                ; 00583917
    FSTP float ptr [EBX + 0x1c]         ; 00583919
    FLD float ptr [ESI + 0x4]           ; 0058391c
    FMUL float ptr [EBX + 0x24]         ; 0058391f
    FLD float ptr [ESI]                 ; 00583922
    FMUL float ptr [EBX + 0x20]         ; 00583924
    FADDP                               ; 00583927
    FLD float ptr [ESI + 0x8]           ; 00583929
    FMUL float ptr [EBX + 0x28]         ; 0058392c
    FADDP                               ; 0058392f
    FCHS                                ; 00583931
    FSTP float ptr [EBX + 0x2c]         ; 00583933
    ADD ESP,0x18                        ; 00583936
    POP EDI                             ; 00583939
    POP ESI                             ; 0058393a
    POP EBX                             ; 0058393b
    RET                                 ; 0058393c

