; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_castVoxelShadow_FUN_0053ee00(CDemonSet *this_ptr,CDemonActor *actor)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; Local Variables:
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x3c]:1  local_3c
;
; XREF[3]:
;   core_barrier.cpp_CBarrier_updateCollisionData_FUN_0040ec70 at 0040ec86
;   core_door.cpp_FUN_004642f0 at 004645f6
;   core_door.cpp_FUN_00465330 at 0046535f
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_FUN_00477e60
;   core_path.cpp_resetAllPathMaps_FUN_0050cf60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ee00
        ;   Label: core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_0053ee00
    PUSH ESI                            ; 0053ee01
    PUSH EDI                            ; 0053ee02
    SUB ESP,0x48                        ; 0053ee03
    MOV EBX,dword ptr [ESP + 0x5c]      ; 0053ee06
    PUSH EBX                            ; 0053ee0a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0053ee0b
    LEA ESI,[ESP + 0x1c]                ; 0053ee11
    LEA EDI,[ESP + 0x4]                 ; 0053ee15
    CALL dword ptr [EAX + 0x1c]         ; 0053ee19
    MOV ECX,0x6                         ; 0053ee1c
    LEA ESI,[ESP + 0x1c]                ; 0053ee21
    ADD ESP,0x4                         ; 0053ee25
    MOVSD.REP ES:EDI,ESI                ; 0053ee28
    LEA EDX,[ESP + 0x30]                ; 0053ee2a
    MOV ESI,ESP                         ; 0053ee2e
    CMP EDX,ESI                         ; 0053ee30
    JNZ 0x0053ee7e                      ; 0053ee32
        ;   XREF to: 0053ee7e (CONDITIONAL_JUMP)  ; LAB_0053ee7e
    LEA EAX,[ESP + 0x3c]                ; 0053ee34
        ;   Label: LAB_0053ee34
    LEA EDX,[ESI + 0xc]                 ; 0053ee38
    CMP EAX,EDX                         ; 0053ee3b
    JZ 0x0053ee53                       ; 0053ee3d
        ;   XREF to: 0053ee53 (CONDITIONAL_JUMP)  ; LAB_0053ee53
    MOV EAX,dword ptr [EDX]             ; 0053ee3f
    MOV dword ptr [ESP + 0x3c],EAX      ; 0053ee41
    MOV EAX,dword ptr [EDX + 0x4]       ; 0053ee45
    MOV dword ptr [ESP + 0x40],EAX      ; 0053ee48
    MOV EAX,dword ptr [EDX + 0x8]       ; 0053ee4c
    MOV dword ptr [ESP + 0x44],EAX      ; 0053ee4f
    LEA EAX,[ESP + 0x3c]                ; 0053ee53
        ;   Label: LAB_0053ee53
    PUSH EAX                            ; 0053ee57
    LEA EAX,[ESP + 0x34]                ; 0053ee58
    PUSH EAX                            ; 0053ee5c
    LEA EAX,[EBX + 0x30]                ; 0053ee5d
    PUSH EAX                            ; 0053ee60
    ADD EBX,0x20                        ; 0053ee61
    PUSH EBX                            ; 0053ee64
    PUSH 0x203b37c                      ; 0053ee65 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_FUN_00477e60   ; 0053ee6a
        ;   XREF to: 00477e60 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_FUN_00477e60(CDemonRaytrace * this_ptr, CVector3f * offset, CVector3f * rotation, CVector3f * extent, ...)
    ADD ESP,0x14                        ; 0053ee6f
    CALL core_path.cpp_resetAllPathMaps_FUN_0050cf60 ; 0053ee72
        ;   XREF to: 0050cf60 (UNCONDITIONAL_CALL)  ; void core_path.cpp_resetAllPathMaps_FUN_0050cf60()
    ADD ESP,0x48                        ; 0053ee77
    POP EDI                             ; 0053ee7a
    POP ESI                             ; 0053ee7b
    POP EBX                             ; 0053ee7c
    RET                                 ; 0053ee7d
    MOV EAX,dword ptr [ESP]             ; 0053ee7e
        ;   Label: LAB_0053ee7e
    MOV dword ptr [ESP + 0x30],EAX      ; 0053ee81
    MOV EAX,dword ptr [ESP + 0x4]       ; 0053ee85
    MOV dword ptr [ESP + 0x34],EAX      ; 0053ee89
    MOV EAX,dword ptr [ESP + 0x8]       ; 0053ee8d
    MOV dword ptr [ESP + 0x38],EAX      ; 0053ee91
    JMP 0x0053ee34                      ; 0053ee95
        ;   XREF to: 0053ee34 (UNCONDITIONAL_JUMP)  ; LAB_0053ee34

