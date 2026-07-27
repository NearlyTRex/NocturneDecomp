; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004952b0(int param_1,float param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_frankgen.cpp_FUN_004950a0 at 00495180
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004952b0
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004952b0
    SUB ESP,0x8                         ; 004952b1
    MOV EBX,dword ptr [ESP + 0x10]      ; 004952b4
    LEA EAX,[EBX + 0x17c]               ; 004952b8
    PUSH EAX                            ; 004952be
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004952bf
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    FLD float ptr [EBX + 0x154]         ; 004952c4
    ADD ESP,0x4                         ; 004952ca
    MOV EAX,dword ptr [EAX + 0x100]     ; 004952cd
    FLD float ptr [ESP + 0x14]          ; 004952d3
    FXCH                                ; 004952d7
    FSUB ST0,ST1                        ; 004952d9
    MOV dword ptr [ESP + 0x4],EAX       ; 004952db
    FILD dword ptr [ESP + 0x4]          ; 004952df
    FMULP                               ; 004952e3
    FLD float ptr [ESP + 0x18]          ; 004952e5
    FSUBRP ST2,ST0                      ; 004952e9
    FDIVRP                              ; 004952eb
    MOV EDX,EAX                         ; 004952ed
    FST float ptr [EBX + 0x178]         ; 004952ef
    FLDZ                                ; 004952f5
    FCOMPP                              ; 004952f7
    FNSTSW AX                           ; 004952f9
    SAHF                                ; 004952fb
    JA 0x0049531d                       ; 004952fc
        ;   XREF to: 0049531d (CONDITIONAL_JUMP)  ; LAB_0049531d
    DEC EDX                             ; 004952fe
        ;   Label: LAB_004952fe
    MOV dword ptr [ESP + 0x4],EDX       ; 004952ff
    FLD float ptr [EBX + 0x178]         ; 00495303
    FILD dword ptr [ESP + 0x4]          ; 00495309
    FSTP float ptr [ESP]                ; 0049530d
    FCOMP float ptr [ESP]               ; 00495310
    FNSTSW AX                           ; 00495313
    SAHF                                ; 00495315
    JA 0x00495329                       ; 00495316
        ;   XREF to: 00495329 (CONDITIONAL_JUMP)  ; LAB_00495329
    ADD ESP,0x8                         ; 00495318
    POP EBX                             ; 0049531b
    RET                                 ; 0049531c
    MOV dword ptr [EBX + 0x178],0x0     ; 0049531d
        ;   Label: LAB_0049531d
    JMP 0x004952fe                      ; 00495327
        ;   XREF to: 004952fe (UNCONDITIONAL_JUMP)  ; LAB_004952fe
    MOV EAX,dword ptr [ESP]             ; 00495329
        ;   Label: LAB_00495329
    MOV dword ptr [EBX + 0x178],EAX     ; 0049532c
    ADD ESP,0x8                         ; 00495332
    POP EBX                             ; 00495335
    RET                                 ; 00495336

