; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_FUN_0041f190(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x1c]:1  local_1c
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_0041ef90 at 0041f098
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_box.cpp_CBoundingBox3D_clampPoint_FUN_0041e160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041f190
        ;   Label: core_boxactor.cpp_CBoxActor_FUN_0041f190
    SUB ESP,0x3c                        ; 0041f191
    MOV EBX,dword ptr [ESP + 0x44]      ; 0041f194
    MOV EDX,dword ptr [EBX + 0x31c]     ; 0041f198
    TEST EDX,EDX                        ; 0041f19e
    JNZ 0x0041f1a7                      ; 0041f1a0
        ;   XREF to: 0041f1a7 (CONDITIONAL_JUMP)  ; LAB_0041f1a7
    ADD ESP,0x3c                        ; 0041f1a2
    POP EBX                             ; 0041f1a5
    RET                                 ; 0041f1a6
    LEA EAX,[EBX + 0x20]                ; 0041f1a7
        ;   Label: LAB_0041f1a7
    PUSH EAX                            ; 0041f1aa
    LEA EAX,[ESP + 0x28]                ; 0041f1ab
    PUSH EAX                            ; 0041f1af
    PUSH EDX                            ; 0041f1b0
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0041f1b1
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 0041f1b6
    LEA EAX,[ESP + 0x24]                ; 0041f1b9
    PUSH EAX                            ; 0041f1bd
    LEA EAX,[ESP + 0x34]                ; 0041f1be
    PUSH EAX                            ; 0041f1c2
    LEA EDX,[ESP + 0x8]                 ; 0041f1c3
    PUSH EDX                            ; 0041f1c7
    MOV EAX,dword ptr [EBX + 0x31c]     ; 0041f1c8
    PUSH EAX                            ; 0041f1ce
    MOV ECX,dword ptr [EAX + 0x14c]     ; 0041f1cf
    CALL dword ptr [ECX + 0x14]         ; 0041f1d5
    ADD ESP,0x8                         ; 0041f1d8
    PUSH EAX                            ; 0041f1db
    CALL core_box.cpp_CBoundingBox3D_clampPoint_FUN_0041e160 ; 0041f1dc
        ;   XREF to: 0041e160 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_clampPoint_FUN_0041e160(CBoundingBox3D * this_ptr, CVector3f * out_point, CVector3f * in_point)
    MOV EDX,EAX                         ; 0041f1e1
    LEA EAX,[ESP + 0x30]                ; 0041f1e3
    ADD ESP,0xc                         ; 0041f1e7
    CMP EAX,EDX                         ; 0041f1ea
    JZ 0x0041f202                       ; 0041f1ec
        ;   XREF to: 0041f202 (CONDITIONAL_JUMP)  ; LAB_0041f202
    MOV EAX,dword ptr [EDX]             ; 0041f1ee
    MOV dword ptr [ESP + 0x24],EAX      ; 0041f1f0
    MOV EAX,dword ptr [EDX + 0x4]       ; 0041f1f4
    MOV dword ptr [ESP + 0x28],EAX      ; 0041f1f7
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041f1fb
    MOV dword ptr [ESP + 0x2c],EAX      ; 0041f1fe
    PUSH ESI                            ; 0041f202
        ;   Label: LAB_0041f202
    LEA EAX,[ESP + 0x28]                ; 0041f203
    PUSH EAX                            ; 0041f207
    LEA EAX,[ESP + 0x20]                ; 0041f208
    PUSH EAX                            ; 0041f20c
    MOV ESI,dword ptr [EBX + 0x31c]     ; 0041f20d
    PUSH ESI                            ; 0041f213
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0041f214
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    FLD float ptr [EAX]                 ; 0041f219
    ADD ESP,0xc                         ; 0041f21b
    FSTP float ptr [EBX + 0x20]         ; 0041f21e
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041f221
    MOV dword ptr [EBX + 0x24],EDX      ; 0041f224
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041f227
    MOV dword ptr [EBX + 0x28],EDX      ; 0041f22a
    POP ESI                             ; 0041f22d
    ADD ESP,0x3c                        ; 0041f22e
    POP EBX                             ; 0041f231
    RET                                 ; 0041f232

