; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_math_c__shr_12_FUN_1000c680(uint *p)
;
; Parameters:
; uint *           Stack[0x4]:4   p
;
; XREF[2]:
;   crt_math.c___multtwelve_FUN_1000e8f0 at 1000eaa8
;   crt_stdio.c__i10_output_FUN_1000cf50 at 1000d1ff
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 1000c680
        ;   Label: crt_math.c__shr_12_FUN_1000c680
    PUSH EDI                            ; 1000c681
    MOV ESI,dword ptr [ESP + 0xc]       ; 1000c682
    MOV ECX,dword ptr [ESI + 0x8]       ; 1000c686
    MOV EAX,dword ptr [ESI + 0x4]       ; 1000c689
    MOV EDX,ECX                         ; 1000c68c
    MOV EDI,EAX                         ; 1000c68e
    SHR ECX,0x1                         ; 1000c690
    AND EDX,0x1                         ; 1000c693
    SHL EDX,0x1f                        ; 1000c696
    AND EDI,0x1                         ; 1000c699
    SHL EDI,0x1f                        ; 1000c69c
    MOV dword ptr [ESI + 0x8],ECX       ; 1000c69f
    SHR EAX,0x1                         ; 1000c6a2
    OR EAX,EDX                          ; 1000c6a5
    MOV dword ptr [ESI + 0x4],EAX       ; 1000c6a7
    MOV EAX,dword ptr [ESI]             ; 1000c6aa
    SHR EAX,0x1                         ; 1000c6ac
    OR EAX,EDI                          ; 1000c6af
    POP EDI                             ; 1000c6b1
    MOV dword ptr [ESI],EAX             ; 1000c6b2
    POP ESI                             ; 1000c6b4
    RET                                 ; 1000c6b5

