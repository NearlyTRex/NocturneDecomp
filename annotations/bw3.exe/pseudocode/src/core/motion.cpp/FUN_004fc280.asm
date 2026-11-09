; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_motion_cpp_FUN_004fc280(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0054e6e0 at 0054e708
;
; Called Functions:
;   core_motion.cpp_FUN_004fb9c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc280
        ;   Label: core_motion.cpp_FUN_004fc280
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fc281
    MOV EAX,dword ptr [ESP + 0xc]       ; 004fc285
    MOV dword ptr [EBX],EAX             ; 004fc289
    CMP byte ptr [EBX + 0x30],0x0       ; 004fc28b
    JNZ 0x004fc293                      ; 004fc28f
        ;   XREF to: 004fc293 (CONDITIONAL_JUMP)  ; LAB_004fc293
    POP EBX                             ; 004fc291
    RET                                 ; 004fc292
    PUSH 0x0                            ; 004fc293
        ;   Label: LAB_004fc293
    LEA EAX,[EBX + 0x30]                ; 004fc295
    PUSH EAX                            ; 004fc298
    MOV EDX,dword ptr [EBX]             ; 004fc299
    PUSH EDX                            ; 004fc29b
    CALL core_motion.cpp_FUN_004fb9c0   ; 004fc29c
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_004fb9c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004fc2a1
    MOV dword ptr [EBX + 0x4],EAX       ; 004fc2a4
    TEST EAX,EAX                        ; 004fc2a7
    JL 0x004fc2b1                       ; 004fc2a9
        ;   XREF to: 004fc2b1 (CONDITIONAL_JUMP)  ; LAB_004fc2b1
    MOV byte ptr [EBX + 0x30],0x0       ; 004fc2ab
    POP EBX                             ; 004fc2af
    RET                                 ; 004fc2b0
    MOV dword ptr [EBX + 0x4],0x0       ; 004fc2b1
        ;   Label: LAB_004fc2b1
    MOV byte ptr [EBX + 0x30],0x0       ; 004fc2b8
    POP EBX                             ; 004fc2bc
    RET                                 ; 004fc2bd

