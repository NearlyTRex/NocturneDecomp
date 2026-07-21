; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d8cd0(int param_1,int param_2)
;
;
; XREF[4]:
;   core_inv.cpp_CInventory_addItem_FUN_004bf360 at 004c02a2
;   core_inv.cpp_CInventory_loadItems_FUN_004c14d0 at 004c14f2
;   core_mission.cpp_CDemonMission_removeActor_FUN_004d8f90 at 004d8fa1
;   core_mission.cpp_CDemonMission_run_FUN_004d9440 at 004d94d4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8cd0
        ;   Label: FUN_004d8cd0
    MOV ECX,dword ptr [ESP + 0x8]       ; 004d8cd1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d8cd5
    TEST EDX,EDX                        ; 004d8cd9
    JZ 0x004d8d25                       ; 004d8cdb
        ;   XREF to: 004d8d25 (CONDITIONAL_JUMP)  ; LAB_004d8d25
    MOV EAX,dword ptr [ECX + 0x514]     ; 004d8cdd
    XOR EBX,EBX                         ; 004d8ce3
    TEST EAX,EAX                        ; 004d8ce5
    JZ 0x004d8d31                       ; 004d8ce7
        ;   XREF to: 004d8d31 (CONDITIONAL_JUMP)  ; LAB_004d8d31
    CMP EAX,EDX                         ; 004d8ce9
        ;   Label: LAB_004d8ce9
    JNZ 0x004d8d27                      ; 004d8ceb
        ;   XREF to: 004d8d27 (CONDITIONAL_JUMP)  ; LAB_004d8d27
    PUSH EDI                            ; 004d8ced
        ;   Label: LAB_004d8ced
    PUSH ESI                            ; 004d8cee
    MOV EBX,dword ptr [EDX + 0x148]     ; 004d8cef
    TEST EBX,EBX                        ; 004d8cf5
    JNZ 0x004d8d45                      ; 004d8cf7
        ;   XREF to: 004d8d45 (CONDITIONAL_JUMP)  ; LAB_004d8d45
    MOV EDI,dword ptr [EDX + 0x144]     ; 004d8cf9
    TEST EDI,EDI                        ; 004d8cff
    JNZ 0x004d8d37                      ; 004d8d01
        ;   XREF to: 004d8d37 (CONDITIONAL_JUMP)  ; LAB_004d8d37
    MOV dword ptr [ECX + 0x514],EBX     ; 004d8d03
    MOV dword ptr [ECX + 0x518],EBX     ; 004d8d09
    MOV dword ptr [EDX + 0x144],0x0     ; 004d8d0f
        ;   Label: LAB_004d8d0f
    MOV dword ptr [EDX + 0x148],0x0     ; 004d8d19
    POP ESI                             ; 004d8d23
    POP EDI                             ; 004d8d24
    POP EBX                             ; 004d8d25
        ;   Label: LAB_004d8d25
    RET                                 ; 004d8d26
    MOV EAX,dword ptr [EAX + 0x144]     ; 004d8d27
        ;   Label: LAB_004d8d27
    TEST EAX,EAX                        ; 004d8d2d
    JNZ 0x004d8ce9                      ; 004d8d2f
        ;   XREF to: 004d8ce9 (CONDITIONAL_JUMP)  ; LAB_004d8ce9
    TEST EBX,EBX                        ; 004d8d31
        ;   Label: LAB_004d8d31
    JNZ 0x004d8ced                      ; 004d8d33
        ;   XREF to: 004d8ced (CONDITIONAL_JUMP)  ; LAB_004d8ced
    POP EBX                             ; 004d8d35
    RET                                 ; 004d8d36
    MOV dword ptr [ECX + 0x514],EDI     ; 004d8d37
        ;   Label: LAB_004d8d37
    MOV dword ptr [EDI + 0x148],EBX     ; 004d8d3d
    JMP 0x004d8d0f                      ; 004d8d43
        ;   XREF to: 004d8d0f (UNCONDITIONAL_JUMP)  ; LAB_004d8d0f
    MOV ESI,dword ptr [EDX + 0x144]     ; 004d8d45
        ;   Label: LAB_004d8d45
    TEST ESI,ESI                        ; 004d8d4b
    JNZ 0x004d8d5d                      ; 004d8d4d
        ;   XREF to: 004d8d5d (CONDITIONAL_JUMP)  ; LAB_004d8d5d
    MOV dword ptr [ECX + 0x518],EBX     ; 004d8d4f
    MOV dword ptr [EBX + 0x144],ESI     ; 004d8d55
    JMP 0x004d8d0f                      ; 004d8d5b
        ;   XREF to: 004d8d0f (UNCONDITIONAL_JUMP)  ; LAB_004d8d0f
    MOV dword ptr [EBX + 0x144],ESI     ; 004d8d5d
        ;   Label: LAB_004d8d5d
    MOV EAX,dword ptr [EDX + 0x148]     ; 004d8d63
    MOV dword ptr [ESI + 0x148],EAX     ; 004d8d69
    JMP 0x004d8d0f                      ; 004d8d6f
        ;   XREF to: 004d8d0f (UNCONDITIONAL_JUMP)  ; LAB_004d8d0f

