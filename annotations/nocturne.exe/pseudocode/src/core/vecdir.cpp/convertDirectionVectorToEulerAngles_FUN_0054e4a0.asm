; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(float *param_1,float *param_2)
;
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[74]:
;   FUN_00439f50 at 0043a05e
;   FUN_00495a20 at 004962da
;   FUN_00498de0 at 00498ec7
;   FUN_004b32d0 at 004b33e7
;   FUN_004b52f0 at 004b53d7
;   FUN_004b6d80 at 004b7437
;   FUN_004b9fe0 at 004ba119
;   FUN_004baba0 at 004badba
;   FUN_004c4970 at 004c4efb
;   FUN_004d4f30 at 004d5168
;   ... and 64 more
;
; Called Functions:
;   crt_math.c_atan2_FUN_00566c81
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e4a0
        ;   Label: core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
    PUSH EDI                            ; 0054e4a1
    PUSH EBP                            ; 0054e4a2
    MOV EBP,ESP                         ; 0054e4a3
    SUB ESP,0x8                         ; 0054e4a5
    AND ESP,0xfffffff8                  ; 0054e4a8
    MOV ECX,dword ptr [EBP + 0x10]      ; 0054e4ab
    MOV EDX,dword ptr [EBP + 0x14]      ; 0054e4ae
    MOV dword ptr [ECX + 0x8],0x0       ; 0054e4b1
    TEST dword ptr [EDX],0x7fffffff     ; 0054e4b8
    JNZ 0x0054e50b                      ; 0054e4be
        ;   XREF to: 0054e50b (CONDITIONAL_JUMP)  ; LAB_0054e50b
    TEST dword ptr [EDX + 0x8],0x7fffffff ; 0054e4c0
    JNZ 0x0054e50b                      ; 0054e4c7
        ;   XREF to: 0054e50b (CONDITIONAL_JUMP)  ; LAB_0054e50b
    MOV dword ptr [ECX + 0x4],0x0       ; 0054e4c9
    FLDZ                                ; 0054e4d0
    FCOMP float ptr [EDX + 0x4]         ; 0054e4d2
    FNSTSW AX                           ; 0054e4d5
    SAHF                                ; 0054e4d7
    JC 0x0054e4f8                       ; 0054e4d8
        ;   XREF to: 0054e4f8 (CONDITIONAL_JUMP)  ; LAB_0054e4f8
    MOV EDI,0x54411744                  ; 0054e4da
    MOV EAX,0x3ff921fb                  ; 0054e4df
    MOV dword ptr [ESP],EDI             ; 0054e4e4
    MOV dword ptr [ESP + 0x4],EAX       ; 0054e4e7
    FLD double ptr [ESP]                ; 0054e4eb
        ;   Label: LAB_0054e4eb
    FSTP float ptr [ECX]                ; 0054e4ee
    MOV EAX,ECX                         ; 0054e4f0
    MOV ESP,EBP                         ; 0054e4f2
    POP EBP                             ; 0054e4f4
    POP EDI                             ; 0054e4f5
    POP EBX                             ; 0054e4f6
    RET                                 ; 0054e4f7
    MOV EDX,0x54411744                  ; 0054e4f8
        ;   Label: LAB_0054e4f8
    MOV EBX,0xbff921fb                  ; 0054e4fd
    MOV dword ptr [ESP],EDX             ; 0054e502
    MOV dword ptr [ESP + 0x4],EBX       ; 0054e505
    JMP 0x0054e4eb                      ; 0054e509
        ;   XREF to: 0054e4eb (UNCONDITIONAL_JUMP)  ; LAB_0054e4eb
    FLD float ptr [EDX + 0x8]           ; 0054e50b
        ;   Label: LAB_0054e50b
    FLD float ptr [EDX]                 ; 0054e50e
    CALL crt_math.c_atan2_FUN_00566c81  ; 0054e510
        ;   XREF to: 00566c81 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_00566c81()
    FSTP float ptr [ECX + 0x4]          ; 0054e515
    FLD float ptr [EDX + 0x8]           ; 0054e518
    FMUL ST0                            ; 0054e51b
    FLD float ptr [EDX]                 ; 0054e51d
    FMUL ST0                            ; 0054e51f
    FADDP                               ; 0054e521
    FSQRT                               ; 0054e523
    FLD float ptr [EDX + 0x4]           ; 0054e525
    CALL crt_math.c_atan2_FUN_00566c81  ; 0054e528
        ;   XREF to: 00566c81 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_00566c81()
    FCHS                                ; 0054e52d
    FSTP float ptr [ECX]                ; 0054e52f
    MOV EAX,ECX                         ; 0054e531
    MOV ESP,EBP                         ; 0054e533
    POP EBP                             ; 0054e535
    POP EDI                             ; 0054e536
    POP EBX                             ; 0054e537
    RET                                 ; 0054e538

