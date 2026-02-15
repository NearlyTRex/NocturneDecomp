; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_FUN_005744d0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_door.cpp_CDoor_process_FUN_004800c0 at 00480164
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest2_FUN_00499f10
;   core_path.cpp_FUN_00548590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005744d0
        ;   Label: core_setcolid.cpp_CDemonSet_FUN_005744d0
    SUB ESP,0x30                        ; 005744d1
    MOV EBX,dword ptr [ESP + 0x3c]      ; 005744d4
    MOV EDX,ESP                         ; 005744d8
    PUSH EDX                            ; 005744da
    MOV EAX,dword ptr [EBX + 0x154]     ; 005744db
    PUSH EBX                            ; 005744e1
    CALL dword ptr [EAX + 0x14]         ; 005744e2
    MOV EDX,EAX                         ; 005744e5
    MOV ECX,EAX                         ; 005744e7
    LEA EAX,[ESP + 0x20]                ; 005744e9
    ADD ESP,0x8                         ; 005744ed
    CMP EAX,EDX                         ; 005744f0
    JNZ 0x0057453c                      ; 005744f2
        ;   XREF to: 0057453c (CONDITIONAL_JUMP)  ; LAB_0057453c
    LEA EAX,[ESP + 0x24]                ; 005744f4
        ;   Label: LAB_005744f4
    LEA EDX,[ECX + 0xc]                 ; 005744f8
    CMP EAX,EDX                         ; 005744fb
    JZ 0x00574513                       ; 005744fd
        ;   XREF to: 00574513 (CONDITIONAL_JUMP)  ; LAB_00574513
    MOV EAX,dword ptr [EDX]             ; 005744ff
    MOV dword ptr [ESP + 0x24],EAX      ; 00574501
    MOV EAX,dword ptr [EDX + 0x4]       ; 00574505
    MOV dword ptr [ESP + 0x28],EAX      ; 00574508
    MOV EAX,dword ptr [EDX + 0x8]       ; 0057450c
    MOV dword ptr [ESP + 0x2c],EAX      ; 0057450f
    LEA EAX,[ESP + 0x24]                ; 00574513
        ;   Label: LAB_00574513
    PUSH EAX                            ; 00574517
    LEA EAX,[ESP + 0x1c]                ; 00574518
    PUSH EAX                            ; 0057451c
    LEA EAX,[EBX + 0x30]                ; 0057451d
    PUSH EAX                            ; 00574520
    ADD EBX,0x20                        ; 00574521
    PUSH EBX                            ; 00574524
    PUSH 0x3277d14                      ; 00574525 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest2_FUN_00499f10 ; 0057452a
        ;   XREF to: 00499f10 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest2_FUN_00499f10(CDemonRaytrace * this_ptr, CVector3f * offset_vector, void * light_data, CVector3f * start_position, ...)
    ADD ESP,0x14                        ; 0057452f
    CALL core_path.cpp_FUN_00548590     ; 00574532
        ;   XREF to: 00548590 (UNCONDITIONAL_CALL)  ; void core_path.cpp_FUN_00548590()
    ADD ESP,0x30                        ; 00574537
    POP EBX                             ; 0057453a
    RET                                 ; 0057453b
    MOV EAX,dword ptr [EDX]             ; 0057453c
        ;   Label: LAB_0057453c
    MOV dword ptr [ESP + 0x18],EAX      ; 0057453e
    MOV EAX,dword ptr [EDX + 0x4]       ; 00574542
    MOV dword ptr [ESP + 0x1c],EAX      ; 00574545
    MOV EAX,dword ptr [EDX + 0x8]       ; 00574549
    MOV dword ptr [ESP + 0x20],EAX      ; 0057454c
    JMP 0x005744f4                      ; 00574550
        ;   XREF to: 005744f4 (UNCONDITIONAL_JUMP)  ; LAB_005744f4

