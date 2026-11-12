; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack_esi core_xform_cpp_buildXFlipMatrix_FUN_00585210(float x_offset,CMatrix3x4f *matrix_out)
;
; Parameters:
; float            Stack[0x4]:4   x_offset
;
; Referenced Globals:
;   undefined4 DAT_005d8183
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00585210
        ;   Label: core_xform.cpp_buildXFlipMatrix_FUN_00585210
    SUB ESP,0x30                        ; 00585211
    MOV EAX,ESI                         ; 00585214
    FLD float ptr [ESP + 0x38]          ; 00585216
    FMUL float ptr [0x005d8183]         ; 0058521a | DAT_005d8183
    MOV EDX,0xbf800000                  ; 00585220
    MOV EDI,0x3f800000                  ; 00585225
    XOR ECX,ECX                         ; 0058522a
    MOV dword ptr [ESP],EDX             ; 0058522c
    MOV dword ptr [ESP + 0x4],ECX       ; 0058522f
    MOV dword ptr [ESP + 0x8],ECX       ; 00585233
    MOV dword ptr [ESP + 0x10],ECX      ; 00585237
    MOV dword ptr [ESP + 0x14],EDI      ; 0058523b
    MOV dword ptr [ESP + 0x18],ECX      ; 0058523f
    MOV dword ptr [ESP + 0x1c],ECX      ; 00585243
    MOV dword ptr [ESP + 0x20],ECX      ; 00585247
    MOV dword ptr [ESP + 0x24],ECX      ; 0058524b
    MOV dword ptr [ESP + 0x28],EDI      ; 0058524f
    MOV dword ptr [ESP + 0x2c],ECX      ; 00585253
    MOV ECX,0xc                         ; 00585257
    MOV EDI,ESI                         ; 0058525c
    MOV ESI,ESP                         ; 0058525e
    FSTP float ptr [ESP + 0xc]          ; 00585260
    MOVSD.REP ES:EDI,ESI                ; 00585264
    ADD ESP,0x30                        ; 00585266
    POP EDI                             ; 00585269
    RET                                 ; 0058526a

