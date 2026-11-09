; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_loadMasterLightStates_FUN_0053b660(CDemonSet *this_ptr,int *light_state_buffer)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   light_state_buffer
;
; XREF[1]:
;   core_game.cpp_FUN_004b7f90 at 004b8258
;
; Referenced Globals:
;   undefined4 DAT_0203a414
;   undefined4 DAT_0203a418
;   undefined4 DAT_0203a41c
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0053b660
        ;   Label: core_set.cpp_CDemonSet_loadMasterLightStates_FUN_0053b660
    MOV ESI,dword ptr [0x0203a414]      ; 0053b661 | DAT_0203a414
    MOV EDX,dword ptr [ESP + 0xc]       ; 0053b667
    MOV ECX,dword ptr [EDX]             ; 0053b66b
    CMP ESI,ECX                         ; 0053b66d
    JNZ 0x0053b691                      ; 0053b66f
        ;   XREF to: 0053b691 (CONDITIONAL_JUMP)  ; LAB_0053b691
    XOR EAX,EAX                         ; 0053b671
    TEST ECX,ECX                        ; 0053b673
    JLE 0x0053b691                      ; 0053b675
        ;   XREF to: 0053b691 (CONDITIONAL_JUMP)  ; LAB_0053b691
    PUSH EBX                            ; 0053b677
    MOV EBX,dword ptr [EAX*0x4 + 0x203a418] ; 0053b678 | DAT_0203a418 | DAT_0203a41c
        ;   Label: LAB_0053b678
    MOV ECX,dword ptr [EDX + 0x4]       ; 0053b67f
    ADD EDX,0x4                         ; 0053b682
    INC EAX                             ; 0053b685
    MOV dword ptr [EBX + 0x1cb4],ECX    ; 0053b686
    CMP EAX,ESI                         ; 0053b68c
    JL 0x0053b678                       ; 0053b68e
        ;   XREF to: 0053b678 (CONDITIONAL_JUMP)  ; LAB_0053b678
    POP EBX                             ; 0053b690
    MOV dword ptr [0x0203a414],ESI      ; 0053b691 | DAT_0203a414
        ;   Label: LAB_0053b691
    POP ESI                             ; 0053b697
    RET                                 ; 0053b698

