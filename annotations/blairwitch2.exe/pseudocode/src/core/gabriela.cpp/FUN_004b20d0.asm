; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gabriela_cpp_FUN_004b20d0(int param_1,float param_2,float *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
; Local Variables:
; undefined4       Stack[-0x1b78]:4  local_1b78
; undefined        Stack[-0x1b74]:1  local_1b74
; undefined        Stack[-0xd8]:1  local_d8
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004b1e00 at 004b1f85
;
; Referenced Globals:
;   undefined4 DAT_005d71b7
;   undefined4 DAT_005d71bb
;   undefined4 DAT_005f7348
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00535e10
;   core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_00548620
;   core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005486f0
;   core_skeleton.cpp_FUN_00545a60
;   core_skeleton.cpp_FUN_00546790
;   core_skeleton.cpp_FUN_005469a0
;   core_xform.cpp_FUN_00591530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b20d0
        ;   Label: core_gabriela.cpp_FUN_004b20d0
    PUSH ESI                            ; 004b20d1
    PUSH EDI                            ; 004b20d2
    PUSH EBP                            ; 004b20d3
    MOV EBP,ESP                         ; 004b20d4
    SUB ESP,0x1b68                      ; 004b20d6
    AND ESP,0xfffffff8                  ; 004b20dc
    LEA EAX,[ESP + 0x4]                 ; 004b20df
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b20e3
    PUSH EAX                            ; 004b20e6
    ADD EBX,0x2b4                       ; 004b20e7
    PUSH EBX                            ; 004b20ed
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_00548620 ; 004b20ee
        ;   XREF to: 00548620 (UNCONDITIONAL_CALL)  ; SPose * core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_00548620(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 004b20f3
    MOV EDX,dword ptr [EBP + 0x24]      ; 004b20f6
    PUSH EDX                            ; 004b20f9
    PUSH EBX                            ; 004b20fa
    LEA ESI,[ESP + 0x1b44]              ; 004b20fb
    LEA EDI,[ESP + 0x1b5c]              ; 004b2102
    CALL core_skeleton.cpp_FUN_005469a0 ; 004b2109
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    LEA ESI,[ESP + 0x1b44]              ; 004b210e
    ADD ESP,0x8                         ; 004b2115
    LEA EAX,[ESP + 0x1b54]              ; 004b2118
    MOV ECX,dword ptr [EBP + 0x14]      ; 004b211f
    MOVSD ES:EDI,ESI                    ; 004b2122
    MOVSD ES:EDI,ESI                    ; 004b2123
    MOVSD ES:EDI,ESI                    ; 004b2124
    PUSH EAX                            ; 004b2125
    FLD float ptr [ESP + 0x1b5c]        ; 004b2126
    LEA ESI,[ESP + 0x1b34]              ; 004b212d
    FADD float ptr [0x005d71b7]         ; 004b2134 | DAT_005d71b7
    PUSH ECX                            ; 004b213a
    FSTP float ptr [ESP + 0x1b60]       ; 004b213b
    CALL core_actor.cpp_FUN_00408d70    ; 004b2142
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004b2147
    FLD float ptr [EBP + 0x18]          ; 004b214a
    FDIV float ptr [0x005f7348]         ; 004b214d | DAT_005f7348
    LEA EDI,[ESP + 0x1b48]              ; 004b2153
    LEA ESI,[ESP + 0x1b30]              ; 004b215a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004b2161
    MOVSD ES:EDI,ESI                    ; 004b2164
    MOVSD ES:EDI,ESI                    ; 004b2165
    MOVSD ES:EDI,ESI                    ; 004b2166
    MOV EAX,dword ptr [EAX]             ; 004b2167
    MOV dword ptr [ESP + 0x1b60],EAX    ; 004b2169
    FADD float ptr [ESP + 0x1b60]       ; 004b2170
    FST float ptr [ESP]                 ; 004b2177
    FLD1                                ; 004b217a
    FCOMPP                              ; 004b217c
    FNSTSW AX                           ; 004b217e
    SAHF                                ; 004b2180
    JC 0x004b22a1                       ; 004b2181
        ;   XREF to: 004b22a1 (CONDITIONAL_JUMP)  ; LAB_004b22a1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b2187
        ;   Label: LAB_004b2187
    ADD EAX,0x2b4                       ; 004b218a
    XOR EBX,EBX                         ; 004b218f
    MOV dword ptr [ESP + 0x1b64],EAX    ; 004b2191
    LEA EAX,[ESP + 0x4]                 ; 004b2198
        ;   Label: LAB_004b2198
    PUSH EAX                            ; 004b219c
    MOV ESI,dword ptr [ESP + 0x1b68]    ; 004b219d
    PUSH ESI                            ; 004b21a4
    CALL core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005486f0 ; 004b21a5
        ;   XREF to: 005486f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005486f0(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 004b21aa
    PUSH 0x544cc0                       ; 004b21ad
    MOV EDI,dword ptr [EBP + 0x24]      ; 004b21b2
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004b21b5
    PUSH EDI                            ; 004b21b8
    PUSH dword ptr [EAX]                ; 004b21b9
    PUSH 0x0                            ; 004b21bb
    PUSH 0x0                            ; 004b21bd
    PUSH ESI                            ; 004b21bf
    CALL core_skeleton.cpp_FUN_00545a60 ; 004b21c0
        ;   XREF to: 00545a60 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00545a60()
    ADD ESP,0x18                        ; 004b21c5
    MOV EDX,dword ptr [EBP + 0x20]      ; 004b21c8
    PUSH EDX                            ; 004b21cb
    PUSH ESI                            ; 004b21cc
    LEA ESI,[ESP + 0x1ad8]              ; 004b21cd
    LEA EDI,[ESP + 0x1aa8]              ; 004b21d4
    CALL core_skeleton.cpp_FUN_00546790 ; 004b21db
        ;   XREF to: 00546790 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546790()
    MOV ECX,0xc                         ; 004b21e0
    LEA ESI,[ESP + 0x1ad8]              ; 004b21e5
    ADD ESP,0x8                         ; 004b21ec
    LEA EAX,[ESP + 0x1aa0]              ; 004b21ef
    MOVSD.REP ES:EDI,ESI                ; 004b21f6
    PUSH EAX                            ; 004b21f8
    MOV ESI,dword ptr [EBP + 0x28]      ; 004b21f9
    PUSH ESI                            ; 004b21fc
    LEA ESI,[ESP + 0x1b20]              ; 004b21fd
    LEA EDI,[ESP + 0x1b14]              ; 004b2204
    CALL core_xform.cpp_FUN_00591530    ; 004b220b
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[ESP + 0x1b20]              ; 004b2210
    ADD ESP,0x8                         ; 004b2217
    LEA EAX,[ESP + 0x1b0c]              ; 004b221a
    MOVSD ES:EDI,ESI                    ; 004b2221
    MOVSD ES:EDI,ESI                    ; 004b2222
    MOVSD ES:EDI,ESI                    ; 004b2223
    PUSH EAX                            ; 004b2224
    MOV EDI,dword ptr [EBP + 0x14]      ; 004b2225
    PUSH EDI                            ; 004b2228
    LEA ESI,[ESP + 0x1b2c]              ; 004b2229
    CALL core_actor.cpp_FUN_00408d70    ; 004b2230
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004b2235
    LEA EAX,[ESP + 0x1b00]              ; 004b2238
    PUSH EAX                            ; 004b223f
    LEA EAX,[ESP + 0x1b4c]              ; 004b2240
    LEA EDI,[ESP + 0x1b04]              ; 004b2247
    PUSH EAX                            ; 004b224e
    MOV EAX,[0x0061b5a8]                ; 004b224f | g_CDemonSetPtr
    LEA ESI,[ESP + 0x1b2c]              ; 004b2254
    PUSH EAX                            ; 004b225b | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 004b225c
    MOVSD ES:EDI,ESI                    ; 004b225d
    MOVSD ES:EDI,ESI                    ; 004b225e
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00535e10 ; 004b225f
        ;   XREF to: 00535e10 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00535e10(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 004b2264
    TEST EAX,EAX                        ; 004b2267
    JZ 0x004b22ad                       ; 004b2269
        ;   XREF to: 004b22ad (CONDITIONAL_JUMP)  ; LAB_004b22ad
    TEST EBX,EBX                        ; 004b226b
    JZ 0x004b227b                       ; 004b226d
        ;   XREF to: 004b227b (CONDITIONAL_JUMP)  ; LAB_004b227b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004b226f
    MOV EAX,dword ptr [EAX]             ; 004b2272
    MOV dword ptr [ESP + 0x1b60],EAX    ; 004b2274
    FLD float ptr [ESP + 0x1b60]        ; 004b227b
        ;   Label: LAB_004b227b
    FADD float ptr [ESP]                ; 004b2282
    FMUL double ptr [0x005d71bb]        ; 004b2285 | DAT_005d71bb
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004b228b
    INC EBX                             ; 004b228e
    FSTP float ptr [EAX]                ; 004b228f
    CMP EBX,0x7                         ; 004b2291
    JL 0x004b2198                       ; 004b2294
        ;   XREF to: 004b2198 (CONDITIONAL_JUMP)  ; LAB_004b2198
    MOV ESP,EBP                         ; 004b229a
    POP EBP                             ; 004b229c
    POP EDI                             ; 004b229d
    POP ESI                             ; 004b229e
    POP EBX                             ; 004b229f
    RET                                 ; 004b22a0
    MOV dword ptr [ESP],0x3f800000      ; 004b22a1
        ;   Label: LAB_004b22a1
    JMP 0x004b2187                      ; 004b22a8
        ;   XREF to: 004b2187 (UNCONDITIONAL_JUMP)  ; LAB_004b2187
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004b22ad
        ;   Label: LAB_004b22ad
    MOV EAX,dword ptr [EAX]             ; 004b22b0
    MOV dword ptr [ESP],EAX             ; 004b22b2
    JMP 0x004b227b                      ; 004b22b5
        ;   XREF to: 004b227b (UNCONDITIONAL_JUMP)  ; LAB_004b227b

