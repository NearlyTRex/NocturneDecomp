; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_stranger.cpp_FUN_005bafa0()
;
;
; Referenced Globals:
;   void* switchdataD_005baf70 = 005bafba
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005bafa0
        ;   Label: core_stranger.cpp_FUN_005bafa0
    TEST EAX,EAX                        ; 005bafa4
    JZ 0x005baf3d                       ; 005bafa6 | caseD_8
        ;   XREF to: 005baf3d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EAX + 0x2e0]     ; 005bafa8
    CMP EAX,0x8                         ; 005bafae
    JA 0x005baf3d                       ; 005bafb1 | caseD_8
        ;   XREF to: 005baf3d (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x5baf70]  ; 005bafb3 | void * switchdataD_005baf70
        ;   Label: switchD

