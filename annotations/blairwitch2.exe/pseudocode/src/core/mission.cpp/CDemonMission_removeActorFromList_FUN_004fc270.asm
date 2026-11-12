; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_removeActorFromList_FUN_004fc270(CDemonMission *this_ptr,CDemonActor *actor_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor_ptr
;
; XREF[4]:
;   core_inv.cpp_CInventory_loadItems_FUN_004dc810 at 004dc832
;   core_inv.cpp_FUN_004dadb0 at 004db3ed
;   core_mission.cpp_CDemonMission_removeActor_FUN_004fc570 at 004fc581
;   core_mission.cpp_CDemonMission_run_FUN_004fcb00 at 004fcb94
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc270
        ;   Label: core_mission.cpp_CDemonMission_removeActorFromList_FUN_004fc270
    MOV ECX,dword ptr [ESP + 0x8]       ; 004fc271
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fc275
    TEST EDX,EDX                        ; 004fc279
    JZ 0x004fc2c5                       ; 004fc27b
        ;   XREF to: 004fc2c5 (CONDITIONAL_JUMP)  ; LAB_004fc2c5
    MOV EAX,dword ptr [ECX + 0x1114]    ; 004fc27d
    XOR EBX,EBX                         ; 004fc283
    TEST EAX,EAX                        ; 004fc285
    JZ 0x004fc2d1                       ; 004fc287
        ;   XREF to: 004fc2d1 (CONDITIONAL_JUMP)  ; LAB_004fc2d1
    CMP EAX,EDX                         ; 004fc289
        ;   Label: LAB_004fc289
    JNZ 0x004fc2c7                      ; 004fc28b
        ;   XREF to: 004fc2c7 (CONDITIONAL_JUMP)  ; LAB_004fc2c7
    PUSH EDI                            ; 004fc28d
        ;   Label: LAB_004fc28d
    PUSH ESI                            ; 004fc28e
    MOV EBX,dword ptr [EDX + 0x150]     ; 004fc28f
    TEST EBX,EBX                        ; 004fc295
    JNZ 0x004fc2e5                      ; 004fc297
        ;   XREF to: 004fc2e5 (CONDITIONAL_JUMP)  ; LAB_004fc2e5
    MOV EDI,dword ptr [EDX + 0x14c]     ; 004fc299
    TEST EDI,EDI                        ; 004fc29f
    JNZ 0x004fc2d7                      ; 004fc2a1
        ;   XREF to: 004fc2d7 (CONDITIONAL_JUMP)  ; LAB_004fc2d7
    MOV dword ptr [ECX + 0x1114],EBX    ; 004fc2a3
    MOV dword ptr [ECX + 0x1118],EBX    ; 004fc2a9
    MOV dword ptr [EDX + 0x14c],0x0     ; 004fc2af
        ;   Label: LAB_004fc2af
    MOV dword ptr [EDX + 0x150],0x0     ; 004fc2b9
    POP ESI                             ; 004fc2c3
    POP EDI                             ; 004fc2c4
    POP EBX                             ; 004fc2c5
        ;   Label: LAB_004fc2c5
    RET                                 ; 004fc2c6
    MOV EAX,dword ptr [EAX + 0x14c]     ; 004fc2c7
        ;   Label: LAB_004fc2c7
    TEST EAX,EAX                        ; 004fc2cd
    JNZ 0x004fc289                      ; 004fc2cf
        ;   XREF to: 004fc289 (CONDITIONAL_JUMP)  ; LAB_004fc289
    TEST EBX,EBX                        ; 004fc2d1
        ;   Label: LAB_004fc2d1
    JNZ 0x004fc28d                      ; 004fc2d3
        ;   XREF to: 004fc28d (CONDITIONAL_JUMP)  ; LAB_004fc28d
    POP EBX                             ; 004fc2d5
    RET                                 ; 004fc2d6
    MOV dword ptr [ECX + 0x1114],EDI    ; 004fc2d7
        ;   Label: LAB_004fc2d7
    MOV dword ptr [EDI + 0x150],EBX     ; 004fc2dd
    JMP 0x004fc2af                      ; 004fc2e3
        ;   XREF to: 004fc2af (UNCONDITIONAL_JUMP)  ; LAB_004fc2af
    MOV ESI,dword ptr [EDX + 0x14c]     ; 004fc2e5
        ;   Label: LAB_004fc2e5
    TEST ESI,ESI                        ; 004fc2eb
    JNZ 0x004fc2fd                      ; 004fc2ed
        ;   XREF to: 004fc2fd (CONDITIONAL_JUMP)  ; LAB_004fc2fd
    MOV dword ptr [ECX + 0x1118],EBX    ; 004fc2ef
    MOV dword ptr [EBX + 0x14c],ESI     ; 004fc2f5
    JMP 0x004fc2af                      ; 004fc2fb
        ;   XREF to: 004fc2af (UNCONDITIONAL_JUMP)  ; LAB_004fc2af
    MOV dword ptr [EBX + 0x14c],ESI     ; 004fc2fd
        ;   Label: LAB_004fc2fd
    MOV EAX,dword ptr [EDX + 0x150]     ; 004fc303
    MOV dword ptr [ESI + 0x150],EAX     ; 004fc309
    JMP 0x004fc2af                      ; 004fc30f
        ;   XREF to: 004fc2af (UNCONDITIONAL_JUMP)  ; LAB_004fc2af

