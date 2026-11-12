; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_isAnyHeroWithinCylinder_FUN_004ce180(CVector3f *point,float horizontal_radius,float vertical_tolerance)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point
; float            Stack[0x8]:4   horizontal_radius
; float            Stack[0xc]:4   vertical_tolerance
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 at 004246b3
;
; Referenced Globals:
;   undefined4 DAT_01cedee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ce180
        ;   Label: core_hero.cpp_isAnyHeroWithinCylinder_FUN_004ce180
    PUSH ESI                            ; 004ce181
    PUSH EDI                            ; 004ce182
    PUSH EBP                            ; 004ce183
    MOV EBP,ESP                         ; 004ce184
    SUB ESP,0x1c                        ; 004ce186
    AND ESP,0xfffffff8                  ; 004ce189
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004ce18c
    MOV ECX,dword ptr [EBP + 0x14]      ; 004ce18f
    MOV dword ptr [ESP],EAX             ; 004ce192
    FLD float ptr [EBP + 0x18]          ; 004ce195
    FMUL ST0                            ; 004ce198
    MOV EDX,dword ptr [0x01cedee0]      ; 004ce19a | DAT_01cedee0
    FSTP float ptr [EBP + 0x18]         ; 004ce1a0
    TEST EDX,EDX                        ; 004ce1a3
    JLE 0x004ce1c3                      ; 004ce1a5
        ;   XREF to: 004ce1c3 (CONDITIONAL_JUMP)  ; LAB_004ce1c3
    MOV EBX,dword ptr [0x01cedee0]      ; 004ce1a7 | DAT_01cedee0
    XOR EDX,EDX                         ; 004ce1ad
    SHL EBX,0x2                         ; 004ce1af
    MOV ESI,dword ptr [EDX + 0x1cedee4] ; 004ce1b2
        ;   Label: LAB_004ce1b2
    TEST ESI,ESI                        ; 004ce1b8
    JNZ 0x004ce1cc                      ; 004ce1ba
        ;   XREF to: 004ce1cc (CONDITIONAL_JUMP)  ; LAB_004ce1cc
    ADD EDX,0x4                         ; 004ce1bc
        ;   Label: LAB_004ce1bc
    CMP EDX,EBX                         ; 004ce1bf
    JL 0x004ce1b2                       ; 004ce1c1
        ;   XREF to: 004ce1b2 (CONDITIONAL_JUMP)  ; LAB_004ce1b2
    XOR EAX,EAX                         ; 004ce1c3
        ;   Label: LAB_004ce1c3
    MOV ESP,EBP                         ; 004ce1c5
    POP EBP                             ; 004ce1c7
    POP EDI                             ; 004ce1c8
    POP ESI                             ; 004ce1c9
    POP EBX                             ; 004ce1ca
    RET                                 ; 004ce1cb
    MOV EAX,ESI                         ; 004ce1cc
        ;   Label: LAB_004ce1cc
    LEA EDI,[ESP + 0x4]                 ; 004ce1ce
    FLD float ptr [EAX + 0x20]          ; 004ce1d2
    FLD float ptr [EAX + 0x24]          ; 004ce1d5
    FLD float ptr [EAX + 0x28]          ; 004ce1d8
    LEA ESI,[ESP + 0x10]                ; 004ce1db
    FXCH ST2                            ; 004ce1df
    FSUB float ptr [ECX]                ; 004ce1e1
    FXCH                                ; 004ce1e3
    FSUB float ptr [ECX + 0x4]          ; 004ce1e5
    FXCH ST2                            ; 004ce1e8
    FSUB float ptr [ECX + 0x8]          ; 004ce1ea
    FXCH                                ; 004ce1ed
    FSTP float ptr [ESP + 0x10]         ; 004ce1ef
    FXCH                                ; 004ce1f3
    FSTP float ptr [ESP + 0x14]         ; 004ce1f5
    FSTP float ptr [ESP + 0x18]         ; 004ce1f9
    MOVSD ES:EDI,ESI                    ; 004ce1fd
    MOVSD ES:EDI,ESI                    ; 004ce1fe
    MOVSD ES:EDI,ESI                    ; 004ce1ff
    FLD float ptr [ESP + 0x8]           ; 004ce200
    FABS                                ; 004ce204
    FLD float ptr [ESP]                 ; 004ce206
    FCOMPP                              ; 004ce209
    FNSTSW AX                           ; 004ce20b
    SAHF                                ; 004ce20d
    JC 0x004ce1bc                       ; 004ce20e
        ;   XREF to: 004ce1bc (CONDITIONAL_JUMP)  ; LAB_004ce1bc
    FLD float ptr [ESP + 0xc]           ; 004ce210
    FMUL ST0                            ; 004ce214
    FLD float ptr [ESP + 0x4]           ; 004ce216
    FMUL ST0                            ; 004ce21a
    FADDP                               ; 004ce21c
    FCOMP float ptr [EBP + 0x18]        ; 004ce21e
    FNSTSW AX                           ; 004ce221
    SAHF                                ; 004ce223
    JNC 0x004ce1bc                      ; 004ce224
        ;   XREF to: 004ce1bc (CONDITIONAL_JUMP)  ; LAB_004ce1bc
    MOV EAX,0x1                         ; 004ce226
    MOV ESP,EBP                         ; 004ce22b
    POP EBP                             ; 004ce22d
    POP EDI                             ; 004ce22e
    POP ESI                             ; 004ce22f
    POP EBX                             ; 004ce230
    RET                                 ; 004ce231

