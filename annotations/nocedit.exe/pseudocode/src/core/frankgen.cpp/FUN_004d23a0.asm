; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_frankgen_cpp_FUN_004d23a0(void)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_frankgen.cpp_LoadModel_FUN_004d2190 at 004d22c4
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d23a0
        ;   Label: core_frankgen.cpp_FUN_004d23a0
    SUB ESP,0x8                         ; 004d23a1
    MOV EBX,dword ptr [ESP + 0x10]      ; 004d23a4
    LEA EAX,[EBX + 0x184]               ; 004d23a8
    PUSH EAX                            ; 004d23ae
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004d23af
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    FLD float ptr [EBX + 0x15c]         ; 004d23b4
    ADD ESP,0x4                         ; 004d23ba
    MOV EAX,dword ptr [EAX + 0x100]     ; 004d23bd
    FLD float ptr [ESP + 0x14]          ; 004d23c3
    FXCH                                ; 004d23c7
    FSUB ST0,ST1                        ; 004d23c9
    MOV dword ptr [ESP + 0x4],EAX       ; 004d23cb
    FILD dword ptr [ESP + 0x4]          ; 004d23cf
    FMULP                               ; 004d23d3
    FLD float ptr [ESP + 0x18]          ; 004d23d5
    FSUBRP ST2,ST0                      ; 004d23d9
    FDIVRP                              ; 004d23db
    MOV EDX,EAX                         ; 004d23dd
    FST float ptr [EBX + 0x180]         ; 004d23df
    FLDZ                                ; 004d23e5
    FCOMPP                              ; 004d23e7
    FNSTSW AX                           ; 004d23e9
    SAHF                                ; 004d23eb
    JA 0x004d240d                       ; 004d23ec
        ;   XREF to: 004d240d (CONDITIONAL_JUMP)  ; LAB_004d240d
    DEC EDX                             ; 004d23ee
        ;   Label: LAB_004d23ee
    MOV dword ptr [ESP + 0x4],EDX       ; 004d23ef
    FLD float ptr [EBX + 0x180]         ; 004d23f3
    FILD dword ptr [ESP + 0x4]          ; 004d23f9
    FSTP float ptr [ESP]                ; 004d23fd
    FCOMP float ptr [ESP]               ; 004d2400
    FNSTSW AX                           ; 004d2403
    SAHF                                ; 004d2405
    JA 0x004d2419                       ; 004d2406
        ;   XREF to: 004d2419 (CONDITIONAL_JUMP)  ; LAB_004d2419
    ADD ESP,0x8                         ; 004d2408
    POP EBX                             ; 004d240b
    RET                                 ; 004d240c
    MOV dword ptr [EBX + 0x180],0x0     ; 004d240d
        ;   Label: LAB_004d240d
    JMP 0x004d23ee                      ; 004d2417
        ;   XREF to: 004d23ee (UNCONDITIONAL_JUMP)  ; LAB_004d23ee
    MOV EAX,dword ptr [ESP]             ; 004d2419
        ;   Label: LAB_004d2419
    MOV dword ptr [EBX + 0x180],EAX     ; 004d241c
    ADD ESP,0x8                         ; 004d2422
    POP EBX                             ; 004d2425
    RET                                 ; 004d2426

