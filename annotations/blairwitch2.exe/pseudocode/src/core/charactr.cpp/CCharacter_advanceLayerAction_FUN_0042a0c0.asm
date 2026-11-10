; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042a0c0(CCharacter *this_ptr,float *remaining_time,int target_bone_index)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float *          Stack[0x8]:4   remaining_time
; int              Stack[0xc]:4   target_bone_index
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_scat.cpp_CScat_updateWeaponState_FUN_0051fd00 at 0051fdb7
;   core_stranger.cpp_CStranger_updateWeaponLayerActions_FUN_0056db50 at 0056dbf6
;   unkafter_stranger.cpp_FUN_0045bdc0 at 0045be93
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_005cd14e
;   TerminatedCString s_CCharacter_advanceLayerA_005cd163
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042a0c0
        ;   Label: core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042a0c0
    PUSH ESI                            ; 0042a0c1
    PUSH EDI                            ; 0042a0c2
    PUSH EBP                            ; 0042a0c3
    SUB ESP,0x20                        ; 0042a0c4
    MOV EBX,dword ptr [ESP + 0x34]      ; 0042a0c7
    MOV ESI,dword ptr [ESP + 0x38]      ; 0042a0cb
    MOV EDX,dword ptr [EBX + 0x2d04]    ; 0042a0cf
    TEST EDX,EDX                        ; 0042a0d5
    JL 0x0042a0e1                       ; 0042a0d7
        ;   XREF to: 0042a0e1 (CONDITIONAL_JUMP)  ; LAB_0042a0e1
    CMP EDX,dword ptr [EBX + 0x2830]    ; 0042a0d9
    JL 0x0042a104                       ; 0042a0df
        ;   XREF to: 0042a104 (CONDITIONAL_JUMP)  ; LAB_0042a104
    MOV EDI,0x5cd14e                    ; 0042a0e1 | = "..\\core\\charactr.cpp"
        ;   Label: LAB_0042a0e1
    MOV EBP,0x114a                      ; 0042a0e6
    PUSH 0x5cd163                       ; 0042a0eb | = "CCharacter::advanceLayerAction - inva..."
    MOV dword ptr [0x01d046a0],EDI      ; 0042a0f0 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 0042a0f6 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0042a0fc
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0042a101
    MOV EAX,dword ptr [EBX + 0x2d04]    ; 0042a104
        ;   Label: LAB_0042a104
    SHL EAX,0x3                         ; 0042a10a
    FLD float ptr [EBX + 0x2d08]        ; 0042a10d
    MOV EDX,EAX                         ; 0042a113
    SHL EAX,0x3                         ; 0042a115
    LEA ECX,[EBX + 0x2834]              ; 0042a118
    SUB EAX,EDX                         ; 0042a11e
    FLDZ                                ; 0042a120
    ADD ECX,EAX                         ; 0042a122
    FCOMPP                              ; 0042a124
    FNSTSW AX                           ; 0042a126
    SAHF                                ; 0042a128
    JBE 0x0042a135                      ; 0042a129
        ;   XREF to: 0042a135 (CONDITIONAL_JUMP)  ; LAB_0042a135
    MOV dword ptr [EBX + 0x2d08],0x0    ; 0042a12b
    FLD float ptr [EBX + 0x2d08]        ; 0042a135
        ;   Label: LAB_0042a135
    FLD1                                ; 0042a13b
    FCOMPP                              ; 0042a13d
    FNSTSW AX                           ; 0042a13f
    SAHF                                ; 0042a141
    JNC 0x0042a14e                      ; 0042a142
        ;   XREF to: 0042a14e (CONDITIONAL_JUMP)  ; LAB_0042a14e
    MOV dword ptr [EBX + 0x2d08],0x3f800000 ; 0042a144
    FLD float ptr [EBX + 0x2d08]        ; 0042a14e
        ;   Label: LAB_0042a14e
    FLD ST0                             ; 0042a154
    FLD1                                ; 0042a156
    FSUBRP ST2,ST0                      ; 0042a158
    FMUL float ptr [ECX + 0x34]         ; 0042a15a
    FLD float ptr [ECX + 0x34]          ; 0042a15d
    FMULP ST2                           ; 0042a160
    MOV EDX,dword ptr [ECX + 0x28]      ; 0042a162
    FSTP float ptr [ESP + 0x14]         ; 0042a165
    FSTP float ptr [ESP + 0xc]          ; 0042a169
    TEST EDX,EDX                        ; 0042a16d
    JNZ 0x0042a1e0                      ; 0042a16f
        ;   XREF to: 0042a1e0 (CONDITIONAL_JUMP)  ; LAB_0042a1e0
    MOV EDX,dword ptr [ECX + 0x4]       ; 0042a171
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042a174
    SUB EAX,EDX                         ; 0042a17b
    SHL EAX,0x2                         ; 0042a17d
    SUB EAX,EDX                         ; 0042a180
    SHL EAX,0x3                         ; 0042a182
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0042a185
    ADD EAX,EBX                         ; 0042a189
    MOV EAX,dword ptr [EAX + EDI*0x4 + 0x10230] ; 0042a18b
    MOV EDX,dword ptr [ECX]             ; 0042a192
    MOV dword ptr [ESP + 0x4],EAX       ; 0042a194
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042a198
    SUB EAX,EDX                         ; 0042a19f
    SHL EAX,0x2                         ; 0042a1a1
    SUB EAX,EDX                         ; 0042a1a4
    SHL EAX,0x3                         ; 0042a1a6
    ADD EAX,EBX                         ; 0042a1a9
    MOV EAX,dword ptr [EAX + EDI*0x4 + 0x10230] ; 0042a1ab
    FLD float ptr [ESP + 0x4]           ; 0042a1b2
    MOV dword ptr [ESP + 0x8],EAX       ; 0042a1b6
    FADD float ptr [ESP + 0xc]          ; 0042a1ba
    FLD float ptr [ESP + 0x8]           ; 0042a1be
    FADD float ptr [ESP + 0x14]         ; 0042a1c2
    FXCH                                ; 0042a1c6
    FSTP float ptr [ESP]                ; 0042a1c8
    FST float ptr [ESP + 0x10]          ; 0042a1cb
    FCOMP float ptr [ESP]               ; 0042a1cf
    FNSTSW AX                           ; 0042a1d2
    SAHF                                ; 0042a1d4
    JNC 0x0042a257                      ; 0042a1d5
        ;   XREF to: 0042a257 (CONDITIONAL_JUMP)  ; LAB_0042a257
    MOV EDX,0xffffffff                  ; 0042a1db
        ;   Label: LAB_0042a1db
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042a1e0
        ;   Label: LAB_0042a1e0
    MOV dword ptr [ESP + 0x18],EAX      ; 0042a1e4
    TEST EDX,EDX                        ; 0042a1e8
    JL 0x0042a288                       ; 0042a1ea
        ;   XREF to: 0042a288 (CONDITIONAL_JUMP)  ; LAB_0042a288
    FLD float ptr [ESI]                 ; 0042a1f0
        ;   Label: LAB_0042a1f0
    FCOMP float ptr [ESP + 0x18]        ; 0042a1f2
    FNSTSW AX                           ; 0042a1f6
    SAHF                                ; 0042a1f8
    JNC 0x0042a295                      ; 0042a1f9
        ;   XREF to: 0042a295 (CONDITIONAL_JUMP)  ; LAB_0042a295
    MOV dword ptr [ESP + 0x1c],EDX      ; 0042a1ff
    FILD dword ptr [ESP + 0x1c]         ; 0042a203
    FMUL float ptr [ESI]                ; 0042a207
    FDIV float ptr [ECX + 0x34]         ; 0042a209
    FADD float ptr [EBX + 0x2d08]       ; 0042a20c
    FST float ptr [EBX + 0x2d08]        ; 0042a212
    FLDZ                                ; 0042a218
    FCOMPP                              ; 0042a21a
    FNSTSW AX                           ; 0042a21c
    SAHF                                ; 0042a21e
    JBE 0x0042a22b                      ; 0042a21f
        ;   XREF to: 0042a22b (CONDITIONAL_JUMP)  ; LAB_0042a22b
    MOV dword ptr [EBX + 0x2d08],0x0    ; 0042a221
    FLD float ptr [EBX + 0x2d08]        ; 0042a22b
        ;   Label: LAB_0042a22b
    FLD1                                ; 0042a231
    FCOMPP                              ; 0042a233
    FNSTSW AX                           ; 0042a235
    SAHF                                ; 0042a237
    JNC 0x0042a244                      ; 0042a238
        ;   XREF to: 0042a244 (CONDITIONAL_JUMP)  ; LAB_0042a244
    MOV dword ptr [EBX + 0x2d08],0x3f800000 ; 0042a23a
    MOV EAX,0xffffffff                  ; 0042a244
        ;   Label: LAB_0042a244
    MOV dword ptr [ESI],0x0             ; 0042a249
    ADD ESP,0x20                        ; 0042a24f
    POP EBP                             ; 0042a252
    POP EDI                             ; 0042a253
    POP ESI                             ; 0042a254
    POP EBX                             ; 0042a255
    RET                                 ; 0042a256
    FLD float ptr [ESP]                 ; 0042a257
        ;   Label: LAB_0042a257
    FCOMP float ptr [ESP + 0x10]        ; 0042a25a
    FNSTSW AX                           ; 0042a25e
    SAHF                                ; 0042a260
    JNC 0x0042a26d                      ; 0042a261
        ;   XREF to: 0042a26d (CONDITIONAL_JUMP)  ; LAB_0042a26d
    MOV EDX,0x1                         ; 0042a263
    JMP 0x0042a1e0                      ; 0042a268
        ;   XREF to: 0042a1e0 (UNCONDITIONAL_JUMP)  ; LAB_0042a1e0
    FLD float ptr [ESP + 0x8]           ; 0042a26d
        ;   Label: LAB_0042a26d
    FCOMP float ptr [ESP + 0x4]         ; 0042a271
    FNSTSW AX                           ; 0042a275
    SAHF                                ; 0042a277
    JC 0x0042a1db                       ; 0042a278
        ;   XREF to: 0042a1db (CONDITIONAL_JUMP)  ; LAB_0042a1db
    MOV EDX,0x1                         ; 0042a27e
    JMP 0x0042a1e0                      ; 0042a283
        ;   XREF to: 0042a1e0 (UNCONDITIONAL_JUMP)  ; LAB_0042a1e0
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042a288
        ;   Label: LAB_0042a288
    MOV dword ptr [ESP + 0x18],EAX      ; 0042a28c
    JMP 0x0042a1f0                      ; 0042a290
        ;   XREF to: 0042a1f0 (UNCONDITIONAL_JUMP)  ; LAB_0042a1f0
    FLD float ptr [ESI]                 ; 0042a295
        ;   Label: LAB_0042a295
    FSUB float ptr [ESP + 0x18]         ; 0042a297
    FSTP float ptr [ESI]                ; 0042a29b
    TEST EDX,EDX                        ; 0042a29d
    JL 0x0042a2b6                       ; 0042a29f
        ;   XREF to: 0042a2b6 (CONDITIONAL_JUMP)  ; LAB_0042a2b6
    MOV EAX,dword ptr [ECX + 0x4]       ; 0042a2a1
    MOV dword ptr [EBX + 0x2d08],0x3f800000 ; 0042a2a4
    ADD ESP,0x20                        ; 0042a2ae
    POP EBP                             ; 0042a2b1
    POP EDI                             ; 0042a2b2
    POP ESI                             ; 0042a2b3
    POP EBX                             ; 0042a2b4
    RET                                 ; 0042a2b5
    MOV EAX,dword ptr [ECX]             ; 0042a2b6
        ;   Label: LAB_0042a2b6
    MOV dword ptr [EBX + 0x2d08],0x0    ; 0042a2b8
    ADD ESP,0x20                        ; 0042a2c2
    POP EBP                             ; 0042a2c5
    POP EDI                             ; 0042a2c6
    POP ESI                             ; 0042a2c7
    POP EBX                             ; 0042a2c8
    RET                                 ; 0042a2c9

