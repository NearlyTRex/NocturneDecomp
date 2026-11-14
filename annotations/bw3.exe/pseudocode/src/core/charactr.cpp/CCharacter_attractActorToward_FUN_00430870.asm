; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_attractActorToward_FUN_00430870(CCharacter *this_ptr,CDemonActor *actor,CVector3f *target_local_point)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; CVector3f *      Stack[0xc]:4   target_local_point
;
; Referenced Globals:
;   undefined4 DAT_005b83ae
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430870
        ;   Label: core_charactr.cpp_CCharacter_attractActorToward_FUN_00430870
    PUSH ESI                            ; 00430871
    PUSH EDI                            ; 00430872
    PUSH EBP                            ; 00430873
    MOV EBP,ESP                         ; 00430874
    SUB ESP,0x60                        ; 00430876
    MOV ESI,dword ptr [EBP + 0x14]      ; 00430879
    MOV EBX,dword ptr [EBP + 0x18]      ; 0043087c
    TEST EBX,EBX                        ; 0043087f
    JNZ 0x0043088e                      ; 00430881
        ;   XREF to: 0043088e (CONDITIONAL_JUMP)  ; LAB_0043088e
    XOR ESI,ESI                         ; 00430883
        ;   Label: LAB_00430883
    MOV EAX,ESI                         ; 00430885
    MOV ESP,EBP                         ; 00430887
    POP EBP                             ; 00430889
    POP EDI                             ; 0043088a
    POP ESI                             ; 0043088b
    POP EBX                             ; 0043088c
    RET                                 ; 0043088d
    LEA EDX,[EBP + -0x60]               ; 0043088e
        ;   Label: LAB_0043088e
    PUSH EDX                            ; 00430891
    MOV EAX,dword ptr [ESI + 0x154]     ; 00430892
    PUSH ESI                            ; 00430898
    CALL dword ptr [EAX + 0x114]        ; 00430899
    ADD ESP,0x8                         ; 0043089f
    TEST EAX,EAX                        ; 004308a2
    JZ 0x00430883                       ; 004308a4
        ;   XREF to: 00430883 (CONDITIONAL_JUMP)  ; LAB_00430883
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004308a6
    PUSH EDX                            ; 004308a9
    PUSH EBX                            ; 004308aa
    LEA ESI,[EBP + -0x30]               ; 004308ab
    LEA EDI,[EBP + -0x3c]               ; 004308ae
    CALL core_actor.cpp_FUN_00408b80    ; 004308b1
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    FLD float ptr [EBP + -0x60]         ; 004308b6
    LEA ESI,[EBP + -0x30]               ; 004308b9
    FLD float ptr [EBP + -0x5c]         ; 004308bc
    MOVSD ES:EDI,ESI                    ; 004308bf
    MOVSD ES:EDI,ESI                    ; 004308c0
    MOVSD ES:EDI,ESI                    ; 004308c1
    FLD float ptr [EBP + -0x58]         ; 004308c2
    LEA EDI,[EBP + -0x18]               ; 004308c5
    LEA ESI,[EBP + -0x24]               ; 004308c8
    FXCH ST2                            ; 004308cb
    FSUB float ptr [EBP + -0x3c]        ; 004308cd
    FXCH                                ; 004308d0
    FSUB float ptr [EBP + -0x38]        ; 004308d2
    FXCH ST2                            ; 004308d5
    FSUB float ptr [EBP + -0x34]        ; 004308d7
    FXCH                                ; 004308da
    FSTP float ptr [EBP + -0x24]        ; 004308dc
    FXCH                                ; 004308df
    FSTP float ptr [EBP + -0x20]        ; 004308e1
    FSTP float ptr [EBP + -0x1c]        ; 004308e4
    MOVSD ES:EDI,ESI                    ; 004308e7
    MOVSD ES:EDI,ESI                    ; 004308e8
    MOVSD ES:EDI,ESI                    ; 004308e9
    FLD float ptr [EBP + -0x18]         ; 004308ea
    FMUL ST0                            ; 004308ed
    FLD float ptr [EBP + -0x10]         ; 004308ef
    FMUL ST0                            ; 004308f2
    MOV EAX,[0x005fe9dc]                ; 004308f4 | g_CGamePtr
    FADDP                               ; 004308f9
    FLD float ptr [EAX + 0x314]         ; 004308fb | g_CGameInstance.delta_time_float
    FXCH                                ; 00430901
    FSQRT                               ; 00430903
    FXCH                                ; 00430905
    FMUL double ptr [0x005b83ae]        ; 00430907 | DAT_005b83ae
    XOR ECX,ECX                         ; 0043090d
    ADD ESP,0x8                         ; 0043090f
    MOV dword ptr [EBP + -0x14],ECX     ; 00430912
    FSTP float ptr [EBP + -0x8]         ; 00430915
    FST float ptr [EBP + -0xc]          ; 00430918
    FCOMP float ptr [EBP + -0x8]        ; 0043091b
    FNSTSW AX                           ; 0043091e
    SAHF                                ; 00430920
    JBE 0x0043094a                      ; 00430921
        ;   XREF to: 0043094a (CONDITIONAL_JUMP)  ; LAB_0043094a
    FLD float ptr [EBP + -0x8]          ; 00430923
    FDIV float ptr [EBP + -0xc]         ; 00430926
    FLD float ptr [EBP + -0x18]         ; 00430929
    FXCH                                ; 0043092c
    FSTP float ptr [EBP + -0x4]         ; 0043092e
    FMUL float ptr [EBP + -0x4]         ; 00430931
    FLDZ                                ; 00430934
    FMUL float ptr [EBP + -0x4]         ; 00430936
    FLD float ptr [EBP + -0x10]         ; 00430939
    FMUL float ptr [EBP + -0x4]         ; 0043093c
    FXCH ST2                            ; 0043093f
    FSTP float ptr [EBP + -0x18]        ; 00430941
    FSTP float ptr [EBP + -0x14]        ; 00430944
    FSTP float ptr [EBP + -0x10]        ; 00430947
    LEA EAX,[EBX + 0x30]                ; 0043094a
        ;   Label: LAB_0043094a
    LEA EDI,[EBP + -0x54]               ; 0043094d
    LEA ESI,[EBX + 0x20]                ; 00430950
    MOV EDX,dword ptr [EBX + 0x154]     ; 00430953
    PUSH EAX                            ; 00430959
    FLD float ptr [ESI + 0x4]           ; 0043095a
    FLD float ptr [ESI + 0x8]           ; 0043095d
    FLD float ptr [ESI]                 ; 00430960
    LEA EAX,[EBP + -0x54]               ; 00430962
    LEA ESI,[EBP + -0x48]               ; 00430965
    FADD float ptr [EBP + -0x18]        ; 00430968
    FXCH ST2                            ; 0043096b
    FADD float ptr [EBP + -0x14]        ; 0043096d
    FXCH                                ; 00430970
    FADD float ptr [EBP + -0x10]        ; 00430972
    PUSH EAX                            ; 00430975
    FXCH ST2                            ; 00430976
    FSTP float ptr [EBP + -0x48]        ; 00430978
    FSTP float ptr [EBP + -0x44]        ; 0043097b
    FSTP float ptr [EBP + -0x40]        ; 0043097e
    PUSH EBX                            ; 00430981
    MOVSD ES:EDI,ESI                    ; 00430982
    MOVSD ES:EDI,ESI                    ; 00430983
    MOVSD ES:EDI,ESI                    ; 00430984
    CALL dword ptr [EDX + 0x68]         ; 00430985
    MOV ESI,0x1                         ; 00430988
    ADD ESP,0xc                         ; 0043098d
    MOV EAX,ESI                         ; 00430990
    MOV ESP,EBP                         ; 00430992
    POP EBP                             ; 00430994
    POP EDI                             ; 00430995
    POP ESI                             ; 00430996
    POP EBX                             ; 00430997
    RET                                 ; 00430998

