; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00417fec(void)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; *****************************************************************************

section .text

    PUSH EDX                            ; 00417fec
        ;   Label: FUN_00417fec
    ADD byte ptr [EBX + 0x24448bdb],CL  ; 00417fed
    ADD AL,0x8b                         ; 00417ff3
    PUSH ESP                            ; 00417ff5
    AND AL,0x8                          ; 00417ff6
    MOV ECX,dword ptr [EDX]             ; 00417ff8
    MOV dword ptr [EAX],ECX             ; 00417ffa
    MOV ECX,dword ptr [EDX + 0x4]       ; 00417ffc
    MOV dword ptr [EAX + 0x4],ECX       ; 00417fff
    MOV ECX,dword ptr [EDX + 0x8]       ; 00418002
    MOV dword ptr [EAX + 0x8],ECX       ; 00418005
    RET                                 ; 00418008

