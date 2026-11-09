; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTrigger * __cdecl core_trigger_cpp_CTrigger_ctor_FUN_0056dfa0(CTrigger *this_ptr)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_trigger.cpp_factoryFuncTrigger_FUN_0056df70 at 0056df83
;   core_waypoint.cpp_CWayPoint_ctor_FUN_00579270 at 00579275
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0056dfa0
        ;   Label: core_trigger.cpp_CTrigger_ctor_FUN_0056dfa0
    PUSH EDI                            ; 0056dfa1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056dfa2
    PUSH EDX                            ; 0056dfa6
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 0056dfa7
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    MOV dword ptr [EAX + 0x154],0x5e58d4 ; 0056dfac
    MOV dword ptr [EAX + 0x160],0x40a00000 ; 0056dfb6
    MOV dword ptr [EAX + 0x164],0x41100000 ; 0056dfc0
    MOV dword ptr [EAX + 0x168],0x40a00000 ; 0056dfca
    MOV dword ptr [EAX + 0x170],0x0     ; 0056dfd4
    MOV dword ptr [EAX + 0x15c],0x0     ; 0056dfde
    MOV ESI,0x5d65ec                    ; 0056dfe8
    MOV byte ptr [EAX + 0x224],0x0      ; 0056dfed
    MOV EDX,EAX                         ; 0056dff4
    MOV byte ptr [EAX + 0x288],0x0      ; 0056dff6
    ADD ESP,0x4                         ; 0056dffd
    MOV dword ptr [EAX + 0x16c],0x0     ; 0056e000
    LEA EDI,[EAX + 0x178]               ; 0056e00a
    MOV dword ptr [EAX + 0x174],0x0     ; 0056e010
    PUSH EDI                            ; 0056e01a
    MOV AL,byte ptr [ESI]               ; 0056e01b
        ;   Label: LAB_0056e01b
    MOV byte ptr [EDI],AL               ; 0056e01d
    CMP AL,0x0                          ; 0056e01f
    JZ 0x0056e033                       ; 0056e021
        ;   XREF to: 0056e033 (CONDITIONAL_JUMP)  ; LAB_0056e033
    MOV AL,byte ptr [ESI + 0x1]         ; 0056e023
    ADD ESI,0x2                         ; 0056e026
    MOV byte ptr [EDI + 0x1],AL         ; 0056e029
    ADD EDI,0x2                         ; 0056e02c
    CMP AL,0x0                          ; 0056e02f
    JNZ 0x0056e01b                      ; 0056e031
        ;   XREF to: 0056e01b (CONDITIONAL_JUMP)  ; LAB_0056e01b
    POP EDI                             ; 0056e033
        ;   Label: LAB_0056e033
    MOV ESI,0x5d65f3                    ; 0056e034
    LEA EDI,[EDX + 0x1c8]               ; 0056e039
    PUSH EDI                            ; 0056e03f
    MOV AL,byte ptr [ESI]               ; 0056e040
        ;   Label: LAB_0056e040
    MOV byte ptr [EDI],AL               ; 0056e042
    CMP AL,0x0                          ; 0056e044
    JZ 0x0056e058                       ; 0056e046
        ;   XREF to: 0056e058 (CONDITIONAL_JUMP)  ; LAB_0056e058
    MOV AL,byte ptr [ESI + 0x1]         ; 0056e048
    ADD ESI,0x2                         ; 0056e04b
    MOV byte ptr [EDI + 0x1],AL         ; 0056e04e
    ADD EDI,0x2                         ; 0056e051
    CMP AL,0x0                          ; 0056e054
    JNZ 0x0056e040                      ; 0056e056
        ;   XREF to: 0056e040 (CONDITIONAL_JUMP)  ; LAB_0056e040
    POP EDI                             ; 0056e058
        ;   Label: LAB_0056e058
    MOV dword ptr [EDX + 0x218],0x0     ; 0056e059
    MOV dword ptr [EDX + 0x21c],0x3e800000 ; 0056e063
    MOV dword ptr [EDX + 0x220],0x3f800000 ; 0056e06d
    MOV dword ptr [EDX + 0x2ec],0x0     ; 0056e077
    MOV dword ptr [EDX + 0x2f0],0x0     ; 0056e081
    MOV dword ptr [EDX + 0x2f4],0x1     ; 0056e08b
    MOV dword ptr [EDX + 0x2f8],0x42c80000 ; 0056e095
    MOV dword ptr [EDX + 0x64],0x96     ; 0056e09f
    MOV dword ptr [EDX + 0x36c],0x0     ; 0056e0a6
    MOV dword ptr [EDX + 0x300],0x0     ; 0056e0b0
    MOV dword ptr [EDX + 0x158],0x47c34ff3 ; 0056e0ba
    MOV dword ptr [EDX + 0x304],0x1     ; 0056e0c4
    MOV byte ptr [EDX + 0x308],0x0      ; 0056e0ce
    MOV dword ptr [EDX + 0x370],0x0     ; 0056e0d5
    MOV EAX,EDX                         ; 0056e0df
    MOV dword ptr [EDX + 0x2fc],EDX     ; 0056e0e1
    POP EDI                             ; 0056e0e7
    POP ESI                             ; 0056e0e8
    RET                                 ; 0056e0e9

