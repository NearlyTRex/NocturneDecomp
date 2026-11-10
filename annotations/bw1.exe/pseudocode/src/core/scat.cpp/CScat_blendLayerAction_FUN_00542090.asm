; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_CScat_blendLayerAction_FUN_00542090(CScat *this_ptr)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_scat.cpp_CScat_process_FUN_00540df0 at 005411dc
;
; Referenced Globals:
;   undefined4 DAT_005edebf
;   undefined4 DAT_01e7e054
;
; Called Functions:
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0
;   core_motion.cpp_FUN_00524a40
;   core_motion.cpp_FUN_00525110
;   core_scat.cpp_CScat_blendAimBones_FUN_00542270
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_FUN_00568100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00542090
        ;   Label: core_scat.cpp_CScat_blendLayerAction_FUN_00542090
    PUSH ESI                            ; 00542091
    PUSH EDI                            ; 00542092
    PUSH EBP                            ; 00542093
    MOV EBP,ESP                         ; 00542094
    SUB ESP,0x20                        ; 00542096
    AND ESP,0xfffffff8                  ; 00542099
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054209c
    MOV EAX,dword ptr [EBX + 0x2c98]    ; 0054209f
    SHL EAX,0x3                         ; 005420a5
    MOV ESI,EAX                         ; 005420a8
    SHL EAX,0x3                         ; 005420aa
    SUB EAX,ESI                         ; 005420ad
    MOV EDX,0x3f800000                  ; 005420af
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x27c8] ; 005420b4
    MOV dword ptr [ESP + 0x8],EDX       ; 005420bb
    TEST ECX,ECX                        ; 005420bf
    JZ 0x00542245                       ; 005420c1
        ;   XREF to: 00542245 (CONDITIONAL_JUMP)  ; LAB_00542245
    MOV EAX,dword ptr [EBX + 0x2c98]    ; 005420c7
        ;   Label: LAB_005420c7
    SHL EAX,0x3                         ; 005420cd
    MOV ESI,EAX                         ; 005420d0
    SHL EAX,0x3                         ; 005420d2
    SUB EAX,ESI                         ; 005420d5
    CMP dword ptr [EBX + EAX*0x1 + 0x27cc],0x0 ; 005420d7
    JNZ 0x005420f3                      ; 005420df
        ;   XREF to: 005420f3 (CONDITIONAL_JUMP)  ; LAB_005420f3
    FLD float ptr [EBX + 0x2c9c]        ; 005420e1
    FLD1                                ; 005420e7
    FSUBRP                              ; 005420e9
    FMUL float ptr [ESP + 0x8]          ; 005420eb
    FSTP float ptr [ESP + 0x8]          ; 005420ef
    PUSH 0x4                            ; 005420f3
        ;   Label: LAB_005420f3
    LEA ESI,[EBX + 0x158]               ; 005420f5
    PUSH ESI                            ; 005420fb
    CALL core_motion.cpp_FUN_00524a40   ; 005420fc
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x20],EAX      ; 00542101
    ADD ESP,0x8                         ; 00542105
    PUSH 0x5                            ; 00542108
    PUSH ESI                            ; 0054210a
    CALL core_motion.cpp_FUN_00524a40   ; 0054210b
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x24],EAX      ; 00542110
    FLD float ptr [ESP + 0x24]          ; 00542114
    ADD ESP,0x8                         ; 00542118
    PUSH 0xc                            ; 0054211b
    FADD float ptr [ESP + 0x1c]         ; 0054211d
    PUSH ESI                            ; 00542121
    FSTP float ptr [ESP + 0x20]         ; 00542122
    CALL core_motion.cpp_FUN_00524a40   ; 00542126
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x24],EAX      ; 0054212b
    FLD float ptr [ESP + 0x24]          ; 0054212f
    ADD ESP,0x8                         ; 00542133
    PUSH 0xd                            ; 00542136
    FADD float ptr [ESP + 0x1c]         ; 00542138
    PUSH ESI                            ; 0054213c
    FSTP float ptr [ESP + 0x20]         ; 0054213d
    CALL core_motion.cpp_FUN_00524a40   ; 00542141
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x24],EAX      ; 00542146
    FLD float ptr [ESP + 0x24]          ; 0054214a
    ADD ESP,0x8                         ; 0054214e
    PUSH 0xe                            ; 00542151
    FADD float ptr [ESP + 0x1c]         ; 00542153
    PUSH ESI                            ; 00542157
    FSTP float ptr [ESP + 0x20]         ; 00542158
    CALL core_motion.cpp_FUN_00524a40   ; 0054215c
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x24],EAX      ; 00542161
    FLD float ptr [ESP + 0x24]          ; 00542165
    ADD ESP,0x8                         ; 00542169
    FADD float ptr [ESP + 0x18]         ; 0054216c
    FLD1                                ; 00542170
    FSUBRP                              ; 00542172
    FLD float ptr [ESP + 0x8]           ; 00542174
    FXCH                                ; 00542178
    FMUL ST1                            ; 0054217a
    FLDZ                                ; 0054217c
    FXCH                                ; 0054217e
    FSTP ST2                            ; 00542180
    FXCH                                ; 00542182
    FSTP float ptr [ESP + 0x8]          ; 00542184
    FCOMP float ptr [ESP + 0x8]         ; 00542188
    FNSTSW AX                           ; 0054218c
    SAHF                                ; 0054218e
    JBE 0x00542197                      ; 0054218f
        ;   XREF to: 00542197 (CONDITIONAL_JUMP)  ; LAB_00542197
    XOR EDI,EDI                         ; 00542191
    MOV dword ptr [ESP + 0x8],EDI       ; 00542193
    FLD float ptr [ESP + 0x8]           ; 00542197
        ;   Label: LAB_00542197
    FST double ptr [ESP]                ; 0054219b
    FCOMP double ptr [0x005edebf]       ; 0054219e | DAT_005edebf
    FNSTSW AX                           ; 005421a4
    SAHF                                ; 005421a6
    JBE 0x0054223e                      ; 005421a7
        ;   XREF to: 0054223e (CONDITIONAL_JUMP)  ; LAB_0054223e
    FLD1                                ; 005421ad
    FCOMP double ptr [ESP]              ; 005421af
    FNSTSW AX                           ; 005421b2
    SAHF                                ; 005421b4
    JNC 0x005421bf                      ; 005421b5
        ;   XREF to: 005421bf (CONDITIONAL_JUMP)  ; LAB_005421bf
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 005421b7
    MOV EAX,dword ptr [EBX + 0x2c98]    ; 005421bf
        ;   Label: LAB_005421bf
    SHL EAX,0x3                         ; 005421c5
    MOV ESI,EAX                         ; 005421c8
    SHL EAX,0x3                         ; 005421ca
    SUB EAX,ESI                         ; 005421cd
    MOV ESI,EAX                         ; 005421cf
    LEA EAX,[EBX + 0x27c8]              ; 005421d1
    ADD EAX,ESI                         ; 005421d7
    PUSH 0x1                            ; 005421d9
    ADD EAX,0x8                         ; 005421db
    PUSH EAX                            ; 005421de
    LEA ESI,[EBX + 0x158]               ; 005421df
    PUSH ESI                            ; 005421e5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 005421e6
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005421eb
    PUSH EAX                            ; 005421ee
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0 ; 005421ef
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 005421f4
    PUSH dword ptr [EBX + 0x2c9c]       ; 005421f7
    PUSH EAX                            ; 005421fd
    PUSH ESI                            ; 005421fe
    MOV EDI,EAX                         ; 005421ff
    CALL core_motion.cpp_FUN_00525110   ; 00542201
        ;   XREF to: 00525110 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00525110()
    MOV dword ptr [ESP + 0x28],EAX      ; 00542206
    FLD float ptr [ESP + 0x28]          ; 0054220a
    ADD ESP,0xc                         ; 0054220e
    PUSH 0x567360                       ; 00542211
    MOV EDX,dword ptr [0x01e7e054]      ; 00542216 | DAT_01e7e054
    PUSH EDX                            ; 0054221c
    PUSH dword ptr [ESP + 0x10]         ; 0054221d
    FSTP float ptr [ESP + 0x20]         ; 00542221
    PUSH dword ptr [ESP + 0x20]         ; 00542225
    PUSH EDI                            ; 00542229
    PUSH ESI                            ; 0054222a
    CALL core_skeleton.cpp_FUN_00568100 ; 0054222b
        ;   XREF to: 00568100 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00568100()
    MOV ECX,dword ptr [EBX + 0x2c98]    ; 00542230
    ADD ESP,0x18                        ; 00542236
    CMP ECX,0x1                         ; 00542239
    JZ 0x00542254                       ; 0054223c
        ;   XREF to: 00542254 (CONDITIONAL_JUMP)  ; LAB_00542254
    MOV ESP,EBP                         ; 0054223e
        ;   Label: LAB_0054223e
    POP EBP                             ; 00542240
    POP EDI                             ; 00542241
    POP ESI                             ; 00542242
    POP EBX                             ; 00542243
    RET                                 ; 00542244
    MOV EAX,dword ptr [EBX + 0x2c9c]    ; 00542245
        ;   Label: LAB_00542245
    MOV dword ptr [ESP + 0x8],EAX       ; 0054224b
    JMP 0x005420c7                      ; 0054224f
        ;   XREF to: 005420c7 (UNCONDITIONAL_JUMP)  ; LAB_005420c7
    PUSH ECX                            ; 00542254
        ;   Label: LAB_00542254
    PUSH EBX                            ; 00542255
    CALL core_scat.cpp_CScat_blendAimBones_FUN_00542270 ; 00542256
        ;   XREF to: 00542270 (UNCONDITIONAL_CALL)  ; void core_scat.cpp_CScat_blendAimBones_FUN_00542270(CScat * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 0054225b
    MOV ESP,EBP                         ; 0054225e
    POP EBP                             ; 00542260
    POP EDI                             ; 00542261
    POP ESI                             ; 00542262
    POP EBX                             ; 00542263
    RET                                 ; 00542264

