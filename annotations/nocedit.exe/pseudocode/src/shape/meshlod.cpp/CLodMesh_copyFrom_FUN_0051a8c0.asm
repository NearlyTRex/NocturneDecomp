; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CLodMesh * __cdecl shape_meshlod_cpp_CLodMesh_copyFrom_FUN_0051a8c0(CLodMesh *this_ptr,CLodMesh *source_mesh)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; CLodMesh *       Stack[0x8]:4   source_mesh
;
; XREF[4]:
;   core_skeledit.cpp_FUN_0058c190 at 0058d68d
;   shape_meshlod.cpp_CLodMesh_copy_FUN_00515860 at 00515874
;   shape_meshlod.cpp_CLodMesh_createNextLOD_FUN_00516f50 at 00516fa0
;   shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920 at 0051b940
;
; Called Functions:
;   shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051a8c0
        ;   Label: shape_meshlod.cpp_CLodMesh_copyFrom_FUN_0051a8c0
    PUSH ESI                            ; 0051a8c1
    PUSH EDI                            ; 0051a8c2
    PUSH EBP                            ; 0051a8c3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0051a8c4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0051a8c8
    MOV EDX,dword ptr [EBP + 0x10]      ; 0051a8cc
    PUSH EDX                            ; 0051a8cf
    MOV ECX,dword ptr [EBP + 0x8]       ; 0051a8d0
    PUSH ECX                            ; 0051a8d3
    MOV ESI,dword ptr [EBP]             ; 0051a8d4
    PUSH ESI                            ; 0051a8d7
    PUSH EBX                            ; 0051a8d8
    CALL shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0 ; 0051a8d9
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0(CLodMesh * this_ptr, int vertex_count, int tri_count, int submesh_count)
    IMUL ECX,dword ptr [EBX],0x4c4      ; 0051a8de
    ADD ESP,0x10                        ; 0051a8e4
    MOV ESI,dword ptr [EBP + 0x4]       ; 0051a8e7
    MOV EDI,dword ptr [EBX + 0x4]       ; 0051a8ea
    PUSH EDI                            ; 0051a8ed
    MOV EAX,ECX                         ; 0051a8ee
    SHR ECX,0x2                         ; 0051a8f0
    MOVSD.REP ES:EDI,ESI                ; 0051a8f3
    MOV CL,AL                           ; 0051a8f5
    AND CL,0x3                          ; 0051a8f7
    MOVSB.REP ES:EDI,ESI                ; 0051a8fa
    POP EDI                             ; 0051a8fc
    MOV EDX,dword ptr [EBX + 0x8]       ; 0051a8fd
    LEA ECX,[EDX*0x8 + 0x0]             ; 0051a900
    ADD ECX,EDX                         ; 0051a907
    SHL ECX,0x2                         ; 0051a909
    MOV ESI,dword ptr [EBP + 0xc]       ; 0051a90c
    SUB ECX,EDX                         ; 0051a90f
    MOV EDI,dword ptr [EBX + 0xc]       ; 0051a911
    SHL ECX,0x2                         ; 0051a914
    PUSH EDI                            ; 0051a917
    MOV EAX,ECX                         ; 0051a918
    SHR ECX,0x2                         ; 0051a91a
    MOVSD.REP ES:EDI,ESI                ; 0051a91d
    MOV CL,AL                           ; 0051a91f
    AND CL,0x3                          ; 0051a921
    MOVSB.REP ES:EDI,ESI                ; 0051a924
    POP EDI                             ; 0051a926
    MOV EDX,dword ptr [EBX + 0x10]      ; 0051a927
    LEA ECX,[EDX*0x8 + 0x0]             ; 0051a92a
    MOV ESI,dword ptr [EBP + 0x14]      ; 0051a931
    ADD ECX,EDX                         ; 0051a934
    MOV EDI,dword ptr [EBX + 0x14]      ; 0051a936
    SHL ECX,0x3                         ; 0051a939
    PUSH EDI                            ; 0051a93c
    MOV EAX,ECX                         ; 0051a93d
    SHR ECX,0x2                         ; 0051a93f
    MOVSD.REP ES:EDI,ESI                ; 0051a942
    MOV CL,AL                           ; 0051a944
    AND CL,0x3                          ; 0051a946
    MOVSB.REP ES:EDI,ESI                ; 0051a949
    POP EDI                             ; 0051a94b
    MOV EAX,dword ptr [EBP + 0x18]      ; 0051a94c
    MOV dword ptr [EBX + 0x18],EAX      ; 0051a94f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0051a952
    MOV ECX,0x10                        ; 0051a955
    MOV dword ptr [EBX + 0x1c],EAX      ; 0051a95a
    LEA ESI,[EBP + 0x24]                ; 0051a95d
    MOV EAX,dword ptr [EBP + 0x20]      ; 0051a960
    LEA EDI,[EBX + 0x24]                ; 0051a963
    MOV dword ptr [EBX + 0x20],EAX      ; 0051a966
    PUSH EDI                            ; 0051a969
    MOV EAX,ECX                         ; 0051a96a
    SHR ECX,0x2                         ; 0051a96c
    MOVSD.REP ES:EDI,ESI                ; 0051a96f
    MOV CL,AL                           ; 0051a971
    AND CL,0x3                          ; 0051a973
    MOVSB.REP ES:EDI,ESI                ; 0051a976
    POP EDI                             ; 0051a978
    MOV EAX,EBX                         ; 0051a979
    POP EBP                             ; 0051a97b
    POP EDI                             ; 0051a97c
    POP ESI                             ; 0051a97d
    POP EBX                             ; 0051a97e
    RET                                 ; 0051a97f

