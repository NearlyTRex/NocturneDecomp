; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_0040d350(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00522350 at 00524e6c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040d350
        ;   Label: core_actor.cpp_FUN_0040d350
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040d354
    CMP EAX,EDX                         ; 0040d358
    JNZ 0x0040d35d                      ; 0040d35a
        ;   XREF to: 0040d35d (CONDITIONAL_JUMP)  ; LAB_0040d35d
    RET                                 ; 0040d35c
    MOV ECX,dword ptr [EDX]             ; 0040d35d
        ;   Label: LAB_0040d35d
    MOV dword ptr [EAX],ECX             ; 0040d35f
    MOV ECX,dword ptr [EDX + 0x4]       ; 0040d361
    MOV dword ptr [EAX + 0x4],ECX       ; 0040d364
    MOV ECX,dword ptr [EDX + 0x8]       ; 0040d367
    MOV dword ptr [EAX + 0x8],ECX       ; 0040d36a
    RET                                 ; 0040d36d

