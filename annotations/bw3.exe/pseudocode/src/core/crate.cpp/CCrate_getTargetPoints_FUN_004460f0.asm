; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_crate_cpp_CCrate_getTargetPoints_FUN_004460f0(CCrate *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   undefined4 DAT_005b9a16
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004460f0
        ;   Label: core_crate.cpp_CCrate_getTargetPoints_FUN_004460f0
    PUSH ESI                            ; 004460f1
    PUSH EDI                            ; 004460f2
    SUB ESP,0x60                        ; 004460f3
    MOV ESI,dword ptr [ESP + 0x70]      ; 004460f6
    MOV EBX,dword ptr [ESP + 0x74]      ; 004460fa
    PUSH ESI                            ; 004460fe
    MOV EAX,dword ptr [ESI + 0x154]     ; 004460ff
    LEA ESI,[ESP + 0x1c]                ; 00446105
    LEA EDI,[ESP + 0x4]                 ; 00446109
    CALL dword ptr [EAX + 0x1c]         ; 0044610d
    MOV ECX,0x6                         ; 00446110
    LEA ESI,[ESP + 0x1c]                ; 00446115
    ADD ESP,0x4                         ; 00446119
    MOVSD.REP ES:EDI,ESI                ; 0044611c
    MOV EAX,ESP                         ; 0044611e
    FLD float ptr [ESP]                 ; 00446120
    FLD float ptr [ESP + 0x4]           ; 00446123
    FLD float ptr [ESP + 0x8]           ; 00446127
    LEA EDI,[ESP + 0x48]                ; 0044612b
    LEA ESI,[ESP + 0x3c]                ; 0044612f
    FXCH ST2                            ; 00446133
    FADD float ptr [EAX + 0xc]          ; 00446135
    FXCH                                ; 00446138
    FADD float ptr [EAX + 0x10]         ; 0044613a
    FXCH ST2                            ; 0044613d
    FADD float ptr [EAX + 0x14]         ; 0044613f
    FXCH                                ; 00446142
    FSTP float ptr [ESP + 0x3c]         ; 00446144
    FXCH                                ; 00446148
    FSTP float ptr [ESP + 0x40]         ; 0044614a
    FSTP float ptr [ESP + 0x44]         ; 0044614e
    MOVSD ES:EDI,ESI                    ; 00446152
    MOVSD ES:EDI,ESI                    ; 00446153
    MOVSD ES:EDI,ESI                    ; 00446154
    FLD float ptr [0x005b9a16]          ; 00446155 | DAT_005b9a16
    FLD float ptr [ESP + 0x48]          ; 0044615b
    FMUL ST1                            ; 0044615f
    FLD float ptr [ESP + 0x4c]          ; 00446161
    FMUL ST2                            ; 00446165
    FLD float ptr [ESP + 0x50]          ; 00446167
    FMULP ST3                           ; 0044616b
    LEA EAX,[ESP + 0x30]                ; 0044616d
    LEA EDI,[ESP + 0x30]                ; 00446171
    LEA ESI,[ESP + 0x54]                ; 00446175
    FXCH                                ; 00446179
    FSTP float ptr [ESP + 0x54]         ; 0044617b
    FSTP float ptr [ESP + 0x58]         ; 0044617f
    FSTP float ptr [ESP + 0x5c]         ; 00446183
    MOVSD ES:EDI,ESI                    ; 00446187
    MOVSD ES:EDI,ESI                    ; 00446188
    MOVSD ES:EDI,ESI                    ; 00446189
    CMP EBX,EAX                         ; 0044618a
    JNZ 0x0044619a                      ; 0044618c
        ;   XREF to: 0044619a (CONDITIONAL_JUMP)  ; LAB_0044619a
    MOV EAX,0x1                         ; 0044618e
    ADD ESP,0x60                        ; 00446193
    POP EDI                             ; 00446196
    POP ESI                             ; 00446197
    POP EBX                             ; 00446198
    RET                                 ; 00446199
    MOV EAX,dword ptr [ESP + 0x30]      ; 0044619a
        ;   Label: LAB_0044619a
    MOV dword ptr [EBX],EAX             ; 0044619e
    MOV EAX,dword ptr [ESP + 0x34]      ; 004461a0
    MOV dword ptr [EBX + 0x4],EAX       ; 004461a4
    MOV EAX,dword ptr [ESP + 0x38]      ; 004461a7
    MOV dword ptr [EBX + 0x8],EAX       ; 004461ab
    MOV EAX,0x1                         ; 004461ae
    ADD ESP,0x60                        ; 004461b3
    POP EDI                             ; 004461b6
    POP ESI                             ; 004461b7
    POP EBX                             ; 004461b8
    RET                                 ; 004461b9

