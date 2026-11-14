; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __stack4_esi core_skeleton_cpp_CDeformableModel_skinSingleVertex_FUN_00541820(CDeformableModel *this_ptr,int lod_index,int vertex_index,CMatrix3x4f *bone_matrices,CVector3f *output_pos)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; int              Stack[0xc]:4   vertex_index
; CMatrix3x4f *    Stack[0x10]:4   bone_matrices
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_skinSingleVertex_FUN_00547230 at 0054725c
;
; Called Functions:
;   core_xform.cpp_FUN_00591530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541820
        ;   Label: core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_00541820
    PUSH EDI                            ; 00541821
    PUSH EBP                            ; 00541822
    SUB ESP,0x64                        ; 00541823
    MOV dword ptr [ESP + 0x54],ESI      ; 00541826
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0054182a
    MOV EAX,dword ptr [ESP + 0x78]      ; 0054182e
    LEA EBX,[ESI*0x4 + 0x0]             ; 00541832
    MOV EDX,dword ptr [ESP + 0x74]      ; 00541839
    SUB EBX,ESI                         ; 0054183d
    SHL EAX,0x2                         ; 0054183f
    SHL EBX,0x2                         ; 00541842
    ADD EAX,EDX                         ; 00541845
    ADD EBX,ESI                         ; 00541847
    MOV EAX,dword ptr [EAX + 0x40]      ; 00541849
    SHL EBX,0x2                         ; 0054184c
    ADD EAX,EBX                         ; 0054184f
    MOV dword ptr [ESP + 0x58],EAX      ; 00541851
    MOV EBX,dword ptr [ESP + 0x58]      ; 00541855
    MOV DL,byte ptr [EBX]               ; 00541859
    ADD EAX,0x10                        ; 0054185b
    CMP DL,0x1                          ; 0054185e
    JZ 0x005418aa                       ; 00541861
        ;   XREF to: 005418aa (CONDITIONAL_JUMP)  ; LAB_005418aa
    ADD EBX,0x4                         ; 00541863
    MOV dword ptr [ESP + 0x5c],EAX      ; 00541866
    XOR ECX,ECX                         ; 0054186a
    XOR EBP,EBP                         ; 0054186c
    MOV EAX,dword ptr [ESP + 0x58]      ; 0054186e
    MOV dword ptr [ESP + 0x34],ECX      ; 00541872
    MOV dword ptr [ESP + 0x38],ECX      ; 00541876
    MOV dword ptr [ESP + 0x30],ECX      ; 0054187a
    MOV dword ptr [ESP + 0x60],EAX      ; 0054187e
    MOV ESI,dword ptr [ESP + 0x58]      ; 00541882
        ;   Label: LAB_00541882
    MOVZX ESI,byte ptr [ESI]            ; 00541886
    CMP EBP,ESI                         ; 00541889
    JL 0x005418db                       ; 0054188b
        ;   XREF to: 005418db (CONDITIONAL_JUMP)  ; LAB_005418db
    MOV EDI,ESP                         ; 0054188d
    LEA ESI,[ESP + 0x30]                ; 0054188f
    MOVSD ES:EDI,ESI                    ; 00541893
        ;   Label: LAB_00541893
    MOVSD ES:EDI,ESI                    ; 00541894
    MOVSD ES:EDI,ESI                    ; 00541895
    MOV EDI,dword ptr [ESP + 0x54]      ; 00541896
    MOV ESI,ESP                         ; 0054189a
    MOVSD ES:EDI,ESI                    ; 0054189c
    MOVSD ES:EDI,ESI                    ; 0054189d
    MOVSD ES:EDI,ESI                    ; 0054189e
    MOV EAX,dword ptr [ESP + 0x54]      ; 0054189f
    ADD ESP,0x64                        ; 005418a3
    POP EBP                             ; 005418a6
    POP EDI                             ; 005418a7
    POP EBX                             ; 005418a8
    RET                                 ; 005418a9
    MOVZX ESI,byte ptr [EBX + 0x1]      ; 005418aa
        ;   Label: LAB_005418aa
    LEA EBX,[ESI*0x4 + 0x0]             ; 005418ae
    SUB EBX,ESI                         ; 005418b5
    MOV EDI,dword ptr [ESP + 0x80]      ; 005418b7
    SHL EBX,0x4                         ; 005418be
    ADD EBX,EDI                         ; 005418c1
    PUSH EBX                            ; 005418c3
    PUSH EAX                            ; 005418c4
    LEA ESI,[ESP + 0x20]                ; 005418c5
    LEA EDI,[ESP + 0x8]                 ; 005418c9
    CALL core_xform.cpp_FUN_00591530    ; 005418cd
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[ESP + 0x20]                ; 005418d2
    ADD ESP,0x8                         ; 005418d6
    JMP 0x00541893                      ; 005418d9
        ;   XREF to: 00541893 (UNCONDITIONAL_JUMP)  ; LAB_00541893
    MOV ESI,dword ptr [ESP + 0x60]      ; 005418db
        ;   Label: LAB_005418db
    MOVZX ESI,byte ptr [ESI + 0x1]      ; 005418df
    IMUL ESI,ESI,0x30                   ; 005418e3
    ADD ESI,dword ptr [ESP + 0x80]      ; 005418e6
    PUSH ESI                            ; 005418ed
    MOV EDX,dword ptr [ESP + 0x60]      ; 005418ee
    PUSH EDX                            ; 005418f2
    LEA ESI,[ESP + 0x14]                ; 005418f3
    LEA EDI,[ESP + 0x2c]                ; 005418f7
    CALL core_xform.cpp_FUN_00591530    ; 005418fb
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[ESP + 0x14]                ; 00541900
    ADD ESP,0x8                         ; 00541904
    MOVSD ES:EDI,ESI                    ; 00541907
    MOVSD ES:EDI,ESI                    ; 00541908
    MOVSD ES:EDI,ESI                    ; 00541909
    FLD float ptr [ESP + 0x24]          ; 0054190a
    FMUL float ptr [EBX]                ; 0054190e
    FLD float ptr [ESP + 0x28]          ; 00541910
    FMUL float ptr [EBX]                ; 00541914
    FLD float ptr [ESP + 0x2c]          ; 00541916
    FMUL float ptr [EBX]                ; 0054191a
    ADD EBX,0x4                         ; 0054191c
    INC EBP                             ; 0054191f
    FLD float ptr [ESP + 0x30]          ; 00541920
    FLD float ptr [ESP + 0x34]          ; 00541924
    FLD float ptr [ESP + 0x38]          ; 00541928
    MOV ECX,dword ptr [ESP + 0x5c]      ; 0054192c
    LEA EDI,[ESP + 0x3c]                ; 00541930
    LEA ESI,[ESP + 0x48]                ; 00541934
    ADD ECX,0xc                         ; 00541938
    FXCH ST5                            ; 0054193b
    FSTP float ptr [ESP + 0x48]         ; 0054193d
    FXCH ST3                            ; 00541941
    FSTP float ptr [ESP + 0x4c]         ; 00541943
    FXCH                                ; 00541947
    FSTP float ptr [ESP + 0x50]         ; 00541949
    MOVSD ES:EDI,ESI                    ; 0054194d
    MOVSD ES:EDI,ESI                    ; 0054194e
    MOVSD ES:EDI,ESI                    ; 0054194f
    MOV dword ptr [ESP + 0x5c],ECX      ; 00541950
    MOV ESI,dword ptr [ESP + 0x60]      ; 00541954
    FADD float ptr [ESP + 0x3c]         ; 00541958
    FXCH                                ; 0054195c
    FADD float ptr [ESP + 0x40]         ; 0054195e
    FXCH ST2                            ; 00541962
    FADD float ptr [ESP + 0x44]         ; 00541964
    FXCH                                ; 00541968
    FSTP float ptr [ESP + 0x30]         ; 0054196a
    FXCH                                ; 0054196e
    FSTP float ptr [ESP + 0x34]         ; 00541970
    INC ESI                             ; 00541974
    FSTP float ptr [ESP + 0x38]         ; 00541975
    MOV dword ptr [ESP + 0x60],ESI      ; 00541979
    JMP 0x00541882                      ; 0054197d
        ;   XREF to: 00541882 (UNCONDITIONAL_JUMP)  ; LAB_00541882

