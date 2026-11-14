; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_basicene_cpp_FUN_0059f390(int param_1)
;
;
; XREF[1]:
;   core_basicene.cpp_FUN_0059f0e0 at 0059f324
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059f390
        ;   Label: core_basicene.cpp_FUN_0059f390
    SUB ESP,0x4                         ; 0059f391
    MOV EBX,dword ptr [ESP + 0xc]       ; 0059f394
    CMP dword ptr [EBX + 0x11418],0x0   ; 0059f398
    JZ 0x0059f3aa                       ; 0059f39f
        ;   XREF to: 0059f3aa (CONDITIONAL_JUMP)  ; LAB_0059f3aa
    CMP dword ptr [EBX + 0x113d0],0x0   ; 0059f3a1
    JNZ 0x0059f3af                      ; 0059f3a8
        ;   XREF to: 0059f3af (CONDITIONAL_JUMP)  ; LAB_0059f3af
    ADD ESP,0x4                         ; 0059f3aa
        ;   Label: LAB_0059f3aa
    POP EBX                             ; 0059f3ad
    RET                                 ; 0059f3ae
    PUSH EBX                            ; 0059f3af
        ;   Label: LAB_0059f3af
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0059f3b0
    CALL dword ptr [EAX + 0x114]        ; 0059f3b6
    ADD ESP,0x4                         ; 0059f3bc
    TEST EAX,EAX                        ; 0059f3bf
    JG 0x0059f3aa                       ; 0059f3c1
        ;   XREF to: 0059f3aa (CONDITIONAL_JUMP)  ; LAB_0059f3aa
    PUSH EDI                            ; 0059f3c3
    PUSH ESI                            ; 0059f3c4
    FLD float ptr [EBX + 0x11404]       ; 0059f3c5
    PUSH 0x544cc0                       ; 0059f3cb
    MOV ESI,dword ptr [EBX + 0x113fc]   ; 0059f3d0
    FILD dword ptr [EBX + 0x113f8]      ; 0059f3d6
    PUSH ESI                            ; 0059f3dc
    FXCH                                ; 0059f3dd
    FDIV float ptr [EBX + 0x11400]      ; 0059f3df
    FMULP                               ; 0059f3e5
    PUSH 0x3f7d70a4                     ; 0059f3e7
    SUB ESP,0x4                         ; 0059f3ec
    FSTP float ptr [ESP]                ; 0059f3ef
    MOV EDI,dword ptr [EBX + 0x113f4]   ; 0059f3f2
    PUSH EDI                            ; 0059f3f8
    ADD EBX,0x2b4                       ; 0059f3f9
    PUSH EBX                            ; 0059f3ff
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00545a60 ; 0059f400
        ;   XREF to: 00545a60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00545a60(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    ADD ESP,0x18                        ; 0059f405
    POP ESI                             ; 0059f408
    POP EDI                             ; 0059f409
    ADD ESP,0x4                         ; 0059f40a
    POP EBX                             ; 0059f40d
    RET                                 ; 0059f40e

