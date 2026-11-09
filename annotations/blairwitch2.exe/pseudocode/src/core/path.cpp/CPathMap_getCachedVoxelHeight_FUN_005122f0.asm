; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap *this_ptr,int grid_z,int grid_x,int current_height)
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
;   core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_005125e0 at 0051264f
;   core_path.cpp_CPathMap_findPathToDestination_FUN_00512a70 at 00512e70
;   core_path.cpp_CPathMap_isLineWalkable_FUN_00512390 at 00512405
;   core_path.cpp_CPathMap_searchGrid_FUN_00514140 at 0051423f
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00476c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005122f0
        ;   Label: core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0
    PUSH ESI                            ; 005122f1
    PUSH EDI                            ; 005122f2
    SUB ESP,0xc                         ; 005122f3
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005122f6
    MOV ECX,dword ptr [ESP + 0x20]      ; 005122fa
    MOV EDX,dword ptr [ESP + 0x24]      ; 005122fe
    MOV ESI,dword ptr [ESP + 0x28]      ; 00512302
    TEST EDX,EDX                        ; 00512306
    JL 0x00512346                       ; 00512308
        ;   XREF to: 00512346 (CONDITIONAL_JUMP)  ; LAB_00512346
    CMP EDX,0x64                        ; 0051230a
    JGE 0x00512346                      ; 0051230d
        ;   XREF to: 00512346 (CONDITIONAL_JUMP)  ; LAB_00512346
    TEST ECX,ECX                        ; 0051230f
    JL 0x00512346                       ; 00512311
        ;   XREF to: 00512346 (CONDITIONAL_JUMP)  ; LAB_00512346
    CMP ECX,0x64                        ; 00512313
    JGE 0x00512346                      ; 00512316
        ;   XREF to: 00512346 (CONDITIONAL_JUMP)  ; LAB_00512346
    LEA EAX,[ECX*0x4 + 0x0]             ; 00512318
    SUB EAX,ECX                         ; 0051231f
    SHL EAX,0x3                         ; 00512321
    ADD EAX,ECX                         ; 00512324
    SHL EAX,0x4                         ; 00512326
    LEA EBX,[EDX*0x4 + 0x0]             ; 00512329
    ADD EAX,EDI                         ; 00512330
    ADD EBX,EAX                         ; 00512332
    CMP ESI,dword ptr [EBX + 0x9c70]    ; 00512334
    JNZ 0x0051234d                      ; 0051233a
        ;   XREF to: 0051234d (CONDITIONAL_JUMP)  ; LAB_0051234d
    MOV EAX,dword ptr [EBX + 0x30]      ; 0051233c
    ADD ESP,0xc                         ; 0051233f
        ;   Label: LAB_0051233f
    POP EDI                             ; 00512342
    POP ESI                             ; 00512343
    POP EBX                             ; 00512344
    RET                                 ; 00512345
    MOV EAX,0xffffd8f1                  ; 00512346
        ;   Label: LAB_00512346
    JMP 0x0051233f                      ; 0051234b
        ;   XREF to: 0051233f (UNCONDITIONAL_JUMP)  ; LAB_0051233f
    MOV EAX,dword ptr [EDI + 0x24]      ; 0051234d
        ;   Label: LAB_0051234d
    ADD EAX,EDX                         ; 00512350
    MOV dword ptr [ESP],EAX             ; 00512352
    LEA EAX,[ESI + 0x5]                 ; 00512355
    MOV dword ptr [ESP + 0x4],EAX       ; 00512358
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0051235c
    ADD EAX,ECX                         ; 0051235f
    MOV dword ptr [ESP + 0x8],EAX       ; 00512361
    MOV EAX,ESP                         ; 00512365
    PUSH EAX                            ; 00512367
    PUSH 0x1fc9c68                      ; 00512368 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00476c30 ; 0051236d
        ;   XREF to: 00476c30 (UNCONDITIONAL_CALL)  ; int core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00476c30(CDemonRaytrace * this_ptr, CVector3i * voxel_coords)
    MOV dword ptr [EBX + 0x30],EAX      ; 00512372
    ADD ESP,0x8                         ; 00512375
    MOV dword ptr [EBX + 0x9c70],ESI    ; 00512378
    ADD ESP,0xc                         ; 0051237e
    POP EDI                             ; 00512381
    POP ESI                             ; 00512382
    POP EBX                             ; 00512383
    RET                                 ; 00512384

