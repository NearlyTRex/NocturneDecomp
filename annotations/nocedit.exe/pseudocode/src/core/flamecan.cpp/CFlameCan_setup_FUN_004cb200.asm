; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flamecan_cpp_CFlameCan_setup_FUN_004cb200(CFlameCan *this_ptr)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
; Local Variables:
; CBoundingBox3D   Stack[-0x38]:24  local_38
; float[6]         Stack[-0x20]:24  afStack_20
;
; Referenced Globals:
;   double DOUBLE_0062a2e0 = 2
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb200
        ;   Label: core_flamecan.cpp_CFlameCan_setup_FUN_004cb200
    PUSH EBP                            ; 004cb201
    MOV EBP,ESP                         ; 004cb202
    SUB ESP,0x40                        ; 004cb204
    AND ESP,0xfffffff8                  ; 004cb207
    MOV EBX,dword ptr [EBP + 0xc]       ; 004cb20a
    PUSH EBX                            ; 004cb20d
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 004cb20e
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cb213
    LEA EAX,[EBX + 0x158]               ; 004cb216
    PUSH EAX                            ; 004cb21c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004cb21d
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004cb222
    LEA EAX,[ESP + 0x10]                ; 004cb225
    PUSH EAX                            ; 004cb229
    MOV EDX,dword ptr [EBX + 0x154]     ; 004cb22a
    PUSH EBX                            ; 004cb230
    MOV dword ptr [EBX + 0x4f4],0x0     ; 004cb231
    CALL dword ptr [EDX + 0x14]         ; 004cb23b
    LEA EDX,[EBX + 0x360]               ; 004cb23e
    LEA EAX,[EBX + 0x20]                ; 004cb244
    MOV ECX,dword ptr [EAX]             ; 004cb247
    MOV dword ptr [EDX],ECX             ; 004cb249
    MOV ECX,dword ptr [EAX + 0x4]       ; 004cb24b
    MOV dword ptr [EDX + 0x4],ECX       ; 004cb24e
    MOV ECX,dword ptr [EAX + 0x8]       ; 004cb251
    MOV dword ptr [EDX + 0x8],ECX       ; 004cb254
    MOV EAX,dword ptr [EAX + 0xc]       ; 004cb257
    ADD ESP,0x8                         ; 004cb25a
    MOV dword ptr [EDX + 0xc],EAX       ; 004cb25d
    FLD float ptr [ESP + 0x20]          ; 004cb260
    FSUB float ptr [ESP + 0x14]         ; 004cb264
    FADD float ptr [EBX + 0x364]        ; 004cb268
    FSTP float ptr [EBX + 0x364]        ; 004cb26e
    FLD float ptr [ESP + 0x1c]          ; 004cb274
    FLD float ptr [ESP + 0x20]          ; 004cb278
    FLD float ptr [ESP + 0x24]          ; 004cb27c
    FXCH ST2                            ; 004cb280
    FSUB float ptr [ESP + 0x10]         ; 004cb282
    FXCH                                ; 004cb286
    FSUB float ptr [ESP + 0x14]         ; 004cb288
    FXCH ST2                            ; 004cb28c
    FSUB float ptr [ESP + 0x18]         ; 004cb28e
    FXCH                                ; 004cb292
    FSTP float ptr [ESP + 0x34]         ; 004cb294
    MOV EAX,dword ptr [ESP + 0x34]      ; 004cb298
    FXCH                                ; 004cb29c
    FSTP float ptr [ESP + 0x38]         ; 004cb29e
    MOV dword ptr [ESP + 0x28],EAX      ; 004cb2a2
    MOV EAX,dword ptr [ESP + 0x38]      ; 004cb2a6
    FSTP float ptr [ESP + 0x3c]         ; 004cb2aa
    MOV dword ptr [ESP + 0x2c],EAX      ; 004cb2ae
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004cb2b2
    LEA EDX,[EBX + 0x498]               ; 004cb2b6
    MOV dword ptr [ESP + 0x30],EAX      ; 004cb2bc
    LEA EAX,[ESP + 0x28]                ; 004cb2c0
    CMP EDX,EAX                         ; 004cb2c4
    JNZ 0x004cb31c                      ; 004cb2c6
        ;   XREF to: 004cb31c (CONDITIONAL_JUMP)  ; LAB_004cb31c
    FLD float ptr [EBX + 0x498]         ; 004cb2c8
        ;   Label: LAB_004cb2c8
    FSTP double ptr [ESP + 0x8]         ; 004cb2ce
    MOV dword ptr [EBX + 0x4e8],0x0     ; 004cb2d2
    FLD double ptr [ESP + 0x8]          ; 004cb2dc
    FMUL double ptr [0x0062a2e0]        ; 004cb2e0 | DOUBLE_0062a2e0
    FLD float ptr [EBX + 0x49c]         ; 004cb2e6
    MOV dword ptr [EBX + 0x4ec],0x0     ; 004cb2ec
    FXCH                                ; 004cb2f6
    FSTP double ptr [ESP]               ; 004cb2f8
    FCOMP double ptr [ESP]              ; 004cb2fb
    FNSTSW AX                           ; 004cb2fe
    SAHF                                ; 004cb300
    JC 0x004cb332                       ; 004cb301
        ;   XREF to: 004cb332 (CONDITIONAL_JUMP)  ; LAB_004cb332
    MOV dword ptr [EBX + 0x5e4],0x0     ; 004cb303
        ;   Label: LAB_004cb303
    MOV dword ptr [EBX + 0xfc],0x1      ; 004cb30d
    MOV ESP,EBP                         ; 004cb317
    POP EBP                             ; 004cb319
    POP EBX                             ; 004cb31a
    RET                                 ; 004cb31b
    MOV EAX,dword ptr [ESP + 0x34]      ; 004cb31c
        ;   Label: LAB_004cb31c
    MOV dword ptr [EDX],EAX             ; 004cb320
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004cb322
    MOV dword ptr [EDX + 0x4],EAX       ; 004cb326
    MOV EAX,dword ptr [ESP + 0x30]      ; 004cb329
    MOV dword ptr [EDX + 0x8],EAX       ; 004cb32d
    JMP 0x004cb2c8                      ; 004cb330
        ;   XREF to: 004cb2c8 (UNCONDITIONAL_JUMP)  ; LAB_004cb2c8
    FLD double ptr [ESP]                ; 004cb332
        ;   Label: LAB_004cb332
    FSTP float ptr [EBX + 0x49c]        ; 004cb335
    JMP 0x004cb303                      ; 004cb33b
        ;   XREF to: 004cb303 (UNCONDITIONAL_JUMP)  ; LAB_004cb303

