; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap *this_ptr,int grid_z,int grid_x,int current_height)
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
;   core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_004f0790 at 004f07ff
;   core_path.cpp_CPathMap_findPathToDestination_FUN_004f0c20 at 004f0f6b
;   core_path.cpp_CPathMap_isLineWalkable_FUN_004f0540 at 004f05b5
;   core_path.cpp_CPathMap_searchGrid_FUN_004f20a0 at 004f219f
;
; Referenced Globals:
;   undefined4 DAT_01fba938
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_0046b8d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f04a0
        ;   Label: core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0
    PUSH ESI                            ; 004f04a1
    PUSH EDI                            ; 004f04a2
    SUB ESP,0xc                         ; 004f04a3
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004f04a6
    MOV ECX,dword ptr [ESP + 0x20]      ; 004f04aa
    MOV EDX,dword ptr [ESP + 0x24]      ; 004f04ae
    MOV ESI,dword ptr [ESP + 0x28]      ; 004f04b2
    TEST EDX,EDX                        ; 004f04b6
    JL 0x004f04f6                       ; 004f04b8
        ;   XREF to: 004f04f6 (CONDITIONAL_JUMP)  ; LAB_004f04f6
    CMP EDX,0x64                        ; 004f04ba
    JGE 0x004f04f6                      ; 004f04bd
        ;   XREF to: 004f04f6 (CONDITIONAL_JUMP)  ; LAB_004f04f6
    TEST ECX,ECX                        ; 004f04bf
    JL 0x004f04f6                       ; 004f04c1
        ;   XREF to: 004f04f6 (CONDITIONAL_JUMP)  ; LAB_004f04f6
    CMP ECX,0x64                        ; 004f04c3
    JGE 0x004f04f6                      ; 004f04c6
        ;   XREF to: 004f04f6 (CONDITIONAL_JUMP)  ; LAB_004f04f6
    LEA EAX,[ECX*0x4 + 0x0]             ; 004f04c8
    SUB EAX,ECX                         ; 004f04cf
    SHL EAX,0x3                         ; 004f04d1
    ADD EAX,ECX                         ; 004f04d4
    SHL EAX,0x4                         ; 004f04d6
    LEA EBX,[EDX*0x4 + 0x0]             ; 004f04d9
    ADD EAX,EDI                         ; 004f04e0
    ADD EBX,EAX                         ; 004f04e2
    CMP ESI,dword ptr [EBX + 0x9c70]    ; 004f04e4
    JNZ 0x004f04fd                      ; 004f04ea
        ;   XREF to: 004f04fd (CONDITIONAL_JUMP)  ; LAB_004f04fd
    MOV EAX,dword ptr [EBX + 0x30]      ; 004f04ec
    ADD ESP,0xc                         ; 004f04ef
        ;   Label: LAB_004f04ef
    POP EDI                             ; 004f04f2
    POP ESI                             ; 004f04f3
    POP EBX                             ; 004f04f4
    RET                                 ; 004f04f5
    MOV EAX,0xffffd8f1                  ; 004f04f6
        ;   Label: LAB_004f04f6
    JMP 0x004f04ef                      ; 004f04fb
        ;   XREF to: 004f04ef (UNCONDITIONAL_JUMP)  ; LAB_004f04ef
    MOV EAX,dword ptr [EDI + 0x24]      ; 004f04fd
        ;   Label: LAB_004f04fd
    ADD EAX,EDX                         ; 004f0500
    MOV dword ptr [ESP],EAX             ; 004f0502
    LEA EAX,[ESI + 0x5]                 ; 004f0505
    MOV dword ptr [ESP + 0x4],EAX       ; 004f0508
    MOV EAX,dword ptr [EDI + 0x2c]      ; 004f050c
    ADD EAX,ECX                         ; 004f050f
    MOV dword ptr [ESP + 0x8],EAX       ; 004f0511
    MOV EAX,ESP                         ; 004f0515
    PUSH EAX                            ; 004f0517
    PUSH 0x1fba938                      ; 004f0518 | DAT_01fba938
    CALL core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_0046b8d0 ; 004f051d
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; int core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_0046b8d0(CDemonRaytrace * this_ptr, CVector3i * voxel_coords)
    MOV dword ptr [EBX + 0x30],EAX      ; 004f0522
    ADD ESP,0x8                         ; 004f0525
    MOV dword ptr [EBX + 0x9c70],ESI    ; 004f0528
    ADD ESP,0xc                         ; 004f052e
    POP EDI                             ; 004f0531
    POP ESI                             ; 004f0532
    POP EBX                             ; 004f0533
    RET                                 ; 004f0534

