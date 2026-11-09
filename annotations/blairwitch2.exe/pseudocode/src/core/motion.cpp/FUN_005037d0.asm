; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_motion_cpp_FUN_005037d0(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0 at 005474d8
;
; Called Functions:
;   core_motion.cpp_FUN_00502f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005037d0
        ;   Label: core_motion.cpp_FUN_005037d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005037d1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005037d5
    MOV dword ptr [EBX],EAX             ; 005037d9
    CMP byte ptr [EBX + 0x30],0x0       ; 005037db
    JNZ 0x005037e3                      ; 005037df
        ;   XREF to: 005037e3 (CONDITIONAL_JUMP)  ; LAB_005037e3
    POP EBX                             ; 005037e1
    RET                                 ; 005037e2
    PUSH 0x0                            ; 005037e3
        ;   Label: LAB_005037e3
    LEA EAX,[EBX + 0x30]                ; 005037e5
    PUSH EAX                            ; 005037e8
    MOV EDX,dword ptr [EBX]             ; 005037e9
    PUSH EDX                            ; 005037eb
    CALL core_motion.cpp_FUN_00502f10   ; 005037ec
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_00502f10(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 005037f1
    MOV dword ptr [EBX + 0x4],EAX       ; 005037f4
    TEST EAX,EAX                        ; 005037f7
    JL 0x00503801                       ; 005037f9
        ;   XREF to: 00503801 (CONDITIONAL_JUMP)  ; LAB_00503801
    MOV byte ptr [EBX + 0x30],0x0       ; 005037fb
    POP EBX                             ; 005037ff
    RET                                 ; 00503800
    MOV dword ptr [EBX + 0x4],0x0       ; 00503801
        ;   Label: LAB_00503801
    MOV byte ptr [EBX + 0x30],0x0       ; 00503808
    POP EBX                             ; 0050380c
    RET                                 ; 0050380d

