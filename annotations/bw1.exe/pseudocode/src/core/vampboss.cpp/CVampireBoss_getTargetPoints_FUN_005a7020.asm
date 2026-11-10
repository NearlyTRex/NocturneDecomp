; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_vampboss_cpp_CVampireBoss_getTargetPoints_FUN_005a7020(CVampireBoss *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   undefined4 DAT_005f8ed8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7020
        ;   Label: core_vampboss.cpp_CVampireBoss_getTargetPoints_FUN_005a7020
    PUSH ESI                            ; 005a7021
    PUSH EDI                            ; 005a7022
    SUB ESP,0x60                        ; 005a7023
    MOV ESI,dword ptr [ESP + 0x70]      ; 005a7026
    MOV EBX,dword ptr [ESP + 0x74]      ; 005a702a
    PUSH ESI                            ; 005a702e
    MOV EAX,dword ptr [ESI + 0x154]     ; 005a702f
    LEA ESI,[ESP + 0x1c]                ; 005a7035
    LEA EDI,[ESP + 0x4]                 ; 005a7039
    CALL dword ptr [EAX + 0x1c]         ; 005a703d
    MOV ECX,0x6                         ; 005a7040
    LEA ESI,[ESP + 0x1c]                ; 005a7045
    ADD ESP,0x4                         ; 005a7049
    MOVSD.REP ES:EDI,ESI                ; 005a704c
    MOV EAX,ESP                         ; 005a704e
    FLD float ptr [ESP]                 ; 005a7050
    FLD float ptr [ESP + 0x4]           ; 005a7053
    FLD float ptr [ESP + 0x8]           ; 005a7057
    LEA EDI,[ESP + 0x48]                ; 005a705b
    LEA ESI,[ESP + 0x3c]                ; 005a705f
    FXCH ST2                            ; 005a7063
    FADD float ptr [EAX + 0xc]          ; 005a7065
    FXCH                                ; 005a7068
    FADD float ptr [EAX + 0x10]         ; 005a706a
    FXCH ST2                            ; 005a706d
    FADD float ptr [EAX + 0x14]         ; 005a706f
    FXCH                                ; 005a7072
    FSTP float ptr [ESP + 0x3c]         ; 005a7074
    FXCH                                ; 005a7078
    FSTP float ptr [ESP + 0x40]         ; 005a707a
    FSTP float ptr [ESP + 0x44]         ; 005a707e
    MOVSD ES:EDI,ESI                    ; 005a7082
    MOVSD ES:EDI,ESI                    ; 005a7083
    MOVSD ES:EDI,ESI                    ; 005a7084
    FLD float ptr [0x005f8ed8]          ; 005a7085 | DAT_005f8ed8
    FLD float ptr [ESP + 0x48]          ; 005a708b
    FMUL ST1                            ; 005a708f
    FLD float ptr [ESP + 0x4c]          ; 005a7091
    FMUL ST2                            ; 005a7095
    FLD float ptr [ESP + 0x50]          ; 005a7097
    FMULP ST3                           ; 005a709b
    LEA EAX,[ESP + 0x30]                ; 005a709d
    LEA EDI,[ESP + 0x30]                ; 005a70a1
    LEA ESI,[ESP + 0x54]                ; 005a70a5
    FXCH                                ; 005a70a9
    FSTP float ptr [ESP + 0x54]         ; 005a70ab
    FSTP float ptr [ESP + 0x58]         ; 005a70af
    FSTP float ptr [ESP + 0x5c]         ; 005a70b3
    MOVSD ES:EDI,ESI                    ; 005a70b7
    MOVSD ES:EDI,ESI                    ; 005a70b8
    MOVSD ES:EDI,ESI                    ; 005a70b9
    CMP EBX,EAX                         ; 005a70ba
    JNZ 0x005a70ca                      ; 005a70bc
        ;   XREF to: 005a70ca (CONDITIONAL_JUMP)  ; LAB_005a70ca
    MOV EAX,0x1                         ; 005a70be
    ADD ESP,0x60                        ; 005a70c3
    POP EDI                             ; 005a70c6
    POP ESI                             ; 005a70c7
    POP EBX                             ; 005a70c8
    RET                                 ; 005a70c9
    MOV EAX,dword ptr [ESP + 0x30]      ; 005a70ca
        ;   Label: LAB_005a70ca
    MOV dword ptr [EBX],EAX             ; 005a70ce
    MOV EAX,dword ptr [ESP + 0x34]      ; 005a70d0
    MOV dword ptr [EBX + 0x4],EAX       ; 005a70d4
    MOV EAX,dword ptr [ESP + 0x38]      ; 005a70d7
    MOV dword ptr [EBX + 0x8],EAX       ; 005a70db
    MOV EAX,0x1                         ; 005a70de
    ADD ESP,0x60                        ; 005a70e3
    POP EDI                             ; 005a70e6
    POP ESI                             ; 005a70e7
    POP EBX                             ; 005a70e8
    RET                                 ; 005a70e9

