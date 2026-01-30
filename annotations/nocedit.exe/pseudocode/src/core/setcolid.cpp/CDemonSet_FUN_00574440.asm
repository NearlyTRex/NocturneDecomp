; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setcolid_cpp_CDemonSet_FUN_00574440(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_barrier.cpp_CBarrier_FUN_004143e0 at 004143f6
;   core_door.cpp_CDoor_process_FUN_004800c0 at 00480403
;   core_door.cpp_CDoor_updateCollisionData_FUN_00481020 at 0048104c
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20
;   core_path.cpp_GlobalPathmapListCorruption_FUN_00548590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574440
        ;   Label: core_setcolid.cpp_CDemonSet_FUN_00574440
    SUB ESP,0x30                        ; 00574441
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00574444
    MOV EDX,ESP                         ; 00574448
    PUSH EDX                            ; 0057444a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0057444b
    PUSH EBX                            ; 00574451
    CALL dword ptr [EAX + 0x14]         ; 00574452
    MOV EDX,EAX                         ; 00574455
    MOV ECX,EAX                         ; 00574457
    LEA EAX,[ESP + 0x20]                ; 00574459
    ADD ESP,0x8                         ; 0057445d
    CMP EAX,EDX                         ; 00574460
    JNZ 0x005744ac                      ; 00574462
        ;   XREF to: 005744ac (CONDITIONAL_JUMP)  ; LAB_005744ac
    LEA EAX,[ESP + 0x24]                ; 00574464
        ;   Label: LAB_00574464
    LEA EDX,[ECX + 0xc]                 ; 00574468
    CMP EAX,EDX                         ; 0057446b
    JZ 0x00574483                       ; 0057446d
        ;   XREF to: 00574483 (CONDITIONAL_JUMP)  ; LAB_00574483
    MOV EAX,dword ptr [EDX]             ; 0057446f
    MOV dword ptr [ESP + 0x24],EAX      ; 00574471
    MOV EAX,dword ptr [EDX + 0x4]       ; 00574475
    MOV dword ptr [ESP + 0x28],EAX      ; 00574478
    MOV EAX,dword ptr [EDX + 0x8]       ; 0057447c
    MOV dword ptr [ESP + 0x2c],EAX      ; 0057447f
    LEA EAX,[ESP + 0x24]                ; 00574483
        ;   Label: LAB_00574483
    PUSH EAX                            ; 00574487
    LEA EAX,[ESP + 0x1c]                ; 00574488
    PUSH EAX                            ; 0057448c
    LEA EAX,[EBX + 0x30]                ; 0057448d
    PUSH EAX                            ; 00574490
    ADD EBX,0x20                        ; 00574491
    PUSH EBX                            ; 00574494
    PUSH 0x3277d14                      ; 00574495 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20 ; 0057449a
        ;   XREF to: 00499c20 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20(CDemonRaytrace * this_ptr, CVector3f * offset_vector, CVector3f * start_position, CVector3f * end_position, ...)
    ADD ESP,0x14                        ; 0057449f
    CALL core_path.cpp_GlobalPathmapListCorruption_FUN_00548590 ; 005744a2
        ;   XREF to: 00548590 (UNCONDITIONAL_CALL)  ; void core_path.cpp_GlobalPathmapListCorruption_FUN_00548590()
    ADD ESP,0x30                        ; 005744a7
    POP EBX                             ; 005744aa
    RET                                 ; 005744ab
    MOV EAX,dword ptr [EDX]             ; 005744ac
        ;   Label: LAB_005744ac
    MOV dword ptr [ESP + 0x18],EAX      ; 005744ae
    MOV EAX,dword ptr [EDX + 0x4]       ; 005744b2
    MOV dword ptr [ESP + 0x1c],EAX      ; 005744b5
    MOV EAX,dword ptr [EDX + 0x8]       ; 005744b9
    MOV dword ptr [ESP + 0x20],EAX      ; 005744bc
    JMP 0x00574464                      ; 005744c0
        ;   XREF to: 00574464 (UNCONDITIONAL_JUMP)  ; LAB_00574464

