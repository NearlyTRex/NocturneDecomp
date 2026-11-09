; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_0050b320(CPathMap *this_ptr,int grid_z,int grid_x,int current_height)
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
;   core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_0050b610 at 0050b67f
;   core_path.cpp_CPathMap_findPathToDestination_FUN_0050baa0 at 0050bea0
;   core_path.cpp_CPathMap_isLineWalkable_FUN_0050b3c0 at 0050b435
;   core_path.cpp_CPathMap_searchGrid_FUN_0050d170 at 0050d26f
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00477ca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b320
        ;   Label: core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_0050b320
    PUSH ESI                            ; 0050b321
    PUSH EDI                            ; 0050b322
    SUB ESP,0xc                         ; 0050b323
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0050b326
    MOV ECX,dword ptr [ESP + 0x20]      ; 0050b32a
    MOV EDX,dword ptr [ESP + 0x24]      ; 0050b32e
    MOV ESI,dword ptr [ESP + 0x28]      ; 0050b332
    TEST EDX,EDX                        ; 0050b336
    JL 0x0050b376                       ; 0050b338
        ;   XREF to: 0050b376 (CONDITIONAL_JUMP)  ; LAB_0050b376
    CMP EDX,0x64                        ; 0050b33a
    JGE 0x0050b376                      ; 0050b33d
        ;   XREF to: 0050b376 (CONDITIONAL_JUMP)  ; LAB_0050b376
    TEST ECX,ECX                        ; 0050b33f
    JL 0x0050b376                       ; 0050b341
        ;   XREF to: 0050b376 (CONDITIONAL_JUMP)  ; LAB_0050b376
    CMP ECX,0x64                        ; 0050b343
    JGE 0x0050b376                      ; 0050b346
        ;   XREF to: 0050b376 (CONDITIONAL_JUMP)  ; LAB_0050b376
    LEA EAX,[ECX*0x4 + 0x0]             ; 0050b348
    SUB EAX,ECX                         ; 0050b34f
    SHL EAX,0x3                         ; 0050b351
    ADD EAX,ECX                         ; 0050b354
    SHL EAX,0x4                         ; 0050b356
    LEA EBX,[EDX*0x4 + 0x0]             ; 0050b359
    ADD EAX,EDI                         ; 0050b360
    ADD EBX,EAX                         ; 0050b362
    CMP ESI,dword ptr [EBX + 0x9c70]    ; 0050b364
    JNZ 0x0050b37d                      ; 0050b36a
        ;   XREF to: 0050b37d (CONDITIONAL_JUMP)  ; LAB_0050b37d
    MOV EAX,dword ptr [EBX + 0x30]      ; 0050b36c
    ADD ESP,0xc                         ; 0050b36f
        ;   Label: LAB_0050b36f
    POP EDI                             ; 0050b372
    POP ESI                             ; 0050b373
    POP EBX                             ; 0050b374
    RET                                 ; 0050b375
    MOV EAX,0xffffd8f1                  ; 0050b376
        ;   Label: LAB_0050b376
    JMP 0x0050b36f                      ; 0050b37b
        ;   XREF to: 0050b36f (UNCONDITIONAL_JUMP)  ; LAB_0050b36f
    MOV EAX,dword ptr [EDI + 0x24]      ; 0050b37d
        ;   Label: LAB_0050b37d
    ADD EAX,EDX                         ; 0050b380
    MOV dword ptr [ESP],EAX             ; 0050b382
    LEA EAX,[ESI + 0x4]                 ; 0050b385
    MOV dword ptr [ESP + 0x4],EAX       ; 0050b388
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0050b38c
    ADD EAX,ECX                         ; 0050b38f
    MOV dword ptr [ESP + 0x8],EAX       ; 0050b391
    MOV EAX,ESP                         ; 0050b395
    PUSH EAX                            ; 0050b397
    PUSH 0x203b37c                      ; 0050b398 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00477ca0 ; 0050b39d
        ;   XREF to: 00477ca0 (UNCONDITIONAL_CALL)  ; int core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00477ca0(CDemonRaytrace * this_ptr, CVector3i * voxel_coords)
    MOV dword ptr [EBX + 0x30],EAX      ; 0050b3a2
    ADD ESP,0x8                         ; 0050b3a5
    MOV dword ptr [EBX + 0x9c70],ESI    ; 0050b3a8
    ADD ESP,0xc                         ; 0050b3ae
    POP EDI                             ; 0050b3b1
    POP ESI                             ; 0050b3b2
    POP EBX                             ; 0050b3b3
    RET                                 ; 0050b3b4

