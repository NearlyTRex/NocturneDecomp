; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055c970(undefined4 *param_1)
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

    PUSH EBX                            ; 0055c970
        ;   Label: FUN_0055c970
    PUSH EDI                            ; 0055c971
    SUB ESP,0x30                        ; 0055c972
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0055c975
    MOV EDX,ESI                         ; 0055c979
    MOV EDI,ESI                         ; 0055c97b
    MOV EAX,dword ptr [ECX]             ; 0055c97d
    XOR EBX,EBX                         ; 0055c97f
    MOV ESI,ESP                         ; 0055c981
    MOV dword ptr [ESP],EAX             ; 0055c983
    MOV dword ptr [ESP + 0x4],EBX       ; 0055c986
    MOV dword ptr [ESP + 0x8],EBX       ; 0055c98a
    MOV dword ptr [ESP + 0xc],EBX       ; 0055c98e
    MOV dword ptr [ESP + 0x10],EBX      ; 0055c992
    MOV dword ptr [ESP + 0x18],EBX      ; 0055c996
    MOV dword ptr [ESP + 0x1c],EBX      ; 0055c99a
    MOV dword ptr [ESP + 0x20],EBX      ; 0055c99e
    MOV EAX,dword ptr [ECX + 0x4]       ; 0055c9a2
    MOV dword ptr [ESP + 0x24],EBX      ; 0055c9a5
    MOV dword ptr [ESP + 0x14],EAX      ; 0055c9a9
    MOV EAX,dword ptr [ECX + 0x8]       ; 0055c9ad
    MOV ECX,0xc                         ; 0055c9b0
    MOV dword ptr [ESP + 0x2c],EBX      ; 0055c9b5
    MOV dword ptr [ESP + 0x28],EAX      ; 0055c9b9
    MOVSD.REP ES:EDI,ESI                ; 0055c9bd
    MOV EAX,EDX                         ; 0055c9bf
    ADD ESP,0x30                        ; 0055c9c1
    POP EDI                             ; 0055c9c4
    POP EBX                             ; 0055c9c5
    RET                                 ; 0055c9c6

