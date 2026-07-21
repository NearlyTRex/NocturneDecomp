; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_loadMasterLightStates_FUN_0050e820(undefined4 param_1,int *param_2)
;
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049dca9
;
; Referenced Globals:
;   undefined4 DAT_01fb99d0
;   undefined4 DAT_01fb99d4
;   undefined4 DAT_01fb99d8
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0050e820
        ;   Label: core_set.cpp_CDemonSet_loadMasterLightStates_FUN_0050e820
    MOV ESI,dword ptr [0x01fb99d0]      ; 0050e821 | DAT_01fb99d0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050e827
    MOV ECX,dword ptr [EDX]             ; 0050e82b
    CMP ESI,ECX                         ; 0050e82d
    JNZ 0x0050e851                      ; 0050e82f
        ;   XREF to: 0050e851 (CONDITIONAL_JUMP)  ; LAB_0050e851
    XOR EAX,EAX                         ; 0050e831
    TEST ECX,ECX                        ; 0050e833
    JLE 0x0050e851                      ; 0050e835
        ;   XREF to: 0050e851 (CONDITIONAL_JUMP)  ; LAB_0050e851
    PUSH EBX                            ; 0050e837
    MOV EBX,dword ptr [EAX*0x4 + 0x1fb99d4] ; 0050e838 | DAT_01fb99d4 | DAT_01fb99d8
        ;   Label: LAB_0050e838
    MOV ECX,dword ptr [EDX + 0x4]       ; 0050e83f
    ADD EDX,0x4                         ; 0050e842
    INC EAX                             ; 0050e845
    MOV dword ptr [EBX + 0x1cb4],ECX    ; 0050e846
    CMP EAX,ESI                         ; 0050e84c
    JL 0x0050e838                       ; 0050e84e
        ;   XREF to: 0050e838 (CONDITIONAL_JUMP)  ; LAB_0050e838
    POP EBX                             ; 0050e850
    MOV dword ptr [0x01fb99d0],ESI      ; 0050e851 | DAT_01fb99d0
        ;   Label: LAB_0050e851
    POP ESI                             ; 0050e857
    RET                                 ; 0050e858

