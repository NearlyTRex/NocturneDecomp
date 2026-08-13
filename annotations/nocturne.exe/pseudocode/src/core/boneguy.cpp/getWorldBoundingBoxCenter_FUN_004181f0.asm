; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_boneguy_cpp_getWorldBoundingBoxCenter_FUN_004181f0(CVector3f *out,CDemonActor *actor)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   out
; CDemonActor *    Stack[0x8]:4   actor
;
; Referenced Globals:
;   undefined4 DAT_0057913e
;   undefined4 DAT_00579146
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CVector_ctor_FUN_0040e160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004181f0
        ;   Label: core_boneguy.cpp_getWorldBoundingBoxCenter_FUN_004181f0
    PUSH ESI                            ; 004181f1
    PUSH EBP                            ; 004181f2
    MOV EBP,ESP                         ; 004181f3
    SUB ESP,0x30                        ; 004181f5
    AND ESP,0xfffffff8                  ; 004181f8
    MOV EBX,dword ptr [EBP + 0x10]      ; 004181fb
    MOV ESI,dword ptr [EBP + 0x14]      ; 004181fe
    MOV EAX,ESP                         ; 00418201
    PUSH EAX                            ; 00418203
    MOV EDX,dword ptr [ESI + 0x14c]     ; 00418204
    PUSH ESI                            ; 0041820a
    CALL dword ptr [EDX + 0x14]         ; 0041820b
    ADD ESP,0x8                         ; 0041820e
    LEA EAX,[ESP + 0x24]                ; 00418211
    PUSH EAX                            ; 00418215
    CALL core_actor.cpp_CVector_ctor_FUN_0040e160 ; 00418216
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector_ctor_FUN_0040e160(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 0041821b
    LEA EAX,[ESP + 0x18]                ; 0041821e
    FLD float ptr [ESP]                 ; 00418222
    FLD float ptr [ESP + 0x4]           ; 00418225
    FLD float ptr [ESP + 0x8]           ; 00418229
    PUSH EAX                            ; 0041822d
    FXCH ST2                            ; 0041822e
    FADD float ptr [ESP + 0x10]         ; 00418230
    FXCH                                ; 00418234
    FADD float ptr [ESP + 0x14]         ; 00418236
    FXCH ST2                            ; 0041823a
    FADD float ptr [ESP + 0x18]         ; 0041823c
    FXCH                                ; 00418240
    FSTP float ptr [ESP + 0x28]         ; 00418242
    FXCH                                ; 00418246
    FSTP float ptr [ESP + 0x2c]         ; 00418248
    FSTP float ptr [ESP + 0x30]         ; 0041824c
    CALL core_actor.cpp_CVector_ctor_FUN_0040e160 ; 00418250
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector_ctor_FUN_0040e160(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 00418255
    FLD float ptr [0x0057913e]          ; 00418258 | DAT_0057913e
    FLD float ptr [ESP + 0x24]          ; 0041825e
    FMUL ST1                            ; 00418262
    LEA EAX,[ESP + 0x18]                ; 00418264
    FLD float ptr [ESP + 0x28]          ; 00418268
    FMULP ST2                           ; 0041826c
    PUSH EAX                            ; 0041826e
    FLD float ptr [ESP + 0xc]           ; 0041826f
    PUSH EBX                            ; 00418273
    FADD double ptr [0x00579146]        ; 00418274 | DAT_00579146
    FXCH                                ; 0041827a
    FSTP float ptr [ESP + 0x20]         ; 0041827c
    FXCH                                ; 00418280
    FSTP float ptr [ESP + 0x24]         ; 00418282
    PUSH ESI                            ; 00418286
    FSTP float ptr [ESP + 0x2c]         ; 00418287
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0041828b
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00418290
    MOV EAX,EBX                         ; 00418293
    MOV ESP,EBP                         ; 00418295
    POP EBP                             ; 00418297
    POP ESI                             ; 00418298
    POP EBX                             ; 00418299
    RET                                 ; 0041829a

