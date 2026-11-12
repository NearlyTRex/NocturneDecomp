; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack_esi core_xform_cpp_buildZFlipMatrix_FUN_005852d0(float z_offset,CMatrix3x4f *matrix_out)
;
; Parameters:
; float            Stack[0x4]:4   z_offset
;
; Referenced Globals:
;   undefined4 DAT_005d818b
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005852d0
        ;   Label: core_xform.cpp_buildZFlipMatrix_FUN_005852d0
    SUB ESP,0x30                        ; 005852d1
    MOV EAX,ESI                         ; 005852d4
    FLD float ptr [ESP + 0x38]          ; 005852d6
    FMUL float ptr [0x005d818b]         ; 005852da | DAT_005d818b
    MOV EDX,0x3f800000                  ; 005852e0
    MOV EDI,0xbf800000                  ; 005852e5
    XOR ECX,ECX                         ; 005852ea
    MOV dword ptr [ESP],EDX             ; 005852ec
    MOV dword ptr [ESP + 0x4],ECX       ; 005852ef
    MOV dword ptr [ESP + 0x8],ECX       ; 005852f3
    MOV dword ptr [ESP + 0xc],ECX       ; 005852f7
    MOV dword ptr [ESP + 0x10],ECX      ; 005852fb
    MOV dword ptr [ESP + 0x14],EDX      ; 005852ff
    MOV dword ptr [ESP + 0x18],ECX      ; 00585303
    MOV dword ptr [ESP + 0x1c],ECX      ; 00585307
    MOV dword ptr [ESP + 0x20],ECX      ; 0058530b
    MOV dword ptr [ESP + 0x24],ECX      ; 0058530f
    MOV dword ptr [ESP + 0x28],EDI      ; 00585313
    MOV ECX,0xc                         ; 00585317
    MOV EDI,ESI                         ; 0058531c
    MOV ESI,ESP                         ; 0058531e
    FSTP float ptr [ESP + 0x2c]         ; 00585320
    MOVSD.REP ES:EDI,ESI                ; 00585324
    ADD ESP,0x30                        ; 00585326
    POP EDI                             ; 00585329
    RET                                 ; 0058532a

