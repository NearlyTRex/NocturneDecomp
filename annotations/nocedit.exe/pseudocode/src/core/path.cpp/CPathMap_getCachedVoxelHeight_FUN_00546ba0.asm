; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap *this_ptr,int grid_z,int grid_x,int current_height)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   grid_z
; int              Stack[0xc]:4   grid_x
; int              Stack[0x10]:4   current_height
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[4]:
;   core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90 at 00547060
;   core_path.cpp_CPathMap_findPathToDestination_FUN_00547320 at 00547688
;   core_path.cpp_CPathMap_isLineWalkable_FUN_00546c40 at 00546dc2
;   core_path.cpp_CPathMap_queuePop_FUN_005487a0 at 005488fc
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546ba0
        ;   Label: core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
    PUSH ESI                            ; 00546ba1
    PUSH EDI                            ; 00546ba2
    SUB ESP,0xc                         ; 00546ba3
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00546ba6
    MOV ECX,dword ptr [ESP + 0x20]      ; 00546baa
    MOV EDX,dword ptr [ESP + 0x24]      ; 00546bae
    MOV ESI,dword ptr [ESP + 0x28]      ; 00546bb2
    TEST EDX,EDX                        ; 00546bb6
    JL 0x00546bf6                       ; 00546bb8
        ;   XREF to: 00546bf6 (CONDITIONAL_JUMP)  ; LAB_00546bf6
    CMP EDX,0x64                        ; 00546bba
    JGE 0x00546bf6                      ; 00546bbd
        ;   XREF to: 00546bf6 (CONDITIONAL_JUMP)  ; LAB_00546bf6
    TEST ECX,ECX                        ; 00546bbf
    JL 0x00546bf6                       ; 00546bc1
        ;   XREF to: 00546bf6 (CONDITIONAL_JUMP)  ; LAB_00546bf6
    CMP ECX,0x64                        ; 00546bc3
    JGE 0x00546bf6                      ; 00546bc6
        ;   XREF to: 00546bf6 (CONDITIONAL_JUMP)  ; LAB_00546bf6
    LEA EAX,[ECX*0x4 + 0x0]             ; 00546bc8
    SUB EAX,ECX                         ; 00546bcf
    SHL EAX,0x3                         ; 00546bd1
    ADD EAX,ECX                         ; 00546bd4
    SHL EAX,0x4                         ; 00546bd6
    LEA EBX,[EDX*0x4 + 0x0]             ; 00546bd9
    ADD EAX,EDI                         ; 00546be0
    ADD EBX,EAX                         ; 00546be2
    CMP ESI,dword ptr [EBX + 0x9c70]    ; 00546be4
    JNZ 0x00546bfd                      ; 00546bea
        ;   XREF to: 00546bfd (CONDITIONAL_JUMP)  ; LAB_00546bfd
    MOV EAX,dword ptr [EBX + 0x30]      ; 00546bec
    ADD ESP,0xc                         ; 00546bef
        ;   Label: LAB_00546bef
    POP EDI                             ; 00546bf2
    POP ESI                             ; 00546bf3
    POP EBX                             ; 00546bf4
    RET                                 ; 00546bf5
    MOV EAX,0xffffd8f1                  ; 00546bf6
        ;   Label: LAB_00546bf6
    JMP 0x00546bef                      ; 00546bfb
        ;   XREF to: 00546bef (UNCONDITIONAL_JUMP)  ; LAB_00546bef
    MOV EAX,dword ptr [EDI + 0x24]      ; 00546bfd
        ;   Label: LAB_00546bfd
    ADD EAX,EDX                         ; 00546c00
    MOV dword ptr [ESP],EAX             ; 00546c02
    LEA EAX,[ESI + 0x5]                 ; 00546c05
    MOV dword ptr [ESP + 0x4],EAX       ; 00546c08
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00546c0c
    ADD EAX,ECX                         ; 00546c0f
    MOV dword ptr [ESP + 0x8],EAX       ; 00546c11
    MOV EAX,ESP                         ; 00546c15
    PUSH EAX                            ; 00546c17
    PUSH 0x3277d14                      ; 00546c18 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50 ; 00546c1d
        ;   XREF to: 00499a50 (UNCONDITIONAL_CALL)  ; int core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50(CDemonRaytrace * this_ptr, CVector3i * voxel_coords)
    MOV dword ptr [EBX + 0x30],EAX      ; 00546c22
    ADD ESP,0x8                         ; 00546c25
    MOV dword ptr [EBX + 0x9c70],ESI    ; 00546c28
    ADD ESP,0xc                         ; 00546c2e
    POP EDI                             ; 00546c31
    POP ESI                             ; 00546c32
    POP EBX                             ; 00546c33
    RET                                 ; 00546c34

