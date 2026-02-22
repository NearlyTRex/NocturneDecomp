; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_restoreLightState_FUN_00571130(CDemonSet *this_ptr,void *param_2)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; void *           Stack[0x8]:4   param_2
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db219
;
; Referenced Globals:
;   int g_MasterLightCount
;   CDemonLight*[96] g_MasterLightList
;   undefined4 DAT_03276db4
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00571130
        ;   Label: core_set.cpp_CDemonSet_restoreLightState_FUN_00571130
    MOV ESI,dword ptr [0x03276dac]      ; 00571131 | g_MasterLightCount
    MOV EDX,dword ptr [ESP + 0xc]       ; 00571137
    MOV ECX,dword ptr [EDX]             ; 0057113b
    CMP ESI,ECX                         ; 0057113d
    JNZ 0x00571161                      ; 0057113f
        ;   XREF to: 00571161 (CONDITIONAL_JUMP)  ; LAB_00571161
    XOR EAX,EAX                         ; 00571141
    TEST ECX,ECX                        ; 00571143
    JLE 0x00571161                      ; 00571145
        ;   XREF to: 00571161 (CONDITIONAL_JUMP)  ; LAB_00571161
    PUSH EBX                            ; 00571147
    MOV EBX,dword ptr [EAX*0x4 + 0x3276db0] ; 00571148 | g_MasterLightList | DAT_03276db4
        ;   Label: LAB_00571148
    MOV ECX,dword ptr [EDX + 0x4]       ; 0057114f
    ADD EDX,0x4                         ; 00571152
    INC EAX                             ; 00571155
    MOV dword ptr [EBX + 0x1cb4],ECX    ; 00571156
    CMP EAX,ESI                         ; 0057115c
    JL 0x00571148                       ; 0057115e
        ;   XREF to: 00571148 (CONDITIONAL_JUMP)  ; LAB_00571148
    POP EBX                             ; 00571160
    MOV dword ptr [0x03276dac],ESI      ; 00571161 | g_MasterLightCount
        ;   Label: LAB_00571161
    POP ESI                             ; 00571167
    RET                                 ; 00571168

