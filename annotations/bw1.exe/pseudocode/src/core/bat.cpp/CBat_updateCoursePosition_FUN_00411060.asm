; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bat_cpp_CBat_updateCoursePosition_FUN_00411060(CBat *this_ptr)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_bat.cpp_CBat_process_FUN_00410d80 at 00410db3
;   core_bat.cpp_CBat_setup_FUN_00410c20 at 00410c57
;
; Called Functions:
;   core_course.cpp_CCourse_evaluate_FUN_00447f00
;   crt_math.c_floor_FUN_005c0880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411060
        ;   Label: core_bat.cpp_CBat_updateCoursePosition_FUN_00411060
    PUSH EBP                            ; 00411061
    MOV EBP,ESP                         ; 00411062
    SUB ESP,0x1c                        ; 00411064
    AND ESP,0xfffffff8                  ; 00411067
    MOV EBX,dword ptr [EBP + 0xc]       ; 0041106a
    LEA EAX,[EBX + 0x178]               ; 0041106d
    MOV EAX,dword ptr [EAX]             ; 00411073
    FLDZ                                ; 00411075
    MOV dword ptr [ESP + 0x18],EAX      ; 00411077
    MOV EAX,dword ptr [EBX + 0x304]     ; 0041107b
    FILD dword ptr [ESP + 0x18]         ; 00411081
    MOV dword ptr [ESP + 0x8],EAX       ; 00411085
    FSTP float ptr [ESP + 0xc]          ; 00411089
    FLD float ptr [ESP + 0x8]           ; 0041108d
    FSTP double ptr [ESP]               ; 00411091
    FCOMP double ptr [ESP]              ; 00411094
    FNSTSW AX                           ; 00411097
    SAHF                                ; 00411099
    JBE 0x0041110c                      ; 0041109a
        ;   XREF to: 0041110c (CONDITIONAL_JUMP)  ; LAB_0041110c
    FLD float ptr [ESP + 0x8]           ; 0041109c
    FCHS                                ; 004110a0
    FDIV float ptr [ESP + 0xc]          ; 004110a2
    SUB ESP,0x8                         ; 004110a6
    FSTP double ptr [ESP]               ; 004110a9
    CALL crt_math.c_floor_FUN_005c0880  ; 004110ac
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [ESP + 0x18],EAX      ; 004110b1
    MOV dword ptr [ESP + 0x1c],EDX      ; 004110b5
    FLD double ptr [ESP + 0x18]         ; 004110b9
    ADD ESP,0x8                         ; 004110bd
    FMUL float ptr [ESP + 0xc]          ; 004110c0
    FADD double ptr [ESP]               ; 004110c4
    FST float ptr [ESP + 0x8]           ; 004110c7
    FLDZ                                ; 004110cb
    FCOMPP                              ; 004110cd
    FNSTSW AX                           ; 004110cf
    SAHF                                ; 004110d1
    JBE 0x004110e0                      ; 004110d2
        ;   XREF to: 004110e0 (CONDITIONAL_JUMP)  ; LAB_004110e0
    FLD float ptr [ESP + 0x8]           ; 004110d4
    FADD float ptr [ESP + 0xc]          ; 004110d8
    FSTP float ptr [ESP + 0x8]          ; 004110dc
        ;   Label: LAB_004110dc
    MOV EAX,dword ptr [ESP + 0x8]       ; 004110e0
        ;   Label: LAB_004110e0
    MOV dword ptr [EBX + 0x304],EAX     ; 004110e4
    LEA EAX,[EBX + 0x30]                ; 004110ea
    PUSH EAX                            ; 004110ed
    LEA EAX,[EBX + 0x20]                ; 004110ee
    PUSH EAX                            ; 004110f1
    ADD EBX,0x178                       ; 004110f2
    PUSH dword ptr [EBX + 0x18c]        ; 004110f8
    PUSH EBX                            ; 004110fe
    CALL core_course.cpp_CCourse_evaluate_FUN_00447f00 ; 004110ff
        ;   XREF to: 00447f00 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_evaluate_FUN_00447f00(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    ADD ESP,0x10                        ; 00411104
    MOV ESP,EBP                         ; 00411107
    POP EBP                             ; 00411109
    POP EBX                             ; 0041110a
    RET                                 ; 0041110b
    FLD float ptr [ESP + 0x8]           ; 0041110c
        ;   Label: LAB_0041110c
    FDIV float ptr [ESP + 0xc]          ; 00411110
    SUB ESP,0x8                         ; 00411114
    FSTP double ptr [ESP]               ; 00411117
    CALL crt_math.c_floor_FUN_005c0880  ; 0041111a
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [ESP + 0x18],EAX      ; 0041111f
    MOV dword ptr [ESP + 0x1c],EDX      ; 00411123
    FLD double ptr [ESP + 0x18]         ; 00411127
    ADD ESP,0x8                         ; 0041112b
    FMUL float ptr [ESP + 0xc]          ; 0041112e
    FSUBR double ptr [ESP]              ; 00411132
    JMP 0x004110dc                      ; 00411135
        ;   XREF to: 004110dc (UNCONDITIONAL_JUMP)  ; LAB_004110dc

