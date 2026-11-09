; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_loadMasterLightStates_FUN_00534990(CDemonSet *this_ptr,int *light_state_buffer)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   light_state_buffer
;
; XREF[1]:
;   core_game.cpp_FUN_004b6170 at 004b643f
;
; Referenced Globals:
;   undefined4 DAT_01fc8d00
;   undefined4 DAT_01fc8d04
;   undefined4 DAT_01fc8d08
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00534990
        ;   Label: core_set.cpp_CDemonSet_loadMasterLightStates_FUN_00534990
    MOV ESI,dword ptr [0x01fc8d00]      ; 00534991 | DAT_01fc8d00
    MOV EDX,dword ptr [ESP + 0xc]       ; 00534997
    MOV ECX,dword ptr [EDX]             ; 0053499b
    CMP ESI,ECX                         ; 0053499d
    JNZ 0x005349c1                      ; 0053499f
        ;   XREF to: 005349c1 (CONDITIONAL_JUMP)  ; LAB_005349c1
    XOR EAX,EAX                         ; 005349a1
    TEST ECX,ECX                        ; 005349a3
    JLE 0x005349c1                      ; 005349a5
        ;   XREF to: 005349c1 (CONDITIONAL_JUMP)  ; LAB_005349c1
    PUSH EBX                            ; 005349a7
    MOV EBX,dword ptr [EAX*0x4 + 0x1fc8d04] ; 005349a8 | DAT_01fc8d04 | DAT_01fc8d08
        ;   Label: LAB_005349a8
    MOV ECX,dword ptr [EDX + 0x4]       ; 005349af
    ADD EDX,0x4                         ; 005349b2
    INC EAX                             ; 005349b5
    MOV dword ptr [EBX + 0x1cb4],ECX    ; 005349b6
    CMP EAX,ESI                         ; 005349bc
    JL 0x005349a8                       ; 005349be
        ;   XREF to: 005349a8 (CONDITIONAL_JUMP)  ; LAB_005349a8
    POP EBX                             ; 005349c0
    MOV dword ptr [0x01fc8d00],ESI      ; 005349c1 | DAT_01fc8d00
        ;   Label: LAB_005349c1
    POP ESI                             ; 005349c7
    RET                                 ; 005349c8

