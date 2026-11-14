; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_transferVoxelShadow_FUN_005594e0(CDemonSet *this_ptr,CDemonActor *actor)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; Local Variables:
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x3c]:1  local_3c
;
; XREF[1]:
;   core_door.cpp_CDoor_process_FUN_00477ab0 at 00477b43
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_transferShadowVoxels_FUN_0048f650
;   core_path.cpp_resetAllPathMaps_FUN_00535280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005594e0
        ;   Label: core_setcolid.cpp_CDemonSet_transferVoxelShadow_FUN_005594e0
    PUSH ESI                            ; 005594e1
    PUSH EDI                            ; 005594e2
    SUB ESP,0x48                        ; 005594e3
    MOV EBX,dword ptr [ESP + 0x5c]      ; 005594e6
    PUSH EBX                            ; 005594ea
    MOV EAX,dword ptr [EBX + 0x154]     ; 005594eb
    LEA ESI,[ESP + 0x1c]                ; 005594f1
    LEA EDI,[ESP + 0x4]                 ; 005594f5
    CALL dword ptr [EAX + 0x1c]         ; 005594f9
    MOV ECX,0x6                         ; 005594fc
    LEA ESI,[ESP + 0x1c]                ; 00559501
    ADD ESP,0x4                         ; 00559505
    MOVSD.REP ES:EDI,ESI                ; 00559508
    LEA EDX,[ESP + 0x30]                ; 0055950a
    MOV ESI,ESP                         ; 0055950e
    CMP EDX,ESI                         ; 00559510
    JNZ 0x0055955e                      ; 00559512
        ;   XREF to: 0055955e (CONDITIONAL_JUMP)  ; LAB_0055955e
    LEA EAX,[ESP + 0x3c]                ; 00559514
        ;   Label: LAB_00559514
    LEA EDX,[ESI + 0xc]                 ; 00559518
    CMP EAX,EDX                         ; 0055951b
    JZ 0x00559533                       ; 0055951d
        ;   XREF to: 00559533 (CONDITIONAL_JUMP)  ; LAB_00559533
    MOV EAX,dword ptr [EDX]             ; 0055951f
    MOV dword ptr [ESP + 0x3c],EAX      ; 00559521
    MOV EAX,dword ptr [EDX + 0x4]       ; 00559525
    MOV dword ptr [ESP + 0x40],EAX      ; 00559528
    MOV EAX,dword ptr [EDX + 0x8]       ; 0055952c
    MOV dword ptr [ESP + 0x44],EAX      ; 0055952f
    LEA EAX,[ESP + 0x3c]                ; 00559533
        ;   Label: LAB_00559533
    PUSH EAX                            ; 00559537
    LEA EAX,[ESP + 0x34]                ; 00559538
    PUSH EAX                            ; 0055953c
    LEA EAX,[EBX + 0x30]                ; 0055953d
    PUSH EAX                            ; 00559540
    ADD EBX,0x20                        ; 00559541
    PUSH EBX                            ; 00559544
    PUSH 0x1fe5c1c                      ; 00559545 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_transferShadowVoxels_FUN_0048f650 ; 0055954a
        ;   XREF to: 0048f650 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_transferShadowVoxels_FUN_0048f650(CDemonRaytrace * this_ptr, CVector3f * offset, CVector3f * rotation, CVector3f * start, ...)
    ADD ESP,0x14                        ; 0055954f
    CALL core_path.cpp_resetAllPathMaps_FUN_00535280 ; 00559552
        ;   XREF to: 00535280 (UNCONDITIONAL_CALL)  ; void core_path.cpp_resetAllPathMaps_FUN_00535280()
    ADD ESP,0x48                        ; 00559557
    POP EDI                             ; 0055955a
    POP ESI                             ; 0055955b
    POP EBX                             ; 0055955c
    RET                                 ; 0055955d
    MOV EAX,dword ptr [ESP]             ; 0055955e
        ;   Label: LAB_0055955e
    MOV dword ptr [ESP + 0x30],EAX      ; 00559561
    MOV EAX,dword ptr [ESP + 0x4]       ; 00559565
    MOV dword ptr [ESP + 0x34],EAX      ; 00559569
    MOV EAX,dword ptr [ESP + 0x8]       ; 0055956d
    MOV dword ptr [ESP + 0x38],EAX      ; 00559571
    JMP 0x00559514                      ; 00559575
        ;   XREF to: 00559514 (UNCONDITIONAL_JUMP)  ; LAB_00559514

