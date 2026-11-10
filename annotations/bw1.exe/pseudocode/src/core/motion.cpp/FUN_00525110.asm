; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_motion_cpp_FUN_00525110(int *param_1,int param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[10]:
;   core_doc.cpp_FUN_0046caa0 at 0046e5ea
;   core_doc.cpp_FUN_0046ea80 at 0046ed3f
;   core_doc.cpp_FUN_0046f200 at 0046f30f
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004c89c0 at 004c8d18
;   core_ghoul.cpp_CGhoul_process_FUN_004de330 at 004de640
;   core_hostage.cpp_CHostage_process_FUN_004ed890 at 004eed61
;   core_scat.cpp_CScat_blendLayerAction_FUN_00542090 at 00542201
;   core_stranger.cpp_CStranger_applyArmAimRotation_FUN_0058aab0 at 0058abb3
;   core_stranger.cpp_CStranger_makeDrawDecision_FUN_0058a360 at 0058a5a9
;   core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_00588ad0 at 00589ec6
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525110
        ;   Label: core_motion.cpp_FUN_00525110
    PUSH ESI                            ; 00525111
    PUSH EDI                            ; 00525112
    PUSH EBP                            ; 00525113
    MOV EBP,ESP                         ; 00525114
    SUB ESP,0x18                        ; 00525116
    AND ESP,0xfffffff8                  ; 00525119
    MOV EDX,dword ptr [EBP + 0x18]      ; 0052511c
    MOV ECX,dword ptr [EBP + 0x14]      ; 0052511f
    LEA EAX,[EDX*0x8 + 0x0]             ; 00525122
    FLD float ptr [EBP + 0x1c]          ; 00525129
    ADD EAX,EDX                         ; 0052512c
    MOV ECX,dword ptr [ECX]             ; 0052512e
    SHL EAX,0x5                         ; 00525130
    LEA EDX,[ECX + 0x1c28]              ; 00525133
    FLDZ                                ; 00525139
    ADD EDX,EAX                         ; 0052513b
    FCOMPP                              ; 0052513d
    FNSTSW AX                           ; 0052513f
    SAHF                                ; 00525141
    JNC 0x00525203                      ; 00525142
        ;   XREF to: 00525203 (CONDITIONAL_JUMP)  ; LAB_00525203
    MOV EAX,dword ptr [EDX + 0xf4]      ; 00525148
    INC EAX                             ; 0052514e
    MOV dword ptr [ESP + 0x14],EAX      ; 0052514f
    FILD dword ptr [ESP + 0x14]         ; 00525153
    FCOMP float ptr [EBP + 0x1c]        ; 00525157
    FNSTSW AX                           ; 0052515a
    SAHF                                ; 0052515c
    JBE 0x00525207                      ; 0052515d
        ;   XREF to: 00525207 (CONDITIONAL_JUMP)  ; LAB_00525207
    FLD float ptr [EBP + 0x1c]          ; 00525163
    FLD ST0                             ; 00525166
    CALL crt_math.c_round_FUN_005c03a0  ; 00525168
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x10]        ; 0052516d
    MOV EAX,dword ptr [ESP + 0x10]      ; 00525171
    MOV dword ptr [ESP + 0x14],EAX      ; 00525175
    FILD dword ptr [ESP + 0x14]         ; 00525179
    FSUBP                               ; 0052517d
    XOR EBX,EBX                         ; 0052517f
    FSTP float ptr [ESP + 0x4]          ; 00525181
    TEST EAX,EAX                        ; 00525185
    JLE 0x00525190                      ; 00525187
        ;   XREF to: 00525190 (CONDITIONAL_JUMP)  ; LAB_00525190
    MOV EBX,dword ptr [EDX + EAX*0x4 + 0xf4] ; 00525189
    MOV EAX,dword ptr [ESP + 0x10]      ; 00525190
        ;   Label: LAB_00525190
    MOV ESI,dword ptr [EDX + 0xf4]      ; 00525194
    MOV ECX,dword ptr [EDX + 0x64]      ; 0052519a
    CMP EAX,ESI                         ; 0052519d
    JGE 0x005251a8                      ; 0052519f
        ;   XREF to: 005251a8 (CONDITIONAL_JUMP)  ; LAB_005251a8
    MOV ECX,dword ptr [EDX + EAX*0x4 + 0xf8] ; 005251a1
    FLD float ptr [ESP + 0x4]           ; 005251a8
        ;   Label: LAB_005251a8
    FLD ST0                             ; 005251ac
    FLD1                                ; 005251ae
    FSUBRP                              ; 005251b0
    MOV dword ptr [ESP + 0x14],EBX      ; 005251b2
    FILD dword ptr [ESP + 0x14]         ; 005251b6
    FMULP                               ; 005251ba
    MOV dword ptr [ESP + 0x14],ECX      ; 005251bc
    FILD dword ptr [ESP + 0x14]         ; 005251c0
    FMULP ST2                           ; 005251c4
    FADDP                               ; 005251c6
    FST float ptr [ESP]                 ; 005251c8
    FLDZ                                ; 005251cb
    FCOMPP                              ; 005251cd
    FNSTSW AX                           ; 005251cf
    SAHF                                ; 005251d1
    JA 0x00525219                       ; 005251d2
        ;   XREF to: 00525219 (CONDITIONAL_JUMP)  ; LAB_00525219
    MOV EAX,dword ptr [EDX + 0x64]      ; 005251d4
    DEC EAX                             ; 005251d7
    MOV dword ptr [ESP + 0x14],EAX      ; 005251d8
    FLD float ptr [ESP]                 ; 005251dc
    FILD dword ptr [ESP + 0x14]         ; 005251df
    FSTP float ptr [ESP + 0x8]          ; 005251e3
    FCOMP float ptr [ESP + 0x8]         ; 005251e7
    FNSTSW AX                           ; 005251eb
    SAHF                                ; 005251ed
    JBE 0x00525221                      ; 005251ee
        ;   XREF to: 00525221 (CONDITIONAL_JUMP)  ; LAB_00525221
    MOV EAX,dword ptr [ESP + 0x8]       ; 005251f0
    MOV dword ptr [ESP + 0xc],EAX       ; 005251f4
        ;   Label: LAB_005251f4
    MOV EAX,dword ptr [ESP + 0xc]       ; 005251f8
        ;   Label: LAB_005251f8
    MOV ESP,EBP                         ; 005251fc
    POP EBP                             ; 005251fe
    POP EDI                             ; 005251ff
    POP ESI                             ; 00525200
    POP EBX                             ; 00525201
    RET                                 ; 00525202
    XOR EAX,EAX                         ; 00525203
        ;   Label: LAB_00525203
    JMP 0x005251f4                      ; 00525205
        ;   XREF to: 005251f4 (UNCONDITIONAL_JUMP)  ; LAB_005251f4
    MOV EAX,dword ptr [EDX + 0x64]      ; 00525207
        ;   Label: LAB_00525207
    DEC EAX                             ; 0052520a
    MOV dword ptr [ESP + 0x14],EAX      ; 0052520b
    FILD dword ptr [ESP + 0x14]         ; 0052520f
    FSTP float ptr [ESP + 0xc]          ; 00525213
    JMP 0x005251f8                      ; 00525217
        ;   XREF to: 005251f8 (UNCONDITIONAL_JUMP)  ; LAB_005251f8
    XOR EDI,EDI                         ; 00525219
        ;   Label: LAB_00525219
    MOV dword ptr [ESP + 0xc],EDI       ; 0052521b
    JMP 0x005251f8                      ; 0052521f
        ;   XREF to: 005251f8 (UNCONDITIONAL_JUMP)  ; LAB_005251f8
    MOV EAX,dword ptr [ESP]             ; 00525221
        ;   Label: LAB_00525221
    MOV dword ptr [ESP + 0xc],EAX       ; 00525224
    MOV EAX,dword ptr [ESP + 0xc]       ; 00525228
    MOV ESP,EBP                         ; 0052522c
    POP EBP                             ; 0052522e
    POP EDI                             ; 0052522f
    POP ESI                             ; 00525230
    POP EBX                             ; 00525231
    RET                                 ; 00525232

