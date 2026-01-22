; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stack_esi CMatrix3x4f * core_xform.cpp_buildXFlipMatrix_FUN_005f6ee0(CMatrix3x4f * matrix_out, float x_offset)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix_out
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_mimic.cpp_FUN_0051f930 at 0051fbe3
;
; Referenced Globals:
;   double g_XFlipMatrixScaleFactor = 2
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005f6ee0
        ;   Label: core_xform.cpp_buildXFlipMatrix_FUN_005f6ee0
    SUB ESP,0x30                        ; 005f6ee1
    MOV EAX,ESI                         ; 005f6ee4
    FLD float ptr [ESP + 0x38]          ; 005f6ee6
    FMUL double ptr [0x006583c5]        ; 005f6eea | g_XFlipMatrixScaleFactor
    MOV EDX,0xbf800000                  ; 005f6ef0
    MOV EDI,0x3f800000                  ; 005f6ef5
    XOR ECX,ECX                         ; 005f6efa
    MOV dword ptr [ESP],EDX             ; 005f6efc
    MOV dword ptr [ESP + 0x4],ECX       ; 005f6eff
    MOV dword ptr [ESP + 0x8],ECX       ; 005f6f03
    MOV dword ptr [ESP + 0x10],ECX      ; 005f6f07
    MOV dword ptr [ESP + 0x14],EDI      ; 005f6f0b
    MOV dword ptr [ESP + 0x18],ECX      ; 005f6f0f
    MOV dword ptr [ESP + 0x1c],ECX      ; 005f6f13
    MOV dword ptr [ESP + 0x20],ECX      ; 005f6f17
    MOV dword ptr [ESP + 0x24],ECX      ; 005f6f1b
    MOV dword ptr [ESP + 0x28],EDI      ; 005f6f1f
    MOV dword ptr [ESP + 0x2c],ECX      ; 005f6f23
    MOV ECX,0xc                         ; 005f6f27
    MOV EDI,ESI                         ; 005f6f2c
    MOV ESI,ESP                         ; 005f6f2e
    FSTP float ptr [ESP + 0xc]          ; 005f6f30
    MOVSD.REP ES:EDI,ESI                ; 005f6f34
    ADD ESP,0x30                        ; 005f6f36
    POP EDI                             ; 005f6f39
    RET                                 ; 005f6f3a

