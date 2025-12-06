; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_path.cpp_FUN_00548390()
;
; Local Variables:
; undefined1       Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_path.cpp_FUN_00548500 at 00548505
;
; Referenced Globals:
;   WatcomTypeInfo g_CPathMapTypeInfo
;   WatcomStaticDestructorNode DAT_00680bc8
;   undefined4 DAT_00680bd8
;   undefined4 DAT_00680bdc
;   CPathMap[12] DAT_02fd9060
;   undefined4 DAT_02fec910
;   undefined4 DAT_02fec914
;   undefined4 DAT_02fec918
;   undefined4 DAT_030001ec
;   undefined4 DAT_030001f0
;   undefined4 DAT_030001f4
;   undefined1 DAT_030c3ab0
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
;   core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;   crt_stdlib.c_atexit_FUN_005ff060
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548390
        ;   Label: core_path.cpp_FUN_00548390
    PUSH ESI                            ; 00548391
    PUSH EDI                            ; 00548392
    PUSH EBP                            ; 00548393
    SUB ESP,0x24                        ; 00548394
    MOV EBP,dword ptr [ESP + 0x38]      ; 00548397
    MOV AH,byte ptr [0x030c3ab0]        ; 0054839b | undefined1 DAT_030c3ab0
    TEST AH,0x1                         ; 005483a1
    JZ 0x00548489                       ; 005483a4 | LAB_00548489
        ;   XREF to: 00548489 (CONDITIONAL_JUMP)
    CMP dword ptr [0x00680bd8],0x0      ; 005483aa | undefined4 DAT_00680bd8
        ;   Label: LAB_005483aa
    JL 0x005484ba                       ; 005483b1 | LAB_005484ba
        ;   XREF to: 005484ba (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 005483b7
    LEA EDX,[EDX]                       ; 005483bd
    PUSH EBP                            ; 005483c0
        ;   Label: LAB_005483c0
    LEA ESI,[ESP + 0x4]                 ; 005483c1
    PUSH 0x3277d14                      ; 005483c5 | CDemonRaytrace g_CDemonRaytraceInstance
    LEA EDI,[ESP + 0x20]                ; 005483ca
    XOR EBX,EBX                         ; 005483ce
    CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880 ; 005483d0 | void core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880(CDemonRaytrace * this_ptr, CVector3f * world_position, CVector3i * output_voxel_coords)
        ;   XREF to: 00499880 (UNCONDITIONAL_CALL)
    LEA ESI,[ESP + 0x8]                 ; 005483d5
    ADD ESP,0x8                         ; 005483d9
    XOR ECX,ECX                         ; 005483dc
    MOVSD ES:EDI,ESI                    ; 005483de
    MOVSD ES:EDI,ESI                    ; 005483df
    MOVSD ES:EDI,ESI                    ; 005483e0
    XOR EDX,EDX                         ; 005483e1
    XOR ESI,ESI                         ; 005483e3
    MOV EDI,dword ptr [ESP + 0x18]      ; 005483e5
        ;   Label: LAB_005483e5
    CMP EDI,dword ptr [EDX + 0x2fec910] ; 005483e9 | DAT_02fec910
    JNZ 0x005484d2                      ; 005483ef | LAB_005484d2
        ;   XREF to: 005484d2 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005483f5
    CMP EDI,dword ptr [EDX + 0x2fec914] ; 005483f9 | DAT_02fec914
    JNZ 0x005484d2                      ; 005483ff | LAB_005484d2
        ;   XREF to: 005484d2 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x20]      ; 00548405
    CMP EDI,dword ptr [EDX + 0x2fec918] ; 00548409 | DAT_02fec918
    JNZ 0x005484d2                      ; 0054840f | LAB_005484d2
        ;   XREF to: 005484d2 (CONDITIONAL_JUMP)
    MOV ESI,ECX                         ; 00548415
    LEA ECX,[ESI*0x4 + 0x0]             ; 00548417
        ;   Label: LAB_00548417
    XOR EAX,EAX                         ; 0054841e
    MOV EBX,dword ptr [ECX + 0x680bd8]  ; 00548420 | undefined4 DAT_00680bd8 | DAT_00680bdc = 0x0
        ;   Label: LAB_00548420
    MOV EDX,dword ptr [EAX + 0x680bd8]  ; 00548426 | undefined4 DAT_00680bd8 | DAT_00680bdc = 0x0
    CMP EDX,EBX                         ; 0054842c
    JGE 0x00548439                      ; 0054842e | LAB_00548439
        ;   XREF to: 00548439 (CONDITIONAL_JUMP)
    LEA EDI,[EDX + 0x1]                 ; 00548430
    MOV dword ptr [EAX + 0x680bd8],EDI  ; 00548433 | undefined4 DAT_00680bd8 | DAT_00680bdc = 0x0
    ADD EAX,0x4                         ; 00548439
        ;   Label: LAB_00548439
    CMP EAX,0x30                        ; 0054843c
    JNZ 0x00548420                      ; 0054843f | LAB_00548420
        ;   XREF to: 00548420 (CONDITIONAL_JUMP)
    IMUL EBX,ESI,0x138dc                ; 00548441
    XOR EAX,EAX                         ; 00548447
    MOV dword ptr [ESI*0x4 + 0x680bd8],EAX ; 00548449 | undefined4 DAT_00680bd8
    MOV EAX,dword ptr [EBP]             ; 00548450
    MOV dword ptr [ESP + 0xc],EAX       ; 00548453
    LEA EAX,[EBP + 0x4]                 ; 00548457
    MOV EAX,dword ptr [EAX]             ; 0054845a
    MOV dword ptr [ESP + 0x10],EAX      ; 0054845c
    LEA EAX,[EBP + 0x8]                 ; 00548460
    MOV EAX,dword ptr [EAX]             ; 00548463
    PUSH 0x1                            ; 00548465
    MOV dword ptr [ESP + 0x18],EAX      ; 00548467
    LEA EAX,[ESP + 0x10]                ; 0054846b
    PUSH EAX                            ; 0054846f
    ADD EBX,0x2fd9060                   ; 00548470 | CPathMap[12] DAT_02fd9060
    PUSH EBX                            ; 00548476 | CPathMap[12] DAT_02fd9060
    CALL core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60 ; 00548477 | void core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60(CPathMap * this_ptr, CVector3f * source_position, int force_update)
        ;   XREF to: 00546a60 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054847c
    MOV EAX,EBX                         ; 0054847f | CPathMap[12] DAT_02fd9060
    ADD ESP,0x24                        ; 00548481
    POP EBP                             ; 00548484
    POP EDI                             ; 00548485
    POP ESI                             ; 00548486
    POP EBX                             ; 00548487
    RET                                 ; 00548488
    PUSH 0x662110                       ; 00548489 | WatcomTypeInfo g_CPathMapTypeInfo
        ;   Label: LAB_00548489
    MOV DL,AH                           ; 0054848e
    PUSH 0xc                            ; 00548490
    OR DL,0x1                           ; 00548492
    PUSH 0x2fd9060                      ; 00548495 | CPathMap[12] DAT_02fd9060
    MOV byte ptr [0x030c3ab0],DL        ; 0054849a | undefined1 DAT_030c3ab0
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 005484a0 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005484a5
    PUSH 0x680bc8                       ; 005484a8 | WatcomStaticDestructorNode DAT_00680bc8
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 005484ad | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005484b2
    JMP 0x005483aa                      ; 005484b5 | LAB_005483aa
        ;   XREF to: 005483aa (UNCONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 005484ba
        ;   Label: LAB_005484ba
    XOR EAX,EAX                         ; 005484bc
    MOV dword ptr [EDX + 0x680bd8],EAX  ; 005484be | undefined4 DAT_00680bd8 | DAT_00680bdc = 0x0
        ;   Label: LAB_005484be
    INC EAX                             ; 005484c4
    ADD EDX,0x4                         ; 005484c5
    CMP EAX,0xc                         ; 005484c8
    JL 0x005484be                       ; 005484cb | LAB_005484be
        ;   XREF to: 005484be (CONDITIONAL_JUMP)
    JMP 0x005483c0                      ; 005484cd | LAB_005483c0
        ;   XREF to: 005483c0 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x680bd8]  ; 005484d2 | undefined4 DAT_00680bd8 | DAT_00680bdc = 0x0
        ;   Label: LAB_005484d2
    CMP EAX,dword ptr [ESI*0x4 + 0x680bd8] ; 005484d8 | undefined4 DAT_00680bd8
    JLE 0x005484e3                      ; 005484df | LAB_005484e3
        ;   XREF to: 005484e3 (CONDITIONAL_JUMP)
    MOV ESI,ECX                         ; 005484e1
    ADD EBX,0x4                         ; 005484e3
        ;   Label: LAB_005484e3
    INC ECX                             ; 005484e6
    ADD EDX,0x138dc                     ; 005484e7
    CMP ECX,0xc                         ; 005484ed
    JL 0x005483e5                       ; 005484f0 | LAB_005483e5
        ;   XREF to: 005483e5 (CONDITIONAL_JUMP)
    JMP 0x00548417                      ; 005484f6 | LAB_00548417
        ;   XREF to: 00548417 (UNCONDITIONAL_JUMP)

