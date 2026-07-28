; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CGunFlame_init_FUN_004880d0(CGunFlame *this_ptr)
;
; Parameters:
; CGunFlame *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
;
; XREF[1]:
;   core_fire.cpp_CGunFlame_process_FUN_00488430 at 00488536
;
; Referenced Globals:
;   double DOUBLE_0058138c = 5.45263811032947E-315
;   double DOUBLE_00581394 = 25
;   undefined4 DAT_01c09e08
;   undefined4 DAT_01c09e0c
;   undefined4 DAT_01c09ed4
;   undefined4 DAT_01c09ed8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_charactr.cpp_FUN_00427730
;   core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004880d0
        ;   Label: core_fire.cpp_CGunFlame_init_FUN_004880d0
    PUSH ESI                            ; 004880d1
    PUSH EDI                            ; 004880d2
    PUSH EBP                            ; 004880d3
    MOV EBP,ESP                         ; 004880d4
    SUB ESP,0x2c                        ; 004880d6
    AND ESP,0xfffffff8                  ; 004880d9
    MOV EDX,dword ptr [0x01c09e08]      ; 004880dc | DAT_01c09e08
    XOR EDI,EDI                         ; 004880e2
    TEST EDX,EDX                        ; 004880e4
    JLE 0x0048812e                      ; 004880e6
        ;   XREF to: 0048812e (CONDITIONAL_JUMP)  ; LAB_0048812e
    MOV ESI,dword ptr [EBP + 0x14]      ; 004880e8
    MOV dword ptr [ESP + 0x20],EDI      ; 004880eb
    ADD ESI,0x4                         ; 004880ef
    MOV EAX,dword ptr [EBP + 0x14]      ; 004880f2
        ;   Label: LAB_004880f2
    MOV EBX,dword ptr [ESP + 0x20]      ; 004880f5
    MOV EDX,dword ptr [EAX + 0x20]      ; 004880f9
    MOV EBX,dword ptr [EBX + 0x1c09e0c] ; 004880fc | DAT_01c09e0c
    CMP EDX,0x2                         ; 00488102
    JZ 0x00488193                       ; 00488105
        ;   XREF to: 00488193 (CONDITIONAL_JUMP)  ; LAB_00488193
    CMP dword ptr [EBX + 0x261c],0x0    ; 0048810b
    JNZ 0x00488193                      ; 00488112
        ;   XREF to: 00488193 (CONDITIONAL_JUMP)  ; LAB_00488193
    MOV ECX,dword ptr [ESP + 0x20]      ; 00488118
        ;   Label: LAB_00488118
    MOV EBX,dword ptr [0x01c09e08]      ; 0048811c | DAT_01c09e08
    ADD ECX,0x4                         ; 00488122
    INC EDI                             ; 00488125
    MOV dword ptr [ESP + 0x20],ECX      ; 00488126
    CMP EDI,EBX                         ; 0048812a
    JL 0x004880f2                       ; 0048812c
        ;   XREF to: 004880f2 (CONDITIONAL_JUMP)  ; LAB_004880f2
    MOV EDI,dword ptr [0x01c09ed4]      ; 0048812e | DAT_01c09ed4
        ;   Label: LAB_0048812e
    XOR ESI,ESI                         ; 00488134
    TEST EDI,EDI                        ; 00488136
    JLE 0x0048818c                      ; 00488138
        ;   XREF to: 0048818c (CONDITIONAL_JUMP)  ; LAB_0048818c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048813a
    ADD EAX,0x4                         ; 0048813d
    XOR EDI,EDI                         ; 00488140
    MOV dword ptr [ESP + 0x1c],EAX      ; 00488142
    MOV EDX,dword ptr [EDI + 0x1c09ed8] ; 00488146 | DAT_01c09ed8
        ;   Label: LAB_00488146
    LEA EBX,[EDX + 0x20]                ; 0048814c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048814f
    FLD float ptr [EBX]                 ; 00488153
    FSUB float ptr [EAX]                ; 00488155
    FMUL ST0                            ; 00488157
    FLD float ptr [EBX + 0x4]           ; 00488159
    FSUB float ptr [EAX + 0x4]          ; 0048815c
    FMUL ST0                            ; 0048815f
    FLD float ptr [EBX + 0x8]           ; 00488161
    FXCH                                ; 00488164
    FADDP ST2,ST0                       ; 00488166
    FSUB float ptr [EAX + 0x8]          ; 00488168
    FMUL ST0                            ; 0048816b
    FADDP                               ; 0048816d
    FCOMP double ptr [0x00581394]       ; 0048816f | DOUBLE_00581394
    FNSTSW AX                           ; 00488175
    SAHF                                ; 00488177
    JBE 0x0048820b                      ; 00488178
        ;   XREF to: 0048820b (CONDITIONAL_JUMP)  ; LAB_0048820b
    MOV ECX,dword ptr [0x01c09ed4]      ; 0048817e | DAT_01c09ed4
        ;   Label: LAB_0048817e
    INC ESI                             ; 00488184
    ADD EDI,0x4                         ; 00488185
    CMP ESI,ECX                         ; 00488188
    JL 0x00488146                       ; 0048818a
        ;   XREF to: 00488146 (CONDITIONAL_JUMP)  ; LAB_00488146
    MOV ESP,EBP                         ; 0048818c
        ;   Label: LAB_0048818c
    POP EBP                             ; 0048818e
    POP EDI                             ; 0048818f
    POP ESI                             ; 00488190
    POP EBX                             ; 00488191
    RET                                 ; 00488192
    LEA EAX,[EBX + 0x20]                ; 00488193
        ;   Label: LAB_00488193
    FLD float ptr [EAX]                 ; 00488196
    FSUB float ptr [ESI]                ; 00488198
    FMUL ST0                            ; 0048819a
    FLD float ptr [EAX + 0x4]           ; 0048819c
    FSUB float ptr [ESI + 0x4]          ; 0048819f
    FMUL ST0                            ; 004881a2
    FLD float ptr [EAX + 0x8]           ; 004881a4
    FXCH                                ; 004881a7
    FADDP ST2,ST0                       ; 004881a9
    FSUB float ptr [ESI + 0x8]          ; 004881ab
    FMUL ST0                            ; 004881ae
    FADDP                               ; 004881b0
    FCOMP float ptr [0x0058138c]        ; 004881b2 | DOUBLE_0058138c
    FNSTSW AX                           ; 004881b8
    SAHF                                ; 004881ba
    JA 0x00488118                       ; 004881bb
        ;   XREF to: 00488118 (CONDITIONAL_JUMP)  ; LAB_00488118
    LEA EAX,[EBX + 0x150]               ; 004881c1
    PUSH EAX                            ; 004881c7
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 004881c8
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004881cd
    PUSH ESI                            ; 004881d0
    LEA EAX,[ESP + 0x4]                 ; 004881d1
    PUSH EAX                            ; 004881d5
    PUSH EBX                            ; 004881d6
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 004881d7
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004881dc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004881df
    CMP dword ptr [EAX + 0x20],0x2      ; 004881e2
    SETZ AL                             ; 004881e6
    AND EAX,0xff                        ; 004881e9
    PUSH EAX                            ; 004881ee
    PUSH 0x3f800000                     ; 004881ef
    PUSH 0x0                            ; 004881f4
    PUSH 0x0                            ; 004881f6
    LEA EAX,[ESP + 0x10]                ; 004881f8
    PUSH EAX                            ; 004881fc
    PUSH EBX                            ; 004881fd
    CALL core_charactr.cpp_FUN_00427730 ; 004881fe
        ;   XREF to: 00427730 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427730()
    ADD ESP,0x18                        ; 00488203
    JMP 0x00488118                      ; 00488206
        ;   XREF to: 00488118 (UNCONDITIONAL_JUMP)  ; LAB_00488118
    PUSH EDX                            ; 0048820b
        ;   Label: LAB_0048820b
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550 ; 0048820c
        ;   XREF to: 0048e550 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 00488211
    JMP 0x0048817e                      ; 00488214
        ;   XREF to: 0048817e (UNCONDITIONAL_JUMP)  ; LAB_0048817e

