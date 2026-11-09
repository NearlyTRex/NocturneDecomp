; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_setutil_cpp_FUN_0053c0f0(int param_1)
;
;
; XREF[1]:
;   core_set.cpp_FUN_0052d3be at 0052d8ff
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;
; Called Functions:
;   core_box.cpp_FUN_0041a840
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;
; *****************************************************************************

section .text

    SUB ESP,0x18                        ; 0053c0f0
        ;   Label: core_setutil.cpp_FUN_0053c0f0
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0053c0f3
    TEST dword ptr [EDX + 0x11d4],0x7fffffff ; 0053c0f7
    JNZ 0x0053c10c                      ; 0053c101
        ;   XREF to: 0053c10c (CONDITIONAL_JUMP)  ; LAB_0053c10c
    MOV EAX,0x1                         ; 0053c103
    ADD ESP,0x18                        ; 0053c108
    RET                                 ; 0053c10b
    PUSH EBX                            ; 0053c10c
        ;   Label: LAB_0053c10c
    FLD float ptr [EDX + 0x11d4]        ; 0053c10d
    MOV EBX,dword ptr [0x0060b280]      ; 0053c113 | DAT_0060b280
    FCHS                                ; 0053c119
    ADD EDX,0x104                       ; 0053c11b
    FSTP float ptr [ESP + 0x4]          ; 0053c121
    PUSH EDX                            ; 0053c125
    FLD float ptr [EDX + 0x10d0]        ; 0053c126
    FCHS                                ; 0053c12c
    FSTP float ptr [ESP + 0xc]          ; 0053c12e
    FLD float ptr [EDX + 0x10d0]        ; 0053c132
    FCHS                                ; 0053c138
    FSTP float ptr [ESP + 0x10]         ; 0053c13a
    MOV EAX,dword ptr [EDX + 0x10d0]    ; 0053c13e
    PUSH EBX                            ; 0053c144
    MOV dword ptr [ESP + 0x18],EAX      ; 0053c145
    MOV dword ptr [ESP + 0x1c],EAX      ; 0053c149
    MOV dword ptr [ESP + 0x20],EAX      ; 0053c14d
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 0053c151
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0053c156
    PUSH 0x0                            ; 0053c159
    LEA EAX,[ESP + 0x8]                 ; 0053c15b
    PUSH EAX                            ; 0053c15f
    CALL core_box.cpp_FUN_0041a840      ; 0053c160
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 0053c165
    POP EBX                             ; 0053c168
    ADD ESP,0x18                        ; 0053c169
    RET                                 ; 0053c16c

