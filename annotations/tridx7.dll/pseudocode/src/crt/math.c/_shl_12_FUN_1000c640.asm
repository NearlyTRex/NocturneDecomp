; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_math_c__shl_12_FUN_1000c640(uint *p)
;
; Parameters:
; uint *           Stack[0x4]:4   p
;
; XREF[3]:
;   crt_math.c___multtwelve_FUN_1000e8f0 at 1000ea61
;   crt_math.c__mtold12_FUN_1000c6c0 at 1000c704
;   crt_stdio.c__i10_output_FUN_1000cf50 at 1000d1e1
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 1000c640
        ;   Label: crt_math.c__shl_12_FUN_1000c640
    PUSH ESI                            ; 1000c644
    PUSH EDI                            ; 1000c645
    MOV EAX,dword ptr [EDX]             ; 1000c646
    MOV EDI,EAX                         ; 1000c648
    MOV ECX,dword ptr [EDX + 0x4]       ; 1000c64a
    AND EDI,0x80000000                  ; 1000c64d
    MOV ESI,ECX                         ; 1000c653
    SHR EDI,0x1f                        ; 1000c655
    AND ESI,0x80000000                  ; 1000c658
    SHR ESI,0x1f                        ; 1000c65e
    ADD EAX,EAX                         ; 1000c661
    MOV dword ptr [EDX],EAX             ; 1000c663
    LEA EAX,[ECX*0x2 + 0x0]             ; 1000c665
    OR EAX,EDI                          ; 1000c66c
    POP EDI                             ; 1000c66e
    MOV dword ptr [EDX + 0x4],EAX       ; 1000c66f
    MOV EAX,dword ptr [EDX + 0x8]       ; 1000c672
    ADD EAX,EAX                         ; 1000c675
    OR EAX,ESI                          ; 1000c677
    POP ESI                             ; 1000c679
    MOV dword ptr [EDX + 0x8],EAX       ; 1000c67a
    RET                                 ; 1000c67d

