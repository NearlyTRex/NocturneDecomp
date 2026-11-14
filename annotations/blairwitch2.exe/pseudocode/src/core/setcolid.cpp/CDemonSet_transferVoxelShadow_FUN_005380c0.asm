; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_transferVoxelShadow_FUN_005380c0(CDemonSet *this_ptr,CDemonActor *actor)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; Local Variables:
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x3c]:1  local_3c
;
; XREF[1]:
;   core_door.cpp_CDoor_process_FUN_0045f5a0 at 0045f633
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_transferShadowVoxels_FUN_00477160
;   core_path.cpp_resetAllPathMaps_FUN_00513f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005380c0
        ;   Label: core_setcolid.cpp_CDemonSet_transferVoxelShadow_FUN_005380c0
    PUSH ESI                            ; 005380c1
    PUSH EDI                            ; 005380c2
    SUB ESP,0x48                        ; 005380c3
    MOV EBX,dword ptr [ESP + 0x5c]      ; 005380c6
    PUSH EBX                            ; 005380ca
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005380cb
    LEA ESI,[ESP + 0x1c]                ; 005380d1
    LEA EDI,[ESP + 0x4]                 ; 005380d5
    CALL dword ptr [EAX + 0x24]         ; 005380d9
    MOV ECX,0x6                         ; 005380dc
    LEA ESI,[ESP + 0x1c]                ; 005380e1
    ADD ESP,0x4                         ; 005380e5
    MOVSD.REP ES:EDI,ESI                ; 005380e8
    LEA EDX,[ESP + 0x30]                ; 005380ea
    MOV ESI,ESP                         ; 005380ee
    CMP EDX,ESI                         ; 005380f0
    JNZ 0x0053813e                      ; 005380f2
        ;   XREF to: 0053813e (CONDITIONAL_JUMP)  ; LAB_0053813e
    LEA EAX,[ESP + 0x3c]                ; 005380f4
        ;   Label: LAB_005380f4
    LEA EDX,[ESI + 0xc]                 ; 005380f8
    CMP EAX,EDX                         ; 005380fb
    JZ 0x00538113                       ; 005380fd
        ;   XREF to: 00538113 (CONDITIONAL_JUMP)  ; LAB_00538113
    MOV EAX,dword ptr [EDX]             ; 005380ff
    MOV dword ptr [ESP + 0x3c],EAX      ; 00538101
    MOV EAX,dword ptr [EDX + 0x4]       ; 00538105
    MOV dword ptr [ESP + 0x40],EAX      ; 00538108
    MOV EAX,dword ptr [EDX + 0x8]       ; 0053810c
    MOV dword ptr [ESP + 0x44],EAX      ; 0053810f
    LEA EAX,[ESP + 0x3c]                ; 00538113
        ;   Label: LAB_00538113
    PUSH EAX                            ; 00538117
    LEA EAX,[ESP + 0x34]                ; 00538118
    PUSH EAX                            ; 0053811c
    LEA EAX,[EBX + 0x30]                ; 0053811d
    PUSH EAX                            ; 00538120
    ADD EBX,0x20                        ; 00538121
    PUSH EBX                            ; 00538124
    PUSH 0x1fc9c68                      ; 00538125 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_transferShadowVoxels_FUN_00477160 ; 0053812a
        ;   XREF to: 00477160 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_transferShadowVoxels_FUN_00477160(CDemonRaytrace * this_ptr, CVector3f * offset, CVector3f * rotation, CVector3f * start, ...)
    ADD ESP,0x14                        ; 0053812f
    CALL core_path.cpp_resetAllPathMaps_FUN_00513f30 ; 00538132
        ;   XREF to: 00513f30 (UNCONDITIONAL_CALL)  ; void core_path.cpp_resetAllPathMaps_FUN_00513f30()
    ADD ESP,0x48                        ; 00538137
    POP EDI                             ; 0053813a
    POP ESI                             ; 0053813b
    POP EBX                             ; 0053813c
    RET                                 ; 0053813d
    MOV EAX,dword ptr [ESP]             ; 0053813e
        ;   Label: LAB_0053813e
    MOV dword ptr [ESP + 0x30],EAX      ; 00538141
    MOV EAX,dword ptr [ESP + 0x4]       ; 00538145
    MOV dword ptr [ESP + 0x34],EAX      ; 00538149
    MOV EAX,dword ptr [ESP + 0x8]       ; 0053814d
    MOV dword ptr [ESP + 0x38],EAX      ; 00538151
    JMP 0x005380f4                      ; 00538155
        ;   XREF to: 005380f4 (UNCONDITIONAL_JUMP)  ; LAB_005380f4

