; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_djien_cpp_CDjien_damageSack_FUN_00460f90(CDjien *this_ptr,SDamageInfo *damage)
;
; Parameters:
; CDjien *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage
;
; Referenced Globals:
;   TerminatedCString s_limb_wav_005d8e2f
;   TerminatedCString s_djien_heart_wav_6_005d8e38
;   TerminatedCString s_DjienSackBlown_005d8e4d
;   undefined4 DAT_005d8e60
;   undefined4 DAT_00612270
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90
;   core_bodypart.cpp_createBodyPart_FUN_00418940
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210
;   core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460f90
        ;   Label: core_djien.cpp_CDjien_damageSack_FUN_00460f90
    PUSH ESI                            ; 00460f91
    PUSH EBP                            ; 00460f92
    SUB ESP,0x8                         ; 00460f93
    MOV EBX,dword ptr [ESP + 0x18]      ; 00460f96
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00460f9a
    MOV EDX,dword ptr [ESI]             ; 00460f9e
    PUSH EDX                            ; 00460fa0
    MOV EAX,dword ptr [EBX + 0x154]     ; 00460fa1
    PUSH EBX                            ; 00460fa7
    CALL dword ptr [EAX + 0x14c]        ; 00460fa8
    ADD ESP,0x8                         ; 00460fae
    CMP EAX,-0x1                        ; 00460fb1
    JZ 0x00460fe2                       ; 00460fb4
        ;   XREF to: 00460fe2 (CONDITIONAL_JUMP)  ; LAB_00460fe2
    FLD float ptr [ESI + 0x4]           ; 00460fb6
    FADD float ptr [EBX + EAX*0x4 + 0xc2d8] ; 00460fb9
    FILD dword ptr [0x00612270]         ; 00460fc0 | DAT_00612270
    FXCH                                ; 00460fc6
    FSTP float ptr [EBX + EAX*0x4 + 0xc2d8] ; 00460fc8
    FCOMP float ptr [EBX + EAX*0x4 + 0xc2d8] ; 00460fcf
    FNSTSW AX                           ; 00460fd6
    SAHF                                ; 00460fd8
    JC 0x00460ff2                       ; 00460fd9
        ;   XREF to: 00460ff2 (CONDITIONAL_JUMP)  ; LAB_00460ff2
    ADD ESP,0x8                         ; 00460fdb
        ;   Label: LAB_00460fdb
    POP EBP                             ; 00460fde
    POP ESI                             ; 00460fdf
    POP EBX                             ; 00460fe0
    RET                                 ; 00460fe1
    MOV dword ptr [ESI + 0x4],0x0       ; 00460fe2
        ;   Label: LAB_00460fe2
    MOV dword ptr [ESI + 0x8],0x0       ; 00460fe9
    JMP 0x00460fdb                      ; 00460ff0
        ;   XREF to: 00460fdb (UNCONDITIONAL_JUMP)  ; LAB_00460fdb
    PUSH EDI                            ; 00460ff2
        ;   Label: LAB_00460ff2
    PUSH 0x0                            ; 00460ff3
    PUSH 0x0                            ; 00460ff5
    PUSH 0x0                            ; 00460ff7
    PUSH EBX                            ; 00460ff9
    LEA EAX,[ESI + 0xc]                 ; 00460ffa
    PUSH EAX                            ; 00460ffd
    LEA EAX,[EBX + 0x30]                ; 00460ffe
    MOV ECX,dword ptr [EBX + 0xc2d0]    ; 00461001
    PUSH EAX                            ; 00461007
    LEA EAX,[EBX + 0x20]                ; 00461008
    INC ECX                             ; 0046100b
    PUSH EAX                            ; 0046100c
    MOV dword ptr [EBX + 0xc2d0],ECX    ; 0046100d
    CALL core_bodypart.cpp_createBodyPart_FUN_00418940 ; 00461013
        ;   XREF to: 00418940 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00418940(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 00461018
    MOV dword ptr [EAX + 0xcc4],0x1     ; 0046101b
    PUSH 0x0                            ; 00461025
    MOV EBP,dword ptr [ESI]             ; 00461027
    PUSH EBP                            ; 00461029
    PUSH EAX                            ; 0046102a
    PUSH EBX                            ; 0046102b
    MOV EDI,EAX                         ; 0046102c
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 0046102e
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 00461033
    PUSH 0x5d8e2f                       ; 00461036 | = "limb.wav"
    PUSH EBX                            ; 0046103b
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0 ; 0046103c
        ;   XREF to: 004352e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 00461041
    PUSH 0x5d8e38                       ; 00461044 | = "djien-heart?.wav @ 6"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00461049
    PUSH EBX                            ; 0046104f
    CALL dword ptr [EAX + 0x2c]         ; 00461050
    ADD ESP,0x8                         ; 00461053
    PUSH EDI                            ; 00461056
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90 ; 00461057
        ;   XREF to: 00419b90 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90(CBodyPart * this_ptr)
    FLD float ptr [ESI + 0x8]           ; 0046105c
    ADD ESP,0x4                         ; 0046105f
    MOV EAX,[0x0061b4d0]                ; 00461062 | DAT_0061b4d0
    FLD ST0                             ; 00461067
    PUSH 0x5d8e4d                       ; 00461069 | = "DjienSackBlown"
    FMUL double ptr [0x005d8e60]        ; 0046106e | DAT_005d8e60
    PUSH EAX                            ; 00461074
    FSTP ST1                            ; 00461075
    FSTP float ptr [ESI + 0x8]          ; 00461077
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 0046107a
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0046107f
    POP EDI                             ; 00461082
    ADD ESP,0x8                         ; 00461083
    POP EBP                             ; 00461086
    POP ESI                             ; 00461087
    POP EBX                             ; 00461088
    RET                                 ; 00461089

