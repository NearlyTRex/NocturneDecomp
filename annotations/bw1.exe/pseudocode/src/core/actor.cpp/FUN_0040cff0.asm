; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_0040cff0(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00544460 at 00546d21
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040cff0
        ;   Label: core_actor.cpp_FUN_0040cff0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040cff4
    CMP EAX,EDX                         ; 0040cff8
    JNZ 0x0040cffd                      ; 0040cffa
        ;   XREF to: 0040cffd (CONDITIONAL_JUMP)  ; LAB_0040cffd
    RET                                 ; 0040cffc
    MOV ECX,dword ptr [EDX]             ; 0040cffd
        ;   Label: LAB_0040cffd
    MOV dword ptr [EAX],ECX             ; 0040cfff
    MOV ECX,dword ptr [EDX + 0x4]       ; 0040d001
    MOV dword ptr [EAX + 0x4],ECX       ; 0040d004
    MOV ECX,dword ptr [EDX + 0x8]       ; 0040d007
    MOV dword ptr [EAX + 0x8],ECX       ; 0040d00a
    RET                                 ; 0040d00d

