; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_emitter_cpp_CEmitter_getRandomBoundingBoxPoint_FUN_004a8d20(CEmitter *this_ptr,CVector3f *out_point)
;
; Parameters:
; CEmitter *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_point
;
; XREF[1]:
;   core_emitter.cpp_CEmitter_process_FUN_004a8070 at 004a8482
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8d20
        ;   Label: core_emitter.cpp_CEmitter_getRandomBoundingBoxPoint_FUN_004a8d20
    PUSH ESI                            ; 004a8d21
    SUB ESP,0x28                        ; 004a8d22
    MOV ESI,dword ptr [ESP + 0x34]      ; 004a8d25
    MOV EBX,dword ptr [ESP + 0x38]      ; 004a8d29
    MOV EAX,ESP                         ; 004a8d2d
    PUSH EAX                            ; 004a8d2f
    MOV EDX,dword ptr [ESI + 0x154]     ; 004a8d30
    PUSH ESI                            ; 004a8d36
    CALL dword ptr [EDX + 0x14]         ; 004a8d37
    ADD ESP,0x8                         ; 004a8d3a
    PUSH dword ptr [ESP + 0xc]          ; 004a8d3d
    PUSH dword ptr [ESP + 0x4]          ; 004a8d41
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004a8d45
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x2c],EAX      ; 004a8d4a
    FLD float ptr [ESP + 0x2c]          ; 004a8d4e
    ADD ESP,0x8                         ; 004a8d52
    PUSH dword ptr [ESP + 0x10]         ; 004a8d55
    PUSH dword ptr [ESP + 0x8]          ; 004a8d59
    FSTP float ptr [ESP + 0x20]         ; 004a8d5d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004a8d61
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x2c],EAX      ; 004a8d66
    FLD float ptr [ESP + 0x2c]          ; 004a8d6a
    ADD ESP,0x8                         ; 004a8d6e
    PUSH dword ptr [ESP + 0x14]         ; 004a8d71
    PUSH dword ptr [ESP + 0xc]          ; 004a8d75
    FSTP float ptr [ESP + 0x24]         ; 004a8d79
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004a8d7d
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x2c],EAX      ; 004a8d82
    FLD float ptr [ESP + 0x2c]          ; 004a8d86
    ADD ESP,0x8                         ; 004a8d8a
    LEA EAX,[ESP + 0x18]                ; 004a8d8d
    PUSH EAX                            ; 004a8d91
    PUSH EBX                            ; 004a8d92
    PUSH ESI                            ; 004a8d93
    FSTP float ptr [ESP + 0x2c]         ; 004a8d94
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004a8d98
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004a8d9d
    MOV EAX,EBX                         ; 004a8da0
    ADD ESP,0x28                        ; 004a8da2
    POP ESI                             ; 004a8da5
    POP EBX                             ; 004a8da6
    RET                                 ; 004a8da7

