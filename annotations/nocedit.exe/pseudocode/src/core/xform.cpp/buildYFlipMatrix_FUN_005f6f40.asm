; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMatrix3x4f * core_xform.cpp_buildYFlipMatrix_FUN_005f6f40(CMatrix3x4f * matrix_out, float y_offset)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix_out
; float            Stack[0x8]:4   y_offset
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
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
;
; Referenced Globals:
;   double g_YFlipMatrixScaleFactor = 2
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005f6f40
        ;   Label: core_xform.cpp_buildYFlipMatrix_FUN_005f6f40
    PUSH EBP                            ; 005f6f41
    SUB ESP,0x30                        ; 005f6f42
    MOV EAX,ESI                         ; 005f6f45
    FLD float ptr [ESP + 0x3c]          ; 005f6f47
    FMUL double ptr [0x006583cd]        ; 005f6f4b | double g_YFlipMatrixScaleFactor
    MOV EDX,0x3f800000                  ; 005f6f51
    MOV EBP,0xbf800000                  ; 005f6f56
    MOV EDI,ESI                         ; 005f6f5b
    XOR ECX,ECX                         ; 005f6f5d
    MOV ESI,ESP                         ; 005f6f5f
    MOV dword ptr [ESP],EDX             ; 005f6f61
    MOV dword ptr [ESP + 0x4],ECX       ; 005f6f64
    MOV dword ptr [ESP + 0x8],ECX       ; 005f6f68
    MOV dword ptr [ESP + 0xc],ECX       ; 005f6f6c
    MOV dword ptr [ESP + 0x10],ECX      ; 005f6f70
    MOV dword ptr [ESP + 0x14],EBP      ; 005f6f74
    MOV dword ptr [ESP + 0x18],ECX      ; 005f6f78
    MOV dword ptr [ESP + 0x20],ECX      ; 005f6f7c
    MOV dword ptr [ESP + 0x24],ECX      ; 005f6f80
    MOV dword ptr [ESP + 0x28],EDX      ; 005f6f84
    MOV dword ptr [ESP + 0x2c],ECX      ; 005f6f88
    MOV ECX,0xc                         ; 005f6f8c
    FSTP float ptr [ESP + 0x1c]         ; 005f6f91
    MOVSD.REP ES:EDI,ESI                ; 005f6f95
    ADD ESP,0x30                        ; 005f6f97
    POP EBP                             ; 005f6f9a
    POP EDI                             ; 005f6f9b
    RET                                 ; 005f6f9c

