; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bat_cpp_CBat_updateCoursePosition_FUN_00414ce0(CBat *this_ptr)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
; Local Variables:
; float            Stack[-0x20]:4  local_20
;
; XREF[3]:
;   core_bat.cpp_CBat_processInEditor_FUN_00414f00 at 00414f96
;   core_bat.cpp_CBat_process_FUN_00414a00 at 00414a3f
;   core_bat.cpp_CBat_setup_FUN_004148a0 at 004148d7
;
; Called Functions:
;   core_course.cpp_CCourse_evaluate_FUN_00442710
;   crt_math.c_floor_FUN_005feb90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414ce0
        ;   Label: core_bat.cpp_CBat_updateCoursePosition_FUN_00414ce0
    PUSH EBP                            ; 00414ce1
    MOV EBP,ESP                         ; 00414ce2
    SUB ESP,0x1c                        ; 00414ce4
    AND ESP,0xfffffff8                  ; 00414ce7
    MOV EBX,dword ptr [EBP + 0xc]       ; 00414cea
    LEA EAX,[EBX + 0x178]               ; 00414ced
    MOV EAX,dword ptr [EAX]             ; 00414cf3
    FLDZ                                ; 00414cf5
    MOV dword ptr [ESP + 0x18],EAX      ; 00414cf7
    MOV EAX,dword ptr [EBX + 0x304]     ; 00414cfb
    FILD dword ptr [ESP + 0x18]         ; 00414d01
    MOV dword ptr [ESP + 0x8],EAX       ; 00414d05
    FSTP float ptr [ESP + 0xc]          ; 00414d09
    FLD float ptr [ESP + 0x8]           ; 00414d0d
    FSTP double ptr [ESP]               ; 00414d11
    FCOMP double ptr [ESP]              ; 00414d14
    FNSTSW AX                           ; 00414d17
    SAHF                                ; 00414d19
    JBE 0x00414d8c                      ; 00414d1a
        ;   XREF to: 00414d8c (CONDITIONAL_JUMP)  ; LAB_00414d8c
    FLD float ptr [ESP + 0x8]           ; 00414d1c
    FCHS                                ; 00414d20
    FDIV float ptr [ESP + 0xc]          ; 00414d22
    SUB ESP,0x8                         ; 00414d26
    FSTP double ptr [ESP]               ; 00414d29
    CALL crt_math.c_floor_FUN_005feb90  ; 00414d2c
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x18],EAX      ; 00414d31
    MOV dword ptr [ESP + 0x1c],EDX      ; 00414d35
    FLD double ptr [ESP + 0x18]         ; 00414d39
    ADD ESP,0x8                         ; 00414d3d
    FMUL float ptr [ESP + 0xc]          ; 00414d40
    FADD double ptr [ESP]               ; 00414d44
    FST float ptr [ESP + 0x8]           ; 00414d47
    FLDZ                                ; 00414d4b
    FCOMPP                              ; 00414d4d
    FNSTSW AX                           ; 00414d4f
    SAHF                                ; 00414d51
    JBE 0x00414d60                      ; 00414d52
        ;   XREF to: 00414d60 (CONDITIONAL_JUMP)  ; LAB_00414d60
    FLD float ptr [ESP + 0x8]           ; 00414d54
    FADD float ptr [ESP + 0xc]          ; 00414d58
    FSTP float ptr [ESP + 0x8]          ; 00414d5c
        ;   Label: LAB_00414d5c
    MOV EAX,dword ptr [ESP + 0x8]       ; 00414d60
        ;   Label: LAB_00414d60
    MOV dword ptr [EBX + 0x304],EAX     ; 00414d64
    LEA EAX,[EBX + 0x30]                ; 00414d6a
    PUSH EAX                            ; 00414d6d
    LEA EAX,[EBX + 0x20]                ; 00414d6e
    PUSH EAX                            ; 00414d71
    ADD EBX,0x178                       ; 00414d72
    PUSH dword ptr [EBX + 0x18c]        ; 00414d78
    PUSH EBX                            ; 00414d7e
    CALL core_course.cpp_CCourse_evaluate_FUN_00442710 ; 00414d7f
        ;   XREF to: 00442710 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_evaluate_FUN_00442710(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    ADD ESP,0x10                        ; 00414d84
    MOV ESP,EBP                         ; 00414d87
    POP EBP                             ; 00414d89
    POP EBX                             ; 00414d8a
    RET                                 ; 00414d8b
    FLD float ptr [ESP + 0x8]           ; 00414d8c
        ;   Label: LAB_00414d8c
    FDIV float ptr [ESP + 0xc]          ; 00414d90
    SUB ESP,0x8                         ; 00414d94
    FSTP double ptr [ESP]               ; 00414d97
    CALL crt_math.c_floor_FUN_005feb90  ; 00414d9a
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x18],EAX      ; 00414d9f
    MOV dword ptr [ESP + 0x1c],EDX      ; 00414da3
    FLD double ptr [ESP + 0x18]         ; 00414da7
    ADD ESP,0x8                         ; 00414dab
    FMUL float ptr [ESP + 0xc]          ; 00414dae
    FSUBR double ptr [ESP]              ; 00414db2
    JMP 0x00414d5c                      ; 00414db5
        ;   XREF to: 00414d5c (UNCONDITIONAL_JUMP)  ; LAB_00414d5c

