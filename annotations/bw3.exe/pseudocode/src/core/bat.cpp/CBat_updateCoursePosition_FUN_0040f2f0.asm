; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bat_cpp_CBat_updateCoursePosition_FUN_0040f2f0(CBat *this_ptr)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_bat.cpp_CBat_setup_FUN_0040eeb0 at 0040eee7
;   core_bat.cpp_FUN_0040f010 at 0040f043
;
; Called Functions:
;   core_course.cpp_FUN_00444ac0
;   crt_math.c_floor_FUN_005a3600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f2f0
        ;   Label: core_bat.cpp_CBat_updateCoursePosition_FUN_0040f2f0
    PUSH EBP                            ; 0040f2f1
    MOV EBP,ESP                         ; 0040f2f2
    SUB ESP,0x1c                        ; 0040f2f4
    AND ESP,0xfffffff8                  ; 0040f2f7
    MOV EBX,dword ptr [EBP + 0xc]       ; 0040f2fa
    LEA EAX,[EBX + 0x178]               ; 0040f2fd
    MOV EAX,dword ptr [EAX]             ; 0040f303
    FLDZ                                ; 0040f305
    MOV dword ptr [ESP + 0x18],EAX      ; 0040f307
    MOV EAX,dword ptr [EBX + 0x304]     ; 0040f30b
    FILD dword ptr [ESP + 0x18]         ; 0040f311
    MOV dword ptr [ESP + 0x8],EAX       ; 0040f315
    FSTP float ptr [ESP + 0xc]          ; 0040f319
    FLD float ptr [ESP + 0x8]           ; 0040f31d
    FSTP double ptr [ESP]               ; 0040f321
    FCOMP double ptr [ESP]              ; 0040f324
    FNSTSW AX                           ; 0040f327
    SAHF                                ; 0040f329
    JBE 0x0040f39c                      ; 0040f32a
        ;   XREF to: 0040f39c (CONDITIONAL_JUMP)  ; LAB_0040f39c
    FLD float ptr [ESP + 0x8]           ; 0040f32c
    FCHS                                ; 0040f330
    FDIV float ptr [ESP + 0xc]          ; 0040f332
    SUB ESP,0x8                         ; 0040f336
    FSTP double ptr [ESP]               ; 0040f339
    CALL crt_math.c_floor_FUN_005a3600  ; 0040f33c
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x18],EAX      ; 0040f341
    MOV dword ptr [ESP + 0x1c],EDX      ; 0040f345
    FLD double ptr [ESP + 0x18]         ; 0040f349
    ADD ESP,0x8                         ; 0040f34d
    FMUL float ptr [ESP + 0xc]          ; 0040f350
    FADD double ptr [ESP]               ; 0040f354
    FST float ptr [ESP + 0x8]           ; 0040f357
    FLDZ                                ; 0040f35b
    FCOMPP                              ; 0040f35d
    FNSTSW AX                           ; 0040f35f
    SAHF                                ; 0040f361
    JBE 0x0040f370                      ; 0040f362
        ;   XREF to: 0040f370 (CONDITIONAL_JUMP)  ; LAB_0040f370
    FLD float ptr [ESP + 0x8]           ; 0040f364
    FADD float ptr [ESP + 0xc]          ; 0040f368
    FSTP float ptr [ESP + 0x8]          ; 0040f36c
        ;   Label: LAB_0040f36c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040f370
        ;   Label: LAB_0040f370
    MOV dword ptr [EBX + 0x304],EAX     ; 0040f374
    LEA EAX,[EBX + 0x30]                ; 0040f37a
    PUSH EAX                            ; 0040f37d
    LEA EAX,[EBX + 0x20]                ; 0040f37e
    PUSH EAX                            ; 0040f381
    ADD EBX,0x178                       ; 0040f382
    PUSH dword ptr [EBX + 0x18c]        ; 0040f388
    PUSH EBX                            ; 0040f38e
    CALL core_course.cpp_FUN_00444ac0   ; 0040f38f
        ;   XREF to: 00444ac0 (UNCONDITIONAL_CALL)  ; void core_course.cpp_FUN_00444ac0(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    ADD ESP,0x10                        ; 0040f394
    MOV ESP,EBP                         ; 0040f397
    POP EBP                             ; 0040f399
    POP EBX                             ; 0040f39a
    RET                                 ; 0040f39b
    FLD float ptr [ESP + 0x8]           ; 0040f39c
        ;   Label: LAB_0040f39c
    FDIV float ptr [ESP + 0xc]          ; 0040f3a0
    SUB ESP,0x8                         ; 0040f3a4
    FSTP double ptr [ESP]               ; 0040f3a7
    CALL crt_math.c_floor_FUN_005a3600  ; 0040f3aa
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x18],EAX      ; 0040f3af
    MOV dword ptr [ESP + 0x1c],EDX      ; 0040f3b3
    FLD double ptr [ESP + 0x18]         ; 0040f3b7
    ADD ESP,0x8                         ; 0040f3bb
    FMUL float ptr [ESP + 0xc]          ; 0040f3be
    FSUBR double ptr [ESP]              ; 0040f3c2
    JMP 0x0040f36c                      ; 0040f3c5
        ;   XREF to: 0040f36c (UNCONDITIONAL_JUMP)  ; LAB_0040f36c

