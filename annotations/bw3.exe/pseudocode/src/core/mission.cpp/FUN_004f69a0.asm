; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mission_cpp_FUN_004f69a0(int param_1,int param_2)
;
;
; XREF[4]:
;   core_inv.cpp_CInventory_loadItems_FUN_004dca90 at 004dcab2
;   core_inv.cpp_FUN_004da880 at 004db5ff
;   core_mission.cpp_CDemonMission_removeActor_FUN_004f6ca0 at 004f6cb1
;   core_mission.cpp_CDemonMission_run_FUN_004f72a0 at 004f7330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f69a0
        ;   Label: core_mission.cpp_FUN_004f69a0
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f69a1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f69a5
    TEST EDX,EDX                        ; 004f69a9
    JZ 0x004f69f5                       ; 004f69ab
        ;   XREF to: 004f69f5 (CONDITIONAL_JUMP)  ; LAB_004f69f5
    MOV EAX,dword ptr [ECX + 0x143c]    ; 004f69ad
    XOR EBX,EBX                         ; 004f69b3
    TEST EAX,EAX                        ; 004f69b5
    JZ 0x004f6a01                       ; 004f69b7
        ;   XREF to: 004f6a01 (CONDITIONAL_JUMP)  ; LAB_004f6a01
    CMP EAX,EDX                         ; 004f69b9
        ;   Label: LAB_004f69b9
    JNZ 0x004f69f7                      ; 004f69bb
        ;   XREF to: 004f69f7 (CONDITIONAL_JUMP)  ; LAB_004f69f7
    PUSH EDI                            ; 004f69bd
        ;   Label: LAB_004f69bd
    PUSH ESI                            ; 004f69be
    MOV EBX,dword ptr [EDX + 0x150]     ; 004f69bf
    TEST EBX,EBX                        ; 004f69c5
    JNZ 0x004f6a15                      ; 004f69c7
        ;   XREF to: 004f6a15 (CONDITIONAL_JUMP)  ; LAB_004f6a15
    MOV EDI,dword ptr [EDX + 0x14c]     ; 004f69c9
    TEST EDI,EDI                        ; 004f69cf
    JNZ 0x004f6a07                      ; 004f69d1
        ;   XREF to: 004f6a07 (CONDITIONAL_JUMP)  ; LAB_004f6a07
    MOV dword ptr [ECX + 0x143c],EBX    ; 004f69d3
    MOV dword ptr [ECX + 0x1440],EBX    ; 004f69d9
    MOV dword ptr [EDX + 0x14c],0x0     ; 004f69df
        ;   Label: LAB_004f69df
    MOV dword ptr [EDX + 0x150],0x0     ; 004f69e9
    POP ESI                             ; 004f69f3
    POP EDI                             ; 004f69f4
    POP EBX                             ; 004f69f5
        ;   Label: LAB_004f69f5
    RET                                 ; 004f69f6
    MOV EAX,dword ptr [EAX + 0x14c]     ; 004f69f7
        ;   Label: LAB_004f69f7
    TEST EAX,EAX                        ; 004f69fd
    JNZ 0x004f69b9                      ; 004f69ff
        ;   XREF to: 004f69b9 (CONDITIONAL_JUMP)  ; LAB_004f69b9
    TEST EBX,EBX                        ; 004f6a01
        ;   Label: LAB_004f6a01
    JNZ 0x004f69bd                      ; 004f6a03
        ;   XREF to: 004f69bd (CONDITIONAL_JUMP)  ; LAB_004f69bd
    POP EBX                             ; 004f6a05
    RET                                 ; 004f6a06
    MOV dword ptr [ECX + 0x143c],EDI    ; 004f6a07
        ;   Label: LAB_004f6a07
    MOV dword ptr [EDI + 0x150],EBX     ; 004f6a0d
    JMP 0x004f69df                      ; 004f6a13
        ;   XREF to: 004f69df (UNCONDITIONAL_JUMP)  ; LAB_004f69df
    MOV ESI,dword ptr [EDX + 0x14c]     ; 004f6a15
        ;   Label: LAB_004f6a15
    TEST ESI,ESI                        ; 004f6a1b
    JNZ 0x004f6a2d                      ; 004f6a1d
        ;   XREF to: 004f6a2d (CONDITIONAL_JUMP)  ; LAB_004f6a2d
    MOV dword ptr [ECX + 0x1440],EBX    ; 004f6a1f
    MOV dword ptr [EBX + 0x14c],ESI     ; 004f6a25
    JMP 0x004f69df                      ; 004f6a2b
        ;   XREF to: 004f69df (UNCONDITIONAL_JUMP)  ; LAB_004f69df
    MOV dword ptr [EBX + 0x14c],ESI     ; 004f6a2d
        ;   Label: LAB_004f6a2d
    MOV EAX,dword ptr [EDX + 0x150]     ; 004f6a33
    MOV dword ptr [ESI + 0x150],EAX     ; 004f6a39
    JMP 0x004f69df                      ; 004f6a3f
        ;   XREF to: 004f69df (UNCONDITIONAL_JUMP)  ; LAB_004f69df

