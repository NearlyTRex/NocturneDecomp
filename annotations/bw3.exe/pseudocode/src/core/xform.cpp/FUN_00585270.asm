; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_00585270(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005d8187
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00585270
        ;   Label: core_xform.cpp_FUN_00585270
    PUSH EBP                            ; 00585271
    SUB ESP,0x30                        ; 00585272
    MOV EAX,ESI                         ; 00585275
    FLD float ptr [ESP + 0x3c]          ; 00585277
    FMUL float ptr [0x005d8187]         ; 0058527b | DAT_005d8187
    MOV EDX,0x3f800000                  ; 00585281
    MOV EBP,0xbf800000                  ; 00585286
    MOV EDI,ESI                         ; 0058528b
    XOR ECX,ECX                         ; 0058528d
    MOV ESI,ESP                         ; 0058528f
    MOV dword ptr [ESP],EDX             ; 00585291
    MOV dword ptr [ESP + 0x4],ECX       ; 00585294
    MOV dword ptr [ESP + 0x8],ECX       ; 00585298
    MOV dword ptr [ESP + 0xc],ECX       ; 0058529c
    MOV dword ptr [ESP + 0x10],ECX      ; 005852a0
    MOV dword ptr [ESP + 0x14],EBP      ; 005852a4
    MOV dword ptr [ESP + 0x18],ECX      ; 005852a8
    MOV dword ptr [ESP + 0x20],ECX      ; 005852ac
    MOV dword ptr [ESP + 0x24],ECX      ; 005852b0
    MOV dword ptr [ESP + 0x28],EDX      ; 005852b4
    MOV dword ptr [ESP + 0x2c],ECX      ; 005852b8
    MOV ECX,0xc                         ; 005852bc
    FSTP float ptr [ESP + 0x1c]         ; 005852c1
    MOVSD.REP ES:EDI,ESI                ; 005852c5
    ADD ESP,0x30                        ; 005852c7
    POP EBP                             ; 005852ca
    POP EDI                             ; 005852cb
    RET                                 ; 005852cc

