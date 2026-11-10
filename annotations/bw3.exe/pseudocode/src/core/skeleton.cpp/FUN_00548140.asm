; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_00548140(CSkeleton *param_1,int param_2,int param_3,int param_4,float param_5)
;
; Local Variables:
; undefined8       Stack[-0x38]:8  local_38
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x20]:1  local_20
;
; XREF[3]:
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90 at 0054cd90
;   core_skeleton.cpp_FUN_0054c1b0 at 0054c2d0
;   core_skeleton.cpp_FUN_0054edb0 at 0054ee1c
;
; Called Functions:
;   core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120
;   core_xform.cpp_slerpQuaternion_FUN_00585b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548140
        ;   Label: core_skeleton.cpp_FUN_00548140
    PUSH EDI                            ; 00548141
    PUSH EBP                            ; 00548142
    MOV EBP,ESP                         ; 00548143
    SUB ESP,0x28                        ; 00548145
    AND ESP,0xfffffff8                  ; 00548148
    MOV EDI,dword ptr [EBP + 0x14]      ; 0054814b
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0054814e
    MOV EBX,ESI                         ; 00548151
    MOV ESI,dword ptr [EBP + 0x10]      ; 00548153
    FLD float ptr [EBP + 0x20]          ; 00548156
    FLDZ                                ; 00548159
    FXCH                                ; 0054815b
    FSTP double ptr [ESP]               ; 0054815d
    FCOMP double ptr [ESP]              ; 00548160
    FNSTSW AX                           ; 00548163
    SAHF                                ; 00548165
    JNC 0x00548199                      ; 00548166
        ;   XREF to: 00548199 (CONDITIONAL_JUMP)  ; LAB_00548199
    FLD1                                ; 00548168
    FCOMP double ptr [ESP]              ; 0054816a
    FNSTSW AX                           ; 0054816d
    SAHF                                ; 0054816f
    JA 0x0054819f                       ; 00548170
        ;   XREF to: 0054819f (CONDITIONAL_JUMP)  ; LAB_0054819f
    PUSH EDX                            ; 00548172
    PUSH EDI                            ; 00548173
        ;   Label: LAB_00548173
    PUSH ESI                            ; 00548174
    LEA EDI,[ESP + 0x14]                ; 00548175
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120 ; 00548179
        ;   XREF to: 00548120 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120(CSkeleton * this_ptr, int bone_index, int frame_index)
    MOV ESI,EAX                         ; 0054817e
    ADD ESP,0xc                         ; 00548180
        ;   Label: LAB_00548180
    MOVSD ES:EDI,ESI                    ; 00548183
    MOVSD ES:EDI,ESI                    ; 00548184
    MOVSD ES:EDI,ESI                    ; 00548185
    MOVSD ES:EDI,ESI                    ; 00548186
    LEA ESI,[ESP + 0x8]                 ; 00548187
    MOV EDI,EBX                         ; 0054818b
    MOVSD ES:EDI,ESI                    ; 0054818d
    MOVSD ES:EDI,ESI                    ; 0054818e
    MOVSD ES:EDI,ESI                    ; 0054818f
    MOVSD ES:EDI,ESI                    ; 00548190
    MOV EAX,EBX                         ; 00548191
    MOV ESP,EBP                         ; 00548193
    POP EBP                             ; 00548195
    POP EDI                             ; 00548196
    POP EBX                             ; 00548197
    RET                                 ; 00548198
    MOV ECX,dword ptr [EBP + 0x18]      ; 00548199
        ;   Label: LAB_00548199
    PUSH ECX                            ; 0054819c
    JMP 0x00548173                      ; 0054819d
        ;   XREF to: 00548173 (UNCONDITIONAL_JUMP)  ; LAB_00548173
    PUSH dword ptr [EBP + 0x20]         ; 0054819f
        ;   Label: LAB_0054819f
    PUSH EDX                            ; 005481a2
    PUSH EDI                            ; 005481a3
    PUSH ESI                            ; 005481a4
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120 ; 005481a5
        ;   XREF to: 00548120 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120(CSkeleton * this_ptr, int bone_index, int frame_index)
    ADD ESP,0xc                         ; 005481aa
    PUSH EAX                            ; 005481ad
    MOV EDX,dword ptr [EBP + 0x18]      ; 005481ae
    PUSH EDX                            ; 005481b1
    PUSH EDI                            ; 005481b2
    PUSH ESI                            ; 005481b3
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120 ; 005481b4
        ;   XREF to: 00548120 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120(CSkeleton * this_ptr, int bone_index, int frame_index)
    ADD ESP,0xc                         ; 005481b9
    PUSH EAX                            ; 005481bc
    LEA ESI,[ESP + 0x24]                ; 005481bd
    LEA EDI,[ESP + 0x14]                ; 005481c1
    CALL core_xform.cpp_slerpQuaternion_FUN_00585b20 ; 005481c5
        ;   XREF to: 00585b20 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00585b20()
    LEA ESI,[ESP + 0x24]                ; 005481ca
    JMP 0x00548180                      ; 005481ce
        ;   XREF to: 00548180 (UNCONDITIONAL_JUMP)  ; LAB_00548180

