; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_colonel_cpp_CColonel_processMotionEvents_FUN_00445140(CColonel *this_ptr,float delta_time)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[1]:
;   core_colonel.cpp_CColonel_process_FUN_00444550 at 004445bf
;
; Called Functions:
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_motion.cpp_CMotionController_advance_FUN_00524270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00445140
        ;   Label: core_colonel.cpp_CColonel_processMotionEvents_FUN_00445140
    PUSH ESI                            ; 00445141
    PUSH EBP                            ; 00445142
    MOV EBP,ESP                         ; 00445143
    AND ESP,0xfffffff8                  ; 00445145
    MOV ESI,dword ptr [EBP + 0x10]      ; 00445148
    LEA EBX,[ESI + 0x158]               ; 0044514b
    LEA EAX,[EBP + 0x14]                ; 00445151
        ;   Label: LAB_00445151
    PUSH EAX                            ; 00445154
    PUSH EBX                            ; 00445155
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 00445156
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0044515b
    MOV EDX,EAX                         ; 0044515e
    CMP EAX,0x64                        ; 00445160
    JC 0x00445181                       ; 00445163
        ;   XREF to: 00445181 (CONDITIONAL_JUMP)  ; LAB_00445181
    JA 0x0044518d                       ; 00445165
        ;   XREF to: 0044518d (CONDITIONAL_JUMP)  ; LAB_0044518d
    FLD float ptr [EBP + 0x14]          ; 00445167
        ;   Label: LAB_00445167
    FLDZ                                ; 0044516a
    FCOMPP                              ; 0044516c
    FNSTSW AX                           ; 0044516e
    SAHF                                ; 00445170
    JC 0x00445151                       ; 00445171
        ;   XREF to: 00445151 (CONDITIONAL_JUMP)  ; LAB_00445151
    MOV ESP,EBP                         ; 00445173
    POP EBP                             ; 00445175
    POP ESI                             ; 00445176
    POP EBX                             ; 00445177
    LEA EAX,[EAX]                       ; 00445178
    MOV EDX,EDX                         ; 0044517e
    RET                                 ; 00445180
    PUSH EDX                            ; 00445181
        ;   Label: LAB_00445181
    PUSH ESI                            ; 00445182
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 00445183
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00445188
    JMP 0x00445167                      ; 0044518b
        ;   XREF to: 00445167 (UNCONDITIONAL_JUMP)  ; LAB_00445167
    CMP EAX,0x65                        ; 0044518d
        ;   Label: LAB_0044518d
    JZ 0x00445167                       ; 00445190
        ;   XREF to: 00445167 (CONDITIONAL_JUMP)  ; LAB_00445167
    PUSH EDX                            ; 00445192
    PUSH ESI                            ; 00445193
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 00445194
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00445199
    JMP 0x00445167                      ; 0044519c
        ;   XREF to: 00445167 (UNCONDITIONAL_JUMP)  ; LAB_00445167

