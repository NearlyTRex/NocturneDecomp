; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_set_cpp_CDemonSet_saveMasterLightStates_FUN_00571170(CDemonSet *this_ptr,int *light_state_buffer)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   light_state_buffer
;
; XREF[1]:
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0 at 004e0e99
;
; Referenced Globals:
;   int g_MasterLightCount
;   CDemonLight*[96] g_MasterLightList
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571170
        ;   Label: core_set.cpp_CDemonSet_saveMasterLightStates_FUN_00571170
    MOV EBX,dword ptr [0x03276dac]      ; 00571171 | g_MasterLightCount
    MOV ECX,dword ptr [ESP + 0xc]       ; 00571177
    MOV EAX,EBX                         ; 0057117b
    MOV dword ptr [ECX],EBX             ; 0057117d
    XOR EAX,EBX                         ; 0057117f
    TEST EBX,EBX                        ; 00571181
    JLE 0x005711a0                      ; 00571183
        ;   XREF to: 005711a0 (CONDITIONAL_JUMP)  ; LAB_005711a0
    MOV EDX,ECX                         ; 00571185
    MOV ECX,dword ptr [EAX*0x4 + 0x3276db0] ; 00571187 | g_MasterLightList
        ;   Label: LAB_00571187
    ADD EDX,0x4                         ; 0057118e
    MOV ECX,dword ptr [ECX + 0x1cb4]    ; 00571191
    INC EAX                             ; 00571197
    MOV dword ptr [EDX],ECX             ; 00571198
    CMP EAX,EBX                         ; 0057119a
    JL 0x00571187                       ; 0057119c
        ;   XREF to: 00571187 (CONDITIONAL_JUMP)  ; LAB_00571187
    MOV EAX,EAX                         ; 0057119e
    MOV dword ptr [0x03276dac],EBX      ; 005711a0 | g_MasterLightCount
        ;   Label: LAB_005711a0
    POP EBX                             ; 005711a6
    RET                                 ; 005711a7

