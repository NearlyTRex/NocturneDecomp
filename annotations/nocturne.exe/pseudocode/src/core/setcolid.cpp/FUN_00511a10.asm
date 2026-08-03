; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_FUN_00511a10(CDemonSet *this_ptr,CDemonActor *actor)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[3]:
;   core_barrier.cpp_CBarrier_updateCollisionData_FUN_004118a0 at 004118b6
;   core_door.cpp_CDoor_process_FUN_00455640 at 00455933
;   core_door.cpp_CDoor_updateCollisionData_FUN_00456460 at 0045648c
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytrace_01fba938
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_markShadowVoxels_FUN_0046baa0
;   core_path.cpp_resetAllPathMaps_FUN_004f1e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00511a10
        ;   Label: core_setcolid.cpp_FUN_00511a10
    SUB ESP,0x30                        ; 00511a11
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00511a14
    MOV EDX,ESP                         ; 00511a18
    PUSH EDX                            ; 00511a1a
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00511a1b
    PUSH EBX                            ; 00511a21
    CALL dword ptr [EAX + 0x14]         ; 00511a22
    MOV EDX,EAX                         ; 00511a25
    MOV ECX,EAX                         ; 00511a27
    LEA EAX,[ESP + 0x20]                ; 00511a29
    ADD ESP,0x8                         ; 00511a2d
    CMP EAX,EDX                         ; 00511a30
    JNZ 0x00511a7c                      ; 00511a32
        ;   XREF to: 00511a7c (CONDITIONAL_JUMP)  ; LAB_00511a7c
    LEA EAX,[ESP + 0x24]                ; 00511a34
        ;   Label: LAB_00511a34
    LEA EDX,[ECX + 0xc]                 ; 00511a38
    CMP EAX,EDX                         ; 00511a3b
    JZ 0x00511a53                       ; 00511a3d
        ;   XREF to: 00511a53 (CONDITIONAL_JUMP)  ; LAB_00511a53
    MOV EAX,dword ptr [EDX]             ; 00511a3f
    MOV dword ptr [ESP + 0x24],EAX      ; 00511a41
    MOV EAX,dword ptr [EDX + 0x4]       ; 00511a45
    MOV dword ptr [ESP + 0x28],EAX      ; 00511a48
    MOV EAX,dword ptr [EDX + 0x8]       ; 00511a4c
    MOV dword ptr [ESP + 0x2c],EAX      ; 00511a4f
    LEA EAX,[ESP + 0x24]                ; 00511a53
        ;   Label: LAB_00511a53
    PUSH EAX                            ; 00511a57
    LEA EAX,[ESP + 0x1c]                ; 00511a58
    PUSH EAX                            ; 00511a5c
    LEA EAX,[EBX + 0x30]                ; 00511a5d
    PUSH EAX                            ; 00511a60
    ADD EBX,0x20                        ; 00511a61
    PUSH EBX                            ; 00511a64
    PUSH 0x1fba938                      ; 00511a65 | g_CDemonRaytrace_01fba938
    CALL core_dtrace.cpp_CDemonRaytrace_markShadowVoxels_FUN_0046baa0 ; 00511a6a
        ;   XREF to: 0046baa0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_markShadowVoxels_FUN_0046baa0(CDemonRaytrace * this_ptr, CVector3f * offset, CVector3f * rotation, CVector3f * extent, ...)
    ADD ESP,0x14                        ; 00511a6f
    CALL core_path.cpp_resetAllPathMaps_FUN_004f1e90 ; 00511a72
        ;   XREF to: 004f1e90 (UNCONDITIONAL_CALL)  ; void core_path.cpp_resetAllPathMaps_FUN_004f1e90()
    ADD ESP,0x30                        ; 00511a77
    POP EBX                             ; 00511a7a
    RET                                 ; 00511a7b
    MOV EAX,dword ptr [EDX]             ; 00511a7c
        ;   Label: LAB_00511a7c
    MOV dword ptr [ESP + 0x18],EAX      ; 00511a7e
    MOV EAX,dword ptr [EDX + 0x4]       ; 00511a82
    MOV dword ptr [ESP + 0x1c],EAX      ; 00511a85
    MOV EAX,dword ptr [EDX + 0x8]       ; 00511a89
    MOV dword ptr [ESP + 0x20],EAX      ; 00511a8c
    JMP 0x00511a34                      ; 00511a90
        ;   XREF to: 00511a34 (UNCONDITIONAL_JUMP)  ; LAB_00511a34

