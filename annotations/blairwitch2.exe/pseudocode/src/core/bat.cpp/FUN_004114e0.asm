; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bat_cpp_FUN_004114e0(int param_1)
;
;
; XREF[2]:
;   core_bat.cpp_FUN_004110a0 at 004110d7
;   core_bat.cpp_FUN_00411200 at 00411233
;
; Called Functions:
;   core_course.cpp_FUN_00438c40
;   crt_math.c_floor_FUN_005b84d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004114e0
        ;   Label: core_bat.cpp_FUN_004114e0
    PUSH EBP                            ; 004114e1
    MOV EBP,ESP                         ; 004114e2
    SUB ESP,0x1c                        ; 004114e4
    AND ESP,0xfffffff8                  ; 004114e7
    MOV EBX,dword ptr [EBP + 0xc]       ; 004114ea
    LEA EAX,[EBX + 0x2d4]               ; 004114ed
    MOV EAX,dword ptr [EAX]             ; 004114f3
    FLDZ                                ; 004114f5
    MOV dword ptr [ESP + 0x18],EAX      ; 004114f7
    MOV EAX,dword ptr [EBX + 0x460]     ; 004114fb
    FILD dword ptr [ESP + 0x18]         ; 00411501
    MOV dword ptr [ESP + 0x8],EAX       ; 00411505
    FSTP float ptr [ESP + 0xc]          ; 00411509
    FLD float ptr [ESP + 0x8]           ; 0041150d
    FSTP double ptr [ESP]               ; 00411511
    FCOMP double ptr [ESP]              ; 00411514
    FNSTSW AX                           ; 00411517
    SAHF                                ; 00411519
    JBE 0x0041158c                      ; 0041151a
        ;   XREF to: 0041158c (CONDITIONAL_JUMP)  ; LAB_0041158c
    FLD float ptr [ESP + 0x8]           ; 0041151c
    FCHS                                ; 00411520
    FDIV float ptr [ESP + 0xc]          ; 00411522
    SUB ESP,0x8                         ; 00411526
    FSTP double ptr [ESP]               ; 00411529
    CALL crt_math.c_floor_FUN_005b84d0  ; 0041152c
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x18],EAX      ; 00411531
    MOV dword ptr [ESP + 0x1c],EDX      ; 00411535
    FLD double ptr [ESP + 0x18]         ; 00411539
    ADD ESP,0x8                         ; 0041153d
    FMUL float ptr [ESP + 0xc]          ; 00411540
    FADD double ptr [ESP]               ; 00411544
    FST float ptr [ESP + 0x8]           ; 00411547
    FLDZ                                ; 0041154b
    FCOMPP                              ; 0041154d
    FNSTSW AX                           ; 0041154f
    SAHF                                ; 00411551
    JBE 0x00411560                      ; 00411552
        ;   XREF to: 00411560 (CONDITIONAL_JUMP)  ; LAB_00411560
    FLD float ptr [ESP + 0x8]           ; 00411554
    FADD float ptr [ESP + 0xc]          ; 00411558
    FSTP float ptr [ESP + 0x8]          ; 0041155c
        ;   Label: LAB_0041155c
    MOV EAX,dword ptr [ESP + 0x8]       ; 00411560
        ;   Label: LAB_00411560
    MOV dword ptr [EBX + 0x460],EAX     ; 00411564
    LEA EAX,[EBX + 0x30]                ; 0041156a
    PUSH EAX                            ; 0041156d
    LEA EAX,[EBX + 0x20]                ; 0041156e
    PUSH EAX                            ; 00411571
    ADD EBX,0x2d4                       ; 00411572
    PUSH dword ptr [EBX + 0x18c]        ; 00411578
    PUSH EBX                            ; 0041157e
    CALL core_course.cpp_FUN_00438c40   ; 0041157f
        ;   XREF to: 00438c40 (UNCONDITIONAL_CALL)  ; void core_course.cpp_FUN_00438c40(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    ADD ESP,0x10                        ; 00411584
    MOV ESP,EBP                         ; 00411587
    POP EBP                             ; 00411589
    POP EBX                             ; 0041158a
    RET                                 ; 0041158b
    FLD float ptr [ESP + 0x8]           ; 0041158c
        ;   Label: LAB_0041158c
    FDIV float ptr [ESP + 0xc]          ; 00411590
    SUB ESP,0x8                         ; 00411594
    FSTP double ptr [ESP]               ; 00411597
    CALL crt_math.c_floor_FUN_005b84d0  ; 0041159a
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x18],EAX      ; 0041159f
    MOV dword ptr [ESP + 0x1c],EDX      ; 004115a3
    FLD double ptr [ESP + 0x18]         ; 004115a7
    ADD ESP,0x8                         ; 004115ab
    FMUL float ptr [ESP + 0xc]          ; 004115ae
    FSUBR double ptr [ESP]              ; 004115b2
    JMP 0x0041155c                      ; 004115b5
        ;   XREF to: 0041155c (UNCONDITIONAL_JUMP)  ; LAB_0041155c

