; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_set_cpp_CDemonSet_saveMasterLightStates_FUN_00555ce0(CDemonSet *this_ptr,int *light_state_buffer)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   light_state_buffer
;
; XREF[1]:
;   core_game.cpp_FUN_004d6420 at 004d65ea
;
; Referenced Globals:
;   undefined4 DAT_01fe4cb4
;   undefined4 DAT_01fe4cb8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555ce0
        ;   Label: core_set.cpp_CDemonSet_saveMasterLightStates_FUN_00555ce0
    MOV EBX,dword ptr [0x01fe4cb4]      ; 00555ce1 | DAT_01fe4cb4
    MOV ECX,dword ptr [ESP + 0xc]       ; 00555ce7
    MOV EAX,EBX                         ; 00555ceb
    MOV dword ptr [ECX],EBX             ; 00555ced
    XOR EAX,EBX                         ; 00555cef
    TEST EBX,EBX                        ; 00555cf1
    JLE 0x00555d10                      ; 00555cf3
        ;   XREF to: 00555d10 (CONDITIONAL_JUMP)  ; LAB_00555d10
    MOV EDX,ECX                         ; 00555cf5
    MOV ECX,dword ptr [EAX*0x4 + 0x1fe4cb8] ; 00555cf7 | DAT_01fe4cb8
        ;   Label: LAB_00555cf7
    ADD EDX,0x4                         ; 00555cfe
    MOV ECX,dword ptr [ECX + 0x1cb4]    ; 00555d01
    INC EAX                             ; 00555d07
    MOV dword ptr [EDX],ECX             ; 00555d08
    CMP EAX,EBX                         ; 00555d0a
    JL 0x00555cf7                       ; 00555d0c
        ;   XREF to: 00555cf7 (CONDITIONAL_JUMP)  ; LAB_00555cf7
    MOV EAX,EAX                         ; 00555d0e
    MOV dword ptr [0x01fe4cb4],EBX      ; 00555d10 | DAT_01fe4cb4
        ;   Label: LAB_00555d10
    POP EBX                             ; 00555d16
    RET                                 ; 00555d17

