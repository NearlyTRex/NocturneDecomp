; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bat_cpp_CBat_updateCoursePosition_FUN_00411f20(CBat *this_ptr)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_bat.cpp_CBat_process_FUN_00411c40 at 00411c7f
;   core_bat.cpp_CBat_setup_FUN_00411ae0 at 00411b17
;
; Called Functions:
;   core_course.cpp_CCourse_evaluate_FUN_0043b800
;   crt_math.c_floor_FUN_005648c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411f20
        ;   Label: core_bat.cpp_CBat_updateCoursePosition_FUN_00411f20
    PUSH EBP                            ; 00411f21
    MOV EBP,ESP                         ; 00411f22
    SUB ESP,0x1c                        ; 00411f24
    AND ESP,0xfffffff8                  ; 00411f27
    MOV EBX,dword ptr [EBP + 0xc]       ; 00411f2a
    LEA EAX,[EBX + 0x170]               ; 00411f2d
    MOV EAX,dword ptr [EAX]             ; 00411f33
    FLDZ                                ; 00411f35
    MOV dword ptr [ESP + 0x18],EAX      ; 00411f37
    MOV EAX,dword ptr [EBX + 0x2fc]     ; 00411f3b
    FILD dword ptr [ESP + 0x18]         ; 00411f41
    MOV dword ptr [ESP + 0x8],EAX       ; 00411f45
    FSTP float ptr [ESP + 0xc]          ; 00411f49
    FLD float ptr [ESP + 0x8]           ; 00411f4d
    FSTP double ptr [ESP]               ; 00411f51
    FCOMP double ptr [ESP]              ; 00411f54
    FNSTSW AX                           ; 00411f57
    SAHF                                ; 00411f59
    JBE 0x00411fcc                      ; 00411f5a
        ;   XREF to: 00411fcc (CONDITIONAL_JUMP)  ; LAB_00411fcc
    FLD float ptr [ESP + 0x8]           ; 00411f5c
    FCHS                                ; 00411f60
    FDIV float ptr [ESP + 0xc]          ; 00411f62
    SUB ESP,0x8                         ; 00411f66
    FSTP double ptr [ESP]               ; 00411f69
    CALL crt_math.c_floor_FUN_005648c0  ; 00411f6c
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_floor_FUN_005648c0()
    MOV dword ptr [ESP + 0x18],EAX      ; 00411f71
    MOV dword ptr [ESP + 0x1c],EDX      ; 00411f75
    FLD double ptr [ESP + 0x18]         ; 00411f79
    ADD ESP,0x8                         ; 00411f7d
    FMUL float ptr [ESP + 0xc]          ; 00411f80
    FADD double ptr [ESP]               ; 00411f84
    FST float ptr [ESP + 0x8]           ; 00411f87
    FLDZ                                ; 00411f8b
    FCOMPP                              ; 00411f8d
    FNSTSW AX                           ; 00411f8f
    SAHF                                ; 00411f91
    JBE 0x00411fa0                      ; 00411f92
        ;   XREF to: 00411fa0 (CONDITIONAL_JUMP)  ; LAB_00411fa0
    FLD float ptr [ESP + 0x8]           ; 00411f94
    FADD float ptr [ESP + 0xc]          ; 00411f98
    FSTP float ptr [ESP + 0x8]          ; 00411f9c
        ;   Label: LAB_00411f9c
    MOV EAX,dword ptr [ESP + 0x8]       ; 00411fa0
        ;   Label: LAB_00411fa0
    MOV dword ptr [EBX + 0x2fc],EAX     ; 00411fa4
    LEA EAX,[EBX + 0x30]                ; 00411faa
    PUSH EAX                            ; 00411fad
    LEA EAX,[EBX + 0x20]                ; 00411fae
    PUSH EAX                            ; 00411fb1
    ADD EBX,0x170                       ; 00411fb2
    PUSH dword ptr [EBX + 0x18c]        ; 00411fb8
    PUSH EBX                            ; 00411fbe
    CALL core_course.cpp_CCourse_evaluate_FUN_0043b800 ; 00411fbf
        ;   XREF to: 0043b800 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_evaluate_FUN_0043b800(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    ADD ESP,0x10                        ; 00411fc4
    MOV ESP,EBP                         ; 00411fc7
    POP EBP                             ; 00411fc9
    POP EBX                             ; 00411fca
    RET                                 ; 00411fcb
    FLD float ptr [ESP + 0x8]           ; 00411fcc
        ;   Label: LAB_00411fcc
    FDIV float ptr [ESP + 0xc]          ; 00411fd0
    SUB ESP,0x8                         ; 00411fd4
    FSTP double ptr [ESP]               ; 00411fd7
    CALL crt_math.c_floor_FUN_005648c0  ; 00411fda
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_floor_FUN_005648c0()
    MOV dword ptr [ESP + 0x18],EAX      ; 00411fdf
    MOV dword ptr [ESP + 0x1c],EDX      ; 00411fe3
    FLD double ptr [ESP + 0x18]         ; 00411fe7
    ADD ESP,0x8                         ; 00411feb
    FMUL float ptr [ESP + 0xc]          ; 00411fee
    FSUBR double ptr [ESP]              ; 00411ff2
    JMP 0x00411f9c                      ; 00411ff5
        ;   XREF to: 00411f9c (UNCONDITIONAL_JUMP)  ; LAB_00411f9c

