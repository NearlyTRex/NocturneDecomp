; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_FUN_0053eea0(CDemonSet *this_ptr,CDemonActor *actor)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; Local Variables:
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x3c]:1  local_3c
;
; XREF[1]:
;   core_door.cpp_FUN_004642f0 at 00464383
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_transferShadowVoxels_FUN_004781d0
;   core_path.cpp_resetAllPathMaps_FUN_0050cf60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053eea0
        ;   Label: core_setcolid.cpp_FUN_0053eea0
    PUSH ESI                            ; 0053eea1
    PUSH EDI                            ; 0053eea2
    SUB ESP,0x48                        ; 0053eea3
    MOV EBX,dword ptr [ESP + 0x5c]      ; 0053eea6
    PUSH EBX                            ; 0053eeaa
    MOV EAX,dword ptr [EBX + 0x154]     ; 0053eeab
    LEA ESI,[ESP + 0x1c]                ; 0053eeb1
    LEA EDI,[ESP + 0x4]                 ; 0053eeb5
    CALL dword ptr [EAX + 0x1c]         ; 0053eeb9
    MOV ECX,0x6                         ; 0053eebc
    LEA ESI,[ESP + 0x1c]                ; 0053eec1
    ADD ESP,0x4                         ; 0053eec5
    MOVSD.REP ES:EDI,ESI                ; 0053eec8
    LEA EDX,[ESP + 0x30]                ; 0053eeca
    MOV ESI,ESP                         ; 0053eece
    CMP EDX,ESI                         ; 0053eed0
    JNZ 0x0053ef1e                      ; 0053eed2
        ;   XREF to: 0053ef1e (CONDITIONAL_JUMP)  ; LAB_0053ef1e
    LEA EAX,[ESP + 0x3c]                ; 0053eed4
        ;   Label: LAB_0053eed4
    LEA EDX,[ESI + 0xc]                 ; 0053eed8
    CMP EAX,EDX                         ; 0053eedb
    JZ 0x0053eef3                       ; 0053eedd
        ;   XREF to: 0053eef3 (CONDITIONAL_JUMP)  ; LAB_0053eef3
    MOV EAX,dword ptr [EDX]             ; 0053eedf
    MOV dword ptr [ESP + 0x3c],EAX      ; 0053eee1
    MOV EAX,dword ptr [EDX + 0x4]       ; 0053eee5
    MOV dword ptr [ESP + 0x40],EAX      ; 0053eee8
    MOV EAX,dword ptr [EDX + 0x8]       ; 0053eeec
    MOV dword ptr [ESP + 0x44],EAX      ; 0053eeef
    LEA EAX,[ESP + 0x3c]                ; 0053eef3
        ;   Label: LAB_0053eef3
    PUSH EAX                            ; 0053eef7
    LEA EAX,[ESP + 0x34]                ; 0053eef8
    PUSH EAX                            ; 0053eefc
    LEA EAX,[EBX + 0x30]                ; 0053eefd
    PUSH EAX                            ; 0053ef00
    ADD EBX,0x20                        ; 0053ef01
    PUSH EBX                            ; 0053ef04
    PUSH 0x203b37c                      ; 0053ef05 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_transferShadowVoxels_FUN_004781d0 ; 0053ef0a
        ;   XREF to: 004781d0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_transferShadowVoxels_FUN_004781d0(CDemonRaytrace * this_ptr, CVector3f * offset, CVector3f * rotation, CVector3f * start, ...)
    ADD ESP,0x14                        ; 0053ef0f
    CALL core_path.cpp_resetAllPathMaps_FUN_0050cf60 ; 0053ef12
        ;   XREF to: 0050cf60 (UNCONDITIONAL_CALL)  ; void core_path.cpp_resetAllPathMaps_FUN_0050cf60()
    ADD ESP,0x48                        ; 0053ef17
    POP EDI                             ; 0053ef1a
    POP ESI                             ; 0053ef1b
    POP EBX                             ; 0053ef1c
    RET                                 ; 0053ef1d
    MOV EAX,dword ptr [ESP]             ; 0053ef1e
        ;   Label: LAB_0053ef1e
    MOV dword ptr [ESP + 0x30],EAX      ; 0053ef21
    MOV EAX,dword ptr [ESP + 0x4]       ; 0053ef25
    MOV dword ptr [ESP + 0x34],EAX      ; 0053ef29
    MOV EAX,dword ptr [ESP + 0x8]       ; 0053ef2d
    MOV dword ptr [ESP + 0x38],EAX      ; 0053ef31
    JMP 0x0053eed4                      ; 0053ef35
        ;   XREF to: 0053eed4 (UNCONDITIONAL_JUMP)  ; LAB_0053eed4

