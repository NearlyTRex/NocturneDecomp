; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_set_cpp_CDemonSet_saveMasterLightStates_FUN_0053b6a0(CDemonSet *this_ptr,int *light_state_buffer)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   light_state_buffer
;
; XREF[1]:
;   core_game.cpp_FUN_004bda10 at 004bdbda
;
; Referenced Globals:
;   undefined4 DAT_0203a414
;   undefined4 DAT_0203a418
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053b6a0
        ;   Label: core_set.cpp_CDemonSet_saveMasterLightStates_FUN_0053b6a0
    MOV EBX,dword ptr [0x0203a414]      ; 0053b6a1 | DAT_0203a414
    MOV ECX,dword ptr [ESP + 0xc]       ; 0053b6a7
    MOV EAX,EBX                         ; 0053b6ab
    MOV dword ptr [ECX],EBX             ; 0053b6ad
    XOR EAX,EBX                         ; 0053b6af
    TEST EBX,EBX                        ; 0053b6b1
    JLE 0x0053b6d0                      ; 0053b6b3
        ;   XREF to: 0053b6d0 (CONDITIONAL_JUMP)  ; LAB_0053b6d0
    MOV EDX,ECX                         ; 0053b6b5
    MOV ECX,dword ptr [EAX*0x4 + 0x203a418] ; 0053b6b7 | DAT_0203a418
        ;   Label: LAB_0053b6b7
    ADD EDX,0x4                         ; 0053b6be
    MOV ECX,dword ptr [ECX + 0x1cb4]    ; 0053b6c1
    INC EAX                             ; 0053b6c7
    MOV dword ptr [EDX],ECX             ; 0053b6c8
    CMP EAX,EBX                         ; 0053b6ca
    JL 0x0053b6b7                       ; 0053b6cc
        ;   XREF to: 0053b6b7 (CONDITIONAL_JUMP)  ; LAB_0053b6b7
    MOV EAX,EAX                         ; 0053b6ce
    MOV dword ptr [0x0203a414],EBX      ; 0053b6d0 | DAT_0203a414
        ;   Label: LAB_0053b6d0
    POP EBX                             ; 0053b6d6
    RET                                 ; 0053b6d7

