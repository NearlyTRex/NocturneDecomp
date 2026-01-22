; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stack_esi CMatrix3x4f * core_xform.cpp_buildTranslationMatrix_FUN_005f6dc0(CVector3f * translation, CMatrix3x4f * matrix_out)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   translation
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
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f6dc0
        ;   Label: core_xform.cpp_buildTranslationMatrix_FUN_005f6dc0
    PUSH EDI                            ; 005f6dc1
    SUB ESP,0x30                        ; 005f6dc2
    MOV ECX,dword ptr [ESP + 0x3c]      ; 005f6dc5
    MOV EDX,ESI                         ; 005f6dc9
    MOV EBX,0x3f800000                  ; 005f6dcb
    MOV EDI,EDX                         ; 005f6dd0
    XOR ESI,ESI                         ; 005f6dd2
    MOV EAX,dword ptr [ECX]             ; 005f6dd4
    MOV dword ptr [ESP + 0x4],ESI       ; 005f6dd6
    MOV dword ptr [ESP + 0x8],ESI       ; 005f6dda
    MOV dword ptr [ESP + 0xc],EAX       ; 005f6dde
    MOV dword ptr [ESP + 0x10],ESI      ; 005f6de2
    MOV dword ptr [ESP + 0x14],EBX      ; 005f6de6
    MOV dword ptr [ESP + 0x18],ESI      ; 005f6dea
    MOV dword ptr [ESP + 0x20],ESI      ; 005f6dee
    MOV dword ptr [ESP + 0x24],ESI      ; 005f6df2
    MOV dword ptr [ESP + 0x28],EBX      ; 005f6df6
    MOV EAX,dword ptr [ECX + 0x4]       ; 005f6dfa
    MOV ESI,ESP                         ; 005f6dfd
    MOV dword ptr [ESP + 0x1c],EAX      ; 005f6dff
    MOV EAX,dword ptr [ECX + 0x8]       ; 005f6e03
    MOV ECX,0xc                         ; 005f6e06
    MOV dword ptr [ESP],EBX             ; 005f6e0b
    MOV dword ptr [ESP + 0x2c],EAX      ; 005f6e0e
    MOVSD.REP ES:EDI,ESI                ; 005f6e12
    MOV EAX,EDX                         ; 005f6e14
    ADD ESP,0x30                        ; 005f6e16
    POP EDI                             ; 005f6e19
    POP EBX                             ; 005f6e1a
    RET                                 ; 005f6e1b

