; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_reset_FUN_004afdb0(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_game.cpp_FUN_004a4170 at 004a4aa5
;   core_gore.cpp_CGore_ctor_FUN_004afd80 at 004afd86
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004d7fe0 at 004d84b2
;
; Referenced Globals:
;   undefined4 DAT_01c78ce8
;   undefined4 DAT_01c78d04
;   undefined4 DAT_01c78d44
;   undefined4 DAT_01c7ccec
;   undefined4 DAT_01c7ccf0
;   undefined4 DAT_01c9e034
;   undefined4 DAT_01c9e038
;   undefined4 DAT_01c9e53c
;   undefined4 DAT_01c9e540
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004afdb0
        ;   Label: core_gore.cpp_CGore_reset_FUN_004afdb0
    XOR EDX,EDX                         ; 004afdb1
    MOV EAX,0x1c78cec                   ; 004afdb3
    MOV dword ptr [0x01c78ce8],EDX      ; 004afdb8 | DAT_01c78ce8
    MOV dword ptr [0x01c7ccec],EDX      ; 004afdbe | DAT_01c7ccec
    MOV dword ptr [0x01c7ccf0],EDX      ; 004afdc4 | DAT_01c7ccf0
    MOV dword ptr [0x01c9e034],EDX      ; 004afdca | DAT_01c9e034
    MOV dword ptr [0x01c9e038],EDX      ; 004afdd0 | DAT_01c9e038
    LEA EDX,[EAX + 0x4000]              ; 004afdd6
    ADD EAX,0x40                        ; 004afddc
        ;   Label: LAB_004afddc
    MOV dword ptr [EAX + -0x28],0x0     ; 004afddf | DAT_01c78d04 | DAT_01c78d44
    CMP EAX,EDX                         ; 004afde6
    JNZ 0x004afddc                      ; 004afde8
        ;   XREF to: 004afddc (CONDITIONAL_JUMP)  ; LAB_004afddc
    XOR EAX,EDX                         ; 004afdea
    XOR EBP,EBP                         ; 004afdec
    MOV [0x01c9e540],EAX                ; 004afdee | DAT_01c9e540
    MOV dword ptr [0x01c9e53c],EBP      ; 004afdf3 | DAT_01c9e53c
    POP EBP                             ; 004afdf9
    RET                                 ; 004afdfa

