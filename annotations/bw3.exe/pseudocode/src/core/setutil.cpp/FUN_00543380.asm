; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_setutil_cpp_FUN_00543380(int param_1)
;
;
; XREF[1]:
;   core_set.cpp_FUN_00533e5e at 0053439f
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   core_box.cpp_FUN_0041daf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;
; *****************************************************************************

section .text

    SUB ESP,0x18                        ; 00543380
        ;   Label: core_setutil.cpp_FUN_00543380
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00543383
    TEST dword ptr [EDX + 0x11d4],0x7fffffff ; 00543387
    JNZ 0x0054339c                      ; 00543391
        ;   XREF to: 0054339c (CONDITIONAL_JUMP)  ; LAB_0054339c
    MOV EAX,0x1                         ; 00543393
    ADD ESP,0x18                        ; 00543398
    RET                                 ; 0054339b
    PUSH EBX                            ; 0054339c
        ;   Label: LAB_0054339c
    FLD float ptr [EDX + 0x11d4]        ; 0054339d
    MOV EBX,dword ptr [0x005f2afc]      ; 005433a3 | DAT_005f2afc
    FCHS                                ; 005433a9
    ADD EDX,0x104                       ; 005433ab
    FSTP float ptr [ESP + 0x4]          ; 005433b1
    PUSH EDX                            ; 005433b5
    FLD float ptr [EDX + 0x10d0]        ; 005433b6
    FCHS                                ; 005433bc
    FSTP float ptr [ESP + 0xc]          ; 005433be
    FLD float ptr [EDX + 0x10d0]        ; 005433c2
    FCHS                                ; 005433c8
    FSTP float ptr [ESP + 0x10]         ; 005433ca
    MOV EAX,dword ptr [EDX + 0x10d0]    ; 005433ce
    PUSH EBX                            ; 005433d4
    MOV dword ptr [ESP + 0x18],EAX      ; 005433d5
    MOV dword ptr [ESP + 0x1c],EAX      ; 005433d9
    MOV dword ptr [ESP + 0x20],EAX      ; 005433dd
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 005433e1
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 005433e6
    PUSH 0x0                            ; 005433e9
    LEA EAX,[ESP + 0x8]                 ; 005433eb
    PUSH EAX                            ; 005433ef
    CALL core_box.cpp_FUN_0041daf0      ; 005433f0
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 005433f5
    POP EBX                             ; 005433f8
    ADD ESP,0x18                        ; 005433f9
    RET                                 ; 005433fc

