; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_platfrm_cpp_CPlatform_isActorOnPlatform_FUN_005127f0(CPlatform *this_ptr,CDemonActor *actor)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; Local Variables:
; undefined4       Stack[-0xa8]:4  local_a8
;
; XREF[1]:
;   core_platfrm.cpp_CPlatform_process_FUN_005114f0 at 00511e07
;
; Referenced Globals:
;   undefined4 DAT_005cc483
;   undefined4 DAT_005cc48b
;
; Called Functions:
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_dmodel.cpp_FUN_004618a0
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005127f0
        ;   Label: core_platfrm.cpp_CPlatform_isActorOnPlatform_FUN_005127f0
    PUSH ESI                            ; 005127f1
    PUSH EDI                            ; 005127f2
    PUSH EBP                            ; 005127f3
    MOV EBP,ESP                         ; 005127f4
    SUB ESP,0xa0                        ; 005127f6
    AND ESP,0xfffffff8                  ; 005127fc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005127ff
    CMP dword ptr [EBP + 0x18],0x0      ; 00512802
    JNZ 0x00512811                      ; 00512806
        ;   XREF to: 00512811 (CONDITIONAL_JUMP)  ; LAB_00512811
    XOR EAX,EAX                         ; 00512808
        ;   Label: LAB_00512808
    MOV ESP,EBP                         ; 0051280a
    POP EBP                             ; 0051280c
    POP EDI                             ; 0051280d
    POP ESI                             ; 0051280e
    POP EBX                             ; 0051280f
    RET                                 ; 00512810
    LEA EAX,[ESP + 0x8]                 ; 00512811
        ;   Label: LAB_00512811
    PUSH EAX                            ; 00512815
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80 ; 00512816
        ;   XREF to: 0053ed80 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80(SCollisionInfo * this_ptr)
    LEA EAX,[ESP + 0xc]                 ; 0051281b
    ADD ESP,0x4                         ; 0051281f
    XOR ECX,ECX                         ; 00512822
    MOV ESI,dword ptr [EBP + 0x18]      ; 00512824
    PUSH EAX                            ; 00512827
    MOV EDI,dword ptr [EBP + 0x18]      ; 00512828
    MOV dword ptr [ESP + 0xc],ECX       ; 0051282b
    PUSH EDI                            ; 0051282f
    MOV ESI,dword ptr [ESI + 0x154]     ; 00512830
    CALL dword ptr [ESI + 0x3c]         ; 00512836
    ADD ESP,0x8                         ; 00512839
    CMP EAX,0x2                         ; 0051283c
    JNZ 0x00512808                      ; 0051283f
        ;   XREF to: 00512808 (CONDITIONAL_JUMP)  ; LAB_00512808
    PUSH dword ptr [EBX + 0x30]         ; 00512841
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 00512844
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    MOV dword ptr [ESP + 0xa0],EAX      ; 00512849
    FLD float ptr [ESP + 0xa0]          ; 00512850
    ADD ESP,0x4                         ; 00512857
    PUSH dword ptr [EBX + 0x38]         ; 0051285a
    FSTP float ptr [EBX + 0x30]         ; 0051285d
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 00512860
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    FLD float ptr [EBX + 0x30]          ; 00512865
    MOV dword ptr [ESP + 0xa0],EAX      ; 00512868
    FABS                                ; 0051286f
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00512871
    MOV dword ptr [EBX + 0x38],EAX      ; 00512878
    ADD ESP,0x4                         ; 0051287b
    FCOMP double ptr [0x005cc483]       ; 0051287e | DAT_005cc483
    FNSTSW AX                           ; 00512884
    SAHF                                ; 00512886
    JA 0x00512808                       ; 00512887
        ;   XREF to: 00512808 (CONDITIONAL_JUMP)  ; LAB_00512808
    FLD float ptr [EBX + 0x38]          ; 0051288d
    FABS                                ; 00512890
    FCOMP double ptr [0x005cc483]       ; 00512892 | DAT_005cc483
    FNSTSW AX                           ; 00512898
    SAHF                                ; 0051289a
    JA 0x00512808                       ; 0051289b
        ;   XREF to: 00512808 (CONDITIONAL_JUMP)  ; LAB_00512808
    PUSH EBX                            ; 005128a1
    MOV EAX,dword ptr [EBX + 0x154]     ; 005128a2
    LEA ESI,[ESP + 0x34]                ; 005128a8
    CALL dword ptr [EAX + 0x1c]         ; 005128ac
    ADD ESP,0x4                         ; 005128af
    LEA EDI,[ESP + 0x48]                ; 005128b2
    MOV EAX,dword ptr [EBP + 0x18]      ; 005128b6
    MOV ECX,0x6                         ; 005128b9
    ADD EAX,0x20                        ; 005128be
    LEA ESI,[ESP + 0x30]                ; 005128c1
    PUSH EAX                            ; 005128c5
    MOVSD.REP ES:EDI,ESI                ; 005128c6
    PUSH EBX                            ; 005128c8
    LEA ESI,[ESP + 0x68]                ; 005128c9
    LEA EDI,[ESP + 0x98]                ; 005128cd
    CALL core_actor.cpp_FUN_00408bf0    ; 005128d4
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x68]                ; 005128d9
    ADD ESP,0x8                         ; 005128dd
    MOVSD ES:EDI,ESI                    ; 005128e0
    MOVSD ES:EDI,ESI                    ; 005128e1
    MOVSD ES:EDI,ESI                    ; 005128e2
    FLD float ptr [ESP + 0x90]          ; 005128e3
    FADD float ptr [ESP + 0x24]         ; 005128ea
    FCOMP float ptr [ESP + 0x48]        ; 005128ee
    FNSTSW AX                           ; 005128f2
    SAHF                                ; 005128f4
    JC 0x00512808                       ; 005128f5
        ;   XREF to: 00512808 (CONDITIONAL_JUMP)  ; LAB_00512808
    FLD float ptr [ESP + 0x90]          ; 005128fb
    FSUB float ptr [ESP + 0x24]         ; 00512902
    FCOMP float ptr [ESP + 0x54]        ; 00512906
    FNSTSW AX                           ; 0051290a
    SAHF                                ; 0051290c
    JA 0x00512808                       ; 0051290d
        ;   XREF to: 00512808 (CONDITIONAL_JUMP)  ; LAB_00512808
    FLD float ptr [ESP + 0x98]          ; 00512913
    FADD float ptr [ESP + 0x24]         ; 0051291a
    FCOMP float ptr [ESP + 0x50]        ; 0051291e
    FNSTSW AX                           ; 00512922
    SAHF                                ; 00512924
    JC 0x00512808                       ; 00512925
        ;   XREF to: 00512808 (CONDITIONAL_JUMP)  ; LAB_00512808
    FLD float ptr [ESP + 0x98]          ; 0051292b
    FSUB float ptr [ESP + 0x24]         ; 00512932
    FCOMP float ptr [ESP + 0x5c]        ; 00512936
    FNSTSW AX                           ; 0051293a
    SAHF                                ; 0051293c
    JA 0x00512808                       ; 0051293d
        ;   XREF to: 00512808 (CONDITIONAL_JUMP)  ; LAB_00512808
    FLD float ptr [ESP + 0x94]          ; 00512943
    FADD float ptr [ESP + 0x20]         ; 0051294a
    FCOMP float ptr [ESP + 0x4c]        ; 0051294e
    FNSTSW AX                           ; 00512952
    SAHF                                ; 00512954
    JC 0x00512808                       ; 00512955
        ;   XREF to: 00512808 (CONDITIONAL_JUMP)  ; LAB_00512808
    FLD float ptr [ESP + 0x94]          ; 0051295b
    FADD float ptr [ESP + 0x1c]         ; 00512962
    FCOMP float ptr [ESP + 0x58]        ; 00512966
    FNSTSW AX                           ; 0051296a
    SAHF                                ; 0051296c
    JA 0x00512808                       ; 0051296d
        ;   XREF to: 00512808 (CONDITIONAL_JUMP)  ; LAB_00512808
    LEA EAX,[EBX + 0x158]               ; 00512973
    PUSH EAX                            ; 00512979
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0051297a
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x358]     ; 0051297f
    ADD ESP,0x4                         ; 00512985
    TEST EDX,EDX                        ; 00512988
    JNZ 0x00512998                      ; 0051298a
        ;   XREF to: 00512998 (CONDITIONAL_JUMP)  ; LAB_00512998
    MOV EAX,0x1                         ; 0051298c
        ;   Label: LAB_0051298c
    MOV ESP,EBP                         ; 00512991
    POP EBP                             ; 00512993
    POP EDI                             ; 00512994
    POP ESI                             ; 00512995
    POP EBX                             ; 00512996
    RET                                 ; 00512997
    FLD float ptr [ESP + 0x20]          ; 00512998
        ;   Label: LAB_00512998
    LEA EDI,[ESP + 0x84]                ; 0051299c
    LEA ESI,[ESP + 0x90]                ; 005129a3
    LEA EAX,[ESP + 0x6c]                ; 005129aa
    XOR ECX,ECX                         ; 005129ae
    ADD EBX,0x158                       ; 005129b0
    MOV dword ptr [ESP + 0x78],ECX      ; 005129b6
    PUSH EAX                            ; 005129ba
    LEA EAX,[ESP + 0x7c]                ; 005129bb
    MOV dword ptr [ESP + 0x84],ECX      ; 005129bf
    PUSH EAX                            ; 005129c6
    LEA EAX,[ESP + 0x8c]                ; 005129c7
    MOVSD ES:EDI,ESI                    ; 005129ce
    MOVSD ES:EDI,ESI                    ; 005129cf
    MOVSD ES:EDI,ESI                    ; 005129d0
    PUSH EAX                            ; 005129d1
    FADD float ptr [0x005cc48b]         ; 005129d2 | DAT_005cc48b
    MOV ESI,0x3f800000                  ; 005129d8
    PUSH ECX                            ; 005129dd
    FADD float ptr [ESP + 0x98]         ; 005129de
    PUSH EBX                            ; 005129e5
    FSTP float ptr [ESP + 0x9c]         ; 005129e6
    MOV dword ptr [ESP + 0x90],ESI      ; 005129ed
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 005129f4
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005129f9
    PUSH EAX                            ; 005129fc
    CALL core_dmodel.cpp_FUN_004618a0   ; 005129fd
        ;   XREF to: 004618a0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_004618a0()
    MOV dword ptr [ESP + 0xb0],EAX      ; 00512a02
    FLD float ptr [ESP + 0xb0]          ; 00512a09
    ADD ESP,0x14                        ; 00512a10
    FLDZ                                ; 00512a13
    FXCH                                ; 00512a15
    FSTP double ptr [ESP]               ; 00512a17
    FCOMP double ptr [ESP]              ; 00512a1a
    FNSTSW AX                           ; 00512a1d
    SAHF                                ; 00512a1f
    JA 0x00512808                       ; 00512a20
        ;   XREF to: 00512808 (CONDITIONAL_JUMP)  ; LAB_00512808
    FLD1                                ; 00512a26
    FCOMP double ptr [ESP]              ; 00512a28
    FNSTSW AX                           ; 00512a2b
    SAHF                                ; 00512a2d
    JNC 0x0051298c                      ; 00512a2e
        ;   XREF to: 0051298c (CONDITIONAL_JUMP)  ; LAB_0051298c
    XOR EAX,EAX                         ; 00512a34
    MOV ESP,EBP                         ; 00512a36
    POP EBP                             ; 00512a38
    POP EDI                             ; 00512a39
    POP ESI                             ; 00512a3a
    POP EBX                             ; 00512a3b
    RET                                 ; 00512a3c

