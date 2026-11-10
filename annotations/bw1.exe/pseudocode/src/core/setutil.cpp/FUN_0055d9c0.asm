; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setutil_cpp_FUN_0055d9c0(C3DSLight *this_ptr)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_FUN_0054e69e at 0054ebdf
;
; Referenced Globals:
;   undefined4 DAT_00612560
;
; Called Functions:
;   core_box.cpp_FUN_004207b0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;
; *****************************************************************************

section .text

    SUB ESP,0x18                        ; 0055d9c0
        ;   Label: core_setutil.cpp_FUN_0055d9c0
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0055d9c3
    TEST dword ptr [EDX + 0x11d4],0x7fffffff ; 0055d9c7
    JNZ 0x0055d9dc                      ; 0055d9d1
        ;   XREF to: 0055d9dc (CONDITIONAL_JUMP)  ; LAB_0055d9dc
    MOV EAX,0x1                         ; 0055d9d3
    ADD ESP,0x18                        ; 0055d9d8
    RET                                 ; 0055d9db
    PUSH EBX                            ; 0055d9dc
        ;   Label: LAB_0055d9dc
    FLD float ptr [EDX + 0x11d4]        ; 0055d9dd
    MOV EBX,dword ptr [0x00612560]      ; 0055d9e3 | DAT_00612560
    FCHS                                ; 0055d9e9
    ADD EDX,0x104                       ; 0055d9eb
    FSTP float ptr [ESP + 0x4]          ; 0055d9f1
    PUSH EDX                            ; 0055d9f5
    FLD float ptr [EDX + 0x10d0]        ; 0055d9f6
    FCHS                                ; 0055d9fc
    FSTP float ptr [ESP + 0xc]          ; 0055d9fe
    FLD float ptr [EDX + 0x10d0]        ; 0055da02
    FCHS                                ; 0055da08
    FSTP float ptr [ESP + 0x10]         ; 0055da0a
    MOV EAX,dword ptr [EDX + 0x10d0]    ; 0055da0e
    PUSH EBX                            ; 0055da14
    MOV dword ptr [ESP + 0x18],EAX      ; 0055da15
    MOV dword ptr [ESP + 0x1c],EAX      ; 0055da19
    MOV dword ptr [ESP + 0x20],EAX      ; 0055da1d
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 0055da21
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0055da26
    PUSH 0x0                            ; 0055da29
    LEA EAX,[ESP + 0x8]                 ; 0055da2b
    PUSH EAX                            ; 0055da2f
    CALL core_box.cpp_FUN_004207b0      ; 0055da30
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 0055da35
    POP EBX                             ; 0055da38
    ADD ESP,0x18                        ; 0055da39
    RET                                 ; 0055da3c

