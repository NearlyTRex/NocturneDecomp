; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_advanceLayerAction_FUN_004340b0(CCharacter *this_ptr,float *remaining_time,int target_bone_index)
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
;   core_doc.cpp_FUN_00474400 at 00474562
;   core_scat.cpp_CScat_updateWeaponState_FUN_00541e30 at 00541ee1
;   core_stranger.cpp_CStranger_updateWeaponLayerActions_FUN_005907a0 at 00590846
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_005d5e07
;   TerminatedCString s_CCharacter_advanceLayerA_005d5e1c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004340b0
        ;   Label: core_charactr.cpp_CCharacter_advanceLayerAction_FUN_004340b0
    PUSH ESI                            ; 004340b1
    PUSH EDI                            ; 004340b2
    PUSH EBP                            ; 004340b3
    SUB ESP,0x20                        ; 004340b4
    MOV EBX,dword ptr [ESP + 0x34]      ; 004340b7
    MOV ESI,dword ptr [ESP + 0x38]      ; 004340bb
    MOV EDX,dword ptr [EBX + 0x2c98]    ; 004340bf
    TEST EDX,EDX                        ; 004340c5
    JL 0x004340d1                       ; 004340c7
        ;   XREF to: 004340d1 (CONDITIONAL_JUMP)  ; LAB_004340d1
    CMP EDX,dword ptr [EBX + 0x27c4]    ; 004340c9
    JL 0x004340f4                       ; 004340cf
        ;   XREF to: 004340f4 (CONDITIONAL_JUMP)  ; LAB_004340f4
    MOV EDI,0x5d5e07                    ; 004340d1 | = "..\\core\\charactr.cpp"
        ;   Label: LAB_004340d1
    MOV EBP,0x1124                      ; 004340d6
    PUSH 0x5d5e1c                       ; 004340db | = "CCharacter::advanceLayerAction - inva..."
    MOV dword ptr [0x01d1d400],EDI      ; 004340e0 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 004340e6 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004340ec
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004340f1
    MOV EAX,dword ptr [EBX + 0x2c98]    ; 004340f4
        ;   Label: LAB_004340f4
    SHL EAX,0x3                         ; 004340fa
    FLD float ptr [EBX + 0x2c9c]        ; 004340fd
    MOV EDX,EAX                         ; 00434103
    SHL EAX,0x3                         ; 00434105
    LEA ECX,[EBX + 0x27c8]              ; 00434108
    SUB EAX,EDX                         ; 0043410e
    FLDZ                                ; 00434110
    ADD ECX,EAX                         ; 00434112
    FCOMPP                              ; 00434114
    FNSTSW AX                           ; 00434116
    SAHF                                ; 00434118
    JBE 0x00434125                      ; 00434119
        ;   XREF to: 00434125 (CONDITIONAL_JUMP)  ; LAB_00434125
    MOV dword ptr [EBX + 0x2c9c],0x0    ; 0043411b
    FLD float ptr [EBX + 0x2c9c]        ; 00434125
        ;   Label: LAB_00434125
    FLD1                                ; 0043412b
    FCOMPP                              ; 0043412d
    FNSTSW AX                           ; 0043412f
    SAHF                                ; 00434131
    JNC 0x0043413e                      ; 00434132
        ;   XREF to: 0043413e (CONDITIONAL_JUMP)  ; LAB_0043413e
    MOV dword ptr [EBX + 0x2c9c],0x3f800000 ; 00434134
    FLD float ptr [EBX + 0x2c9c]        ; 0043413e
        ;   Label: LAB_0043413e
    FLD ST0                             ; 00434144
    FLD1                                ; 00434146
    FSUBRP ST2,ST0                      ; 00434148
    FMUL float ptr [ECX + 0x34]         ; 0043414a
    FLD float ptr [ECX + 0x34]          ; 0043414d
    FMULP ST2                           ; 00434150
    MOV EDX,dword ptr [ECX + 0x28]      ; 00434152
    FSTP float ptr [ESP + 0x14]         ; 00434155
    FSTP float ptr [ESP + 0xc]          ; 00434159
    TEST EDX,EDX                        ; 0043415d
    JNZ 0x004341d0                      ; 0043415f
        ;   XREF to: 004341d0 (CONDITIONAL_JUMP)  ; LAB_004341d0
    MOV EDX,dword ptr [ECX + 0x4]       ; 00434161
    LEA EAX,[EDX*0x4 + 0x0]             ; 00434164
    SUB EAX,EDX                         ; 0043416b
    SHL EAX,0x2                         ; 0043416d
    SUB EAX,EDX                         ; 00434170
    SHL EAX,0x3                         ; 00434172
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00434175
    ADD EAX,EBX                         ; 00434179
    MOV EAX,dword ptr [EAX + EDI*0x4 + 0xb9f4] ; 0043417b
    MOV EDX,dword ptr [ECX]             ; 00434182
    MOV dword ptr [ESP + 0x4],EAX       ; 00434184
    LEA EAX,[EDX*0x4 + 0x0]             ; 00434188
    SUB EAX,EDX                         ; 0043418f
    SHL EAX,0x2                         ; 00434191
    SUB EAX,EDX                         ; 00434194
    SHL EAX,0x3                         ; 00434196
    ADD EAX,EBX                         ; 00434199
    MOV EAX,dword ptr [EAX + EDI*0x4 + 0xb9f4] ; 0043419b
    FLD float ptr [ESP + 0x4]           ; 004341a2
    MOV dword ptr [ESP + 0x8],EAX       ; 004341a6
    FADD float ptr [ESP + 0xc]          ; 004341aa
    FLD float ptr [ESP + 0x8]           ; 004341ae
    FADD float ptr [ESP + 0x14]         ; 004341b2
    FXCH                                ; 004341b6
    FSTP float ptr [ESP]                ; 004341b8
    FST float ptr [ESP + 0x10]          ; 004341bb
    FCOMP float ptr [ESP]               ; 004341bf
    FNSTSW AX                           ; 004341c2
    SAHF                                ; 004341c4
    JNC 0x00434247                      ; 004341c5
        ;   XREF to: 00434247 (CONDITIONAL_JUMP)  ; LAB_00434247
    MOV EDX,0xffffffff                  ; 004341cb
        ;   Label: LAB_004341cb
    MOV EAX,dword ptr [ESP + 0xc]       ; 004341d0
        ;   Label: LAB_004341d0
    MOV dword ptr [ESP + 0x18],EAX      ; 004341d4
    TEST EDX,EDX                        ; 004341d8
    JL 0x00434278                       ; 004341da
        ;   XREF to: 00434278 (CONDITIONAL_JUMP)  ; LAB_00434278
    FLD float ptr [ESI]                 ; 004341e0
        ;   Label: LAB_004341e0
    FCOMP float ptr [ESP + 0x18]        ; 004341e2
    FNSTSW AX                           ; 004341e6
    SAHF                                ; 004341e8
    JNC 0x00434285                      ; 004341e9
        ;   XREF to: 00434285 (CONDITIONAL_JUMP)  ; LAB_00434285
    MOV dword ptr [ESP + 0x1c],EDX      ; 004341ef
    FILD dword ptr [ESP + 0x1c]         ; 004341f3
    FMUL float ptr [ESI]                ; 004341f7
    FDIV float ptr [ECX + 0x34]         ; 004341f9
    FADD float ptr [EBX + 0x2c9c]       ; 004341fc
    FST float ptr [EBX + 0x2c9c]        ; 00434202
    FLDZ                                ; 00434208
    FCOMPP                              ; 0043420a
    FNSTSW AX                           ; 0043420c
    SAHF                                ; 0043420e
    JBE 0x0043421b                      ; 0043420f
        ;   XREF to: 0043421b (CONDITIONAL_JUMP)  ; LAB_0043421b
    MOV dword ptr [EBX + 0x2c9c],0x0    ; 00434211
    FLD float ptr [EBX + 0x2c9c]        ; 0043421b
        ;   Label: LAB_0043421b
    FLD1                                ; 00434221
    FCOMPP                              ; 00434223
    FNSTSW AX                           ; 00434225
    SAHF                                ; 00434227
    JNC 0x00434234                      ; 00434228
        ;   XREF to: 00434234 (CONDITIONAL_JUMP)  ; LAB_00434234
    MOV dword ptr [EBX + 0x2c9c],0x3f800000 ; 0043422a
    MOV EAX,0xffffffff                  ; 00434234
        ;   Label: LAB_00434234
    MOV dword ptr [ESI],0x0             ; 00434239
    ADD ESP,0x20                        ; 0043423f
    POP EBP                             ; 00434242
    POP EDI                             ; 00434243
    POP ESI                             ; 00434244
    POP EBX                             ; 00434245
    RET                                 ; 00434246
    FLD float ptr [ESP]                 ; 00434247
        ;   Label: LAB_00434247
    FCOMP float ptr [ESP + 0x10]        ; 0043424a
    FNSTSW AX                           ; 0043424e
    SAHF                                ; 00434250
    JNC 0x0043425d                      ; 00434251
        ;   XREF to: 0043425d (CONDITIONAL_JUMP)  ; LAB_0043425d
    MOV EDX,0x1                         ; 00434253
    JMP 0x004341d0                      ; 00434258
        ;   XREF to: 004341d0 (UNCONDITIONAL_JUMP)  ; LAB_004341d0
    FLD float ptr [ESP + 0x8]           ; 0043425d
        ;   Label: LAB_0043425d
    FCOMP float ptr [ESP + 0x4]         ; 00434261
    FNSTSW AX                           ; 00434265
    SAHF                                ; 00434267
    JC 0x004341cb                       ; 00434268
        ;   XREF to: 004341cb (CONDITIONAL_JUMP)  ; LAB_004341cb
    MOV EDX,0x1                         ; 0043426e
    JMP 0x004341d0                      ; 00434273
        ;   XREF to: 004341d0 (UNCONDITIONAL_JUMP)  ; LAB_004341d0
    MOV EAX,dword ptr [ESP + 0x14]      ; 00434278
        ;   Label: LAB_00434278
    MOV dword ptr [ESP + 0x18],EAX      ; 0043427c
    JMP 0x004341e0                      ; 00434280
        ;   XREF to: 004341e0 (UNCONDITIONAL_JUMP)  ; LAB_004341e0
    FLD float ptr [ESI]                 ; 00434285
        ;   Label: LAB_00434285
    FSUB float ptr [ESP + 0x18]         ; 00434287
    FSTP float ptr [ESI]                ; 0043428b
    TEST EDX,EDX                        ; 0043428d
    JL 0x004342a6                       ; 0043428f
        ;   XREF to: 004342a6 (CONDITIONAL_JUMP)  ; LAB_004342a6
    MOV EAX,dword ptr [ECX + 0x4]       ; 00434291
    MOV dword ptr [EBX + 0x2c9c],0x3f800000 ; 00434294
    ADD ESP,0x20                        ; 0043429e
    POP EBP                             ; 004342a1
    POP EDI                             ; 004342a2
    POP ESI                             ; 004342a3
    POP EBX                             ; 004342a4
    RET                                 ; 004342a5
    MOV EAX,dword ptr [ECX]             ; 004342a6
        ;   Label: LAB_004342a6
    MOV dword ptr [EBX + 0x2c9c],0x0    ; 004342a8
    ADD ESP,0x20                        ; 004342b2
    POP EBP                             ; 004342b5
    POP EDI                             ; 004342b6
    POP ESI                             ; 004342b7
    POP EBX                             ; 004342b8
    RET                                 ; 004342b9

