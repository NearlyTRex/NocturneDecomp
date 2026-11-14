; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_004349d0(int param_1,undefined4 param_2)
;
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660 at 00431935
;   core_charactr.cpp_FUN_004333e0 at 00433502
;   core_charactr.cpp_FUN_004348b0 at 004349ad
;
; Called Functions:
;   core_waypoint.cpp_FUN_00579430
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004349d0
        ;   Label: core_charactr.cpp_FUN_004349d0
    MOV EDX,dword ptr [EAX + 0x27a8]    ; 004349d4
    PUSH EDX                            ; 004349da
    MOV ECX,dword ptr [ESP + 0xc]       ; 004349db
    PUSH ECX                            ; 004349df
    ADD EAX,0x20                        ; 004349e0
    PUSH EAX                            ; 004349e3
    CALL core_waypoint.cpp_FUN_00579430 ; 004349e4
        ;   XREF to: 00579430 (UNCONDITIONAL_CALL)  ; undefined core_waypoint.cpp_FUN_00579430()
    ADD ESP,0xc                         ; 004349e9
    RET                                 ; 004349ec

