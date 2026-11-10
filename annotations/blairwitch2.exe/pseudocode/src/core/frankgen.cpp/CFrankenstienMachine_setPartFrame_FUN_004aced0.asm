; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004aced0(CFrankenstienMachine *this_ptr,float start_frame,float end_frame)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   start_frame
; float            Stack[0xc]:4   end_frame
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004accb0 at 004acd9e
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aced0
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004aced0
    SUB ESP,0x8                         ; 004aced1
    MOV EBX,dword ptr [ESP + 0x10]      ; 004aced4
    LEA EAX,[EBX + 0x2e0]               ; 004aced8
    PUSH EAX                            ; 004acede
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 004acedf
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    FLD float ptr [EBX + 0x2b8]         ; 004acee4
    ADD ESP,0x4                         ; 004aceea
    MOV EAX,dword ptr [EAX + 0x100]     ; 004aceed
    FLD float ptr [ESP + 0x14]          ; 004acef3
    FXCH                                ; 004acef7
    FSUB ST0,ST1                        ; 004acef9
    MOV dword ptr [ESP + 0x4],EAX       ; 004acefb
    FILD dword ptr [ESP + 0x4]          ; 004aceff
    FMULP                               ; 004acf03
    FLD float ptr [ESP + 0x18]          ; 004acf05
    FSUBRP ST2,ST0                      ; 004acf09
    FDIVRP                              ; 004acf0b
    MOV EDX,EAX                         ; 004acf0d
    FST float ptr [EBX + 0x2dc]         ; 004acf0f
    FLDZ                                ; 004acf15
    FCOMPP                              ; 004acf17
    FNSTSW AX                           ; 004acf19
    SAHF                                ; 004acf1b
    JA 0x004acf3d                       ; 004acf1c
        ;   XREF to: 004acf3d (CONDITIONAL_JUMP)  ; LAB_004acf3d
    DEC EDX                             ; 004acf1e
        ;   Label: LAB_004acf1e
    MOV dword ptr [ESP + 0x4],EDX       ; 004acf1f
    FLD float ptr [EBX + 0x2dc]         ; 004acf23
    FILD dword ptr [ESP + 0x4]          ; 004acf29
    FSTP float ptr [ESP]                ; 004acf2d
    FCOMP float ptr [ESP]               ; 004acf30
    FNSTSW AX                           ; 004acf33
    SAHF                                ; 004acf35
    JA 0x004acf49                       ; 004acf36
        ;   XREF to: 004acf49 (CONDITIONAL_JUMP)  ; LAB_004acf49
    ADD ESP,0x8                         ; 004acf38
    POP EBX                             ; 004acf3b
    RET                                 ; 004acf3c
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004acf3d
        ;   Label: LAB_004acf3d
    JMP 0x004acf1e                      ; 004acf47
        ;   XREF to: 004acf1e (UNCONDITIONAL_JUMP)  ; LAB_004acf1e
    MOV EAX,dword ptr [ESP]             ; 004acf49
        ;   Label: LAB_004acf49
    MOV dword ptr [EBX + 0x2dc],EAX     ; 004acf4c
    ADD ESP,0x8                         ; 004acf52
    POP EBX                             ; 004acf55
    RET                                 ; 004acf56

