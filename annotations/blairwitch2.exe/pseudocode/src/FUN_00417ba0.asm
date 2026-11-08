; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00417ba0(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[3]:
;   FUN_00419520 at 0041975a
;   FUN_004ff610 at 004ff87e
;   FUN_005984e0 at 005987aa
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00417ba0
        ;   Label: FUN_00417ba0
    SUB ESP,0xc                         ; 00417ba1
    MOV ECX,dword ptr [ESP + 0x14]      ; 00417ba4
    MOV EDX,dword ptr [ESP + 0x18]      ; 00417ba8
    MOV EAX,ESI                         ; 00417bac
    FLD float ptr [ECX]                 ; 00417bae
    FLD float ptr [ECX + 0x4]           ; 00417bb0
    FLD float ptr [ECX + 0x8]           ; 00417bb3
    MOV EDI,ESI                         ; 00417bb6
    MOV ESI,ESP                         ; 00417bb8
    FXCH ST2                            ; 00417bba
    FADD float ptr [EDX]                ; 00417bbc
    FXCH                                ; 00417bbe
    FADD float ptr [EDX + 0x4]          ; 00417bc0
    FXCH ST2                            ; 00417bc3
    FADD float ptr [EDX + 0x8]          ; 00417bc5
    FXCH ST2                            ; 00417bc8
    FSTP float ptr [ESP + 0x4]          ; 00417bca
    FXCH                                ; 00417bce
    FSTP float ptr [ESP + 0x8]          ; 00417bd0
    FSTP float ptr [ESP]                ; 00417bd4
    MOVSD ES:EDI,ESI                    ; 00417bd7
    MOVSD ES:EDI,ESI                    ; 00417bd8
    MOVSD ES:EDI,ESI                    ; 00417bd9
    ADD ESP,0xc                         ; 00417bda
    POP EDI                             ; 00417bdd
    RET                                 ; 00417bde

