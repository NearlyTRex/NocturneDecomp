; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_buildTranslationMatrix_FUN_0055c8b0(undefined4 *param_1)
;
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

    PUSH EBX                            ; 0055c8b0
        ;   Label: core_xform.cpp_buildTranslationMatrix_FUN_0055c8b0
    PUSH EDI                            ; 0055c8b1
    SUB ESP,0x30                        ; 0055c8b2
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0055c8b5
    MOV EDX,ESI                         ; 0055c8b9
    MOV EBX,0x3f800000                  ; 0055c8bb
    MOV EDI,EDX                         ; 0055c8c0
    XOR ESI,ESI                         ; 0055c8c2
    MOV EAX,dword ptr [ECX]             ; 0055c8c4
    MOV dword ptr [ESP + 0x4],ESI       ; 0055c8c6
    MOV dword ptr [ESP + 0x8],ESI       ; 0055c8ca
    MOV dword ptr [ESP + 0xc],EAX       ; 0055c8ce
    MOV dword ptr [ESP + 0x10],ESI      ; 0055c8d2
    MOV dword ptr [ESP + 0x14],EBX      ; 0055c8d6
    MOV dword ptr [ESP + 0x18],ESI      ; 0055c8da
    MOV dword ptr [ESP + 0x20],ESI      ; 0055c8de
    MOV dword ptr [ESP + 0x24],ESI      ; 0055c8e2
    MOV dword ptr [ESP + 0x28],EBX      ; 0055c8e6
    MOV EAX,dword ptr [ECX + 0x4]       ; 0055c8ea
    MOV ESI,ESP                         ; 0055c8ed
    MOV dword ptr [ESP + 0x1c],EAX      ; 0055c8ef
    MOV EAX,dword ptr [ECX + 0x8]       ; 0055c8f3
    MOV ECX,0xc                         ; 0055c8f6
    MOV dword ptr [ESP],EBX             ; 0055c8fb
    MOV dword ptr [ESP + 0x2c],EAX      ; 0055c8fe
    MOVSD.REP ES:EDI,ESI                ; 0055c902
    MOV EAX,EDX                         ; 0055c904
    ADD ESP,0x30                        ; 0055c906
    POP EDI                             ; 0055c909
    POP EBX                             ; 0055c90a
    RET                                 ; 0055c90b

