; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_loadMasterLightStates_FUN_00555ca0(CDemonSet *this_ptr,int *light_state_buffer)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   light_state_buffer
;
; XREF[1]:
;   core_game.cpp_FUN_004cf5e0 at 004cf8a8
;
; Referenced Globals:
;   undefined4 DAT_01fe4cb4
;   undefined4 DAT_01fe4cb8
;   undefined4 DAT_01fe4cbc
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00555ca0
        ;   Label: core_set.cpp_CDemonSet_loadMasterLightStates_FUN_00555ca0
    MOV ESI,dword ptr [0x01fe4cb4]      ; 00555ca1 | DAT_01fe4cb4
    MOV EDX,dword ptr [ESP + 0xc]       ; 00555ca7
    MOV ECX,dword ptr [EDX]             ; 00555cab
    CMP ESI,ECX                         ; 00555cad
    JNZ 0x00555cd1                      ; 00555caf
        ;   XREF to: 00555cd1 (CONDITIONAL_JUMP)  ; LAB_00555cd1
    XOR EAX,EAX                         ; 00555cb1
    TEST ECX,ECX                        ; 00555cb3
    JLE 0x00555cd1                      ; 00555cb5
        ;   XREF to: 00555cd1 (CONDITIONAL_JUMP)  ; LAB_00555cd1
    PUSH EBX                            ; 00555cb7
    MOV EBX,dword ptr [EAX*0x4 + 0x1fe4cb8] ; 00555cb8 | DAT_01fe4cb8 | DAT_01fe4cbc
        ;   Label: LAB_00555cb8
    MOV ECX,dword ptr [EDX + 0x4]       ; 00555cbf
    ADD EDX,0x4                         ; 00555cc2
    INC EAX                             ; 00555cc5
    MOV dword ptr [EBX + 0x1cb4],ECX    ; 00555cc6
    CMP EAX,ESI                         ; 00555ccc
    JL 0x00555cb8                       ; 00555cce
        ;   XREF to: 00555cb8 (CONDITIONAL_JUMP)  ; LAB_00555cb8
    POP EBX                             ; 00555cd0
    MOV dword ptr [0x01fe4cb4],ESI      ; 00555cd1 | DAT_01fe4cb4
        ;   Label: LAB_00555cd1
    POP ESI                             ; 00555cd7
    RET                                 ; 00555cd8

