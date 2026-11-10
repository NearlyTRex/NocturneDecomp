; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_filmreel_cpp_CFilmReel_setup_FUN_004961e0(CFilmReel *this_ptr)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005c03f3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408890
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004961e0
        ;   Label: core_filmreel.cpp_CFilmReel_setup_FUN_004961e0
    PUSH ESI                            ; 004961e1
    PUSH EDI                            ; 004961e2
    SUB ESP,0x38                        ; 004961e3
    MOV EBX,dword ptr [ESP + 0x48]      ; 004961e6
    PUSH EBX                            ; 004961ea
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408890 ; 004961eb
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408890(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004961f0
    LEA ESI,[EBX + 0x158]               ; 004961f3
    PUSH ESI                            ; 004961f9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 004961fa
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004961ff
    MOV EAX,dword ptr [EBX + 0x154]     ; 00496202
    PUSH EBX                            ; 00496208
    LEA ESI,[ESP + 0x1c]                ; 00496209
    LEA EDI,[ESP + 0x4]                 ; 0049620d
    CALL dword ptr [EAX + 0x1c]         ; 00496211
    MOV ECX,0x6                         ; 00496214
    LEA ESI,[ESP + 0x1c]                ; 00496219
    ADD ESP,0x4                         ; 0049621d
    MOVSD.REP ES:EDI,ESI                ; 00496220
    FLD float ptr [ESP + 0x14]          ; 00496222
    FLD float ptr [ESP + 0xc]           ; 00496226
    FSUB float ptr [ESP]                ; 0049622a
    FXCH                                ; 0049622d
    FSUB float ptr [ESP + 0x8]          ; 0049622f
    FXCH                                ; 00496233
    FLD double ptr [0x005c03f3]         ; 00496235 | DAT_005c03f3
    FXCH                                ; 0049623b
    FMUL ST1                            ; 0049623d
    FXCH ST2                            ; 0049623f
    FMULP                               ; 00496241
    FXCH                                ; 00496243
    FSTP float ptr [ESP + 0x34]         ; 00496245
    FST float ptr [ESP + 0x30]          ; 00496249
    FCOMP float ptr [ESP + 0x34]        ; 0049624d
    FNSTSW AX                           ; 00496251
    SAHF                                ; 00496253
    JBE 0x00496271                      ; 00496254
        ;   XREF to: 00496271 (CONDITIONAL_JUMP)  ; LAB_00496271
    MOV EAX,dword ptr [ESP + 0x34]      ; 00496256
    MOV dword ptr [EBX + 0x2f8],EAX     ; 0049625a
        ;   Label: LAB_0049625a
    MOV dword ptr [EBX + 0x2d4],0x0     ; 00496260
    ADD ESP,0x38                        ; 0049626a
    POP EDI                             ; 0049626d
    POP ESI                             ; 0049626e
    POP EBX                             ; 0049626f
    RET                                 ; 00496270
    MOV EAX,dword ptr [ESP + 0x30]      ; 00496271
        ;   Label: LAB_00496271
    JMP 0x0049625a                      ; 00496275
        ;   XREF to: 0049625a (UNCONDITIONAL_JUMP)  ; LAB_0049625a

