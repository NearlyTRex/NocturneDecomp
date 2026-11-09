; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00432220(int param_1,float param_2)
;
;
; XREF[1]:
;   core_charactr.cpp_FUN_0042cd70 at 0042d099
;
; Called Functions:
;   core_motion.cpp_FUN_004fc310
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432220
        ;   Label: core_charactr.cpp_FUN_00432220
    PUSH ESI                            ; 00432221
    MOV EBX,dword ptr [ESP + 0xc]       ; 00432222
    MOV EDX,dword ptr [EBX + 0x2754]    ; 00432226
    TEST EDX,EDX                        ; 0043222c
    JGE 0x00432233                      ; 0043222e
        ;   XREF to: 00432233 (CONDITIONAL_JUMP)  ; LAB_00432233
    POP ESI                             ; 00432230
        ;   Label: LAB_00432230
    POP EBX                             ; 00432231
    RET                                 ; 00432232
    LEA EAX,[EBX + 0x158]               ; 00432233
        ;   Label: LAB_00432233
    LEA ESI,[EDX*0x8 + 0x0]             ; 00432239
    PUSH EAX                            ; 00432240
    ADD ESI,EDX                         ; 00432241
    CALL core_motion.cpp_FUN_004fc310   ; 00432243
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00432248
    SHL ESI,0x5                         ; 0043224b
    FLD float ptr [ESP + 0x10]          ; 0043224e
    FMUL float ptr [ESI + EAX*0x1 + 0x1c48] ; 00432252
    FADD float ptr [EBX + 0x2758]       ; 00432259
    FSTP float ptr [EBX + 0x2758]       ; 0043225f
    FILD dword ptr [ESI + EAX*0x1 + 0x1c8c] ; 00432265
    FCOMP float ptr [EBX + 0x2758]      ; 0043226c
    FNSTSW AX                           ; 00432272
    SAHF                                ; 00432274
    JA 0x00432230                       ; 00432275
        ;   XREF to: 00432230 (CONDITIONAL_JUMP)  ; LAB_00432230
    CMP dword ptr [EBX + 0x275c],0x1    ; 00432277
    JZ 0x0043228d                       ; 0043227e
        ;   XREF to: 0043228d (CONDITIONAL_JUMP)  ; LAB_0043228d
    MOV dword ptr [EBX + 0x2754],0xffffffff ; 00432280
    POP ESI                             ; 0043228a
    POP EBX                             ; 0043228b
    RET                                 ; 0043228c
    MOV dword ptr [EBX + 0x2758],0x0    ; 0043228d
        ;   Label: LAB_0043228d
    POP ESI                             ; 00432297
    POP EBX                             ; 00432298
    RET                                 ; 00432299

