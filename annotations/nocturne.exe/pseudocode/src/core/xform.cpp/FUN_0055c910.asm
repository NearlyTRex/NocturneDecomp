; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_0055c910(void)
;
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
; *****************************************************************************

section .text

    PUSH EDI                            ; 0055c910
        ;   Label: core_xform.cpp_FUN_0055c910
    SUB ESP,0x30                        ; 0055c911
    MOV EAX,ESI                         ; 0055c914
    MOV EDX,dword ptr [ESP + 0x38]      ; 0055c916
    MOV EDI,ESI                         ; 0055c91a
    XOR ECX,ECX                         ; 0055c91c
    MOV ESI,ESP                         ; 0055c91e
    MOV dword ptr [ESP],EDX             ; 0055c920
    MOV dword ptr [ESP + 0x18],ECX      ; 0055c923
    MOV dword ptr [ESP + 0x1c],ECX      ; 0055c927
    MOV dword ptr [ESP + 0x20],ECX      ; 0055c92b
    MOV dword ptr [ESP + 0x24],ECX      ; 0055c92f
    XOR EDX,EDX                         ; 0055c933
    MOV dword ptr [ESP + 0x2c],ECX      ; 0055c935
    MOV dword ptr [ESP + 0x4],EDX       ; 0055c939
    MOV dword ptr [ESP + 0x8],EDX       ; 0055c93d
    MOV dword ptr [ESP + 0xc],EDX       ; 0055c941
    MOV dword ptr [ESP + 0x10],EDX      ; 0055c945
    MOV EDX,dword ptr [ESP + 0x38]      ; 0055c949
    MOV ECX,0xc                         ; 0055c94d
    MOV dword ptr [ESP + 0x14],EDX      ; 0055c952
    MOV dword ptr [ESP + 0x28],EDX      ; 0055c956
    MOVSD.REP ES:EDI,ESI                ; 0055c95a
    ADD ESP,0x30                        ; 0055c95c
    POP EDI                             ; 0055c95f
    RET                                 ; 0055c960

