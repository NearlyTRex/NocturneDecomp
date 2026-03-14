; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLodVert * __cdecl core_skeledit_cpp_CLodVert_copy_FUN_00599550(CLodVert *this_ptr,CLodVert *other)
;
; Parameters:
; CLodVert *       Stack[0x4]:4   this_ptr
; CLodVert *       Stack[0x8]:4   other
;
; *****************************************************************************

section .text

    NOP                                 ; 00599550
        ;   Label: core_skeledit.cpp_CLodVert_copy_FUN_00599550
    NOP                                 ; 00599551
    NOP                                 ; 00599552
    NOP                                 ; 00599553
    NOP                                 ; 00599554
    NOP                                 ; 00599555
    NOP                                 ; 00599556
    NOP                                 ; 00599557
    NOP                                 ; 00599558
    NOP                                 ; 00599559
    PUSH ESI                            ; 0059955a
    PUSH EDI                            ; 0059955b
    MOV ECX,dword ptr [ESP + 0xc]       ; 0059955c
    MOV EDX,dword ptr [ESP + 0x10]      ; 00599560
    MOV EAX,dword ptr [EDX]             ; 00599564
    MOV dword ptr [ECX],EAX             ; 00599566
    LEA EAX,[ECX + 0x4]                 ; 00599568
    LEA ECX,[EDX + 0x4]                 ; 0059956b
    MOV ECX,dword ptr [ECX]             ; 0059956e
    MOV dword ptr [EAX],ECX             ; 00599570
    LEA ECX,[EDX + 0x8]                 ; 00599572
    MOV ECX,dword ptr [ECX]             ; 00599575
    MOV dword ptr [EAX + 0x4],ECX       ; 00599577
    MOV ECX,0xfa                        ; 0059957a
    LEA EDI,[EAX + 0x8]                 ; 0059957f
    LEA ESI,[EDX + 0xc]                 ; 00599582
    MOVSD.REP ES:EDI,ESI                ; 00599585
    MOV ECX,dword ptr [EDX + 0x3f4]     ; 00599587
    MOV dword ptr [EAX + 0x3f0],ECX     ; 0059958d
    ADD EAX,0x4                         ; 00599593
    MOV ECX,dword ptr [EDX + 0x3f8]     ; 00599596
    LEA EDI,[EAX + 0x3f4]               ; 0059959c
    MOV dword ptr [EAX + 0x3f0],ECX     ; 005995a2
    MOV ECX,0x32                        ; 005995a8
    LEA ESI,[EDX + 0x3fc]               ; 005995ad
    SUB EAX,0x8                         ; 005995b3
    MOVSD.REP ES:EDI,ESI                ; 005995b6
    POP EDI                             ; 005995b8
    POP ESI                             ; 005995b9
    RET                                 ; 005995ba

