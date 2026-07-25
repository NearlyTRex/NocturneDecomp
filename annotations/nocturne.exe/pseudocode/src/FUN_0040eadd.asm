; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040eadd(void)
;
; Parameters:
; undefined4       Stack[0x0]:4   local_res0
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; *****************************************************************************

section .text

    PUSH ESP                            ; 0040eadd
        ;   Label: FUN_0040eadd
    AND AL,byte ptr [EAX]               ; 0040eade
    PUSH ESI                            ; 0040eae0
    PUSH EDI                            ; 0040eae1
    MOV EDI,dword ptr [ESP + 0xc]       ; 0040eae2
    MOV ECX,dword ptr [EDI + 0xc]       ; 0040eae6
    IMUL ECX,dword ptr [EDI + 0x10]     ; 0040eae9
    MOV ESI,dword ptr [EDI]             ; 0040eaed
    MOV EDI,dword ptr [EDI + 0x4]       ; 0040eaef
    PUSH EDI                            ; 0040eaf2
    MOV EAX,ECX                         ; 0040eaf3
    SHR ECX,0x2                         ; 0040eaf5
    MOVSD.REP ES:EDI,ESI                ; 0040eaf8
    MOV CL,AL                           ; 0040eafa
    AND CL,0x3                          ; 0040eafc
    MOVSB.REP ES:EDI,ESI                ; 0040eaff
    POP EDI                             ; 0040eb01
    POP EDI                             ; 0040eb02
    POP ESI                             ; 0040eb03
    RET                                 ; 0040eb04

