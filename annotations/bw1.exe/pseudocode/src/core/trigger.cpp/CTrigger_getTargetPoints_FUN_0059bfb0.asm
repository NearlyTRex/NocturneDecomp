; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_trigger_cpp_CTrigger_getTargetPoints_FUN_0059bfb0(CTrigger *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   undefined4 DAT_005f8224
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059bfb0
        ;   Label: core_trigger.cpp_CTrigger_getTargetPoints_FUN_0059bfb0
    PUSH ESI                            ; 0059bfb1
    SUB ESP,0x60                        ; 0059bfb2
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0059bfb5
    MOV EBX,dword ptr [ESP + 0x70]      ; 0059bfb9
    CMP dword ptr [ESI + 0x174],0x4     ; 0059bfbd
    JZ 0x0059bfce                       ; 0059bfc4
        ;   XREF to: 0059bfce (CONDITIONAL_JUMP)  ; LAB_0059bfce
    XOR EAX,EAX                         ; 0059bfc6
    ADD ESP,0x60                        ; 0059bfc8
    POP ESI                             ; 0059bfcb
    POP EBX                             ; 0059bfcc
    RET                                 ; 0059bfcd
    PUSH EDI                            ; 0059bfce
        ;   Label: LAB_0059bfce
    PUSH ESI                            ; 0059bfcf
    MOV EAX,dword ptr [ESI + 0x154]     ; 0059bfd0
    LEA ESI,[ESP + 0x20]                ; 0059bfd6
    LEA EDI,[ESP + 0x8]                 ; 0059bfda
    CALL dword ptr [EAX + 0x1c]         ; 0059bfde
    MOV ECX,0x6                         ; 0059bfe1
    LEA ESI,[ESP + 0x20]                ; 0059bfe6
    ADD ESP,0x4                         ; 0059bfea
    MOVSD.REP ES:EDI,ESI                ; 0059bfed
    LEA EAX,[ESP + 0x4]                 ; 0059bfef
    FLD float ptr [ESP + 0x4]           ; 0059bff3
    FLD float ptr [ESP + 0x8]           ; 0059bff7
    FLD float ptr [ESP + 0xc]           ; 0059bffb
    LEA EDI,[ESP + 0x40]                ; 0059bfff
    LEA ESI,[ESP + 0x4c]                ; 0059c003
    FXCH ST2                            ; 0059c007
    FADD float ptr [EAX + 0xc]          ; 0059c009
    FXCH                                ; 0059c00c
    FADD float ptr [EAX + 0x10]         ; 0059c00e
    FXCH ST2                            ; 0059c011
    FADD float ptr [EAX + 0x14]         ; 0059c013
    FXCH                                ; 0059c016
    FSTP float ptr [ESP + 0x4c]         ; 0059c018
    FXCH                                ; 0059c01c
    FSTP float ptr [ESP + 0x50]         ; 0059c01e
    FSTP float ptr [ESP + 0x54]         ; 0059c022
    MOVSD ES:EDI,ESI                    ; 0059c026
    MOVSD ES:EDI,ESI                    ; 0059c027
    MOVSD ES:EDI,ESI                    ; 0059c028
    FLD float ptr [0x005f8224]          ; 0059c029 | DAT_005f8224
    FLD float ptr [ESP + 0x40]          ; 0059c02f
    FMUL ST1                            ; 0059c033
    FLD float ptr [ESP + 0x44]          ; 0059c035
    FMUL ST2                            ; 0059c039
    FLD float ptr [ESP + 0x48]          ; 0059c03b
    FMULP ST3                           ; 0059c03f
    LEA EAX,[ESP + 0x58]                ; 0059c041
    LEA EDI,[ESP + 0x58]                ; 0059c045
    LEA ESI,[ESP + 0x34]                ; 0059c049
    FXCH                                ; 0059c04d
    FSTP float ptr [ESP + 0x34]         ; 0059c04f
    FSTP float ptr [ESP + 0x38]         ; 0059c053
    FSTP float ptr [ESP + 0x3c]         ; 0059c057
    MOVSD ES:EDI,ESI                    ; 0059c05b
    MOVSD ES:EDI,ESI                    ; 0059c05c
    MOVSD ES:EDI,ESI                    ; 0059c05d
    CMP EBX,EAX                         ; 0059c05e
    JZ 0x0059c076                       ; 0059c060
        ;   XREF to: 0059c076 (CONDITIONAL_JUMP)  ; LAB_0059c076
    MOV EAX,dword ptr [ESP + 0x58]      ; 0059c062
    MOV dword ptr [EBX],EAX             ; 0059c066
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0059c068
    MOV dword ptr [EBX + 0x4],EAX       ; 0059c06c
    MOV EAX,dword ptr [ESP + 0x60]      ; 0059c06f
    MOV dword ptr [EBX + 0x8],EAX       ; 0059c073
    MOV EAX,0x1                         ; 0059c076
        ;   Label: LAB_0059c076
    POP EDI                             ; 0059c07b
    ADD ESP,0x60                        ; 0059c07c
    POP ESI                             ; 0059c07f
    POP EBX                             ; 0059c080
    RET                                 ; 0059c081

